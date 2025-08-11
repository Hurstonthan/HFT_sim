
#include "Vether_simulation.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <chrono>
#include <iostream>
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

static void writing_case (Vether_simulation *top, VerilatedFstC *tfp, bool clt_or_svr) {
    uint64_t wr_payload = 0;
    int len_pay;
    size_t i;
    auto start = std::chrono::steady_clock::now();
    //Client
    if (clt_or_svr) {
        //Now the clietn write data
        top -> wr_FIFO_en_clt = 1;
        top -> len_seq_clt = 3 * 8;
        for (i = 0; i < 2; i++) {
            wr_payload = i + 1;
            top -> soupbin_TCP_payload_clt = wr_payload;
            tick(top, tfp);
        }
        top -> axis_last_clt = 1;
        top -> soupbin_TCP_payload_clt = i + 1;
        tick(top,tfp);
        top -> axis_last_clt = 0;
        top -> wr_FIFO_en_clt = 0;
        tick(top,tfp);
        for (i = 0; i < 5; i++) {
            tick(top, tfp);
        }

        //now client send the data, the sever receive
        top -> TX_en_clt = 1;
        tick(top, tfp);
        top -> TX_en_clt = 0;
        while (!(top -> frame_end_clt)) {
            tick(top,tfp);
            if (std::chrono::steady_clock::now() - start > std::chrono::seconds(1)) {
                std::cout << "Timeout reached, exiting.\n";
                break;
            }
        }
        for (size_t i = 0; i < 10; i++) {
            tick(top,tfp);
        }

    } else {
        len_pay = 5;
        wr_payload = 0;
        top -> wr_FIFO_en_svr = 1;
        top -> len_seq_svr = len_pay * 8;
        for (i = 0; i < len_pay - 1; i++) {
            wr_payload = (i + 1) * 100;
            top -> soupbin_TCP_payload_svr = wr_payload;
            tick(top, tfp);
        }

        top -> axis_last_svr = 1;
        top -> soupbin_TCP_payload_svr = (i + 1) * 100;
        tick(top,tfp);
        top -> axis_last_svr =  0;
        top -> wr_FIFO_en_svr = 0;
        tick(top,tfp);

        for (i = 0; i < 5; i++) {
            tick(top, tfp);
        }

        //sever send
        top -> TX_en_svr = 1;
        tick(top, tfp);
        top -> TX_en_svr = 0;
        while (!(top -> frame_end_svr)) {
            tick(top,tfp);
            if (std::chrono::steady_clock::now() - start > std::chrono::seconds(1)) {
            std::cout << "Timeout reached, exiting.\n";
            break;
        }

        }
        
        for (size_t i = 0; i < 20; i++) {
            tick(top,tfp);
        }

    }
}


void app_reading (Vether_simulation *top, VerilatedFstC *tfp, bool clt_or_svr) {
    if (clt_or_svr) {
        top -> axis_r_en_clt = 1;
        for (int k = 0; k < 20; k++) {
            tick(top, tfp);
        }
        top -> axis_r_en_clt = 0;
        tick(top, tfp);

    } else {
        top -> axis_r_en_svr = 1;
        for (int k = 0; k < 20; k++) {
            tick(top, tfp);
        }
        top -> axis_r_en_svr = 0;
        tick(top, tfp);
    }
}

void error_case (Vether_simulation *top, VerilatedFstC *tfp) {
    //Error case
    uint64_t wr_payload = 0;
    int len_pay;
    size_t i;
    auto start = std::chrono::steady_clock::now();
    
    //Now the client write data
    top -> wr_FIFO_en_clt = 1;
    top -> len_seq_clt = 3 * 8;
    for (i = 0; i < 2; i++) {
        wr_payload = i + 1;
        top -> soupbin_TCP_payload_clt = wr_payload;
        tick(top, tfp);
    }
    top -> axis_last_clt = 1;
    top -> soupbin_TCP_payload_clt = i + 1;
    tick(top,tfp);
    top -> axis_last_clt = 0;
    top -> wr_FIFO_en_clt = 0;
    tick(top,tfp);
    for (i = 0; i < 5; i++) {
        tick(top, tfp);
    }

    //now client send the data, the sever receive
    // WITH Error case
    top -> TX_en_clt = 1;
    tick(top, tfp);
    top -> TX_en_clt = 0;
    
    // // Cycle: 2 IP state error not reach TCP 
    // for (size_t i = 0; i < 2; i++) {
    //     tick(top, tfp);
    // }

    // Cycle : 7 IP state reach, TCP reach got wrong in TCP checksum
    for (size_t i = 0; i < 6; i++) {
        tick(top, tfp);
    }

    top -> err_flag = 1;
    tick(top,tfp);
    top -> err_flag = 0;

    for (size_t i = 0; i < 10; i++) {
        tick(top, tfp);
    }

    for (size_t i = 0; i < 10; i++) {
        tick(top,tfp);
    }

}

