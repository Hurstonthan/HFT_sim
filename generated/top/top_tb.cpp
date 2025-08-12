#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "top_input.hpp"
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <vector>

// MAC layer constants
const uint8_t DATA_WIDTH = 64;
const uint8_t CTRL_WIDTH = 8;
const uint64_t MAC_DEST = 0xFFFFFFCCBBAA;
const uint64_t MAC_SRC = 0xAACCBBFFFFFF;
const uint16_t ETHERNET_TYPE = 0x0800;  // Fixed: was 0x0008, should be 0x0800 for IPv4

// IP layer constants
const uint8_t IP_VERSION = 0x4;
const uint8_t IP_HDL = 0x5;
const uint8_t UDP_PROTOCOL = 0x11;
const uint8_t TCP_PROTOCOL = 0x06;
const uint8_t ICMP_PROTOCOL = 0x01;
const uint8_t IP_TTL = 0x40;
const uint32_t IP_SRC_ADDR = 0xFFFFFFFF;   // 192.168.1.1 example
const uint32_t IP_DEST_ADDR = 0xAAAAAAAA;  // 192.168.1.2 example

// UDP layer constants
const uint16_t UDP_SRC_PORT = 0x1234;
const uint16_t UDP_DEST_PORT = 0x4321;
const uint16_t UDP_HEADER_LENGTH = 0x0008;

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

//---------------------------------------------------------
static void tick(Vtop *top, VerilatedFstC *tfp) {
    top->CLK = 0;
    top->eval(); 
    tfp->dump(main_time++);
    top->CLK = 1;
    top->eval(); 
    tfp->dump(main_time++);
}

//---------------------------------------------------------
static void reset_module(Vtop *top, VerilatedFstC *tfp){
    top->xgmii_rxd = 0;
    top->xgmii_rxc = 0;
    top->nRST = 0;
    top->UDP_len = 0;
    top->TX_en = 0;
    top->protocol_last = 0;
    for (int i = 0; i < 5; i++) tick(top, tfp);
    top->nRST = 1;
    for (int i = 0; i < 5; i++) tick(top, tfp);
}

//---------------------------------------------------------
// Calculate simple IP checksum (simplified version)
uint16_t calculate_ip_checksum(uint16_t version_ihl, uint16_t tos, uint16_t total_len,
                              uint16_t id, uint16_t flags_frag, uint16_t ttl_proto,
                              uint32_t src_addr, uint32_t dest_addr) {
    uint32_t sum = 0;
    sum += (version_ihl << 8) | tos;
    sum += total_len;
    sum += id;
    sum += flags_frag;
    sum += (ttl_proto << 8);
    sum += (src_addr >> 16) & 0xFFFF;
    sum += src_addr & 0xFFFF;
    sum += (dest_addr >> 16) & 0xFFFF;
    sum += dest_addr & 0xFFFF;
    
    while (sum >> 16)
        sum = (sum & 0xFFFF) + (sum >> 16);
    std::cout << "checksum result: " << std::hex << sum << std::endl;
    return ~sum & 0xFFFF;
}

//---------------------------------------------------------
static const std::vector<uint64_t> payload1 = {
    0xA5A5A5A5A5A50000,
    0x5A5A5A5A5A5A5A5A
};

