# #!/usr/bin/env python3
# """
# generate_io_stubs.py
# --------------------
# Create C++ reset / drive helpers and a Verilator test bench
# for a given SystemVerilog module.

# Usage
# -----
#     ./generate_io_stubs.py <module_name> [--rtl-dir DIR] [--out OUTDIR]

# Example
# -------
#     ./generate_io_stubs.py priority_encoder --rtl-dir rtl
# """

# from __future__ import annotations
# import argparse
# import re
# from pathlib import Path
# from typing import List, Tuple

# # --------------------------------------------------------------------------- #
# # Regex patterns
# # --------------------------------------------------------------------------- #
# MOD_RE = re.compile(
#     r"module\s+(\w+)\s*(#\([^;]*?\))?\s*\((.*?)\);\s*(.*?)endmodule",
#     re.DOTALL | re.MULTILINE,
# )
# IN_RE = re.compile(r"input\s+logic\s*(\[[^\]]+\])?\s*(\w+)")

# # --------------------------------------------------------------------------- #
# # Helper functions
# # --------------------------------------------------------------------------- #
# def find_sv_file(module: str, rtl_dir: Path) -> Path:
#     """Locate <module>.sv inside rtl_dir (exact match or deep scan)."""
#     candidate = rtl_dir / f"{module}.sv"
#     if candidate.exists():
#         return candidate
#     for p in rtl_dir.rglob("*.sv"):
#         if p.stem == module:
#             return p
#     raise FileNotFoundError(f"SystemVerilog file for '{module}' not found in {rtl_dir}")


# def extract_inputs(port_block: str) -> List[Tuple[str, str]]:
#     """Return [(name, width)] for every `input logic … name`."""
#     return [(n, w.strip() if w else "") for w, n in IN_RE.findall(port_block)]


# def cxx_type(width: str) -> str:
#     """Map SV widths to std::uint*_t."""
#     if not width:
#         return "std::uint8_t"
#     if m := re.match(r"\[(\d+)\s*:\s*0\]", width):
#         bits = int(m.group(1)) + 1
#         return (
#             "std::uint8_t" if bits <= 8 else
#             "std::uint16_t" if bits <= 16 else
#             "std::uint32_t" if bits <= 32 else
#             "std::uint64_t" if bits <= 64 else
#             f"std::uint{bits}_t"
#         )
#     return "std::uint32_t"

# # --------------------------------------------------------------------------- #
# # Template strings
# # --------------------------------------------------------------------------- #
# HDR_TMPL = """\
# #ifndef {GUARD}
# #define {GUARD}

# #include <cstdint>

# void reset_input_{M}();
# void drive_input_{M}({ARGS});

# #endif
# """

# CPP_TMPL = """\
# #include "{M}_input.hpp"
# #include <iostream>

# {DECLS}

# void reset_input_{M}() {{
# {RESET}
# }}

# void drive_input_{M}({ARGS}) {{
# {ASSIGN}
# }}
# """

# TB_TMPL = r'''
# #include "V{M}.h"
# #include "verilated.h"
# #include "verilated_fst_c.h"
# #include "{M}_input.hpp"

# static vluint64_t main_time = 0;
# double sc_time_stamp() {{ return main_time; }}
# V{M} *top = new V{M};
# VerilatedFstC *tfp = new VerilatedFstC;
# static void tick(V{M} *top, VerilatedFstC *tfp) {{
#     top->eval(); tfp->dump(main_time++);
#     top->CLK ^= 1;
#     top->eval(); tfp->dump(main_time++);
# }}

# int main(int argc, char **argv) {{
#     Verilated::commandArgs(argc, argv);
    
#     Verilated::traceEverOn(true);
    
#     top->trace(tfp, 99);
#     tfp->open("{M}.vcd");

#     // Reset phase
#     reset_input_{M}();
#     tick(top, tfp);

#     // Example stimulus
#     drive_input_{M}({DUMMY});
#     for (int i = 0; i < 20; ++i) tick(top, tfp);

#     tfp->close();
#     delete top;
#     return 0;
# }}
# '''

# # --------------------------------------------------------------------------- #
# # Writers
# # --------------------------------------------------------------------------- #
# def write_header(mod: str, ins: List[Tuple[str, str]], path: Path) -> None:
#     args = ", ".join(f"{cxx_type(w)} {n}" for n, w in ins)
#     path.write_text(HDR_TMPL.format(GUARD=f"{mod.upper()}_INPUT_HPP", M=mod, ARGS=args))


# def write_cpp(mod: str, ins: List[Tuple[str, str]], path: Path) -> None:
#     decls  = "\n".join(f"{cxx_type(w)} {n};" for n, w in ins)
#     reset  = "\n".join(f"    {n} = 0;" for n, _ in ins)
#     assign = "\n".join(f"    {n} = {n}_in;" for n, _ in ins)
#     args   = ", ".join(f"{cxx_type(w)} {n}_in" for n, w in ins)
#     path.write_text(CPP_TMPL.format(M=mod, DECLS=decls,
#                                     RESET=reset, ASSIGN=assign, ARGS=args))


