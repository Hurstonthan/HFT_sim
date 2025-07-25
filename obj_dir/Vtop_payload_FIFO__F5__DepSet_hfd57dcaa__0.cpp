// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_payload_FIFO__F5.h"

VL_INLINE_OPT void Vtop_payload_FIFO__F5___ico_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO__F5___ico_sequent__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_len = (0xfU & (((((((VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 7U))) 
                                                + VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 6U)))) 
                                               + VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 5U)))) 
                                              + VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 4U)))) 
                                             + VL_EXTEND_II(4,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 3U)))) 
                                            + VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 2U)))) 
                                           + VL_EXTEND_II(4,1, 
                                                          (1U 
                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 1U)))) 
                                          + VL_EXTEND_II(4,1, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 0U)))));
    vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nTCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__PVT__nrd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__PVT__naxis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
        vlSelfRef.__PVT__nflush_ptr = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__flush_ptr)));
    } else if (((IData)(vlSelfRef.__PVT__flush_ptr) 
                == (IData)(vlSelfRef.__PVT__len_TCP_flush))) {
        vlSelfRef.__PVT__nTCP_flush_l = 0U;
    } else if (((IData)(vlSelfRef.__PVT__nw_segment) 
                | (IData)(vlSelfRef.__PVT__wr_FIFO_en))) {
        vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    } else if (vlSelfRef.__PVT__TCP_flush) {
        vlSelfRef.__PVT__nTCP_flush_l = 1U;
        vlSelfRef.__PVT__nlen_TCP_flush = vlSelfRef.__PVT__wr_ptr;
        vlSelfRef.__PVT__nflush_ptr = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__flush_ptr)));
    }
    if (vlSelfRef.__PVT__wr_FIFO_en) {
        vlSelfRef.__PVT__nwr_ptr = (7U & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__wr_ptr)));
        vlSelfRef.__Vlvbound_hf0dde044__0 = vlSelfRef.__PVT__axis_data_rx;
        if (VL_LIKELY(((4U >= (IData)(vlSelfRef.__PVT__wr_ptr))))) {
            VL_ASSIGNSEL_WQ(72,64,8U, vlSelfRef.__PVT__nTCP_FIFO
                            [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__Vlvbound_hf0dde044__0);
        }
        vlSelfRef.__Vlvbound_h48178a4d__0 = vlSelfRef.__PVT__wr_FIFO_offset;
        if (VL_LIKELY(((4U >= (IData)(vlSelfRef.__PVT__wr_ptr))))) {
            VL_ASSIGNSEL_WI(72,8,0U, vlSelfRef.__PVT__nTCP_FIFO
                            [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__Vlvbound_h48178a4d__0);
        }
    }
    if (vlSelfRef.__PVT__rd_FIFO_valid) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 1U;
    } else if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__rd_FIFO_len))) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 0U;
    }
    if (vlSelfRef.__PVT__axis_r_en) {
        if (((IData)(vlSelfRef.__PVT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.__PVT__rd_ptr) != (IData)(vlSelfRef.__PVT__flush_ptr)))) {
            vlSelfRef.__PVT__nseq_trk_rd = (vlSelfRef.__PVT__seq_trk_rd 
                                            + VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__bytes_len)));
            vlSelfRef.__PVT__nrd_ptr = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__rd_ptr)));
            vlSelfRef.__PVT__naxis_r_valid = 1U;
        } else {
            vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
            vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
            vlSelfRef.__PVT__naxis_r_valid = 0U;
        }
    }
}

