#ifndef ETHER_SIMULATION_INPUT_HPP
#define ETHER_SIMULATION_INPUT_HPP

#include <cstdint>

void reset_input_ether_simulation();
void drive_input_ether_simulation(std::uint8_t CLK, std::uint8_t nRST, std::uint8_t tb_count, std::uint8_t TX_en_svr, std::uint32_t xgmii_rxd_svr, std::uint32_t xgmii_rxc_svr, std::uint8_t axis_last_svr, std::uint8_t wr_FIFO_en_svr, std::uint32_t len_seq_svr, std::uint32_t soupbin_TCP_payload_svr, std::uint8_t axis_r_en_svr, std::uint8_t TX_en_clt, std::uint32_t xgmii_rxd_clt, std::uint32_t xgmii_rxc_clt, std::uint8_t axis_last_clt, std::uint8_t wr_FIFO_en_clt, std::uint32_t len_seq_clt, std::uint32_t soupbin_TCP_payload_clt, std::uint8_t axis_r_en_clt);

#endif
