
#include "VUDP_tx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "UDP_tx_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VUDP_tx *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VUDP_tx *top = new VUDP_tx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("UDP_tx.fst");

    // Reset phase
    reset_input_UDP_tx();
    tick(top, tfp);

    // Example stimulus
    drive_input_UDP_tx(0, 0, 0, 0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
