// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_TCP_FLOW_CTRL_H_
#define VERILATED_VETHER_SIMULATION_TCP_FLOW_CTRL_H_  // guard

#include "verilated.h"
class Vether_simulation_priority_encoder__Wa;


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_TCP_flow_ctrl final : public VerilatedModule {
  public:
    // CELLS
    Vether_simulation_priority_encoder__Wa* __PVT__me;
    Vether_simulation_priority_encoder__Wa* __PVT__pe;
    Vether_simulation_priority_encoder__Wa* __PVT__lt;
    Vether_simulation_priority_encoder__Wa* __PVT__rt;
    Vether_simulation_priority_encoder__Wa* __PVT__ov;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__CLK,0,0);
        VL_IN8(__PVT__nRST,0,0);
        VL_IN8(__PVT__rcv_data,0,0);
        VL_IN8(__PVT__TCP_control_rx,7,0);
        VL_IN8(__PVT__offset_rx,3,0);
        VL_IN8(__PVT__end_ss,0,0);
        VL_IN8(__PVT__seq_up,0,0);
        VL_OUT8(__PVT__TCP_control_tx,7,0);
        VL_OUT8(__PVT__offset_tx,3,0);
        VL_OUT8(__PVT__TCP_stop_flg,0,0);
        VL_IN8(__PVT__full,0,0);
        VL_IN8(__PVT__timeout_flag,0,0);
        VL_OUT8(__PVT__hand_shake_done,0,0);
        VL_IN8(__PVT__TCP_last,0,0);
        VL_IN8(__PVT__TCP_bytes_trk,7,0);
        VL_OUT8(__PVT__wr_FIFO_offset,7,0);
        VL_IN8(__PVT__wr_FIFO_len,7,0);
        VL_OUT8(__PVT__rd_FIFO_len,7,0);
        VL_OUT8(__PVT__wr_FIFO_en,0,0);
        VL_IN8(__PVT__rd_FIFO_en,0,0);
        VL_IN8(__PVT__nw_segment,0,0);
        VL_IN8(__PVT__TCP_flush,0,0);
        VL_OUT8(__PVT__rd_FIFO_valid,0,0);
        VL_OUT8(__PVT__ACK_rcv_flag,0,0);
        VL_OUT8(__PVT__out_order_req,0,0);
        VL_OUT8(__PVT__count_en_timeout,0,0);
        VL_OUT8(__PVT__clear_timeout,0,0);
        CData/*1:0*/ __PVT__case_bug;
        CData/*0:0*/ __PVT__case_bug_0;
        CData/*6:0*/ __PVT__state;
        CData/*6:0*/ __PVT__nstate;
        CData/*7:0*/ __PVT__rcv_pkg_type;
        CData/*7:0*/ __PVT__tx_pkg_type;
        CData/*0:0*/ __PVT__nhand_shake_done;
        CData/*0:0*/ __PVT__ncount_en_timeout;
        CData/*0:0*/ __PVT__nclear_timeout;
        CData/*0:0*/ __PVT__out_of_order_flg;
        CData/*0:0*/ __PVT__nout_order_req;
        CData/*3:0*/ __PVT__free_idx;
        CData/*3:0*/ __PVT__match_idx;
        CData/*0:0*/ __PVT__free_mask;
        CData/*0:0*/ __PVT__match_found;
        CData/*3:0*/ __PVT__flush_ptr;
        CData/*3:0*/ __PVT__nflush_ptr;
        CData/*3:0*/ __PVT__len_flush_ptr;
        CData/*7:0*/ __PVT__nlen_flush_ptr;
        CData/*0:0*/ __PVT__debug;
        CData/*3:0*/ __PVT__lt_idx;
        CData/*3:0*/ __PVT__rt_idx;
        CData/*3:0*/ __PVT__ov_idx;
        CData/*7:0*/ __PVT__bytes_drop;
        CData/*7:0*/ __PVT__bytes_left;
        QData/*39:0*/ __PVT__flush_list;
        QData/*39:0*/ __PVT__nflush_list;
        CData/*0:0*/ __Vlvbound_hd7cf6f23__0;
        CData/*3:0*/ __Vlvbound_hf6c9a771__0;
        CData/*0:0*/ __Vlvbound_hd7cf6f23__1;
        CData/*3:0*/ __Vlvbound_hf6c9a771__1;
        CData/*0:0*/ __Vlvbound_hd7cf6f23__2;
        CData/*3:0*/ __Vlvbound_hf6c9a771__2;
        CData/*0:0*/ __Vlvbound_h24e51c2e__0;
        CData/*3:0*/ __Vlvbound_h19cbbbf7__0;
        CData/*0:0*/ __Vlvbound_h577392d1__0;
        CData/*3:0*/ __Vdly__flush_ptr;
    };
    struct {
        QData/*39:0*/ __Vdly__flush_list;
        CData/*3:0*/ __Vdly__len_flush_ptr;
        CData/*0:0*/ __Vdly__out_order_req;
        CData/*0:0*/ __Vdly__hand_shake_done;
        CData/*0:0*/ __Vdly__count_en_timeout;
        CData/*0:0*/ __Vdly__clear_timeout;
        CData/*6:0*/ __Vdly__state;
        CData/*0:0*/ __VdlySet__TCP_order__v0;
        CData/*0:0*/ __VdlySet__TCP_order__v10;
        CData/*0:0*/ __VdlySet__TCP_order__v11;
        CData/*0:0*/ __VdlySet__TCP_order__v12;
        CData/*0:0*/ __VdlySet__TCP_order__v13;
        CData/*0:0*/ __VdlySet__TCP_order__v14;
        CData/*0:0*/ __VdlySet__TCP_order__v15;
        CData/*0:0*/ __VdlySet__TCP_order__v16;
        CData/*0:0*/ __VdlySet__TCP_order__v17;
        CData/*0:0*/ __VdlySet__TCP_order__v18;
        CData/*0:0*/ __VdlySet__TCP_order__v19;
        CData/*0:0*/ __VdlySet__TCP_order__v20;
        CData/*0:0*/ __VdlySet__TCP_order__v21;
        CData/*0:0*/ __VdlySet__TCP_order__v22;
        CData/*0:0*/ __VdlySet__TCP_order__v23;
        CData/*0:0*/ __VdlySet__TCP_order__v24;
        CData/*0:0*/ __VdlySet__TCP_order__v25;
        CData/*0:0*/ __VdlySet__TCP_order__v26;
        CData/*0:0*/ __VdlySet__TCP_order__v27;
        CData/*0:0*/ __VdlySet__TCP_order__v28;
        CData/*0:0*/ __VdlySet__TCP_order__v29;
        VL_IN16(__PVT__window_size_rx,15,0);
        VL_IN16(__PVT__checksum_rx,15,0);
        VL_IN16(__PVT__urgent_pointer_rx,15,0);
        VL_OUT16(__PVT__window_size_tx,15,0);
        VL_OUT16(__PVT__urgent_pointer_tx,15,0);
        VL_IN16(__PVT__wr_FIFO_ptr,10,0);
        VL_OUT16(__PVT__rd_FIFO_ptr,10,0);
        SData/*15:0*/ __PVT__window_size;
        SData/*15:0*/ __PVT__nwindow_size;
        SData/*9:0*/ __PVT__v_vec;
        SData/*9:0*/ __PVT__free_vec;
        VlWide<10>/*319:0*/ __PVT__seq_vec;
        SData/*9:0*/ __PVT__match_mask;
        SData/*9:0*/ __PVT__overlap_mask;
        SData/*9:0*/ __PVT__left_trim_mask;
        SData/*9:0*/ __PVT__right_trim_mask;
        SData/*15:0*/ __Vlvbound_hd6e26581__0;
        SData/*15:0*/ __Vlvbound_hd6e8a1ae__0;
        SData/*15:0*/ __Vlvbound_hd6e26581__1;
        SData/*15:0*/ __Vlvbound_hd6e8a1ae__1;
        SData/*15:0*/ __Vlvbound_hd6e26581__2;
        SData/*15:0*/ __Vlvbound_hd6e8a1ae__2;
        SData/*15:0*/ __Vdly__window_size;
        VL_IN(__PVT__seq_num_rx,31,0);
        VL_IN(__PVT__ACK_rx,31,0);
        VL_OUT(__PVT__seq_num_tx,31,0);
        VL_OUT(__PVT__ACK_tx,31,0);
        VL_OUT(__PVT__seq_rcv_str,31,0);
        VL_IN(__PVT__ISN_num,31,0);
        VL_IN(__PVT__bytes_sent,31,0);
        VL_IN(__PVT__bytes_abt_sent,31,0);
        VL_OUT(__PVT__rcv_next_out,31,0);
        VL_OUT(__PVT__seq_num_out,31,0);
        VL_IN(__PVT__seq_rx_FIFO_rd,31,0);
        VL_OUT(__PVT__ACK_num,31,0);
        IData/*31:0*/ __PVT__bytes_in_flight;
    };
    struct {
        IData/*31:0*/ __PVT__wnd_allow;
        IData/*31:0*/ __PVT__nseq_rcv_str;
        IData/*31:0*/ __PVT__rcv_next;
        IData/*31:0*/ __PVT__nrcv_next;
        IData/*31:0*/ __PVT__rcv_next_prev;
        IData/*31:0*/ __PVT__seq_tx_retrans;
        IData/*31:0*/ __PVT__nseq_tx_retrans;
        IData/*31:0*/ __PVT__seq_rx_trk;
        IData/*31:0*/ __PVT__nseq_rx_trk;
        IData/*31:0*/ __PVT__seq_rx_str;
        IData/*31:0*/ __PVT__nseq_rx_str;
        IData/*31:0*/ __PVT__unnamedblk2__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__x;
        IData/*31:0*/ __PVT__unnamedblk3__DOT__i;
        IData/*31:0*/ __PVT__unnamedblk4__DOT__i;
        IData/*31:0*/ __Vlvbound_ha932e562__0;
        IData/*31:0*/ __Vlvbound_ha921413c__0;
        IData/*31:0*/ __Vlvbound_ha932e562__1;
        IData/*31:0*/ __Vlvbound_ha921413c__1;
        IData/*31:0*/ __Vlvbound_ha932e562__2;
        IData/*31:0*/ __Vlvbound_ha921413c__2;
        IData/*31:0*/ __Vdly__seq_rx_trk;
        IData/*31:0*/ __Vdly__seq_tx_retrans;
        IData/*31:0*/ __Vdly__seq_rx_str;
        IData/*31:0*/ __Vdly__seq_rcv_str;
        IData/*31:0*/ __Vdly__rcv_next_prev;
        IData/*31:0*/ __Vdly__rcv_next;
        QData/*34:0*/ __PVT__ack_num;
        QData/*34:0*/ __PVT__nack_num;
        QData/*32:0*/ __PVT__seq_num;
        QData/*32:0*/ __PVT__nseq_num;
        VlWide<4>/*96:0*/ __Vlvbound_h9dc49967__0;
        VlWide<4>/*96:0*/ __Vlvbound_h6f39c964__0;
        QData/*34:0*/ __Vdly__ack_num;
        QData/*32:0*/ __Vdly__seq_num;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v0;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v1;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v2;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v3;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v4;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v5;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v6;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v7;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v8;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v9;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v10;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v11;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v12;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v13;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v14;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v15;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v16;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v17;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v18;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v19;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v20;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v21;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v22;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v23;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v24;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v25;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v26;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v27;
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v28;
    };
    struct {
        VlWide<4>/*96:0*/ __VdlyVal__TCP_order__v29;
        VlUnpacked<VlWide<4>/*96:0*/, 10> __PVT__nTCP_order;
        VlUnpacked<VlWide<4>/*96:0*/, 10> __PVT__TCP_order;
    };

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_TCP_flow_ctrl(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_TCP_flow_ctrl();
    VL_UNCOPYABLE(Vether_simulation_TCP_flow_ctrl);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
