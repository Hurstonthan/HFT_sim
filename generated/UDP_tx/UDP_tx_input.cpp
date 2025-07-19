#include "UDP_tx_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t UDP_valid;
std::uint64_t UDP_payload;
std::uint16_t UDP_len;
std::uint16_t UDP_src_port;
std::uint16_t UDP_dest_port;
std::uint8_t UDP_last;

void reset_input_UDP_tx() {
    CLK = 0;
    UDP_valid = 0;
    UDP_payload = 0;
    UDP_len = 0;
    UDP_src_port = 0;
    UDP_dest_port = 0;
    UDP_last = 0;
}

void drive_input_UDP_tx(std::uint8_t CLK_in, std::uint8_t UDP_valid_in, std::uint64_t UDP_payload_in, std::uint16_t UDP_len_in, std::uint16_t UDP_src_port_in, std::uint16_t UDP_dest_port_in, std::uint8_t UDP_last_in) {
    CLK = CLK_in;
    UDP_valid = UDP_valid_in;
    UDP_payload = UDP_payload_in;
    UDP_len = UDP_len_in;
    UDP_src_port = UDP_src_port_in;
    UDP_dest_port = UDP_dest_port_in;
    UDP_last = UDP_last_in;
}
