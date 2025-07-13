
#include "Vchksum_tcp_pl.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "chksum_tcp_pl_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vchksum_tcp_pl *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vchksum_tcp_pl *top = new Vchksum_tcp_pl;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("chksum_tcp_pl.vcd");

    // Reset phase
    reset_input_chksum_tcp_pl();
    tick(top, tfp);

    // Example stimulus
    drive_input_chksum_tcp_pl(0, 0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
