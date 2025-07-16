// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpayload_FIFO.h for the primary calling header

#include "Vpayload_FIFO__pch.h"
#include "Vpayload_FIFO___024root.h"

void Vpayload_FIFO___024root___ico_sequent__TOP__0(Vpayload_FIFO___024root* vlSelf);

void Vpayload_FIFO___024root___eval_ico(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_ico\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpayload_FIFO___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vpayload_FIFO___024root___ico_sequent__TOP__0(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___ico_sequent__TOP__0\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_FIFO_en = vlSelfRef.axis_r_en;
    vlSelfRef.payload_FIFO__DOT__nwr_ptr = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    if (vlSelfRef.wr_FIFO_en) {
        vlSelfRef.payload_FIFO__DOT__nwr_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.payload_FIFO__DOT__wr_ptr)));
        vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0 
            = vlSelfRef.axis_data_rx;
        vlSelfRef.payload_FIFO__DOT____Vlvbound_he428c41c__0 
            = vlSelfRef.wr_FIFO_offset;
        if ((4U >= (IData)(vlSelfRef.payload_FIFO__DOT__wr_ptr))) {
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][0U] 
                = ((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                    [vlSelfRef.payload_FIFO__DOT__wr_ptr][0U]) 
                   | ((IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0) 
                      << 8U));
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][1U] 
                = (((IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0) 
                    >> 0x18U) | ((IData)((vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][2U] 
                = ((IData)((vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0 
                            >> 0x20U)) >> 0x18U);
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][0U] 
                = ((0xffffff00U & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                    [vlSelfRef.payload_FIFO__DOT__wr_ptr][0U]) 
                   | (IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_he428c41c__0));
        }
    }
    vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l;
    if (vlSelfRef.rd_FIFO_valid) {
        vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = 1U;
    } else if (((IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr) 
                == (IData)(vlSelfRef.rd_FIFO_len))) {
        vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = 0U;
    }
    vlSelfRef.payload_FIFO__DOT__naxis_r_valid = vlSelfRef.axis_r_valid;
    vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = vlSelfRef.payload_FIFO__DOT__TCP_flush_l;
    if ((1U & (~ ((IData)(vlSelfRef.TCP_flush) | (IData)(vlSelfRef.payload_FIFO__DOT__TCP_flush_l))))) {
        if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
             == (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
            vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.nw_segment)))) {
            if (vlSelfRef.TCP_flush) {
                vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = 1U;
            }
        }
        if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
             != (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
            if ((1U & (~ (IData)(vlSelfRef.nw_segment)))) {
                if (vlSelfRef.TCP_flush) {
                    vlSelfRef.payload_FIFO__DOT__nlen_TCP_flush 
                        = vlSelfRef.payload_FIFO__DOT__wr_ptr;
                }
            }
        }
    }
    vlSelfRef.payload_FIFO__DOT__nrd_ptr = vlSelfRef.rd_FIFO_ptr;
    vlSelfRef.payload_FIFO__DOT__nseq_trk_rd = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
    if (vlSelfRef.axis_r_en) {
        if (((IData)(vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr) 
                != (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)))) {
            vlSelfRef.payload_FIFO__DOT__naxis_r_valid = 1U;
            vlSelfRef.payload_FIFO__DOT__nrd_ptr = 
                (7U & ((IData)(1U) + (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)));
            vlSelfRef.payload_FIFO__DOT__nseq_trk_rd 
                = (vlSelfRef.payload_FIFO__DOT__seq_trk_rd 
                   + (0xfU & ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                     >> 7U)) + ((1U 
                                                 & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                    >> 6U)) 
                                                + (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                       >> 5U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                        >> 4U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                         >> 3U)) 
                                                     + 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                          >> 2U)) 
                                                      + 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                           >> 1U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(vlSelfRef.wr_FIFO_offset)))))))))));
        } else {
            vlSelfRef.payload_FIFO__DOT__naxis_r_valid = 0U;
            vlSelfRef.payload_FIFO__DOT__nrd_ptr = 
                (7U & (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr));
            vlSelfRef.payload_FIFO__DOT__nseq_trk_rd 
                = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
        }
    }
    vlSelfRef.payload_FIFO__DOT__nflush_ptr = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    if (((IData)(vlSelfRef.TCP_flush) | (IData)(vlSelfRef.payload_FIFO__DOT__TCP_flush_l))) {
        vlSelfRef.payload_FIFO__DOT__nflush_ptr = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)));
    } else if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
                != (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
        if (vlSelfRef.nw_segment) {
            vlSelfRef.payload_FIFO__DOT__nflush_ptr 
                = vlSelfRef.payload_FIFO__DOT__flush_ptr;
        } else if (vlSelfRef.TCP_flush) {
            vlSelfRef.payload_FIFO__DOT__nflush_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)));
        }
    }
}

