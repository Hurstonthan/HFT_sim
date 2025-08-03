
#include "Vethernet_rx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "ethernet_rx_input.hpp"
#include <vector>
#include <iostream>

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vethernet_rx *top, VerilatedFstC *tfp) {
    top->CLK = 0;
    top->eval(); tfp->dump(main_time++);
    top->CLK = 1;
    top->eval(); tfp->dump(main_time++);
}

void reset_module(Vethernet_rx *top, VerilatedFstC *tfp) {
    top->xgmii_rxd = 0;
    top->xgmii_rxc = 0;
    for (int i = 0; i < 5; i++) tick(top, tfp);
    
    top->nRST = 1;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
}

std::vector<std::pair<uint64_t, uint8_t>> generate_payload() {
    std::vector<std::pair<uint64_t, uint8_t>> stimuli;
    
    // Start of Packet (SPD) - Word 0
    uint64_t start_data = 0;
    uint8_t start_control = 0x01;  // Only first byte is control
    
    // Byte 0: Start character (0xFB)
    start_data |= uint64_t(0xFB) << 0;
    // Bytes 1-6: Preamble (0x55)
    for (int i = 1; i < 7; i++) {
        start_data |= uint64_t(0x55) << (i * 8);
    }
    // Byte 7: SFD (0xD5)
    start_data |= uint64_t(0xD5) << 56;
    stimuli.push_back({start_data, start_control});

    // MAC Header - Word 1
    uint64_t mac_data = 0;
    // 
    // CCAA_AABB CCFF FFFF - how the testbench originally
    // AACC FFFF FFFF FFFF - how the testbench right now - working 
    // FFFF FFFF FFFF AACC - this should be the expected

    // AACC FFFF ... 
    // MAC_DEST_ADDR = 48'hFFFF_FFCC_BBAA
    mac_data |= uint64_t(0xFF) << 0;
    mac_data |= uint64_t(0xFF) << 8;
    mac_data |= uint64_t(0xFF) << 16;
    mac_data |= uint64_t(0xCC) << 24;
    mac_data |= uint64_t(0xBB) << 32;
    mac_data |= uint64_t(0xAA) << 40;
    // MAC_SRC_ADDR = 48'hAACC_BBFF_FFFF,
    //something is wrong check with Tri

    // mac_data |= uint64_t(0xAA) << 48;
    // mac_data |= uint64_t(0xCC) << 56;
    mac_data |= uint64_t(0xCC) << 48;
    mac_data |= uint64_t(0xAA) << 56;
    stimuli.push_back({mac_data, 0x00});
    
    // MAC Header Continued - Word 2
    uint64_t mac_data2 = 0;
    // Source MAC (last 4 bytes): BBFF_FFFF
    // mac_data2 |= uint64_t(0xBB) << 0;
    // mac_data2 |= uint64_t(0xFF) << 8;
    // mac_data2 |= uint64_t(0xFF) << 16;
    // mac_data2 |= uint64_t(0xFF) << 24; 
    
    mac_data2 |= uint64_t(0xFF) << 0;
    mac_data2 |= uint64_t(0xFF) << 8;
    mac_data2 |= uint64_t(0xFF) << 16;
    mac_data2 |= uint64_t(0xBB) << 24; 
    // EtherType: 0x0800 (IPv4)
    // mac_data2 |= uint64_t(0x08) << 32;
    // mac_data2 |= uint64_t(0x00) << 40;

    mac_data2 |= uint64_t(0x00) << 32;
    mac_data2 |= uint64_t(0x08) << 40;
    // IP VER | IHL|DSCP|ECN|Total Length 
    // 0x4500 (IPv4, IHL=5, DSCP=0, ECN=0)
    mac_data2 |= uint64_t(0x45) << 48;
    mac_data2 |= uint64_t(0x00) << 56;
    // mac_data2 |= uint64_t(0x00) << 48;
    // mac_data2 |= uint64_t(0x45) << 56;
    stimuli.push_back({mac_data2, 0x00});

    // IP Header - Word 3
    uint64_t ip_data = 0;

    //total length = 0x003C (60 bytes)
    ip_data |= uint64_t(0x003C) << 48;
    // Identification = 0x1234
    ip_data |= uint64_t(0x1234) << 32;

    ip_data |= uint64_t(0x5000) << 16; // Flags and Fragment Offset
    ip_data |= uint64_t(0x40) << 8;   // Time
    ip_data |= uint64_t(0x17) << 0; // Protocol (UDP)    
    stimuli.push_back({ip_data, 0x00});

    //missing other part for IP header
    // Payload - Words 3 to 7
    for (int word = 4; word <= 7; word++) {
        uint64_t payload_data = 0;
        for (int byte = 0; byte < 8; byte++) {
            payload_data |= uint64_t(0xFF) << (byte * 8);
        }
        stimuli.push_back({payload_data, 0x00});
    }

    // End of Frame - Word 8
    uint64_t end_data = 0;
    end_data |= uint64_t(0xFD) << 0;   // End control character
    for (int i = 1; i < 8; i++) {
        end_data |= uint64_t(0x07) << (i * 8);  // Idle characters
    }
    stimuli.push_back({end_data, 0xFF});

    return stimuli;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vethernet_rx *top = new Vethernet_rx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("ethernet_rx.fst");

    // Reset phase
    reset_module(top, tfp);

    auto test_packet = generate_payload();
    bool is_first_header = true;
    
    // Apply packet stimuli
    for (const auto &stim : test_packet) {
        //header 0 tick twice
        top->xgmii_rxd = stim.first;
        top->xgmii_rxc = stim.second;
        tick(top, tfp);
        // if (is_first_header){
        //     tick(top, tfp);
        //     is_first_header = false;
        // }
    }

    // Run additional cycles
    for (int i = 0; i < 20; i++) {
        // Send idles
        top->xgmii_rxd = 0x0707070707070707;
        top->xgmii_rxc = 0xFF;
        tick(top, tfp);
    }

    tfp->close();
    delete top;
    delete tfp;
    std::cout << "Simulation finished." << std::endl;
    return 0;
}
