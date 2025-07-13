#!/usr/bin/env python3
"""
generate_io_stubs.py
--------------------
Create C++ reset / drive helpers and a Verilator test bench
for a given SystemVerilog module.

Usage
-----
    ./generate_io_stubs.py <module_name> [--rtl-dir DIR] [--out OUTDIR]

Example
-------
    ./generate_io_stubs.py priority_encoder --rtl-dir rtl
"""

from __future__ import annotations
import argparse
import re
from pathlib import Path
from typing import List, Tuple

# --------------------------------------------------------------------------- #
# Regex patterns
# --------------------------------------------------------------------------- #
MOD_RE = re.compile(
    r"module\s+(\w+)\s*(#\([^;]*?\))?\s*\((.*?)\);\s*(.*?)endmodule",
    re.DOTALL | re.MULTILINE,
)
IN_RE = re.compile(r"input\s+logic\s*(\[[^\]]+\])?\s*(\w+)")

# --------------------------------------------------------------------------- #
# Helper functions
# --------------------------------------------------------------------------- #
def find_sv_file(module: str, rtl_dir: Path) -> Path:
    """Locate <module>.sv inside rtl_dir (exact match or deep scan)."""
    candidate = rtl_dir / f"{module}.sv"
    if candidate.exists():
        return candidate
    for p in rtl_dir.rglob("*.sv"):
        if p.stem == module:
            return p
    raise FileNotFoundError(f"SystemVerilog file for '{module}' not found in {rtl_dir}")


def extract_inputs(port_block: str) -> List[Tuple[str, str]]:
    """Return [(name, width)] for every `input logic … name`."""
    return [(n, w.strip() if w else "") for w, n in IN_RE.findall(port_block)]


def cxx_type(width: str) -> str:
    """Map SV widths to std::uint*_t."""
    if not width:
        return "std::uint8_t"
    if m := re.match(r"\[(\d+)\s*:\s*0\]", width):
        bits = int(m.group(1)) + 1
        return (
            "std::uint8_t" if bits <= 8 else
            "std::uint16_t" if bits <= 16 else
            "std::uint32_t" if bits <= 32 else
            "std::uint64_t" if bits <= 64 else
            f"std::uint{bits}_t"
        )
    return "std::uint32_t"

# --------------------------------------------------------------------------- #
# Template strings
# --------------------------------------------------------------------------- #
HDR_TMPL = """\
#ifndef {GUARD}
#define {GUARD}

#include <cstdint>

void reset_input_{M}();
void drive_input_{M}({ARGS});

#endif
"""

CPP_TMPL = """\
#include "{M}_input.hpp"
#include <iostream>

{DECLS}

void reset_input_{M}() {{
{RESET}
}}

void drive_input_{M}({ARGS}) {{
{ASSIGN}
}}
"""

TB_TMPL = r'''
#include "V{M}.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "{M}_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() {{ return main_time; }}

static void tick(V{M} *top, VerilatedFstC *tfp) {{
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}}

int main(int argc, char **argv) {{
    Verilated::commandArgs(argc, argv);
    V{M} *top = new V{M};

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("{M}.vcd");

    // Reset phase
    reset_input_{M}();
    tick(top, tfp);

    // Example stimulus
    drive_input_{M}({DUMMY});
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}}
'''

# --------------------------------------------------------------------------- #
# Writers
# --------------------------------------------------------------------------- #
def write_header(mod: str, ins: List[Tuple[str, str]], path: Path) -> None:
    args = ", ".join(f"{cxx_type(w)} {n}" for n, w in ins)
    path.write_text(HDR_TMPL.format(GUARD=f"{mod.upper()}_INPUT_HPP", M=mod, ARGS=args))


def write_cpp(mod: str, ins: List[Tuple[str, str]], path: Path) -> None:
    decls  = "\n".join(f"{cxx_type(w)} {n};" for n, w in ins)
    reset  = "\n".join(f"    {n} = 0;" for n, _ in ins)
    assign = "\n".join(f"    {n} = {n}_in;" for n, _ in ins)
    args   = ", ".join(f"{cxx_type(w)} {n}_in" for n, w in ins)
    path.write_text(CPP_TMPL.format(M=mod, DECLS=decls,
                                    RESET=reset, ASSIGN=assign, ARGS=args))


def write_tb(mod: str, ins: List[Tuple[str, str]], path: Path) -> None:
    dummy = ", ".join("0" for _ in ins) or "0"
    path.write_text(TB_TMPL.format(M=mod, DUMMY=dummy))

# --------------------------------------------------------------------------- #
# Main CLI logic
# --------------------------------------------------------------------------- #
def main() -> None:
    ap = argparse.ArgumentParser(description="Emit C++ reset/drive helpers + Verilator TB.")
    ap.add_argument("module", help="top-level RTL module name")
    ap.add_argument("--rtl-dir", default=".", help="directory containing .sv files")
    ap.add_argument("--out", default="generated", help="output base directory")
    args = ap.parse_args()

    rtl_dir = Path(args.rtl_dir).expanduser().resolve()
    sv_path = find_sv_file(args.module, rtl_dir)
    sv_code = sv_path.read_text()

    # locate module block
    for mod, _params, ports, _body in MOD_RE.findall(sv_code):
        if mod == args.module:
            inputs = extract_inputs(ports)
            if not inputs:
                raise RuntimeError(f"No `input logic` ports inside module '{mod}'")
            break
    else:
        raise RuntimeError(f"Module '{args.module}' not found in {sv_path}")

    # prepare output directory
    outdir = (Path(args.out) / args.module).resolve()
    outdir.mkdir(parents=True, exist_ok=True)

    write_header(args.module, inputs, outdir / f"{args.module}_input.hpp")
    write_cpp(args.module, inputs, outdir / f"{args.module}_input.cpp")
    write_tb(args.module, inputs, outdir / f"{args.module}_tb.cpp")

    # friendly success message
    try:
        display = outdir.relative_to(Path.cwd())
    except ValueError:
        display = outdir
    print(f"✓ Generated C++ stubs & TB in {display}")

if __name__ == "__main__":
    main()
