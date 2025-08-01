// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_payload_FIFO.h"

VL_INLINE_OPT void Vtop_payload_FIFO___ico_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO___ico_sequent__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nTCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__PVT__nrd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_len_ptr;
    vlSelfRef.__PVT__naxis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
        vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__flush_ptr;
    } else if (((IData)(vlSelfRef.__PVT__nw_segment) 
                | (IData)(vlSelfRef.__PVT__wr_FIFO_en))) {
        vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    }
    if (vlSelfRef.__PVT__wr_FIFO_en) {
        vlSelfRef.__PVT__nwr_ptr = (0xfU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__wr_ptr)));
        VL_ASSIGNSEL_WQ(72,64,8U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__axis_data_rx);
        VL_ASSIGNSEL_WI(72,8,0U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__wr_FIFO_offset);
    }
    if (vlSelfRef.__PVT__rd_FIFO_valid) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 1U;
        vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_FIFO_len;
        vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_FIFO_ptr;
    } else if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__rd_len_ptr))) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 0U;
    }
    if (vlSelfRef.__PVT__axis_r_en) {
        if (((IData)(vlSelfRef.__PVT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.__PVT__rd_ptr) != (IData)(vlSelfRef.__PVT__flush_ptr)))) {
            vlSelfRef.__PVT__nseq_trk_rd = (vlSelfRef.__PVT__seq_trk_rd 
                                            + VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__bytes_len)));
            vlSelfRef.__PVT__nrd_ptr = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__rd_ptr)));
            vlSelfRef.__PVT__naxis_r_valid = 1U;
        } else {
            vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
            vlSelfRef.__PVT__naxis_r_valid = 0U;
        }
    }
}

