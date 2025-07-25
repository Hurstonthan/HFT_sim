#ifndef TCP_TX_INPUT_HPP
#define TCP_TX_INPUT_HPP

#include <cstdint>

void reset_input_TCP_tx();
void drive_input_TCP_tx(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t TCP_control_tx, std::uint32_t seq_num_tx, std::uint32_t ACK_tx, std::uint8_t offset_tx, std::uint16_t window_size_tx, std::uint16_t urgent_pointer_tx, std::uint8_t rd_FIFO_valid, std::uint8_t rd_FIFO_last, std::uint32_t rd_FIFO_payload, std::uint32_t bytes_abt_sent, std::uint8_t TCP_send, std::uint16_t TCP_basesum_payload);

#endif
