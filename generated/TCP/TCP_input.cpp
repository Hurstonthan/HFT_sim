#include "TCP_input.hpp"

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t TX_en;
std::uint8_t IP_valid;
std::uint8_t IP_flush;
std::uint16_t IP_pseuder;
std::uint64_t IP_payload;
std::uint16_t TCP_len;
std::uint8_t IP_bytes_rcv;
std::uint8_t wr_ptr_out;
std::uint8_t wr_FIFO_len;
std::uint8_t rd_FIFO_en;
std::uint32_t seq_rx_FIFO_rd;
std::uint8_t full;
std::uint8_t end_ss;
std::uint64_t rd_FIFO_payload;
std::uint8_t rd_FIFO_valid;
std::uint8_t rd_FIFO_last;
std::uint16_t bytes_abt_sent;
std::uint8_t TCP_send;
std::uint8_t re_trans;
std::uint16_t checksum_re_trans;

void reset_input_TCP() {
    CLK=0;
    nRST=0;
    TX_en=0;
    IP_valid=0;
    IP_flush=0;
    IP_pseuder=0;
    IP_payload=0;
    TCP_len=0;
    IP_bytes_rcv=0;
    wr_ptr_out=0;
    wr_FIFO_len=0;
    rd_FIFO_en=0;
    seq_rx_FIFO_rd=0;
    full=0;
    end_ss=0;
    rd_FIFO_payload=0;
    rd_FIFO_valid=0;
    rd_FIFO_last=0;
    bytes_abt_sent=0;
    TCP_send=0;
    re_trans=0;
    checksum_re_trans=0;
}

void drive_input_TCP(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t TX_en_in, std::uint8_t IP_valid_in, std::uint8_t IP_flush_in, std::uint16_t IP_pseuder_in, std::uint64_t IP_payload_in, std::uint16_t TCP_len_in, std::uint8_t IP_bytes_rcv_in, std::uint8_t wr_ptr_out_in, std::uint8_t wr_FIFO_len_in, std::uint8_t rd_FIFO_en_in, std::uint32_t seq_rx_FIFO_rd_in, std::uint8_t full_in, std::uint8_t end_ss_in, std::uint64_t rd_FIFO_payload_in, std::uint8_t rd_FIFO_valid_in, std::uint8_t rd_FIFO_last_in, std::uint16_t bytes_abt_sent_in, std::uint8_t TCP_send_in, std::uint8_t re_trans_in, std::uint16_t checksum_re_trans_in) {
    CLK=CLK_in;
    nRST=nRST_in;
    TX_en=TX_en_in;
    IP_valid=IP_valid_in;
    IP_flush=IP_flush_in;
    IP_pseuder=IP_pseuder_in;
    IP_payload=IP_payload_in;
    TCP_len=TCP_len_in;
    IP_bytes_rcv=IP_bytes_rcv_in;
    wr_ptr_out=wr_ptr_out_in;
    wr_FIFO_len=wr_FIFO_len_in;
    rd_FIFO_en=rd_FIFO_en_in;
    seq_rx_FIFO_rd=seq_rx_FIFO_rd_in;
    full=full_in;
    end_ss=end_ss_in;
    rd_FIFO_payload=rd_FIFO_payload_in;
    rd_FIFO_valid=rd_FIFO_valid_in;
    rd_FIFO_last=rd_FIFO_last_in;
    bytes_abt_sent=bytes_abt_sent_in;
    TCP_send=TCP_send_in;
    re_trans=re_trans_in;
    checksum_re_trans=checksum_re_trans_in;
}
