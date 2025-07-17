#ifndef FIFO_TX_INPUT_HPP
#define FIFO_TX_INPUT_HPP

#include <cstdint>

void reset_input_FIFO_TX();
void drive_input_FIFO_TX(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t seq_up, std::uint32_t seq_num_tx, std::uint8_t rd_FIFO_en, std::uint32_t ACK_num, std::uint8_t ACK_rcv_flag, std::uint8_t out_order_req, std::uint8_t axis_last, std::uint8_t wr_FIFO_en, std::uint32_t len_seq, std::uint32_t soupbin_TCP_payload);

#endif