# def write_tb(mod: str, ins: List[Tuple[str, str]], path: Path) -> None:
#     dummy = ", ".join("0" for _ in ins) or "0"
#     path.write_text(TB_TMPL.format(M=mod, DUMMY=dummy))

# # --------------------------------------------------------------------------- #
# # Main CLI logic
# # --------------------------------------------------------------------------- #
# def main() -> None:
#     ap = argparse.ArgumentParser(description="Emit C++ reset/drive helpers + Verilator TB.")
#     ap.add_argument("module", help="top-level RTL module name")
#     ap.add_argument("--rtl-dir", default=".", help="directory containing .sv files")
#     ap.add_argument("--out", default="generated", help="output base directory")
#     args = ap.parse_args()

#     rtl_dir = Path(args.rtl_dir).expanduser().resolve()
#     sv_path = find_sv_file(args.module, rtl_dir)
#     sv_code = sv_path.read_text()

#     for mod, _params, ports, _body in MOD_RE.findall(sv_code):
#         print(f"hoho {mod}")
    
#     # locate module block
#     for mod, _params, ports, _body in MOD_RE.findall(sv_code):
#         print(f"hoho {mod}")
#         if mod == args.module:
#             inputs = extract_inputs(ports)
#             if not inputs:
#                 raise RuntimeError(f"No `input logic` ports inside module '{mod}'")
#             break
        
#     else:
#         raise RuntimeError(f"Module '{args.module}' not found in {sv_path}")

#     # prepare output directory
#     outdir = (Path(args.out) / args.module).resolve()
#     outdir.mkdir(parents=True, exist_ok=True)

#     write_header(args.module, inputs, outdir / f"{args.module}_input.hpp")
#     write_cpp(args.module, inputs, outdir / f"{args.module}_input.cpp")
#     write_tb(args.module, inputs, outdir / f"{args.module}_tb.cpp")

#     # friendly success message
#     try:
#         display = outdir.relative_to(Path.cwd())
#     except ValueError:
#         display = outdir
#     print(f"✓ Generated C++ stubs & TB in {display}")

# if __name__ == "__main__":
#     main()


#!/usr/bin/env python3
"""
generate_io_stubs.py  (multi-module edition)
--------------------------------------------
Emit C++ reset/drive helpers and a Verilator test-bench
that instantiates *all* modules listed on the command line.

Usage
-----
    ./generate_io_stubs.py <modA> [modB modC …]
           [--rtl-dir DIR] [--out OUTDIR]

The first name in <mods…> is treated as the "primary" module only
for naming output folders and the default VCD file; otherwise all
instances are equal.

© 2025  – MIT-licensed, go wild.
"""

from __future__ import annotations
import argparse, re
from pathlib import Path
from typing import List, Tuple

# -----------------------  regex helpers ----------------------- #
MOD_RE = re.compile(
    r"module\s+(\w+)\s*(#\([^;]*?\))?\s*\((.*?)\);\s*(.*?)endmodule",
    re.DOTALL | re.MULTILINE,
)
IN_RE  = re.compile(r"input\s+logic\s*(\[[^\]]+\])?\s*(\w+)")

def find_sv_file(module: str, rtl_dir: Path) -> Path:
    cand = rtl_dir / f"{module}.sv"
    if cand.exists(): return cand
    for p in rtl_dir.rglob("*.sv"):
        if p.stem == module: return p
    raise FileNotFoundError(f"'{module}.sv' not found under {rtl_dir}")

def extract_inputs(port_block: str) -> List[Tuple[str,str]]:
    return [(n, (w or "").strip()) for w, n in IN_RE.findall(port_block)]

def cxx_type(width: str) -> str:
    if not width: return "std::uint8_t"
    m = re.match(r"\[(\d+)\s*:\s*0\]", width)
    bits = int(m.group(1))+1 if m else 8
    return (
        "std::uint8_t"  if bits<=8  else
        "std::uint16_t" if bits<=16 else
        "std::uint32_t" if bits<=32 else
        "std::uint64_t"
    )

# -----------------------  templates  -------------------------- #
HDR_TMPL = """\
#ifndef {GUARD}
#define {GUARD}

#include <cstdint>
#include <iostream>

void reset_input_{M}();
void drive_input_{M}({ARGS});

#endif
"""

CPP_TMPL = """\
#include "{M}_input.hpp"

{DECLS}

void reset_input_{M}() {{
{RESET}
}}

void drive_input_{M}({ARGS}) {{
{ASSIGN}
}}
"""

