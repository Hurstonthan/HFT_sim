#ifndef IP_UDP_RX_INPUT_HPP
#define IP_UDP_RX_INPUT_HPP

#include <cstdint>

void reset_input_IP_UDP_rx();
void drive_input_IP_UDP_rx(std::uint8_t CLK, std::uint8_t MAC_valid, std::uint64_t MAC_payload_rcv, std::uint8_t MAC_flush, std::uint8_t bytes_rcv_len);

#endif
