#include "Vchksum_tcp_pl.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>  // For exit()

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vchksum_tcp_pl *top, VerilatedFstC *tfp) {
    top->eval(); if (tfp) tfp->dump(main_time++); 
    top->CLK ^= 1;
    top->eval(); if (tfp) tfp->dump(main_time++); 
}

void reset_module(Vchksum_tcp_pl *top, VerilatedFstC *tfp) {
    top->nRST = 0;
    top->FIFO_rd_en = 0;
    top->clear = 0;
    top->TCP_payload_tx = 0;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
    
    top->nRST = 1;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
}

uint16_t calculate_expected_checksum(const std::vector<uint64_t>& payload) {
    uint32_t sum = 0;
    
    for (const auto& word : payload) {
        // Extract 16-bit chunks in big-endian order
        uint16_t chunk3 = (word >> 48) & 0xFFFF;
        uint16_t chunk2 = (word >> 32) & 0xFFFF;
        uint16_t chunk1 = (word >> 16) & 0xFFFF;
        uint16_t chunk0 = word & 0xFFFF;
        
        sum += chunk0;
        sum += chunk1;
        sum += chunk2;
        sum += chunk3;
        
        // Fold carry bits
        while (sum >> 16) {
            sum = (sum & 0xFFFF) + (sum >> 16);
        }
    }
    
    // Final one's complement
    return static_cast<uint16_t>(~sum);
}

void send_payload(Vchksum_tcp_pl *top, VerilatedFstC *tfp, 
                  const std::vector<uint64_t>& payload) {
    // Start with clear
    top->clear = 1;
    top->FIFO_rd_en = 0;
    tick(top, tfp);
    top->clear = 0;
    
    // Send payload words
    for (size_t i = 0; i < payload.size(); i++) {
        top->FIFO_rd_en = 1;
        top->TCP_payload_tx = payload[i];
        tick(top, tfp);
    }
    
    // End transmission
    top->FIFO_rd_en = 0;
}

bool verify_checksum(Vchksum_tcp_pl *top, uint16_t expected, const std::string& test_name) {
    // Allow one cycle for final calculation
    tick(top, nullptr);  // Pass nullptr to avoid tracing
    
    // Wait for stable output
    for (int i = 0; i < 2; i++) {
        tick(top, nullptr);
    }
    
    uint16_t actual = top->TCP_checksum_pl;
    
    if (actual != expected) {
        std::cerr << "[" << test_name << "] FAILED: Expected 0x" 
                  << std::hex << std::setw(4) << std::setfill('0') << expected
                  << ", got 0x" << actual << std::dec << std::endl;
        return false;
    }
    
    std::cout << "[" << test_name << "] PASSED: 0x" 
              << std::hex << std::setw(4) << std::setfill('0') << expected << std::dec << std::endl;
    return true;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::debug(0);
    Verilated::traceEverOn(true);
    
    Vchksum_tcp_pl *top = new Vchksum_tcp_pl;
    VerilatedFstC *tfp = new VerilatedFstC;
    
    // Initialize trace only if requested
    bool trace_enabled = true;
    if (trace_enabled) {
        top->trace(tfp, 99);
        tfp->open("chksum_tcp_pl.fst");
    } else {
        tfp = nullptr;
    }
    
    // Reset the module
    reset_module(top, tfp);
    
    // Define test cases
    struct TestCase {
        std::string name;
        std::vector<uint64_t> payload;
        uint16_t expected_checksum;
    };
    
    std::vector<TestCase> test_cases = {
        // Empty payload
        {"Zero payload", {}, 0xFFFF},  // One's complement of 0 is 0xFFFF
        
        // Single word tests
        {"Single word (full)", {0x0123456789ABCDEF}, calculate_expected_checksum({0x0123456789ABCDEF})}, 
        {"Single word (partial)", {0x000000000000FFFF}, calculate_expected_checksum({0x000000000000FFFF})},
        {"All zeros", {0x0000000000000000}, 0xFFFF},
        
        // Multiple word tests
        {"Two words", 
            {0xA5A5A5A5A5A5A5A5, 0x5A5A5A5A5A5A5A5A}, 
            calculate_expected_checksum({0xA5A5A5A5A5A5A5A5, 0x5A5A5A5A5A5A5A5A})},
        
        // Realistic TCP payload
        {"Hello World", 
            {0x48656C6C6F20576F, 0x726C642100000000},  // "Hello World!" in ASCII
            calculate_expected_checksum({0x48656C6C6F20576F, 0x726C642100000000})},
    };
    
    // Run all test cases
    int passed = 0;
    for (auto& test : test_cases) {
        // Send payload
        send_payload(top, tfp, test.payload);
        
        // Verify checksum
        if (verify_checksum(top, test.expected_checksum, test.name)) {
            passed++;
        }
        
        // Add some idle cycles between tests
        for (int i = 0; i < 5; i++) tick(top, tfp);
    }
    
    // Test clear functionality
    {
        std::cout << "\nTesting clear functionality..." << std::endl;
        
        // Send a payload to get non-zero checksum
        send_payload(top, tfp, {0x1122334455667788});
        
        // Verify checksum is non-zero
        uint16_t checksum_before_clear = top->TCP_checksum_pl;
        if (checksum_before_clear == 0 || checksum_before_clear == 0xFFFF) {
            std::cerr << "[Clear Test] Error: Invalid checksum before clear: 0x" 
                      << std::hex << checksum_before_clear << std::dec << std::endl;
        } else {
            std::cout << "[Clear Test] Checksum before clear: 0x" 
                      << std::hex << checksum_before_clear << std::dec << std::endl;
        }
        
        // Apply clear
        top->clear = 1;
        tick(top, tfp);
        top->clear = 0;
        tick(top, tfp);
        
        // Verify checksum is reset
        uint16_t checksum_after_clear = top->TCP_checksum_pl;
        if (checksum_after_clear == 0) {
            std::cout << "[Clear Test] PASSED: Checksum reset to zero" << std::endl;
            passed++;
        } else {
            std::cerr << "[Clear Test] FAILED: Expected 0x0000, got 0x"
                      << std::hex << checksum_after_clear << std::dec << std::endl;
        }
    }
    
    // Final report
    int total_tests = test_cases.size() + 1; // +1 for clear test
    std::cout << "\nTest summary: " << passed << "/" << total_tests
              << " tests passed" << std::endl;
    
    // Cleanup
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    return (passed == total_tests) ? 0 : 1;
}