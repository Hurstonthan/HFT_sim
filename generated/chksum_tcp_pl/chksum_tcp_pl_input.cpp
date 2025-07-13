#include "chksum_tcp_pl_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t FIFO_rd_en;
std::uint8_t clear;
std::uint32_t TCP_payload_tx;

void reset_input_chksum_tcp_pl() {
    CLK = 0;
    nRST = 0;
    FIFO_rd_en = 0;
    clear = 0;
    TCP_payload_tx = 0;
}

void drive_input_chksum_tcp_pl(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t FIFO_rd_en_in, std::uint8_t clear_in, std::uint32_t TCP_payload_tx_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    FIFO_rd_en = FIFO_rd_en_in;
    clear = clear_in;
    TCP_payload_tx = TCP_payload_tx_in;
}
