// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_TX.h for the primary calling header

#include "Vether_TX__pch.h"
#include "Vether_TX___024root.h"

void Vether_TX___024root___ico_sequent__TOP__0(Vether_TX___024root* vlSelf);

void Vether_TX___024root___eval_ico(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_ico\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vether_TX___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vether_TX___024root___eval_triggers__ico(Vether_TX___024root* vlSelf);

bool Vether_TX___024root___eval_phase__ico(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_phase__ico\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vether_TX___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vether_TX___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vether_TX___024root___eval_act(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_act\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vether_TX___024root___nba_sequent__TOP__0(Vether_TX___024root* vlSelf);

void Vether_TX___024root___eval_nba(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_nba\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_TX___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vether_TX___024root___eval_triggers__act(Vether_TX___024root* vlSelf);

bool Vether_TX___024root___eval_phase__act(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_phase__act\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vether_TX___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vether_TX___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vether_TX___024root___eval_phase__nba(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_phase__nba\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vether_TX___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__ico(Vether_TX___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__nba(Vether_TX___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__act(Vether_TX___024root* vlSelf);
#endif  // VL_DEBUG

void Vether_TX___024root___eval(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vether_TX___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/ether_TX.sv", 69, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vether_TX___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vether_TX___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/ether_TX.sv", 69, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vether_TX___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/ether_TX.sv", 69, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vether_TX___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vether_TX___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vether_TX___024root___eval_debug_assertions(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_debug_assertions\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.rcv_data & 0xfeU)))) {
        Verilated::overWidthError("rcv_data");}
    if (VL_UNLIKELY(((vlSelfRef.timeout_flag & 0xfeU)))) {
        Verilated::overWidthError("timeout_flag");}
    if (VL_UNLIKELY(((vlSelfRef.offset_rx & 0xf0U)))) {
        Verilated::overWidthError("offset_rx");}
    if (VL_UNLIKELY(((vlSelfRef.SYN_sent & 0xfeU)))) {
        Verilated::overWidthError("SYN_sent");}
    if (VL_UNLIKELY(((vlSelfRef.ACK_sent & 0xfeU)))) {
        Verilated::overWidthError("ACK_sent");}
    if (VL_UNLIKELY(((vlSelfRef.FIN_sent & 0xfeU)))) {
        Verilated::overWidthError("FIN_sent");}
    if (VL_UNLIKELY(((vlSelfRef.end_ss & 0xfeU)))) {
        Verilated::overWidthError("end_ss");}
    if (VL_UNLIKELY(((vlSelfRef.seq_up & 0xfeU)))) {
        Verilated::overWidthError("seq_up");}
}
#endif  // VL_DEBUG
