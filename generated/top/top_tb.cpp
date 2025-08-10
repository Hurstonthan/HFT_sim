#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "top_input.hpp"
#include <iostream>
#include <cstdint>
#include <vector>
#include <iomanip>

const uint8_t DATA_WIDTH = 64;
const uint8_t CTRL_WIDTH = 8;
const uint64_t MAC_DEST_ADDR = 0xFFFFFFCCBBAA; 
const uint64_t MAC_SRC_ADDR = 0xAACCBBFFFFFF;
const uint16_t ETHER_TYPE_MSB = 0x8;
const uint32_t CRC_POLY = 0xEDB88320;
const uint8_t XGMII_IDLE = 0x07;
const uint8_t XGMII_START = 0xFB;
const uint8_t XGMII_TERMINATE = 0xFD;
const uint16_t ETHERTYPE_IPv4 = 0x0800;
const uint8_t IP_PROTO_UDP = 17;
const uint32_t SRC_IP = 0xC0A8010A;  // 192.168.1.10
const uint32_t DEST_IP = 0xC0A80101; // 192.168.1.1
const uint16_t SRC_PORT = 49152;
const uint16_t DEST_PORT = 8080;

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

//---------------------------------------------------------
static void tick(Vtop *top, VerilatedFstC *tfp) {
    top->CLK = 0;
    top->eval(); tfp->dump(main_time++);
    top->CLK = 1;
    top->eval(); tfp->dump(main_time++);
}

//---------------------------------------------------------
static void reset_module(Vtop *top, VerilatedFstC *tfp){
    top->xgmii_rxd = 0;
    top->xgmii_rxc = 0;
    top->nRST = 0;
    top->UDP_len = 0;
    top->TX_en = 0;
    for (int i = 0; i < 5; i++) tick(top, tfp);
    
    top->nRST = 1;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
}

//---------------------------------------------------------
std::vector<uint64_t> payload1 = {
    0xA5A5A5A5A5A50000, 
    0x5A5A5A5A5A5A5A5A
};

//--------------------------CRC Calculation--------------------------------
uint32_t compute_crc32(const uint8_t *data, size_t length) {
    uint32_t crc = 0xFFFFFFFF;
    for (size_t i = 0; i < length; i++) {
        crc ^= data[i];
        for (int j = 0; j < 8; j++) {
            if (crc & 1) {
                crc = (crc >> 1) ^ CRC_POLY;
            } else {
                crc = crc >> 1;
            }
        }
    }
    return ~crc;
}

//--------------------------Build Ethernet Frame---------------------------
std::vector<uint8_t> build_ethernet_frame(
    const std::vector<uint8_t>& payload) 
{
    std::vector<uint8_t> frame;
    
    // MAC Header (14 bytes)
    for (int i = 5; i >= 0; i--) 
        frame.push_back((MAC_DEST_ADDR >> (i*8)) & 0xFF);
    for (int i = 5; i >= 0; i--) 
        frame.push_back((MAC_SRC_ADDR >> (i*8)) & 0xFF);
    frame.push_back(ETHERTYPE_IPv4 >> 8);
    frame.push_back(ETHERTYPE_IPv4 & 0xFF);
    
    // IP Header (20 bytes)
    const uint16_t total_len = 20 + 8 + payload.size();
    frame.push_back(0x45); // Version + IHL
    frame.push_back(0x00); // DSCP/ECN
    frame.push_back(total_len >> 8);
    frame.push_back(total_len & 0xFF);
    frame.insert(frame.end(), {0x00, 0x00, 0x40, 0x00, 0x40, IP_PROTO_UDP, 0x00, 0x00}); // ID, Flags, TTL, Protocol, Checksum(placeholder)
    for (int i = 3; i >= 0; i--) frame.push_back((SRC_IP >> (i*8)) & 0xFF);
    for (int i = 3; i >= 0; i--) frame.push_back((DEST_IP >> (i*8)) & 0xFF);
    
    // UDP Header (8 bytes)
    const uint16_t udp_len = 8 + payload.size();
    frame.push_back(SRC_PORT >> 8);
    frame.push_back(SRC_PORT & 0xFF);
    frame.push_back(DEST_PORT >> 8);
    frame.push_back(DEST_PORT & 0xFF);
    frame.push_back(udp_len >> 8);
    frame.push_back(udp_len & 0xFF);
    frame.push_back(0x00); // Checksum (placeholder)
    frame.push_back(0x00);
    
    // Payload
    frame.insert(frame.end(), payload.begin(), payload.end());
    
    // Add padding to meet minimum frame size (60 bytes without FCS)
    if (frame.size() < 60) {
        size_t padding = 60 - frame.size();
        for (size_t i = 0; i < padding; i++) {
            frame.push_back(0x00);
        }
    }
    
    // Calculate FCS (4 bytes)
    uint32_t fcs = compute_crc32(frame.data(), frame.size());
    frame.push_back((fcs >> 24) & 0xFF);
    frame.push_back((fcs >> 16) & 0xFF);
    frame.push_back((fcs >> 8) & 0xFF);
    frame.push_back(fcs & 0xFF);
    
    return frame;
}

