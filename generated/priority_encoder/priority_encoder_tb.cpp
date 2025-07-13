
#include "Vpriority_encoder.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "priority_encoder_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vpriority_encoder *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vpriority_encoder *top = new Vpriority_encoder;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("priority_encoder.vcd");

    // Reset phase
    reset_input_priority_encoder();
    tick(top, tfp);

    // Example stimulus
    drive_input_priority_encoder(0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
