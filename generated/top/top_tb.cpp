
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "top_input.hpp"
#include <cstdint>
#include <iostream>
#include <vector>
#include <tuple>
static vluint64_t main_time = 0;
// uint16_t IP_pseuder = 0x1234;
double sc_time_stamp() { return main_time; }
struct IP_rx_in {
    const char              *name;
    uint64_t    payload;
};

struct IP_addr {
    uint32_t src_ip;
    uint32_t dest_ip;
    
};

struct IP_payload_t {
    uint8_t bytes_len;
    uint64_t payload;
};


Vtop *top = new Vtop;
VerilatedFstC *tfp = new VerilatedFstC;

IP_rx_in in1;
IP_rx_in in2;
IP_rx_in in3;

std::vector<IP_payload_t> testcase1 {
    {8, 0x1111222233334444}
};

IP_addr IP_pseudo = {
    0xABCD,
    0x1234
};



static void tick(Vtop *top, VerilatedFstC *tfp) {
    top->CLK = 1;
    top->eval(); 
    tfp->dump(main_time++);          
       
    top->CLK = 0;          
    top->eval();
    tfp->dump(main_time++);
}


uint16_t getting_tcp_len (
    const std::vector<IP_payload_t>& payload
) {
    uint16_t tcp_len = 0;
    for (const auto& w: payload) {
        tcp_len += w.bytes_len;
    }
    return tcp_len;
}

uint16_t calc_tcp_checksum(IP_addr ip_pseudo,
                           const std::vector<IP_rx_in>& hdr64,
                           const std::vector<IP_payload_t>& payload)
{
    uint32_t sum = 0;
    uint16_t tcp_len;
    tcp_len = getting_tcp_len (payload);

    auto add16 = [&](uint16_t w) {
        sum += w;
        if (sum > 0xFFFF)
            sum = (sum & 0xFFFF) + 1;
    };

    /* ---------- 1. pseudo-header (3 × 16-bit) ---------- */
    add16((ip_pseudo.src_ip << 16) && 0xFFF);       // src-IP[31:16] ⊕ dst-IP[31:16] in this TB
    add16(ip_pseudo.src_ip && 0xFFF);
    add16((ip_pseudo.dest_ip << 16) && 0xFFF);       // src-IP[31:16] ⊕ dst-IP[31:16] in this TB
    add16(ip_pseudo.dest_ip && 0xFFF);
    add16(0x0006);          // protocol = 6 (TCP)
    add16(20 + tcp_len);         // TCP header + payload length

    /* ---------- 2. TCP 20-byte header (3 × 64-bit) ----- */
    for (const auto& w : hdr64) {
        uint64_t v = w.payload;
        for (int i = 0; i < 4; ++i) {       // 4 × 16-bit in each 64-bit
            uint16_t word = (v >> (48 - 16*i)) & 0xFFFF;
            add16(word);
        }
    }

    for (const auto& w: payload) {
        uint64_t v = w.payload;
        for (int i = 0; i < 4; i++) {
            uint16_t word = (v >> (48 - 16*i)) & 0xFFFF;
            add16(word);
        }
    }

    return static_cast<uint16_t>(~sum);      // one’s-complement
}


