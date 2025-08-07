#ifndef MAC_IP_UDP_RX_INPUT_HPP
#define MAC_IP_UDP_RX_INPUT_HPP

#include <cstdint>

void reset_input_MAC_IP_UDP_rx();
void drive_input_MAC_IP_UDP_rx(std::uint8_t CLK, std::uint32_t xgmii_rxd, std::uint32_t xgmii_rxc);

#endif
