
#include <verilated.h>
#include <verilated_fst_c.h>

#include "VTCP.h"
#include "VFIFO_TX.h"
#include "Vpayload_FIFO.h"
#include "TCP_input.hpp"
#include "FIFO_TX_input.hpp"
#include "payload_FIFO_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// pointers to every verilated model
VTCP *TCP = new VTCP;
VFIFO_TX *FIFO_TX = new VFIFO_TX;
Vpayload_FIFO *payload_FIFO = new Vpayload_FIFO;

static void tick_all() {
    // posedge
    TCP->eval(); tfp_TCP->dump(main_time);
    FIFO_TX->eval(); tfp_FIFO_TX->dump(main_time);
    payload_FIFO->eval(); tfp_payload_FIFO->dump(main_time);
    for (auto& f : { &TCP->CLK, &FIFO_TX->CLK, &payload_FIFO->CLK }) *f ^= 1;
    // negedge
    TCP->eval(); tfp_TCP->dump(main_time);
    FIFO_TX->eval(); tfp_FIFO_TX->dump(main_time);
    payload_FIFO->eval(); tfp_payload_FIFO->dump(main_time);
    ++main_time;
}

int main(int argc,char** argv){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // construct models + trace handles
    auto *tfp_TCP=new VerilatedFstC; TCP->trace(tfp_TCP,99); tfp_TCP->open("TCP.vcd");
    auto *tfp_FIFO_TX=new VerilatedFstC; FIFO_TX->trace(tfp_FIFO_TX,99); tfp_FIFO_TX->open("FIFO_TX.vcd");
    auto *tfp_payload_FIFO=new VerilatedFstC; payload_FIFO->trace(tfp_payload_FIFO,99); tfp_payload_FIFO->open("payload_FIFO.vcd");

    // Reset phase
    reset_input_TCP();
    reset_input_FIFO_TX();
    reset_input_payload_FIFO();
    tick_all();

    // Example stimulus – all zeros, change as needed
    drive_input_TCP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    drive_input_FIFO_TX(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    drive_input_payload_FIFO(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    for(int i=0;i<20;++i) tick_all();

    // clean-up
    tfp_TCP->close(); delete TCP; delete tfp_TCP;
    tfp_FIFO_TX->close(); delete FIFO_TX; delete tfp_FIFO_TX;
    tfp_payload_FIFO->close(); delete payload_FIFO; delete tfp_payload_FIFO;
    return 0;
}