VL_INLINE_OPT void Vtop_payload_FIFO___nba_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO___nba_sequent__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    // Body
    vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__Vdly__rd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__Vdly__TCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__Vdly__seq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__VdlySet__TCP_FIFO__v0 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v16 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v17 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v18 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v19 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v20 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v21 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v22 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v23 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v24 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v25 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v26 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v27 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v28 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v29 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v30 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v31 = 0U;
    vlSelfRef.__VdlySet__TCP_FIFO__v32 = 0U;
    vlSelfRef.__Vdly__len_TCP_flush = vlSelfRef.__PVT__len_TCP_flush;
    vlSelfRef.__Vdly__axis_rd_data = vlSelfRef.__PVT__axis_rd_data;
    vlSelfRef.__Vdly__rd_len_ptr = vlSelfRef.__PVT__rd_len_ptr;
    vlSelfRef.__Vdly__axis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    vlSelfRef.__Vdly__rd_FIFO_en = vlSelfRef.__PVT__rd_FIFO_en;
    vlSelfRef.__Vdly__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__Vdly__wr_FIFO_len = vlSelfRef.__PVT__wr_FIFO_len;
    vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__Vdly__wr_ptr_out = vlSelfRef.__PVT__wr_ptr_out;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__nwr_ptr;
        vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__nrd_ptr;
        vlSelfRef.__Vdly__rd_FIFO_en = vlSelfRef.__PVT__axis_r_en;
        vlSelfRef.__Vdly__rd_FIFO_valid_l = vlSelfRef.__PVT__nrd_FIFO_valid_l;
        vlSelfRef.__Vdly__rd_len_ptr = vlSelfRef.__PVT__nrd_len_ptr;
        vlSelfRef.__Vdly__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_trk_rd;
        vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
        vlSelfRef.__Vdly__len_TCP_flush = vlSelfRef.__PVT__nlen_TCP_flush;
        vlSelfRef.__Vdly__axis_r_valid = vlSelfRef.__PVT__naxis_r_valid;
        vlSelfRef.__Vdly__TCP_flush_l = vlSelfRef.__PVT__nTCP_flush_l;
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v0, 
                    vlSelfRef.__PVT__nTCP_FIFO[0xfU]);
        vlSelfRef.__VdlySet__TCP_FIFO__v0 = 1U;
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v1, 
                    vlSelfRef.__PVT__nTCP_FIFO[0xeU]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v2, 
                    vlSelfRef.__PVT__nTCP_FIFO[0xdU]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v3, 
                    vlSelfRef.__PVT__nTCP_FIFO[0xcU]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v4, 
                    vlSelfRef.__PVT__nTCP_FIFO[0xbU]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v5, 
                    vlSelfRef.__PVT__nTCP_FIFO[0xaU]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v6, 
                    vlSelfRef.__PVT__nTCP_FIFO[9U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v7, 
                    vlSelfRef.__PVT__nTCP_FIFO[8U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v8, 
                    vlSelfRef.__PVT__nTCP_FIFO[7U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v9, 
                    vlSelfRef.__PVT__nTCP_FIFO[6U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v10, 
                    vlSelfRef.__PVT__nTCP_FIFO[5U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v11, 
                    vlSelfRef.__PVT__nTCP_FIFO[4U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v12, 
                    vlSelfRef.__PVT__nTCP_FIFO[3U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v13, 
                    vlSelfRef.__PVT__nTCP_FIFO[2U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v14, 
                    vlSelfRef.__PVT__nTCP_FIFO[1U]);
        VL_ASSIGN_W(72,vlSelfRef.__VdlyVal__TCP_FIFO__v15, 
                    vlSelfRef.__PVT__nTCP_FIFO[0U]);
        vlSelfRef.__Vdly__seq_trk_rd = ((IData)(vlSelfRef.__PVT__handshake_done)
                                         ? vlSelfRef.__PVT__seq_rcv_start
                                         : vlSelfRef.__PVT__nseq_trk_rd);
        vlSelfRef.__Vdly__wr_FIFO_len = vlSelfRef.__PVT__wr_ptr;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__wr_FIFO_en)))) {
            vlSelfRef.__Vdly__wr_ptr_out = vlSelfRef.__PVT__wr_ptr;
        }
        if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
            vlSelfRef.__VdlyDim0__TCP_FIFO__v16 = vlSelfRef.__PVT__flush_ptr;
            vlSelfRef.__VdlySet__TCP_FIFO__v16 = 1U;
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
        vlSelfRef.__Vdly__rd_FIFO_valid_l = 0U;
        vlSelfRef.__Vdly__seq_trk_rd = 0U;
        vlSelfRef.__Vdly__rd_len_ptr = 0U;
        vlSelfRef.__Vdly__len_TCP_flush = 0U;
        vlSelfRef.__Vdly__axis_r_valid = 0U;
        vlSelfRef.__Vdly__TCP_flush_l = 0U;
        vlSelfRef.__Vdly__axis_rd_data = 0ULL;
        vlSelfRef.__Vdly__wr_FIFO_len = 0U;
        vlSelfRef.__Vdly__seq_rx_FIFO_rd = 0U;
        vlSelfRef.__VdlySet__TCP_FIFO__v17 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.__VdlySet__TCP_FIFO__v18 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.__VdlySet__TCP_FIFO__v19 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.__VdlySet__TCP_FIFO__v20 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.__VdlySet__TCP_FIFO__v21 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.__VdlySet__TCP_FIFO__v22 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.__VdlySet__TCP_FIFO__v23 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.__VdlySet__TCP_FIFO__v24 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.__VdlySet__TCP_FIFO__v25 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.__VdlySet__TCP_FIFO__v26 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__TCP_FIFO__v27 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__TCP_FIFO__v28 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__TCP_FIFO__v29 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__TCP_FIFO__v30 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__TCP_FIFO__v31 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__TCP_FIFO__v32 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    }
    vlSelfRef.__PVT__len_TCP_flush = vlSelfRef.__Vdly__len_TCP_flush;
    vlSelfRef.__PVT__axis_rd_data = vlSelfRef.__Vdly__axis_rd_data;
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__rd_FIFO_valid_l = vlSelfRef.__Vdly__rd_FIFO_valid_l;
    vlSelfRef.__PVT__rd_len_ptr = vlSelfRef.__Vdly__rd_len_ptr;
    vlSelfRef.__PVT__flush_ptr = vlSelfRef.__Vdly__flush_ptr;
    vlSelfRef.__PVT__TCP_flush_l = vlSelfRef.__Vdly__TCP_flush_l;
    vlSelfRef.__PVT__seq_trk_rd = vlSelfRef.__Vdly__seq_trk_rd;
    vlSelfRef.__PVT__axis_r_valid = vlSelfRef.__Vdly__axis_r_valid;
    vlSelfRef.__PVT__rd_FIFO_en = vlSelfRef.__Vdly__rd_FIFO_en;
    vlSelfRef.__PVT__seq_rx_FIFO_rd = vlSelfRef.__Vdly__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__wr_FIFO_len = vlSelfRef.__Vdly__wr_FIFO_len;
    if (vlSelfRef.__VdlySet__TCP_FIFO__v0) {
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xfU], vlSelfRef.__VdlyVal__TCP_FIFO__v0);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xeU], vlSelfRef.__VdlyVal__TCP_FIFO__v1);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xdU], vlSelfRef.__VdlyVal__TCP_FIFO__v2);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xcU], vlSelfRef.__VdlyVal__TCP_FIFO__v3);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xbU], vlSelfRef.__VdlyVal__TCP_FIFO__v4);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xaU], vlSelfRef.__VdlyVal__TCP_FIFO__v5);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[9U], vlSelfRef.__VdlyVal__TCP_FIFO__v6);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[8U], vlSelfRef.__VdlyVal__TCP_FIFO__v7);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[7U], vlSelfRef.__VdlyVal__TCP_FIFO__v8);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[6U], vlSelfRef.__VdlyVal__TCP_FIFO__v9);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[5U], vlSelfRef.__VdlyVal__TCP_FIFO__v10);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[4U], vlSelfRef.__VdlyVal__TCP_FIFO__v11);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[3U], vlSelfRef.__VdlyVal__TCP_FIFO__v12);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[2U], vlSelfRef.__VdlyVal__TCP_FIFO__v13);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[1U], vlSelfRef.__VdlyVal__TCP_FIFO__v14);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0U], vlSelfRef.__VdlyVal__TCP_FIFO__v15);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v16) {
        VL_CONST_W_1X(72,__Vtemp_1,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[vlSelfRef.__VdlyDim0__TCP_FIFO__v16], __Vtemp_1);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v17) {
        VL_CONST_W_1X(72,__Vtemp_2,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0U], __Vtemp_2);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v18) {
        VL_CONST_W_1X(72,__Vtemp_3,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[1U], __Vtemp_3);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v19) {
        VL_CONST_W_1X(72,__Vtemp_4,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[2U], __Vtemp_4);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v20) {
        VL_CONST_W_1X(72,__Vtemp_5,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[3U], __Vtemp_5);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v21) {
        VL_CONST_W_1X(72,__Vtemp_6,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[4U], __Vtemp_6);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v22) {
        VL_CONST_W_1X(72,__Vtemp_7,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[5U], __Vtemp_7);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v23) {
        VL_CONST_W_1X(72,__Vtemp_8,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[6U], __Vtemp_8);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v24) {
        VL_CONST_W_1X(72,__Vtemp_9,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[7U], __Vtemp_9);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v25) {
        VL_CONST_W_1X(72,__Vtemp_10,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[8U], __Vtemp_10);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v26) {
        VL_CONST_W_1X(72,__Vtemp_11,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[9U], __Vtemp_11);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v27) {
        VL_CONST_W_1X(72,__Vtemp_12,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xaU], __Vtemp_12);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v28) {
        VL_CONST_W_1X(72,__Vtemp_13,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xbU], __Vtemp_13);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v29) {
        VL_CONST_W_1X(72,__Vtemp_14,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xcU], __Vtemp_14);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v30) {
        VL_CONST_W_1X(72,__Vtemp_15,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xdU], __Vtemp_15);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v31) {
        VL_CONST_W_1X(72,__Vtemp_16,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xeU], __Vtemp_16);
    }
    if (vlSelfRef.__VdlySet__TCP_FIFO__v32) {
        VL_CONST_W_1X(72,__Vtemp_17,0x00000000);
        VL_ASSIGN_W(72,vlSelfRef.__PVT__TCP_FIFO[0xfU], __Vtemp_17);
    }
    vlSelfRef.__PVT__rd_ptr = vlSelfRef.__Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr_out = vlSelfRef.__Vdly__wr_ptr_out;
    vlSelfRef.__PVT__payload[0U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [0U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [0U], 0U, 8U));
    vlSelfRef.__PVT__payload[1U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [1U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[1U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [1U], 0U, 8U));
    vlSelfRef.__PVT__payload[2U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [2U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[2U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [2U], 0U, 8U));
    vlSelfRef.__PVT__payload[3U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [3U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[3U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [3U], 0U, 8U));
    vlSelfRef.__PVT__payload[4U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [4U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[4U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [4U], 0U, 8U));
    vlSelfRef.__PVT__payload[5U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [5U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[5U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [5U], 0U, 8U));
    vlSelfRef.__PVT__payload[6U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [6U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[6U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [6U], 0U, 8U));
    vlSelfRef.__PVT__payload[7U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [7U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[7U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [7U], 0U, 8U));
    vlSelfRef.__PVT__payload[8U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [8U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[8U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [8U], 0U, 8U));
    vlSelfRef.__PVT__payload[9U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [9U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[9U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [9U], 0U, 8U));
    vlSelfRef.__PVT__payload[0xaU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xaU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xaU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xaU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xbU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xbU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xbU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xbU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xcU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xcU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xcU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xcU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xdU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xdU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xdU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xdU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xeU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xeU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xeU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xeU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xfU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xfU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xfU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xfU], 0U, 8U));
    VL_ASSIGN_W(72,vlSelfRef.__PVT__fifo_entry_rd, 
                vlSelfRef.__PVT__TCP_FIFO[vlSelfRef.__PVT__rd_ptr]);
    vlSelfRef.__PVT__bytes_len = (0xfU & (((((((VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IWII(72, 
                                                                               vlSelfRef.__PVT__TCP_FIFO
                                                                               [vlSelfRef.__PVT__rd_ptr], 0U))) 
                                                + VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(72, 
                                                                                vlSelfRef.__PVT__TCP_FIFO
                                                                                [vlSelfRef.__PVT__rd_ptr], 1U)))) 
                                               + VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(72, 
                                                                                vlSelfRef.__PVT__TCP_FIFO
                                                                                [vlSelfRef.__PVT__rd_ptr], 2U)))) 
                                              + VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IWII(72, 
                                                                               vlSelfRef.__PVT__TCP_FIFO
                                                                               [vlSelfRef.__PVT__rd_ptr], 3U)))) 
                                             + VL_EXTEND_II(4,1, 
                                                            (1U 
                                                             & VL_BITSEL_IWII(72, 
                                                                              vlSelfRef.__PVT__TCP_FIFO
                                                                              [vlSelfRef.__PVT__rd_ptr], 4U)))) 
                                            + VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IWII(72, 
                                                                             vlSelfRef.__PVT__TCP_FIFO
                                                                             [vlSelfRef.__PVT__rd_ptr], 5U)))) 
                                           + VL_EXTEND_II(4,1, 
                                                          (1U 
                                                           & VL_BITSEL_IWII(72, 
                                                                            vlSelfRef.__PVT__TCP_FIFO
                                                                            [vlSelfRef.__PVT__rd_ptr], 6U)))) 
                                          + VL_EXTEND_II(4,1, 
                                                         (1U 
                                                          & VL_BITSEL_IWII(72, 
                                                                           vlSelfRef.__PVT__TCP_FIFO
                                                                           [vlSelfRef.__PVT__rd_ptr], 7U)))));
    vlSelfRef.__PVT__full = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                              - (IData)(1U)) == VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wr_ptr_out)));
}

