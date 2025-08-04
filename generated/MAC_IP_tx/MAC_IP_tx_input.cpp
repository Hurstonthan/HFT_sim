#include "MAC_IP_tx_input.hpp"
#include <iostream>

std::uint8_t TX_en;
std::uint8_t protocol_last;
std::uint16_t len_data;
std::uint32_t protocol_transmit;

void reset_input_MAC_IP_tx() {
    TX_en = 0;
    protocol_last = 0;
    len_data = 0;
    protocol_transmit = 0;
}

void drive_input_MAC_IP_tx(std::uint8_t TX_en_in, std::uint8_t protocol_last_in, std::uint16_t len_data_in, std::uint32_t protocol_transmit_in) {
    TX_en = TX_en_in;
    protocol_last = protocol_last_in;
    len_data = len_data_in;
    protocol_transmit = protocol_transmit_in;
}