//---------------------------------------------------------
std::vector<uint64_t> create_ethernet_frame(const std::vector<uint64_t> &payload, uint16_t udp_len) {
    std::vector<uint64_t> frame;
    
    // Calculate total lengths
    uint16_t ip_payload_len = udp_len + payload.size() * 8;  // UDP header + payload
    uint16_t ip_total_len = 20 + ip_payload_len;  // IP header (20 bytes) + payload
    std::cout << "ip_total: " << std::hex << ip_total_len <<std::endl;

    // Calculate IP checksum
    uint16_t ip_version_ihl = (IP_VERSION << 4) | IP_HDL;
    std::cout << "ip_version_ihl: " << std::hex << ip_version_ihl << std::endl;
    uint16_t ip_ttl_proto = (IP_TTL << 8) | UDP_PROTOCOL;
    std::cout << "ip_ttl: " << std::hex << ip_ttl_proto << std::endl;
    uint16_t ip_checksum = calculate_ip_checksum(ip_version_ihl, 0, ip_total_len, 
                                               0, 0, ip_ttl_proto, 
                                               IP_SRC_ADDR, IP_DEST_ADDR);
    
    // Helper function to reverse byte order for big-endian transmission
    auto reverse_bytes_48 = [](uint64_t val) -> uint64_t {
        return ((val & 0x0000000000FF) << 40) |
               ((val & 0x00000000FF00) << 24) |
               ((val & 0x000000FF0000) << 8)  |
               ((val & 0x0000FF000000) >> 8)  |
               ((val & 0x00FF00000000) >> 24) |
               ((val & 0xFF0000000000) >> 40);
    };
    
    auto reverse_bytes_32 = [](uint32_t val) -> uint32_t {
        return ((val & 0x000000FF) << 24) |
               ((val & 0x0000FF00) << 8)  |
               ((val & 0x00FF0000) >> 8)  |
               ((val & 0xFF000000) >> 24);
    };
    
    auto reverse_bytes_16 = [](uint16_t val) -> uint16_t {
        return ((val & 0x00FF) << 8) | ((val & 0xFF00) >> 8);
    };
    
    auto reverse_bytes_64 = [](uint64_t val) -> uint64_t {
        return ((val & 0x00000000000000FF) << 56) |
               ((val & 0x000000000000FF00) << 40) |
               ((val & 0x0000000000FF0000) << 24) |
               ((val & 0x00000000FF000000) << 8)  |
               ((val & 0x000000FF00000000) >> 8)  |
               ((val & 0x0000FF0000000000) >> 24) |
               ((val & 0x00FF000000000000) >> 40) |
               ((val & 0xFF00000000000000) >> 56);
    };

    // Word 0: MAC_SRC upper 2 bytes (bits 63:48) + MAC_DEST (bits 47:0)
    uint64_t mac_dest_be = reverse_bytes_48(MAC_DEST);
    uint64_t mac_src_be = reverse_bytes_48(MAC_SRC);
    uint64_t word0 = ((mac_src_be << 48) | mac_dest_be);
    frame.push_back(word0);
    std::cout << "Word 0:" << std::hex << word0 << std::endl;

    // Word 1: MAC_SRC lower 4 bytes + EtherType + IP Version/IHL + ToS
    uint64_t ethertype_be = reverse_bytes_16(ETHERNET_TYPE);
    uint64_t word1 =
                    (mac_src_be >> 16 & 0xFFFFFFFFFFFFULL) |
                    ((uint64_t)ethertype_be << 32) |
                    ((uint64_t)ip_version_ihl << 48) |
                    (0x00ULL << 56);
    frame.push_back(word1);
    std::cout << "Word 1:" << std::hex << word1 << std::endl;

    // Word 2: IP Total Length + ID + Flags/Fragment + TTL + Protocol
    uint64_t total_len_be = reverse_bytes_16(ip_total_len);
    uint64_t flags_frag_be = reverse_bytes_16(0x4000);  // Don't fragment
    uint64_t word2 = (((uint64_t)UDP_PROTOCOL << 56) |      
                  ((uint64_t)IP_TTL << 48) |              
                  (flags_frag_be << 32) |     
                  (0x0000 << 16) |            
                  total_len_be);  
    frame.push_back(word2);
    std::cout << "Word 2: 0x114000040000c300 " << std::hex << word2 << std::endl;
    
    // Word 3: IP Checksum + Source IP + Dest IP upper 2 bytes
    uint32_t src_ip_be = reverse_bytes_32(IP_SRC_ADDR);
    uint64_t dest_ip_be = reverse_bytes_32(IP_DEST_ADDR);
    // uint64_t checksum_be = reverse_bytes_16(ip_checksum);
    uint64_t checksum_be = reverse_bytes_16(0xE55C);
    uint64_t word3 = (checksum_be) |
                     ((uint64_t)src_ip_be << 16) |
                     (dest_ip_be << 48);
    frame.push_back(word3);
    
    // Word 4: Dest IP lower 2 bytes + UDP Source Port + UDP Dest Port + UDP Length
    uint64_t udp_src_be = reverse_bytes_16(UDP_SRC_PORT);
    uint64_t udp_dest_be = reverse_bytes_16(UDP_DEST_PORT);
    uint64_t udp_len_be = reverse_bytes_16(udp_len);
    uint64_t word4 = ((dest_ip_be >> 16)) |
                     (udp_src_be << 16) |
                     (udp_dest_be << 32) |
                     (udp_len_be << 48);
    frame.push_back(word4);
    
    // Word 5: UDP Checksum + first 6 bytes of payload
    if (!payload.empty()) {
        uint64_t udp_checksum_be = reverse_bytes_16(0x0000);  // UDP Checksum = 0
        uint64_t word5 = (udp_checksum_be) | (reverse_bytes_64(payload[0]) << 16);
        frame.push_back(word5);
        
        // Word 6: Last 2 bytes of payload[0] + first 6 bytes of payload[1] (if exists)
        if (payload.size() > 1) {
            
            uint64_t word6 = ((reverse_bytes_64(payload[0]) & 0xFFFF) >> 48) | (reverse_bytes_64(payload[1]) << 16);
            frame.push_back(word6);
            
            // Word 7: Last 2 bytes of payload[1]
            uint64_t word7 = (reverse_bytes_64(payload[1]) & 0xFFFF) >> 48;
            frame.push_back(word7);
        } else {
            // Only first payload word, put remaining 2 bytes in next word
            uint64_t word6 = (payload[0] & 0xFFFF) << 48;
            frame.push_back(word6);
        }
    }
    
    return frame;
}

