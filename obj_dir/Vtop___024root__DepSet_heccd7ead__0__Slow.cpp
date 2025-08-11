// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__0 
        = vlSelf->top__DOT__mac_rx__DOT__mac_dest_addr;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__1 
        = vlSelf->top__DOT__mac_rx__DOT__mac_dest_addr;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__2 
        = vlSelf->top__DOT__mac_rx__DOT__mac_dest_addr;
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top.mac_rx.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    // Body
    vlSelf->top__DOT__mac_rx__DOT__crc_init = 0U;
    vlSelf->top__DOT__mac_rx__DOT__nrg = vlSelf->top__DOT__mac_rx__DOT__rg;
    vlSelf->top__DOT__mac_rx__DOT__ncrc_check = vlSelf->top__DOT__mac_rx__DOT__crc_check;
    vlSelf->top__DOT__IP_flush = 0U;
    vlSelf->top__DOT__UDP_flush = 0U;
    vlSelf->frame_end = 0U;
    vlSelf->top__DOT__mac_tx__DOT__valid = 1U;
    vlSelf->top__DOT__mac_tx__DOT__crc_init = 0U;
    vlSelf->xgmii_txd = vlSelf->top__DOT__mac_tx__DOT__xgmii_txd_l;
    vlSelf->xgmii_txc = vlSelf->top__DOT__mac_tx__DOT__xgmii_txc_l;
    vlSelf->top__DOT__mac_rx__DOT__nxgmii_rxc_frame 
        = (((IData)(vlSelf->xgmii_rxc) << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                    >> 8U)));
    vlSelf->top__DOT__ip_tx__DOT__chksum_rslt = 0U;
    vlSelf->top__DOT__udp_tx__DOT__nstate = vlSelf->top__DOT__udp_tx__DOT__current_state;
    vlSelf->top__DOT__mac_rx__DOT__nsof_lane = vlSelf->top__DOT__mac_rx__DOT__sof_lane;
    if ((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 0U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 2U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 3U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 4U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 5U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 6U;
    }
    vlSelf->top__DOT__mac_rx__DOT__nsof_found = vlSelf->top__DOT__mac_rx__DOT__sof_found;
    if ((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 7U)) 
                 & (0xfb00000000000000ULL == (0xff00000000000000ULL 
                                              & vlSelf->xgmii_rxd))))) {
        vlSelf->top__DOT__mac_rx__DOT__nsof_lane = 7U;
        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 1U;
    }
    vlSelf->top__DOT__mac_rx__DOT__nsoft_dl = vlSelf->top__DOT__mac_rx__DOT__soft_dl;
    vlSelf->top__DOT__udp_rx__DOT__next_UDP_len = vlSelf->top__DOT__udp_rx__DOT__UDP_len;
    vlSelf->top__DOT__udp_rx__DOT__next_cnt = vlSelf->top__DOT__udp_rx__DOT__cnt;
    vlSelf->top__DOT__udp_tx__DOT__next_IP_payload = 0ULL;
    if ((4U & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))) {
        vlSelf->top__DOT__udp_tx__DOT__nstate = ((2U 
                                                  & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))
                                                   ? 0U
                                                   : 2U));
        if ((1U & (~ ((IData)(vlSelf->top__DOT__udp_tx__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state)))) {
                vlSelf->top__DOT__udp_tx__DOT__next_IP_payload 
                    = vlSelf->top__DOT__UDP_payload;
            }
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))) {
        vlSelf->top__DOT__udp_tx__DOT__nstate = ((1U 
                                                  & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->protocol_last)
                                                   ? 3U
                                                   : 2U));
        if ((1U & (~ (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state)))) {
            vlSelf->top__DOT__udp_tx__DOT__next_IP_payload 
                = vlSelf->top__DOT__UDP_payload;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))) {
        vlSelf->top__DOT__udp_tx__DOT__nstate = 4U;
        vlSelf->top__DOT__udp_tx__DOT__next_IP_payload 
            = (0xffffffffffffULL & vlSelf->top__DOT__UDP_payload);
    } else if (vlSelf->top__DOT__IP_send) {
        vlSelf->top__DOT__udp_tx__DOT__nstate = 1U;
        vlSelf->top__DOT__udp_tx__DOT__next_IP_payload 
            = vlSelf->top__DOT__udp_tx__DOT__header_reg;
    }
    vlSelf->top__DOT__udp_rx__DOT__next_UDP_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__udp_rx__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
                if (vlSelf->top__DOT__IP_valid) {
                    vlSelf->top__DOT__udp_rx__DOT__next_UDP_payload 
                        = vlSelf->top__DOT__IP_payload;
                    if (((IData)(vlSelf->top__DOT__udp_rx__DOT__cnt) 
                         < (IData)(vlSelf->top__DOT__udp_rx__DOT__UDP_len))) {
                        vlSelf->top__DOT__udp_rx__DOT__next_UDP_valid = 1U;
                    }
                }
            } else if (vlSelf->top__DOT__IP_valid) {
                vlSelf->top__DOT__udp_rx__DOT__next_UDP_payload 
                    = (0xffffffffffffULL & vlSelf->top__DOT__IP_payload);
                vlSelf->top__DOT__udp_rx__DOT__next_UDP_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
            if (((IData)(vlSelf->top__DOT__IP_valid) 
                 & (0x123443210000ULL == (0xffffffff0000ULL 
                                          & vlSelf->top__DOT__IP_payload)))) {
                vlSelf->top__DOT__udp_rx__DOT__next_UDP_valid = 1U;
            }
        }
    }
    vlSelf->top__DOT__udp_rx__DOT__nstate = vlSelf->top__DOT__udp_rx__DOT__current_state;
    if ((4U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state)))) {
                vlSelf->top__DOT__UDP_flush = 1U;
            }
            if ((1U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
                vlSelf->top__DOT__udp_rx__DOT__nstate 
                    = vlSelf->top__DOT__udp_rx__DOT__current_state;
            } else if ((1U & (~ (IData)(vlSelf->top__DOT__IP_valid)))) {
                vlSelf->top__DOT__udp_rx__DOT__nstate = 0U;
            }
        } else {
            vlSelf->top__DOT__udp_rx__DOT__nstate = 
                ((1U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))
                  ? (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state)
                  : 0U);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__udp_rx__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state)))) {
                vlSelf->top__DOT__udp_rx__DOT__next_UDP_len = 0U;
                vlSelf->top__DOT__udp_rx__DOT__next_cnt = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__udp_rx__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
                if (((IData)(vlSelf->top__DOT__IP_valid) 
                     & (0x123443210000ULL == (0xffffffff0000ULL 
                                              & vlSelf->top__DOT__IP_payload)))) {
                    vlSelf->top__DOT__udp_rx__DOT__next_UDP_len 
                        = (0xffffU & (IData)(vlSelf->top__DOT__IP_payload));
                }
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
                if (vlSelf->top__DOT__IP_valid) {
                    vlSelf->top__DOT__udp_rx__DOT__next_cnt 
                        = (0xffffU & ((IData)(8U) + (IData)(vlSelf->top__DOT__udp_rx__DOT__cnt)));
                    if (((IData)(vlSelf->top__DOT__udp_rx__DOT__cnt) 
                         >= (IData)(vlSelf->top__DOT__udp_rx__DOT__UDP_len))) {
                        vlSelf->top__DOT__udp_rx__DOT__nstate = 4U;
                    }
                }
            } else if (vlSelf->top__DOT__IP_valid) {
                vlSelf->top__DOT__udp_rx__DOT__next_cnt 
                    = (0xffffU & ((IData)(8U) + (IData)(vlSelf->top__DOT__udp_rx__DOT__cnt)));
                vlSelf->top__DOT__udp_rx__DOT__nstate = 3U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__udp_rx__DOT__current_state))) {
            if (((IData)(vlSelf->top__DOT__IP_valid) 
                 & (0x123443210000ULL == (0xffffffff0000ULL 
                                          & vlSelf->top__DOT__IP_payload)))) {
                vlSelf->top__DOT__udp_rx__DOT__next_cnt = 6U;
                vlSelf->top__DOT__udp_rx__DOT__nstate = 2U;
            } else {
                vlSelf->top__DOT__udp_rx__DOT__nstate = 6U;
            }
        } else if (((IData)(vlSelf->top__DOT__IP_valid) 
                    & (IData)(vlSelf->top__DOT__is_udp_rx))) {
            vlSelf->top__DOT__udp_rx__DOT__nstate = 1U;
        }
    }
    vlSelf->top__DOT__mac_tx__DOT__IP_send_l = vlSelf->top__DOT__IP_send;
    vlSelf->top__DOT__mac_tx__DOT__nstate = vlSelf->top__DOT__mac_tx__DOT__state;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_tx__DOT__state) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_tx__DOT__state) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_tx__DOT__state) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_tx__DOT__state) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_tx__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                                vlSelf->frame_end = 1U;
                                vlSelf->top__DOT__mac_tx__DOT__valid = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->top__DOT__mac_tx__DOT__state)))) {
                                vlSelf->top__DOT__mac_tx__DOT__IP_send_l = 1U;
                                if (((IData)(vlSelf->top__DOT__IP_tx_last) 
                                     & (0x2eU > (IData)(vlSelf->top__DOT__tt_len_data)))) {
                                    vlSelf->top__DOT__mac_tx__DOT__IP_send_l = 0U;
                                } else if (vlSelf->top__DOT__IP_tx_last) {
                                    vlSelf->top__DOT__mac_tx__DOT__IP_send_l = 0U;
                                } else if (vlSelf->top__DOT__mac_tx__DOT__IP_last_dl) {
                                    vlSelf->top__DOT__mac_tx__DOT__IP_send_l = 0U;
                                }
                            }
                        }
                        if ((2U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                            if ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                                vlSelf->top__DOT__mac_tx__DOT__crc_init = 1U;
                                vlSelf->top__DOT__mac_tx__DOT__nstate = 0U;
                            } else if ((0x2eU <= (IData)(vlSelf->top__DOT__mac_tx__DOT__len_counter))) {
                                vlSelf->top__DOT__mac_tx__DOT__nstate = 5U;
                            }
                            if ((1U & (~ (IData)(vlSelf->top__DOT__mac_tx__DOT__state)))) {
                                vlSelf->top__DOT__mac_tx__DOT__nlen_counter 
                                    = (0xffffU & ((IData)(8U) 
                                                  + (IData)(vlSelf->top__DOT__mac_tx__DOT__len_counter)));
                            }
                        } else {
                            if ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                                vlSelf->top__DOT__mac_tx__DOT__crc_init = 1U;
                                vlSelf->top__DOT__mac_tx__DOT__nstate = 7U;
                            } else if (((IData)(vlSelf->top__DOT__IP_tx_last) 
                                        & (0x2eU > (IData)(vlSelf->top__DOT__tt_len_data)))) {
                                vlSelf->top__DOT__mac_tx__DOT__nstate = 6U;
                            } else if ((1U & (~ (IData)(vlSelf->top__DOT__IP_tx_last)))) {
                                if (vlSelf->top__DOT__mac_tx__DOT__IP_last_dl) {
                                    vlSelf->top__DOT__mac_tx__DOT__nstate = 5U;
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->top__DOT__mac_tx__DOT__state)))) {
                                if (((IData)(vlSelf->top__DOT__IP_tx_last) 
                                     & (0x2eU > (IData)(vlSelf->top__DOT__tt_len_data)))) {
                                    vlSelf->top__DOT__mac_tx__DOT__nlen_counter 
                                        = vlSelf->top__DOT__tt_len_data;
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_tx__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->top__DOT__mac_tx__DOT__state)))) {
                                vlSelf->top__DOT__mac_tx__DOT__crc_init = 1U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                            vlSelf->top__DOT__mac_tx__DOT__IP_send_l = 1U;
                            vlSelf->top__DOT__mac_tx__DOT__nstate 
                                = ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))
                                    ? 4U : 3U);
                        } else if ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                            vlSelf->top__DOT__mac_tx__DOT__IP_send_l = 1U;
                            vlSelf->top__DOT__mac_tx__DOT__nstate = 2U;
                        } else if (vlSelf->TX_en) {
                            vlSelf->top__DOT__mac_tx__DOT__IP_send_l = 1U;
                            vlSelf->top__DOT__mac_tx__DOT__nstate = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = vlSelf->top__DOT__mac_tx__DOT__xgmii_txc_l;
    vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l = vlSelf->top__DOT__IP_transmit;
    vlSelf->top__DOT__ip_tx__DOT__ntt_len_data = vlSelf->top__DOT__tt_len_data;
    vlSelf->top__DOT__UDP_tx_last = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__udp_tx__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->top__DOT__udp_tx__DOT__current_state))) {
                vlSelf->top__DOT__UDP_tx_last = 1U;
            }
        }
    }
    vlSelf->top__DOT__ip_tx__DOT__chk_sum_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state)))) {
                vlSelf->top__DOT__ip_tx__DOT__chksum_rslt 
                    = (0xffffU & (~ vlSelf->top__DOT__ip_tx__DOT__IPv4_chk_sum));
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
                vlSelf->top__DOT__ip_tx__DOT__chk_sum_valid = 1U;
            }
        }
    }
    vlSelf->top__DOT__ip_rx__DOT__chksum_clear = 0U;
    vlSelf->top__DOT__mac_tx__DOT__crc_out = ((IData)(vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__rx)
                                               ? vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg
                                               : (~ vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg));
    vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din 
        = ((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__sof_lane))
            ? (((IData)(vlSelf->xgmii_rxc) << 8U) | 
               (0xffU & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                         >> 8U))) : (((IData)(vlSelf->xgmii_rxc) 
                                      << 8U) | (0xffU 
                                                & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                   >> 4U))));
    vlSelf->top__DOT__mac_rx__DOT__FCS_frame_cvt = (QData)((IData)(
                                                                   ((vlSelf->top__DOT__mac_rx__DOT__FCS_frame 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (vlSelf->top__DOT__mac_rx__DOT__FCS_frame 
                                                                           << 8U)) 
                                                                       | ((0xff00U 
                                                                           & (vlSelf->top__DOT__mac_rx__DOT__FCS_frame 
                                                                              >> 8U)) 
                                                                          | (vlSelf->top__DOT__mac_rx__DOT__FCS_frame 
                                                                             >> 0x18U))))));
    vlSelf->top__DOT__MAC_payload_rcv = (((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt)))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt 
                                                                         >> 8U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt 
                                                                            >> 0x10U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt 
                                                                               >> 0x18U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt 
                                                                               >> 0x20U)) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x28U)) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x30U)) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x38U))))))))))));
    vlSelf->top__DOT__mac_rx__DOT__end_valid = 0U;
    vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 0U;
    if ((1U & (IData)(vlSelf->xgmii_rxc))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 0U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 1U) & 
               (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 1U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 2U) & 
               (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 2U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 3U) & 
               (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 3U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 4U) & 
               (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 4U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 5U) & 
               (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 5U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 6U) & 
               (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 6U;
    }
    if ((IData)((((IData)(vlSelf->xgmii_rxc) >> 7U) 
                 & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__end_valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__bytes_offset = 7U;
    }
    vlSelf->top__DOT__UDP_send = 0U;
    vlSelf->top__DOT__ip_tx__DOT__nxIP_state = vlSelf->top__DOT__ip_tx__DOT__IP_state;
    if ((4U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
            if ((1U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
                vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l = 0ULL;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__IP_send)))) {
                    vlSelf->top__DOT__ip_tx__DOT__nxIP_state = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
            vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l 
                = (QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload))));
            if (vlSelf->top__DOT__UDP_tx_last) {
                vlSelf->top__DOT__ip_tx__DOT__nxIP_state = 6U;
            }
        } else {
            vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l 
                = (QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload))));
            vlSelf->top__DOT__ip_tx__DOT__nxIP_state = 5U;
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
                vlSelf->top__DOT__UDP_send = 1U;
                if (vlSelf->top__DOT__UDP_tx_last) {
                    vlSelf->top__DOT__UDP_send = 0U;
                }
            } else {
                vlSelf->top__DOT__UDP_send = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
            vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l 
                = (0x102000000000000ULL | (0xffffffffffffULL 
                                           & (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload))))));
            vlSelf->top__DOT__ip_tx__DOT__nxIP_state = 4U;
        } else {
            vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l 
                = (0xc0a80101c0a8ULL | ((QData)((IData)(
                                                        (0xffffU 
                                                         & (~ vlSelf->top__DOT__ip_tx__DOT__IPv4_chk_sum)))) 
                                        << 0x30U));
            vlSelf->top__DOT__ip_tx__DOT__nxIP_state = 3U;
        }
        vlSelf->top__DOT__UDP_send = 1U;
    } else if ((1U & (IData)(vlSelf->top__DOT__ip_tx__DOT__IP_state))) {
        vlSelf->top__DOT__ip_tx__DOT__ntt_len_data 
            = (0xffffU & ((IData)(0x28U) + (IData)(vlSelf->UDP_len)));
        vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l 
            = (0x40004006ULL | ((QData)((IData)((1U 
                                                 | ((IData)(vlSelf->top__DOT__ip_tx__DOT__ntt_len_data) 
                                                    << 0x10U)))) 
                                << 0x20U));
        vlSelf->top__DOT__ip_tx__DOT__nxIP_state = 2U;
    } else if (vlSelf->top__DOT__IP_send) {
        vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l = 0x8004500ULL;
        vlSelf->top__DOT__ip_tx__DOT__nxIP_state = 1U;
    }
    vlSelf->top__DOT__ip_tx__DOT__temp = 0U;
    vlSelf->top__DOT__ip_tx__DOT__temp1 = 0U;
    vlSelf->top__DOT__ip_tx__DOT__temp2 = 0U;
    vlSelf->top__DOT__ip_tx__DOT__nIPv4_chk_sum = vlSelf->top__DOT__ip_tx__DOT__IPv4_chk_sum;
    if (vlSelf->top__DOT__ip_tx__DOT__chk_sum_valid) {
        vlSelf->top__DOT__ip_tx__DOT__temp = (0xfffffU 
                                              & ((IData)(0x24882U) 
                                                 + (IData)(vlSelf->UDP_len)));
        vlSelf->top__DOT__ip_tx__DOT__temp1 = (0xfffffU 
                                               & ((0xffffU 
                                                   & vlSelf->top__DOT__ip_tx__DOT__temp) 
                                                  + 
                                                  (0xfU 
                                                   & (vlSelf->top__DOT__ip_tx__DOT__temp 
                                                      >> 0x10U))));
        vlSelf->top__DOT__ip_tx__DOT__temp2 = (0xfffffU 
                                               & ((0xffffU 
                                                   & vlSelf->top__DOT__ip_tx__DOT__temp1) 
                                                  + 
                                                  (1U 
                                                   & (vlSelf->top__DOT__ip_tx__DOT__temp1 
                                                      >> 0x10U))));
        vlSelf->top__DOT__ip_tx__DOT__nIPv4_chk_sum 
            = (0x1ffffU & vlSelf->top__DOT__ip_tx__DOT__temp2);
    }
    vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = vlSelf->top__DOT__mac_tx__DOT__xgmii_txd_l;
    if ((0x40U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0ULL;
    } else if ((0x20U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0ULL;
    } else if ((0x10U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0ULL;
    } else if ((8U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0ULL;
    } else if ((4U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
                vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0xffU;
                vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0x707070707070707ULL;
            } else {
                vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
                vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0ULL;
                if ((0x2eU <= (IData)(vlSelf->top__DOT__mac_tx__DOT__len_counter))) {
                    vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0xfU;
                    vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l 
                        = (0xfd070707ULL | ((QData)((IData)(vlSelf->top__DOT__mac_tx__DOT__crc_out)) 
                                            << 0x20U));
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
            vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0xffU;
            vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0x707070707070707ULL;
        } else {
            vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
            vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l 
                = vlSelf->top__DOT__IP_transmit;
            if (((IData)(vlSelf->top__DOT__mac_tx__DOT__IP_last_dl) 
                 & (0x2eU <= (IData)(vlSelf->top__DOT__tt_len_data)))) {
                vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0xfU;
                vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l 
                    = (0xfd070707ULL | ((QData)((IData)(vlSelf->top__DOT__mac_tx__DOT__crc_out)) 
                                        << 0x20U));
            }
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l 
            = ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))
                ? vlSelf->top__DOT__IP_transmit : (0xbbffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->top__DOT__IP_transmit))));
    } else if ((1U & (IData)(vlSelf->top__DOT__mac_tx__DOT__state))) {
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0U;
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0xffffffccbbaaaaccULL;
    } else {
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0xffU;
        vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0x707070707070707ULL;
        if (vlSelf->TX_en) {
            vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = 0x80U;
            vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = 0xfb555555555555d5ULL;
        }
    }
    vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 0U;
    vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0U;
    if ((1U & (IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 1U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 1U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 2U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 2U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 3U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 3U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 4U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 4U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 5U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 5U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 6U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 6U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 7U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 7U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 8U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 8U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 9U) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 9U;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 0xaU) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0xaU;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 0xbU) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0xbU;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 0xcU) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0xcU;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 0xdU) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0xdU;
    }
    if ((1U & (((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                >> 0xeU) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0xeU;
    }
    if ((IData)((((IData)(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din) 
                  >> 0xfU) & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->top__DOT__mac_rx__DOT__FCS_offset = 0xfU;
    }
    vlSelf->top__DOT__CRC_flush = 0U;
    vlSelf->top__DOT__frame_ok = 0U;
    vlSelf->top__DOT__ip_rx__DOT__test_valid = ((3U 
                                                 & (IData)(vlSelf->top__DOT__ip_rx__DOT__test_valid)) 
                                                | (((0x5c8U 
                                                     >= 
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__MAC_payload_rcv 
                                                                 >> 0x30U)))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       == 
                                                       (0x1fffU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__MAC_payload_rcv 
                                                                   >> 0x10U)))) 
                                                      << 2U)));
    vlSelf->top__DOT__ip_rx__DOT__test_valid = ((0xcU 
                                                 & (IData)(vlSelf->top__DOT__ip_rx__DOT__test_valid)) 
                                                | (((0U 
                                                     != 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__MAC_payload_rcv 
                                                                 >> 8U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (vlSelf->top__DOT__MAC_payload_rcv 
                                                                    >> 0x1fU))))));
    vlSelf->top__DOT__ip_rx__DOT__ip_version = (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__MAC_payload_rcv 
                                                           >> 0xcU)));
    vlSelf->top__DOT__ip_rx__DOT__is_ip_version_valid 
        = (4U == (IData)(vlSelf->top__DOT__ip_rx__DOT__ip_version));
    vlSelf->top__DOT__ip_rx__DOT__ndst_addr = vlSelf->top__DOT__ip_rx__DOT__dst_addr;
    vlSelf->top__DOT__ip_rx__DOT__nIP_payload = vlSelf->top__DOT__IP_payload;
    vlSelf->top__DOT__ip_rx__DOT__chksum_in = vlSelf->top__DOT__MAC_payload_rcv;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_rx__DOT__state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_rx__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_rx__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__ip_rx__DOT__state)))) {
                    vlSelf->top__DOT__ip_rx__DOT__chksum_clear = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
                if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
                    if (vlSelf->top__DOT__MAC_valid) {
                        vlSelf->top__DOT__ip_rx__DOT__nIP_checksum 
                            = (0xffffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                  >> 0x30U)));
                        vlSelf->top__DOT__ip_rx__DOT__ndst_addr 
                            = (0xffffU & (IData)(vlSelf->top__DOT__MAC_payload_rcv));
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            if ((2U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__ip_rx__DOT__state)))) {
                    vlSelf->top__DOT__ip_rx__DOT__nIP_payload 
                        = vlSelf->top__DOT__MAC_payload_rcv;
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
                if (vlSelf->top__DOT__MAC_valid) {
                    vlSelf->top__DOT__ip_rx__DOT__nIP_payload 
                        = vlSelf->top__DOT__MAC_payload_rcv;
                }
            } else if (vlSelf->top__DOT__MAC_valid) {
                if ((0xaaaaaaaaU == (((IData)(vlSelf->top__DOT__ip_rx__DOT__dst_addr) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__MAC_payload_rcv 
                                                              >> 0x30U)))))) {
                    vlSelf->top__DOT__ip_rx__DOT__nIP_payload 
                        = (0xffffffffffffULL & vlSelf->top__DOT__MAC_payload_rcv);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_rx__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__ip_rx__DOT__state)))) {
                    if (vlSelf->top__DOT__MAC_valid) {
                        vlSelf->top__DOT__ip_rx__DOT__chksum_in 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__MAC_payload_rcv 
                                                          >> 0x30U)))));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
                if (vlSelf->top__DOT__MAC_valid) {
                    vlSelf->top__DOT__ip_rx__DOT__chksum_in 
                        = (0xffffffffffffULL & vlSelf->top__DOT__MAC_payload_rcv);
                }
            }
        }
    }
    vlSelf->top__DOT__ip_rx__DOT__nstate = vlSelf->top__DOT__ip_rx__DOT__state;
    vlSelf->top__DOT__ip_rx__DOT__chksum_en = 0U;
    vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv = vlSelf->top__DOT__ip_rx__DOT__bytes_rcv;
    vlSelf->top__DOT__ip_rx__DOT__nIP_valid = 0U;
    vlSelf->top__DOT__ip_rx__DOT__nIP_len = vlSelf->top__DOT__ip_rx__DOT__IP_len;
    vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder = vlSelf->top__DOT__IP_pseuder;
    vlSelf->top__DOT__ip_rx__DOT__next_is_tcp = vlSelf->top__DOT__is_tcp_rx;
    vlSelf->top__DOT__ip_rx__DOT__next_is_udp = vlSelf->top__DOT__is_udp_rx;
    vlSelf->top__DOT__ip_rx__DOT__is_src_addr = (0xffffffffU 
                                                 == (IData)(
                                                            (vlSelf->top__DOT__MAC_payload_rcv 
                                                             >> 0x10U)));
    vlSelf->top__DOT__ip_rx__DOT__nIP_bytes_rcv_len 
        = vlSelf->top__DOT__mac_rx__DOT__bytes_rcv;
    vlSelf->top__DOT__ip_rx__DOT__nIP_last = 0U;
    if (vlSelf->top__DOT__MAC_valid) {
        vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv = 
            (0xffffU & ((IData)(vlSelf->top__DOT__ip_rx__DOT__bytes_rcv) 
                        + (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_rcv)));
    }
    if ((8U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_rx__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__ip_rx__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__ip_rx__DOT__state)))) {
                    vlSelf->top__DOT__IP_flush = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            vlSelf->top__DOT__ip_rx__DOT__nstate = 0U;
        } else if ((2U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            vlSelf->top__DOT__ip_rx__DOT__nstate = 0U;
        } else if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            vlSelf->top__DOT__ip_rx__DOT__nstate = 0U;
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__MAC_valid)))) {
            vlSelf->top__DOT__ip_rx__DOT__nstate = 0U;
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
                vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv = 0U;
                vlSelf->top__DOT__ip_rx__DOT__nIP_valid = 0U;
                vlSelf->top__DOT__ip_rx__DOT__nstate = 0U;
            } else {
                vlSelf->top__DOT__ip_rx__DOT__nIP_valid = 1U;
                if (((IData)(vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv) 
                     >= (IData)(vlSelf->top__DOT__ip_rx__DOT__IP_len))) {
                    vlSelf->top__DOT__ip_rx__DOT__nIP_last = 1U;
                    vlSelf->top__DOT__ip_rx__DOT__nIP_bytes_rcv_len 
                        = (0xffU & ((IData)(vlSelf->top__DOT__ip_rx__DOT__IP_len) 
                                    - (IData)(vlSelf->top__DOT__ip_rx__DOT__bytes_rcv)));
                    vlSelf->top__DOT__ip_rx__DOT__nstate = 7U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            if (((0xffffU & (~ ((0U == (0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))
                                 ? 0xffffU : vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))) 
                 == (IData)(vlSelf->top__DOT__ip_rx__DOT__IP_checksum))) {
                vlSelf->top__DOT__ip_rx__DOT__nstate = 6U;
                vlSelf->top__DOT__ip_rx__DOT__nIP_valid = 1U;
                if (((IData)(vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv) 
                     >= (IData)(vlSelf->top__DOT__ip_rx__DOT__IP_len))) {
                    vlSelf->top__DOT__ip_rx__DOT__nIP_last = 1U;
                    vlSelf->top__DOT__ip_rx__DOT__nIP_bytes_rcv_len 
                        = (0xffU & ((IData)(vlSelf->top__DOT__ip_rx__DOT__IP_len) 
                                    - (IData)(vlSelf->top__DOT__ip_rx__DOT__bytes_rcv)));
                    vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv 
                        = (0xffffU & ((IData)(vlSelf->top__DOT__ip_rx__DOT__bytes_rcv) 
                                      + ((IData)(vlSelf->top__DOT__ip_rx__DOT__IP_len) 
                                         - (IData)(vlSelf->top__DOT__ip_rx__DOT__bytes_rcv))));
                    vlSelf->top__DOT__ip_rx__DOT__nstate = 7U;
                }
            } else {
                vlSelf->top__DOT__ip_rx__DOT__nstate = 8U;
            }
        } else if (vlSelf->top__DOT__MAC_valid) {
            vlSelf->top__DOT__ip_rx__DOT__chksum_en = 1U;
            vlSelf->top__DOT__ip_rx__DOT__temp = (0xfffffU 
                                                  & ((0xffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__MAC_payload_rcv 
                                                                 >> 0x30U))) 
                                                     + (IData)(vlSelf->top__DOT__IP_pseuder)));
            if ((0xaaaaaaaaU == (((IData)(vlSelf->top__DOT__ip_rx__DOT__dst_addr) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__MAC_payload_rcv 
                                                          >> 0x30U)))))) {
                vlSelf->top__DOT__ip_rx__DOT__nIP_valid = 1U;
                vlSelf->top__DOT__ip_rx__DOT__nstate = 5U;
            } else {
                vlSelf->top__DOT__ip_rx__DOT__nstate = 8U;
            }
            vlSelf->top__DOT__ip_rx__DOT__temp = (0xfffffU 
                                                  & ((0xffffU 
                                                      & vlSelf->top__DOT__ip_rx__DOT__temp) 
                                                     + 
                                                     (0xfU 
                                                      & (vlSelf->top__DOT__ip_rx__DOT__temp 
                                                         >> 0x10U))));
            vlSelf->top__DOT__ip_rx__DOT__temp = (0xfffffU 
                                                  & ((0xffffU 
                                                      & vlSelf->top__DOT__ip_rx__DOT__temp) 
                                                     + 
                                                     (1U 
                                                      & (vlSelf->top__DOT__ip_rx__DOT__temp 
                                                         >> 0x10U))));
            vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder 
                = (0xffffU & vlSelf->top__DOT__ip_rx__DOT__temp);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
        if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
            if (vlSelf->top__DOT__MAC_valid) {
                vlSelf->top__DOT__ip_rx__DOT__chksum_en = 1U;
                vlSelf->top__DOT__ip_rx__DOT__temp 
                    = (0xfffffU & ((((0xffffU & (IData)(
                                                        (vlSelf->top__DOT__MAC_payload_rcv 
                                                         >> 0x20U))) 
                                     + (0xffffU & (IData)(
                                                          (vlSelf->top__DOT__MAC_payload_rcv 
                                                           >> 0x10U)))) 
                                    + (0xffffU & (IData)(vlSelf->top__DOT__MAC_payload_rcv))) 
                                   + (IData)(vlSelf->top__DOT__IP_pseuder)));
                vlSelf->top__DOT__ip_rx__DOT__temp 
                    = (0xfffffU & ((0xffffU & vlSelf->top__DOT__ip_rx__DOT__temp) 
                                   + (0xfU & (vlSelf->top__DOT__ip_rx__DOT__temp 
                                              >> 0x10U))));
                if (vlSelf->top__DOT__ip_rx__DOT__is_src_addr) {
                    vlSelf->top__DOT__ip_rx__DOT__nstate = 4U;
                    vlSelf->top__DOT__ip_rx__DOT__nIP_valid = 1U;
                } else {
                    vlSelf->top__DOT__ip_rx__DOT__nstate = 8U;
                    vlSelf->top__DOT__ip_rx__DOT__chksum_en = 0U;
                }
                vlSelf->top__DOT__ip_rx__DOT__temp 
                    = (0xfffffU & ((0xffffU & vlSelf->top__DOT__ip_rx__DOT__temp) 
                                   + (1U & (vlSelf->top__DOT__ip_rx__DOT__temp 
                                            >> 0x10U))));
                vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder 
                    = (0xffffU & vlSelf->top__DOT__ip_rx__DOT__temp);
            }
        } else if (vlSelf->top__DOT__MAC_valid) {
            vlSelf->top__DOT__ip_rx__DOT__nIP_len = 
                (0xffffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                    >> 0x30U)));
            vlSelf->top__DOT__ip_rx__DOT__chksum_en = 1U;
            vlSelf->top__DOT__ip_rx__DOT__next_is_tcp 
                = (6U == (0xffU & (IData)(vlSelf->top__DOT__MAC_payload_rcv)));
            vlSelf->top__DOT__ip_rx__DOT__next_is_udp 
                = (0x11U == (0xffU & (IData)(vlSelf->top__DOT__MAC_payload_rcv)));
            if (((((0x5c8U >= (0xffffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                  >> 0x30U)))) 
                   & (0U != (0xffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                              >> 8U))))) 
                  & (~ (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                >> 0x1fU)))) & ((IData)(vlSelf->top__DOT__ip_rx__DOT__next_is_tcp) 
                                                | (IData)(vlSelf->top__DOT__ip_rx__DOT__next_is_udp)))) {
                vlSelf->top__DOT__ip_rx__DOT__nstate = 3U;
                vlSelf->top__DOT__ip_rx__DOT__temp 
                    = (0xfffffU & (((0xffU & (IData)(vlSelf->top__DOT__MAC_payload_rcv)) 
                                    + (IData)(vlSelf->top__DOT__ip_rx__DOT__nIP_len)) 
                                   - (IData)(vlSelf->top__DOT__IP_pseuder)));
                vlSelf->top__DOT__ip_rx__DOT__temp 
                    = (0xfffffU & ((0xffffU & vlSelf->top__DOT__ip_rx__DOT__temp) 
                                   + (0xfU & (vlSelf->top__DOT__ip_rx__DOT__temp 
                                              >> 0x10U))));
                vlSelf->top__DOT__ip_rx__DOT__temp 
                    = (0xfffffU & ((0xffffU & vlSelf->top__DOT__ip_rx__DOT__temp) 
                                   + (1U & (vlSelf->top__DOT__ip_rx__DOT__temp 
                                            >> 0x10U))));
                vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder 
                    = (0xffffU & vlSelf->top__DOT__ip_rx__DOT__temp);
            } else {
                vlSelf->top__DOT__ip_rx__DOT__nstate = 8U;
            }
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__ip_rx__DOT__state))) {
        if (vlSelf->top__DOT__MAC_valid) {
            vlSelf->top__DOT__ip_rx__DOT__chksum_en = 1U;
            if ((4U == (0xfU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                        >> 0xcU))))) {
                vlSelf->top__DOT__ip_rx__DOT__nstate = 2U;
                vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder 
                    = (0xffffU & VL_SHIFTL_III(16,16,32, 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__MAC_payload_rcv 
                                                           >> 8U))), 2U));
            } else {
                vlSelf->top__DOT__ip_rx__DOT__nstate = 8U;
            }
        }
    } else if (vlSelf->top__DOT__MAC_valid) {
        vlSelf->top__DOT__ip_rx__DOT__nstate = 1U;
    }
    vlSelf->top__DOT__mac_rx__DOT__byte_END = (0xffU 
                                               & (IData)(
                                                         (vlSelf->xgmii_rxd 
                                                          >> 
                                                          (0x3fU 
                                                           & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset), 3U)))));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffffffeU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (1U & (VL_REDXOR_32((0x481b4e5aU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                    ^ VL_REDXOR_64((0x4d101df481b4e5aULL 
                                    & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l)))));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffffffdU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (2U & ((VL_REDXOR_32((0x90369cb5U & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                     ^ VL_REDXOR_64((0x9a203be90369cb5ULL 
                                     & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                    << 1U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffffffbU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (4U & ((VL_REDXOR_32((0x206d396bU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                     ^ VL_REDXOR_64((0x1344077d206d396bULL 
                                     & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                    << 2U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffffff7U & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (8U & ((VL_REDXOR_32((0x40da72d7U & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                     ^ VL_REDXOR_64((0x26880efa40da72d7ULL 
                                     & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                    << 3U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffffffefU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x10U & ((VL_REDXOR_32((0x81b4e5afU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x4d101df481b4e5afULL 
                                        & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                       << 4U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffffffdfU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x20U & ((VL_REDXOR_32((0x369cb5eU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x9a203be90369cb5eULL 
                                        & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                       << 5U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffffffbfU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x40U & ((VL_REDXOR_32((0x4ec8d8e6U & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x3091760d4ec8d8e6ULL 
                                        & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                       << 6U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffffff7fU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x80U & ((VL_REDXOR_32((0x9d91b1cdU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x6122ec1a9d91b1cdULL 
                                        & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                       << 7U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffffeffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x100U & ((VL_REDXOR_32((0x3b23639aU 
                                       & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0xc245d8353b23639aULL 
                                         & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                        << 8U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffffdffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x200U & ((VL_REDXOR_32((0x3e5d896eU 
                                       & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x805ab1b53e5d896eULL 
                                         & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                        << 9U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffffbffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x400U & ((VL_REDXOR_32((0x34a05c86U 
                                       & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x46462b534a05c86ULL 
                                         & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                        << 0xaU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffff7ffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x800U & ((VL_REDXOR_32((0x6940b90cU 
                                       & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x8c8c56a6940b90cULL 
                                         & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                        << 0xbU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffffefffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x1000U & ((VL_REDXOR_32((0xd2817218U 
                                        & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x11918ad4d2817218ULL 
                                          & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                         << 0xcU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffffdfffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x2000U & ((VL_REDXOR_32((0xa502e430U 
                                        & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x232315a9a502e430ULL 
                                          & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                         << 0xdU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffffbfffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x4000U & ((VL_REDXOR_32((0x4a05c860U 
                                        & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x46462b534a05c860ULL 
                                          & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                         << 0xeU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffff7fffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x8000U & ((VL_REDXOR_32((0x940b90c0U 
                                        & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x8c8c56a6940b90c0ULL 
                                          & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                         << 0xfU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffeffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x10000U & ((VL_REDXOR_32((0x600c6fdaU 
                                         & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x1dc9ac92600c6fdaULL 
                                           & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                          << 0x10U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffdffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x20000U & ((VL_REDXOR_32((0xc018dfb5U 
                                         & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x3b935924c018dfb5ULL 
                                           & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                          << 0x11U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfffbffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x40000U & ((VL_REDXOR_32((0x8031bf6aU 
                                         & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x7726b2498031bf6aULL 
                                           & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                          << 0x12U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfff7ffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x80000U & ((VL_REDXOR_32((0x637ed5U 
                                         & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xee4d649300637ed5ULL 
                                           & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                          << 0x13U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffefffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x100000U & ((VL_REDXOR_32((0x48ddb3f0U 
                                          & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xd84bc8f948ddb3f0ULL 
                                            & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                           << 0x14U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffdfffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x200000U & ((VL_REDXOR_32((0xd9a029bbU 
                                          & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xb446902dd9a029bbULL 
                                            & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                           << 0x15U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xffbfffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x400000U & ((VL_REDXOR_32((0xfb5b1d2cU 
                                          & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0x6c5c2184fb5b1d2cULL 
                                            & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                           << 0x16U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xff7fffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x800000U & ((VL_REDXOR_32((0xf6b63a59U 
                                          & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xd8b84309f6b63a59ULL 
                                            & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                           << 0x17U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfeffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x1000000U & ((VL_REDXOR_32((0xa5773ae8U 
                                           & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0xb5a187cca5773ae8ULL 
                                             & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                            << 0x18U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfdffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x2000000U & ((VL_REDXOR_32((0x2f53b8aU 
                                           & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0x6f920e4602f53b8aULL 
                                             & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                            << 0x19U)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xfbffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x4000000U & ((VL_REDXOR_32((0x5ea7715U 
                                           & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0xdf241c8c05ea7715ULL 
                                             & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xf7ffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x8000000U & ((VL_REDXOR_32((0x43cfa071U 
                                           & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0xba9938c743cfa071ULL 
                                             & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xefffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x10000000U & ((VL_REDXOR_32((0xcf840eb8U 
                                            & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                              ^ VL_REDXOR_64((0x71e37051cf840eb8ULL 
                                              & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xdfffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x20000000U & ((VL_REDXOR_32((0x9f081d70U 
                                            & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                              ^ VL_REDXOR_64((0xe3c6e0a39f081d70ULL 
                                              & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0xbfffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | (0x40000000U & ((VL_REDXOR_32((0x760b74bbU 
                                            & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
                              ^ VL_REDXOR_64((0xc35cc098760b74bbULL 
                                              & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc 
        = ((0x7fffffffU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc) 
           | ((VL_REDXOR_32((0xa40da72dU & vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg)) 
               ^ VL_REDXOR_64((0x826880efa40da72dULL 
                               & vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l))) 
              << 0x1fU));
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__nTCP_checksum 
        = vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum;
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp = 0U;
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1 = 0U;
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp2 = 0U;
    if (vlSelf->top__DOT__ip_rx__DOT__chksum_clear) {
        vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->top__DOT__ip_rx__DOT__chksum_en) {
        vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp 
            = (0xfffffU & (((((0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum) 
                              + (0xffffU & (IData)(vlSelf->top__DOT__ip_rx__DOT__chksum_in))) 
                             + (0xffffU & (IData)((vlSelf->top__DOT__ip_rx__DOT__chksum_in 
                                                   >> 0x10U)))) 
                            + (0xffffU & (IData)((vlSelf->top__DOT__ip_rx__DOT__chksum_in 
                                                  >> 0x20U)))) 
                           + (0xffffU & (IData)((vlSelf->top__DOT__ip_rx__DOT__chksum_in 
                                                 >> 0x30U)))));
        vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1 
            = (0xfffffU & ((0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp) 
                           + (0xfU & (vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp 
                                      >> 0x10U))));
        vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp2 
            = (0xfffffU & ((0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1) 
                           + (1U & (vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1 
                                    >> 0x10U))));
        vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp2);
    }
    vlSelf->top__DOT__mac_rx__DOT__ncrc_delay = 0U;
    vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv_dl = vlSelf->top__DOT__mac_rx__DOT__bytes_rcv_dl;
    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                   >> 0x20U));
    vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] 
        = (IData)(vlSelf->xgmii_rxd);
    vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] 
        = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    vlSelf->top__DOT__mac_rx__DOT__nFCS_frame = vlSelf->top__DOT__mac_rx__DOT__FCS_frame;
    if ((0U != (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                if ((3U != (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                    if ((4U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                        vlSelf->top__DOT__mac_rx__DOT__nsof_found = 0U;
                        if (((~ vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__crc_reg) 
                             != (IData)(vlSelf->top__DOT__mac_rx__DOT__FCS_frame_cvt))) {
                            vlSelf->top__DOT__CRC_flush = 1U;
                        }
                        if (((~ vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__crc_reg) 
                             == (IData)(vlSelf->top__DOT__mac_rx__DOT__FCS_frame_cvt))) {
                            vlSelf->top__DOT__frame_ok = 1U;
                        }
                    }
                }
                if ((3U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                    if (((IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid) 
                         & (0xfdU == (IData)(vlSelf->top__DOT__mac_rx__DOT__byte_END)))) {
                        if ((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__sof_lane))) {
                            if ((5U <= (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                vlSelf->top__DOT__mac_rx__DOT__ncrc_delay = 1U;
                                vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset) 
                                                - (IData)(3U)));
                                if ((5U == (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((6U == (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((7U == (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                }
                            }
                            if ((5U > (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                vlSelf->top__DOT__mac_rx__DOT__case_debug = 1U;
                            }
                        } else {
                            vlSelf->top__DOT__mac_rx__DOT__ncrc_delay = 1U;
                            vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv_dl 
                                = (0xffU & ((IData)(4U) 
                                            + ((IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset) 
                                               - (IData)(4U))));
                            if ((4U & (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                if ((2U & (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                    if ((1U & (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    } else {
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] = 0U;
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                if ((1U & (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__mac_rx__DOT__frame_store[2U])))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__mac_rx__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__mac_rx__DOT__frame_store[2U])))));
                                    vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__mac_rx__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                }
                                vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] = 0U;
                                vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] = 0U;
                            } else if ((1U & (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                vlSelf->top__DOT__mac_rx__DOT__nframe_store[0U] 
                                    = (IData)((0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[2U])))));
                                vlSelf->top__DOT__mac_rx__DOT__nframe_store[1U] 
                                    = (IData)(((0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[2U])))) 
                                               >> 0x20U));
                                vlSelf->top__DOT__mac_rx__DOT__nframe_store[2U] = 0U;
                                vlSelf->top__DOT__mac_rx__DOT__nframe_store[3U] = 0U;
                            }
                        }
                        __Vtemp_19[0U] = (IData)((((QData)((IData)(
                                                                   vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
                        __Vtemp_19[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                                                  >> 0x20U));
                        __Vtemp_19[2U] = (IData)(vlSelf->xgmii_rxd);
                        __Vtemp_19[3U] = (IData)((vlSelf->xgmii_rxd 
                                                  >> 0x20U));
                        VL_SHIFTR_WWI(128,128,32, __Vtemp_20, __Vtemp_19, 
                                      VL_SHIFTL_III(32,32,32, 
                                                    ((IData)(vlSelf->top__DOT__mac_rx__DOT__FCS_offset) 
                                                     - (IData)(4U)), 3U));
                        vlSelf->top__DOT__mac_rx__DOT__nFCS_frame 
                            = __Vtemp_20[0U];
                    }
                    if (vlSelf->top__DOT__mac_rx__DOT__crc_delay) {
                        vlSelf->top__DOT__mac_rx__DOT__nFCS_frame 
                            = vlSelf->top__DOT__mac_rx__DOT__FCS_frame;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__mac_rx__DOT__ncrc_valid = vlSelf->top__DOT__mac_rx__DOT__crc_valid;
    if ((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
        vlSelf->top__DOT__mac_rx__DOT__crc_init = 1U;
        if (vlSelf->top__DOT__mac_rx__DOT__sof_found) {
            if ((4U == (IData)(vlSelf->top__DOT__mac_rx__DOT__sof_lane))) {
                vlSelf->top__DOT__mac_rx__DOT__nsoft_dl = 1U;
            }
            if ((4U != (IData)(vlSelf->top__DOT__mac_rx__DOT__sof_lane))) {
                vlSelf->top__DOT__mac_rx__DOT__ncrc_valid = 1U;
            }
        }
        if (vlSelf->top__DOT__mac_rx__DOT__soft_dl) {
            vlSelf->top__DOT__mac_rx__DOT__ncrc_valid = 1U;
        }
    } else {
        if ((1U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
            vlSelf->top__DOT__mac_rx__DOT__crc_init = 0U;
        }
        if ((1U != (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                if ((3U != (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                    if ((4U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                        vlSelf->top__DOT__mac_rx__DOT__nsoft_dl = 0U;
                    }
                }
                if ((3U == (IData)(vlSelf->top__DOT__mac_rx__DOT__state))) {
                    if (((IData)(vlSelf->top__DOT__mac_rx__DOT__end_valid) 
                         & (0xfdU == (IData)(vlSelf->top__DOT__mac_rx__DOT__byte_END)))) {
                        if ((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__sof_lane))) {
                            if ((5U > (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset))) {
                                vlSelf->top__DOT__mac_rx__DOT__ncrc_valid = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset)))) {
                                    vlSelf->top__DOT__mac_rx__DOT__ncrc_valid = 0U;
                                }
                            }
                        }
                    }
                    if (vlSelf->top__DOT__mac_rx__DOT__crc_delay) {
                        vlSelf->top__DOT__mac_rx__DOT__ncrc_valid = 0U;
                    }
                }
            }
        }
    }
}

void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] top.mac_rx.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] top.mac_rx.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] top.mac_rx.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->TX_en = VL_RAND_RESET_I(1);
    vlSelf->UDP_len = VL_RAND_RESET_I(16);
    vlSelf->xgmii_txd = VL_RAND_RESET_Q(64);
    vlSelf->xgmii_txc = VL_RAND_RESET_I(8);
    vlSelf->frame_end = VL_RAND_RESET_I(1);
    vlSelf->xgmii_rxd = VL_RAND_RESET_Q(64);
    vlSelf->xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->protocol_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IP_send = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IP_tx_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IP_transmit = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__tt_len_data = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__TCP_send = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__TCP_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__TCP_tx_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__TCP_len_data = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__TCP_transmit = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IP_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IP_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IP_rx_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IP_pseuder = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__TCP_len = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__IP_bytes_rcv_len = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__protocol_data_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAC_payload_rcv = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MAC_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CRC_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__frame_ok = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_udp_rx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_tcp_rx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UDP_payload = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__nw_segment = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__TCP_rx_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__TCP_flush_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis_data_rx_int = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__handshake_done_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__seq_rcv_start_int = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wr_pfifo_en_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wr_pfifo_offset_int = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__wr_ptr_out_int = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__wr_pfifo_len_int = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__rd_pfifo_valid_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rd_pfifo_ptr_int = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__rd_pfifo_len_int = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__rd_pfifo_en_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__seq_rx_FIFO_rd_int = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rd_ftx_en_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rd_ftx_payload_int = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rd_ftx_valid_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rd_ftx_last_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bytes_abt_sent_int = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ACK_num_int = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ACK_rcv_flag_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__out_order_req_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__TCP_stop_flg_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__end_ss_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__re_trans_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__checksum_re_trans_int = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__seq_up = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__seq_num_tx = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__checksum_TX = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UDP_tx_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UDP_tx_send = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__udp_tx__IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__UDP_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UDP_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UDP_send = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__crc_init = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__end_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__crc_in_big = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_rx__DOT__nxgmii_rxc_frame = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_rx__DOT__bytes_offset = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mac_rx__DOT__end_FCS = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mac_rx__DOT__str_FCS = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mac_rx__DOT__sof_found = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__crc_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__nsof_found = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__sof_lane = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mac_rx__DOT__nsof_lane = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_rx__DOT__nxgmii_rxd_f = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_MSB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_f = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__nxgmii_rxc_f = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_MSB = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__FCS_rxc = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_rx__DOT__FCS_offset = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mac_rx__DOT__crc_check = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_rx__DOT__ncrc_check = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mac_rx__DOT__frame_store);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mac_rx__DOT__nframe_store);
    vlSelf->top__DOT__mac_rx__DOT__crc_ind = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_rx__DOT__ncrc_ind = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_rx__DOT__byte_END = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__FCS_frame = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_rx__DOT__nFCS_frame = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_rx__DOT__rg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_rx__DOT__nrg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_rx__DOT__FCS_frame_cvt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_rx__DOT__crc_delay = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__ncrc_delay = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__ncrc_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__soft_dl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__nsoft_dl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__case_debug = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_rx__DOT__nMAC_payload_rcv_cvrt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_rx__DOT__bytes_rcv = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__bytes_rcv_dl = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv_dl = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__nMAC_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_rx__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mac_rx__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mac_rx__DOT__mac_dest_addr = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mac_rx__DOT__temp);
    vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__crc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__next_crc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ip_rx__DOT__nstate = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ip_rx__DOT__IP_checksum = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__nIP_checksum = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__nIP_payload = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ip_rx__DOT__bytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__chksum_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__chksum_clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__chksum_in = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ip_rx__DOT__dst_addr = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__ndst_addr = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__IP_len = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__nIP_len = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__nIP_bytes_rcv_len = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_rx__DOT__temp = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__ip_rx__DOT__nIP_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__nIP_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__next_is_udp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__next_is_tcp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__test_valid = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ip_rx__DOT__ip_version = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ip_rx__DOT__is_src_addr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__is_ip_version_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__nTCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1 = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp2 = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__udp_rx__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__udp_rx__DOT__next_cnt = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__udp_rx__DOT__UDP_len = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__udp_rx__DOT__next_UDP_len = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__udp_rx__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__udp_rx__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__udp_rx__DOT__next_UDP_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__udp_rx__DOT__next_UDP_payload = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_tx__DOT__xgmii_txd_l = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mac_tx__DOT__xgmii_txc_l = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mac_tx__DOT__IP_send_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_tx__DOT__state = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__mac_tx__DOT__nstate = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__mac_tx__DOT__crc_init = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_tx__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_tx__DOT__nvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_tx__DOT__IP_last_dl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_tx__DOT__crc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_tx__DOT__len_counter = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_tx__DOT__nlen_counter = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ip_tx__DOT__IP_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ip_tx__DOT__nxIP_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ip_tx__DOT__chk_sum_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ip_tx__DOT__temp = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__ip_tx__DOT__temp1 = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__ip_tx__DOT__temp2 = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__ip_tx__DOT__IPv4_chk_sum = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__ip_tx__DOT__nIPv4_chk_sum = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__ip_tx__DOT__ntt_len_data = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ip_tx__DOT__chksum_rslt = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__udp_tx__DOT__next_IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__udp_tx__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__udp_tx__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__udp_tx__DOT__computed_len = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__udp_tx__DOT__header_reg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__0 = VL_RAND_RESET_Q(48);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__1 = VL_RAND_RESET_Q(48);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__2 = VL_RAND_RESET_Q(48);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
