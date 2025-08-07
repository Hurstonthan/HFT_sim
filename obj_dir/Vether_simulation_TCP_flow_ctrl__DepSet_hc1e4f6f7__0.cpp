// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_priority_encoder__Wa.h"

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TCP_order__v0 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v10 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v11 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v12 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v13 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v14 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v15 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v16 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v17 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v18 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v19 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v20 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v21 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v22 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v23 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v24 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v25 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v26 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v27 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v28 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v29 = 0U;
    vlSelfRef.__Vdly__window_size = vlSelfRef.__PVT__window_size;
    vlSelfRef.__Vdly__ack_num = vlSelfRef.__PVT__ack_num;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__seq_num = vlSelfRef.__PVT__seq_num;
    vlSelfRef.__Vdly__clear_timeout = vlSelfRef.__PVT__clear_timeout;
    vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__flush_list;
    vlSelfRef.__Vdly__len_flush_ptr = vlSelfRef.__PVT__len_flush_ptr;
    vlSelfRef.__Vdly__seq_rx_str = vlSelfRef.__PVT__seq_rx_str;
    vlSelfRef.__Vdly__rcv_next_prev = vlSelfRef.__PVT__rcv_next_prev;
    vlSelfRef.__Vdly__seq_rcv_str = vlSelfRef.__PVT__seq_rcv_str;
    vlSelfRef.__Vdly__count_en_timeout = vlSelfRef.__PVT__count_en_timeout;
    vlSelfRef.__Vdly__hand_shake_done = vlSelfRef.__PVT__hand_shake_done;
    vlSelfRef.__Vdly__seq_tx_retrans = vlSelfRef.__PVT__seq_tx_retrans;
    vlSelfRef.__Vdly__out_order_req = vlSelfRef.__PVT__out_order_req;
    vlSelfRef.__Vdly__seq_rx_trk = vlSelfRef.__PVT__seq_rx_trk;
    if (vlSelfRef.__PVT__nRST) {
        if (vlSelfRef.__PVT__TCP_flush) {
            vlSelfRef.__Vdly__seq_rx_trk = 0U;
            vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
            vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__nflush_list;
            vlSelfRef.__Vdly__len_flush_ptr = (0xfU 
                                               & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__nlen_flush_ptr), 0U, 4U));
            vlSelfRef.__Vdly__out_order_req = 0U;
            vlSelfRef.__Vdly__seq_tx_retrans = 0U;
            vlSelfRef.__Vdly__seq_rx_str = 0U;
        } else {
            vlSelfRef.__Vdly__seq_rx_trk = vlSelfRef.__PVT__nseq_rx_trk;
            vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
            vlSelfRef.__Vdly__len_flush_ptr = (0xfU 
                                               & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__nlen_flush_ptr), 0U, 4U));
            vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__nflush_list;
            vlSelfRef.__Vdly__hand_shake_done = vlSelfRef.__PVT__nhand_shake_done;
            vlSelfRef.__Vdly__seq_rcv_str = vlSelfRef.__PVT__nseq_rcv_str;
            vlSelfRef.__Vdly__out_order_req = vlSelfRef.__PVT__nout_order_req;
            vlSelfRef.__Vdly__seq_tx_retrans = vlSelfRef.__PVT__nseq_tx_retrans;
            vlSelfRef.__Vdly__seq_rx_str = vlSelfRef.__PVT__nseq_rx_str;
            vlSelfRef.__Vdly__count_en_timeout = vlSelfRef.__PVT__ncount_en_timeout;
            vlSelfRef.__Vdly__clear_timeout = vlSelfRef.__PVT__nclear_timeout;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__nw_segment)))) {
                vlSelfRef.__Vdly__rcv_next_prev = vlSelfRef.__PVT__rcv_next;
            }
        }
    } else {
        vlSelfRef.__Vdly__seq_rx_trk = 0U;
        vlSelfRef.__Vdly__flush_ptr = 0U;
        vlSelfRef.__Vdly__flush_list = 0ULL;
        vlSelfRef.__Vdly__len_flush_ptr = 0U;
        vlSelfRef.__Vdly__hand_shake_done = 0U;
        vlSelfRef.__Vdly__seq_rcv_str = 0U;
        vlSelfRef.__Vdly__out_order_req = 0U;
        vlSelfRef.__Vdly__seq_tx_retrans = 0U;
        vlSelfRef.__Vdly__seq_rx_str = 0U;
        vlSelfRef.__Vdly__rcv_next_prev = 0U;
        vlSelfRef.__Vdly__count_en_timeout = 0U;
        vlSelfRef.__Vdly__clear_timeout = 0U;
    }
    vlSelfRef.__PVT__clear_timeout = vlSelfRef.__Vdly__clear_timeout;
    vlSelfRef.__PVT__flush_ptr = vlSelfRef.__Vdly__flush_ptr;
    vlSelfRef.__PVT__flush_list = vlSelfRef.__Vdly__flush_list;
    vlSelfRef.__PVT__len_flush_ptr = vlSelfRef.__Vdly__len_flush_ptr;
    vlSelfRef.__PVT__seq_rx_str = vlSelfRef.__Vdly__seq_rx_str;
    vlSelfRef.__PVT__rcv_next_prev = vlSelfRef.__Vdly__rcv_next_prev;
    vlSelfRef.__PVT__seq_rcv_str = vlSelfRef.__Vdly__seq_rcv_str;
    vlSelfRef.__PVT__count_en_timeout = vlSelfRef.__Vdly__count_en_timeout;
    vlSelfRef.__PVT__hand_shake_done = vlSelfRef.__Vdly__hand_shake_done;
    vlSelfRef.__PVT__seq_tx_retrans = vlSelfRef.__Vdly__seq_tx_retrans;
    vlSelfRef.__PVT__out_order_req = vlSelfRef.__Vdly__out_order_req;
    vlSelfRef.__PVT__seq_rx_trk = vlSelfRef.__Vdly__seq_rx_trk;
    vlSelfRef.__Vdly__rcv_next = vlSelfRef.__PVT__rcv_next;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__ack_num = vlSelfRef.__PVT__nack_num;
        vlSelfRef.__Vdly__seq_num = vlSelfRef.__PVT__nseq_num;
        vlSelfRef.__Vdly__window_size = vlSelfRef.__PVT__nwindow_size;
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v0, 
                    vlSelfRef.__PVT__nTCP_order[9U]);
        vlSelfRef.__VdlySet__TCP_order__v0 = 1U;
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v1, 
                    vlSelfRef.__PVT__nTCP_order[8U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v2, 
                    vlSelfRef.__PVT__nTCP_order[7U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v3, 
                    vlSelfRef.__PVT__nTCP_order[6U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v4, 
                    vlSelfRef.__PVT__nTCP_order[5U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v5, 
                    vlSelfRef.__PVT__nTCP_order[4U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v6, 
                    vlSelfRef.__PVT__nTCP_order[3U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v7, 
                    vlSelfRef.__PVT__nTCP_order[2U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v8, 
                    vlSelfRef.__PVT__nTCP_order[1U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v9, 
                    vlSelfRef.__PVT__nTCP_order[0U]);
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[0U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v10, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v10 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 1U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[1U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v11, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v11 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 2U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[2U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v12, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v12 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 3U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[3U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v13, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v13 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 4U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[4U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v14, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v14 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 5U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[5U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v15, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v15 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 6U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[6U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v16, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v16 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 7U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[7U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v17, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v17 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 8U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[8U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v18, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v18 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 9U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[9U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v19, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v19 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0xaU;
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        vlSelfRef.__Vdly__rcv_next = ((IData)(vlSelfRef.__PVT__match_found)
                                       ? VL_SEL_IWII(97, 
                                                     vlSelfRef.__PVT__TCP_order
                                                     [
                                                     ((9U 
                                                       >= (IData)(vlSelfRef.__PVT__match_idx))
                                                       ? (IData)(vlSelfRef.__PVT__match_idx)
                                                       : 0U)], 0x20U, 0x20U)
                                       : vlSelfRef.__PVT__nrcv_next);
    } else {
        vlSelfRef.__Vdly__ack_num = 0ULL;
        vlSelfRef.__Vdly__seq_num = VL_EXTEND_QI(33,32, vlSelfRef.__PVT__ISN_num);
        vlSelfRef.__Vdly__window_size = 0x28U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v20, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v20 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 1U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v21, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v21 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 2U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v22, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v22 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 3U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v23, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v23 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 4U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v24, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v24 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 5U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v25, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v25 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 6U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v26, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v26 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 7U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v27, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v27 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 8U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v28, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v28 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 9U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v29, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v29 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 0xaU;
        vlSelfRef.__Vdly__rcv_next = 0U;
        vlSelfRef.__Vdly__state = 0U;
    }
    vlSelfRef.__PVT__window_size = vlSelfRef.__Vdly__window_size;
    vlSelfRef.__PVT__ack_num = vlSelfRef.__Vdly__ack_num;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__seq_num = vlSelfRef.__Vdly__seq_num;
    vlSelfRef.__PVT__rcv_next = vlSelfRef.__Vdly__rcv_next;
    if (vlSelfRef.__VdlySet__TCP_order__v0) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v0);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v1);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v2);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v3);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v4);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v5);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v6);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v7);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v8);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v9);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v10) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v10);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v11) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v11);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v12) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v12);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v13) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v13);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v14) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v14);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v15) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v15);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v16) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v16);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v17) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v17);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v18) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v18);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v19) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v19);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v20) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v20);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v21) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v21);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v22) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v22);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v23) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v23);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v24) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v24);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v25) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v25);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v26) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v26);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v27) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v27);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v28) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v28);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v29) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v29);
    }
    vlSelfRef.__PVT__seq_num_out = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
    vlSelfRef.__PVT__rcv_next_out = vlSelfRef.__PVT__rcv_next;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [0U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [0U], 0x60U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [1U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [1U], 0x60U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [2U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [2U], 0x60U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [3U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [3U], 0x60U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [4U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [4U], 0x60U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [5U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [5U], 0x60U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [6U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [6U], 0x60U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [7U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [7U], 0x60U)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [8U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [8U], 0x60U)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [9U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [9U], 0x60U)));
    VL_ASSIGNSEL_II(10,2,0U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [1U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [0U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,2U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [3U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [2U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,4U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [5U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [4U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,6U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [7U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [6U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,8U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [9U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [8U], 0x60U))));
    vlSelf->__PVT__me->__PVT__din = vlSelfRef.__PVT__match_mask;
    vlSelfRef.__PVT__free_vec = (0x3ffU & (~ (IData)(vlSelfRef.__PVT__v_vec)));
    vlSelf->__PVT__pe->__PVT__din = vlSelfRef.__PVT__free_vec;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__match_found = vlSelf->__PVT__me->__PVT__valid;
    vlSelfRef.__PVT__match_idx = vlSelf->__PVT__me->__PVT__idx;
    vlSelfRef.__PVT__free_mask = vlSelf->__PVT__pe->__PVT__valid;
    vlSelfRef.__PVT__free_idx = vlSelf->__PVT__pe->__PVT__idx;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug = (1U & VL_BITSEL_IIII(32, 
                                                  ((IData)(vlSelfRef.__PVT__TCP_last)
                                                    ? 
                                                   VL_EXTEND_II(32,1, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(33, vlSelfRef.__PVT__seq_num, 0x20U)))
                                                    : 1U), 0U));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [0U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [1U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [2U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [3U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [4U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [5U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [6U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [7U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [8U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [9U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [0U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [1U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [2U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [3U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [4U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [5U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [6U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [7U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [8U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [9U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [0U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [0U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [1U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [1U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [2U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [2U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [3U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [3U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [4U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [4U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [5U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [5U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [6U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [6U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [7U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [7U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [8U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [8U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [9U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [9U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    vlSelf->__PVT__lt->__PVT__din = vlSelfRef.__PVT__left_trim_mask;
    vlSelf->__PVT__rt->__PVT__din = vlSelfRef.__PVT__right_trim_mask;
    vlSelf->__PVT__ov->__PVT__din = vlSelfRef.__PVT__overlap_mask;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lt_idx = vlSelf->__PVT__lt->__PVT__idx;
    vlSelfRef.__PVT__rt_idx = vlSelf->__PVT__rt->__PVT__idx;
    vlSelfRef.__PVT__rt_idx = vlSelf->__PVT__ov->__PVT__idx;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TCP_order__v0 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v10 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v11 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v12 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v13 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v14 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v15 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v16 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v17 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v18 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v19 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v20 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v21 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v22 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v23 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v24 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v25 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v26 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v27 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v28 = 0U;
    vlSelfRef.__VdlySet__TCP_order__v29 = 0U;
    vlSelfRef.__Vdly__window_size = vlSelfRef.__PVT__window_size;
    vlSelfRef.__Vdly__ack_num = vlSelfRef.__PVT__ack_num;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__seq_num = vlSelfRef.__PVT__seq_num;
    vlSelfRef.__Vdly__clear_timeout = vlSelfRef.__PVT__clear_timeout;
    vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__flush_list;
    vlSelfRef.__Vdly__len_flush_ptr = vlSelfRef.__PVT__len_flush_ptr;
    vlSelfRef.__Vdly__seq_rx_str = vlSelfRef.__PVT__seq_rx_str;
    vlSelfRef.__Vdly__rcv_next_prev = vlSelfRef.__PVT__rcv_next_prev;
    vlSelfRef.__Vdly__seq_rcv_str = vlSelfRef.__PVT__seq_rcv_str;
    vlSelfRef.__Vdly__count_en_timeout = vlSelfRef.__PVT__count_en_timeout;
    vlSelfRef.__Vdly__hand_shake_done = vlSelfRef.__PVT__hand_shake_done;
    vlSelfRef.__Vdly__seq_tx_retrans = vlSelfRef.__PVT__seq_tx_retrans;
    vlSelfRef.__Vdly__out_order_req = vlSelfRef.__PVT__out_order_req;
    vlSelfRef.__Vdly__seq_rx_trk = vlSelfRef.__PVT__seq_rx_trk;
    if (vlSelfRef.__PVT__nRST) {
        if (vlSelfRef.__PVT__TCP_flush) {
            vlSelfRef.__Vdly__seq_rx_trk = 0U;
            vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
            vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__nflush_list;
            vlSelfRef.__Vdly__len_flush_ptr = (0xfU 
                                               & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__nlen_flush_ptr), 0U, 4U));
            vlSelfRef.__Vdly__out_order_req = 0U;
            vlSelfRef.__Vdly__seq_tx_retrans = 0U;
            vlSelfRef.__Vdly__seq_rx_str = 0U;
        } else {
            vlSelfRef.__Vdly__seq_rx_trk = vlSelfRef.__PVT__nseq_rx_trk;
            vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
            vlSelfRef.__Vdly__len_flush_ptr = (0xfU 
                                               & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__nlen_flush_ptr), 0U, 4U));
            vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__nflush_list;
            vlSelfRef.__Vdly__hand_shake_done = vlSelfRef.__PVT__nhand_shake_done;
            vlSelfRef.__Vdly__seq_rcv_str = vlSelfRef.__PVT__nseq_rcv_str;
            vlSelfRef.__Vdly__out_order_req = vlSelfRef.__PVT__nout_order_req;
            vlSelfRef.__Vdly__seq_tx_retrans = vlSelfRef.__PVT__nseq_tx_retrans;
            vlSelfRef.__Vdly__seq_rx_str = vlSelfRef.__PVT__nseq_rx_str;
            vlSelfRef.__Vdly__count_en_timeout = vlSelfRef.__PVT__ncount_en_timeout;
            vlSelfRef.__Vdly__clear_timeout = vlSelfRef.__PVT__nclear_timeout;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__nw_segment)))) {
                vlSelfRef.__Vdly__rcv_next_prev = vlSelfRef.__PVT__rcv_next;
            }
        }
    } else {
        vlSelfRef.__Vdly__seq_rx_trk = 0U;
        vlSelfRef.__Vdly__flush_ptr = 0U;
        vlSelfRef.__Vdly__flush_list = 0ULL;
        vlSelfRef.__Vdly__len_flush_ptr = 0U;
        vlSelfRef.__Vdly__hand_shake_done = 0U;
        vlSelfRef.__Vdly__seq_rcv_str = 0U;
        vlSelfRef.__Vdly__out_order_req = 0U;
        vlSelfRef.__Vdly__seq_tx_retrans = 0U;
        vlSelfRef.__Vdly__seq_rx_str = 0U;
        vlSelfRef.__Vdly__rcv_next_prev = 0U;
        vlSelfRef.__Vdly__count_en_timeout = 0U;
        vlSelfRef.__Vdly__clear_timeout = 0U;
    }
    vlSelfRef.__PVT__clear_timeout = vlSelfRef.__Vdly__clear_timeout;
    vlSelfRef.__PVT__flush_ptr = vlSelfRef.__Vdly__flush_ptr;
    vlSelfRef.__PVT__flush_list = vlSelfRef.__Vdly__flush_list;
    vlSelfRef.__PVT__len_flush_ptr = vlSelfRef.__Vdly__len_flush_ptr;
    vlSelfRef.__PVT__seq_rx_str = vlSelfRef.__Vdly__seq_rx_str;
    vlSelfRef.__PVT__rcv_next_prev = vlSelfRef.__Vdly__rcv_next_prev;
    vlSelfRef.__PVT__seq_rcv_str = vlSelfRef.__Vdly__seq_rcv_str;
    vlSelfRef.__PVT__count_en_timeout = vlSelfRef.__Vdly__count_en_timeout;
    vlSelfRef.__PVT__hand_shake_done = vlSelfRef.__Vdly__hand_shake_done;
    vlSelfRef.__PVT__seq_tx_retrans = vlSelfRef.__Vdly__seq_tx_retrans;
    vlSelfRef.__PVT__out_order_req = vlSelfRef.__Vdly__out_order_req;
    vlSelfRef.__PVT__seq_rx_trk = vlSelfRef.__Vdly__seq_rx_trk;
    vlSelfRef.__Vdly__rcv_next = vlSelfRef.__PVT__rcv_next;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__ack_num = vlSelfRef.__PVT__nack_num;
        vlSelfRef.__Vdly__seq_num = vlSelfRef.__PVT__nseq_num;
        vlSelfRef.__Vdly__window_size = vlSelfRef.__PVT__nwindow_size;
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v0, 
                    vlSelfRef.__PVT__nTCP_order[9U]);
        vlSelfRef.__VdlySet__TCP_order__v0 = 1U;
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v1, 
                    vlSelfRef.__PVT__nTCP_order[8U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v2, 
                    vlSelfRef.__PVT__nTCP_order[7U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v3, 
                    vlSelfRef.__PVT__nTCP_order[6U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v4, 
                    vlSelfRef.__PVT__nTCP_order[5U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v5, 
                    vlSelfRef.__PVT__nTCP_order[4U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v6, 
                    vlSelfRef.__PVT__nTCP_order[3U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v7, 
                    vlSelfRef.__PVT__nTCP_order[2U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v8, 
                    vlSelfRef.__PVT__nTCP_order[1U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v9, 
                    vlSelfRef.__PVT__nTCP_order[0U]);
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[0U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v10, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v10 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 1U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[1U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v11, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v11 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 2U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[2U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v12, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v12 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 3U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[3U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v13, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v13 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 4U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[4U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v14, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v14 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 5U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[5U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v15, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v15 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 6U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[6U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v16, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v16 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 7U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[7U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v17, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v17 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 8U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[8U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v18, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v18 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 9U;
        VL_ASSIGN_W(97,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[9U]);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v19, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v19 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0xaU;
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        vlSelfRef.__Vdly__rcv_next = ((IData)(vlSelfRef.__PVT__match_found)
                                       ? VL_SEL_IWII(97, 
                                                     vlSelfRef.__PVT__TCP_order
                                                     [
                                                     ((9U 
                                                       >= (IData)(vlSelfRef.__PVT__match_idx))
                                                       ? (IData)(vlSelfRef.__PVT__match_idx)
                                                       : 0U)], 0x20U, 0x20U)
                                       : vlSelfRef.__PVT__nrcv_next);
    } else {
        vlSelfRef.__Vdly__ack_num = 0ULL;
        vlSelfRef.__Vdly__seq_num = VL_EXTEND_QI(33,32, vlSelfRef.__PVT__ISN_num);
        vlSelfRef.__Vdly__window_size = 0x28U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v20, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v20 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 1U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v21, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v21 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 2U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v22, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v22 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 3U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v23, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v23 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 4U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v24, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v24 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 5U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v25, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v25 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 6U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v26, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v26 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 7U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v27, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v27 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 8U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v28, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v28 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 9U;
        VL_CONST_W_1X(97,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(97,vlSelfRef.__VdlyVal__TCP_order__v29, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v29 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 0xaU;
        vlSelfRef.__Vdly__rcv_next = 0U;
        vlSelfRef.__Vdly__state = 0U;
    }
    vlSelfRef.__PVT__window_size = vlSelfRef.__Vdly__window_size;
    vlSelfRef.__PVT__ack_num = vlSelfRef.__Vdly__ack_num;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__seq_num = vlSelfRef.__Vdly__seq_num;
    vlSelfRef.__PVT__rcv_next = vlSelfRef.__Vdly__rcv_next;
    if (vlSelfRef.__VdlySet__TCP_order__v0) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v0);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v1);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v2);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v3);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v4);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v5);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v6);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v7);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v8);
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v9);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v10) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v10);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v11) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v11);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v12) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v12);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v13) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v13);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v14) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v14);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v15) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v15);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v16) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v16);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v17) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v17);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v18) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v18);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v19) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v19);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v20) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v20);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v21) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v21);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v22) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v22);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v23) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v23);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v24) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v24);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v25) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v25);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v26) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v26);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v27) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v27);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v28) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v28);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v29) {
        VL_ASSIGN_W(97,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v29);
    }
    vlSelfRef.__PVT__seq_num_out = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
    vlSelfRef.__PVT__rcv_next_out = vlSelfRef.__PVT__rcv_next;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [0U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [0U], 0x60U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [1U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [1U], 0x60U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [2U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [2U], 0x60U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [3U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [3U], 0x60U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [4U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [4U], 0x60U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [5U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [5U], 0x60U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [6U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [6U], 0x60U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [7U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [7U], 0x60U)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [8U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [8U], 0x60U)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                  [9U], 0x40U, 0x20U)) 
                     & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [9U], 0x60U)));
    VL_ASSIGNSEL_II(10,2,0U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [1U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [0U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,2U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [3U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [2U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,4U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [5U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [4U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,6U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [7U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [6U], 0x60U))));
    VL_ASSIGNSEL_II(10,2,8U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(97, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [9U], 0x60U)), 
                                  (1U & VL_BITSEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [8U], 0x60U))));
    vlSelf->__PVT__me->__PVT__din = vlSelfRef.__PVT__match_mask;
    vlSelfRef.__PVT__free_vec = (0x3ffU & (~ (IData)(vlSelfRef.__PVT__v_vec)));
    vlSelf->__PVT__pe->__PVT__din = vlSelfRef.__PVT__free_vec;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__match_found = vlSelf->__PVT__me->__PVT__valid;
    vlSelfRef.__PVT__match_idx = vlSelf->__PVT__me->__PVT__idx;
    vlSelfRef.__PVT__free_mask = vlSelf->__PVT__pe->__PVT__valid;
    vlSelfRef.__PVT__free_idx = vlSelf->__PVT__pe->__PVT__idx;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug = (1U & VL_BITSEL_IIII(32, 
                                                  ((IData)(vlSelfRef.__PVT__TCP_last)
                                                    ? 
                                                   VL_EXTEND_II(32,1, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(33, vlSelfRef.__PVT__seq_num, 0x20U)))
                                                    : 1U), 0U));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [0U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [1U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [2U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [3U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [4U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [5U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [6U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [7U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [8U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__left_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x20U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                       [9U], 0x20U, 0x20U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [0U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [1U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [2U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [3U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [4U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [5U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [6U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [7U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [8U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__right_trim_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x60U) & 
                      (vlSelfRef.__PVT__seq_rx_trk 
                       < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x40U, 0x20U))) 
                     & ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        > VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [9U], 0x40U, 0x20U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [0U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [0U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [0U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [1U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [1U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [1U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [2U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [2U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [2U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [3U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [3U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [3U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [4U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [4U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [4U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [5U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [5U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [5U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [6U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [6U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [6U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [7U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [7U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [7U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [8U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [8U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [8U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__overlap_mask, 
                    ((VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                     [9U], 0x60U) & 
                      (((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                      [9U], 0x20U, 0x20U)) 
                       & (vlSelfRef.__PVT__seq_rx_trk 
                          >= VL_SEL_IWII(97, vlSelfRef.__PVT__TCP_order
                                         [9U], 0x40U, 0x20U)))) 
                     | ((vlSelfRef.__PVT__seq_rx_trk 
                         + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                        < vlSelfRef.__PVT__rcv_next)));
    vlSelf->__PVT__lt->__PVT__din = vlSelfRef.__PVT__left_trim_mask;
    vlSelf->__PVT__rt->__PVT__din = vlSelfRef.__PVT__right_trim_mask;
    vlSelf->__PVT__ov->__PVT__din = vlSelfRef.__PVT__overlap_mask;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lt_idx = vlSelf->__PVT__lt->__PVT__idx;
    vlSelfRef.__PVT__rt_idx = vlSelf->__PVT__rt->__PVT__idx;
    vlSelfRef.__PVT__rt_idx = vlSelf->__PVT__ov->__PVT__idx;
}
