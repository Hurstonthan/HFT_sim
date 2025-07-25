#include "TCP_tx_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t TCP_control_tx;
std::uint32_t seq_num_tx;
std::uint32_t ACK_tx;
std::uint8_t offset_tx;
std::uint16_t window_size_tx;
std::uint16_t urgent_pointer_tx;
std::uint8_t rd_FIFO_valid;
std::uint8_t rd_FIFO_last;
std::uint32_t rd_FIFO_payload;
std::uint32_t bytes_abt_sent;
std::uint8_t TCP_send;
std::uint16_t TCP_basesum_payload;

void reset_input_TCP_tx() {
    CLK = 0;
    nRST = 0;
    TCP_control_tx = 0;
    seq_num_tx = 0;
    ACK_tx = 0;
    offset_tx = 0;
    window_size_tx = 0;
    urgent_pointer_tx = 0;
    rd_FIFO_valid = 0;
    rd_FIFO_last = 0;
    rd_FIFO_payload = 0;
    bytes_abt_sent = 0;
    TCP_send = 0;
    TCP_basesum_payload = 0;
}

void drive_input_TCP_tx(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t TCP_control_tx_in, std::uint32_t seq_num_tx_in, std::uint32_t ACK_tx_in, std::uint8_t offset_tx_in, std::uint16_t window_size_tx_in, std::uint16_t urgent_pointer_tx_in, std::uint8_t rd_FIFO_valid_in, std::uint8_t rd_FIFO_last_in, std::uint32_t rd_FIFO_payload_in, std::uint32_t bytes_abt_sent_in, std::uint8_t TCP_send_in, std::uint16_t TCP_basesum_payload_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    TCP_control_tx = TCP_control_tx_in;
    seq_num_tx = seq_num_tx_in;
    ACK_tx = ACK_tx_in;
    offset_tx = offset_tx_in;
    window_size_tx = window_size_tx_in;
    urgent_pointer_tx = urgent_pointer_tx_in;
    rd_FIFO_valid = rd_FIFO_valid_in;
    rd_FIFO_last = rd_FIFO_last_in;
    rd_FIFO_payload = rd_FIFO_payload_in;
    bytes_abt_sent = bytes_abt_sent_in;
    TCP_send = TCP_send_in;
    TCP_basesum_payload = TCP_basesum_payload_in;
}
