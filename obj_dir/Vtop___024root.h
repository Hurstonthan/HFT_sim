// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(nRST,0,0);
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__CLK;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nRST;
        VL_IN8(IP_valid,0,0);
        VL_IN8(IP_flush,0,0);
        VL_IN8(IP_bytes_rcv,7,0);
        VL_IN8(TCP_send,0,0);
        VL_IN8(TX_en,0,0);
        VL_IN8(axis_last,0,0);
        VL_IN8(wr_FIFO_en,0,0);
        VL_IN8(axis_r_en,0,0);
        VL_OUT8(axis_r_valid,0,0);
        VL_OUT8(TCP_stop_flag,0,0);
        VL_OUT8(wr_FIFO_full,0,0);
        CData/*0:0*/ top__DOT__nw_segment;
        CData/*0:0*/ top__DOT__axis_t_last_int;
        CData/*0:0*/ top__DOT__TCP_flush_int;
        CData/*0:0*/ top__DOT__handshake_done_int;
        CData/*0:0*/ top__DOT__wr_pfifo_en_int;
        CData/*7:0*/ top__DOT__wr_pfifo_offset_int;
        CData/*2:0*/ top__DOT__wr_ptr_out_int;
        CData/*0:0*/ top__DOT__rd_pfifo_valid_int;
        CData/*0:0*/ top__DOT__rd_ftx_en_int;
        CData/*0:0*/ top__DOT__rd_ftx_valid_int;
        CData/*0:0*/ top__DOT__rd_ftx_last_int;
        CData/*0:0*/ top__DOT__ACK_rcv_flag_int;
        CData/*0:0*/ top__DOT__out_order_req_int;
        CData/*0:0*/ top__DOT__TCP_stop_flg_int;
        CData/*0:0*/ top__DOT__end_ss_int;
        CData/*0:0*/ top__DOT__seq_up;
        CData/*0:0*/ top__DOT__wr_TX_full;
        CData/*0:0*/ top__DOT__u_tcp__DOT__rcv_data;
        CData/*7:0*/ top__DOT__u_tcp__DOT__TCP_control_rx;
        CData/*3:0*/ top__DOT__u_tcp__DOT__offset_rx;
        CData/*0:0*/ top__DOT__u_tcp__DOT__seq_up;
        CData/*7:0*/ top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len;
        CData/*0:0*/ top__DOT__u_tcp__DOT__timeout_flag;
        CData/*0:0*/ top__DOT__u_tcp__DOT__hand_shake_done;
        CData/*0:0*/ top__DOT__u_tcp__DOT__wr_FIFO_ptr;
        CData/*0:0*/ top__DOT__u_tcp__DOT__rd_FIFO_valid;
        CData/*0:0*/ top__DOT__u_tcp__DOT__axis_last;
        CData/*1:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0;
        CData/*6:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__state;
        CData/*6:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nstate;
        CData/*7:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nhand_shake_done;
        CData/*3:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx;
        CData/*3:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__match_idx;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__match_found;
        CData/*3:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr;
        CData/*3:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_ptr;
        CData/*3:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr;
        CData/*7:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr;
        CData/*7:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop;
        CData/*7:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left;
        QData/*63:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list;
        QData/*63:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0;
        CData/*7:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_control_rx;
    };
    struct {
        CData/*3:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__noffset_rx;
        CData/*7:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_data_dl;
        CData/*7:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_data_dl;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_valid;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nrcv_data;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__checksum_en;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_en;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__n_nw_segment;
        CData/*0:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_last;
        CData/*2:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__state;
        CData/*2:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate;
        CData/*0:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_valid;
        CData/*0:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_last;
        CData/*0:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__valid_checksum;
        CData/*6:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__state;
        CData/*6:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate;
        CData/*0:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_tx_valid;
        CData/*0:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_tx_last;
        CData/*0:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__nseq_up;
        CData/*0:0*/ top__DOT__u_tcp__DOT__inst__DOT__up_send;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__flush_ptr;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__nflush_ptr;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__len_TCP_flush;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__nlen_TCP_flush;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__rd_len_ptr;
        CData/*0:0*/ top__DOT__u_payload_fifo__DOT__rd_FIFO_valid_l;
        CData/*0:0*/ top__DOT__u_payload_fifo__DOT__nrd_FIFO_valid_l;
        CData/*0:0*/ top__DOT__u_payload_fifo__DOT__naxis_r_valid;
        CData/*0:0*/ top__DOT__u_payload_fifo__DOT__TCP_flush_l;
        CData/*0:0*/ top__DOT__u_payload_fifo__DOT__nTCP_flush_l;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__wr_ptr;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__nwr_ptr;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__rd_ptr;
        CData/*2:0*/ top__DOT__u_payload_fifo__DOT__nrd_ptr;
        CData/*7:0*/ top__DOT__u_payload_fifo__DOT____Vlvbound_hfce51f23__0;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__ptr_str;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__nptr_str;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__ptr_end;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__nptr_end;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__flush_ptr;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__nflush_ptr;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__msg_end_ptr;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__nmsg_end_ptr;
        CData/*1:0*/ top__DOT__u_fifo_tx__DOT__rd_state;
        CData/*1:0*/ top__DOT__u_fifo_tx__DOT__nrd_state;
        CData/*1:0*/ top__DOT__u_fifo_tx__DOT__wr_state;
        CData/*1:0*/ top__DOT__u_fifo_tx__DOT__nwr_state;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__full;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__nrd_FIFO_last;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__nrd_FIFO_valid;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid;
        CData/*3:0*/ top__DOT__u_fifo_tx__DOT__dict_wrt_ptr;
        CData/*3:0*/ top__DOT__u_fifo_tx__DOT__ndict_wrt_ptr;
        CData/*3:0*/ top__DOT__u_fifo_tx__DOT__dict_rd_ptr;
        CData/*3:0*/ top__DOT__u_fifo_tx__DOT__ndict_rd_ptr;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__rd_ptr;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__nrd_ptr;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__wrt_ptr;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT__nwrt_ptr;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__out_order_req_l;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__nout_order_req_l;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__ACK_rcv_flag_l;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__nACK_rcv_flag_l;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__rd_debug_1;
    };
    struct {
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__rd_debug_2;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__rd_upd;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT__nrd_upd;
        CData/*0:0*/ top__DOT__u_fifo_tx__DOT____Vlvbound_haafa9b1c__0;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT____Vlvbound_h7a818793__0;
        CData/*5:0*/ top__DOT__u_fifo_tx__DOT____Vlvbound_h6aad29f5__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__u_tcp__DOT__tcp_flow__DOT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__u_tcp__DOT__tcp_flow__DOT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(IP_pseuder,15,0);
        VL_IN16(TCP_len,15,0);
        SData/*15:0*/ top__DOT__bytes_abt_sent_int;
        SData/*15:0*/ top__DOT__checksum_re_trans_int;
        SData/*15:0*/ top__DOT__checksum_TX;
        SData/*15:0*/ top__DOT__u_tcp__DOT__window_size_rx;
        SData/*15:0*/ top__DOT__u_tcp__DOT__checksum_rx;
        SData/*15:0*/ top__DOT__u_tcp__DOT__urgent_pointer_rx;
        SData/*15:0*/ top__DOT__u_tcp__DOT__payload_len_rx;
        SData/*10:0*/ top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr;
        SData/*15:0*/ top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__window_size;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nwindow_size;
        VlWide<16>/*511:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__match_mask;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nwindow_size_rx;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_rx;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nurgent_pointer_rx;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__bytes_trk;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nbytes_trk;
        SData/*15:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__checksum_in;
        SData/*15:0*/ top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__nbytes_abt_sent;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__bytes_msg_trk;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg_rd;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg_rd;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__checksum_l;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT__nchecksum_l;
        SData/*15:0*/ top__DOT__u_fifo_tx__DOT____Vlvbound_h60920ae5__0;
        VL_IN(len_seq,31,0);
        VL_OUT(rcv_next,31,0);
        VL_OUT(seq_num,31,0);
        IData/*31:0*/ top__DOT__seq_rcv_start_int;
        IData/*31:0*/ top__DOT__seq_num_tx;
        IData/*31:0*/ top__DOT__u_tcp__DOT__seq_num_rx;
        IData/*31:0*/ top__DOT__u_tcp__DOT__ACK_rx;
        IData/*31:0*/ top__DOT__u_tcp__DOT__seq_num_tx;
        IData/*31:0*/ top__DOT__u_tcp__DOT__ACK_tx;
        IData/*31:0*/ top__DOT__u_tcp__DOT__ISN_num;
        IData/*31:0*/ top__DOT__u_tcp__DOT__bytes_sent;
        IData/*31:0*/ top__DOT__u_tcp__DOT____Vcellout__tcp_flow__seq_rcv_str;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__wnd_allow;
    };
    struct {
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rcv_str;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx;
        IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nACK_rx;
        IData/*16:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_checksum;
        IData/*16:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum;
        IData/*31:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__nbytes_sent;
        IData/*16:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_checksum;
        IData/*16:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_checksum;
        IData/*31:0*/ top__DOT__u_tcp__DOT__ISN_gen__DOT__counter;
        IData/*16:0*/ top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum;
        IData/*16:0*/ top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum;
        IData/*16:0*/ top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send;
        IData/*16:0*/ top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send;
        IData/*19:0*/ top__DOT__u_tcp__DOT__inst__DOT__temp;
        IData/*19:0*/ top__DOT__u_tcp__DOT__inst__DOT__temp1;
        IData/*31:0*/ top__DOT__u_payload_fifo__DOT__seq_trk_rd;
        IData/*31:0*/ top__DOT__u_payload_fifo__DOT__nseq_trk_rd;
        IData/*31:0*/ top__DOT__u_payload_fifo__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__u_fifo_tx__DOT__ACK_num_l;
        IData/*31:0*/ top__DOT__u_fifo_tx__DOT__nACK_num_l;
        IData/*31:0*/ top__DOT__u_fifo_tx__DOT____Vlvbound_hde36d840__0;
        IData/*31:0*/ top__DOT__u_fifo_tx__DOT____Vlvbound_hcf6169df__0;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(IP_payload,63,0);
        VL_OUT64(TCP_transmit,63,0);
        VL_IN64(soupbin_TCP_payload,63,0);
        VL_OUT64(axis_rd_data,63,0);
        QData/*63:0*/ top__DOT__axis_data_rx_int;
        QData/*63:0*/ top__DOT__rd_ftx_payload_int;
        QData/*34:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num;
        QData/*34:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nack_num;
        QData/*32:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_num;
        QData/*32:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_num;
        VlWide<41>/*1295:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order;
        VlWide<41>/*1295:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order;
        QData/*63:0*/ top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_payload_rx;
        QData/*63:0*/ top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit;
        VlWide<3>/*71:0*/ top__DOT__u_payload_fifo__DOT__fifo_entry_rd;
        VlWide<3>/*71:0*/ top__DOT__u_payload_fifo__DOT____Vlvbound_h83587f98__0;
        QData/*63:0*/ top__DOT__u_payload_fifo__DOT____Vlvbound_h5d12e1c7__0;
        QData/*63:0*/ top__DOT__u_fifo_tx__DOT__nrd_FIFO_payload;
        VlWide<47>/*1487:0*/ top__DOT__u_fifo_tx__DOT__dict_tx;
        VlWide<47>/*1487:0*/ top__DOT__u_fifo_tx__DOT__ndict_tx;
        VlWide<128>/*4095:0*/ top__DOT__u_fifo_tx__DOT__TCP_tx_order;
        VlWide<128>/*4095:0*/ top__DOT__u_fifo_tx__DOT__nTCP_tx_order;
        VlUnpacked<VlWide<3>/*71:0*/, 5> top__DOT__u_payload_fifo__DOT__TCP_FIFO;
        VlUnpacked<VlWide<3>/*71:0*/, 5> top__DOT__u_payload_fifo__DOT__nTCP_FIFO;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
