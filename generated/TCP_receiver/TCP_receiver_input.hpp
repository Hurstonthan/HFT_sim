#ifndef TCP_RECEIVER_INPUT_HPP
#define TCP_RECEIVER_INPUT_HPP

#include <cstdint>

void reset_input_TCP_receiver();
void drive_input_TCP_receiver(std::uint64_t IP_payload_rx, std::uint8_t valid_IP_header_rx, std::uint8_t IP_flush, std::uint16_t TCP_len, std::uint16_t IP_pseuder);

#endif