void Vpayload_FIFO___024root___eval_triggers__ico(Vpayload_FIFO___024root* vlSelf);

bool Vpayload_FIFO___024root___eval_phase__ico(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_phase__ico\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpayload_FIFO___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vpayload_FIFO___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpayload_FIFO___024root___eval_act(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_act\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpayload_FIFO___024root___nba_sequent__TOP__0(Vpayload_FIFO___024root* vlSelf);

void Vpayload_FIFO___024root___eval_nba(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_nba\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpayload_FIFO___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vpayload_FIFO___024root___nba_sequent__TOP__0(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___nba_sequent__TOP__0\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*71:0*/ __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0;
    VL_ZERO_W(72, __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0);
    CData/*0:0*/ __VdlySet__payload_FIFO__DOT__TCP_FIFO__v0;
    __VdlySet__payload_FIFO__DOT__TCP_FIFO__v0 = 0;
    VlWide<3>/*71:0*/ __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1;
    VL_ZERO_W(72, __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1);
    VlWide<3>/*71:0*/ __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2;
    VL_ZERO_W(72, __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2);
    VlWide<3>/*71:0*/ __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3;
    VL_ZERO_W(72, __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3);
    VlWide<3>/*71:0*/ __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4;
    VL_ZERO_W(72, __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4);
    VlWide<3>/*71:0*/ __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5;
    VL_ZERO_W(72, __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5);
    CData/*2:0*/ __VdlyDim0__payload_FIFO__DOT__TCP_FIFO__v5;
    __VdlyDim0__payload_FIFO__DOT__TCP_FIFO__v5 = 0;
    CData/*0:0*/ __VdlySet__payload_FIFO__DOT__TCP_FIFO__v5;
    __VdlySet__payload_FIFO__DOT__TCP_FIFO__v5 = 0;
    CData/*0:0*/ __VdlySet__payload_FIFO__DOT__TCP_FIFO__v6;
    __VdlySet__payload_FIFO__DOT__TCP_FIFO__v6 = 0;
    // Body
    __VdlySet__payload_FIFO__DOT__TCP_FIFO__v0 = 0U;
    __VdlySet__payload_FIFO__DOT__TCP_FIFO__v5 = 0U;
    __VdlySet__payload_FIFO__DOT__TCP_FIFO__v6 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.nRST)))) {
        vlSelfRef.payload_FIFO__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.payload_FIFO__DOT__rd_len_ptr = 0U;
    }
    vlSelfRef.axis_r_valid = ((IData)(vlSelfRef.nRST) 
                              && (IData)(vlSelfRef.payload_FIFO__DOT__naxis_r_valid));
    if (vlSelfRef.nRST) {
        vlSelfRef.payload_FIFO__DOT__seq_trk_rd = ((IData)(vlSelfRef.handshake_done)
                                                    ? vlSelfRef.seq_rcv_start
                                                    : vlSelfRef.payload_FIFO__DOT__nseq_trk_rd);
        vlSelfRef.payload_FIFO__DOT__len_TCP_flush 
            = vlSelfRef.payload_FIFO__DOT__nlen_TCP_flush;
        vlSelfRef.payload_FIFO__DOT__rd_ptr = vlSelfRef.payload_FIFO__DOT__nrd_ptr;
        if ((1U & (~ (IData)(vlSelfRef.wr_FIFO_en)))) {
            vlSelfRef.wr_ptr_out = vlSelfRef.payload_FIFO__DOT__wr_ptr;
        }
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0[0U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [4U][0U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0[1U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [4U][1U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0[2U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [4U][2U];
        __VdlySet__payload_FIFO__DOT__TCP_FIFO__v0 = 1U;
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1[0U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [3U][0U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1[1U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [3U][1U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1[2U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [3U][2U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2[0U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [2U][0U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2[1U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [2U][1U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2[2U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [2U][2U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3[0U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [1U][0U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3[1U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [1U][1U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3[2U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [1U][2U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4[0U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [0U][0U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4[1U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [0U][1U];
        __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4[2U] 
            = vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
            [0U][2U];
        if (((IData)(vlSelfRef.TCP_flush) | (IData)(vlSelfRef.payload_FIFO__DOT__TCP_flush_l))) {
            vlSelfRef.payload_FIFO__DOT____Vlvbound_h11ca8472__0[0U] = 0U;
            vlSelfRef.payload_FIFO__DOT____Vlvbound_h11ca8472__0[1U] = 0U;
            vlSelfRef.payload_FIFO__DOT____Vlvbound_h11ca8472__0[2U] = 0U;
            if ((4U >= (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr))) {
                __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5[0U] 
                    = vlSelfRef.payload_FIFO__DOT____Vlvbound_h11ca8472__0[0U];
                __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5[1U] 
                    = vlSelfRef.payload_FIFO__DOT____Vlvbound_h11ca8472__0[1U];
                __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5[2U] 
                    = vlSelfRef.payload_FIFO__DOT____Vlvbound_h11ca8472__0[2U];
                __VdlyDim0__payload_FIFO__DOT__TCP_FIFO__v5 
                    = vlSelfRef.payload_FIFO__DOT__flush_ptr;
                __VdlySet__payload_FIFO__DOT__TCP_FIFO__v5 = 1U;
            }
        } else if (((IData)(vlSelfRef.axis_r_en) & (IData)(vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l))) {
            vlSelfRef.axis_rd_data = ((0xffffffffffffffULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | ((QData)((IData)(
                                                         ((0x80U 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                           ? 
                                                          (0xffU 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[2U])
                                                           : 0U))) 
                                         << 0x38U));
            vlSelfRef.axis_rd_data = ((0xff00ffffffffffffULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | ((QData)((IData)(
                                                         ((0x40U 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                           ? 
                                                          (vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U] 
                                                           >> 0x18U)
                                                           : 0U))) 
                                         << 0x30U));
            vlSelfRef.axis_rd_data = ((0xffff00ffffffffffULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | ((QData)((IData)(
                                                         ((0x20U 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                           ? 
                                                          (0xffU 
                                                           & (vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U] 
                                                              >> 0x10U))
                                                           : 0U))) 
                                         << 0x28U));
            vlSelfRef.axis_rd_data = ((0xffffff00ffffffffULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | ((QData)((IData)(
                                                         ((0x10U 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                           ? 
                                                          (0xffU 
                                                           & (vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U] 
                                                              >> 8U))
                                                           : 0U))) 
                                         << 0x20U));
            vlSelfRef.axis_rd_data = ((0xffffffff00ffffffULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | ((QData)((IData)(
                                                         ((8U 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                           ? 
                                                          (0xffU 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U])
                                                           : 0U))) 
                                         << 0x18U));
            vlSelfRef.axis_rd_data = ((0xffffffffff00ffffULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | ((QData)((IData)(
                                                         ((4U 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                           ? 
                                                          (vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U] 
                                                           >> 0x18U)
                                                           : 0U))) 
                                         << 0x10U));
            vlSelfRef.axis_rd_data = ((0xffffffffffff00ffULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | ((QData)((IData)(
                                                         ((2U 
                                                           & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                           ? 
                                                          (0xffU 
                                                           & (vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U] 
                                                              >> 0x10U))
                                                           : 0U))) 
                                         << 8U));
            vlSelfRef.axis_rd_data = ((0xffffffffffffff00ULL 
                                       & vlSelfRef.axis_rd_data) 
                                      | (IData)((IData)(
                                                        ((1U 
                                                          & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])
                                                          ? 
                                                         (0xffU 
                                                          & (vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U] 
                                                             >> 8U))
                                                          : 0U))));
        }
        vlSelfRef.payload_FIFO__DOT__wr_ptr = vlSelfRef.payload_FIFO__DOT__nwr_ptr;
        vlSelfRef.payload_FIFO__DOT__flush_ptr = vlSelfRef.payload_FIFO__DOT__nflush_ptr;
    } else {
        vlSelfRef.payload_FIFO__DOT__seq_trk_rd = 0U;
        vlSelfRef.payload_FIFO__DOT__len_TCP_flush = 0U;
        vlSelfRef.payload_FIFO__DOT__rd_ptr = 0U;
        vlSelfRef.axis_rd_data = 0ULL;
        __VdlySet__payload_FIFO__DOT__TCP_FIFO__v6 = 1U;
        vlSelfRef.payload_FIFO__DOT__wr_ptr = 0U;
        vlSelfRef.payload_FIFO__DOT__flush_ptr = 0U;
    }
    if (__VdlySet__payload_FIFO__DOT__TCP_FIFO__v0) {
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[4U][0U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0[0U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[4U][1U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0[1U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[4U][2U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v0[2U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[3U][0U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1[0U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[3U][1U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1[1U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[3U][2U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v1[2U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[2U][0U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2[0U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[2U][1U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2[1U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[2U][2U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v2[2U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[1U][0U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3[0U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[1U][1U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3[1U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[1U][2U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v3[2U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[0U][0U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4[0U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[0U][1U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4[1U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[0U][2U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v4[2U];
    }
    if (__VdlySet__payload_FIFO__DOT__TCP_FIFO__v5) {
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[__VdlyDim0__payload_FIFO__DOT__TCP_FIFO__v5][0U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5[0U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[__VdlyDim0__payload_FIFO__DOT__TCP_FIFO__v5][1U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5[1U];
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[__VdlyDim0__payload_FIFO__DOT__TCP_FIFO__v5][2U] 
            = __VdlyVal__payload_FIFO__DOT__TCP_FIFO__v5[2U];
    }
    if (__VdlySet__payload_FIFO__DOT__TCP_FIFO__v6) {
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[0U][0U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[0U][1U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[0U][2U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[1U][0U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[1U][1U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[1U][2U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[2U][0U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[2U][1U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[2U][2U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[3U][0U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[3U][1U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[3U][2U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[4U][0U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[4U][1U] = 0U;
        vlSelfRef.payload_FIFO__DOT__TCP_FIFO[4U][2U] = 0U;
    }
    vlSelfRef.seq_rx_FIFO_rd = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
    vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l;
    if (vlSelfRef.rd_FIFO_valid) {
        vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = 1U;
    } else if (((IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr) 
                == (IData)(vlSelfRef.rd_FIFO_len))) {
        vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = 0U;
    }
    vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U] 
        = vlSelfRef.payload_FIFO__DOT__TCP_FIFO[((4U 
                                                  >= (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr))
                                                  ? (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)
                                                  : 0U)][0U];
    vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U] 
        = vlSelfRef.payload_FIFO__DOT__TCP_FIFO[((4U 
                                                  >= (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr))
                                                  ? (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)
                                                  : 0U)][1U];
    vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[2U] 
        = vlSelfRef.payload_FIFO__DOT__TCP_FIFO[((4U 
                                                  >= (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr))
                                                  ? (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)
                                                  : 0U)][2U];
    vlSelfRef.payload_FIFO__DOT__TCP_flush_l = ((IData)(vlSelfRef.nRST) 
                                                && (IData)(vlSelfRef.payload_FIFO__DOT__nTCP_flush_l));
    vlSelfRef.wr_FIFO_len = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    vlSelfRef.payload_FIFO__DOT__nwr_ptr = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    if (vlSelfRef.wr_FIFO_en) {
        vlSelfRef.payload_FIFO__DOT__nwr_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.payload_FIFO__DOT__wr_ptr)));
        vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0 
            = vlSelfRef.axis_data_rx;
        vlSelfRef.payload_FIFO__DOT____Vlvbound_he428c41c__0 
            = vlSelfRef.wr_FIFO_offset;
        if ((4U >= (IData)(vlSelfRef.payload_FIFO__DOT__wr_ptr))) {
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][0U] 
                = ((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                    [vlSelfRef.payload_FIFO__DOT__wr_ptr][0U]) 
                   | ((IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0) 
                      << 8U));
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][1U] 
                = (((IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0) 
                    >> 0x18U) | ((IData)((vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][2U] 
                = ((IData)((vlSelfRef.payload_FIFO__DOT____Vlvbound_h26f34e3a__0 
                            >> 0x20U)) >> 0x18U);
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][0U] 
                = ((0xffffff00U & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                    [vlSelfRef.payload_FIFO__DOT__wr_ptr][0U]) 
                   | (IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_he428c41c__0));
        }
    }
    vlSelfRef.payload_FIFO__DOT__naxis_r_valid = vlSelfRef.axis_r_valid;
    vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = vlSelfRef.payload_FIFO__DOT__TCP_flush_l;
    if ((1U & (~ ((IData)(vlSelfRef.TCP_flush) | (IData)(vlSelfRef.payload_FIFO__DOT__TCP_flush_l))))) {
        if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
             == (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
            vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.nw_segment)))) {
            if (vlSelfRef.TCP_flush) {
                vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = 1U;
            }
        }
        if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
             != (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
            if ((1U & (~ (IData)(vlSelfRef.nw_segment)))) {
                if (vlSelfRef.TCP_flush) {
                    vlSelfRef.payload_FIFO__DOT__nlen_TCP_flush 
                        = vlSelfRef.payload_FIFO__DOT__wr_ptr;
                }
            }
        }
    }
    vlSelfRef.payload_FIFO__DOT__nrd_ptr = vlSelfRef.rd_FIFO_ptr;
    vlSelfRef.payload_FIFO__DOT__nseq_trk_rd = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
    if (vlSelfRef.axis_r_en) {
        if (((IData)(vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr) 
                != (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)))) {
            vlSelfRef.payload_FIFO__DOT__naxis_r_valid = 1U;
            vlSelfRef.payload_FIFO__DOT__nrd_ptr = 
                (7U & ((IData)(1U) + (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)));
            vlSelfRef.payload_FIFO__DOT__nseq_trk_rd 
                = (vlSelfRef.payload_FIFO__DOT__seq_trk_rd 
                   + (0xfU & ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                     >> 7U)) + ((1U 
                                                 & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                    >> 6U)) 
                                                + (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                       >> 5U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                        >> 4U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                         >> 3U)) 
                                                     + 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                          >> 2U)) 
                                                      + 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                           >> 1U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(vlSelfRef.wr_FIFO_offset)))))))))));
        } else {
            vlSelfRef.payload_FIFO__DOT__naxis_r_valid = 0U;
            vlSelfRef.payload_FIFO__DOT__nrd_ptr = 
                (7U & (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr));
            vlSelfRef.payload_FIFO__DOT__nseq_trk_rd 
                = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
        }
    }
    vlSelfRef.payload_FIFO__DOT__nflush_ptr = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    if (((IData)(vlSelfRef.TCP_flush) | (IData)(vlSelfRef.payload_FIFO__DOT__TCP_flush_l))) {
        vlSelfRef.payload_FIFO__DOT__nflush_ptr = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)));
    } else if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
                != (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
        if (vlSelfRef.nw_segment) {
            vlSelfRef.payload_FIFO__DOT__nflush_ptr 
                = vlSelfRef.payload_FIFO__DOT__flush_ptr;
        } else if (vlSelfRef.TCP_flush) {
            vlSelfRef.payload_FIFO__DOT__nflush_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)));
        }
    }
}

void Vpayload_FIFO___024root___eval_triggers__act(Vpayload_FIFO___024root* vlSelf);

bool Vpayload_FIFO___024root___eval_phase__act(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_phase__act\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpayload_FIFO___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpayload_FIFO___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpayload_FIFO___024root___eval_phase__nba(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_phase__nba\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpayload_FIFO___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__ico(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__nba(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__act(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG

void Vpayload_FIFO___024root___eval(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vpayload_FIFO___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/payload_FIFO.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpayload_FIFO___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpayload_FIFO___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/payload_FIFO.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpayload_FIFO___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/payload_FIFO.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpayload_FIFO___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpayload_FIFO___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpayload_FIFO___024root___eval_debug_assertions(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_debug_assertions\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.nw_segment & 0xfeU)))) {
        Verilated::overWidthError("nw_segment");}
    if (VL_UNLIKELY(((vlSelfRef.handshake_done & 0xfeU)))) {
        Verilated::overWidthError("handshake_done");}
    if (VL_UNLIKELY(((vlSelfRef.TCP_flush & 0xfeU)))) {
        Verilated::overWidthError("TCP_flush");}
    if (VL_UNLIKELY(((vlSelfRef.axis_t_last & 0xfeU)))) {
        Verilated::overWidthError("axis_t_last");}
    if (VL_UNLIKELY(((vlSelfRef.wr_FIFO_en & 0xfeU)))) {
        Verilated::overWidthError("wr_FIFO_en");}
    if (VL_UNLIKELY(((vlSelfRef.rd_FIFO_valid & 0xfeU)))) {
        Verilated::overWidthError("rd_FIFO_valid");}
    if (VL_UNLIKELY(((vlSelfRef.rd_FIFO_ptr & 0xf8U)))) {
        Verilated::overWidthError("rd_FIFO_ptr");}
    if (VL_UNLIKELY(((vlSelfRef.rd_FIFO_len & 0xf8U)))) {
        Verilated::overWidthError("rd_FIFO_len");}
    if (VL_UNLIKELY(((vlSelfRef.axis_r_en & 0xfeU)))) {
        Verilated::overWidthError("axis_r_en");}
}
#endif  // VL_DEBUG
