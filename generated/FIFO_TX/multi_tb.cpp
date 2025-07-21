
#include <verilated.h>
#include <verilated_fst_c.h>

#include "VFIFO_TX.h"
#include "VTCP.h"
#include "FIFO_TX_input.hpp"
#include "TCP_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// pointers to every verilated model
VFIFO_TX *FIFO_TX = new VFIFO_TX;
VTCP *TCP = new VTCP;

static void tick_all() {
    // posedge
    FIFO_TX->eval(); tfp_FIFO_TX->dump(main_time);
    TCP->eval(); tfp_TCP->dump(main_time);
    for (auto& f : { &FIFO_TX->CLK, &TCP->CLK }) *f ^= 1;
    // negedge
    FIFO_TX->eval(); tfp_FIFO_TX->dump(main_time);
    TCP->eval(); tfp_TCP->dump(main_time);
    ++main_time;
}

int main(int argc,char** argv){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // construct models + trace handles
    auto *tfp_FIFO_TX=new VerilatedFstC; FIFO_TX->trace(tfp_FIFO_TX,99); tfp_FIFO_TX->open("FIFO_TX.vcd");
    auto *tfp_TCP=new VerilatedFstC; TCP->trace(tfp_TCP,99); tfp_TCP->open("TCP.vcd");

    // Reset phase
    reset_input_FIFO_TX();
    reset_input_TCP();
    tick_all();

    // Example stimulus – all zeros, change as needed
    drive_input_FIFO_TX(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    drive_input_TCP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    for(int i=0;i<20;++i) tick_all();

    // clean-up
    tfp_FIFO_TX->close(); delete FIFO_TX; delete tfp_FIFO_TX;
    tfp_TCP->close(); delete TCP; delete tfp_TCP;
    return 0;
}