VL_INLINE_OPT void Vtop_payload_FIFO__F5___nba_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO__F5___nba_sequent__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__Vdly__TCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__Vdly__seq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__VdlySet__TCP_FIFO__v0 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v5 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v6 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v7 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v8 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v9 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v10 = 0U;
    vlSelfRef.__Vdly__rd_len_ptr = vlSelfRef.__PVT__rd_len_ptr;
    vlSelfRef.__Vdly__axis_rd_data = vlSelfRef.__PVT__axis_rd_data;
    vlSelfRef.__Vdly__len_TCP_flush = vlSelfRef.__PVT__len_TCP_flush;
    vlSelfRef.__Vdly__axis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    vlSelfRef.__Vdly__rd_FIFO_en = vlSelfRef.__PVT__rd_FIFO_en;
    vlSelfRef.__Vdly__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__Vdly__wr_FIFO_len = vlSelfRef.__PVT__wr_FIFO_len;
    vlSelfRef.__Vdly__wr_ptr_out = vlSelfRef.__PVT__wr_ptr_out;
    vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__nwr_ptr;
        vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__nrd_ptr;
        vlSelfRef.__Vdly__rd_FIFO_en = vlSelfRef.__PVT__axis_r_en;
        vlSelfRef.__Vdly__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_trk_rd;
        vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
        vlSelfRef.__Vdly__len_TCP_flush = vlSelfRef.__PVT__nlen_TCP_flush;
        vlSelfRef.__Vdly__axis_r_valid = vlSelfRef.__PVT__naxis_r_valid;
        vlSelfRef.__Vdly__TCP_flush_l = vlSelfRef.__PVT__nTCP_flush_l;
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v0, 
                    vlSelfRef.__PVT__nTCP_FIFO[4U]);
        vlSelfRef.__VdlySet__TCP_FIFO__v0 = 1U;
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v1, 
                    vlSelfRef.__PVT__nTCP_FIFO[3U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v2, 
                    vlSelfRef.__PVT__nTCP_FIFO[2U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v3, 
                    vlSelfRef.__PVT__nTCP_FIFO[1U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v4, 
                    vlSelfRef.__PVT__nTCP_FIFO[0U]);
        vlSelfRef.__Vdly__seq_trk_rd = ((IData)(vlSelfRef.__PVT__handshake_done)
                                         ? vlSelfRef.__PVT__seq_rcv_start
                                         : vlSelfRef.__PVT__nseq_trk_rd);
        vlSelfRef.__Vdly__wr_FIFO_len = vlSelfRef.__PVT__wr_ptr;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__wr_FIFO_en)))) {
            vlSelfRef.__Vdly__wr_ptr_out = vlSelfRef.__PVT__wr_ptr;
        }
        if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
            VL_CONST_W_1X(72,vlSelfRef.__Vlvbound_he08b30c9__0,0x00000000);
            if (VL_LIKELY(((4U >= (IData)(vlSelfRef.__PVT__flush_ptr))))) {
                VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v5, vlSelfRef.__Vlvbound_he08b30c9__0);
                vlSelfRef.__VdlyDim0__TCP_FIFO__v5 
                    = vlSelfRef.__PVT__flush_ptr;
                vlSelfRef.__VdlySet__TCP_FIFO__v5 = 1U;
            }
        } else if (((IData)(vlSelfRef.__PVT__axis_r_en) 
                    & (IData)(vlSelfRef.__PVT__rd_FIFO_valid_l))) {
            VL_ASSIGNSEL_QI(64,8,0x38U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 7U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0x40U, 8U)))
                                                   : 0U), 0U, 8U)));
            VL_ASSIGNSEL_QI(64,8,0x30U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 6U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0x38U, 8U)))
                                                   : 0U), 0U, 8U)));
            VL_ASSIGNSEL_QI(64,8,0x28U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 5U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0x30U, 8U)))
                                                   : 0U), 0U, 8U)));
            VL_ASSIGNSEL_QI(64,8,0x20U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 4U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0x28U, 8U)))
                                                   : 0U), 0U, 8U)));
            VL_ASSIGNSEL_QI(64,8,0x18U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 3U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0x20U, 8U)))
                                                   : 0U), 0U, 8U)));
            VL_ASSIGNSEL_QI(64,8,0x10U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 2U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0x18U, 8U)))
                                                   : 0U), 0U, 8U)));
            VL_ASSIGNSEL_QI(64,8,8U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 1U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0x10U, 8U)))
                                                   : 0U), 0U, 8U)));
            VL_ASSIGNSEL_QI(64,8,0U, vlSelfRef.__Vdly__axis_rd_data, 
                            (0xffU & VL_SEL_IIII(32, 
                                                 ((1U 
                                                   & VL_BITSEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 0U))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IWII(72, vlSelfRef.__PVT__fifo_entry_rd, 8U, 8U)))
                                                   : 0U), 0U, 8U)));
        }
    } else {
        vlSelfRef.__Vdly__wr_ptr = 0U;
        vlSelfRef.__Vdly__rd_ptr = 0U;
        vlSelfRef.__Vdly__flush_ptr = 0U;
        vlSelfRef.__Vdly__rd_FIFO_en = 0U;
        vlSelfRef.__Vdly__seq_trk_rd = 0U;
        vlSelfRef.__Vdly__rd_len_ptr = 0U;
        vlSelfRef.__Vdly__len_TCP_flush = 0U;
        vlSelfRef.__Vdly__axis_r_valid = 0U;
        vlSelfRef.__Vdly__TCP_flush_l = 0U;
        vlSelfRef.__Vdly__axis_rd_data = 0ULL;
        vlSelfRef.__Vdly__wr_FIFO_len = 0U;
        vlSelfRef.__Vdly__seq_rx_FIFO_rd = 0U;
        VL_CONST_W_1X(72,vlSelfRef.__Vlvbound_hbbd841ec__0,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v6, vlSelfRef.__Vlvbound_hbbd841ec__0);
        vlSelfRef.__VdlySet__TCP_FIFO__v6 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
        VL_CONST_W_1X(72,vlSelfRef.__Vlvbound_hbbd841ec__0,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v7, vlSelfRef.__Vlvbound_hbbd841ec__0);
        vlSelfRef.__VdlySet__TCP_FIFO__v7 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
        VL_CONST_W_1X(72,vlSelfRef.__Vlvbound_hbbd841ec__0,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v8, vlSelfRef.__Vlvbound_hbbd841ec__0);
        vlSelfRef.__VdlySet__TCP_FIFO__v8 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
        VL_CONST_W_1X(72,vlSelfRef.__Vlvbound_hbbd841ec__0,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v9, vlSelfRef.__Vlvbound_hbbd841ec__0);
        vlSelfRef.__VdlySet__TCP_FIFO__v9 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
        VL_CONST_W_1X(72,vlSelfRef.__Vlvbound_hbbd841ec__0,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v10, vlSelfRef.__Vlvbound_hbbd841ec__0);
        vlSelfRef.__VdlySet__TCP_FIFO__v10 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    }
    vlSelfRef.__PVT__rd_len_ptr = vlSelfRef.__Vdly__rd_len_ptr;
    vlSelfRef.__PVT__axis_rd_data = vlSelfRef.__Vdly__axis_rd_data;
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__flush_ptr = vlSelfRef.__Vdly__flush_ptr;
    vlSelfRef.__PVT__len_TCP_flush = vlSelfRef.__Vdly__len_TCP_flush;
    vlSelfRef.__PVT__TCP_flush_l = vlSelfRef.__Vdly__TCP_flush_l;
    vlSelfRef.__PVT__seq_trk_rd = vlSelfRef.__Vdly__seq_trk_rd;
    vlSelfRef.__PVT__axis_r_valid = vlSelfRef.__Vdly__axis_r_valid;
    if (vlSelfRef.__VdlySet__TCP_FIFO__v0) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[4U], vlSelfRef.__VdlyVal__TCP_FIFO__v0);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[3U], vlSelfRef.__VdlyVal__TCP_FIFO__v1);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[2U], vlSelfRef.__VdlyVal__TCP_FIFO__v2);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[1U], vlSelfRef.__VdlyVal__TCP_FIFO__v3);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0U], vlSelfRef.__VdlyVal__TCP_FIFO__v4);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v5) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[vlSelfRef.__VdlyDim0__TCP_FIFO__v5], vlSelfRef.__VdlyVal__TCP_FIFO__v5);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v6) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0U], vlSelfRef.__VdlyVal__TCP_FIFO__v6);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v7) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[1U], vlSelfRef.__VdlyVal__TCP_FIFO__v7);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v8) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[2U], vlSelfRef.__VdlyVal__TCP_FIFO__v8);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v9) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[3U], vlSelfRef.__VdlyVal__TCP_FIFO__v9);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v10) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[4U], vlSelfRef.__VdlyVal__TCP_FIFO__v10);
    }
    vlSelfRef.__PVT__rd_FIFO_en = vlSelfRef.__Vdly__rd_FIFO_en;
    vlSelfRef.__PVT__seq_rx_FIFO_rd = vlSelfRef.__Vdly__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__wr_FIFO_len = vlSelfRef.__Vdly__wr_FIFO_len;
    vlSelfRef.__PVT__wr_ptr_out = vlSelfRef.__Vdly__wr_ptr_out;
    vlSelfRef.__PVT__rd_ptr = vlSelfRef.__Vdly__rd_ptr;
    vlSelfRef.__PVT__payload1 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [0U], 8U, 0x40U);
    vlSelfRef.__PVT__payload2 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [1U], 8U, 0x40U);
    vlSelfRef.__PVT__payload3 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [2U], 8U, 0x40U);
    vlSelfRef.__PVT__payload4 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [3U], 8U, 0x40U);
    vlSelfRef.__PVT__payload5 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [4U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset1 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [0U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset2 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [1U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset3 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [2U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset4 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [3U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset5 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [4U], 0U, 8U));
    VL_ASSIGN_W(72,vlSelfRef.__PVT__fifo_entry_rd, 
                vlSelfRef.__PVT__TCP_FIFO[((4U >= (IData)(vlSelfRef.__PVT__rd_ptr))
                                            ? (IData)(vlSelfRef.__PVT__rd_ptr)
                                            : 0U)]);
    vlSelfRef.__PVT__full = ((VL_EXTEND_II(32,3, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                              - (IData)(1U)) == VL_EXTEND_II(32,3, (IData)(vlSelfRef.__PVT__wr_ptr_out)));
}

VL_INLINE_OPT void Vtop_payload_FIFO__F5___nba_comb__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO__F5___nba_comb__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_len = (0xfU & (((((((VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 7U))) 
                                                + VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 6U)))) 
                                               + VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 5U)))) 
                                              + VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 4U)))) 
                                             + VL_EXTEND_II(4,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 3U)))) 
                                            + VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 2U)))) 
                                           + VL_EXTEND_II(4,1, 
                                                          (1U 
                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 1U)))) 
                                          + VL_EXTEND_II(4,1, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 0U)))));
    vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nTCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__PVT__nrd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__PVT__naxis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
        vlSelfRef.__PVT__nflush_ptr = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__flush_ptr)));
    } else if (((IData)(vlSelfRef.__PVT__flush_ptr) 
                == (IData)(vlSelfRef.__PVT__len_TCP_flush))) {
        vlSelfRef.__PVT__nTCP_flush_l = 0U;
    } else if (((IData)(vlSelfRef.__PVT__nw_segment) 
                | (IData)(vlSelfRef.__PVT__wr_FIFO_en))) {
        vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    } else if (vlSelfRef.__PVT__TCP_flush) {
        vlSelfRef.__PVT__nTCP_flush_l = 1U;
        vlSelfRef.__PVT__nlen_TCP_flush = vlSelfRef.__PVT__wr_ptr;
        vlSelfRef.__PVT__nflush_ptr = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__flush_ptr)));
    }
    if (vlSelfRef.__PVT__wr_FIFO_en) {
        vlSelfRef.__PVT__nwr_ptr = (7U & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__wr_ptr)));
        vlSelfRef.__Vlvbound_hf0dde044__0 = vlSelfRef.__PVT__axis_data_rx;
        if (VL_LIKELY(((4U >= (IData)(vlSelfRef.__PVT__wr_ptr))))) {
            VL_ASSIGNSEL_WQ(72,64,8U, vlSelfRef.__PVT__nTCP_FIFO
                            [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__Vlvbound_hf0dde044__0);
        }
        vlSelfRef.__Vlvbound_h48178a4d__0 = vlSelfRef.__PVT__wr_FIFO_offset;
        if (VL_LIKELY(((4U >= (IData)(vlSelfRef.__PVT__wr_ptr))))) {
            VL_ASSIGNSEL_WI(72,8,0U, vlSelfRef.__PVT__nTCP_FIFO
                            [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__Vlvbound_h48178a4d__0);
        }
    }
    if (vlSelfRef.__PVT__rd_FIFO_valid) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 1U;
    } else if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__rd_FIFO_len))) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 0U;
    }
    if (vlSelfRef.__PVT__axis_r_en) {
        if (((IData)(vlSelfRef.__PVT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.__PVT__rd_ptr) != (IData)(vlSelfRef.__PVT__flush_ptr)))) {
            vlSelfRef.__PVT__nseq_trk_rd = (vlSelfRef.__PVT__seq_trk_rd 
                                            + VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__bytes_len)));
            vlSelfRef.__PVT__nrd_ptr = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__rd_ptr)));
            vlSelfRef.__PVT__naxis_r_valid = 1U;
        } else {
            vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
            vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
            vlSelfRef.__PVT__naxis_r_valid = 0U;
        }
    }
}
