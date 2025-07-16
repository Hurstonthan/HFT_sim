#include "MAC_rx_haha_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint32_t xgmii_rxd;
std::uint32_t xgmii_rxc;

void reset_input_MAC_rx_haha() {
    CLK = 0;
    nRST = 0;
    xgmii_rxd = 0;
    xgmii_rxc = 0;
}

void drive_input_MAC_rx_haha(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint32_t xgmii_rxd_in, std::uint32_t xgmii_rxc_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    xgmii_rxd = xgmii_rxd_in;
    xgmii_rxc = xgmii_rxc_in;
}
