
#include "VIP_UDP_rx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "IP_UDP_rx_input.hpp"
#include <iostream>
#include <vector>

const uint8_t TCP_PROTOCOL = 6;
const uint8_t UDP_PROTOCOL = 17;
const uint8_t ICMP_PROTOCOL = 1;
// const uint32_t IP_SRC_ADDR = 0xC0A80102; 
// const uint32_t IP_DEST_ADDR = 0xC0A80101; 
const uint32_t IP_SRC_ADDR = 0xFFFFFFFF; 
const uint32_t IP_DEST_ADDR = 0xAAAAAAAA; 
const uint32_t SAMPLE_MAC_SRC_ADDR = 0x11223344; 
const uint32_t IP_TYPE_IPV4 = 0x0800;

const uint16_t UDP_SRC_ADDR = 0x1234; 
const uint16_t UDP_DEST_ADDR = 0x4321; 
const uint16_t UDP_LEN = 0x0008; // this is only the length of the UDP header, not the payload
const uint16_t SAMPLE_CHKSUM = 0x0000; // future emplementation 

static void tick(VIP_UDP_rx *top, VerilatedFstC *tfp, vluint64_t &time) {
    top->CLK = 0;
    top->eval(); tfp->dump(time++);
    top->CLK = 1;
    top->eval(); tfp->dump(time++);
}

void reset_dut(VIP_UDP_rx *top, VerilatedFstC *tfp, vluint64_t &time) {
    top->nRST = 0;
    top->MAC_valid = 0;
    top->MAC_payload_rcv = 0;
    top->MAC_flush = 0;
    top->bytes_rcv_len = 0;
    
    for (int i = 0; i < 5; i++) {
        tick(top, tfp, time);
    }

    top->nRST = 1;
    
    for (int i = 0; i < 5; i++) {
        tick(top, tfp, time);
    }
}

void send_ip_packet(VIP_UDP_rx *top, VerilatedFstC *tfp, vluint64_t &time,
                    uint64_t header0, uint64_t header1, uint64_t header2, uint64_t header3,
                    const std::vector<uint64_t>& payload, uint8_t last_bytes = 8) {
    top->MAC_valid = 1;
    
    // send the IP header
    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header0;
    tick(top, tfp, time);
    tick(top, tfp, time);
    
    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header1;
    tick(top, tfp, time);
    // tick(top, tfp, time);
    
    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header2;
    tick(top, tfp, time);
    // tick(top, tfp, time);

    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header3;
    tick(top, tfp, time);
    // tick(top, tfp, time);
    
    // send the payload
    for (size_t i = 0; i < payload.size(); i++) {
        // tick(top, tfp, time);
        top->CLK = 0;
        top->bytes_rcv_len = (i == payload.size() - 1) ? last_bytes : 8;
        top->MAC_payload_rcv = payload[i];
        top->eval();
        tfp->dump(time++);
        
        top->CLK = 1;
        top->eval();
        tfp->dump(time++);
    }
    
    top->MAC_valid = 0;
    top->bytes_rcv_len = 0;
    
    // Allow some time for the DUT to process the packet
    for (int i = 0; i < 10; i++) {
        tick(top, tfp, time);
    }
}

