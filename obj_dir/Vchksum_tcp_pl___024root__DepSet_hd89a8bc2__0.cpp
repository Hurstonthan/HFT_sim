// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl___024root.h"

void Vchksum_tcp_pl___024root___eval_triggers__ico(Vchksum_tcp_pl___024root* vlSelf);
void Vchksum_tcp_pl___024root___eval_ico(Vchksum_tcp_pl___024root* vlSelf);

bool Vchksum_tcp_pl___024root___eval_phase__ico(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__ico\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__ico(vlSelf);
    vlSelfRef.__VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (vlSelfRef.__VicoExecute) {
        Vchksum_tcp_pl___024root___eval_ico(vlSelf);
    }
    return (vlSelfRef.__VicoExecute);
}

void Vchksum_tcp_pl___024root___eval_act(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_act\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vchksum_tcp_pl___024root___eval_triggers__act(Vchksum_tcp_pl___024root* vlSelf);

bool Vchksum_tcp_pl___024root___eval_phase__act(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__act\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__act(vlSelf);
    vlSelfRef.__VactExecute = vlSelfRef.__VactTriggered.any();
    if (vlSelfRef.__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vchksum_tcp_pl___024root___eval_act(vlSelf);
    }
    return (vlSelfRef.__VactExecute);
}

void Vchksum_tcp_pl___024root___eval_nba(Vchksum_tcp_pl___024root* vlSelf);

bool Vchksum_tcp_pl___024root___eval_phase__nba(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__nba\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (vlSelfRef.__VnbaExecute) {
        Vchksum_tcp_pl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (vlSelfRef.__VnbaExecute);
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
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    vlSelfRef.__VicoContinue = 1U;
    while (vlSelfRef.__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VicoIterCount)))) {
#ifdef VL_DEBUG
            Vchksum_tcp_pl___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 2, "", "Input combinational region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VicoIterCount);
        vlSelfRef.__VicoIterCount = __Vtemp_1;
        vlSelfRef.__VicoContinue = 0U;
        if (Vchksum_tcp_pl___024root___eval_phase__ico(vlSelf)) {
            vlSelfRef.__VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    vlSelfRef.__VnbaIterCount = 0U;
    vlSelfRef.__VnbaFirstIteration = 1U;
    vlSelfRef.__VnbaContinue = 1U;
    while (vlSelfRef.__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vchksum_tcp_pl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 2, "", "NBA region did not converge.");
        }
        __Vtemp_2 = ((IData)(1U) + vlSelfRef.__VnbaIterCount);
        vlSelfRef.__VnbaIterCount = __Vtemp_2;
        vlSelfRef.__VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactFirstIteration = 1U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vchksum_tcp_pl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 2, "", "Active region did not converge.");
            }
            __Vtemp_3 = ((IData)(1U) + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactIterCount = __Vtemp_3;
            vlSelfRef.__VactContinue = 0U;
            if (Vchksum_tcp_pl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
            vlSelfRef.__VactFirstIteration = 0U;
        }
        if (Vchksum_tcp_pl___024root___eval_phase__nba(vlSelf)) {
            vlSelfRef.__VnbaContinue = 1U;
        }
        vlSelfRef.__VnbaFirstIteration = 0U;
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
