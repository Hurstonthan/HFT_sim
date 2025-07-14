// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_rx.h for the primary calling header

#include "VIP_rx__pch.h"
#include "VIP_rx___024root.h"

VL_ATTR_COLD void VIP_rx___024root___eval_static(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIP_rx___024root___eval_initial(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void VIP_rx___024root___eval_final(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_rx___024root___dump_triggers__stl(VIP_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIP_rx___024root___eval_phase__stl(VIP_rx___024root* vlSelf);

VL_ATTR_COLD void VIP_rx___024root___eval_settle(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___eval_settle\n"); );
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
            VIP_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_rx.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIP_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_rx___024root___dump_triggers__stl(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIP_rx___024root___stl_sequent__TOP__0(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->IP_rx__DOT__nbytes_rcv = vlSelf->IP_rx__DOT__bytes_rcv;
    if (vlSelf->MAC_valid) {
        vlSelf->IP_rx__DOT__nbytes_rcv = (0xffffU & 
                                          ((IData)(vlSelf->IP_rx__DOT__bytes_rcv) 
                                           + (IData)(vlSelf->bytes_rcv_len)));
    }
    vlSelf->IP_rx__DOT__nIP_len = vlSelf->IP_rx__DOT__IP_len;
    vlSelf->IP_rx__DOT__ndst_addr = vlSelf->IP_rx__DOT__dst_addr;
    vlSelf->IP_rx__DOT__nIP_payload = vlSelf->IP_payload;
    vlSelf->IP_rx__DOT__chksum_clear = 0U;
    vlSelf->IP_rx__DOT__nIP_valid = 0U;
    vlSelf->IP_rx__DOT__chksum_en = 0U;
    vlSelf->IP_rx__DOT__chksum_in = vlSelf->MAC_payload_rcv;
    if ((1U & (~ ((IData)(vlSelf->IP_rx__DOT__state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->IP_rx__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->IP_rx__DOT__state))) {
                if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_rx__DOT__nIP_checksum 
                            = (0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                                  >> 0x30U)));
                        vlSelf->IP_rx__DOT__ndst_addr 
                            = (0xffffU & (IData)(vlSelf->MAC_payload_rcv));
                    }
                }
                if ((1U & (~ (IData)(vlSelf->IP_rx__DOT__state)))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_rx__DOT__nIP_len 
                            = (0xffU & (IData)((vlSelf->MAC_payload_rcv 
                                                >> 0x38U)));
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->IP_rx__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->IP_rx__DOT__state)))) {
                    vlSelf->IP_rx__DOT__chksum_clear = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->IP_rx__DOT__state))) {
            if ((2U & (IData)(vlSelf->IP_rx__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->IP_rx__DOT__state)))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_rx__DOT__nIP_payload 
                            = vlSelf->MAC_payload_rcv;
                    }
                }
                if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
                    vlSelf->IP_rx__DOT__nIP_valid = 0U;
                } else if (vlSelf->MAC_valid) {
                    vlSelf->IP_rx__DOT__nIP_valid = 1U;
                    if (((IData)(vlSelf->IP_rx__DOT__bytes_rcv) 
                         >= (IData)(vlSelf->IP_rx__DOT__IP_len))) {
                        vlSelf->IP_rx__DOT__nIP_valid = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
                if (vlSelf->MAC_valid) {
                    vlSelf->IP_rx__DOT__nIP_payload 
                        = vlSelf->MAC_payload_rcv;
                }
                if (((0xffffU & vlSelf->IP_rx__DOT__chksum_inst__DOT__TCP_checksum) 
                     == (IData)(vlSelf->IP_rx__DOT__IP_checksum))) {
                    vlSelf->IP_rx__DOT__nIP_valid = 1U;
                }
            } else if (vlSelf->MAC_valid) {
                if ((0xffffffffU == (((IData)(vlSelf->IP_rx__DOT__dst_addr) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->MAC_payload_rcv 
                                                              >> 0x30U)))))) {
                    vlSelf->IP_rx__DOT__nIP_payload 
                        = (0xffffffffffffULL & vlSelf->MAC_payload_rcv);
                    vlSelf->IP_rx__DOT__nIP_valid = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->IP_rx__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->IP_rx__DOT__state)))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_rx__DOT__chksum_en = 1U;
                        vlSelf->IP_rx__DOT__chksum_in 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->MAC_payload_rcv 
                                                          >> 0x30U)))));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->IP_rx__DOT__state))) {
            if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
                if (vlSelf->MAC_valid) {
                    if ((0xffffffffU == (IData)((vlSelf->MAC_payload_rcv 
                                                 >> 0x10U)))) {
                        vlSelf->IP_rx__DOT__nIP_valid = 1U;
                    }
                    vlSelf->IP_rx__DOT__chksum_en = 1U;
                    if ((0xffffffffU != (IData)((vlSelf->MAC_payload_rcv 
                                                 >> 0x10U)))) {
                        vlSelf->IP_rx__DOT__chksum_en = 0U;
                    }
                    vlSelf->IP_rx__DOT__chksum_in = 
                        (0xffffffffffffULL & vlSelf->MAC_payload_rcv);
                }
            } else if (vlSelf->MAC_valid) {
                vlSelf->IP_rx__DOT__chksum_en = 1U;
            }
        } else if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
            if (vlSelf->MAC_valid) {
                vlSelf->IP_rx__DOT__chksum_en = 1U;
            }
        }
    }
    vlSelf->IP_rx__DOT__nstate = vlSelf->IP_rx__DOT__state;
    vlSelf->IP_rx__DOT__next_is_tcp = vlSelf->is_tcp;
    vlSelf->IP_rx__DOT__next_is_udp = vlSelf->is_udp;
    if ((8U & (IData)(vlSelf->IP_rx__DOT__state))) {
        if ((4U & (IData)(vlSelf->IP_rx__DOT__state))) {
            vlSelf->IP_rx__DOT__nstate = 0U;
        } else if ((2U & (IData)(vlSelf->IP_rx__DOT__state))) {
            vlSelf->IP_rx__DOT__nstate = 0U;
        } else if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
            vlSelf->IP_rx__DOT__nstate = 0U;
        } else if ((1U & (~ (IData)(vlSelf->MAC_valid)))) {
            vlSelf->IP_rx__DOT__nstate = 0U;
        }
    } else if ((4U & (IData)(vlSelf->IP_rx__DOT__state))) {
        if ((2U & (IData)(vlSelf->IP_rx__DOT__state))) {
            if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
                vlSelf->IP_rx__DOT__nstate = 0U;
            } else if (vlSelf->MAC_valid) {
                if (((IData)(vlSelf->IP_rx__DOT__bytes_rcv) 
                     >= (IData)(vlSelf->IP_rx__DOT__IP_len))) {
                    vlSelf->IP_rx__DOT__nstate = 7U;
                }
            }
        } else if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
            if (((0xffffU & vlSelf->IP_rx__DOT__chksum_inst__DOT__TCP_checksum) 
                 == (IData)(vlSelf->IP_rx__DOT__IP_checksum))) {
                vlSelf->IP_rx__DOT__nstate = 6U;
            } else {
                vlSelf->IP_rx__DOT__nstate = 8U;
                vlSelf->IP_flush = 1U;
            }
        } else if (vlSelf->MAC_valid) {
            if ((0xffffffffU == (((IData)(vlSelf->IP_rx__DOT__dst_addr) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->MAC_payload_rcv 
                                                          >> 0x30U)))))) {
                vlSelf->IP_rx__DOT__nstate = 5U;
            } else {
                vlSelf->IP_rx__DOT__nstate = 8U;
                vlSelf->IP_flush = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->IP_rx__DOT__state))) {
        if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
            if (vlSelf->MAC_valid) {
                vlSelf->IP_rx__DOT__nstate = ((0xffffffffU 
                                               == (IData)(
                                                          (vlSelf->MAC_payload_rcv 
                                                           >> 0x10U)))
                                               ? 4U
                                               : 8U);
            }
        } else if (vlSelf->MAC_valid) {
            vlSelf->IP_rx__DOT__next_is_tcp = (6U == 
                                               (0xffU 
                                                & (IData)(vlSelf->MAC_payload_rcv)));
            vlSelf->IP_rx__DOT__next_is_udp = (0x11U 
                                               == (0xffU 
                                                   & (IData)(vlSelf->MAC_payload_rcv)));
            if (((IData)(((0ULL == (0x9fff0000ULL & vlSelf->MAC_payload_rcv)) 
                          & (0U != (0xffU & (IData)(
                                                    (vlSelf->MAC_payload_rcv 
                                                     >> 8U)))))) 
                 & ((IData)(vlSelf->IP_rx__DOT__next_is_tcp) 
                    | (IData)(vlSelf->IP_rx__DOT__next_is_udp)))) {
                vlSelf->IP_rx__DOT__nstate = 3U;
            } else {
                vlSelf->IP_flush = 1U;
                vlSelf->IP_rx__DOT__nstate = 8U;
            }
        }
    } else if ((1U & (IData)(vlSelf->IP_rx__DOT__state))) {
        if (vlSelf->MAC_valid) {
            if ((4U == (0xfU & (IData)((vlSelf->MAC_payload_rcv 
                                        >> 0x3cU))))) {
                vlSelf->IP_rx__DOT__nstate = 2U;
            } else {
                vlSelf->IP_rx__DOT__nstate = 8U;
                vlSelf->IP_flush = 1U;
            }
        }
    } else if (vlSelf->MAC_valid) {
        vlSelf->IP_rx__DOT__nstate = 1U;
    }
    vlSelf->IP_rx__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    if (vlSelf->IP_rx__DOT__chksum_clear) {
        vlSelf->IP_rx__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->IP_rx__DOT__chksum_en) {
        vlSelf->IP_rx__DOT__chksum_inst__DOT__nTCP_checksum 
            = (0x1ffffU & ((((vlSelf->IP_rx__DOT__chksum_inst__DOT__TCP_checksum 
                              + (0xffffU & (IData)(vlSelf->IP_rx__DOT__chksum_in))) 
                             + (0xffffU & (IData)((vlSelf->IP_rx__DOT__chksum_in 
                                                   >> 0x10U)))) 
                            + (0xffffU & (IData)((vlSelf->IP_rx__DOT__chksum_in 
                                                  >> 0x20U)))) 
                           + (0xffffU & (IData)((vlSelf->IP_rx__DOT__chksum_in 
                                                 >> 0x30U)))));
    }
}

