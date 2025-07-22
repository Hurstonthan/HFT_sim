// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTCP.h for the primary calling header

#include "VTCP__pch.h"
#include "VTCP___024root.h"

void VTCP___024root___eval_triggers__act(VTCP___024root* vlSelf);
void VTCP___024root___eval_act(VTCP___024root* vlSelf);

bool VTCP___024root___eval_phase__act(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval_phase__act\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTCP___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTCP___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTCP___024root___eval_nba(VTCP___024root* vlSelf);

bool VTCP___024root___eval_phase__nba(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval_phase__nba\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTCP___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP___024root___dump_triggers__ico(VTCP___024root* vlSelf);
#endif  // VL_DEBUG
bool VTCP___024root___eval_phase__ico(VTCP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP___024root___dump_triggers__nba(VTCP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP___024root___dump_triggers__act(VTCP___024root* vlSelf);
#endif  // VL_DEBUG

void VTCP___024root___eval(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VTCP___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/TCP.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTCP___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTCP___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/TCP.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTCP___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/TCP.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTCP___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTCP___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTCP___024root___eval_debug_assertions(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval_debug_assertions\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.TX_en & 0xfeU)))) {
        Verilated::overWidthError("TX_en");}
    if (VL_UNLIKELY(((vlSelfRef.IP_valid & 0xfeU)))) {
        Verilated::overWidthError("IP_valid");}
    if (VL_UNLIKELY(((vlSelfRef.IP_flush & 0xfeU)))) {
        Verilated::overWidthError("IP_flush");}
    if (VL_UNLIKELY(((vlSelfRef.wr_ptr_out & 0xf8U)))) {
        Verilated::overWidthError("wr_ptr_out");}
    if (VL_UNLIKELY(((vlSelfRef.wr_FIFO_len & 0xf8U)))) {
        Verilated::overWidthError("wr_FIFO_len");}
    if (VL_UNLIKELY(((vlSelfRef.rd_FIFO_en_rcv & 0xfeU)))) {
        Verilated::overWidthError("rd_FIFO_en_rcv");}
    if (VL_UNLIKELY(((vlSelfRef.full & 0xfeU)))) {
        Verilated::overWidthError("full");}
    if (VL_UNLIKELY(((vlSelfRef.end_ss & 0xfeU)))) {
        Verilated::overWidthError("end_ss");}
    if (VL_UNLIKELY(((vlSelfRef.rd_FIFO_valid_tx & 0xfeU)))) {
        Verilated::overWidthError("rd_FIFO_valid_tx");}
    if (VL_UNLIKELY(((vlSelfRef.rd_FIFO_last & 0xfeU)))) {
        Verilated::overWidthError("rd_FIFO_last");}
    if (VL_UNLIKELY(((vlSelfRef.TCP_send & 0xfeU)))) {
        Verilated::overWidthError("TCP_send");}
    if (VL_UNLIKELY(((vlSelfRef.re_trans & 0xfeU)))) {
        Verilated::overWidthError("re_trans");}
}
#endif  // VL_DEBUG
