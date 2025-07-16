
#include "VMAC_rx_haha.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "MAC_rx_haha_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VMAC_rx_haha *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VMAC_rx_haha *top = new VMAC_rx_haha;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("MAC_rx_haha.vcd");

    // Reset phase
    reset_input_MAC_rx_haha();
    tick(top, tfp);

    // Example stimulus
    drive_input_MAC_rx_haha(0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
