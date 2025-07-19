// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUDP_tx.h for the primary calling header

#include "VUDP_tx__pch.h"
#include "VUDP_tx___024root.h"

VL_INLINE_OPT void VUDP_tx___024root___ico_sequent__TOP__0(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->IP_valid = 0U;
    vlSelf->UDP_tx__DOT__nstate = vlSelf->UDP_tx__DOT__current_state;
    vlSelf->IP_payload = 0ULL;
    if ((2U & (IData)(vlSelf->UDP_tx__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->UDP_tx__DOT__current_state)))) {
            vlSelf->IP_valid = 1U;
            vlSelf->IP_payload = vlSelf->UDP_payload;
        }
        if ((1U & (IData)(vlSelf->UDP_tx__DOT__current_state))) {
            vlSelf->UDP_tx__DOT__nstate = 0U;
        } else if (vlSelf->UDP_last) {
            vlSelf->UDP_tx__DOT__nstate = 3U;
        } else if ((1U & (~ (IData)(vlSelf->UDP_valid)))) {
            vlSelf->UDP_tx__DOT__nstate = 0U;
        }
    } else if ((1U & (IData)(vlSelf->UDP_tx__DOT__current_state))) {
        vlSelf->IP_valid = 1U;
        vlSelf->UDP_tx__DOT__nstate = 2U;
        vlSelf->IP_payload = vlSelf->UDP_tx__DOT__header_reg;
    } else if (vlSelf->UDP_valid) {
        vlSelf->IP_valid = 1U;
        vlSelf->UDP_tx__DOT__nstate = 1U;
    }
}

void VUDP_tx___024root___eval_ico(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VUDP_tx___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VUDP_tx___024root___eval_triggers__ico(VUDP_tx___024root* vlSelf);

bool VUDP_tx___024root___eval_phase__ico(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VUDP_tx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VUDP_tx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VUDP_tx___024root___eval_act(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_act\n"); );
}

VL_INLINE_OPT void VUDP_tx___024root___nba_sequent__TOP__0(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->nRST) {
        vlSelf->UDP_tx__DOT__header_reg = (((QData)((IData)(
                                                            (0xaaaa0000U 
                                                             | (IData)(vlSelf->UDP_src_port)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->UDP_dest_port) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(8U) 
                                                                    + (IData)(vlSelf->UDP_len)))))));
        vlSelf->UDP_tx__DOT__current_state = vlSelf->UDP_tx__DOT__nstate;
    } else {
        vlSelf->UDP_tx__DOT__header_reg = 0ULL;
        vlSelf->UDP_tx__DOT__current_state = 0U;
    }
    vlSelf->IP_valid = 0U;
    vlSelf->UDP_tx__DOT__nstate = vlSelf->UDP_tx__DOT__current_state;
    vlSelf->IP_payload = 0ULL;
    if ((2U & (IData)(vlSelf->UDP_tx__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->UDP_tx__DOT__current_state))) {
            vlSelf->IP_last = 1U;
            vlSelf->UDP_tx__DOT__nstate = 0U;
        } else if (vlSelf->UDP_last) {
            vlSelf->UDP_tx__DOT__nstate = 3U;
        } else if ((1U & (~ (IData)(vlSelf->UDP_valid)))) {
            vlSelf->UDP_tx__DOT__nstate = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->UDP_tx__DOT__current_state)))) {
            vlSelf->IP_valid = 1U;
            vlSelf->IP_payload = vlSelf->UDP_payload;
        }
    } else if ((1U & (IData)(vlSelf->UDP_tx__DOT__current_state))) {
        vlSelf->IP_valid = 1U;
        vlSelf->UDP_tx__DOT__nstate = 2U;
        vlSelf->IP_payload = vlSelf->UDP_tx__DOT__header_reg;
    } else if (vlSelf->UDP_valid) {
        vlSelf->IP_valid = 1U;
        vlSelf->UDP_tx__DOT__nstate = 1U;
    }
}

void VUDP_tx___024root___eval_nba(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VUDP_tx___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VUDP_tx___024root___eval_triggers__act(VUDP_tx___024root* vlSelf);

bool VUDP_tx___024root___eval_phase__act(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VUDP_tx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VUDP_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VUDP_tx___024root___eval_phase__nba(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VUDP_tx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_tx___024root___dump_triggers__ico(VUDP_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_tx___024root___dump_triggers__nba(VUDP_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_tx___024root___dump_triggers__act(VUDP_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VUDP_tx___024root___eval(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval\n"); );
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
            VUDP_tx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/UDP_tx.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VUDP_tx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VUDP_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/UDP_tx.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VUDP_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/UDP_tx.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VUDP_tx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VUDP_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VUDP_tx___024root___eval_debug_assertions(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->nRST & 0xfeU))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY((vlSelf->UDP_valid & 0xfeU))) {
        Verilated::overWidthError("UDP_valid");}
    if (VL_UNLIKELY((vlSelf->UDP_last & 0xfeU))) {
        Verilated::overWidthError("UDP_last");}
}
#endif  // VL_DEBUG
