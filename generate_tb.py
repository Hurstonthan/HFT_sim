import sys
import os

TEMPLATE = """#include "V{modulename}.h"
#include "verilated.h"
#include "verilated_fst_c.h"


static uint64_t main_time = 0;
double sc_time_stamp() {{ return main_time; }}

void tick (V{modulename}* top, VerilatedFstC* tfp) {{
    for (int k = 0; k < 2; k++) {{
        top -> eval();
        tfp->dump(main_time);
        top -> CLK ^= 1;
        ++main_time;
    }}
}}

int main(int argc, char **argv) {{
    Verilated::commandArgs(argc, argv);
    V{modulename}* top = new V{modulename};

    Verilated::traceEverOn(true);
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("build/{modulename}.vcd");

    // Reset
    //top->nRST = 0;
    //top->CLK = 0;
    for (int i = 0; i < 4; ++i) {{
        top->eval();
        tfp->dump(main_time++);
        top->CLK ^= 1;
    }}
    top->nRST = 1;

    // Simulate here
    

    tfp->close();
    delete top;
    return 0;
}}
"""

def generate_testbench(modulename):
    filename = f"./tb/{modulename}_tb.cpp"
    with open(filename, "w") as f:
        f.write(TEMPLATE.format(modulename=modulename))
    print(f"Generated testbench: {filename}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python generate_tb.py <ModuleName>")
        sys.exit(1)
    generate_testbench(sys.argv[1])
