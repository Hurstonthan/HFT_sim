// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_rx.h"
#include "Vether_simulation_chksum_tcp_pl.h"

VL_INLINE_OPT void Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__svr_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__chksum_inst->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__chksum_inst->__PVT__CLK = vlSelfRef.__PVT__CLK;
}

VL_INLINE_OPT void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chksum_pl = vlSelf->__PVT__chksum_inst->__PVT__TCP_checksum_pl;
}

VL_INLINE_OPT void Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__svr_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelfRef.__PVT__chksum_en = 0U;
    vlSelfRef.__PVT__chksum_in = vlSelfRef.__PVT__MAC_payload_rcv;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__ndst_addr = vlSelfRef.__PVT__dst_addr;
    vlSelfRef.__PVT__nIP_valid = 0U;
    vlSelfRef.__PVT__chksum_clear = 0U;
    vlSelfRef.__PVT__chksum_final = VL_EXTEND_II(17,16, (IData)(vlSelfRef.__PVT__chksum_pl));
    vlSelfRef.__PVT__nIP_len = vlSelfRef.__PVT__IP_len;
    vlSelfRef.__PVT__nIP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    vlSelfRef.__PVT__next_is_tcp = vlSelfRef.__PVT__is_tcp;
    vlSelfRef.__PVT__next_is_udp = vlSelfRef.__PVT__is_udp;
    vlSelfRef.__PVT__total_len = (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U));
    vlSelfRef.__PVT__frags_flag = (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0x10U));
    vlSelfRef.__PVT__ttl = (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 8U));
    vlSelfRef.__PVT__flags = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x1dU, 3U));
    vlSelfRef.__PVT__fragoff = (0x1fffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0xdU));
    VL_ASSIGNSEL_II(4,2,2U, vlSelfRef.__PVT__test_valid, 
                    VL_CONCAT_III(2,1,1, (0x5c8U >= 
                                          (0xffffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))), 
                                  (0U == (0x1fffU & 
                                          VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0xdU)))));
    VL_ASSIGNSEL_II(4,2,0U, vlSelfRef.__PVT__test_valid, 
                    VL_CONCAT_III(2,1,1, (0U != (0xffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 8U))), 
                                  (1U & (~ VL_BITSEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x1fU)))));
    vlSelfRef.__PVT__ip_version = (0xfU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0xcU, 4U));
    vlSelfRef.__PVT__IP_flush = 0U;
    vlSelfRef.__PVT__is_src_addr = (0xc0a80101U == 
                                    VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0x20U));
    vlSelfRef.__PVT__is_ip_version_valid = (4U == (IData)(vlSelfRef.__PVT__ip_version));
    vlSelfRef.__PVT__nIP_bytes_rcv_len = vlSelfRef.__PVT__bytes_rcv_len;
    vlSelfRef.__PVT__nIP_last = 0U;
    if (vlSelfRef.__PVT__MAC_valid) {
        vlSelfRef.__PVT__nbytes_rcv = (0xffffU & ((IData)(vlSelfRef.__PVT__bytes_rcv) 
                                                  + 
                                                  VL_EXTEND_II(16,8, (IData)(vlSelfRef.__PVT__bytes_rcv_len))));
    }
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__chksum_clear = 1U;
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nstate = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_en = 1U;
                if ((4U == (0xfU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0xcU, 4U)))) {
                    vlSelfRef.__PVT__nstate = 2U;
                    vlSelfRef.__PVT__nIP_pseuder = 
                        (0xffffU & VL_SHIFTL_III(16,16,32, 
                                                 VL_EXTEND_II(16,4, 
                                                              (0xfU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 4U))), 2U));
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_en = 1U;
                vlSelfRef.__PVT__nIP_len = (0xffffU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U));
                vlSelfRef.__PVT__next_is_tcp = (6U 
                                                == 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 8U)));
                vlSelfRef.__PVT__next_is_udp = (0x11U 
                                                == 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 8U)));
                if (((((0x5c8U >= (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))) 
                       & (0U != (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 8U)))) 
                      & (~ VL_BITSEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x1fU))) 
                     & ((IData)(vlSelfRef.__PVT__next_is_tcp) 
                        | (IData)(vlSelfRef.__PVT__next_is_udp)))) {
                    vlSelfRef.__PVT__nstate = 3U;
                    vlSelfRef.__PVT__temp = (0xfffffU 
                                             & ((VL_EXTEND_II(20,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 8U))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__nIP_len))) 
                                                - VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
                    __Vtemp_1 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                             + VL_EXTEND_II(20,4, 
                                                            (0xfU 
                                                             & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
                    vlSelfRef.__PVT__temp = __Vtemp_1;
                    __Vtemp_2 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                             + VL_EXTEND_II(20,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
                    vlSelfRef.__PVT__temp = __Vtemp_2;
                    vlSelfRef.__PVT__nIP_pseuder = 
                        (0xffffU & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U));
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_en = 1U;
                vlSelfRef.__PVT__chksum_in = VL_EXTEND_QQ(64,48, 
                                                          (0xffffffffffffULL 
                                                           & VL_SEL_QQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x30U)));
                vlSelfRef.__PVT__nIP_checksum = (0xffffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U));
                vlSelfRef.__PVT__ndst_addr = (0xffffU 
                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x10U));
                vlSelfRef.__PVT__temp = (0xfffffU & 
                                         (((VL_EXTEND_II(20,16, 
                                                         (0xffffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x20U, 0x10U))) 
                                            + VL_EXTEND_II(20,16, 
                                                           (0xffffU 
                                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0x10U)))) 
                                           + VL_EXTEND_II(20,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x10U)))) 
                                          + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
                __Vtemp_3 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,4, 
                                                        (0xfU 
                                                         & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
                vlSelfRef.__PVT__temp = __Vtemp_3;
                __Vtemp_4 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,1, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
                vlSelfRef.__PVT__temp = __Vtemp_4;
                vlSelfRef.__PVT__nIP_pseuder = (0xffffU 
                                                & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U));
                if (vlSelfRef.__PVT__is_src_addr) {
                    vlSelfRef.__PVT__nstate = 4U;
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                    vlSelfRef.__PVT__chksum_en = 0U;
                }
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_in = VL_EXTEND_QI(64,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U)));
                vlSelfRef.__PVT__chksum_en = 1U;
                vlSelfRef.__PVT__temp = (0xfffffU & 
                                         (VL_EXTEND_II(20,16, 
                                                       (0xffffU 
                                                        & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))) 
                                          + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
                __Vtemp_5 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,4, 
                                                        (0xfU 
                                                         & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
                vlSelfRef.__PVT__temp = __Vtemp_5;
                __Vtemp_6 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,1, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
                vlSelfRef.__PVT__temp = __Vtemp_6;
                vlSelfRef.__PVT__nIP_pseuder = (0xffffU 
                                                & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U));
                if ((0xc0a80102U == VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__dst_addr), 
                                                  (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))))) {
                    vlSelfRef.__PVT__nIP_payload = 
                        VL_EXTEND_QQ(64,48, (0xffffffffffffULL 
                                             & VL_SEL_QQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x30U)));
                    vlSelfRef.__PVT__nIP_valid = 1U;
                    vlSelfRef.__PVT__nstate = 5U;
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                }
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__MAC_payload_rcv;
            }
            if (((0xffffU & (~ (IData)(vlSelfRef.__PVT__chksum_pl))) 
                 == (IData)(vlSelfRef.__PVT__IP_checksum))) {
                vlSelfRef.__PVT__nstate = 6U;
                vlSelfRef.__PVT__nIP_valid = 1U;
                if (((IData)(vlSelfRef.__PVT__nbytes_rcv) 
                     >= (IData)(vlSelfRef.__PVT__IP_len))) {
                    vlSelfRef.__PVT__nIP_last = 1U;
                    vlSelfRef.__PVT__nIP_bytes_rcv_len 
                        = (0xffU & (VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__IP_len), 0U, 8U) 
                                    - VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__bytes_rcv), 0U, 8U)));
                    vlSelfRef.__PVT__nbytes_rcv = (0xffffU 
                                                   & ((IData)(vlSelfRef.__PVT__bytes_rcv) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__IP_len) 
                                                       - (IData)(vlSelfRef.__PVT__bytes_rcv))));
                    vlSelfRef.__PVT__nstate = 7U;
                }
            } else {
                vlSelfRef.__PVT__nstate = 8U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__MAC_payload_rcv;
                vlSelfRef.__PVT__nIP_valid = 1U;
                if (((IData)(vlSelfRef.__PVT__nbytes_rcv) 
                     >= (IData)(vlSelfRef.__PVT__IP_len))) {
                    vlSelfRef.__PVT__nIP_last = 1U;
                    vlSelfRef.__PVT__nIP_bytes_rcv_len 
                        = (0xffU & (VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__IP_len), 0U, 8U) 
                                    - VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__bytes_rcv), 0U, 8U)));
                    vlSelfRef.__PVT__nstate = 7U;
                }
            }
        } else {
            vlSelfRef.__PVT__nbytes_rcv = 0U;
            vlSelfRef.__PVT__nIP_valid = 0U;
            vlSelfRef.__PVT__nstate = 0U;
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__IP_flush = 1U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__MAC_valid)))) {
            vlSelfRef.__PVT__nstate = 0U;
        }
    } else {
        vlSelfRef.__PVT__nstate = 0U;
    }
    vlSelf->__PVT__chksum_inst->__PVT__FIFO_rd_en = vlSelfRef.__PVT__chksum_en;
    vlSelf->__PVT__chksum_inst->__PVT__TCP_payload_tx 
        = vlSelfRef.__PVT__chksum_in;
    vlSelf->__PVT__chksum_inst->__PVT__clear = vlSelfRef.__PVT__chksum_clear;
}

