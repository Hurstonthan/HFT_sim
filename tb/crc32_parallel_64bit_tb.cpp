#include "Vcrc32_parallel_64bit.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static uint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vcrc32_parallel_64bit* top = new Vcrc32_parallel_64bit;

    /* -------- trace setup -------- */

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("./crc32_parallel_64bit.vcd");

    /* ----------------------------- */

    /* reset */
    top->nRST = 0;
    top->crc_init = 0;
    top->valid = 0;
    top->CLK = 0;

    for (int i = 0; i < 4; ++i) {
        top->eval();

        tfp->dump(main_time);

        top->CLK ^= 1; ++main_time;
    }
    top->nRST = 1;

    /* stimulus */
    uint64_t data_vec[4] = {
        0x0123456789ABCDEFULL,
        0xABCDDDEECCDDFFFF,
        0x0000000000000000ULL,
        0xFFFFFFFFFFFFFFFFULL
    };
    for (int k = 0; k < 4; ++k) {
        top->data_in = data_vec[k];
        top->valid   = 1;

        for (int ph = 0; ph < 2; ++ph) {
            top->CLK ^= 1; top->eval();

            tfp->dump(main_time);

            ++main_time;
        }

        top->valid = 0;
        for (int ph = 0; ph < 2; ++ph) {
            top->CLK ^= 1; top->eval();
#if VM_TRACE
            tfp->dump(main_time);
#endif
            ++main_time;
        }

        printf("Word %d -> CRC = 0x%08X\n", k, top->crc_out);
    }

    /* idle tail */
    for (int i = 0; i < 4; ++i) {
        top->CLK ^= 1; top->eval();

        tfp->dump(main_time);
        ++main_time;
    }


    tfp->close();
    delete tfp;

    delete top;
    return 0;
}
