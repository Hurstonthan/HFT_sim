
#include "Vether_simulation.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "ether_simulation_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vether_simulation *top, VerilatedFstC *tfp) {
    
    top->CLK = 1;
    top->eval(); 
    tfp->dump(main_time++);          
       
    top->CLK = 0;          
    top->eval();
    tfp->dump(main_time++);

}
//Setting up the handshake 

static void handshake (Vether_simulation *top, VerilatedFstC *tfp) {
    //Part 1: Setting up the handshake
    // the client send SYN first, the sever receiver SYN
    top -> tb_count = 0;
    top -> TX_en_clt = 1;
    tick(top, tfp);
    top -> TX_en_clt = 0;
    while (!(top -> frame_end_clt)) {
        tick(top,tfp);
    }
    
    for (size_t i = 0; i < 3; i++) {
        tick(top,tfp);
    }

    // the sever send SYN_ACK, the client receive SYN_ACK
    top -> TX_en_svr = 1;
    tick(top, tfp);
    top -> TX_en_svr = 0;
    while (!(top -> frame_end_svr)) {
        tick(top,tfp);
    }

    for (size_t i = 0; i < 3; i++) {
        tick(top,tfp);
    }

    //The client send ACK, the sever receive ACK both of them done handshake
    top -> TX_en_clt = 1;
    tick(top, tfp);
    top -> TX_en_clt = 0;
    while (!(top -> frame_end_clt)) {
        tick(top,tfp);
    }

    for (size_t i = 0; i < 3; i++) {
        tick(top,tfp);
    }
    
    for (size_t i = 0; i < 10; i++) {
        tick(top,tfp);
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vether_simulation *top = new Vether_simulation;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("ether_simulation.vcd");

    // Reset phase
    reset_input_ether_simulation();
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);

    // Example stimulus
    drive_input_ether_simulation(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    top -> nRST= 1;
    top -> tb_count = 0xFF;
    tick(top, tfp);
    tick(top, tfp);

    //The handshake is done
    handshake (top, tfp);

    size_t i;
    //count = 1;
    top -> tb_count++;
    //Now the clietn write data
    uint64_t wr_payload = 0;
    top -> wr_FIFO_en_clt = 1;
    top -> len_seq_clt = 10 * 8;
    for (i = 0; i < 9; i++) {
        wr_payload = i + 1;
        top -> soupbin_TCP_payload_clt = wr_payload;
        tick(top, tfp);
    }

    top -> axis_last_clt = 1;
    top -> soupbin_TCP_payload_clt = i + 1;
    tick(top,tfp);

    top -> wr_FIFO_en_clt = 0;
    tick(top,tfp);

    for (i = 0; i < 5; i++) {
        tick(top, tfp);
    }

    //now send it
    //count = 2
    top -> tb_count++;
    top -> TX_en_clt = 1;
    tick(top, tfp);
    top -> TX_en_clt = 0;
    while (!(top -> frame_end_clt)) {
        tick(top,tfp);
    }
    
    for (size_t i = 0; i < 10; i++) {
        tick(top,tfp);
    }




    tfp->close();
    delete top;
    return 0;
}
