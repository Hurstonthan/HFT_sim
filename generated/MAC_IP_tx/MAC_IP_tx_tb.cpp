
#include "VMAC_IP_tx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "MAC_IP_tx_input.hpp"
#include <iostream>
#include <vector>

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VMAC_IP_tx *top, VerilatedFstC *tfp) {
    top->CLK = 1;
    top->eval(); tfp->dump(main_time++);
    top->CLK = 0;
    top->eval(); tfp->dump(main_time++);
}

uint16_t calculate_expected_checksum(const std::vector<uint64_t>& payload) {
    uint32_t sum = 0;
    
    for (const auto& word : payload) {
        printf("Payload ------> %lX\n", word);
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

void case1 (VMAC_IP_tx *top, VerilatedFstC *tfp) {
    uint16_t len_payload = 3;
    size_t i;
    uint16_t rst;
    top -> len_data = 8 * len_payload;
    top -> TX_en = 1;

    std::vector<uint64_t> chksum;
    uint64_t ele = 0;
    ele |= uint64_t (0x4500) << 48;
    ele |= uint64_t (0x0001) << 32;
    ele |= uint64_t (0x4000) << 16;
    ele |= uint64_t (0x4006) << 0;
    chksum.push_back(ele);
    ele = 0;
    ele |= uint64_t (0xC0A8) << 48;
    ele |= uint64_t (0x0101) << 32;
    ele |= uint64_t (0xC0A8) << 16;
    ele |= uint64_t (0x0102) << 0;
    chksum.push_back(ele);
    ele = 0;
    ele |= (8 * len_payload + 20 + 20) << 0;
    chksum.push_back(ele);
    rst = calculate_expected_checksum(chksum);
    printf("chksum that will send --> %X\n", rst);




    // for (size_t i = 0; i < 10; i++) {
    //     tick(top,tfp);
    // }
    while (!(top -> protocol_send)) {
        tick(top, tfp); 
    }
    tick(top, tfp);

    for (i = 0; i < len_payload - 1; i++) {
        top -> protocol_transmit = i + 1;
        tick(top, tfp);
    }
    top -> protocol_last = 1;
    top -> protocol_transmit = i + 1;
    tick(top, tfp);

    for (size_t l = 0; l < 5; l++) {
        tick(top, tfp);
    }


}

void case2 (VMAC_IP_tx *top, VerilatedFstC *tfp) {
    uint16_t len_payload = 1;
    size_t i;
    top -> len_data = 8 * len_payload;
    top -> TX_en = 1;

    while (!(top -> protocol_send)) {
        tick(top, tfp);
    }
    tick(top, tfp);

    for (i = 0; i < len_payload - 1; i++) {
        top -> protocol_transmit = i + 1;
        tick(top, tfp);
    }
    top -> protocol_last = 1;
    top -> protocol_transmit = i + 1;
    tick(top, tfp);

    for (size_t l = 0; l < 5; l++) {
        tick(top, tfp);
    }


}
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VMAC_IP_tx *top = new VMAC_IP_tx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("MAC_IP_tx.vcd");

    // Reset phase
    reset_input_MAC_IP_tx();
    tick(top, tfp);

    // Example stimulus
    drive_input_MAC_IP_tx(0, 0, 0, 0);
    top -> nRST = 1;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);

    case1(top, tfp);
    //case2(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
