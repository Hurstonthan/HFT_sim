// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUDP_rx.h for the primary calling header

#include "VUDP_rx__pch.h"
#include "VUDP_rx___024root.h"

VL_ATTR_COLD void VUDP_rx___024root___eval_static(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___eval_static\n"); );
}

VL_ATTR_COLD void VUDP_rx___024root___eval_initial(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void VUDP_rx___024root___eval_final(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_rx___024root___dump_triggers__stl(VUDP_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VUDP_rx___024root___eval_phase__stl(VUDP_rx___024root* vlSelf);

VL_ATTR_COLD void VUDP_rx___024root___eval_settle(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VUDP_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/UDP_rx.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VUDP_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_rx___024root___dump_triggers__stl(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VUDP_rx___024root___stl_sequent__TOP__0(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->UDP_flush = 0U;
    vlSelf->UDP_rx__DOT__next_UDP_len = vlSelf->UDP_rx__DOT__UDP_len;
    vlSelf->UDP_rx__DOT__next_cnt = vlSelf->UDP_rx__DOT__cnt;
    vlSelf->UDP_rx__DOT__next_UDP_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->UDP_rx__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
                if (vlSelf->IP_valid) {
                    vlSelf->UDP_rx__DOT__next_UDP_payload 
                        = vlSelf->IP_payload;
                    if (((IData)(vlSelf->UDP_rx__DOT__cnt) 
                         < (IData)(vlSelf->UDP_rx__DOT__UDP_len))) {
                        vlSelf->UDP_rx__DOT__next_UDP_valid = 1U;
                    }
                }
            } else if (vlSelf->IP_valid) {
                vlSelf->UDP_rx__DOT__next_UDP_payload 
                    = (0xffffffffffffULL & vlSelf->IP_payload);
                vlSelf->UDP_rx__DOT__next_UDP_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
            if (((IData)(vlSelf->IP_valid) & (0x123443210000ULL 
                                              == (0xffffffff0000ULL 
                                                  & vlSelf->IP_payload)))) {
                vlSelf->UDP_rx__DOT__next_UDP_valid = 1U;
            }
        }
    }
    vlSelf->UDP_rx__DOT__nstate = vlSelf->UDP_rx__DOT__current_state;
    if ((4U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->UDP_rx__DOT__current_state)))) {
                vlSelf->UDP_flush = 1U;
            }
            if ((1U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
                vlSelf->UDP_rx__DOT__nstate = vlSelf->UDP_rx__DOT__current_state;
            } else if ((1U & (~ (IData)(vlSelf->IP_valid)))) {
                vlSelf->UDP_rx__DOT__nstate = 0U;
            }
        } else {
            vlSelf->UDP_rx__DOT__nstate = ((1U & (IData)(vlSelf->UDP_rx__DOT__current_state))
                                            ? (IData)(vlSelf->UDP_rx__DOT__current_state)
                                            : 0U);
        }
        if ((1U & (~ ((IData)(vlSelf->UDP_rx__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->UDP_rx__DOT__current_state)))) {
                vlSelf->UDP_rx__DOT__next_UDP_len = 0U;
                vlSelf->UDP_rx__DOT__next_cnt = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->UDP_rx__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
                if (((IData)(vlSelf->IP_valid) & (0x123443210000ULL 
                                                  == 
                                                  (0xffffffff0000ULL 
                                                   & vlSelf->IP_payload)))) {
                    vlSelf->UDP_rx__DOT__next_UDP_len 
                        = (0xffffU & (IData)(vlSelf->IP_payload));
                }
            }
        }
        if ((2U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
                if (vlSelf->IP_valid) {
                    vlSelf->UDP_rx__DOT__next_cnt = 
                        (0xffffU & ((IData)(8U) + (IData)(vlSelf->UDP_rx__DOT__cnt)));
                    if (((IData)(vlSelf->UDP_rx__DOT__cnt) 
                         >= (IData)(vlSelf->UDP_rx__DOT__UDP_len))) {
                        vlSelf->UDP_rx__DOT__nstate = 4U;
                    }
                }
            } else if (vlSelf->IP_valid) {
                vlSelf->UDP_rx__DOT__next_cnt = (0xffffU 
                                                 & ((IData)(8U) 
                                                    + (IData)(vlSelf->UDP_rx__DOT__cnt)));
                vlSelf->UDP_rx__DOT__nstate = 3U;
            }
        } else if ((1U & (IData)(vlSelf->UDP_rx__DOT__current_state))) {
            if (((IData)(vlSelf->IP_valid) & (0x123443210000ULL 
                                              == (0xffffffff0000ULL 
                                                  & vlSelf->IP_payload)))) {
                vlSelf->UDP_rx__DOT__next_cnt = 6U;
                vlSelf->UDP_rx__DOT__nstate = 2U;
            } else {
                vlSelf->UDP_rx__DOT__nstate = 6U;
            }
        } else if (((IData)(vlSelf->IP_valid) & (IData)(vlSelf->is_udp))) {
            vlSelf->UDP_rx__DOT__nstate = 1U;
        }
    }
}

VL_ATTR_COLD void VUDP_rx___024root___eval_stl(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VUDP_rx___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VUDP_rx___024root___eval_triggers__stl(VUDP_rx___024root* vlSelf);

VL_ATTR_COLD bool VUDP_rx___024root___eval_phase__stl(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VUDP_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VUDP_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_rx___024root___dump_triggers__ico(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_rx___024root___dump_triggers__act(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_rx___024root___dump_triggers__nba(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VUDP_rx___024root___ctor_var_reset(VUDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->IP_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_flush = VL_RAND_RESET_I(1);
    vlSelf->IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->is_udp = VL_RAND_RESET_I(1);
    vlSelf->UDP_flush = VL_RAND_RESET_I(1);
    vlSelf->UDP_valid = VL_RAND_RESET_I(1);
    vlSelf->UDP_payload = VL_RAND_RESET_Q(64);
    vlSelf->UDP_rx__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->UDP_rx__DOT__next_cnt = VL_RAND_RESET_I(16);
    vlSelf->UDP_rx__DOT__UDP_len = VL_RAND_RESET_I(16);
    vlSelf->UDP_rx__DOT__next_UDP_len = VL_RAND_RESET_I(16);
    vlSelf->UDP_rx__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->UDP_rx__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->UDP_rx__DOT__next_UDP_valid = VL_RAND_RESET_I(1);
    vlSelf->UDP_rx__DOT__next_UDP_payload = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
