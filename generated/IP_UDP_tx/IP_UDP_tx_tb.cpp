#include "VIP_UDP_tx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <iostream>
#include <vector>
#include <cstdint>
#include <random>

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// Utility function to advance simulation by one clock cycle
static void tick(VIP_UDP_tx *top, VerilatedFstC *tfp) {
    top->CLK = 0;
    top->eval(); tfp->dump(main_time++);
    top->CLK = 1;
    top->eval(); tfp->dump(main_time++);
}

// Resets the module to a known state
void reset_module(VIP_UDP_tx *top, VerilatedFstC *tfp) {
    top->nRST = 0;

    top->valid = 0;
    top->UDP_len = 0;
    top->UDP_payload = 0;
    top->protocol_last = 0;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
    
    top->nRST = 1;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
}

// ---
// Test Case 1: Simple Packet Transmission
// ---
void test_simple_packet(VIP_UDP_tx *top, VerilatedFstC *tfp) {
    std::cout << "Starting Test Case 1: Simple Packet Transmission" << std::endl;
    
    // Example packet data: a 3-word payload
    std::vector<uint64_t> payload = {0xDEADBEEF, 0x12345678, 0xABCDEF01};
    uint16_t total_payload_len = payload.size() * 8; // 64-bit words, so 8 bytes each
    
    // The "valid" signal indicates a transaction is starting
    top->valid = 1;
    for (int i = 0; i < 4; i++) tick(top, tfp);
    for (size_t i = 0; i < payload.size(); ++i) {
        top->UDP_payload = payload[i];
        
        // This is a simplified model. Your actual handshake logic might be more complex.
        // For a simple case, we set `protocol_last` on the last word.
        if (i == payload.size() - 1) {
            top->protocol_last = 1;
        } else {
            top->protocol_last = 0;
        }

        top->UDP_len = total_payload_len;
        tick(top, tfp);
    }
    
    // After sending all data, de-assert the `valid` signal
    top->valid = 0;
    top->UDP_payload = 0;
    top->protocol_last = 0;
    
    std::cout << "Sent UDP payload of " << total_payload_len << " bytes." << std::endl;
    
    // Wait for the packet to be transmitted
    // You'd need to observe `IP_transmit` and `IP_last` to know when it's done.
    // std::cout << "Waiting for transmission to complete..." << std::endl;
    // while (!top->IP_last) {
    //     tick(top, tfp);
    // }
    for (int i = 0; i < 5; i++) tick(top, tfp);
    std::cout << "Test Case 1: Complete." << std::endl;
}

// ---
// Test Case 2: Zero-Length Payload
// ---
void test_zero_length_payload(VIP_UDP_tx *top, VerilatedFstC *tfp) {
    std::cout << "Starting Test Case 2: Zero-Length Payload" << std::endl;

    top->valid = 1;
    top->UDP_payload = 0;
    top->UDP_len = 0;
    top->protocol_last = 1; // Signal that this is the only word and it's the last

    tick(top, tfp);
    
    // De-assert signals
    top->valid = 0;
    top->protocol_last = 0;

    std::cout << "Sent UDP payload of 0 bytes." << std::endl;
    
    // Wait for the packet to be transmitted
    std::cout << "Waiting for transmission to complete..." << std::endl;
    while (!top->IP_last) {
        tick(top, tfp);
    }
    tick(top, tfp);

    std::cout << "Test Case 2: Complete." << std::endl;
}

// ---
// Test Case 3: Back-to-Back Packets
// ---
void test_back_to_back_packets(VIP_UDP_tx *top, VerilatedFstC *tfp) {
    std::cout << "Starting Test Case 3: Back-to-Back Packets" << std::endl;

    for (int k = 0; k < 3; ++k) {
        std::vector<uint64_t> payload = { (uint64_t)0x1122334455667788ULL * (k + 1), 
                                          (uint64_t)0x8877665544332211ULL * (k + 1) };
        uint16_t total_payload_len = payload.size() * 8;

        top->valid = 1;
        top->UDP_len = total_payload_len;

        for (size_t i = 0; i < payload.size(); ++i) {
            top->UDP_payload = payload[i];
            top->protocol_last = (i == payload.size() - 1);
            tick(top, tfp);
        }

        // Wait for the packet to be transmitted before starting the next one.
        // This is a common test scenario for checking module readiness.
        while (!top->IP_last) {
            tick(top, tfp);
        }

        // De-assert signals to prepare for the next packet
        top->valid = 0;
        top->protocol_last = 0;
        top->UDP_payload = 0;
        tick(top, tfp);

        std::cout << "Sent Packet " << k + 1 << "." << std::endl;
    }
    
    std::cout << "Test Case 3: Complete." << std::endl;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VIP_UDP_tx *top = new VIP_UDP_tx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("IP_UDP_tx.fst");

    // Reset the module
    reset_module(top, tfp);

    // Run the test cases
    test_simple_packet(top, tfp);
    reset_module(top, tfp);
    // test_zero_length_payload(top, tfp);
    // reset_module(top, tfp);
    // test_back_to_back_packets(top, tfp);

    tfp->close();
    delete top;
    return 0;
}