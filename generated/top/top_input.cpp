#include "top_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t IP_valid;
std::uint8_t IP_flush;
std::uint16_t IP_pseuder;
std::uint64_t IP_payload;
std::uint16_t TCP_len;
std::uint8_t IP_bytes_rcv;
std::uint8_t TCP_send;
std::uint8_t TX_en;
std::uint8_t axis_last;
std::uint8_t wr_FIFO_en;
std::uint32_t len_seq;
std::uint32_t soupbin_TCP_payload;
std::uint8_t axis_r_en;

void reset_input_top() {
    CLK = 0;
    nRST = 0;
    IP_valid = 0;
    IP_flush = 0;
    IP_pseuder = 0;
    IP_payload = 0;
    TCP_len = 0;
    IP_bytes_rcv = 0;
    TCP_send = 0;
    TX_en = 0;
    axis_last = 0;
    wr_FIFO_en = 0;
    len_seq = 0;
    soupbin_TCP_payload = 0;
    axis_r_en = 0;
}

void drive_input_top(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t IP_valid_in, std::uint8_t IP_flush_in, std::uint16_t IP_pseuder_in, std::uint64_t IP_payload_in, std::uint16_t TCP_len_in, std::uint8_t IP_bytes_rcv_in, std::uint8_t TCP_send_in, std::uint8_t TX_en_in, std::uint8_t axis_last_in, std::uint8_t wr_FIFO_en_in, std::uint32_t len_seq_in, std::uint32_t soupbin_TCP_payload_in, std::uint8_t axis_r_en_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    IP_valid = IP_valid_in;
    IP_flush = IP_flush_in;
    IP_pseuder = IP_pseuder_in;
    IP_payload = IP_payload_in;
    TCP_len = TCP_len_in;
    IP_bytes_rcv = IP_bytes_rcv_in;
    TCP_send = TCP_send_in;
    TX_en = TX_en_in;
    axis_last = axis_last_in;
    wr_FIFO_en = wr_FIFO_en_in;
    len_seq = len_seq_in;
    soupbin_TCP_payload = soupbin_TCP_payload_in;
    axis_r_en = axis_r_en_in;
}
