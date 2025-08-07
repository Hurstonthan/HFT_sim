#include "MAC_IP_UDP_rx_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint32_t xgmii_rxd;
std::uint32_t xgmii_rxc;

void reset_input_MAC_IP_UDP_rx() {
    CLK = 0;
    xgmii_rxd = 0;
    xgmii_rxc = 0;
}

void drive_input_MAC_IP_UDP_rx(std::uint8_t CLK_in, std::uint32_t xgmii_rxd_in, std::uint32_t xgmii_rxc_in) {
    CLK = CLK_in;
    xgmii_rxd = xgmii_rxd_in;
    xgmii_rxc = xgmii_rxc_in;
}
