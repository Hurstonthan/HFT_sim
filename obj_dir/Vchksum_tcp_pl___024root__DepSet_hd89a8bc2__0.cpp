// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl___024root.h"

void Vchksum_tcp_pl___024root___ico_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf);

void Vchksum_tcp_pl___024root___eval_ico(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_ico\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vchksum_tcp_pl___024root___ico_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___ico_sequent__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum = vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum;
    if (vlSelfRef.clear) {
        vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    } else if (vlSelfRef.FIFO_rd_en) {
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & (((((0xffffU 
                                                     & vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum) 
                                                    + 
                                                    (0xffffU 
                                                     & (IData)(vlSelfRef.TCP_payload_tx))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.TCP_payload_tx 
                                                               >> 0x10U)))) 
                                                  + 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.TCP_payload_tx 
                                                              >> 0x20U)))) 
                                                 + 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelfRef.TCP_payload_tx 
                                                             >> 0x30U)))));
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & ((0xffffU 
                                                  & vlSelfRef.chksum_tcp_pl__DOT__temp) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelfRef.chksum_tcp_pl__DOT__temp 
                                                     >> 0x10U))));
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & ((0xffffU 
                                                  & vlSelfRef.chksum_tcp_pl__DOT__temp) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.chksum_tcp_pl__DOT__temp 
                                                     >> 0x10U))));
        vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelfRef.chksum_tcp_pl__DOT__temp);
    }
}

void Vchksum_tcp_pl___024root___eval_triggers__ico(Vchksum_tcp_pl___024root* vlSelf);

bool Vchksum_tcp_pl___024root___eval_phase__ico(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__ico\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vchksum_tcp_pl___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vchksum_tcp_pl___024root___eval_act(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_act\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vchksum_tcp_pl___024root___nba_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf);

void Vchksum_tcp_pl___024root___eval_nba(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_nba\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vchksum_tcp_pl___024root___nba_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___nba_sequent__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum = ((IData)(vlSelfRef.nRST)
                                                   ? vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum
                                                   : 0U);
    vlSelfRef.TCP_checksum_pl = (0xffffU & vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum);
    vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum = vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum;
    if (vlSelfRef.clear) {
        vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    } else if (vlSelfRef.FIFO_rd_en) {
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & (((((0xffffU 
                                                     & vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum) 
                                                    + 
                                                    (0xffffU 
                                                     & (IData)(vlSelfRef.TCP_payload_tx))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.TCP_payload_tx 
                                                               >> 0x10U)))) 
                                                  + 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.TCP_payload_tx 
                                                              >> 0x20U)))) 
                                                 + 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelfRef.TCP_payload_tx 
                                                             >> 0x30U)))));
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & ((0xffffU 
                                                  & vlSelfRef.chksum_tcp_pl__DOT__temp) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelfRef.chksum_tcp_pl__DOT__temp 
                                                     >> 0x10U))));
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & ((0xffffU 
                                                  & vlSelfRef.chksum_tcp_pl__DOT__temp) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.chksum_tcp_pl__DOT__temp 
                                                     >> 0x10U))));
        vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelfRef.chksum_tcp_pl__DOT__temp);
    }
}

void Vchksum_tcp_pl___024root___eval_triggers__act(Vchksum_tcp_pl___024root* vlSelf);

bool Vchksum_tcp_pl___024root___eval_phase__act(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__act\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vchksum_tcp_pl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vchksum_tcp_pl___024root___eval_phase__nba(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__nba\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vchksum_tcp_pl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vchksum_tcp_pl___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vchksum_tcp_pl___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vchksum_tcp_pl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vchksum_tcp_pl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vchksum_tcp_pl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vchksum_tcp_pl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vchksum_tcp_pl___024root___eval_debug_assertions(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_debug_assertions\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.FIFO_rd_en & 0xfeU)))) {
        Verilated::overWidthError("FIFO_rd_en");}
    if (VL_UNLIKELY(((vlSelfRef.clear & 0xfeU)))) {
        Verilated::overWidthError("clear");}
}
#endif  // VL_DEBUG