std::vector<IP_rx_in> prepare_header (uint32_t seq_num_rx, uint32_t ACK_num_rx, uint8_t TCP_control_rx_arg, std::vector<IP_payload_t>& payload) {
    uint16_t seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    uint16_t seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    uint16_t window_size_rx   = 0x0000;
    uint16_t checksum_rx      = 0x0000;
    uint16_t urgent_pointer_rx= 0x0000;
    uint8_t  TCP_control_rx   = TCP_control_rx_arg;
    std::vector<IP_rx_in> TCP_header;

    in1.name = "48-bit src/dst ports + MSB seq";
    in1.payload = (static_cast<uint64_t>(0x12345678ULL << 32) | seq_num_MSB);

    in2.name = "64-bit LSB seq, ACK, hdrLen, ctrl";
    in2.payload = ((static_cast<uint64_t>(seq_num_LSB) << 48) | (static_cast<uint64_t>(ACK_num_rx) << 16)  | (static_cast<uint64_t>(0x50) << 8) | TCP_control_rx);
    
    in3.name = "64-bit window, checksum, urgPtr, padding";
    in3.payload = (static_cast<uint64_t>(window_size_rx)     << 48) |
                  (static_cast<uint64_t>(checksum_rx)        << 32) |
                  (static_cast<uint64_t>(urgent_pointer_rx)  << 16) |
                  (static_cast<uint64_t>(0x0000));
    
    TCP_header = {in1, in2, in3};

    checksum_rx = calc_tcp_checksum (IP_pseudo, TCP_header, payload);

    in3.payload = (static_cast<uint64_t>(window_size_rx)     << 48) |
                  (static_cast<uint64_t>(checksum_rx)        << 32) |
                  (static_cast<uint64_t>(urgent_pointer_rx)  << 16) |
                  (static_cast<uint64_t>(0x0000));


    TCP_header = {in1, in2, in3};
    return TCP_header;
}

uint16_t IP_pseuder_cal (IP_addr ip_pseudo, std::vector<IP_payload_t> payload) {
    uint32_t sum = 0;
    uint16_t tcp_len;
    tcp_len = getting_tcp_len (payload);
    auto add16 = [&](uint16_t w) {
        sum += w;
        if (sum > 0xFFFF)
            sum = (sum & 0xFFFF) + 1;
    };

    /* ---------- 1. pseudo-header (3 × 16-bit) ---------- */
    add16((ip_pseudo.src_ip << 16) && 0xFFF);       // src-IP[31:16] ⊕ dst-IP[31:16] in this TB
    add16(ip_pseudo.src_ip && 0xFFF);
    add16((ip_pseudo.dest_ip << 16) && 0xFFF);       // src-IP[31:16] ⊕ dst-IP[31:16] in this TB
    add16(ip_pseudo.dest_ip && 0xFFF);
    add16(0x0006);          // protocol = 6 (TCP)
    add16(20 + tcp_len);         // TCP header + payload length

    return static_cast<uint16_t> (sum);

}

void rcv_IP (const std::vector<IP_rx_in>& IP_payloads, const std::vector<IP_payload_t>& payload) {
    top -> IP_pseuder = IP_pseuder_cal(IP_pseudo, payload);
    top -> TCP_len = getting_tcp_len (payload);

    for (size_t i = 0; i < IP_payloads.size(); i++) {
        top -> IP_valid = 1;
        top -> IP_bytes_rcv = 8;
        top -> IP_payload = IP_payloads[i].payload;
        printf("Cycle %ld: name: %s IP_payload: %ld", i, IP_payloads[i].name, IP_payloads[i].payload);
        tick(top, tfp);
    }

    top -> IP_valid = 0;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);
    
    top->trace(tfp, 99);
    tfp->open("top.vcd");

        /* --------------------- example header-building code ------------------- */
    const uint32_t ISN_seq_rx = 0xBBCCDADA;
    uint32_t seq_num_rx       = ISN_seq_rx;
    uint32_t ACK_num_rx       = 0x1234ABCD;

    uint16_t seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    uint16_t seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    uint16_t window_size_rx   = 0x0000;
    uint16_t checksum_rx      = 0x0000;
    uint16_t urgent_pointer_rx= 0x0000;
    uint8_t  TCP_control_rx   = 0xFF;

    std::vector<IP_rx_in> TCP_header;
    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, testcase1);

    // Reset phase
    reset_input_top();
    tick(top, tfp);

    // Example stimulus
    drive_input_top(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    top -> nRST = 1;
    tick(top, tfp);
    tick(top, tfp);
    rcv_IP (TCP_header, testcase1);
    // for (int i = 0; i < 20; ++i) tick(top, tfp);

    tfp->close();
    delete top;
    return 0;
}
