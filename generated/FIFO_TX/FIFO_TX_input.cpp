#include "FIFO_TX_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t seq_up;
std::uint32_t seq_num_tx;
std::uint8_t rd_FIFO_en;
std::uint32_t ACK_num;
std::uint8_t ACK_rcv_flag;
std::uint8_t out_order_req;
std::uint8_t axis_last;
std::uint8_t wr_FIFO_en;
std::uint32_t len_seq;
std::uint32_t soupbin_TCP_payload;

void reset_input_FIFO_TX() {
    CLK = 0;
    nRST = 0;
    seq_up = 0;
    seq_num_tx = 0;
    rd_FIFO_en = 0;
    ACK_num = 0;
    ACK_rcv_flag = 0;
    out_order_req = 0;
    axis_last = 0;
    wr_FIFO_en = 0;
    len_seq = 0;
    soupbin_TCP_payload = 0;
}

void drive_input_FIFO_TX(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t seq_up_in, std::uint32_t seq_num_tx_in, std::uint8_t rd_FIFO_en_in, std::uint32_t ACK_num_in, std::uint8_t ACK_rcv_flag_in, std::uint8_t out_order_req_in, std::uint8_t axis_last_in, std::uint8_t wr_FIFO_en_in, std::uint32_t len_seq_in, std::uint32_t soupbin_TCP_payload_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    seq_up = seq_up_in;
    seq_num_tx = seq_num_tx_in;
    rd_FIFO_en = rd_FIFO_en_in;
    ACK_num = ACK_num_in;
    ACK_rcv_flag = ACK_rcv_flag_in;
    out_order_req = out_order_req_in;
    axis_last = axis_last_in;
    wr_FIFO_en = wr_FIFO_en_in;
    len_seq = len_seq_in;
    soupbin_TCP_payload = soupbin_TCP_payload_in;
}
