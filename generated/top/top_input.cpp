#include "top_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t TX_en;
std::uint16_t UDP_len;
std::uint32_t xgmii_rxd;
std::uint32_t xgmii_rxc;
std::uint8_t axis_last;
std::uint8_t wr_FIFO_en;
std::uint32_t len_seq;
std::uint32_t soupbin_TCP_payload;
std::uint8_t axis_r_en;

void reset_input_top() {
    CLK = 0;
    nRST = 0;
    TX_en = 0;
    UDP_len = 0;
    xgmii_rxd = 0;
    xgmii_rxc = 0;
    axis_last = 0;
    wr_FIFO_en = 0;
    len_seq = 0;
    soupbin_TCP_payload = 0;
    axis_r_en = 0;
}

void drive_input_top(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t TX_en_in, std::uint16_t UDP_len_in, std::uint32_t xgmii_rxd_in, std::uint32_t xgmii_rxc_in, std::uint8_t axis_last_in, std::uint8_t wr_FIFO_en_in, std::uint32_t len_seq_in, std::uint32_t soupbin_TCP_payload_in, std::uint8_t axis_r_en_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    TX_en = TX_en_in;
    UDP_len = UDP_len_in;
    xgmii_rxd = xgmii_rxd_in;
    xgmii_rxc = xgmii_rxc_in;
    axis_last = axis_last_in;
    wr_FIFO_en = wr_FIFO_en_in;
    len_seq = len_seq_in;
    soupbin_TCP_payload = soupbin_TCP_payload_in;
    axis_r_en = axis_r_en_in;
}