VL_INLINE_OPT void Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__clt_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__chksum_inst->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__chksum_inst->__PVT__CLK = vlSelfRef.__PVT__CLK;
}

VL_INLINE_OPT void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chksum_pl = vlSelf->__PVT__chksum_inst->__PVT__TCP_checksum_pl;
}

VL_INLINE_OPT void Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__clt_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelfRef.__PVT__chksum_en = 0U;
    vlSelfRef.__PVT__chksum_in = vlSelfRef.__PVT__MAC_payload_rcv;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__ndst_addr = vlSelfRef.__PVT__dst_addr;
    vlSelfRef.__PVT__nIP_valid = 0U;
    vlSelfRef.__PVT__chksum_clear = 0U;
    vlSelfRef.__PVT__chksum_final = VL_EXTEND_II(17,16, (IData)(vlSelfRef.__PVT__chksum_pl));
    vlSelfRef.__PVT__nIP_len = vlSelfRef.__PVT__IP_len;
    vlSelfRef.__PVT__nIP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    vlSelfRef.__PVT__next_is_tcp = vlSelfRef.__PVT__is_tcp;
    vlSelfRef.__PVT__next_is_udp = vlSelfRef.__PVT__is_udp;
    vlSelfRef.__PVT__total_len = (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U));
    vlSelfRef.__PVT__frags_flag = (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0x10U));
    vlSelfRef.__PVT__ttl = (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 8U));
    vlSelfRef.__PVT__flags = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x1dU, 3U));
    vlSelfRef.__PVT__fragoff = (0x1fffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0xdU));
    VL_ASSIGNSEL_II(4,2,2U, vlSelfRef.__PVT__test_valid, 
                    VL_CONCAT_III(2,1,1, (0x5c8U >= 
                                          (0xffffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))), 
                                  (0U == (0x1fffU & 
                                          VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0xdU)))));
    VL_ASSIGNSEL_II(4,2,0U, vlSelfRef.__PVT__test_valid, 
                    VL_CONCAT_III(2,1,1, (0U != (0xffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 8U))), 
                                  (1U & (~ VL_BITSEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x1fU)))));
    vlSelfRef.__PVT__ip_version = (0xfU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0xcU, 4U));
    vlSelfRef.__PVT__IP_flush = 0U;
    vlSelfRef.__PVT__is_src_addr = (0xc0a80101U == 
                                    VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0x20U));
    vlSelfRef.__PVT__is_ip_version_valid = (4U == (IData)(vlSelfRef.__PVT__ip_version));
    vlSelfRef.__PVT__nIP_bytes_rcv_len = vlSelfRef.__PVT__bytes_rcv_len;
    vlSelfRef.__PVT__nIP_last = 0U;
    if (vlSelfRef.__PVT__MAC_valid) {
        vlSelfRef.__PVT__nbytes_rcv = (0xffffU & ((IData)(vlSelfRef.__PVT__bytes_rcv) 
                                                  + 
                                                  VL_EXTEND_II(16,8, (IData)(vlSelfRef.__PVT__bytes_rcv_len))));
    }
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__chksum_clear = 1U;
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nstate = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_en = 1U;
                if ((4U == (0xfU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0xcU, 4U)))) {
                    vlSelfRef.__PVT__nstate = 2U;
                    vlSelfRef.__PVT__nIP_pseuder = 
                        (0xffffU & VL_SHIFTL_III(16,16,32, 
                                                 VL_EXTEND_II(16,4, 
                                                              (0xfU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 4U))), 2U));
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_en = 1U;
                vlSelfRef.__PVT__nIP_len = (0xffffU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U));
                vlSelfRef.__PVT__next_is_tcp = (6U 
                                                == 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 8U)));
                vlSelfRef.__PVT__next_is_udp = (0x11U 
                                                == 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 8U)));
                if (((((0x5c8U >= (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))) 
                       & (0U != (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 8U)))) 
                      & (~ VL_BITSEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x1fU))) 
                     & ((IData)(vlSelfRef.__PVT__next_is_tcp) 
                        | (IData)(vlSelfRef.__PVT__next_is_udp)))) {
                    vlSelfRef.__PVT__nstate = 3U;
                    vlSelfRef.__PVT__temp = (0xfffffU 
                                             & ((VL_EXTEND_II(20,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 8U))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__nIP_len))) 
                                                - VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
                    __Vtemp_1 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                             + VL_EXTEND_II(20,4, 
                                                            (0xfU 
                                                             & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
                    vlSelfRef.__PVT__temp = __Vtemp_1;
                    __Vtemp_2 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                             + VL_EXTEND_II(20,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
                    vlSelfRef.__PVT__temp = __Vtemp_2;
                    vlSelfRef.__PVT__nIP_pseuder = 
                        (0xffffU & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U));
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_en = 1U;
                vlSelfRef.__PVT__chksum_in = VL_EXTEND_QQ(64,48, 
                                                          (0xffffffffffffULL 
                                                           & VL_SEL_QQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x30U)));
                vlSelfRef.__PVT__nIP_checksum = (0xffffU 
                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U));
                vlSelfRef.__PVT__ndst_addr = (0xffffU 
                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x10U));
                vlSelfRef.__PVT__temp = (0xfffffU & 
                                         (((VL_EXTEND_II(20,16, 
                                                         (0xffffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x20U, 0x10U))) 
                                            + VL_EXTEND_II(20,16, 
                                                           (0xffffU 
                                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0x10U)))) 
                                           + VL_EXTEND_II(20,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x10U)))) 
                                          + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
                __Vtemp_3 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,4, 
                                                        (0xfU 
                                                         & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
                vlSelfRef.__PVT__temp = __Vtemp_3;
                __Vtemp_4 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,1, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
                vlSelfRef.__PVT__temp = __Vtemp_4;
                vlSelfRef.__PVT__nIP_pseuder = (0xffffU 
                                                & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U));
                if (vlSelfRef.__PVT__is_src_addr) {
                    vlSelfRef.__PVT__nstate = 4U;
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                    vlSelfRef.__PVT__chksum_en = 0U;
                }
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__chksum_in = VL_EXTEND_QI(64,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U)));
                vlSelfRef.__PVT__chksum_en = 1U;
                vlSelfRef.__PVT__temp = (0xfffffU & 
                                         (VL_EXTEND_II(20,16, 
                                                       (0xffffU 
                                                        & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))) 
                                          + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
                __Vtemp_5 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,4, 
                                                        (0xfU 
                                                         & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
                vlSelfRef.__PVT__temp = __Vtemp_5;
                __Vtemp_6 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                         + VL_EXTEND_II(20,1, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
                vlSelfRef.__PVT__temp = __Vtemp_6;
                vlSelfRef.__PVT__nIP_pseuder = (0xffffU 
                                                & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U));
                if ((0xc0a80102U == VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__dst_addr), 
                                                  (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))))) {
                    vlSelfRef.__PVT__nIP_payload = 
                        VL_EXTEND_QQ(64,48, (0xffffffffffffULL 
                                             & VL_SEL_QQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0U, 0x30U)));
                    vlSelfRef.__PVT__nIP_valid = 1U;
                    vlSelfRef.__PVT__nstate = 5U;
                } else {
                    vlSelfRef.__PVT__nstate = 8U;
                }
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__MAC_payload_rcv;
            }
            if (((0xffffU & (~ (IData)(vlSelfRef.__PVT__chksum_pl))) 
                 == (IData)(vlSelfRef.__PVT__IP_checksum))) {
                vlSelfRef.__PVT__nstate = 6U;
                vlSelfRef.__PVT__nIP_valid = 1U;
                if (((IData)(vlSelfRef.__PVT__nbytes_rcv) 
                     >= (IData)(vlSelfRef.__PVT__IP_len))) {
                    vlSelfRef.__PVT__nIP_last = 1U;
                    vlSelfRef.__PVT__nIP_bytes_rcv_len 
                        = (0xffU & (VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__IP_len), 0U, 8U) 
                                    - VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__bytes_rcv), 0U, 8U)));
                    vlSelfRef.__PVT__nbytes_rcv = (0xffffU 
                                                   & ((IData)(vlSelfRef.__PVT__bytes_rcv) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__IP_len) 
                                                       - (IData)(vlSelfRef.__PVT__bytes_rcv))));
                    vlSelfRef.__PVT__nstate = 7U;
                }
            } else {
                vlSelfRef.__PVT__nstate = 8U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__MAC_payload_rcv;
                vlSelfRef.__PVT__nIP_valid = 1U;
                if (((IData)(vlSelfRef.__PVT__nbytes_rcv) 
                     >= (IData)(vlSelfRef.__PVT__IP_len))) {
                    vlSelfRef.__PVT__nIP_last = 1U;
                    vlSelfRef.__PVT__nIP_bytes_rcv_len 
                        = (0xffU & (VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__IP_len), 0U, 8U) 
                                    - VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__bytes_rcv), 0U, 8U)));
                    vlSelfRef.__PVT__nstate = 7U;
                }
            }
        } else {
            vlSelfRef.__PVT__nbytes_rcv = 0U;
            vlSelfRef.__PVT__nIP_valid = 0U;
            vlSelfRef.__PVT__nstate = 0U;
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__IP_flush = 1U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__MAC_valid)))) {
            vlSelfRef.__PVT__nstate = 0U;
        }
    } else {
        vlSelfRef.__PVT__nstate = 0U;
    }
    vlSelf->__PVT__chksum_inst->__PVT__FIFO_rd_en = vlSelfRef.__PVT__chksum_en;
    vlSelf->__PVT__chksum_inst->__PVT__TCP_payload_tx 
        = vlSelfRef.__PVT__chksum_in;
    vlSelf->__PVT__chksum_inst->__PVT__clear = vlSelfRef.__PVT__chksum_clear;
}
