#include "TCP_flow_ctrl_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t TCP_control_rx;
std::uint32_t seq_num_rx;
std::uint32_t ACK_rx;
std::uint8_t offset_rx;
std::uint16_t window_size_rx;
std::uint16_t checksum_rx;
std::uint16_t urgent_pointer_rx;
std::uint8_t rcv_data;
std::uint8_t timeout_flag;
std::uint32_t ISN_num;
std::uint32_t bytes_sent;
std::uint32_t bytes_abt_sent;
std::uint32_t payload_len_rx;
std::uint8_t TCP_last;
std::uint32_t seq_rx_FIFO_rd;
std::uint8_t TCP_bytes_trk;
std::uint8_t wr_FIFO_len;
std::uint8_t rd_FIFO_len;
std::uint32_t wr_FIFO_ptr;
std::uint8_t nw_segment;
std::uint8_t TCP_flush;

void reset_input_TCP_flow_ctrl() {
    CLK = 0;
    nRST = 0;
    TCP_control_rx = 0;
    seq_num_rx = 0;
    ACK_rx = 0;
    offset_rx = 0;
    window_size_rx = 0;
    checksum_rx = 0;
    urgent_pointer_rx = 0;
    rcv_data = 0;
    timeout_flag = 0;
    ISN_num = 0;
    bytes_sent = 0;
    bytes_abt_sent = 0;
    payload_len_rx = 0;
    TCP_last = 0;
    seq_rx_FIFO_rd = 0;
    TCP_bytes_trk = 0;
    wr_FIFO_len = 0;
    rd_FIFO_len = 0;
    wr_FIFO_ptr = 0;
    nw_segment = 0;
    TCP_flush = 0;
}

void drive_input_TCP_flow_ctrl(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t TCP_control_rx_in, std::uint32_t seq_num_rx_in, std::uint32_t ACK_rx_in, std::uint8_t offset_rx_in, std::uint16_t window_size_rx_in, std::uint16_t checksum_rx_in, std::uint16_t urgent_pointer_rx_in, std::uint8_t rcv_data_in, std::uint8_t timeout_flag_in, std::uint32_t ISN_num_in, std::uint32_t bytes_sent_in, std::uint32_t bytes_abt_sent_in, std::uint32_t payload_len_rx_in, std::uint8_t TCP_last_in, std::uint32_t seq_rx_FIFO_rd_in, std::uint8_t TCP_bytes_trk_in, std::uint8_t wr_FIFO_len_in, std::uint8_t rd_FIFO_len_in, std::uint32_t wr_FIFO_ptr_in, std::uint8_t nw_segment_in, std::uint8_t TCP_flush_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    TCP_control_rx = TCP_control_rx_in;
    seq_num_rx = seq_num_rx_in;
    ACK_rx = ACK_rx_in;
    offset_rx = offset_rx_in;
    window_size_rx = window_size_rx_in;
    checksum_rx = checksum_rx_in;
    urgent_pointer_rx = urgent_pointer_rx_in;
    rcv_data = rcv_data_in;
    timeout_flag = timeout_flag_in;
    ISN_num = ISN_num_in;
    bytes_sent = bytes_sent_in;
    bytes_abt_sent = bytes_abt_sent_in;
    payload_len_rx = payload_len_rx_in;
    TCP_last = TCP_last_in;
    seq_rx_FIFO_rd = seq_rx_FIFO_rd_in;
    TCP_bytes_trk = TCP_bytes_trk_in;
    wr_FIFO_len = wr_FIFO_len_in;
    rd_FIFO_len = rd_FIFO_len_in;
    wr_FIFO_ptr = wr_FIFO_ptr_in;
    nw_segment = nw_segment_in;
    TCP_flush = TCP_flush_in;
}
