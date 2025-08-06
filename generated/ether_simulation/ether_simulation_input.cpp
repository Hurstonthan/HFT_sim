#include "ether_simulation_input.hpp"
#include <iostream>

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t tb_count;
std::uint8_t TX_en_svr;
std::uint32_t xgmii_rxd_svr;
std::uint32_t xgmii_rxc_svr;
std::uint8_t axis_last_svr;
std::uint8_t wr_FIFO_en_svr;
std::uint32_t len_seq_svr;
std::uint32_t soupbin_TCP_payload_svr;
std::uint8_t axis_r_en_svr;
std::uint8_t TX_en_clt;
std::uint32_t xgmii_rxd_clt;
std::uint32_t xgmii_rxc_clt;
std::uint8_t axis_last_clt;
std::uint8_t wr_FIFO_en_clt;
std::uint32_t len_seq_clt;
std::uint32_t soupbin_TCP_payload_clt;
std::uint8_t axis_r_en_clt;

void reset_input_ether_simulation() {
    CLK = 0;
    nRST = 0;
    tb_count = 0;
    TX_en_svr = 0;
    xgmii_rxd_svr = 0;
    xgmii_rxc_svr = 0;
    axis_last_svr = 0;
    wr_FIFO_en_svr = 0;
    len_seq_svr = 0;
    soupbin_TCP_payload_svr = 0;
    axis_r_en_svr = 0;
    TX_en_clt = 0;
    xgmii_rxd_clt = 0;
    xgmii_rxc_clt = 0;
    axis_last_clt = 0;
    wr_FIFO_en_clt = 0;
    len_seq_clt = 0;
    soupbin_TCP_payload_clt = 0;
    axis_r_en_clt = 0;
}

void drive_input_ether_simulation(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t tb_count_in, std::uint8_t TX_en_svr_in, std::uint32_t xgmii_rxd_svr_in, std::uint32_t xgmii_rxc_svr_in, std::uint8_t axis_last_svr_in, std::uint8_t wr_FIFO_en_svr_in, std::uint32_t len_seq_svr_in, std::uint32_t soupbin_TCP_payload_svr_in, std::uint8_t axis_r_en_svr_in, std::uint8_t TX_en_clt_in, std::uint32_t xgmii_rxd_clt_in, std::uint32_t xgmii_rxc_clt_in, std::uint8_t axis_last_clt_in, std::uint8_t wr_FIFO_en_clt_in, std::uint32_t len_seq_clt_in, std::uint32_t soupbin_TCP_payload_clt_in, std::uint8_t axis_r_en_clt_in) {
    CLK = CLK_in;
    nRST = nRST_in;
    tb_count = tb_count_in;
    TX_en_svr = TX_en_svr_in;
    xgmii_rxd_svr = xgmii_rxd_svr_in;
    xgmii_rxc_svr = xgmii_rxc_svr_in;
    axis_last_svr = axis_last_svr_in;
    wr_FIFO_en_svr = wr_FIFO_en_svr_in;
    len_seq_svr = len_seq_svr_in;
    soupbin_TCP_payload_svr = soupbin_TCP_payload_svr_in;
    axis_r_en_svr = axis_r_en_svr_in;
    TX_en_clt = TX_en_clt_in;
    xgmii_rxd_clt = xgmii_rxd_clt_in;
    xgmii_rxc_clt = xgmii_rxc_clt_in;
    axis_last_clt = axis_last_clt_in;
    wr_FIFO_en_clt = wr_FIFO_en_clt_in;
    len_seq_clt = len_seq_clt_in;
    soupbin_TCP_payload_clt = soupbin_TCP_payload_clt_in;
    axis_r_en_clt = axis_r_en_clt_in;
}
