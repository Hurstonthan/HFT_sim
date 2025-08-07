
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

    // === Word 0: SOP ===
    uint64_t start_data = 0;
    uint8_t start_control = 0x01;  // 1st byte is control (Start)

    start_data |= uint64_t(0xFB);
    for (int i = 1; i < 7; i++) {
        start_data |= uint64_t(0x55) << (i * 8);
    }
    start_data |= uint64_t(0xD5) << 56;
    stimuli.push_back({start_data, start_control});

    // === Word 1: MAC DST + part of MAC SRC ===
    uint64_t mac_data = 0;
    mac_data |= uint64_t(0xFF) << 0;
    mac_data |= uint64_t(0xFF) << 8;
    mac_data |= uint64_t(0xFF) << 16;
    mac_data |= uint64_t(0xCC) << 24;
    mac_data |= uint64_t(0xBB) << 32;
    mac_data |= uint64_t(0xAA) << 40;
    mac_data |= uint64_t(0xCC) << 48;
    mac_data |= uint64_t(0xAA) << 56;
    stimuli.push_back({mac_data, 0x00});

    // === Word 2: rest of MAC SRC + Ethertype + IP Version/IHL/DSCP/ECN ===
    uint64_t mac_data2 = 0;
    mac_data2 |= uint64_t(0xFF) << 0;
    mac_data2 |= uint64_t(0xFF) << 8;
    mac_data2 |= uint64_t(0xFF) << 16;
    mac_data2 |= uint64_t(0xBB) << 24;
    mac_data2 |= uint64_t(0x00) << 32;
    mac_data2 |= uint64_t(0x08) << 40;  // Ethertype = 0x0800 (IPv4)
    mac_data2 |= uint64_t(0x45) << 48;  // Version=4, IHL=5
    mac_data2 |= uint64_t(0x00) << 56;  // DSCP/ECN
    stimuli.push_back({mac_data2, 0x00});

    // === Word 3: IP Total Length + ID + Flags + TTL + Protocol ===
    uint64_t ip_data = 0;
    ip_data |= uint64_t(0x0034) << 48; // Total Length = 52 bytes
    ip_data |= uint64_t(0x1234) << 32; // Identification
    ip_data |= uint64_t(0x4000) << 16; // Flags/Fragment Offset
    ip_data |= uint64_t(0x40) << 8;    // TTL
    ip_data |= uint64_t(0x11) << 0;    // Protocol = UDP
    stimuli.push_back({ip_data, 0x00});

    // === Word 4: Header Checksum + IP SRC + part of IP DST ===
    uint64_t ip_data2 = 0;
    ip_data2 |= uint64_t(0x0000) << 48; // Header checksum
    ip_data2 |= uint64_t(0xFFFFFFFF) << 16; // IP SRC
    ip_data2 |= uint64_t(0xAAAA) << 0; // upper 2B of DST
    stimuli.push_back({ip_data2, 0x00});

    // === Word 5: Remaining IP DST + UDP SRC/DEST + Length + Checksum ===
    uint64_t udp_data = 0;
    udp_data |= uint64_t(0xAAAA0000); // lower 2B DST IP
    udp_data |= uint64_t(0x1234) << 16; // UDP SRC Port
    udp_data |= uint64_t(0x4321) << 32; // UDP DEST Port
    udp_data |= uint64_t(0x0020) << 48; // UDP Length = 32 bytes
    udp_data |= uint64_t(0x0000) << 56; // UDP Checksum
    stimuli.push_back({udp_data, 0x00});

    // === Word 6-8: UDP Payload ===
    for (int word = 0; word < 3; word++) {
        uint64_t payload_data = 0;
        for (int byte = 0; byte < 8; byte++) {
            payload_data |= uint64_t(0xFF) << (byte * 8);
        }
        stimuli.push_back({payload_data, 0x00});
    }

    // === Word 9: End of Frame ===
    uint64_t end_data = 0;
    end_data |= uint64_t(0xFD) << 0;
    for (int i = 1; i < 8; i++) {
        end_data |= uint64_t(0x07) << (i * 8);
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
