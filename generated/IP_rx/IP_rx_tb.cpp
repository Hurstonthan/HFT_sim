#include "VIP_rx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <iostream>
#include <vector>

// 定义常量
const uint8_t TCP_PROTOCOL = 6;
const uint8_t UDP_PROTOCOL = 17;
const uint8_t ICMP_PROTOCOL = 1;
const uint32_t IP_SRC_ADDR = 0xC0A80102; // 192.168.1.2
const uint32_t IP_DEST_ADDR = 0xC0A80101; // 192.168.1.1

// 时钟滴答函数
static void tick(VIP_rx *top, VerilatedFstC *tfp, vluint64_t &time) {
    // 上升沿
    top->CLK = 0;
    top->eval();
    tfp->dump(time++);
    
    // 下降沿
    top->CLK = 1;
    top->eval();
    tfp->dump(time++);
}

// 复位函数
void reset_dut(VIP_rx *top, VerilatedFstC *tfp, vluint64_t &time) {
    top->nRST = 0;
    top->MAC_valid = 0;
    top->MAC_payload_rcv = 0;
    top->MAC_flush = 0;
    top->bytes_rcv_len = 0;
    
    // 应用复位信号5个时钟周期
    for (int i = 0; i < 5; i++) {
        tick(top, tfp, time);
    }
    
    top->nRST = 1;
    
    // 释放复位后等待5个时钟周期
    for (int i = 0; i < 5; i++) {
        tick(top, tfp, time);
    }
}

// 计算IP头校验和
uint16_t calculate_checksum(uint64_t header0, uint64_t header1, uint64_t header2, uint64_t header3) {
    // 提取IP头字段
    uint16_t version_ihl = (header0 >> 48) & 0xFFFF;
    uint16_t tos = (header0 >> 32) & 0xFFFF;
    uint16_t total_length = (header1 >> 48) & 0xFFFF;
    uint16_t identification = (header1 >> 32) & 0xFFFF;
    uint16_t flags_frag_offset = (header1 >> 16) & 0xFFFF;
    uint16_t ttl_protocol = header1 & 0xFFFF;
    uint16_t header_checksum = (header2 >> 48) & 0xFFFF;
    uint32_t src_addr = (header2 >> 16) & 0xFFFFFFFF;
    uint16_t dest_addr_high = header2 & 0xFFFF;
    uint16_t dest_addr_low = (header3 >> 48) & 0xFFFF;
    
    // 构建伪头部用于校验和计算
    uint32_t sum = 0;
    sum += version_ihl;
    sum += tos;
    sum += total_length;
    sum += identification;
    sum += flags_frag_offset;
    sum += ttl_protocol;
    sum += header_checksum;
    sum += (src_addr >> 16) & 0xFFFF; // src_addr高16位
    sum += src_addr & 0xFFFF;         // src_addr低16位
    sum += dest_addr_high;            // dest_addr高16位
    sum += dest_addr_low;             // dest_addr低16位
    
    // 处理进位
    while (sum >> 16) {
        sum = (sum & 0xFFFF) + (sum >> 16);
    }
    
    return ~static_cast<uint16_t>(sum);
}

