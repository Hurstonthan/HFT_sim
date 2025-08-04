#ifndef MAC_IP_TX_INPUT_HPP
#define MAC_IP_TX_INPUT_HPP

#include <cstdint>

void reset_input_MAC_IP_tx();
void drive_input_MAC_IP_tx(std::uint8_t TX_en, std::uint8_t protocol_last, std::uint16_t len_data, std::uint32_t protocol_transmit);

#endif
