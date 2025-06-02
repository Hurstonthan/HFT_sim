#include "VTCP_tx.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


static uint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick (VTCP_tx* top, VerilatedVcdC* tfp) {
    for (int k = 0; k < 2; k++) {
        top -> eval();
        tfp->dump(main_time);
        top -> CLK ^= 1;
        ++main_time;
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VTCP_tx* top = new VTCP_tx;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("build/TCP_tx.vcd");

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