// 发送IP数据包
void send_ip_packet(VIP_rx *top, VerilatedFstC *tfp, vluint64_t &time,
                    uint64_t header0, uint64_t header1, uint64_t header2, uint64_t header3,
                    const std::vector<uint64_t>& payload, uint8_t last_bytes = 8) {
    top->MAC_valid = 1;
    
    // 发送4个包头
    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header0;
    tick(top, tfp, time);
    
    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header1;
    tick(top, tfp, time);
    
    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header2;
    tick(top, tfp, time);
    
    top->bytes_rcv_len = 8;
    top->MAC_payload_rcv = header3;
    tick(top, tfp, time);
    
    // 发送负载 - 确保在时钟边沿前设置信号
    for (size_t i = 0; i < payload.size(); i++) {
        // 在时钟低电平时设置信号
        top->CLK = 0;
        top->bytes_rcv_len = (i == payload.size() - 1) ? last_bytes : 8;
        top->MAC_payload_rcv = payload[i];
        top->eval();
        tfp->dump(time++);
        
        // 时钟上升沿
        top->CLK = 1;
        top->eval();
        tfp->dump(time++);
    }
    
    // 结束发送
    top->MAC_valid = 0;
    top->bytes_rcv_len = 0;
    
    // 添加空闲周期
    for (int i = 0; i < 10; i++) {
        tick(top, tfp, time);
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    VIP_rx *top = new VIP_rx;
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("IP_rx.fst");
    
    vluint64_t time = 0;
    
    // 复位设备
    reset_dut(top, tfp, time);
    
    // 定义测试负载
    std::vector<uint64_t> payload = {0xA5A5A5A5A5A5A5A5, 0x5A5A5A5A5A5A5A5A};
    std::vector<uint64_t> icmp_payload = {0xCAFEBABECAFEBABE};

    // 测试用例1: 有效的TCP数据包
    std::cout << "Starting Test Case 1: Valid TCP Packet" << std::endl;
    uint64_t header0 = (0x112233445566ULL << 16) | 0x0800;
    uint64_t header1 = (0x003CULL << 48) | (0x1234ULL << 32) | (0x5000ULL << 16) | (0x40ULL << 8) | TCP_PROTOCOL;
    uint64_t header2 = (0x0000ULL << 48) | (IP_SRC_ADDR << 16) | (IP_DEST_ADDR >> 16);
    uint64_t header3 = static_cast<uint64_t>(IP_DEST_ADDR & 0xFFFF) << 48;
    
    uint16_t checksum = calculate_checksum(header0, header1, header2, header3);
    header2 = (static_cast<uint64_t>(checksum) << 48) | (header2 & 0x0000FFFFFFFFFFFF);
    send_ip_packet(top, tfp, time, header0, header1, header2, header3, payload);
    
    // 测试用例2: 有效的UDP数据包
    std::cout << "Starting Test Case 2: Valid UDP Packet" << std::endl;
    header0 = (0x11223344ULL << 32) | 0x0800;
    header1 = (0x003CULL << 48) | (0x1234ULL << 32) | (0x5000ULL << 16) | (0x40ULL << 8) | UDP_PROTOCOL;
    header2 = (0x0000ULL << 48) | (IP_SRC_ADDR << 16) | (IP_DEST_ADDR >> 16);
    header3 = static_cast<uint64_t>(IP_DEST_ADDR & 0xFFFF) << 48;
    
    checksum = calculate_checksum(header0, header1, header2, header3);
    header2 = (static_cast<uint64_t>(checksum) << 48) | (header2 & 0x0000FFFFFFFFFFFF);
    send_ip_packet(top, tfp, time, header0, header1, header2, header3, payload);
    
    // 测试用例3: 无效的数据包
    std::cout << "Starting Test Case 3: Invalid Packet (Wrong Checksum)" << std::endl;
    header0 = (0x11223344ULL << 32) | 0x0800;
    header1 = (0x003CULL << 48) | (0x1234ULL << 32) | (0x5000ULL << 16) | (0x40ULL << 8) | TCP_PROTOCOL;
    header2 = (0x0000ULL << 48) | (IP_SRC_ADDR << 16) | (IP_DEST_ADDR >> 16);
    header3 = static_cast<uint64_t>(IP_DEST_ADDR & 0xFFFF) << 48;
    
    checksum = calculate_checksum(header0, header1, header2, header3);
    header2 = (static_cast<uint64_t>(checksum + 1) << 48) | (header2 & 0x0000FFFFFFFFFFFF);
    send_ip_packet(top, tfp, time, header0, header1, header2, header3, payload);
    
    // 测试用例4: Ping (ICMP)
    std::cout << "Starting Test Case 4: Ping (ICMP)" << std::endl;
    header0 = (0x112233445566ULL << 16) | 0x0800;
    header1 = (0x003CULL << 48) | (0x1234ULL << 32) | (0x5000ULL << 16) | (0x40ULL << 8) | ICMP_PROTOCOL;
    header2 = (0x0000ULL << 48) | (IP_SRC_ADDR << 16) | (IP_DEST_ADDR >> 16);
    header3 = static_cast<uint64_t>(IP_DEST_ADDR & 0xFFFF) << 48;
    
    checksum = calculate_checksum(header0, header1, header2, header3);
    header2 = (static_cast<uint64_t>(checksum) << 48) | (header2 & 0x0000FFFFFFFFFFFF);
    send_ip_packet(top, tfp, time, header0, header1, header2, header3, icmp_payload);
    
    // 结束仿真
    for (int i = 0; i < 20; i++) {
        tick(top, tfp, time);
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    std::cout << "Simulation completed successfully." << std::endl;
    return 0;
}