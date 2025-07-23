
#include "VUDP_tx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "UDP_tx_input.hpp"
#include <iostream>
#include <vector>

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VUDP_tx *top, VerilatedFstC *tfp) {
    top->CLK = 0;
    top->eval(); tfp->dump(main_time++);
    top->CLK = 1;
    top->eval(); tfp->dump(main_time++);
}

void reset_module(VUDP_tx *top, VerilatedFstC *tfp) {
    top->nRST = 0;
    top->UDP_valid = 0;
    top->UDP_payload = 0;
    top->UDP_len = 0;
    top->UDP_last = 0;
    for (int i = 0; i < 5; i++) tick(top, tfp);

    top->nRST = 1;

    for (int i = 0; i < 5; i++) tick(top, tfp);
}

void send_default(VUDP_tx* top, VerilatedFstC *tfp,  
                       uint16_t udp_len, uint64_t payload_data) {
    top->UDP_len = udp_len;
    top->UDP_payload = payload_data;
    top->UDP_last = 1; 
    
    // Start transmission
    top->UDP_valid = 1;
    tick(top, tfp);
    
    // Wait for header transmission
    tick(top, tfp);
    
    // Payload transmission
    tick(top, tfp);
    
    // Done state
    tick(top, tfp);
    
    // Cleanup
    top->UDP_valid = 0;
    top->UDP_last = 0;
    tick(top, tfp);
}

void send_multi_packet(VUDP_tx* top, VerilatedFstC *tfp, 
                      uint16_t udp_len, std::vector<uint64_t> payload_data) {
    // Setup packet parameters
    top->UDP_len = udp_len;
    top->UDP_payload = 0;
    top->UDP_valid = 0;
    tick(top, tfp);
    // Start transmission
    top->UDP_valid = 1;
    
    tick(top, tfp);
    
    // Send payload packets
    for (size_t i = 0; i < payload_data.size(); i++) {
        // tick(top, tfp);
        top->CLK = 0;
        top->UDP_payload = payload_data[i];
        top->UDP_last = (i == payload_data.size() - 1) ? 1 : 0;
        top->eval();
        tfp->dump(main_time++);

        top->CLK = 1;
        top->eval();
        tfp->dump(main_time++);
        
        if (top->UDP_last) break;
    }

    top->UDP_valid = 0;
    top->UDP_last = 0;

    for (int i = 0; i < 10; i++) {
        tick(top, tfp);
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VUDP_tx *top = new VUDP_tx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("UDP_tx.fst");

    // Reset phase
    reset_module(top, tfp);
    tick(top, tfp);

    std::vector<uint64_t> payload = {0x1234567890ABCDEF, 0xFEDCBA0987654321, 0xDEADBEEFCAFEBABE};

    // sending
    std::cout << "testcase 1: sending default packet" << std::endl;
    send_default(top, tfp, 64, 0xDEADBEEFCAFEBABE);

    std::cout << "testcase 2: sending multi-packet" << std::endl;
    send_multi_packet(top, tfp, 64, payload);

    for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
