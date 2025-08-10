#ifndef TOP_INPUT_HPP
#define TOP_INPUT_HPP

#include <cstdint>

void reset_input_top();
void drive_input_top(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t TX_en, std::uint16_t UDP_len, std::uint32_t xgmii_rxd, std::uint32_t xgmii_rxc, std::uint8_t axis_last, std::uint8_t wr_FIFO_en, std::uint32_t len_seq, std::uint32_t soupbin_TCP_payload, std::uint8_t axis_r_en);

#endif