VL_INLINE_OPT void Vtop_payload_FIFO___nba_comb__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO___nba_comb__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nTCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__PVT__nrd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_len_ptr;
    vlSelfRef.__PVT__naxis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
        vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__flush_ptr;
    } else if (((IData)(vlSelfRef.__PVT__nw_segment) 
                | (IData)(vlSelfRef.__PVT__wr_FIFO_en))) {
        vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    }
    if (vlSelfRef.__PVT__wr_FIFO_en) {
        vlSelfRef.__PVT__nwr_ptr = (0xfU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__wr_ptr)));
        VL_ASSIGNSEL_WQ(72,64,8U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__axis_data_rx);
        VL_ASSIGNSEL_WI(72,8,0U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__wr_FIFO_offset);
    }
    if (vlSelfRef.__PVT__rd_FIFO_valid) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 1U;
        vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_FIFO_len;
        vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_FIFO_ptr;
    } else if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__rd_len_ptr))) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 0U;
    }
    if (vlSelfRef.__PVT__axis_r_en) {
        if (((IData)(vlSelfRef.__PVT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.__PVT__rd_ptr) != (IData)(vlSelfRef.__PVT__flush_ptr)))) {
            vlSelfRef.__PVT__nseq_trk_rd = (vlSelfRef.__PVT__seq_trk_rd 
                                            + VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__bytes_len)));
            vlSelfRef.__PVT__nrd_ptr = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__rd_ptr)));
            vlSelfRef.__PVT__naxis_r_valid = 1U;
        } else {
            vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
            vlSelfRef.__PVT__naxis_r_valid = 0U;
        }
    }
}
