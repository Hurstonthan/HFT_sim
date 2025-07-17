#ifndef CHKSUM_TCP_PL_INPUT_HPP
#define CHKSUM_TCP_PL_INPUT_HPP

#include <cstdint>

void reset_input_chksum_tcp_pl();
void drive_input_chksum_tcp_pl(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t FIFO_rd_en, std::uint8_t clear, std::uint32_t TCP_payload_tx);

#endif
