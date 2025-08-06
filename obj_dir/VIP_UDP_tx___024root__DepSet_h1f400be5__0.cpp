// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_UDP_tx.h for the primary calling header

#include "VIP_UDP_tx__pch.h"
#include "VIP_UDP_tx___024root.h"

VL_INLINE_OPT void VIP_UDP_tx___024root___ico_sequent__TOP__0(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate 
        = vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state;
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state 
        = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state;
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload = 0ULL;
    if ((4U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate 
            = ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))
                ? 0U : ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))
                         ? 0U : 2U));
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state)))) {
                vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
                    = vlSelf->UDP_payload;
            }
        }
    } else if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate 
            = ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))
                ? 0U : ((IData)(vlSelf->protocol_last)
                         ? 3U : 2U));
        if ((1U & (~ (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state)))) {
            vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
                = vlSelf->UDP_payload;
        }
    } else if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate = 4U;
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
            = (0xffffffffffffULL & vlSelf->UDP_payload);
    } else if (vlSelf->protocol_send) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate = 1U;
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
            = vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__header_reg;
    }
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum 
        = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum;
    if (vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chk_sum_valid) {
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
            = (0xfffffU & ((IData)(0x24882U) + (0xffffU 
                                                & ((IData)(8U) 
                                                   + (IData)(vlSelf->UDP_len)))));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
            = (0xfffffU & ((0xffffU & vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp) 
                           + (0xfU & (vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
                                      >> 0x10U))));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
            = (0xfffffU & ((0xffffU & vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp) 
                           + (1U & (vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
                                    >> 0x10U))));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum 
            = (0x1ffffU & vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp);
    }
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
        = vlSelf->IP_transmit;
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data 
        = vlSelf->tt_len_data;
    if ((4U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
        if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
            if ((1U & (~ (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state)))) {
                if ((1U & (~ (IData)(vlSelf->valid)))) {
                    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 0U;
                }
            }
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
                vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l = 0ULL;
            }
        } else {
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
                if (vlSelf->IP_UDP_tx__DOT__UDP_last) {
                    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 6U;
                }
            } else {
                vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 5U;
            }
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
                = vlSelf->IP_UDP_tx__DOT__IP_payload;
        }
    } else if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
        if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 4U;
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
                = (0x102000000000000ULL | (0xffffffffffffULL 
                                           & vlSelf->IP_UDP_tx__DOT__IP_payload));
        } else {
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 3U;
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
                = (0xc0a80101c0a8ULL | ((QData)((IData)(
                                                        (0xffffU 
                                                         & (~ vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum)))) 
                                        << 0x30U));
        }
    } else if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 2U;
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data 
            = (0xffffU & ((IData)(0x30U) + (IData)(vlSelf->UDP_len)));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
            = (0x40004006ULL | ((QData)((IData)((1U 
                                                 | ((IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data) 
                                                    << 0x10U)))) 
                                << 0x20U));
    } else if (vlSelf->valid) {
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 1U;
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l = 0x8004500ULL;
    }
}

