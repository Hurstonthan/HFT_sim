// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_UDP_rx.h for the primary calling header

#include "VIP_UDP_rx__pch.h"
#include "VIP_UDP_rx___024root.h"

VL_ATTR_COLD void VIP_UDP_rx___024root___eval_static(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIP_UDP_rx___024root___eval_initial(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void VIP_UDP_rx___024root___eval_final(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__stl(VIP_UDP_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIP_UDP_rx___024root___eval_phase__stl(VIP_UDP_rx___024root* vlSelf);

VL_ATTR_COLD void VIP_UDP_rx___024root___eval_settle(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_settle\n"); );
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
            VIP_UDP_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_UDP_rx.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIP_UDP_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__stl(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIP_UDP_rx___024root___stl_sequent__TOP__0(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__test_valid 
        = ((3U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__test_valid)) 
           | (((0x5c8U >= (0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                              >> 0x30U)))) 
               << 3U) | ((0U == (0x1fffU & (IData)(
                                                   (vlSelf->MAC_payload_rcv 
                                                    >> 0x10U)))) 
                         << 2U)));
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__test_valid 
        = ((0xcU & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__test_valid)) 
           | (((0U != (0xffU & (IData)((vlSelf->MAC_payload_rcv 
                                        >> 8U)))) << 1U) 
              | (1U & (~ (IData)((vlSelf->MAC_payload_rcv 
                                  >> 0x1fU))))));
    vlSelf->IP_UDP_rx__DOT__IP_flush = 0U;
    vlSelf->UDP_flush = 0U;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ip_version 
        = (0xfU & (IData)((vlSelf->MAC_payload_rcv 
                           >> 0xcU)));
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid 
        = (4U == (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ip_version));
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv 
        = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv;
    if (vlSelf->MAC_valid) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv 
            = (0xffffU & ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv) 
                          + (IData)(vlSelf->bytes_rcv_len)));
    }
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr 
        = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_len = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len;
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len 
        = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len;
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt 
        = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload 
        = vlSelf->IP_UDP_rx__DOT__IP_payload;
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
                if (vlSelf->IP_UDP_rx__DOT__IP_valid) {
                    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload 
                        = vlSelf->IP_UDP_rx__DOT__IP_payload;
                    if (((IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt) 
                         < (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len))) {
                        vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid = 1U;
                    }
                }
            } else if (vlSelf->IP_UDP_rx__DOT__IP_valid) {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload 
                    = (0xffffffffffffULL & vlSelf->IP_UDP_rx__DOT__IP_payload);
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
            if (((IData)(vlSelf->IP_UDP_rx__DOT__IP_valid) 
                 & (0x123443210000ULL == (0xffffffff0000ULL 
                                          & vlSelf->IP_UDP_rx__DOT__IP_payload)))) {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid = 1U;
            }
        }
    }
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state;
    if ((4U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state)))) {
                vlSelf->UDP_flush = 1U;
            }
            if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate 
                    = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state;
            } else if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__IP_valid)))) {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = 0U;
            }
        } else {
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate 
                = ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))
                    ? (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state)
                    : 0U);
        }
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state)))) {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len = 0U;
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
                if (((IData)(vlSelf->IP_UDP_rx__DOT__IP_valid) 
                     & (0x123443210000ULL == (0xffffffff0000ULL 
                                              & vlSelf->IP_UDP_rx__DOT__IP_payload)))) {
                    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len 
                        = (0xffffU & (IData)(vlSelf->IP_UDP_rx__DOT__IP_payload));
                }
            }
        }
        if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
                if (vlSelf->IP_UDP_rx__DOT__IP_valid) {
                    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt 
                        = (0xffffU & ((IData)(8U) + (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt)));
                    if (((IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt) 
                         >= (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len))) {
                        vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = 4U;
                    }
                }
            } else if (vlSelf->IP_UDP_rx__DOT__IP_valid) {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt 
                    = (0xffffU & ((IData)(8U) + (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt)));
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = 3U;
            }
        } else if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state))) {
            if (((IData)(vlSelf->IP_UDP_rx__DOT__IP_valid) 
                 & (0x123443210000ULL == (0xffffffff0000ULL 
                                          & vlSelf->IP_UDP_rx__DOT__IP_payload)))) {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt = 6U;
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = 2U;
            } else {
                vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = 6U;
            }
        } else if (((IData)(vlSelf->IP_UDP_rx__DOT__IP_valid) 
                    & (IData)(vlSelf->IP_UDP_rx__DOT__is_udp))) {
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = 1U;
        }
    }
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear = 0U;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
        = vlSelf->MAC_payload_rcv;
    if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
                if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum 
                            = (0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                                  >> 0x30U)));
                        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr 
                            = (0xffffU & (IData)(vlSelf->MAC_payload_rcv));
                    }
                }
                if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state)))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_len 
                            = (0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                                  >> 0x30U)));
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state)))) {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state)))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload 
                            = vlSelf->MAC_payload_rcv;
                    }
                }
            } else if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
                if (vlSelf->MAC_valid) {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload 
                        = vlSelf->MAC_payload_rcv;
                }
            } else if (vlSelf->MAC_valid) {
                if ((0xaaaaaaaaU == (((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->MAC_payload_rcv 
                                                              >> 0x30U)))))) {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload 
                        = (0xffffffffffffULL & vlSelf->MAC_payload_rcv);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state)))) {
                    if (vlSelf->MAC_valid) {
                        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->MAC_payload_rcv 
                                                          >> 0x30U)))));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
                if (vlSelf->MAC_valid) {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                        = (0xffffffffffffULL & vlSelf->MAC_payload_rcv);
                }
            }
        } else if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            if (vlSelf->MAC_valid) {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                    = (QData)((IData)((0xffffU & (IData)(vlSelf->MAC_payload_rcv))));
            }
        }
    }
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en = 0U;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp 
        = vlSelf->IP_UDP_rx__DOT__is_tcp;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp 
        = vlSelf->IP_UDP_rx__DOT__is_udp;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr 
        = (0xffffffffU == (IData)((vlSelf->MAC_payload_rcv 
                                   >> 0x10U)));
    if ((8U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state)))) {
                    vlSelf->IP_UDP_rx__DOT__IP_flush = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 0U;
        } else if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 0U;
        } else if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 0U;
        } else if ((1U & (~ (IData)(vlSelf->MAC_valid)))) {
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 0U;
        }
    } else if ((4U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
        if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 0U;
            } else if (vlSelf->MAC_valid) {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                if (((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv) 
                     >= ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len) 
                         - (IData)(0x28U)))) {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 7U;
                }
            }
        } else if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            if ((((0U == (0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                   ? 0xffffU : (0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum)) 
                 == (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum))) {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 6U;
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                if (((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv) 
                     >= ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len) 
                         - (IData)(0x28U)))) {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 7U;
                }
            } else {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 8U;
            }
        } else if (vlSelf->MAC_valid) {
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en = 1U;
            if ((0xaaaaaaaaU == (((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->MAC_payload_rcv 
                                                          >> 0x30U)))))) {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 5U;
            } else {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 8U;
            }
        }
    } else if ((2U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
        if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
            if (vlSelf->MAC_valid) {
                vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en = 1U;
                if (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr) {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 4U;
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                } else {
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 8U;
                    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en = 0U;
                }
            }
        } else if (vlSelf->MAC_valid) {
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp 
                = (6U == (0xffU & (IData)(vlSelf->MAC_payload_rcv)));
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en = 1U;
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp 
                = (0x11U == (0xffU & (IData)(vlSelf->MAC_payload_rcv)));
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate 
                = (((((0x5c8U >= (0xffffU & (IData)(
                                                    (vlSelf->MAC_payload_rcv 
                                                     >> 0x30U)))) 
                      & (0U != (0xffU & (IData)((vlSelf->MAC_payload_rcv 
                                                 >> 8U))))) 
                     & (~ (IData)((vlSelf->MAC_payload_rcv 
                                   >> 0x1fU)))) & ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp) 
                                                   | (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp)))
                    ? 3U : 8U);
        }
    } else if ((1U & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state))) {
        if (vlSelf->MAC_valid) {
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en = 1U;
            vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate 
                = ((4U == (0xfU & (IData)((vlSelf->MAC_payload_rcv 
                                           >> 0xcU))))
                    ? 2U : 8U);
        }
    } else if (vlSelf->MAC_valid) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = 1U;
    }
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum 
        = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp = 0U;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 = 0U;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2 = 0U;
    if (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp 
            = (0xfffffU & (((((0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum) 
                              + (0xffffU & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in))) 
                             + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                   >> 0x10U)))) 
                            + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                  >> 0x20U)))) 
                           + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                 >> 0x30U)))));
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 
            = (0xfffffU & ((0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp) 
                           + (0xfU & (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp 
                                      >> 0x10U))));
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2 
            = (0xfffffU & ((0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1) 
                           + (1U & (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 
                                    >> 0x10U))));
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2);
    }
}

