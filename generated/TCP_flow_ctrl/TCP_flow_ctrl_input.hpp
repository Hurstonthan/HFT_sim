#ifndef TCP_FLOW_CTRL_INPUT_HPP
#define TCP_FLOW_CTRL_INPUT_HPP

#include <cstdint>

void reset_input_TCP_flow_ctrl();
void drive_input_TCP_flow_ctrl(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t TCP_control_rx, std::uint32_t seq_num_rx, std::uint32_t ACK_rx, std::uint8_t offset_rx, std::uint16_t window_size_rx, std::uint16_t checksum_rx, std::uint16_t urgent_pointer_rx, std::uint8_t rcv_data, std::uint8_t timeout_flag, std::uint32_t ISN_num, std::uint32_t bytes_sent, std::uint32_t bytes_abt_sent, std::uint32_t payload_len_rx, std::uint8_t TCP_last, std::uint32_t seq_rx_FIFO_rd, std::uint8_t TCP_bytes_trk, std::uint8_t wr_FIFO_len, std::uint8_t rd_FIFO_len, std::uint32_t wr_FIFO_ptr, std::uint8_t nw_segment, std::uint8_t TCP_flush);

#endif
