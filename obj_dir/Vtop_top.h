// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
class Vtop_FIFO_TX;
class Vtop_TCP;
class Vtop_payload_FIFO;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_TCP* __PVT__u_tcp;
    Vtop_payload_FIFO* __PVT__u_payload_fifo;
    Vtop_FIFO_TX* __PVT__u_fifo_tx;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(IP_valid,0,0);
    VL_IN8(IP_flush,0,0);
    VL_IN8(IP_bytes_rcv,7,0);
    VL_IN8(TCP_send,0,0);
    VL_OUT8(TCP_last,0,0);
    VL_IN8(TX_en,0,0);
    VL_IN8(axis_last,0,0);
    VL_IN8(wr_FIFO_en,0,0);
    VL_IN8(axis_r_en,0,0);
    VL_OUT8(axis_r_valid,0,0);
    VL_OUT8(TCP_stop_flag,0,0);
    VL_OUT8(wr_FIFO_full,0,0);
    CData/*0:0*/ __PVT__nw_segment;
    CData/*0:0*/ __PVT__axis_t_last_int;
    CData/*0:0*/ __PVT__TCP_flush_int;
    CData/*0:0*/ __PVT__handshake_done_int;
    CData/*0:0*/ __PVT__wr_pfifo_en_int;
    CData/*7:0*/ __PVT__wr_pfifo_offset_int;
    CData/*3:0*/ __PVT__wr_ptr_out_int;
    CData/*3:0*/ __PVT__wr_pfifo_len_int;
    CData/*0:0*/ __PVT__rd_pfifo_valid_int;
    CData/*3:0*/ __PVT__rd_pfifo_ptr_int;
    CData/*3:0*/ __PVT__rd_pfifo_len_int;
    CData/*0:0*/ __PVT__rd_pfifo_en_int;
    CData/*0:0*/ __PVT__rd_ftx_en_int;
    CData/*0:0*/ __PVT__rd_ftx_valid_int;
    CData/*0:0*/ __PVT__rd_ftx_last_int;
    CData/*0:0*/ __PVT__ACK_rcv_flag_int;
    CData/*0:0*/ __PVT__out_order_req_int;
    CData/*0:0*/ __PVT__TCP_stop_flg_int;
    CData/*0:0*/ __PVT__end_ss_int;
    CData/*0:0*/ __PVT__re_trans_int;
    CData/*0:0*/ __PVT__seq_up;
    CData/*0:0*/ __PVT__full;
    CData/*0:0*/ __PVT__rd_FIFO_valid_tx;
    CData/*0:0*/ __PVT__rd_FIFO_last;
    CData/*0:0*/ __PVT__wr_TX_full;
    VL_IN16(IP_pseuder,15,0);
    VL_IN16(TCP_len,15,0);
    SData/*15:0*/ __PVT__bytes_abt_sent_int;
    SData/*15:0*/ __PVT__checksum_re_trans_int;
    SData/*15:0*/ __PVT__checksum_TX;
    SData/*15:0*/ __PVT__bytes_abt_sent;
    VL_IN(len_seq,31,0);
    VL_OUT(rcv_next,31,0);
    VL_OUT(seq_num,31,0);
    IData/*31:0*/ __PVT__seq_rcv_start_int;
    IData/*31:0*/ __PVT__seq_rx_FIFO_rd_int;
    IData/*31:0*/ __PVT__ACK_num_int;
    IData/*31:0*/ __PVT__seq_num_tx;
    VL_IN64(IP_payload,63,0);
    VL_OUT64(TCP_transmit,63,0);
    VL_IN64(soupbin_TCP_payload,63,0);
    VL_OUT64(axis_rd_data,63,0);
    QData/*63:0*/ __PVT__axis_data_rx_int;
    QData/*63:0*/ __PVT__rd_ftx_payload_int;
    QData/*63:0*/ __PVT__rd_FIFO_payload;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_top(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_top();
    VL_UNCOPYABLE(Vtop_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
