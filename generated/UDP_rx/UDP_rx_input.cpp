#include "UDP_rx_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t IP_valid;
std::uint8_t IP_flush;
std::uint64_t IP_payload;
std::uint8_t is_udp;

void reset_input_UDP_rx() {
    CLK = 0;
    IP_valid = 0;
    IP_flush = 0;
    IP_payload = 0;
    is_udp = 0;
}

void drive_input_UDP_rx(std::uint8_t CLK_in, std::uint8_t IP_valid_in, std::uint8_t IP_flush_in, std::uint64_t IP_payload_in, std::uint8_t is_udp_in) {
    CLK = CLK_in;
    IP_valid = IP_valid_in;
    IP_flush = IP_flush_in;
    IP_payload = IP_payload_in;
    is_udp = is_udp_in;
}