VL_ATTR_COLD void VIP_UDP_rx___024root___eval_stl(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VIP_UDP_rx___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VIP_UDP_rx___024root___eval_triggers__stl(VIP_UDP_rx___024root* vlSelf);

VL_ATTR_COLD bool VIP_UDP_rx___024root___eval_phase__stl(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIP_UDP_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VIP_UDP_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__ico(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__act(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__nba(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIP_UDP_rx___024root___ctor_var_reset(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->MAC_valid = VL_RAND_RESET_I(1);
    vlSelf->MAC_payload_rcv = VL_RAND_RESET_Q(64);
    vlSelf->MAC_flush = VL_RAND_RESET_I(1);
    vlSelf->bytes_rcv_len = VL_RAND_RESET_I(8);
    vlSelf->UDP_valid = VL_RAND_RESET_I(1);
    vlSelf->UDP_flush = VL_RAND_RESET_I(1);
    vlSelf->UDP_payload = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_rx__DOT__IP_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__IP_flush = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_rx__DOT__is_udp = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__is_tcp = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate = VL_RAND_RESET_I(4);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in = VL_RAND_RESET_Q(64);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_len = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__test_valid = VL_RAND_RESET_I(4);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ip_version = VL_RAND_RESET_I(4);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp = VL_RAND_RESET_I(20);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 = VL_RAND_RESET_I(20);
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2 = VL_RAND_RESET_I(20);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len = VL_RAND_RESET_I(16);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
