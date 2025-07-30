#ifndef MAC_RX_INPUT_HPP
#define MAC_RX_INPUT_HPP

#include <cstdint>

void reset_input_MAC_rx();
void drive_input_MAC_rx(std::uint8_t CLK, std::uint8_t nRST, std::uint32_t xgmii_rxd, std::uint32_t xgmii_rxc);

#endif