TB_TMPL = r'''
#include <verilated.h>
#include <verilated_fst_c.h>

{INC_MODELS}
{INC_HELPERS}

static vluint64_t main_time = 0;
double sc_time_stamp() {{ return main_time; }}

// pointers to every verilated model
{MODEL_PTRS}

static void tick_all() {{
    // posedge
    {EVAL_ALL}
    for (auto& f : {{ {CLK_PTRS} }}) *f ^= 1;
    // negedge
    {EVAL_ALL}
    ++main_time;
}}

int main(int argc,char** argv){{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // construct models + trace handles
    {ALLOC_MODELS}

    // Reset phase
    {CALL_RESETS}
    tick_all();

    // Example stimulus – all zeros, change as needed
    {CALL_DRIVES}

    for(int i=0;i<20;++i) tick_all();

    // clean-up
    {CLOSE_TRACES}
    return 0;
}}
'''

# -----------------------  writing helpers --------------------- #
def write_header(mod:str, ins, path:Path):
    args = ", ".join(f"{cxx_type(w)} {n}" for n,w in ins) or "void"
    path.write_text(HDR_TMPL.format(GUARD=f"{mod.upper()}_INPUT_HPP",
                                    M=mod, ARGS=args))

def write_cpp(mod:str, ins, path:Path):
    decls  = "\n".join(f"{cxx_type(w)} {n};" for n,w in ins)
    reset  = "\n".join(f"    {n}=0;" for n,_ in ins) or "    (void)0;"
    assign = "\n".join(f"    {n}={n}_in;" for n,_ in ins) or "    (void)0;"
    args   = ", ".join(f"{cxx_type(w)} {n}_in" for n,w in ins) or "void"
    path.write_text(CPP_TMPL.format(M=mod,DECLS=decls,
                                    RESET=reset,ASSIGN=assign,ARGS=args))

def write_tb(mods:list[str], inputs:dict[str,list], path:Path):
    inc_models  = "\n".join(f'#include "V{m}.h"' for m in mods)
    inc_helpers = "\n".join(f'#include "{m}_input.hpp"' for m in mods)

    model_ptrs  = "\n".join(f"V{m} *{m} = new V{m};" for m in mods)
    clk_ptrs    = ", ".join(f"&{m}->CLK" for m in mods)

    eval_line   = "\n    ".join(f"{m}->eval(); tfp_{m}->dump(main_time);" for m in mods)

    allocs = []
    closes = []
    for m in mods:
        allocs.append( f'auto *tfp_{m}=new VerilatedFstC; {m}->trace(tfp_{m},99); tfp_{m}->open("{m}.vcd");' )
        closes.append( f'tfp_{m}->close(); delete {m}; delete tfp_{m};' )
    alloc_models = "\n    ".join(allocs)
    close_traces = "\n    ".join(closes)

    call_resets  = "\n    ".join(f"reset_input_{m}();"  for m in mods)
    call_drives  = "\n    ".join(f"drive_input_{m}({', '.join('0' for _ in inputs[m])});" for m in mods)

    path.write_text(TB_TMPL.format(
        INC_MODELS = inc_models,
        INC_HELPERS= inc_helpers,
        MODEL_PTRS = model_ptrs,
        CLK_PTRS   = clk_ptrs,
        EVAL_ALL   = eval_line,
        ALLOC_MODELS = alloc_models,
        CALL_RESETS  = call_resets,
        CALL_DRIVES  = call_drives,
        CLOSE_TRACES = close_traces
    ))

# -----------------------  main  ----------------------------- #
def main()->None:
    ap = argparse.ArgumentParser(
        description="Generate C++ reset/drive stubs + multi-module Verilator TB.")
    ap.add_argument("modules", nargs="+", help="one or more RTL module names")
    ap.add_argument("--rtl-dir", default=".", help="directory containing .sv")
    ap.add_argument("--out", default="generated", help="output base dir")
    args = ap.parse_args()

    rtl_dir = Path(args.rtl_dir).expanduser().resolve()
    outdir  = Path(args.out).expanduser().resolve() / args.modules[0]
    outdir.mkdir(parents=True, exist_ok=True)

    inputs_by_mod : dict[str,list] = {}

    for mod in args.modules:
        sv_file = find_sv_file(mod, rtl_dir)
        sv_text = sv_file.read_text()
        for m,_p,ports,_ in MOD_RE.findall(sv_text):
            if m==mod:
                ins = extract_inputs(ports)
                inputs_by_mod[m] = ins
                write_header(m, ins, outdir / f"{m}_input.hpp")
                write_cpp   (m, ins, outdir / f"{m}_input.cpp")
                break
        else:
            raise RuntimeError(f"Module '{mod}' not found in {sv_file}")

    write_tb(args.modules, inputs_by_mod, outdir / "multi_tb.cpp")

    try: display = outdir.relative_to(Path.cwd())
    except ValueError: display = outdir
    print(f"✓ Generated stubs & multi-module TB in {display}")

if __name__ == "__main__":
    main()
