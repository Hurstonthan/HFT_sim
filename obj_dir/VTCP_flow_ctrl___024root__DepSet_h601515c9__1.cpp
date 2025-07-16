// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTCP_flow_ctrl.h for the primary calling header

#include "VTCP_flow_ctrl__pch.h"
#include "VTCP_flow_ctrl___024root.h"

void VTCP_flow_ctrl___024root___eval_triggers__act(VTCP_flow_ctrl___024root* vlSelf);
void VTCP_flow_ctrl___024root___eval_act(VTCP_flow_ctrl___024root* vlSelf);

bool VTCP_flow_ctrl___024root___eval_phase__act(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___eval_phase__act\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTCP_flow_ctrl___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTCP_flow_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTCP_flow_ctrl___024root___eval_nba(VTCP_flow_ctrl___024root* vlSelf);

bool VTCP_flow_ctrl___024root___eval_phase__nba(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___eval_phase__nba\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTCP_flow_ctrl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP_flow_ctrl___024root___dump_triggers__ico(VTCP_flow_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
bool VTCP_flow_ctrl___024root___eval_phase__ico(VTCP_flow_ctrl___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP_flow_ctrl___024root___dump_triggers__nba(VTCP_flow_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP_flow_ctrl___024root___dump_triggers__act(VTCP_flow_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void VTCP_flow_ctrl___024root___eval(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___eval\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VTCP_flow_ctrl___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/TCP_flow_ctrl.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTCP_flow_ctrl___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTCP_flow_ctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/TCP_flow_ctrl.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTCP_flow_ctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/TCP_flow_ctrl.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTCP_flow_ctrl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTCP_flow_ctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTCP_flow_ctrl___024root___eval_debug_assertions(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___eval_debug_assertions\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.offset_rx & 0xf0U)))) {
        Verilated::overWidthError("offset_rx");}
    if (VL_UNLIKELY(((vlSelfRef.rcv_data & 0xfeU)))) {
        Verilated::overWidthError("rcv_data");}
    if (VL_UNLIKELY(((vlSelfRef.timeout_flag & 0xfeU)))) {
        Verilated::overWidthError("timeout_flag");}
    if (VL_UNLIKELY(((vlSelfRef.TCP_last & 0xfeU)))) {
        Verilated::overWidthError("TCP_last");}
    if (VL_UNLIKELY(((vlSelfRef.wr_FIFO_ptr & 0xf800U)))) {
        Verilated::overWidthError("wr_FIFO_ptr");}
    if (VL_UNLIKELY(((vlSelfRef.nw_segment & 0xfeU)))) {
        Verilated::overWidthError("nw_segment");}
    if (VL_UNLIKELY(((vlSelfRef.TCP_flush & 0xfeU)))) {
        Verilated::overWidthError("TCP_flush");}
}
#endif  // VL_DEBUG
