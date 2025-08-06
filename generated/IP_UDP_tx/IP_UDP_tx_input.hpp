#ifndef IP_UDP_TX_INPUT_HPP
#define IP_UDP_TX_INPUT_HPP

#include <cstdint>

void reset_input_IP_UDP_tx();
void drive_input_IP_UDP_tx(std::uint8_t CLK, std::uint8_t valid, std::uint16_t UDP_len, std::uint64_t UDP_payload, std::uint8_t UDP_last);

#endif