uint16_t calculate_checksum(uint64_t header0, uint64_t header1, uint64_t header2, uint64_t header3) {

    uint16_t version_ihl = (header0) & 0xFFFF;
    // uint16_t tos = (header0 >> 32) & 0xFFFF;
    uint16_t total_length = (header1 >> 48) & 0xFFFF;
    uint16_t identification = (header1 >> 32) & 0xFFFF;
    uint16_t flags_frag_offset = (header1 >> 16) & 0xFFFF;
    uint16_t ttl_protocol = header1 & 0xFFFF;
    // uint16_t header_checksum = (header2 >> 48) & 0xFFFF;
    uint16_t src_addr_low = (header2 >> 16) & 0xFFFF;
    uint16_t src_addr_high = (header2 >> 32) & 0xFFFF;
    uint16_t dest_addr_high = header2 & 0xFFFF;
    uint16_t dest_addr_low = (header3 >> 48) & 0xFFFF;
    
    uint32_t sum = 0;
    sum += version_ihl;
    // sum += tos;
    sum += total_length;
    sum += identification;
    sum += flags_frag_offset;
    sum += ttl_protocol;
    std::cout << "checksum result is " << std::hex << sum << std::endl;
    // sum += header_checksum;
    sum += src_addr_low; 
    sum += src_addr_high;         
    sum += dest_addr_high;    
    std::cout << "checksum result is " << std::hex << sum << std::endl;        
    sum += dest_addr_low;             

    while (sum >> 16) {
        sum = (sum & 0xFFFF) + (sum >> 16);
    }
    std::cout << "checksum result is " << std::hex << sum << std::endl;
    // return ~static_cast<uint16_t>(sum);
    return static_cast<uint16_t>(sum);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VIP_UDP_rx *top = new VIP_UDP_rx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("IP_UDP_rx.fst");

    vluint64_t time = 0;

    // Reset phase
    reset_dut(top, tfp, time);

    std::vector<uint64_t> payload = {0xA5A5A5A5A5A50000, 0x5A5A5A5A5A5A5A5A};
    // uint64_t udp_header =

    std::cout << "Starting Test Case 1: Valid TCP Packet" << std::endl;
    uint64_t header0 = ((uint64_t)SAMPLE_MAC_SRC_ADDR << 32) | IP_TYPE_IPV4 << 16 |0x4500; // Version 4, IHL 5, Type of Service 0
    uint64_t header1 = (0x003CULL << 48) | (0x1234ULL << 32) | (0x5000ULL << 16) | (0x40ULL << 8) | TCP_PROTOCOL;
    uint64_t header2 = (0x0000ULL << 48) | ((uint64_t)IP_SRC_ADDR << 16) | (IP_DEST_ADDR >> 16);
    uint64_t udp_header = static_cast<uint64_t>(IP_DEST_ADDR & 0xFFFF) << 48 | ((uint64_t)UDP_SRC_ADDR << 32) | ((uint64_t)UDP_DEST_ADDR << 16) | UDP_LEN;
    uint16_t checksum = calculate_checksum(header0, header1, header2, udp_header);
    header2 = (static_cast<uint64_t>(checksum) << 48) | (header2 & 0x0000FFFFFFFFFFFF);
    send_ip_packet(top, tfp, time, header0, header1, header2, udp_header, payload);

    std::cout << "Starting Test Case 1: Valid UDP Packet" << std::endl;
    header0 = ((uint64_t)SAMPLE_MAC_SRC_ADDR << 32) | IP_TYPE_IPV4 << 16 |0x4500; // Version 4, IHL 5, Type of Service 0
    header1 = (0x003CULL << 48) | (0x1234ULL << 32) | (0x5000ULL << 16) | (0x40ULL << 8) | UDP_PROTOCOL;
    header2 = (0x0000ULL << 48) | ((uint64_t)IP_SRC_ADDR << 16) | (IP_DEST_ADDR >> 16);
    udp_header = static_cast<uint64_t>(IP_DEST_ADDR & 0xFFFF) << 48 | ((uint64_t)UDP_SRC_ADDR << 32) | ((uint64_t)UDP_DEST_ADDR << 16) | UDP_LEN;
    checksum = calculate_checksum(header0, header1, header2, udp_header);
    header2 = (static_cast<uint64_t>(checksum) << 48) | (header2 & 0x0000FFFFFFFFFFFF);
    send_ip_packet(top, tfp, time, header0, header1, header2, udp_header, payload);

    for (int i = 0; i < 20; i++) {
        tick(top, tfp, time);
    }

    tfp->close();
    delete top;
    delete tfp;

    std::cout << "Simulation completed successfully." << std::endl;
    return 0;
}
