// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_tx.h for the primary calling header

#include "VIP_tx__pch.h"
#include "VIP_tx___024root.h"

void VIP_tx___024root___ico_sequent__TOP__0(VIP_tx___024root* vlSelf);

void VIP_tx___024root___eval_ico(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_ico\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VIP_tx___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIP_tx___024root___ico_sequent__TOP__0(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___ico_sequent__TOP__0\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IP_tx__DOT__nxIP_state = vlSelfRef.IP_tx__DOT__IP_state;
    vlSelfRef.IP_tx__DOT__nxIP_transmit_l = vlSelfRef.IP_transmit;
    if ((0x40U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((0x20U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((0x10U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((8U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((4U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        if ((2U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
            vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
        } else if ((1U & (~ (IData)(vlSelfRef.IP_tx__DOT__IP_state)))) {
            vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
        }
    } else if ((2U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = ((1U 
                                                  & (IData)(vlSelfRef.IP_tx__DOT__IP_state))
                                                  ? 2ULL
                                                  : 
                                                 (0xc0a80101c0a801ULL 
                                                  | ((QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelfRef.IP_tx__DOT__IPv4_chk_sum))) 
                                                     << 0x38U)));
    } else if ((1U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = (0x2800014000400600ULL 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlSelfRef.IP_tx__DOT__IPv4_chk_sum 
                                                                       >> 8U)))));
    } else if (vlSelfRef.IP_send) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0x8004500ULL;
    }
    vlSelfRef.IP_tx__DOT__chk_sum_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
                        if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.IP_tx__DOT__IP_state)))) {
                                vlSelfRef.IP_tx__DOT__nxIP_state = 0U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
                        vlSelfRef.IP_tx__DOT__nxIP_state 
                            = ((1U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))
                                ? 4U : 3U);
                    } else if ((1U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
                        vlSelfRef.IP_tx__DOT__nxIP_state = 2U;
                    } else if (vlSelfRef.IP_send) {
                        vlSelfRef.IP_tx__DOT__nxIP_state = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.IP_tx__DOT__IP_state)))) {
                                if (vlSelfRef.IP_send) {
                                    vlSelfRef.IP_tx__DOT__chk_sum_valid = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.IP_tx__DOT__nIPv4_chk_sum = vlSelfRef.IP_tx__DOT__IPv4_chk_sum;
    if (vlSelfRef.IP_tx__DOT__chk_sum_valid) {
        vlSelfRef.IP_tx__DOT__nIPv4_chk_sum = (0x1ffffU 
                                               & ((IData)(0x4884U) 
                                                  + (IData)(vlSelfRef.TCP_len_data)));
    }
}

void VIP_tx___024root___eval_triggers__ico(VIP_tx___024root* vlSelf);

bool VIP_tx___024root___eval_phase__ico(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_phase__ico\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VIP_tx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VIP_tx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VIP_tx___024root___eval_act(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_act\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VIP_tx___024root___nba_sequent__TOP__0(VIP_tx___024root* vlSelf);

void VIP_tx___024root___eval_nba(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_nba\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VIP_tx___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIP_tx___024root___nba_sequent__TOP__0(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___nba_sequent__TOP__0\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.nRST) {
        vlSelfRef.IP_transmit = vlSelfRef.IP_tx__DOT__nxIP_transmit_l;
        vlSelfRef.IP_tx__DOT__IPv4_chk_sum = (0x1ffffU 
                                              & (~ 
                                                 ((0xffffU 
                                                   & vlSelfRef.IP_tx__DOT__nIPv4_chk_sum) 
                                                  + 
                                                  (1U 
                                                   & (vlSelfRef.IP_tx__DOT__nIPv4_chk_sum 
                                                      >> 0x10U)))));
        vlSelfRef.IP_tx__DOT__IP_state = vlSelfRef.IP_tx__DOT__nxIP_state;
    } else {
        vlSelfRef.IP_transmit = 0ULL;
        vlSelfRef.IP_tx__DOT__IPv4_chk_sum = 0U;
        vlSelfRef.IP_tx__DOT__IP_state = 0U;
    }
    vlSelfRef.IP_tx__DOT__nxIP_state = vlSelfRef.IP_tx__DOT__IP_state;
    vlSelfRef.IP_tx__DOT__nxIP_transmit_l = vlSelfRef.IP_transmit;
    if ((0x40U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((0x20U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((0x10U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((8U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
    } else if ((4U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        if ((2U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
            vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
        } else if ((1U & (~ (IData)(vlSelfRef.IP_tx__DOT__IP_state)))) {
            vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0ULL;
        }
    } else if ((2U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = ((1U 
                                                  & (IData)(vlSelfRef.IP_tx__DOT__IP_state))
                                                  ? 2ULL
                                                  : 
                                                 (0xc0a80101c0a801ULL 
                                                  | ((QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelfRef.IP_tx__DOT__IPv4_chk_sum))) 
                                                     << 0x38U)));
    } else if ((1U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = (0x2800014000400600ULL 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlSelfRef.IP_tx__DOT__IPv4_chk_sum 
                                                                       >> 8U)))));
    } else if (vlSelfRef.IP_send) {
        vlSelfRef.IP_tx__DOT__nxIP_transmit_l = 0x8004500ULL;
    }
    vlSelfRef.IP_tx__DOT__chk_sum_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
                        if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.IP_tx__DOT__IP_state)))) {
                                vlSelfRef.IP_tx__DOT__nxIP_state = 0U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
                        vlSelfRef.IP_tx__DOT__nxIP_state 
                            = ((1U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))
                                ? 4U : 3U);
                    } else if ((1U & (IData)(vlSelfRef.IP_tx__DOT__IP_state))) {
                        vlSelfRef.IP_tx__DOT__nxIP_state = 2U;
                    } else if (vlSelfRef.IP_send) {
                        vlSelfRef.IP_tx__DOT__nxIP_state = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.IP_tx__DOT__IP_state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.IP_tx__DOT__IP_state)))) {
                                if (vlSelfRef.IP_send) {
                                    vlSelfRef.IP_tx__DOT__chk_sum_valid = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.IP_tx__DOT__nIPv4_chk_sum = vlSelfRef.IP_tx__DOT__IPv4_chk_sum;
    if (vlSelfRef.IP_tx__DOT__chk_sum_valid) {
        vlSelfRef.IP_tx__DOT__nIPv4_chk_sum = (0x1ffffU 
                                               & ((IData)(0x4884U) 
                                                  + (IData)(vlSelfRef.TCP_len_data)));
    }
}

void VIP_tx___024root___eval_triggers__act(VIP_tx___024root* vlSelf);

bool VIP_tx___024root___eval_phase__act(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_phase__act\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIP_tx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VIP_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIP_tx___024root___eval_phase__nba(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_phase__nba\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIP_tx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__ico(VIP_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__nba(VIP_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__act(VIP_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VIP_tx___024root___eval(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VIP_tx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_tx.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VIP_tx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VIP_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_tx.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VIP_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/IP_tx.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VIP_tx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VIP_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIP_tx___024root___eval_debug_assertions(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_debug_assertions\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.IP_send & 0xfeU)))) {
        Verilated::overWidthError("IP_send");}
}
#endif  // VL_DEBUG
