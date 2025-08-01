#ifndef ETHERNET_RX_INPUT_HPP
#define ETHERNET_RX_INPUT_HPP

#include <cstdint>

void reset_input_ethernet_rx();
void drive_input_ethernet_rx(std::uint8_t CLK, std::uint32_t xgmii_rxd, std::uint32_t xgmii_rxc);

#endif
