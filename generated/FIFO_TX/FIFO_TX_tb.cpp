
#include "VFIFO_TX.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "FIFO_TX_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }
VFIFO_TX *top = new VFIFO_TX;
VerilatedFstC *tfp = new VerilatedFstC;
static void tick(VFIFO_TX *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);
    
    top->trace(tfp, 99);
    tfp->open("FIFO_TX.vcd");

    // Reset phase
    reset_input_FIFO_TX();
    tick(top, tfp);

    // Example stimulus
    drive_input_FIFO_TX(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
