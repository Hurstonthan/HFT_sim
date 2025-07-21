#include "payload_FIFO_input.hpp"

std::uint8_t CLK;
std::uint8_t nRST;
std::uint8_t nw_segment;
std::uint8_t TCP_flush;
std::uint8_t axis_t_last;
std::uint64_t axis_data_rx;
std::uint8_t handshake_done;
std::uint32_t seq_rcv_start;
std::uint8_t wr_FIFO_en;
std::uint8_t wr_FIFO_offset;
std::uint8_t rd_FIFO_valid;
std::uint8_t rd_FIFO_ptr;
std::uint8_t rd_FIFO_len;
std::uint8_t axis_r_en;

void reset_input_payload_FIFO() {
    CLK=0;
    nRST=0;
    nw_segment=0;
    TCP_flush=0;
    axis_t_last=0;
    axis_data_rx=0;
    handshake_done=0;
    seq_rcv_start=0;
    wr_FIFO_en=0;
    wr_FIFO_offset=0;
    rd_FIFO_valid=0;
    rd_FIFO_ptr=0;
    rd_FIFO_len=0;
    axis_r_en=0;
}

void drive_input_payload_FIFO(std::uint8_t CLK_in, std::uint8_t nRST_in, std::uint8_t nw_segment_in, std::uint8_t TCP_flush_in, std::uint8_t axis_t_last_in, std::uint64_t axis_data_rx_in, std::uint8_t handshake_done_in, std::uint32_t seq_rcv_start_in, std::uint8_t wr_FIFO_en_in, std::uint8_t wr_FIFO_offset_in, std::uint8_t rd_FIFO_valid_in, std::uint8_t rd_FIFO_ptr_in, std::uint8_t rd_FIFO_len_in, std::uint8_t axis_r_en_in) {
    CLK=CLK_in;
    nRST=nRST_in;
    nw_segment=nw_segment_in;
    TCP_flush=TCP_flush_in;
    axis_t_last=axis_t_last_in;
    axis_data_rx=axis_data_rx_in;
    handshake_done=handshake_done_in;
    seq_rcv_start=seq_rcv_start_in;
    wr_FIFO_en=wr_FIFO_en_in;
    wr_FIFO_offset=wr_FIFO_offset_in;
    rd_FIFO_valid=rd_FIFO_valid_in;
    rd_FIFO_ptr=rd_FIFO_ptr_in;
    rd_FIFO_len=rd_FIFO_len_in;
    axis_r_en=axis_r_en_in;
}
