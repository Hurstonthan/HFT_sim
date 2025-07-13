#include "IP_rx_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t MAC_valid;
std::uint64_t MAC_payload_rcv;
std::uint8_t MAC_flush;
std::uint8_t bytes_rcv_len;

void reset_input_IP_rx() {
    CLK = 0;
    nRST = 0;
    MAC_valid = 0;
    MAC_payload_rcv = 0;
    MAC_flush = 0;
    bytes_rcv_len = 0;
}

void drive_input_IP_rx(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t MAC_valid_in, std::uint64_t MAC_payload_rcv_in, std::uint8_t MAC_flush_in, std::uint8_t bytes_rcv_len_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    MAC_valid = MAC_valid_in;
    MAC_payload_rcv = MAC_payload_rcv_in;
    MAC_flush = MAC_flush_in;
    bytes_rcv_len = bytes_rcv_len_in;
}