VL_ATTR_COLD void VIP_rx___024root___eval_stl(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VIP_rx___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VIP_rx___024root___eval_triggers__stl(VIP_rx___024root* vlSelf);

VL_ATTR_COLD bool VIP_rx___024root___eval_phase__stl(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIP_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VIP_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_rx___024root___dump_triggers__ico(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VIP_rx___024root___dump_triggers__act(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VIP_rx___024root___dump_triggers__nba(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIP_rx___024root___ctor_var_reset(VIP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->MAC_valid = VL_RAND_RESET_I(1);
    vlSelf->MAC_payload_rcv = VL_RAND_RESET_Q(64);
    vlSelf->MAC_flush = VL_RAND_RESET_I(1);
    vlSelf->bytes_rcv_len = VL_RAND_RESET_I(8);
    vlSelf->IP_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_flush = VL_RAND_RESET_I(1);
    vlSelf->IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->is_udp = VL_RAND_RESET_I(1);
    vlSelf->is_tcp = VL_RAND_RESET_I(1);
    vlSelf->IP_rx__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->IP_rx__DOT__nstate = VL_RAND_RESET_I(4);
    vlSelf->IP_rx__DOT__IP_checksum = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__nIP_checksum = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__nIP_payload = VL_RAND_RESET_Q(64);
    vlSelf->IP_rx__DOT__bytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__nbytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__chksum_en = VL_RAND_RESET_I(1);
    vlSelf->IP_rx__DOT__chksum_clear = VL_RAND_RESET_I(1);
    vlSelf->IP_rx__DOT__chksum_in = VL_RAND_RESET_Q(64);
    vlSelf->IP_rx__DOT__dst_addr = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__ndst_addr = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__IP_len = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__nIP_len = VL_RAND_RESET_I(16);
    vlSelf->IP_rx__DOT__nIP_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_rx__DOT__next_is_udp = VL_RAND_RESET_I(1);
    vlSelf->IP_rx__DOT__next_is_tcp = VL_RAND_RESET_I(1);
    vlSelf->IP_rx__DOT__chksum_inst__DOT__TCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->IP_rx__DOT__chksum_inst__DOT__nTCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
