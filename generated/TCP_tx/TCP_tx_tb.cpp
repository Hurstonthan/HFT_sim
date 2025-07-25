
#include "VTCP_tx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "TCP_tx_input.hpp"
#include <cstdint>
#include <iostream>
#include <vector>

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }
VTCP_tx *top = new VTCP_tx;
VerilatedFstC *tfp = new VerilatedFstC;
static void tick(VTCP_tx *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);
    
    top->trace(tfp, 99);
    tfp->open("TCP_tx.vcd");

    // Reset phase
    reset_input_TCP_tx();
    tick(top, tfp);

    // Example stimulus
    drive_input_TCP_tx(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
