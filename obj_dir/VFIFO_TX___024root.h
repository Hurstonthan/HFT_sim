// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFIFO_TX.h for the primary calling header

#ifndef VERILATED_VFIFO_TX___024ROOT_H_
#define VERILATED_VFIFO_TX___024ROOT_H_  // guard

#include "verilated.h"


class VFIFO_TX__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFIFO_TX___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(nRST,0,0);
        VL_IN8(seq_up,0,0);
        VL_IN8(rd_FIFO_en,0,0);
        VL_IN8(TX_en,0,0);
        VL_OUT8(rd_FIFO_valid,0,0);
        VL_OUT8(rd_FIFO_last,0,0);
        VL_IN8(ACK_rcv_flag,0,0);
        VL_IN8(out_order_req,0,0);
        VL_OUT8(TCP_stop_flag,0,0);
        VL_OUT8(end_ss,0,0);
        VL_IN8(axis_last,0,0);
        VL_IN8(wr_FIFO_en,0,0);
        VL_OUT8(wr_FIFO_valid,0,0);
        VL_OUT8(re_trans,0,0);
        CData/*5:0*/ FIFO_TX__DOT__ptr_str;
        CData/*5:0*/ FIFO_TX__DOT__nptr_str;
        CData/*5:0*/ FIFO_TX__DOT__ptr_end;
        CData/*5:0*/ FIFO_TX__DOT__nptr_end;
        CData/*5:0*/ FIFO_TX__DOT__flush_ptr;
        CData/*5:0*/ FIFO_TX__DOT__nflush_ptr;
        CData/*5:0*/ FIFO_TX__DOT__msg_end_ptr;
        CData/*5:0*/ FIFO_TX__DOT__nmsg_end_ptr;
        CData/*1:0*/ FIFO_TX__DOT__rd_state;
        CData/*1:0*/ FIFO_TX__DOT__nrd_state;
        CData/*1:0*/ FIFO_TX__DOT__wr_state;
        CData/*1:0*/ FIFO_TX__DOT__nwr_state;
        CData/*0:0*/ FIFO_TX__DOT__full;
        CData/*0:0*/ FIFO_TX__DOT__nrd_FIFO_last;
        CData/*0:0*/ FIFO_TX__DOT__nrd_FIFO_valid;
        CData/*0:0*/ FIFO_TX__DOT__nwr_FIFO_valid;
        CData/*3:0*/ FIFO_TX__DOT__dict_wrt_ptr;
        CData/*3:0*/ FIFO_TX__DOT__ndict_wrt_ptr;
        CData/*3:0*/ FIFO_TX__DOT__dict_rd_ptr;
        CData/*3:0*/ FIFO_TX__DOT__ndict_rd_ptr;
        CData/*5:0*/ FIFO_TX__DOT__rd_ptr;
        CData/*5:0*/ FIFO_TX__DOT__nrd_ptr;
        CData/*5:0*/ FIFO_TX__DOT__wrt_ptr;
        CData/*5:0*/ FIFO_TX__DOT__nwrt_ptr;
        CData/*0:0*/ FIFO_TX__DOT__out_order_req_l;
        CData/*0:0*/ FIFO_TX__DOT__nout_order_req_l;
        CData/*0:0*/ FIFO_TX__DOT__ACK_rcv_flag_l;
        CData/*0:0*/ FIFO_TX__DOT__nACK_rcv_flag_l;
        CData/*0:0*/ FIFO_TX__DOT__rd_debug_1;
        CData/*0:0*/ FIFO_TX__DOT__rd_debug_2;
        CData/*0:0*/ FIFO_TX__DOT__rd_upd;
        CData/*0:0*/ FIFO_TX__DOT__nrd_upd;
        CData/*0:0*/ FIFO_TX__DOT____Vlvbound_haafa9b1c__0;
        CData/*5:0*/ FIFO_TX__DOT____Vlvbound_h7a818793__0;
        CData/*5:0*/ FIFO_TX__DOT____Vlvbound_h6aad29f5__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(checksum_TX,15,0);
        VL_OUT16(bytes_abt_sent,15,0);
        VL_OUT16(checksum_re_trans,15,0);
        SData/*15:0*/ FIFO_TX__DOT__nbytes_abt_sent;
        SData/*15:0*/ FIFO_TX__DOT__bytes_msg_trk;
        SData/*15:0*/ FIFO_TX__DOT__bytes_abt_sent_msg;
        SData/*15:0*/ FIFO_TX__DOT__nbytes_abt_sent_msg;
        SData/*15:0*/ FIFO_TX__DOT__bytes_abt_sent_msg_rd;
        SData/*15:0*/ FIFO_TX__DOT__nbytes_abt_sent_msg_rd;
    };
    struct {
        SData/*15:0*/ FIFO_TX__DOT__checksum_l;
        SData/*15:0*/ FIFO_TX__DOT__nchecksum_l;
        SData/*15:0*/ FIFO_TX__DOT____Vlvbound_h60920ae5__0;
        VL_IN(seq_num_tx,31,0);
        VL_IN(ACK_num,31,0);
        VL_IN(len_seq,31,0);
        IData/*31:0*/ FIFO_TX__DOT__ACK_num_l;
        IData/*31:0*/ FIFO_TX__DOT__nACK_num_l;
        IData/*31:0*/ FIFO_TX__DOT____Vlvbound_hde36d840__0;
        IData/*31:0*/ FIFO_TX__DOT____Vlvbound_hcf6169df__0;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(rd_FIFO_payload,63,0);
        VL_IN64(soupbin_TCP_payload,63,0);
        QData/*63:0*/ FIFO_TX__DOT__nrd_FIFO_payload;
        VlWide<47>/*1487:0*/ FIFO_TX__DOT__dict_tx;
        VlWide<47>/*1487:0*/ FIFO_TX__DOT__ndict_tx;
        VlWide<128>/*4095:0*/ FIFO_TX__DOT__TCP_tx_order;
        VlWide<128>/*4095:0*/ FIFO_TX__DOT__nTCP_tx_order;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFIFO_TX__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFIFO_TX___024root(VFIFO_TX__Syms* symsp, const char* v__name);
    ~VFIFO_TX___024root();
    VL_UNCOPYABLE(VFIFO_TX___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
