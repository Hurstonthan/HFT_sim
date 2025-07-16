#include "TCP_receiver_input.hpp"
#include <iostream>

std::uint64_t IP_payload_rx;
std::uint8_t valid_IP_header_rx;
std::uint8_t IP_flush;
std::uint16_t TCP_len;
std::uint16_t IP_pseuder;

void reset_input_TCP_receiver() {
    IP_payload_rx = 0;
    valid_IP_header_rx = 0;
    IP_flush = 0;
    TCP_len = 0;
    IP_pseuder = 0;
}

void drive_input_TCP_receiver(std::uint64_t IP_payload_rx_in, std::uint8_t valid_IP_header_rx_in, std::uint8_t IP_flush_in, std::uint16_t TCP_len_in, std::uint16_t IP_pseuder_in) {
    IP_payload_rx = IP_payload_rx_in;
    valid_IP_header_rx = valid_IP_header_rx_in;
    IP_flush = IP_flush_in;
    TCP_len = TCP_len_in;
    IP_pseuder = IP_pseuder_in;
}
