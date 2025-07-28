
#include "VUDP_rx.h" 
#include "verilated.h"
#include "verilated_fst_c.h"
#include "UDP_rx_input.hpp"
#include <iostream>
#include <vector>

const uint16_t SAMPLE_SRC_ADDR = 0x1234; 
const uint16_t SAMPLE_DEST_ADDR = 0x4321; 
const uint32_t SAMPLE_IP_DEST_ADDR = 0xC0A80101; // does not matter
const uint16_t SAMPLE_LEN = 0x0008; 
const uint16_t SAMPLE_CHKSUM = 0x0000; // future emplementation 

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VUDP_rx *top, VerilatedFstC *tfp) {
    top->CLK = 0;
    top->eval(); tfp->dump(main_time++);
    top->CLK = 1;
    top->eval(); tfp->dump(main_time++);
}

void reset_module(VUDP_rx *top, VerilatedFstC *tfp) {
    top->nRST = 0;
    top->IP_flush = 0;
    top->IP_payload = 0;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
    
    top->nRST = 1;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
}

void send_udp_packet(VUDP_rx *top, VerilatedFstC *tfp, 
    uint64_t header0, 
    uint64_t header1,
    const std::vector<uint64_t>& payload) 
{
    top->IP_valid = 1;
    top->is_udp = 1;

    top->IP_payload = header0;
    tick(top, tfp);
    // tick(top, tfp);
    // send the checksum and part of the payload
    top->IP_payload = header1;
    tick(top, tfp);
    // tick(top, tfp);
    for (size_t i = 0; i < payload.size(); i++) {
        tick(top, tfp);
        top->CLK = 0;
        top->IP_payload = payload[i];
        // top->IP_payload_last = (i == payload.size() - 1) ? 1 : 0;
        top->eval();
        tfp->dump(main_time++);
        
        top->CLK = 1;
        top->eval();
        tfp->dump(main_time++);
        
        // // second cycle
        // top->eval();
        // tfp->dump(main_time++);
        
        // top->CLK ^= 1;
        // top->eval();
        // tfp->dump(main_time++);
    }

    top->IP_valid = 0;

    for (int i = 0; i < 10; i++) {
        tick(top, tfp);
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VUDP_rx *top = new VUDP_rx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("UDP_rx.fst");

    vluint64_t time = 0;
    
    // Reset phase
    reset_module(top, tfp);
    tick(top, tfp);

    std::vector<uint64_t> payload = {0xA5A5A5A5A5A5A5A5, 0x5A5A5A5A5A5A5A5};
    //todo random payload generate 
    std::cout << "Starting test case 1: valid UDP packet" << std::endl;
    uint64_t header0 = ((uint64_t)SAMPLE_IP_DEST_ADDR << 48)|((uint64_t)SAMPLE_SRC_ADDR << 32)
                     | ((uint64_t)SAMPLE_DEST_ADDR << 16) | SAMPLE_LEN; 
    uint64_t header1 = static_cast<uint64_t>(SAMPLE_CHKSUM & 0xFFFF) << 48;
    send_udp_packet(top, tfp, header0, header1, payload);

    std::cout << "Starting test case 2: wrong source address" << std::endl;
    header0 = ((uint64_t)SAMPLE_IP_DEST_ADDR << 48)|((uint64_t)0x5678 << 32)
                     | ((uint64_t)SAMPLE_DEST_ADDR << 16) | SAMPLE_LEN; 
    header1 = static_cast<uint64_t>(SAMPLE_CHKSUM & 0xFFFF) << 48;
    send_udp_packet(top, tfp, header0, header1, payload);

    std::cout << "Starting test case 3: wrong destination address" << std::endl;
    header0 = ((uint64_t)SAMPLE_IP_DEST_ADDR << 48)|((uint64_t)SAMPLE_SRC_ADDR << 32)
                     | ((uint64_t)0x8765 << 16) | SAMPLE_LEN; 
    header1 = static_cast<uint64_t>(SAMPLE_CHKSUM & 0xFFFF) << 48;
    send_udp_packet(top, tfp, header0, header1, payload);

    std::cout << "Starting test case 4: source and destination address are flipped" << std::endl;
    header0 = ((uint64_t)SAMPLE_IP_DEST_ADDR << 48)|((uint64_t)SAMPLE_DEST_ADDR << 32)
                     | ((uint64_t)SAMPLE_DEST_ADDR << 16) | SAMPLE_LEN; 
    header1 = static_cast<uint64_t>(SAMPLE_CHKSUM & 0xFFFF) << 48;
    send_udp_packet(top, tfp, header0, header1, payload);

    for (int i = 0; i < 20; i++) {
        tick(top, tfp);
    }

    tfp->close();
    delete top;
    delete tfp;

    std::cout << "Simulation finished." << std::endl;
    return 0;
}