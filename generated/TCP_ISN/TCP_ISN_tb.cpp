
#include "VTCP_ISN.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "TCP_ISN_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VTCP_ISN *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VTCP_ISN *top = new VTCP_ISN;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("TCP_ISN.vcd");

    // Reset phase
    reset_input_TCP_ISN();
    tick(top, tfp);

    // Example stimulus
    drive_input_TCP_ISN(0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
