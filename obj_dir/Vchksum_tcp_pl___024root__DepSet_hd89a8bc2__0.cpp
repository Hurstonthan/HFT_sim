// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl___024root.h"

VL_INLINE_OPT void Vchksum_tcp_pl___024root___ico_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    if (vlSelf->clear) {
        vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->FIFO_rd_en) {
        vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 
            (0x1ffffU & ((((vlSelf->chksum_tcp_pl__DOT__TCP_checksum 
                            + (0xffffU & (IData)(vlSelf->TCP_payload_tx))) 
                           + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                                 >> 0x10U)))) 
                          + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                                >> 0x20U)))) 
                         + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                               >> 0x30U)))));
    }
}

void Vchksum_tcp_pl___024root___eval_ico(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vchksum_tcp_pl___024root___eval_triggers__ico(Vchksum_tcp_pl___024root* vlSelf);

bool Vchksum_tcp_pl___024root___eval_phase__ico(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vchksum_tcp_pl___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vchksum_tcp_pl___024root___eval_act(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vchksum_tcp_pl___024root___nba_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->chksum_tcp_pl__DOT__TCP_checksum = ((IData)(vlSelf->nRST)
                                                 ? 
                                                (0x1ffffU 
                                                 & ((0xffffU 
                                                     & vlSelf->chksum_tcp_pl__DOT__nTCP_checksum) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->chksum_tcp_pl__DOT__nTCP_checksum 
                                                        >> 0x10U))))
                                                 : 0U);
    vlSelf->TCP_checksum_pl = (0xffffU & vlSelf->chksum_tcp_pl__DOT__TCP_checksum);
    vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    if (vlSelf->clear) {
        vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->FIFO_rd_en) {
        vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 
            (0x1ffffU & ((((vlSelf->chksum_tcp_pl__DOT__TCP_checksum 
                            + (0xffffU & (IData)(vlSelf->TCP_payload_tx))) 
                           + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                                 >> 0x10U)))) 
                          + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                                >> 0x20U)))) 
                         + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                               >> 0x30U)))));
    }
}

void Vchksum_tcp_pl___024root___eval_nba(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vchksum_tcp_pl___024root___eval_triggers__act(Vchksum_tcp_pl___024root* vlSelf);

bool Vchksum_tcp_pl___024root___eval_phase__act(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vchksum_tcp_pl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vchksum_tcp_pl___024root___eval_phase__nba(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vchksum_tcp_pl___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__ico(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__nba(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__act(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG

void Vchksum_tcp_pl___024root___eval(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vchksum_tcp_pl___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vchksum_tcp_pl___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vchksum_tcp_pl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vchksum_tcp_pl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vchksum_tcp_pl___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vchksum_tcp_pl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vchksum_tcp_pl___024root___eval_debug_assertions(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->nRST & 0xfeU))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY((vlSelf->FIFO_rd_en & 0xfeU))) {
        Verilated::overWidthError("FIFO_rd_en");}
    if (VL_UNLIKELY((vlSelf->clear & 0xfeU))) {
        Verilated::overWidthError("clear");}
}
#endif  // VL_DEBUG
