// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_flow_ctrl.h"

VL_INLINE_OPT void Vtop_TCP_flow_ctrl___ico_sequent__TOP__top__u_tcp__tcp_flow__0(Vtop_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_flow_ctrl___ico_sequent__TOP__top__u_tcp__tcp_flow__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nack_num = vlSelfRef.__PVT__ack_num;
    vlSelfRef.__PVT__nseq_num = vlSelfRef.__PVT__seq_num;
    vlSelfRef.__PVT__nwindow_size = vlSelfRef.__PVT__window_size;
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[9U], 
                vlSelfRef.__PVT__TCP_order[9U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[8U], 
                vlSelfRef.__PVT__TCP_order[8U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[7U], 
                vlSelfRef.__PVT__TCP_order[7U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[6U], 
                vlSelfRef.__PVT__TCP_order[6U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[5U], 
                vlSelfRef.__PVT__TCP_order[5U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[4U], 
                vlSelfRef.__PVT__TCP_order[4U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[3U], 
                vlSelfRef.__PVT__TCP_order[3U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[2U], 
                vlSelfRef.__PVT__TCP_order[2U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[1U], 
                vlSelfRef.__PVT__TCP_order[1U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[0U], 
                vlSelfRef.__PVT__TCP_order[0U]);
    vlSelfRef.__PVT__TCP_stop_flg = 0U;
    vlSelfRef.__PVT__nrcv_next = vlSelfRef.__PVT__rcv_next;
    vlSelfRef.__PVT__out_of_order_flg = 0U;
    vlSelfRef.__PVT__nseq_rx_trk = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__PVT__nseq_rx_str = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__PVT__bytes_left = 0U;
    vlSelfRef.__PVT__bytes_drop = 0U;
    vlSelfRef.__PVT__wr_FIFO_en = vlSelfRef.__PVT__nw_segment;
    vlSelfRef.__PVT__wr_FIFO_offset = 0U;
    vlSelfRef.__PVT__rd_FIFO_ptr = 0U;
    vlSelfRef.__PVT__rd_FIFO_len = 0U;
    vlSelfRef.__PVT__rd_FIFO_valid = 0U;
    vlSelfRef.__PVT__nflush_list = vlSelfRef.__PVT__flush_list;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__PVT__nlen_flush_ptr = VL_EXTEND_II(8,4, (IData)(vlSelfRef.__PVT__len_flush_ptr));
    vlSelfRef.__PVT__case_bug = 0U;
    vlSelfRef.__PVT__case_bug_0 = 0U;
    vlSelfRef.__PVT__nseq_rcv_str = vlSelfRef.__PVT__seq_rcv_str;
    vlSelfRef.__PVT__nout_order_req = vlSelfRef.__PVT__out_order_req;
    vlSelfRef.__PVT__nseq_tx_retrans = vlSelfRef.__PVT__seq_tx_retrans;
    if (vlSelfRef.__PVT__nw_segment) {
        vlSelfRef.__PVT__nseq_rx_trk = (vlSelfRef.__PVT__seq_rx_trk 
                                        + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
        if ((vlSelfRef.__PVT__seq_rx_trk == vlSelfRef.__PVT__rcv_next)) {
            vlSelfRef.__PVT__nrcv_next = (vlSelfRef.__PVT__rcv_next 
                                          + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
        }
        if (VL_REDOR_I((IData)(vlSelfRef.__PVT__overlap_mask))) {
            vlSelfRef.__PVT__case_bug = 3U;
            vlSelfRef.__PVT__nseq_rx_str = VL_SEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [
                                                       ((9U 
                                                         >= (IData)(vlSelfRef.__PVT__ov_idx))
                                                         ? (IData)(vlSelfRef.__PVT__ov_idx)
                                                         : 0U)], 0x20U, 0x20U);
            vlSelfRef.__PVT__wr_FIFO_en = 0U;
        } else if (VL_REDOR_I((IData)(vlSelfRef.__PVT__right_trim_mask))) {
            vlSelfRef.__PVT__case_bug = 2U;
            vlSelfRef.__PVT__bytes_drop = (0xffU & 
                                           ((VL_SEL_IIII(32, vlSelfRef.__PVT__seq_rx_trk, 0U, 8U) 
                                             + (IData)(vlSelfRef.__PVT__TCP_bytes_trk)) 
                                            - VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [
                                                          ((9U 
                                                            >= (IData)(vlSelfRef.__PVT__rt_idx))
                                                            ? (IData)(vlSelfRef.__PVT__rt_idx)
                                                            : 0U)], 0x40U, 8U)));
            vlSelfRef.__PVT__bytes_left = (0xffU & 
                                           ((IData)(vlSelfRef.__PVT__TCP_bytes_trk) 
                                            - (IData)(vlSelfRef.__PVT__bytes_drop)));
            vlSelfRef.__PVT__wr_FIFO_offset = (0xffU 
                                               & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.__PVT__bytes_drop)));
            if (vlSelfRef.__PVT__free_mask) {
                vlSelfRef.__Vlvbound_ha932e562__0 = vlSelfRef.__PVT__seq_rx_str;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x40U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha932e562__0);
                }
                vlSelfRef.__Vlvbound_ha921413c__0 = 
                    (vlSelfRef.__PVT__seq_rx_trk + 
                     VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__bytes_left)));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x20U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha921413c__0);
                }
                vlSelfRef.__Vlvbound_hd6e26581__0 = 
                    VL_EXTEND_II(16,11, (IData)(vlSelfRef.__PVT__wr_FIFO_ptr));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0x10U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e26581__0);
                }
                vlSelfRef.__Vlvbound_hd6e8a1ae__0 = 
                    VL_EXTEND_II(16,8, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e8a1ae__0);
                }
                vlSelfRef.__Vlvbound_hd7cf6f23__0 = 1U;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd7cf6f23__0);
                }
                vlSelfRef.__Vlvbound_hf6c9a771__0 = vlSelfRef.__PVT__free_idx;
                if (VL_LIKELY(((0x27U >= (0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)))))) {
                    VL_ASSIGNSEL_QI(40,4,(0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)), vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_hf6c9a771__0);
                }
                vlSelfRef.__PVT__nlen_flush_ptr = (0xffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_SEL_IIII(32, 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 0U, 8U)));
            }
        } else if (VL_REDOR_I((IData)(vlSelfRef.__PVT__left_trim_mask))) {
            vlSelfRef.__PVT__case_bug = 1U;
            vlSelfRef.__PVT__case_bug_0 = 1U;
            vlSelfRef.__PVT__bytes_drop = (0xffU & 
                                           (VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [
                                                        ((9U 
                                                          >= (IData)(vlSelfRef.__PVT__lt_idx))
                                                          ? (IData)(vlSelfRef.__PVT__lt_idx)
                                                          : 0U)], 0x20U, 8U) 
                                            - VL_SEL_IIII(32, vlSelfRef.__PVT__seq_rx_trk, 0U, 8U)));
            vlSelfRef.__PVT__bytes_left = (0xffU & 
                                           ((IData)(vlSelfRef.__PVT__TCP_bytes_trk) 
                                            - (IData)(vlSelfRef.__PVT__bytes_drop)));
            vlSelfRef.__PVT__nseq_rx_trk = (vlSelfRef.__PVT__seq_rx_trk 
                                            + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
            vlSelfRef.__PVT__nseq_rx_str = (vlSelfRef.__PVT__seq_rx_trk 
                                            + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__bytes_left)));
            vlSelfRef.__PVT__wr_FIFO_offset = (0xffU 
                                               & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.__PVT__bytes_drop)));
            if (((vlSelfRef.__PVT__seq_rx_trk + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                 > vlSelfRef.__PVT__rcv_next)) {
                vlSelfRef.__PVT__nrcv_next = (vlSelfRef.__PVT__seq_rx_trk 
                                              + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
            }
        } else {
            vlSelfRef.__PVT__case_bug = 0U;
            vlSelfRef.__PVT__wr_FIFO_offset = (0xffU 
                                               & VL_SHIFTR_III(8,8,32, 0xffU, 
                                                               ((IData)(8U) 
                                                                - 
                                                                VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)))));
            if (((IData)(vlSelfRef.__PVT__free_mask) 
                 & (IData)(vlSelfRef.__PVT__TCP_last))) {
                vlSelfRef.__Vlvbound_ha932e562__1 = vlSelfRef.__PVT__seq_rx_str;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x40U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha932e562__1);
                }
                vlSelfRef.__Vlvbound_ha921413c__1 = 
                    (vlSelfRef.__PVT__seq_rx_trk + 
                     VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x20U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha921413c__1);
                }
                vlSelfRef.__Vlvbound_hd6e26581__1 = 
                    VL_EXTEND_II(16,11, (IData)(vlSelfRef.__PVT__wr_FIFO_ptr));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0x10U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e26581__1);
                }
                vlSelfRef.__Vlvbound_hd6e8a1ae__1 = 
                    (0xffffU & ((IData)(1U) + VL_SEL_IIII(32, 
                                                          VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__wr_FIFO_len)), 0U, 0x10U)));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e8a1ae__1);
                }
                vlSelfRef.__Vlvbound_hd7cf6f23__1 = 1U;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd7cf6f23__1);
                }
                vlSelfRef.__Vlvbound_hf6c9a771__1 = vlSelfRef.__PVT__free_idx;
                if (VL_LIKELY(((0x27U >= (0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)))))) {
                    VL_ASSIGNSEL_QI(40,4,(0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)), vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_hf6c9a771__1);
                }
                vlSelfRef.__PVT__nlen_flush_ptr = (0xffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_SEL_IIII(32, 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 0U, 8U)));
            }
        }
    }
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [0U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [0U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [0U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [0U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [0U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 1U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [1U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [1U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [1U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [1U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [1U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 2U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [2U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [2U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [2U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [2U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [2U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 3U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [3U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [3U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [3U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [3U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [3U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 4U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [4U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [4U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [4U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [4U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [4U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 5U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [5U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [5U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [5U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [5U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [5U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 6U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [6U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [6U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [6U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [6U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [6U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 7U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [7U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [7U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [7U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [7U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [7U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 8U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [8U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [8U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [8U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [8U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [8U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 9U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [9U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [9U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [9U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [9U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [9U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xaU;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNSEL_QI(33,32,0U, vlSelfRef.__PVT__nseq_num, 
                            VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U));
            if (vlSelfRef.__PVT__seq_up) {
                vlSelfRef.__PVT__nstate = 1U;
                VL_ASSIGNSEL_QI(33,32,0U, vlSelfRef.__PVT__nseq_num, 
                                ((IData)(1U) + VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U)));
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__TCP_stop_flg = 1U;
            if ((((IData)(vlSelfRef.__PVT__rcv_data) 
                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 1U)) 
                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
                vlSelfRef.__PVT__nstate = 2U;
                VL_ASSIGNSEL_QI(35,32,0U, vlSelfRef.__PVT__nack_num, vlSelfRef.__PVT__ACK_rx);
                vlSelfRef.__PVT__nrcv_next = ((IData)(1U) 
                                              + vlSelfRef.__PVT__seq_num_rx);
                vlSelfRef.__PVT__nseq_rcv_str = ((IData)(1U) 
                                                 + vlSelfRef.__PVT__seq_num_rx);
                vlSelfRef.__PVT__nwindow_size = vlSelfRef.__PVT__window_size_rx;
            } else if (vlSelfRef.__PVT__timeout_flag) {
                vlSelfRef.__PVT__nstate = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__seq_up) {
                vlSelfRef.__PVT__nstate = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            if (VL_REDOR_I(vlSelfRef.__PVT__wnd_allow)) {
                vlSelfRef.__PVT__TCP_stop_flg = 0U;
                if (((IData)(vlSelfRef.__PVT__seq_up) 
                     & (~ (IData)(vlSelfRef.__PVT__out_order_req)))) {
                    VL_ASSIGNSEL_QI(33,32,0U, vlSelfRef.__PVT__nseq_num, 
                                    (VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U) 
                                     + vlSelfRef.__PVT__bytes_abt_sent));
                } else if (vlSelfRef.__PVT__seq_up) {
                    vlSelfRef.__PVT__nout_order_req = 0U;
                }
            } else {
                vlSelfRef.__PVT__TCP_stop_flg = 1U;
            }
            if (((IData)(vlSelfRef.__PVT__rcv_data) 
                 & ((vlSelfRef.__PVT__seq_num_rx + vlSelfRef.__PVT__payload_len_rx) 
                    >= vlSelfRef.__PVT__rcv_next))) {
                vlSelfRef.__PVT__nwindow_size = vlSelfRef.__PVT__window_size_rx;
                if (((vlSelfRef.__PVT__ACK_rx == VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0U, 0x20U)) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
                    if ((3U == (7U & VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0x20U, 3U)))) {
                        VL_ASSIGNSEL_QI(35,3,0x20U, vlSelfRef.__PVT__nack_num, 0U);
                        vlSelfRef.__PVT__nout_order_req = 1U;
                        vlSelfRef.__PVT__nseq_tx_retrans 
                            = vlSelfRef.__PVT__ACK_rx;
                    } else {
                        VL_ASSIGNSEL_QI(35,3,0x20U, vlSelfRef.__PVT__nack_num, 
                                        (7U & ((IData)(1U) 
                                               + VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0x20U, 3U))));
                    }
                } else if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U) 
                            & (vlSelfRef.__PVT__ACK_rx 
                               > VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0U, 0x20U)))) {
                    vlSelfRef.__PVT__nack_num = VL_EXTEND_QI(35,32, vlSelfRef.__PVT__ACK_rx);
                }
                vlSelfRef.__PVT__nflush_ptr = 0U;
                vlSelfRef.__PVT__nlen_flush_ptr = 0U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 1U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,4U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 2U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,8U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 3U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0xcU, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 4U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x10U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 5U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x14U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 6U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x18U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 7U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x1cU, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 8U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x20U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 9U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x24U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xaU;
            }
            if (vlSelfRef.__PVT__TCP_flush) {
                vlSelfRef.__PVT__nstate = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__Vlvbound_h577392d1__0 = 0U;
            if (VL_LIKELY(((9U >= (0xfU & ((0x27U >= 
                                            (0x3fU 
                                             & VL_SEL_IIII(32, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)))
                                            ? VL_SEL_IQII(40, vlSelfRef.__PVT__flush_list, 
                                                          (0x3fU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)), 4U)
                                            : 0U)))))) {
                VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                                [(0xfU & ((0x27U >= 
                                           (0x3fU & 
                                            VL_SEL_IIII(32, 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)))
                                           ? VL_SEL_IQII(40, vlSelfRef.__PVT__flush_list, 
                                                         (0x3fU 
                                                          & VL_SEL_IIII(32, 
                                                                        VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)), 4U)
                                           : 0U))], vlSelfRef.__Vlvbound_h577392d1__0);
            }
            vlSelfRef.__PVT__nflush_ptr = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__flush_ptr)));
            if (((IData)(vlSelfRef.__PVT__nflush_ptr) 
                 >= (IData)(vlSelfRef.__PVT__len_flush_ptr))) {
                vlSelfRef.__PVT__nstate = 3U;
                vlSelfRef.__PVT__nflush_ptr = 0U;
                vlSelfRef.__PVT__nlen_flush_ptr = 0U;
                vlSelfRef.__PVT__nflush_list = 0ULL;
                vlSelfRef.__PVT__nrcv_next = vlSelfRef.__PVT__rcv_next_prev;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
                vlSelfRef.__PVT__nstate = 6U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__TCP_stop_flg = 0U;
            if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 0U))) {
                vlSelfRef.__PVT__nstate = 7U;
            }
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
            vlSelfRef.__PVT__nstate = 0U;
        }
    }
}

VL_INLINE_OPT void Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__2(Vtop_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num = vlSelfRef.__PVT__ACK_rx;
    vlSelfRef.__PVT__rcv_pkg_type = vlSelfRef.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__ACK_rcv_flag = ((IData)(vlSelfRef.__PVT__rcv_data) 
                                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U));
}

VL_INLINE_OPT void Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__0(Vtop_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_pkg_type = 0U;
    VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
    vlSelfRef.__PVT__offset_tx = 5U;
    vlSelfRef.__PVT__urgent_pointer_tx = 0U;
    vlSelfRef.__PVT__seq_num_tx = ((IData)(vlSelfRef.__PVT__out_order_req)
                                    ? vlSelfRef.__PVT__seq_tx_retrans
                                    : VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U));
    vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
    vlSelfRef.__PVT__window_size_tx = ((IData)(vlSelfRef.__PVT__full)
                                        ? 0U : 0xffffU);
    vlSelfRef.__PVT__nhand_shake_done = vlSelfRef.__PVT__hand_shake_done;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__tx_pkg_type = 0U;
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__tx_pkg_type);
        vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
        vlSelfRef.__PVT__ACK_tx = 0U;
    } else if ((1U != (IData)(vlSelfRef.__PVT__state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
            if (vlSelfRef.__PVT__seq_up) {
                vlSelfRef.__PVT__nhand_shake_done = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nhand_shake_done = 0U;
            vlSelfRef.__PVT__seq_num_tx = ((IData)(vlSelfRef.__PVT__out_order_req)
                                            ? vlSelfRef.__PVT__seq_tx_retrans
                                            : VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U));
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__tx_pkg_type);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
        } else if ((6U != (IData)(vlSelfRef.__PVT__state))) {
            if ((7U == (IData)(vlSelfRef.__PVT__state))) {
                VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
                vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
                vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
            }
        }
    }
    vlSelfRef.__PVT__TCP_control_tx = vlSelfRef.__PVT__tx_pkg_type;
}

VL_INLINE_OPT void Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__3(Vtop_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_in_flight = ((VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U) 
                                         + vlSelfRef.__PVT__bytes_abt_sent) 
                                        - (VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0U, 0x20U) 
                                           - vlSelfRef.__PVT__ISN_num));
    vlSelfRef.__PVT__wnd_allow = (VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__window_size)) 
                                  - vlSelfRef.__PVT__bytes_in_flight);
}

VL_INLINE_OPT void Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__4(Vtop_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nack_num = vlSelfRef.__PVT__ack_num;
    vlSelfRef.__PVT__nseq_num = vlSelfRef.__PVT__seq_num;
    vlSelfRef.__PVT__nwindow_size = vlSelfRef.__PVT__window_size;
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[9U], 
                vlSelfRef.__PVT__TCP_order[9U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[8U], 
                vlSelfRef.__PVT__TCP_order[8U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[7U], 
                vlSelfRef.__PVT__TCP_order[7U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[6U], 
                vlSelfRef.__PVT__TCP_order[6U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[5U], 
                vlSelfRef.__PVT__TCP_order[5U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[4U], 
                vlSelfRef.__PVT__TCP_order[4U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[3U], 
                vlSelfRef.__PVT__TCP_order[3U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[2U], 
                vlSelfRef.__PVT__TCP_order[2U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[1U], 
                vlSelfRef.__PVT__TCP_order[1U]);
    VL_ASSIGN_W(97,vlSelfRef.__PVT__nTCP_order[0U], 
                vlSelfRef.__PVT__TCP_order[0U]);
    vlSelfRef.__PVT__TCP_stop_flg = 0U;
    vlSelfRef.__PVT__nrcv_next = vlSelfRef.__PVT__rcv_next;
    vlSelfRef.__PVT__out_of_order_flg = 0U;
    vlSelfRef.__PVT__nseq_rx_trk = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__PVT__nseq_rx_str = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__PVT__bytes_left = 0U;
    vlSelfRef.__PVT__bytes_drop = 0U;
    vlSelfRef.__PVT__wr_FIFO_en = vlSelfRef.__PVT__nw_segment;
    vlSelfRef.__PVT__wr_FIFO_offset = 0U;
    vlSelfRef.__PVT__rd_FIFO_ptr = 0U;
    vlSelfRef.__PVT__rd_FIFO_len = 0U;
    vlSelfRef.__PVT__rd_FIFO_valid = 0U;
    vlSelfRef.__PVT__nflush_list = vlSelfRef.__PVT__flush_list;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__PVT__nlen_flush_ptr = VL_EXTEND_II(8,4, (IData)(vlSelfRef.__PVT__len_flush_ptr));
    vlSelfRef.__PVT__case_bug = 0U;
    vlSelfRef.__PVT__case_bug_0 = 0U;
    vlSelfRef.__PVT__nseq_rcv_str = vlSelfRef.__PVT__seq_rcv_str;
    vlSelfRef.__PVT__nout_order_req = vlSelfRef.__PVT__out_order_req;
    vlSelfRef.__PVT__nseq_tx_retrans = vlSelfRef.__PVT__seq_tx_retrans;
    if (vlSelfRef.__PVT__nw_segment) {
        vlSelfRef.__PVT__nseq_rx_trk = (vlSelfRef.__PVT__seq_rx_trk 
                                        + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
        if ((vlSelfRef.__PVT__seq_rx_trk == vlSelfRef.__PVT__rcv_next)) {
            vlSelfRef.__PVT__nrcv_next = (vlSelfRef.__PVT__rcv_next 
                                          + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
        }
        if (VL_REDOR_I((IData)(vlSelfRef.__PVT__overlap_mask))) {
            vlSelfRef.__PVT__case_bug = 3U;
            vlSelfRef.__PVT__nseq_rx_str = VL_SEL_IWII(97, 
                                                       vlSelfRef.__PVT__TCP_order
                                                       [
                                                       ((9U 
                                                         >= (IData)(vlSelfRef.__PVT__ov_idx))
                                                         ? (IData)(vlSelfRef.__PVT__ov_idx)
                                                         : 0U)], 0x20U, 0x20U);
            vlSelfRef.__PVT__wr_FIFO_en = 0U;
        } else if (VL_REDOR_I((IData)(vlSelfRef.__PVT__right_trim_mask))) {
            vlSelfRef.__PVT__case_bug = 2U;
            vlSelfRef.__PVT__bytes_drop = (0xffU & 
                                           ((VL_SEL_IIII(32, vlSelfRef.__PVT__seq_rx_trk, 0U, 8U) 
                                             + (IData)(vlSelfRef.__PVT__TCP_bytes_trk)) 
                                            - VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [
                                                          ((9U 
                                                            >= (IData)(vlSelfRef.__PVT__rt_idx))
                                                            ? (IData)(vlSelfRef.__PVT__rt_idx)
                                                            : 0U)], 0x40U, 8U)));
            vlSelfRef.__PVT__bytes_left = (0xffU & 
                                           ((IData)(vlSelfRef.__PVT__TCP_bytes_trk) 
                                            - (IData)(vlSelfRef.__PVT__bytes_drop)));
            vlSelfRef.__PVT__wr_FIFO_offset = (0xffU 
                                               & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.__PVT__bytes_drop)));
            if (vlSelfRef.__PVT__free_mask) {
                vlSelfRef.__Vlvbound_ha932e562__0 = vlSelfRef.__PVT__seq_rx_str;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x40U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha932e562__0);
                }
                vlSelfRef.__Vlvbound_ha921413c__0 = 
                    (vlSelfRef.__PVT__seq_rx_trk + 
                     VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__bytes_left)));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x20U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha921413c__0);
                }
                vlSelfRef.__Vlvbound_hd6e26581__0 = 
                    VL_EXTEND_II(16,11, (IData)(vlSelfRef.__PVT__wr_FIFO_ptr));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0x10U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e26581__0);
                }
                vlSelfRef.__Vlvbound_hd6e8a1ae__0 = 
                    VL_EXTEND_II(16,8, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e8a1ae__0);
                }
                vlSelfRef.__Vlvbound_hd7cf6f23__0 = 1U;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd7cf6f23__0);
                }
                vlSelfRef.__Vlvbound_hf6c9a771__0 = vlSelfRef.__PVT__free_idx;
                if (VL_LIKELY(((0x27U >= (0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)))))) {
                    VL_ASSIGNSEL_QI(40,4,(0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)), vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_hf6c9a771__0);
                }
                vlSelfRef.__PVT__nlen_flush_ptr = (0xffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_SEL_IIII(32, 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 0U, 8U)));
            }
        } else if (VL_REDOR_I((IData)(vlSelfRef.__PVT__left_trim_mask))) {
            vlSelfRef.__PVT__case_bug = 1U;
            vlSelfRef.__PVT__case_bug_0 = 1U;
            vlSelfRef.__PVT__bytes_drop = (0xffU & 
                                           (VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [
                                                        ((9U 
                                                          >= (IData)(vlSelfRef.__PVT__lt_idx))
                                                          ? (IData)(vlSelfRef.__PVT__lt_idx)
                                                          : 0U)], 0x20U, 8U) 
                                            - VL_SEL_IIII(32, vlSelfRef.__PVT__seq_rx_trk, 0U, 8U)));
            vlSelfRef.__PVT__bytes_left = (0xffU & 
                                           ((IData)(vlSelfRef.__PVT__TCP_bytes_trk) 
                                            - (IData)(vlSelfRef.__PVT__bytes_drop)));
            vlSelfRef.__PVT__nseq_rx_trk = (vlSelfRef.__PVT__seq_rx_trk 
                                            + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
            vlSelfRef.__PVT__nseq_rx_str = (vlSelfRef.__PVT__seq_rx_trk 
                                            + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__bytes_left)));
            vlSelfRef.__PVT__wr_FIFO_offset = (0xffU 
                                               & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.__PVT__bytes_drop)));
            if (((vlSelfRef.__PVT__seq_rx_trk + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk))) 
                 > vlSelfRef.__PVT__rcv_next)) {
                vlSelfRef.__PVT__nrcv_next = (vlSelfRef.__PVT__seq_rx_trk 
                                              + VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
            }
        } else {
            vlSelfRef.__PVT__case_bug = 0U;
            vlSelfRef.__PVT__wr_FIFO_offset = (0xffU 
                                               & VL_SHIFTR_III(8,8,32, 0xffU, 
                                                               ((IData)(8U) 
                                                                - 
                                                                VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)))));
            if (((IData)(vlSelfRef.__PVT__free_mask) 
                 & (IData)(vlSelfRef.__PVT__TCP_last))) {
                vlSelfRef.__Vlvbound_ha932e562__1 = vlSelfRef.__PVT__seq_rx_str;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x40U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha932e562__1);
                }
                vlSelfRef.__Vlvbound_ha921413c__1 = 
                    (vlSelfRef.__PVT__seq_rx_trk + 
                     VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__TCP_bytes_trk)));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,32,0x20U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_ha921413c__1);
                }
                vlSelfRef.__Vlvbound_hd6e26581__1 = 
                    VL_EXTEND_II(16,11, (IData)(vlSelfRef.__PVT__wr_FIFO_ptr));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0x10U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e26581__1);
                }
                vlSelfRef.__Vlvbound_hd6e8a1ae__1 = 
                    (0xffffU & ((IData)(1U) + VL_SEL_IIII(32, 
                                                          VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__wr_FIFO_len)), 0U, 0x10U)));
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNSEL_WI(97,16,0U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd6e8a1ae__1);
                }
                vlSelfRef.__Vlvbound_hd7cf6f23__1 = 1U;
                if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__free_idx))))) {
                    VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                                    [vlSelfRef.__PVT__free_idx], vlSelfRef.__Vlvbound_hd7cf6f23__1);
                }
                vlSelfRef.__Vlvbound_hf6c9a771__1 = vlSelfRef.__PVT__free_idx;
                if (VL_LIKELY(((0x27U >= (0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)))))) {
                    VL_ASSIGNSEL_QI(40,4,(0x3fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 2U), 0U, 6U)), vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_hf6c9a771__1);
                }
                vlSelfRef.__PVT__nlen_flush_ptr = (0xffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_SEL_IIII(32, 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__len_flush_ptr)), 0U, 8U)));
            }
        }
    }
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [0U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [0U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [0U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [0U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [0U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 1U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [1U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [1U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [1U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [1U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [1U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 2U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [2U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [2U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [2U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [2U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [2U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 3U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [3U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [3U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [3U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [3U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [3U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 4U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [4U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [4U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [4U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [4U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [4U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 5U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [5U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [5U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [5U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [5U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [5U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 6U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [6U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [6U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [6U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [6U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [6U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 7U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [7U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [7U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [7U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [7U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [7U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 8U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [8U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [8U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [8U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [8U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [8U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 9U;
    if (vlSelfRef.__PVT__rd_FIFO_en) {
        if (((vlSelfRef.__PVT__seq_rx_FIFO_rd == VL_SEL_IWII(97, 
                                                             vlSelfRef.__PVT__TCP_order
                                                             [9U], 0x40U, 0x20U)) 
             & VL_BITSEL_IWII(97, vlSelfRef.__PVT__TCP_order
                              [9U], 0x60U))) {
            vlSelfRef.__PVT__rd_FIFO_ptr = (0x7ffU 
                                            & VL_SEL_IWII(97, 
                                                          vlSelfRef.__PVT__TCP_order
                                                          [9U], 0x10U, 0xbU));
            vlSelfRef.__PVT__rd_FIFO_len = (0xffU & 
                                            VL_SEL_IWII(97, 
                                                        vlSelfRef.__PVT__TCP_order
                                                        [9U], 0U, 8U));
            vlSelfRef.__PVT__rd_FIFO_valid = 1U;
            vlSelfRef.__Vlvbound_h24e51c2e__0 = 0U;
            VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                            [9U], vlSelfRef.__Vlvbound_h24e51c2e__0);
        }
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xaU;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNSEL_QI(33,32,0U, vlSelfRef.__PVT__nseq_num, 
                            VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U));
            if (vlSelfRef.__PVT__seq_up) {
                vlSelfRef.__PVT__nstate = 1U;
                VL_ASSIGNSEL_QI(33,32,0U, vlSelfRef.__PVT__nseq_num, 
                                ((IData)(1U) + VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U)));
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__TCP_stop_flg = 1U;
            if ((((IData)(vlSelfRef.__PVT__rcv_data) 
                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 1U)) 
                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
                vlSelfRef.__PVT__nstate = 2U;
                VL_ASSIGNSEL_QI(35,32,0U, vlSelfRef.__PVT__nack_num, vlSelfRef.__PVT__ACK_rx);
                vlSelfRef.__PVT__nrcv_next = ((IData)(1U) 
                                              + vlSelfRef.__PVT__seq_num_rx);
                vlSelfRef.__PVT__nseq_rcv_str = ((IData)(1U) 
                                                 + vlSelfRef.__PVT__seq_num_rx);
                vlSelfRef.__PVT__nwindow_size = vlSelfRef.__PVT__window_size_rx;
            } else if (vlSelfRef.__PVT__timeout_flag) {
                vlSelfRef.__PVT__nstate = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__seq_up) {
                vlSelfRef.__PVT__nstate = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            if (VL_REDOR_I(vlSelfRef.__PVT__wnd_allow)) {
                vlSelfRef.__PVT__TCP_stop_flg = 0U;
                if (((IData)(vlSelfRef.__PVT__seq_up) 
                     & (~ (IData)(vlSelfRef.__PVT__out_order_req)))) {
                    VL_ASSIGNSEL_QI(33,32,0U, vlSelfRef.__PVT__nseq_num, 
                                    (VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U) 
                                     + vlSelfRef.__PVT__bytes_abt_sent));
                } else if (vlSelfRef.__PVT__seq_up) {
                    vlSelfRef.__PVT__nout_order_req = 0U;
                }
            } else {
                vlSelfRef.__PVT__TCP_stop_flg = 1U;
            }
            if (((IData)(vlSelfRef.__PVT__rcv_data) 
                 & ((vlSelfRef.__PVT__seq_num_rx + vlSelfRef.__PVT__payload_len_rx) 
                    >= vlSelfRef.__PVT__rcv_next))) {
                vlSelfRef.__PVT__nwindow_size = vlSelfRef.__PVT__window_size_rx;
                if (((vlSelfRef.__PVT__ACK_rx == VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0U, 0x20U)) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
                    if ((3U == (7U & VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0x20U, 3U)))) {
                        VL_ASSIGNSEL_QI(35,3,0x20U, vlSelfRef.__PVT__nack_num, 0U);
                        vlSelfRef.__PVT__nout_order_req = 1U;
                        vlSelfRef.__PVT__nseq_tx_retrans 
                            = vlSelfRef.__PVT__ACK_rx;
                    } else {
                        VL_ASSIGNSEL_QI(35,3,0x20U, vlSelfRef.__PVT__nack_num, 
                                        (7U & ((IData)(1U) 
                                               + VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0x20U, 3U))));
                    }
                } else if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U) 
                            & (vlSelfRef.__PVT__ACK_rx 
                               > VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0U, 0x20U)))) {
                    vlSelfRef.__PVT__nack_num = VL_EXTEND_QI(35,32, vlSelfRef.__PVT__ACK_rx);
                }
                vlSelfRef.__PVT__nflush_ptr = 0U;
                vlSelfRef.__PVT__nlen_flush_ptr = 0U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 1U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,4U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 2U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,8U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 3U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0xcU, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 4U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x10U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 5U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x14U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 6U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x18U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 7U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x1cU, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 8U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x20U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 9U;
                vlSelfRef.__Vlvbound_h19cbbbf7__0 = 0U;
                VL_ASSIGNSEL_QI(40,4,0x24U, vlSelfRef.__PVT__nflush_list, vlSelfRef.__Vlvbound_h19cbbbf7__0);
                vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xaU;
            }
            if (vlSelfRef.__PVT__TCP_flush) {
                vlSelfRef.__PVT__nstate = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__Vlvbound_h577392d1__0 = 0U;
            if (VL_LIKELY(((9U >= (0xfU & ((0x27U >= 
                                            (0x3fU 
                                             & VL_SEL_IIII(32, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)))
                                            ? VL_SEL_IQII(40, vlSelfRef.__PVT__flush_list, 
                                                          (0x3fU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)), 4U)
                                            : 0U)))))) {
                VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__nTCP_order
                                [(0xfU & ((0x27U >= 
                                           (0x3fU & 
                                            VL_SEL_IIII(32, 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)))
                                           ? VL_SEL_IQII(40, vlSelfRef.__PVT__flush_list, 
                                                         (0x3fU 
                                                          & VL_SEL_IIII(32, 
                                                                        VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 2U), 0U, 6U)), 4U)
                                           : 0U))], vlSelfRef.__Vlvbound_h577392d1__0);
            }
            vlSelfRef.__PVT__nflush_ptr = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__flush_ptr)));
            if (((IData)(vlSelfRef.__PVT__nflush_ptr) 
                 >= (IData)(vlSelfRef.__PVT__len_flush_ptr))) {
                vlSelfRef.__PVT__nstate = 3U;
                vlSelfRef.__PVT__nflush_ptr = 0U;
                vlSelfRef.__PVT__nlen_flush_ptr = 0U;
                vlSelfRef.__PVT__nflush_list = 0ULL;
                vlSelfRef.__PVT__nrcv_next = vlSelfRef.__PVT__rcv_next_prev;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
                vlSelfRef.__PVT__nstate = 6U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__TCP_stop_flg = 0U;
            if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 0U))) {
                vlSelfRef.__PVT__nstate = 7U;
            }
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U))) {
            vlSelfRef.__PVT__nstate = 0U;
        }
    }
}
