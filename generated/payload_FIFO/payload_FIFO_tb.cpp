
#include "Vpayload_FIFO.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "payload_FIFO_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }
Vpayload_FIFO *top = new Vpayload_FIFO;
VerilatedFstC *tfp = new VerilatedFstC;
static void tick() {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}

//Handshake to update the case
void handshake () {
    top -> handshake_done = 1;
    top -> seq_rcv_start = int32_t(50);
    tick();
    top -> handshake_done = 0;
}

void writing_data () {
    top -> wr_FIFO_en = 1;
    top -> nw_segment = 1;
    for (int64_t i = 0; i < 4; i++) {
        top -> axis_data_rx = i;
        top -> wr_FIFO_offset = 0xFF;
        tick();
        tick();
    }


    top -> axis_t_last = 1;
    top -> axis_data_rx = 9;
    top -> wr_FIFO_offset = 0xFF;
    tick();
    top -> wr_FIFO_en = 0;
    top -> nw_segment = 0;
    tick();

}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);
    
    top->trace(tfp, 99);
    tfp->open("payload_FIFO.vcd");

    // Reset phase
    reset_input_payload_FIFO();
    tick();
    tick();
    top -> nRST = 1;
    tick();
    tick();


    // Example stimulus
    // drive_input_payload_FIFO(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    // for (int i = 0; i < 20; ++i) tick();

    handshake();
    writing_data();

    tfp->close();
    delete top;
    return 0;
}
