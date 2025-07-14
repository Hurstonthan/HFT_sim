#ifndef UDP_RX_INPUT_HPP
#define UDP_RX_INPUT_HPP

#include <cstdint>

void reset_input_UDP_rx();
void drive_input_UDP_rx(std::uint8_t CLK, std::uint8_t IP_valid, std::uint8_t IP_flush, std::uint64_t IP_payload, std::uint8_t is_udp);

#endif
