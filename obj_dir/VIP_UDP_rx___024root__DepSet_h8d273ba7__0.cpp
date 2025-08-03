// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_UDP_rx.h for the primary calling header

#include "VIP_UDP_rx__pch.h"
#include "VIP_UDP_rx___024root.h"

VL_INLINE_OPT void VIP_UDP_rx___024root___ico_sequent__TOP__0(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___ico_sequent__TOP__0\n"); );
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
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload 
        = vlSelf->IP_UDP_rx__DOT__IP_payload;
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
            if (((0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum) 
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
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    if (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum 
            = (0x1ffffU & ((((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum 
                              + (0xffffU & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in))) 
                             + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                   >> 0x10U)))) 
                            + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                  >> 0x20U)))) 
                           + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                 >> 0x30U)))));
    }
}

void VIP_UDP_rx___024root___eval_ico(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VIP_UDP_rx___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VIP_UDP_rx___024root___eval_triggers__ico(VIP_UDP_rx___024root* vlSelf);

bool VIP_UDP_rx___024root___eval_phase__ico(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VIP_UDP_rx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VIP_UDP_rx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VIP_UDP_rx___024root___eval_act(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_act\n"); );
}

VL_INLINE_OPT void VIP_UDP_rx___024root___nba_sequent__TOP__0(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->nRST) {
        if (((IData)(vlSelf->UDP_flush) | (IData)(vlSelf->IP_UDP_rx__DOT__IP_flush))) {
            vlSelf->UDP_payload = 0ULL;
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt = 0U;
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len = 0U;
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state = 0U;
        } else {
            vlSelf->UDP_payload = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload;
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt 
                = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt;
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len 
                = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len;
            vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state 
                = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate;
        }
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum 
            = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv 
            = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum 
            = (0x1ffffU & ((0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum) 
                           + (1U & (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum 
                                    >> 0x10U))));
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len 
            = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_len;
        vlSelf->IP_UDP_rx__DOT__IP_payload = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr 
            = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state 
            = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate;
    } else {
        vlSelf->UDP_payload = 0ULL;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum = 0U;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv = 0U;
        vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt = 0U;
        vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len = 0U;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum = 0U;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len = 0U;
        vlSelf->IP_UDP_rx__DOT__IP_payload = 0ULL;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr = 0U;
        vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state = 0U;
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state = 0U;
    }
    vlSelf->UDP_valid = ((IData)(vlSelf->nRST) && (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->UDP_flush) 
                                                        | (IData)(vlSelf->IP_UDP_rx__DOT__IP_flush)))) 
                                                   && (IData)(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid)));
    vlSelf->IP_UDP_rx__DOT__is_tcp = ((IData)(vlSelf->nRST) 
                                      && (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp));
    vlSelf->IP_UDP_rx__DOT__IP_valid = ((IData)(vlSelf->nRST) 
                                        && (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid));
    vlSelf->IP_UDP_rx__DOT__is_udp = ((IData)(vlSelf->nRST) 
                                      && (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp));
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv 
        = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv;
    if (vlSelf->MAC_valid) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv 
            = (0xffffU & ((IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv) 
                          + (IData)(vlSelf->bytes_rcv_len)));
    }
    vlSelf->UDP_flush = 0U;
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len 
        = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len;
    vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt 
        = vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt;
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
    vlSelf->IP_UDP_rx__DOT__IP_flush = 0U;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr 
        = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_len = vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len;
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload 
        = vlSelf->IP_UDP_rx__DOT__IP_payload;
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
            if (((0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum) 
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
    vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    if (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en) {
        vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum 
            = (0x1ffffU & ((((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum 
                              + (0xffffU & (IData)(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in))) 
                             + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                   >> 0x10U)))) 
                            + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                  >> 0x20U)))) 
                           + (0xffffU & (IData)((vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in 
                                                 >> 0x30U)))));
    }
}

void VIP_UDP_rx___024root___eval_nba(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIP_UDP_rx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VIP_UDP_rx___024root___eval_triggers__act(VIP_UDP_rx___024root* vlSelf);

bool VIP_UDP_rx___024root___eval_phase__act(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIP_UDP_rx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIP_UDP_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIP_UDP_rx___024root___eval_phase__nba(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIP_UDP_rx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__ico(VIP_UDP_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__nba(VIP_UDP_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__act(VIP_UDP_rx___024root* vlSelf);
#endif  // VL_DEBUG

void VIP_UDP_rx___024root___eval(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval\n"); );
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
            VIP_UDP_rx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_UDP_rx.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VIP_UDP_rx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIP_UDP_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_UDP_rx.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIP_UDP_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/IP_UDP_rx.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIP_UDP_rx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIP_UDP_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIP_UDP_rx___024root___eval_debug_assertions(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->nRST & 0xfeU))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY((vlSelf->MAC_valid & 0xfeU))) {
        Verilated::overWidthError("MAC_valid");}
    if (VL_UNLIKELY((vlSelf->MAC_flush & 0xfeU))) {
        Verilated::overWidthError("MAC_flush");}
}
#endif  // VL_DEBUG
