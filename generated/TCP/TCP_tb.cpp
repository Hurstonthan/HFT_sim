
#include <verilated.h>
#include <verilated_fst_c.h>

#include "VTCP.h"
#include "VFIFO_TX.h"
#include "Vpayload_FIFO.h"
#include "TCP_input.hpp"
#include "FIFO_TX_input.hpp"
#include "payload_FIFO_input.hpp"
#include <iostream>
#include <vector>

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

    struct IP_rx_in {
        std::string name;
        std::vector<uint64_t> payload;
    };

    const uint32_t ISN_seq_rx = 0x00;
    uint32_t seq_num_rx;
    uint32_t ACK_num_rx;
    uint16_t seq_num_MSB;
    uint16_t seq_num_LSB;
    uint16_t window_size_rx;
    uint16_t checksum_rx;
    uint16_t urgent_pointer_rx;
    uint8_t TCP_control_tx;


    seq_num_rx =  ISN_seq_rx;
    seq_num_MSB = (seq_num_rx >> 16) && 0xFFFF;
    seq_num_LSB = seq_num_rx && 0xFFFF;
    urgent_pointer_rx = 0;
    ACK_num_rx = 0;
    TCP_control_rx = 0x00;
    window_size_rx = 0x00_00;
    checksum_rx = 0x00_00;
    urgent
    //The TCP receiving is starting off with receiving 48 bits
    //Then start receivng 64 bits
    std::vector<IP_rx_in> TCP_header = {
        {"48bits source_port dest port and MSB seq", {0x1234_5678, seq_num_MSB}}, 
        {"64bits LSB seq ACK, offset/header size 4 resever flag TCP control flag", {seq_num_LSB, ACK_num_rx, 0x50, TCP_control_rx}}.
        {"64bits window_size, TCP checksum, urgent pointer and 16'd0", {window_size_rx, checksum_rx, }}
    };
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
