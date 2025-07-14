
#include "VUDP_rx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "UDP_rx_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VUDP_rx *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VUDP_rx *top = new VUDP_rx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("UDP_rx.vcd");

    // Reset phase
    reset_input_UDP_rx();
    tick(top, tfp);

    // Example stimulus
    drive_input_UDP_rx(0, 0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
