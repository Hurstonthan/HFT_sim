
#include "Vcrc32_parallel_64bit.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "crc32_parallel_64bit_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vcrc32_parallel_64bit *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vcrc32_parallel_64bit *top = new Vcrc32_parallel_64bit;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("crc32_parallel_64bit.vcd");

    // Reset phase
    reset_input_crc32_parallel_64bit();
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);

    // Example stimulus
    drive_input_crc32_parallel_64bit(0, 0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