//---------------------------------------------------------
void send_ethernet_frame(Vtop *top, VerilatedFstC *tfp, 
                        const std::vector<uint64_t> &payload,
                        uint16_t udp_len)
{
    // Convert payload to bytes
    std::vector<uint8_t> payload_bytes;
    for (auto word : payload) {
        for (int i = 0; i < 8; i++) {
            payload_bytes.push_back((word >> (i*8)) & 0xFF);
        }
    }
    
    // Build complete Ethernet frame
    auto frame = build_ethernet_frame(payload_bytes);
    
    std::cout << "Sending Ethernet frame (" << frame.size() << " bytes):\n";
    for (size_t i = 0; i < frame.size(); i++) {
        if (i % 16 == 0) std::cout << "\n" << std::setfill('0') << std::setw(4) << i << ": ";
        std::cout << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(frame[i]) << " ";
    }
    std::cout << std::dec << "\n" << std::endl;
    
    // Send frame via XGMII interface
    size_t bytes_sent = 0;
    bool first_word = true;
    
    while (bytes_sent < frame.size()) {
        uint64_t data_word = 0;
        uint8_t ctrl_word = 0;
        int bytes_in_word = 0;
        
        // First word has Start character
        if (first_word) {
            data_word |= static_cast<uint64_t>(XGMII_START);
            ctrl_word |= 0x01;  // First byte is control
            first_word = false;
            bytes_in_word = 1;
        }
        
        // Add data bytes
        while (bytes_in_word < 8 && bytes_sent < frame.size()) {
            data_word |= static_cast<uint64_t>(frame[bytes_sent]) << (bytes_in_word * 8);
            bytes_sent++;
            bytes_in_word++;
        }
        
        // Handle termination
        if (bytes_sent >= frame.size()) {
            if (bytes_in_word < 8) {
                data_word |= static_cast<uint64_t>(XGMII_TERMINATE) << (bytes_in_word * 8);
                ctrl_word |= (1 << bytes_in_word);
                bytes_in_word++;
            }
            
            // Fill remaining with IDLE
            for (; bytes_in_word < 8; bytes_in_word++) {
                data_word |= static_cast<uint64_t>(XGMII_IDLE) << (bytes_in_word * 8);
                ctrl_word |= (1 << bytes_in_word);
            }
        }
        
        // Drive XGMII interface
        top->xgmii_rxd = data_word;
        top->xgmii_rxc = ctrl_word;
        tick(top, tfp);
    }
    
    // Send extra termination word if frame ended exactly at word boundary
    if (frame.size() % 8 == 0) {
        uint64_t data_word = XGMII_TERMINATE;
        uint8_t ctrl_word = 0x01;
        for (int i = 1; i < 8; i++) {
            data_word |= static_cast<uint64_t>(XGMII_IDLE) << (i * 8);
            ctrl_word |= (1 << i);
        }
        top->xgmii_rxd = data_word;
        top->xgmii_rxc = ctrl_word;
        tick(top, tfp);
    }
    
    // Return to IDLE
    top->xgmii_rxd = 0;
    top->xgmii_rxc = 0xFF;
    tick(top, tfp);
}

//---------------------------------------------------------
void trigger_tx_transmission(Vtop *top, VerilatedFstC *tfp, uint16_t udp_len) {
    std::cout << "Triggering TX transmission with UDP length: " << udp_len << std::endl;
    top->TX_en = 1;
    top->UDP_len = udp_len;
    tick(top, tfp);
    top->TX_en = 0;
    top->UDP_len = 0;
}

//---------------------------------------------------------
void monitor_tx_interface(Vtop *top, VerilatedFstC *tfp, int cycles) {
    std::cout << "Monitoring TX interface for " << cycles << " cycles..." << std::endl;
    for (int i = 0; i < cycles; i++) {
        tick(top, tfp);
        
        // Print TX data if not IDLE
        if (top->xgmii_txc != 0xFF || top->xgmii_txd != 0) {
            std::cout << "Cycle " << (main_time/2)
                      << ": TXD = 0x" << std::hex << std::setw(16) << std::setfill('0') 
                      << top->xgmii_txd
                      << " TXC = 0x" << std::setw(2) << static_cast<int>(top->xgmii_txc)
                      << std::dec << std::endl;
        }
        
        // Print frame_end signal
        if (top->frame_end) {
            std::cout << "Frame end detected at cycle " << (main_time/2) << std::endl;
        }
    }
}

//---------------------------------------------------------
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtop *top = new Vtop;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("top.fst");

    // Reset phase
    reset_module(top, tfp);

    // Send Ethernet frame to RX interface
    send_ethernet_frame(top, tfp, payload1, payload1.size() * 8);
    
    // Trigger TX transmission
    trigger_tx_transmission(top, tfp, payload1.size() * 8);
    
    // Monitor TX interface
    monitor_tx_interface(top, tfp, 100);

    tfp->close();
    delete top;
    return 0;
}