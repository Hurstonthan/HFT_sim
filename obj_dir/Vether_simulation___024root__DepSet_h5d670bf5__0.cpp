// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation___024root.h"

void Vether_simulation___024root___eval_triggers__ico(Vether_simulation___024root* vlSelf);
void Vether_simulation___024root___eval_ico(Vether_simulation___024root* vlSelf);

bool Vether_simulation___024root___eval_phase__ico(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_phase__ico\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vether_simulation___024root___eval_triggers__ico(vlSelf);
    vlSelfRef.__VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (vlSelfRef.__VicoExecute) {
        Vether_simulation___024root___eval_ico(vlSelf);
    }
    return (vlSelfRef.__VicoExecute);
}

void Vether_simulation___024root___eval_triggers__act(Vether_simulation___024root* vlSelf);
void Vether_simulation___024root___eval_act(Vether_simulation___024root* vlSelf);

bool Vether_simulation___024root___eval_phase__act(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_phase__act\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vether_simulation___024root___eval_triggers__act(vlSelf);
    vlSelfRef.__VactExecute = vlSelfRef.__VactTriggered.any();
    if (vlSelfRef.__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vether_simulation___024root___eval_act(vlSelf);
    }
    return (vlSelfRef.__VactExecute);
}

void Vether_simulation___024root___eval_nba(Vether_simulation___024root* vlSelf);

bool Vether_simulation___024root___eval_phase__nba(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_phase__nba\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (vlSelfRef.__VnbaExecute) {
        Vether_simulation___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (vlSelfRef.__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__ico(Vether_simulation___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__nba(Vether_simulation___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__act(Vether_simulation___024root* vlSelf);
#endif  // VL_DEBUG

void Vether_simulation___024root___eval(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vether_simulation___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/ether_simulation.sv", 3, "", "Input combinational region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VicoIterCount);
        vlSelfRef.__VicoIterCount = __Vtemp_1;
        vlSelfRef.__VicoContinue = 0U;
        if (Vether_simulation___024root___eval_phase__ico(vlSelf)) {
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
            Vether_simulation___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/ether_simulation.sv", 3, "", "NBA region did not converge.");
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
                Vether_simulation___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/ether_simulation.sv", 3, "", "Active region did not converge.");
            }
            __Vtemp_3 = ((IData)(1U) + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactIterCount = __Vtemp_3;
            vlSelfRef.__VactContinue = 0U;
            if (Vether_simulation___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
            vlSelfRef.__VactFirstIteration = 0U;
        }
        if (Vether_simulation___024root___eval_phase__nba(vlSelf)) {
            vlSelfRef.__VnbaContinue = 1U;
        }
        vlSelfRef.__VnbaFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
void Vether_simulation___024root___eval_debug_assertions(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_debug_assertions\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.client_lost & 0xfeU)))) {
        Verilated::overWidthError("client_lost");}
    if (VL_UNLIKELY(((vlSelfRef.out_order & 0xfeU)))) {
        Verilated::overWidthError("out_order");}
    if (VL_UNLIKELY(((vlSelfRef.err_flag & 0xfeU)))) {
        Verilated::overWidthError("err_flag");}
    if (VL_UNLIKELY(((vlSelfRef.TX_en_svr & 0xfeU)))) {
        Verilated::overWidthError("TX_en_svr");}
    if (VL_UNLIKELY(((vlSelfRef.end_ss_svr & 0xfeU)))) {
        Verilated::overWidthError("end_ss_svr");}
    if (VL_UNLIKELY(((vlSelfRef.axis_last_svr & 0xfeU)))) {
        Verilated::overWidthError("axis_last_svr");}
    if (VL_UNLIKELY(((vlSelfRef.wr_FIFO_en_svr & 0xfeU)))) {
        Verilated::overWidthError("wr_FIFO_en_svr");}
    if (VL_UNLIKELY(((vlSelfRef.axis_r_en_svr & 0xfeU)))) {
        Verilated::overWidthError("axis_r_en_svr");}
    if (VL_UNLIKELY(((vlSelfRef.TX_en_clt & 0xfeU)))) {
        Verilated::overWidthError("TX_en_clt");}
    if (VL_UNLIKELY(((vlSelfRef.end_ss_clt & 0xfeU)))) {
        Verilated::overWidthError("end_ss_clt");}
    if (VL_UNLIKELY(((vlSelfRef.axis_last_clt & 0xfeU)))) {
        Verilated::overWidthError("axis_last_clt");}
    if (VL_UNLIKELY(((vlSelfRef.wr_FIFO_en_clt & 0xfeU)))) {
        Verilated::overWidthError("wr_FIFO_en_clt");}
    if (VL_UNLIKELY(((vlSelfRef.axis_r_en_clt & 0xfeU)))) {
        Verilated::overWidthError("axis_r_en_clt");}
}
#endif  // VL_DEBUG
