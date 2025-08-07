// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_FIFO_TX__F10_H_
#define VERILATED_VETHER_SIMULATION_FIFO_TX__F10_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_FIFO_TX__F10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__CLK,0,0);
        VL_IN8(__PVT__nRST,0,0);
        VL_IN8(__PVT__seq_up,0,0);
        VL_IN8(__PVT__rd_FIFO_en,0,0);
        VL_IN8(__PVT__TX_en,0,0);
        VL_IN8(__PVT__hand_shake_done,0,0);
        VL_OUT8(__PVT__rd_FIFO_valid,0,0);
        VL_OUT8(__PVT__rd_FIFO_last,0,0);
        VL_IN8(__PVT__ACK_rcv_flag,0,0);
        VL_IN8(__PVT__out_order_req,0,0);
        VL_OUT8(__PVT__TCP_stop_flag,0,0);
        VL_OUT8(__PVT__end_ss,0,0);
        VL_IN8(__PVT__wr_FIFO_en,0,0);
        VL_IN8(__PVT__axis_last,0,0);
        VL_OUT8(__PVT__wr_FIFO_valid,0,0);
        VL_OUT8(__PVT__re_trans,0,0);
        CData/*3:0*/ __PVT__ptr_str;
        CData/*3:0*/ __PVT__nptr_str;
        CData/*3:0*/ __PVT__ptr_end;
        CData/*3:0*/ __PVT__nptr_end;
        CData/*3:0*/ __PVT__flush_ptr;
        CData/*3:0*/ __PVT__nflush_ptr;
        CData/*3:0*/ __PVT__msg_end_ptr;
        CData/*3:0*/ __PVT__nmsg_end_ptr;
        CData/*1:0*/ __PVT__rd_state;
        CData/*1:0*/ __PVT__nrd_state;
        CData/*1:0*/ __PVT__wr_state;
        CData/*1:0*/ __PVT__nwr_state;
        CData/*0:0*/ __PVT__full;
        CData/*0:0*/ __PVT__empty;
        CData/*0:0*/ __PVT__nrd_FIFO_last;
        CData/*0:0*/ __PVT__nrd_FIFO_valid;
        CData/*0:0*/ __PVT__nwr_FIFO_valid;
        CData/*3:0*/ __PVT__dict_wrt_ptr;
        CData/*3:0*/ __PVT__ndict_wrt_ptr;
        CData/*3:0*/ __PVT__dict_rd_ptr;
        CData/*3:0*/ __PVT__ndict_rd_ptr;
        CData/*3:0*/ __PVT__rd_ptr;
        CData/*3:0*/ __PVT__nrd_ptr;
        CData/*3:0*/ __PVT__wrt_ptr;
        CData/*3:0*/ __PVT__nwrt_ptr;
        CData/*0:0*/ __PVT__out_order_req_l;
        CData/*0:0*/ __PVT__nout_order_req_l;
        CData/*0:0*/ __PVT__ACK_rcv_flag_l;
        CData/*0:0*/ __PVT__nACK_rcv_flag_l;
        CData/*0:0*/ __PVT__rd_debug_1;
        CData/*0:0*/ __PVT__rd_debug_2;
        CData/*0:0*/ __PVT__rd_upd;
        CData/*0:0*/ __PVT__nrd_upd;
        CData/*0:0*/ __Vlvbound_ha3926224__0;
        CData/*3:0*/ __Vlvbound_hed5a7686__0;
        CData/*3:0*/ __Vlvbound_h314b6349__0;
        CData/*3:0*/ __Vdly__ptr_str;
        CData/*3:0*/ __Vdly__ptr_end;
        CData/*0:0*/ __Vdly__ACK_rcv_flag_l;
        CData/*1:0*/ __Vdly__rd_state;
        CData/*0:0*/ __Vdly__rd_FIFO_valid;
        CData/*0:0*/ __Vdly__rd_FIFO_last;
        CData/*3:0*/ __Vdly__rd_ptr;
        CData/*0:0*/ __Vdly__out_order_req_l;
        CData/*3:0*/ __Vdly__msg_end_ptr;
        CData/*1:0*/ __Vdly__wr_state;
        CData/*3:0*/ __Vdly__wrt_ptr;
        CData/*3:0*/ __Vdly__dict_wrt_ptr;
    };
    struct {
        CData/*3:0*/ __Vdly__dict_rd_ptr;
        CData/*0:0*/ __Vdly__wr_FIFO_valid;
        CData/*3:0*/ __Vdly__flush_ptr;
        CData/*0:0*/ __Vdly__rd_upd;
        VL_IN16(__PVT__checksum_TX,15,0);
        VL_OUT16(__PVT__bytes_abt_sent,15,0);
        VL_OUT16(__PVT__checksum_re_trans,15,0);
        SData/*15:0*/ __PVT__nbytes_abt_sent;
        SData/*15:0*/ __PVT__bytes_msg_trk;
        SData/*15:0*/ __PVT__nbytes_msg_trk;
        SData/*15:0*/ __PVT__bytes_abt_sent_msg;
        SData/*15:0*/ __PVT__nbytes_abt_sent_msg;
        SData/*15:0*/ __PVT__bytes_abt_sent_msg_rd;
        SData/*15:0*/ __PVT__nbytes_abt_sent_msg_rd;
        SData/*15:0*/ __PVT__checksum_l;
        SData/*15:0*/ __PVT__nchecksum_l;
        SData/*15:0*/ __Vlvbound_heabe4560__0;
        SData/*15:0*/ __Vdly__bytes_abt_sent;
        SData/*15:0*/ __Vdly__bytes_msg_trk;
        SData/*15:0*/ __Vdly__bytes_abt_sent_msg;
        SData/*15:0*/ __Vdly__bytes_abt_sent_msg_rd;
        SData/*15:0*/ __Vdly__checksum_l;
        VL_IN(__PVT__seq_num_tx,31,0);
        VL_IN(__PVT__ACK_num,31,0);
        VL_IN(__PVT__len_seq,31,0);
        IData/*31:0*/ __PVT__ACK_num_l;
        IData/*31:0*/ __PVT__nACK_num_l;
        IData/*31:0*/ __Vlvbound_hf7e9052d__0;
        IData/*31:0*/ __Vlvbound_hf96d897b__0;
        IData/*31:0*/ __Vdly__ACK_num_l;
        VL_OUT64(__PVT__rd_FIFO_payload,63,0);
        VL_IN64(__PVT__soupbin_TCP_payload,63,0);
        QData/*63:0*/ __PVT__nrd_FIFO_payload;
        VlWide<45>/*1423:0*/ __PVT__dict_tx;
        VlWide<45>/*1423:0*/ __PVT__ndict_tx;
        VlWide<32>/*1023:0*/ __PVT__TCP_tx_order;
        VlWide<32>/*1023:0*/ __PVT__nTCP_tx_order;
        VlWide<45>/*1423:0*/ __Vdly__dict_tx;
        QData/*63:0*/ __Vdly__rd_FIFO_payload;
        VlWide<32>/*1023:0*/ __Vdly__TCP_tx_order;
    };
    std::string __PVT__test_case;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_FIFO_TX__F10(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_FIFO_TX__F10();
    VL_UNCOPYABLE(Vether_simulation_FIFO_TX__F10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
