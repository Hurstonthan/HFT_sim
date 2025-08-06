// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_UDP_tx.h for the primary calling header

#include "VIP_UDP_tx__pch.h"
#include "VIP_UDP_tx___024root.h"

VL_ATTR_COLD void VIP_UDP_tx___024root___eval_static(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIP_UDP_tx___024root___eval_initial(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void VIP_UDP_tx___024root___eval_final(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__stl(VIP_UDP_tx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIP_UDP_tx___024root___eval_phase__stl(VIP_UDP_tx___024root* vlSelf);

VL_ATTR_COLD void VIP_UDP_tx___024root___eval_settle(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_settle\n"); );
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
            VIP_UDP_tx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_UDP_tx.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIP_UDP_tx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__stl(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIP_UDP_tx___024root___stl_sequent__TOP__0(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->IP_UDP_tx__DOT__UDP_last = 0U;
    if ((1U & (~ ((IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state))) {
                vlSelf->IP_UDP_tx__DOT__UDP_last = 1U;
            }
        }
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

VL_ATTR_COLD void VIP_UDP_tx___024root___eval_stl(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VIP_UDP_tx___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VIP_UDP_tx___024root___eval_triggers__stl(VIP_UDP_tx___024root* vlSelf);

VL_ATTR_COLD bool VIP_UDP_tx___024root___eval_phase__stl(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIP_UDP_tx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VIP_UDP_tx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__ico(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__act(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VIP_UDP_tx___024root___dump_triggers__nba(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIP_UDP_tx___024root___ctor_var_reset(VIP_UDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->UDP_len = VL_RAND_RESET_I(16);
    vlSelf->UDP_payload = VL_RAND_RESET_Q(64);
    vlSelf->protocol_last = VL_RAND_RESET_I(1);
    vlSelf->IP_transmit = VL_RAND_RESET_Q(64);
    vlSelf->tt_len_data = VL_RAND_RESET_I(16);
    vlSelf->IP_last = VL_RAND_RESET_I(1);
    vlSelf->protocol_send = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_tx__DOT__IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_tx__DOT__UDP_last = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__computed_len = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__header_reg = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state = VL_RAND_RESET_I(3);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state = VL_RAND_RESET_I(3);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chk_sum_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp = VL_RAND_RESET_I(20);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum = VL_RAND_RESET_I(17);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum = VL_RAND_RESET_I(17);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chksum_rslt = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