//---------------------------------------------------------
void send_ethernet_frame(Vtop *top, VerilatedFstC *tfp,
                        const std::vector<uint64_t> &frame,
                        uint16_t udp_len) {
    
    // Send preamble and SFD (Start Frame Delimiter) - also in big endian
    top->xgmii_rxd = 0x55555555555555FB;  
    top->xgmii_rxc = 0x01;  
    tick(top, tfp);
    
    // Set UDP length
    top->UDP_len = udp_len;
    
    // Send frame data
    for (size_t i = 0; i < frame.size(); i++) {
        top->xgmii_rxd = frame[i];
        top->xgmii_rxc = 0x00;  // All data bytes
        std::cout << "Frame[" << i << "]: 0x" << std::hex << std::setfill('0') << std::setw(16) << frame[i];
        // Show individual bytes for clarity
        std::cout << " [";
        for (int j = 7; j >= 0; j--) {
            std::cout << std::hex << std::setfill('0') << std::setw(2) << ((frame[i] >> (j*8)) & 0xFF);
            if (j > 0) std::cout << "][";
        }
        std::cout << "]" << std::dec << std::endl;
        tick(top, tfp);
    }
    
    // Send end of frame
    top->TX_en = 1;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    top->protocol_last = 1;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    top->TX_en = 0;
    top->protocol_last = 0;
    
    // Send idle
    top->xgmii_rxd = 0x0707070707070707;  // Idle characters
    top->xgmii_rxc = 0xFF;  // All control
    for (int i = 0; i < 4; i++) {
        tick(top, tfp);
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
    
    // Create and send Ethernet frame
    uint16_t udp_len = UDP_HEADER_LENGTH + payload1.size() * 8;  // UDP header + payload length
    std::vector<uint64_t> frame = create_ethernet_frame(payload1, udp_len);
    
    std::cout << "UDP Length: " << udp_len << std::endl;
    std::cout << "Frame size: " << frame.size() << " words" << std::endl;
    
    send_ethernet_frame(top, tfp, frame, udp_len);
    
    // Additional simulation time
    for (int i = 0; i < 50; ++i) tick(top, tfp);
    
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}