void fin_logic (Vether_simulation *top, VerilatedFstC *tfp) {
    //FIN logic
    top -> tb_count++;

    //Client is done sending
    top -> end_ss_clt = 1;
    top -> TX_en_clt = 1;
    tick(top, tfp);
    top -> TX_en_clt = 0;
    while (!(top -> frame_end_clt)) {
        tick(top,tfp);
    }

    for (size_t i =0; i < 15; i++) {
        tick(top, tfp);
    }

    //Sever send ACK for FIN
    top -> tb_count++;
    top -> TX_en_svr = 1;
    tick(top, tfp);
    top -> TX_en_svr = 0;

    while(!(top -> frame_end_svr)) {
        tick(top, tfp);
    }

    for (size_t i =0; i < 6; i++) {
        tick(top, tfp);
    }

    //Sever done send as well send FIN
    top -> tb_count++;
    top -> end_ss_svr = 1;
    top -> TX_en_svr = 1;
    tick(top, tfp);
    top -> TX_en_svr = 0;

    while(!(top -> frame_end_svr)) {
        tick(top, tfp);
    } 

    for (size_t i =0; i < 6; i++) {
        tick(top, tfp);
    }

    //Client send FIN-ACK for Sever
    top -> tb_count++;
    top -> TX_en_clt = 1;
    tick(top, tfp);
    top -> TX_en_clt = 0;
    while(!(top -> frame_end_clt)) {
        tick(top, tfp);
    }
    for (size_t i =0; i < 6; i++) {
        tick(top, tfp);
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
    

    // Example stimulus
    drive_input_ether_simulation(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    top -> nRST= 1;
    top -> out_order  = 0;
    top -> end_ss_clt = 0;
    top -> end_ss_svr = 0;
    top -> tb_count = 0xFF;
    tick(top, tfp);
    tick(top, tfp);

    //The handshake is done
    handshake (top, tfp);

    
    //Client send ->, Sever rc
    //count = 1;
    // top -> tb_count++;
    // writing_case(top, tfp, 1);
    
    //The sever will write data and send it back to the client
    //This checking the TCP fast transmit features
    //count = 2
    top -> tb_count++;
    writing_case(top, tfp, 0);

    // //Client send another one but out of of order
    // //count = 3
    // top -> tb_count++;
    // top -> out_order = 0;
    // writing_case(top, tfp, 1);

    
    //CASE: The client send data in order; the sever receive; app sever read
    //count = 3
    top -> tb_count++;
    writing_case(top, tfp, 1);

    //Sever reading case
    top -> axis_r_en_svr = 1;
    for (int k = 0; k < 20; k++) {
        tick(top, tfp);
    }
    top -> axis_r_en_svr = 0;
    tick(top, tfp);
    for (int k = 0; k < 10; k++) {
        tick(top, tfp);
    }

    //CASE: The client send data out of order; the sever receive; APP NOT READ
    top -> tb_count ++;
    top -> out_order = 1;
    writing_case(top, tfp, 1);
    //Sever reading case //SHOULD NOT READ
    app_reading (top, tfp, 0);

    //Client send in order packet
    top -> out_order = 0;
    writing_case(top, tfp, 1);
    app_reading (top, tfp, 0);


    //Client send in order packet to trigger fast transmission
    top -> tb_count ++;
    writing_case(top, tfp, 1);
    // //Send again to update rcv_next
    // top -> tb_count ++;
    // writing_case(top, tfp, 1);
    //Sever send back
    writing_case(top, tfp, 0);

    //IDLE TICK
    for (size_t i =0; i < 15; i++) {
        tick(top, tfp);
    }

    fin_logic (top, tfp);
    



    

    // //Error case
    // top -> tb_count++;
    // error_case(top, tfp);



    
    






    
    




    tfp->close();
    delete top;
    return 0;
}
