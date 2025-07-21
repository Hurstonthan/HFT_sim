
// #include "VFIFO_TX.h"
// #include "verilated.h"
// #include "verilated_fst_c.h"
// #include "FIFO_TX_input.hpp"

// static vluint64_t main_time = 0;
// double sc_time_stamp() { return main_time; }
// VFIFO_TX *top = new VFIFO_TX;
// VerilatedFstC *tfp = new VerilatedFstC;
// static void tick() {
//     top->CLK = 1;         
//     top->eval();           
//     tfp->dump(main_time++);   
//     top->CLK = 0;          
//     top->eval();           
//     tfp->dump(main_time++);
// }

// static void write_FIFO (int len) {
//     top -> wr_FIFO_en = 1;
//     top -> len_seq = len;
//     for (int i = 0; i < len - 1; i++) {
//         top -> soupbin_TCP_payload = i + 1;
//         tick();
//     }

//     top -> axis_last = 1;
//     top -> soupbin_TCP_payload = len + 1;
//     tick();
//     top -> wr_FIFO_en = 0;
//     tick();
//     // printf("bytes_abt_sent_msg %d", top->bytes_abt_sent_msg);
    
// }


// static void rd_FIFO () {
//     top -> rd_FIFO_en = 1;
//     for (int i = 0; i < 30; i++) {
//         if (top -> rd_FIFO_last) {
//             top -> rd_FIFO_en = 0;
//         }
//         printf ("Cycle: %d, rd_FIFO_valid: %d, rd_FIFO_last: %d, rd_FIFO_payload: %ld, bytes_abt_sent: %d\n", i, top -> rd_FIFO_valid, top -> rd_FIFO_last, top -> rd_FIFO_payload, top -> bytes_abt_sent);
//         tick();
//     }
// }

// int main(int argc, char **argv) {
//     Verilated::commandArgs(argc, argv);
    
//     Verilated::traceEverOn(true);
    
//     top->trace(tfp, 99);
//     tfp->open("FIFO_TX.vcd");

//     // Reset phase
//     reset_input_FIFO_TX();
//     tick();

//     // Example stimulus
//     drive_input_FIFO_TX(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
//     top -> nRST = 1;
//     tick();
//     // for (int i = 0; i < 20; ++i) tick();

//     write_FIFO(5);
//     tick();
//     rd_FIFO();


//     tfp->close();
//     delete top;
//     return 0;
// }



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
