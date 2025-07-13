#include "Vcrc32_parallel_64bit.h"
#include "verilated.h"
#include "verilated_fst_c.h"


static uint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick (Vcrc32_parallel_64bit* top, VerilatedFstC* tfp) {
    for (int k = 0; k < 2; k++) {
        top -> eval();
        tfp->dump(main_time);
        top -> CLK ^= 1;
        ++main_time;
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vcrc32_parallel_64bit* top = new Vcrc32_parallel_64bit;

    Verilated::traceEverOn(true);
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("crc32_parallel_64bit.vcd");

    // Reset
    //top->nRST = 0;
    //top->CLK = 0;
    for (int i = 0; i < 4; ++i) {
        top->eval();
        tfp->dump(main_time++);
        top->CLK ^= 1;
    }
    top->nRST = 1;

    // Simulate here
    

    tfp->close();
    delete top;
    return 0;
}
