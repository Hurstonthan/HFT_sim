// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTCP.h for the primary calling header

#ifndef VERILATED_VTCP___024ROOT_H_
#define VERILATED_VTCP___024ROOT_H_  // guard

#include "verilated.h"


class VTCP__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTCP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(nRST,0,0);
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT__CLK;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT__nRST;
        VL_IN8(TX_en,0,0);
        VL_IN8(IP_valid,0,0);
        VL_IN8(IP_flush,0,0);
        VL_IN8(IP_bytes_rcv,7,0);
        VL_OUT8(nw_segment,0,0);
        VL_OUT8(axis_t_last,0,0);
        VL_OUT8(TCP_flush,0,0);
        VL_OUT8(handshake_done,0,0);
        VL_OUT8(wr_FIFO_en,0,0);
        VL_OUT8(wr_FIFO_offset,7,0);
        VL_OUT8(rd_FIFO_valid_rcv,0,0);
        VL_OUT8(rd_FIFO_ptr,2,0);
        VL_OUT8(rd_FIFO_len,2,0);
        VL_IN8(wr_ptr_out,2,0);
        VL_IN8(wr_FIFO_len,2,0);
        VL_IN8(rd_FIFO_en_rcv,0,0);
        VL_IN8(full,0,0);
        VL_OUT8(ACK_rcv_flag,0,0);
        VL_OUT8(out_order_req,0,0);
        VL_OUT8(TCP_stop_flg,0,0);
        VL_IN8(end_ss,0,0);
        VL_IN8(rd_FIFO_valid_tx,0,0);
        VL_IN8(rd_FIFO_last,0,0);
        VL_OUT8(rd_FIFO_en_tx,0,0);
        VL_IN8(TCP_send,0,0);
        VL_IN8(re_trans,0,0);
        CData/*0:0*/ TCP__DOT__rcv_data;
        CData/*7:0*/ TCP__DOT__TCP_control_rx;
        CData/*3:0*/ TCP__DOT__offset_rx;
        CData/*0:0*/ TCP__DOT__seq_up;
        CData/*7:0*/ TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len;
        CData/*0:0*/ TCP__DOT__timeout_flag;
        CData/*0:0*/ TCP__DOT__hand_shake_done;
        CData/*0:0*/ TCP__DOT__wr_FIFO_ptr;
        CData/*0:0*/ TCP__DOT__rd_FIFO_valid;
        CData/*0:0*/ TCP__DOT__axis_last;
        CData/*1:0*/ TCP__DOT__tcp_flow__DOT__case_bug;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT__case_bug_0;
        CData/*6:0*/ TCP__DOT__tcp_flow__DOT__state;
        CData/*6:0*/ TCP__DOT__tcp_flow__DOT__nstate;
        CData/*7:0*/ TCP__DOT__tcp_flow__DOT__tx_pkg_type;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT__nhand_shake_done;
        CData/*3:0*/ TCP__DOT__tcp_flow__DOT__free_idx;
        CData/*3:0*/ TCP__DOT__tcp_flow__DOT__match_idx;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT__free_mask;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT__match_found;
        CData/*3:0*/ TCP__DOT__tcp_flow__DOT__flush_ptr;
        CData/*3:0*/ TCP__DOT__tcp_flow__DOT__nflush_ptr;
        CData/*3:0*/ TCP__DOT__tcp_flow__DOT__len_flush_ptr;
        CData/*7:0*/ TCP__DOT__tcp_flow__DOT__nlen_flush_ptr;
        CData/*7:0*/ TCP__DOT__tcp_flow__DOT__bytes_drop;
        CData/*7:0*/ TCP__DOT__tcp_flow__DOT__bytes_left;
        QData/*63:0*/ TCP__DOT__tcp_flow__DOT__flush_list;
        QData/*63:0*/ TCP__DOT__tcp_flow__DOT__nflush_list;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1;
        CData/*0:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0;
        CData/*7:0*/ TCP__DOT__tcp_rcv__DOT__nTCP_control_rx;
        CData/*3:0*/ TCP__DOT__tcp_rcv__DOT__noffset_rx;
        CData/*7:0*/ TCP__DOT__tcp_rcv__DOT__TCP_data_dl;
    };
    struct {
        CData/*7:0*/ TCP__DOT__tcp_rcv__DOT__nTCP_data_dl;
        CData/*0:0*/ TCP__DOT__tcp_rcv__DOT__nTCP_valid;
        CData/*0:0*/ TCP__DOT__tcp_rcv__DOT__nrcv_data;
        CData/*0:0*/ TCP__DOT__tcp_rcv__DOT__checksum_en;
        CData/*0:0*/ TCP__DOT__tcp_rcv__DOT__nchecksum_en;
        CData/*0:0*/ TCP__DOT__tcp_rcv__DOT__n_nw_segment;
        CData/*0:0*/ TCP__DOT__tcp_rcv__DOT__nTCP_last;
        CData/*2:0*/ TCP__DOT__tcp_rcv__DOT__state;
        CData/*2:0*/ TCP__DOT__tcp_rcv__DOT__nstate;
        CData/*0:0*/ TCP__DOT__TCP_tx__DOT__TCP_tx_valid;
        CData/*0:0*/ TCP__DOT__TCP_tx__DOT__TCP_tx_last;
        CData/*0:0*/ TCP__DOT__TCP_tx__DOT__valid_checksum;
        CData/*6:0*/ TCP__DOT__TCP_tx__DOT__state;
        CData/*6:0*/ TCP__DOT__TCP_tx__DOT__nstate;
        CData/*0:0*/ TCP__DOT__TCP_tx__DOT__nTCP_tx_valid;
        CData/*0:0*/ TCP__DOT__TCP_tx__DOT__nTCP_tx_last;
        CData/*0:0*/ TCP__DOT__TCP_tx__DOT__nseq_up;
        CData/*0:0*/ TCP__DOT__inst__DOT__up_send;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TCP__DOT__tcp_flow__DOT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TCP__DOT__tcp_flow__DOT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(IP_pseuder,15,0);
        VL_IN16(TCP_len,15,0);
        VL_IN16(bytes_abt_sent,15,0);
        VL_IN16(checksum_re_trans,15,0);
        SData/*15:0*/ TCP__DOT__window_size_rx;
        SData/*15:0*/ TCP__DOT__checksum_rx;
        SData/*15:0*/ TCP__DOT__urgent_pointer_rx;
        SData/*15:0*/ TCP__DOT__payload_len_rx;
        SData/*10:0*/ TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr;
        SData/*15:0*/ TCP__DOT____Vcellout__inst__TCP_checksum_out;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT__window_size;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT__nwindow_size;
        VlWide<16>/*511:0*/ TCP__DOT__tcp_flow__DOT__seq_vec;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT__match_mask;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT__overlap_mask;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1;
        SData/*15:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1;
        SData/*15:0*/ TCP__DOT__tcp_rcv__DOT__nwindow_size_rx;
        SData/*15:0*/ TCP__DOT__tcp_rcv__DOT__nchecksum_rx;
        SData/*15:0*/ TCP__DOT__tcp_rcv__DOT__nurgent_pointer_rx;
        SData/*15:0*/ TCP__DOT__tcp_rcv__DOT__bytes_trk;
        SData/*15:0*/ TCP__DOT__tcp_rcv__DOT__nbytes_trk;
        SData/*15:0*/ TCP__DOT__tcp_rcv__DOT__checksum_in;
        SData/*15:0*/ TCP__DOT__inst__DOT__nTCP_checksum_out;
        VL_OUT(seq_rcv_start,31,0);
        VL_IN(seq_rx_FIFO_rd,31,0);
        VL_OUT(ACK_num,31,0);
        VL_OUT(rcv_next,31,0);
        VL_OUT(seq_num,31,0);
        IData/*31:0*/ TCP__DOT__seq_num_rx;
        IData/*31:0*/ TCP__DOT__ACK_rx;
        IData/*31:0*/ TCP__DOT__seq_num_tx;
        IData/*31:0*/ TCP__DOT__ACK_tx;
        IData/*31:0*/ TCP__DOT__ISN_num;
        IData/*31:0*/ TCP__DOT__bytes_sent;
    };
    struct {
        IData/*31:0*/ TCP__DOT____Vcellout__tcp_flow__seq_rcv_str;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT__wnd_allow;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT__nseq_rcv_str;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT__rcv_next;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT__nrcv_next;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT__seq_rx_trk;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT__nseq_rx_trk;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0;
        IData/*31:0*/ TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1;
        IData/*31:0*/ TCP__DOT__tcp_rcv__DOT__nseq_num_rx;
        IData/*31:0*/ TCP__DOT__tcp_rcv__DOT__nACK_rx;
        IData/*16:0*/ TCP__DOT__tcp_rcv__DOT__TCP_checksum;
        IData/*16:0*/ TCP__DOT__tcp_rcv__DOT__nTCP_checksum;
        IData/*31:0*/ TCP__DOT__TCP_tx__DOT__nbytes_sent;
        IData/*16:0*/ TCP__DOT__TCP_tx__DOT__TCP_checksum;
        IData/*16:0*/ TCP__DOT__TCP_tx__DOT__nTCP_checksum;
        IData/*31:0*/ TCP__DOT__ISN_gen__DOT__counter;
        IData/*16:0*/ TCP__DOT__inst__DOT__TCP_checksum;
        IData/*16:0*/ TCP__DOT__inst__DOT__nTCP_checksum;
        IData/*16:0*/ TCP__DOT__inst__DOT__TCP_checksum_send;
        IData/*16:0*/ TCP__DOT__inst__DOT__nTCP_checksum_send;
        IData/*19:0*/ TCP__DOT__inst__DOT__temp;
        IData/*19:0*/ TCP__DOT__inst__DOT__temp1;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(IP_payload,63,0);
        VL_OUT64(axis_data_rx,63,0);
        VL_IN64(rd_FIFO_payload,63,0);
        VL_OUT64(TCP_transmit,63,0);
        QData/*34:0*/ TCP__DOT__tcp_flow__DOT__ack_num;
        QData/*34:0*/ TCP__DOT__tcp_flow__DOT__nack_num;
        QData/*32:0*/ TCP__DOT__tcp_flow__DOT__seq_num;
        QData/*32:0*/ TCP__DOT__tcp_flow__DOT__nseq_num;
        VlWide<41>/*1295:0*/ TCP__DOT__tcp_flow__DOT__nTCP_order;
        VlWide<41>/*1295:0*/ TCP__DOT__tcp_flow__DOT__TCP_order;
        QData/*63:0*/ TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx;
        QData/*63:0*/ TCP__DOT__TCP_tx__DOT__nTCP_transmit;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTCP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTCP___024root(VTCP__Syms* symsp, const char* v__name);
    ~VTCP___024root();
    VL_UNCOPYABLE(VTCP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
