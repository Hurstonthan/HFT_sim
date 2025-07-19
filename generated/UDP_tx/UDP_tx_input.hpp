#ifndef UDP_TX_INPUT_HPP
#define UDP_TX_INPUT_HPP

#include <cstdint>

void reset_input_UDP_tx();
void drive_input_UDP_tx(std::uint8_t CLK, std::uint8_t UDP_valid, std::uint64_t UDP_payload, std::uint16_t UDP_len, std::uint16_t UDP_src_port, std::uint16_t UDP_dest_port, std::uint8_t UDP_last);

#endif
