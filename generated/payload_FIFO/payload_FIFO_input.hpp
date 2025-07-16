#ifndef PAYLOAD_FIFO_INPUT_HPP
#define PAYLOAD_FIFO_INPUT_HPP

#include <cstdint>

void reset_input_payload_FIFO();
void drive_input_payload_FIFO(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t nw_segment, std::uint8_t handshake_done, std::uint32_t seq_rcv_start, std::uint8_t TCP_flush, std::uint8_t axis_t_last, std::uint8_t wr_FIFO_en, std::uint64_t axis_data_rx, std::uint8_t wr_FIFO_offset, std::uint8_t rd_FIFO_valid, std::uint32_t rd_FIFO_ptr, std::uint32_t rd_FIFO_len, std::uint8_t axis_r_en);

#endif