void VIP_UDP_tx___024root___eval_ico(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VIP_UDP_tx___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VIP_UDP_tx___024root___eval_triggers__ico(VIP_UDP_tx___024root* vlSelf);

bool VIP_UDP_tx___024root___eval_phase__ico(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VIP_UDP_tx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VIP_UDP_tx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VIP_UDP_tx___024root___eval_act(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_act\n"); );
}

VL_INLINE_OPT void VIP_UDP_tx___024root___nba_sequent__TOP__0(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->nRST) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__header_reg 
            = (0x432112340000ULL | (QData)((IData)(
                                                   (0xffffU 
                                                    & ((IData)(8U) 
                                                       + (IData)(vlSelf->UDP_len))))));
        vlSelf->IP_UDP_tx__DOT__IP_payload = vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload;
        vlSelf->tt_len_data = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data;
        vlSelf->IP_transmit = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l;
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum 
            = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum;
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state 
            = vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate;
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state 
            = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state;
    } else {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__header_reg = 0ULL;
        vlSelf->IP_UDP_tx__DOT__IP_payload = 0ULL;
        vlSelf->tt_len_data = 0U;
        vlSelf->IP_transmit = 0ULL;
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum = 0U;
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state = 0U;
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state = 0U;
    }
    vlSelf->IP_last = ((IData)(vlSelf->nRST) && (IData)(vlSelf->IP_UDP_tx__DOT__UDP_last));
    vlSelf->IP_UDP_tx__DOT__UDP_last = 0U;
    if ((1U & (~ ((IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
                vlSelf->IP_UDP_tx__DOT__UDP_last = 1U;
            }
        }
    }
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chksum_rslt = 0U;
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chk_sum_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
            if ((1U & (~ (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state)))) {
                vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chksum_rslt 
                    = (0xffffU & (~ vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum));
            }
        }
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
                vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chk_sum_valid = 1U;
            }
        }
    }
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
        = vlSelf->IP_transmit;
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data 
        = vlSelf->tt_len_data;
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state 
        = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state;
    vlSelf->protocol_send = 0U;
    if ((4U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
        if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
                vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l = 0ULL;
            }
            if ((1U & (~ (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state)))) {
                if ((1U & (~ (IData)(vlSelf->valid)))) {
                    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 0U;
                }
            }
        } else {
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
                = vlSelf->IP_UDP_tx__DOT__IP_payload;
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
                if (vlSelf->IP_UDP_tx__DOT__UDP_last) {
                    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 6U;
                }
            } else {
                vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 5U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
                vlSelf->protocol_send = 1U;
                if (vlSelf->IP_UDP_tx__DOT__UDP_last) {
                    vlSelf->protocol_send = 0U;
                }
            } else {
                vlSelf->protocol_send = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
        if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
                = (0x102000000000000ULL | (0xffffffffffffULL 
                                           & vlSelf->IP_UDP_tx__DOT__IP_payload));
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 4U;
            vlSelf->protocol_send = 1U;
        } else {
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
                = (0xc0a80101c0a8ULL | ((QData)((IData)(
                                                        (0xffffU 
                                                         & (~ vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum)))) 
                                        << 0x30U));
            vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state))) {
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data 
            = (0xffffU & ((IData)(0x30U) + (IData)(vlSelf->UDP_len)));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l 
            = (0x40004006ULL | ((QData)((IData)((1U 
                                                 | ((IData)(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data) 
                                                    << 0x10U)))) 
                                << 0x20U));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 2U;
    } else if (vlSelf->valid) {
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l = 0x8004500ULL;
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = 1U;
    }
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum 
        = vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum;
    if (vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chk_sum_valid) {
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
            = (0xfffffU & ((IData)(0x24882U) + (0xffffU 
                                                & ((IData)(8U) 
                                                   + (IData)(vlSelf->UDP_len)))));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
            = (0xfffffU & ((0xffffU & vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp) 
                           + (0xfU & (vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
                                      >> 0x10U))));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
            = (0xfffffU & ((0xffffU & vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp) 
                           + (1U & (vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp 
                                    >> 0x10U))));
        vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum 
            = (0x1ffffU & vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp);
    }
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate 
        = vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state;
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload = 0ULL;
    if ((4U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate 
            = ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))
                ? 0U : ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))
                         ? 0U : 2U));
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state)))) {
                vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
                    = vlSelf->UDP_payload;
            }
        }
    } else if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate 
            = ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))
                ? 0U : ((IData)(vlSelf->protocol_last)
                         ? 3U : 2U));
        if ((1U & (~ (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state)))) {
            vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
                = vlSelf->UDP_payload;
        }
    } else if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate = 4U;
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
            = (0xffffffffffffULL & vlSelf->UDP_payload);
    } else if (vlSelf->protocol_send) {
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate = 1U;
        vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload 
            = vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__header_reg;
    }
}

void VIP_UDP_tx___024root___eval_nba(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIP_UDP_tx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VIP_UDP_tx___024root___eval_triggers__act(VIP_UDP_tx___024root* vlSelf);

bool VIP_UDP_tx___024root___eval_phase__act(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIP_UDP_tx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIP_UDP_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIP_UDP_tx___024root___eval_phase__nba(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIP_UDP_tx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__ico(VIP_UDP_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__nba(VIP_UDP_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__act(VIP_UDP_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VIP_UDP_tx___024root___eval(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval\n"); );
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
            VIP_UDP_tx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_UDP_tx.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VIP_UDP_tx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIP_UDP_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_UDP_tx.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIP_UDP_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/IP_UDP_tx.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIP_UDP_tx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIP_UDP_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIP_UDP_tx___024root___eval_debug_assertions(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->nRST & 0xfeU))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY((vlSelf->valid & 0xfeU))) {
        Verilated::overWidthError("valid");}
    if (VL_UNLIKELY((vlSelf->protocol_last & 0xfeU))) {
        Verilated::overWidthError("protocol_last");}
}
#endif  // VL_DEBUG
