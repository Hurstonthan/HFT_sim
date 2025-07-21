#ifndef TCP_INPUT_HPP
#define TCP_INPUT_HPP

#include <cstdint>

void reset_input_TCP();
void drive_input_TCP(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t TX_en, std::uint8_t IP_valid, std::uint8_t IP_flush, std::uint16_t IP_pseuder, std::uint64_t IP_payload, std::uint16_t TCP_len, std::uint8_t IP_bytes_rcv, std::uint8_t wr_ptr_out, std::uint8_t wr_FIFO_len, std::uint8_t rd_FIFO_en, std::uint32_t seq_rx_FIFO_rd, std::uint8_t full, std::uint8_t end_ss, std::uint64_t rd_FIFO_payload, std::uint8_t rd_FIFO_valid, std::uint8_t rd_FIFO_last, std::uint16_t bytes_abt_sent, std::uint8_t TCP_send, std::uint8_t re_trans, std::uint16_t checksum_re_trans);

#endif
