#ifndef MAC_RX_HAHA_INPUT_HPP
#define MAC_RX_HAHA_INPUT_HPP

#include <cstdint>

void reset_input_MAC_rx_haha();
void drive_input_MAC_rx_haha(std::uint8_t CLK, std::uint8_t nRST, std::uint32_t xgmii_rxd, std::uint32_t xgmii_rxc);

#endif
