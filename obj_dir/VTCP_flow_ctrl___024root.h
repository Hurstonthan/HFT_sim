// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTCP_flow_ctrl.h for the primary calling header

#ifndef VERILATED_VTCP_FLOW_CTRL___024ROOT_H_
#define VERILATED_VTCP_FLOW_CTRL___024ROOT_H_  // guard

#include "verilated.h"


class VTCP_flow_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTCP_flow_ctrl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(nRST,0,0);
        VL_IN8(TCP_control_rx,7,0);
        VL_IN8(offset_rx,3,0);
        VL_IN8(rcv_data,0,0);
        VL_OUT8(TCP_tx_en,0,0);
        VL_OUT8(seq_up,0,0);
        VL_OUT8(TCP_control_tx,7,0);
        VL_OUT8(offset_tx,3,0);
        VL_OUT8(end_ss,0,0);
        VL_OUT8(TCP_stop_flg,0,0);
        VL_OUT8(full,0,0);
        VL_IN8(timeout_flag,0,0);
        VL_OUT8(hand_shake_done,0,0);
        VL_IN8(TCP_last,0,0);
        VL_IN8(TCP_bytes_trk,7,0);
        VL_OUT8(wr_FIFO_offset,7,0);
        VL_IN8(wr_FIFO_len,7,0);
        VL_OUT8(rd_FIFO_len,7,0);
        VL_OUT8(wr_FIFO_en,0,0);
        VL_OUT8(rd_FIFO_en,0,0);
        VL_IN8(nw_segment,0,0);
        VL_IN8(TCP_flush,0,0);
        VL_OUT8(rd_FIFO_valid,0,0);
        CData/*1:0*/ TCP_flow_ctrl__DOT__case_bug;
        CData/*0:0*/ TCP_flow_ctrl__DOT__case_bug_0;
        CData/*6:0*/ TCP_flow_ctrl__DOT__state;
        CData/*6:0*/ TCP_flow_ctrl__DOT__nstate;
        CData/*7:0*/ TCP_flow_ctrl__DOT__tx_pkg_type;
        CData/*3:0*/ TCP_flow_ctrl__DOT__free_idx;
        CData/*3:0*/ TCP_flow_ctrl__DOT__match_idx;
        CData/*0:0*/ TCP_flow_ctrl__DOT__free_mask;
        CData/*0:0*/ TCP_flow_ctrl__DOT__match_found;
        CData/*3:0*/ TCP_flow_ctrl__DOT__flush_ptr;
        CData/*3:0*/ TCP_flow_ctrl__DOT__nflush_ptr;
        CData/*3:0*/ TCP_flow_ctrl__DOT__len_flush_ptr;
        CData/*7:0*/ TCP_flow_ctrl__DOT__nlen_flush_ptr;
        CData/*7:0*/ TCP_flow_ctrl__DOT__bytes_drop;
        CData/*7:0*/ TCP_flow_ctrl__DOT__bytes_left;
        QData/*63:0*/ TCP_flow_ctrl__DOT__flush_list;
        QData/*63:0*/ TCP_flow_ctrl__DOT__nflush_list;
        CData/*0:0*/ TCP_flow_ctrl__DOT____Vlvbound_hac5f4658__0;
        CData/*0:0*/ TCP_flow_ctrl__DOT____Vlvbound_hac5f4658__1;
        CData/*0:0*/ TCP_flow_ctrl__DOT____Vlvbound_h1381218e__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(window_size_rx,15,0);
        VL_IN16(checksum_rx,15,0);
        VL_IN16(urgent_pointer_rx,15,0);
        VL_OUT16(window_size_tx,15,0);
        VL_OUT16(checksum_tx,15,0);
        VL_OUT16(urgent_pointer_tx,15,0);
        VL_IN16(wr_FIFO_ptr,10,0);
        VL_OUT16(rd_FIFO_ptr,10,0);
        SData/*15:0*/ TCP_flow_ctrl__DOT__window_size;
        SData/*15:0*/ TCP_flow_ctrl__DOT__nwindow_size;
        VlWide<16>/*511:0*/ TCP_flow_ctrl__DOT__seq_vec;
        SData/*15:0*/ TCP_flow_ctrl__DOT__match_mask;
        SData/*15:0*/ TCP_flow_ctrl__DOT__overlap_mask;
        SData/*15:0*/ TCP_flow_ctrl__DOT____Vlvbound_h679159bf__0;
        SData/*15:0*/ TCP_flow_ctrl__DOT____Vlvbound_h6a649313__0;
    };
    struct {
        SData/*15:0*/ TCP_flow_ctrl__DOT____Vlvbound_h283b1f05__0;
        SData/*15:0*/ TCP_flow_ctrl__DOT____Vlvbound_h679159bf__1;
        SData/*15:0*/ TCP_flow_ctrl__DOT____Vlvbound_h6a649313__1;
        SData/*15:0*/ TCP_flow_ctrl__DOT____Vlvbound_h283b1f05__1;
        VL_IN(seq_num_rx,31,0);
        VL_IN(ACK_rx,31,0);
        VL_OUT(seq_num_tx,31,0);
        VL_OUT(ACK_tx,31,0);
        VL_IN(ISN_num,31,0);
        VL_IN(bytes_sent,31,0);
        VL_IN(bytes_abt_sent,31,0);
        VL_IN(payload_len_rx,31,0);
        VL_OUT(rcv_next_out,31,0);
        VL_OUT(seq_num_out,31,0);
        VL_IN(seq_rx_FIFO_rd,31,0);
        IData/*31:0*/ TCP_flow_ctrl__DOT__wnd_allow;
        IData/*31:0*/ TCP_flow_ctrl__DOT__rcv_next;
        IData/*31:0*/ TCP_flow_ctrl__DOT__nrcv_next;
        IData/*31:0*/ TCP_flow_ctrl__DOT__seq_rx_trk;
        IData/*31:0*/ TCP_flow_ctrl__DOT__nseq_rx_trk;
        IData/*31:0*/ TCP_flow_ctrl__DOT____Vlvbound_hde8f6f4b__0;
        IData/*31:0*/ TCP_flow_ctrl__DOT____Vlvbound_hde8f6f4b__1;
        IData/*31:0*/ __VactIterCount;
        QData/*34:0*/ TCP_flow_ctrl__DOT__ack_num;
        QData/*34:0*/ TCP_flow_ctrl__DOT__nack_num;
        QData/*32:0*/ TCP_flow_ctrl__DOT__seq_num;
        QData/*32:0*/ TCP_flow_ctrl__DOT__nseq_num;
        VlWide<41>/*1295:0*/ TCP_flow_ctrl__DOT__nTCP_order;
        VlWide<41>/*1295:0*/ TCP_flow_ctrl__DOT__TCP_order;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTCP_flow_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTCP_flow_ctrl___024root(VTCP_flow_ctrl__Syms* symsp, const char* v__name);
    ~VTCP_flow_ctrl___024root();
    VL_UNCOPYABLE(VTCP_flow_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
