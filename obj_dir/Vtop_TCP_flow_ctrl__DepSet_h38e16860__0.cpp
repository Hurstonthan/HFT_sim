// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_flow_ctrl.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__0(Vtop_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__rcv_next = vlSelfRef.__PVT__rcv_next;
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
    vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__flush_list;
    vlSelfRef.__Vdly__len_flush_ptr = vlSelfRef.__PVT__len_flush_ptr;
    vlSelfRef.__Vdly__seq_rcv_str = vlSelfRef.__PVT__seq_rcv_str;
    vlSelfRef.__Vdly__hand_shake_done = vlSelfRef.__PVT__hand_shake_done;
    vlSelfRef.__Vdly__seq_rx_trk = vlSelfRef.__PVT__seq_rx_trk;
    vlSelfRef.__Vdly__window_size = vlSelfRef.__PVT__window_size;
    vlSelfRef.__Vdly__ack_num = vlSelfRef.__PVT__ack_num;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__seq_num = vlSelfRef.__PVT__seq_num;
    if (vlSelfRef.__PVT__nRST) {
        if (vlSelfRef.__PVT__TCP_flush) {
            vlSelfRef.__Vdly__seq_rx_trk = 0U;
            vlSelfRef.__Vdly__flush_ptr = 0U;
            vlSelfRef.__Vdly__flush_list = 0ULL;
            vlSelfRef.__Vdly__len_flush_ptr = 0U;
        } else {
            vlSelfRef.__Vdly__seq_rx_trk = vlSelfRef.__PVT__nseq_rx_trk;
            vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
            vlSelfRef.__Vdly__len_flush_ptr = (0xfU 
                                               & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__nlen_flush_ptr), 0U, 4U));
            vlSelfRef.__Vdly__flush_list = vlSelfRef.__PVT__nflush_list;
            vlSelfRef.__Vdly__hand_shake_done = vlSelfRef.__PVT__nhand_shake_done;
            vlSelfRef.__Vdly__seq_rcv_str = vlSelfRef.__PVT__nseq_rcv_str;
        }
    } else {
        vlSelfRef.__Vdly__seq_rx_trk = 0U;
        vlSelfRef.__Vdly__flush_ptr = 0U;
        vlSelfRef.__Vdly__flush_list = 0ULL;
        vlSelfRef.__Vdly__len_flush_ptr = 0U;
        vlSelfRef.__Vdly__hand_shake_done = 0U;
        vlSelfRef.__Vdly__seq_rcv_str = 0U;
    }
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__ack_num = vlSelfRef.__PVT__nack_num;
        vlSelfRef.__Vdly__seq_num = vlSelfRef.__PVT__nseq_num;
        vlSelfRef.__Vdly__window_size = vlSelfRef.__PVT__nwindow_size;
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v0, 
                    vlSelfRef.__PVT__nTCP_order[9U]);
        vlSelfRef.__VdlySet__TCP_order__v0 = 1U;
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v1, 
                    vlSelfRef.__PVT__nTCP_order[8U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v2, 
                    vlSelfRef.__PVT__nTCP_order[7U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v3, 
                    vlSelfRef.__PVT__nTCP_order[6U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v4, 
                    vlSelfRef.__PVT__nTCP_order[5U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v5, 
                    vlSelfRef.__PVT__nTCP_order[4U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v6, 
                    vlSelfRef.__PVT__nTCP_order[3U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v7, 
                    vlSelfRef.__PVT__nTCP_order[2U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v8, 
                    vlSelfRef.__PVT__nTCP_order[1U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v9, 
                    vlSelfRef.__PVT__nTCP_order[0U]);
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[0U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v10, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v10 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 1U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[1U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v11, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v11 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 2U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[2U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v12, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v12 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 3U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[3U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v13, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v13 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 4U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[4U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v14, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v14 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 5U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[5U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v15, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v15 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 6U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[6U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v16, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v16 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 7U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[7U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v17, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v17 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 8U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[8U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v18, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v18 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 9U;
        VL_ASSIGN_W(81,vlSelfRef.__Vlvbound_h9dc49967__0, 
                    vlSelfRef.__PVT__nTCP_order[9U]);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v19, vlSelfRef.__Vlvbound_h9dc49967__0);
        vlSelfRef.__VdlySet__TCP_order__v19 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0xaU;
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        if (vlSelfRef.__PVT__match_found) {
            if ((VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                             [((9U >= (IData)(vlSelfRef.__PVT__match_idx))
                                ? (IData)(vlSelfRef.__PVT__match_idx)
                                : 0U)], 0x30U, 0x20U) 
                 == vlSelfRef.__PVT__rcv_next)) {
                vlSelfRef.__Vdly__rcv_next = VL_EXTEND_II(32,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IWII(81, 
                                                                         vlSelfRef.__PVT__TCP_order
                                                                         [
                                                                         ((9U 
                                                                           >= (IData)(vlSelfRef.__PVT__match_idx))
                                                                           ? (IData)(vlSelfRef.__PVT__match_idx)
                                                                           : 0U)], 0x20U, 0x10U)));
            }
        } else {
            vlSelfRef.__Vdly__rcv_next = vlSelfRef.__PVT__nrcv_next;
        }
    } else {
        vlSelfRef.__Vdly__ack_num = 0ULL;
        vlSelfRef.__Vdly__seq_num = VL_EXTEND_QI(33,32, vlSelfRef.__PVT__ISN_num);
        vlSelfRef.__Vdly__window_size = 0x28U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v20, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v20 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 1U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v21, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v21 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 2U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v22, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v22 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 3U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v23, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v23 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 4U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v24, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v24 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 5U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v25, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v25 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 6U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v26, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v26 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 7U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v27, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v27 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 8U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v28, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v28 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 9U;
        VL_CONST_W_1X(81,vlSelfRef.__Vlvbound_h6f39c964__0,0x00000000);
        VL_ASSIGN_W(81,vlSelfRef.__VdlyVal__TCP_order__v29, vlSelfRef.__Vlvbound_h6f39c964__0);
        vlSelfRef.__VdlySet__TCP_order__v29 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__x = 0xaU;
        vlSelfRef.__Vdly__rcv_next = 0U;
        vlSelfRef.__Vdly__state = 0U;
    }
    vlSelfRef.__PVT__flush_ptr = vlSelfRef.__Vdly__flush_ptr;
    vlSelfRef.__PVT__flush_list = vlSelfRef.__Vdly__flush_list;
    vlSelfRef.__PVT__len_flush_ptr = vlSelfRef.__Vdly__len_flush_ptr;
    vlSelfRef.__PVT__seq_rcv_str = vlSelfRef.__Vdly__seq_rcv_str;
    vlSelfRef.__PVT__hand_shake_done = vlSelfRef.__Vdly__hand_shake_done;
    vlSelfRef.__PVT__seq_rx_trk = vlSelfRef.__Vdly__seq_rx_trk;
    vlSelfRef.__PVT__window_size = vlSelfRef.__Vdly__window_size;
    vlSelfRef.__PVT__ack_num = vlSelfRef.__Vdly__ack_num;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__rcv_next = vlSelfRef.__Vdly__rcv_next;
    vlSelfRef.__PVT__seq_num = vlSelfRef.__Vdly__seq_num;
    if (vlSelfRef.__VdlySet__TCP_order__v0) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v0);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v1);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v2);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v3);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v4);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v5);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v6);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v7);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v8);
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v9);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v10) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v10);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v11) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v11);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v12) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v12);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v13) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v13);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v14) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v14);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v15) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v15);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v16) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v16);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v17) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v17);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v18) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v18);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v19) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v19);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v20) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[0U], vlSelfRef.__VdlyVal__TCP_order__v20);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v21) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[1U], vlSelfRef.__VdlyVal__TCP_order__v21);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v22) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[2U], vlSelfRef.__VdlyVal__TCP_order__v22);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v23) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[3U], vlSelfRef.__VdlyVal__TCP_order__v23);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v24) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[4U], vlSelfRef.__VdlyVal__TCP_order__v24);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v25) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[5U], vlSelfRef.__VdlyVal__TCP_order__v25);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v26) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[6U], vlSelfRef.__VdlyVal__TCP_order__v26);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v27) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[7U], vlSelfRef.__VdlyVal__TCP_order__v27);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v28) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[8U], vlSelfRef.__VdlyVal__TCP_order__v28);
    }
    if (vlSelfRef.__VdlySet__TCP_order__v29) {
        VL_ASSIGN_W(81,vlSelfRef.__PVT__TCP_order[9U], vlSelfRef.__VdlyVal__TCP_order__v29);
    }
    vlSelfRef.__PVT__rcv_next_out = vlSelfRef.__PVT__rcv_next;
    vlSelfRef.__PVT__seq_num_out = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [0U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [0U], 0x50U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [1U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [1U], 0x50U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [2U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [2U], 0x50U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [3U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [3U], 0x50U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [4U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [4U], 0x50U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [5U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [5U], 0x50U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [6U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [6U], 0x50U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [7U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [7U], 0x50U)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [8U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [8U], 0x50U)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__match_mask, 
                    ((vlSelfRef.__PVT__rcv_next == 
                      VL_SEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                  [9U], 0x30U, 0x20U)) 
                     & VL_BITSEL_IWII(81, vlSelfRef.__PVT__TCP_order
                                      [9U], 0x50U)));
    VL_ASSIGNSEL_II(10,2,0U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(81, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [1U], 0x50U)), 
                                  (1U & VL_BITSEL_IWII(81, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [0U], 0x50U))));
    VL_ASSIGNSEL_II(10,2,2U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(81, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [3U], 0x50U)), 
                                  (1U & VL_BITSEL_IWII(81, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [2U], 0x50U))));
    VL_ASSIGNSEL_II(10,2,4U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(81, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [5U], 0x50U)), 
                                  (1U & VL_BITSEL_IWII(81, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [4U], 0x50U))));
    VL_ASSIGNSEL_II(10,2,6U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(81, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [7U], 0x50U)), 
                                  (1U & VL_BITSEL_IWII(81, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [6U], 0x50U))));
    VL_ASSIGNSEL_II(10,2,8U, vlSelfRef.__PVT__v_vec, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(81, 
                                                              vlSelfRef.__PVT__TCP_order
                                                              [9U], 0x50U)), 
                                  (1U & VL_BITSEL_IWII(81, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [8U], 0x50U))));
    vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din 
        = vlSelfRef.__PVT__match_mask;
    vlSelfRef.__PVT__free_vec = (0x3ffU & (~ (IData)(vlSelfRef.__PVT__v_vec)));
    vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din 
        = vlSelfRef.__PVT__free_vec;
}

VL_INLINE_OPT void Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__1(Vtop_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__match_found = vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid;
    vlSelfRef.__PVT__match_idx = vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx;
    vlSelfRef.__PVT__free_mask = vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid;
    vlSelfRef.__PVT__free_idx = vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx;
}
