#ifndef IP_RX_INPUT_HPP
#define IP_RX_INPUT_HPP

#include <cstdint>

void reset_input_IP_rx();
void drive_input_IP_rx(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t MAC_valid, std::uint64_t MAC_payload_rcv, std::uint8_t MAC_flush, std::uint8_t bytes_rcv_len);

#endif
