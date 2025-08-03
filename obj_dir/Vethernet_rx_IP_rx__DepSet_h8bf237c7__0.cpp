// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx_IP_rx.h"
#include "Vethernet_rx__Syms.h"

VL_INLINE_OPT void Vethernet_rx_IP_rx___ico_sequent__TOP__ethernet_rx__ip_inst__0(Vethernet_rx_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_IP_rx___ico_sequent__TOP__ethernet_rx__ip_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
}

VL_INLINE_OPT void Vethernet_rx_IP_rx___nba_sequent__TOP__ethernet_rx__ip_inst__0(Vethernet_rx_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_IP_rx___nba_sequent__TOP__ethernet_rx__ip_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chksum_pl = vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_checksum_pl;
}

VL_INLINE_OPT void Vethernet_rx_IP_rx___nba_comb__TOP__ethernet_rx__ip_inst__0(Vethernet_rx_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_IP_rx___nba_comb__TOP__ethernet_rx__ip_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__PVT__is_src_addr = (0xffffffffU == 
                                    VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x10U, 0x20U));
    vlSelfRef.__PVT__is_ip_version_valid = (4U == (IData)(vlSelfRef.__PVT__ip_version));
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
                vlSelfRef.__PVT__nstate = ((4U == (0xfU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0xcU, 4U)))
                                            ? 2U : 8U);
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
                vlSelfRef.__PVT__nstate = (((((0x5c8U 
                                               >= (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x30U, 0x10U))) 
                                              & (0U 
                                                 != 
                                                 (0xffU 
                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 8U, 8U)))) 
                                             & (~ VL_BITSEL_IQII(64, vlSelfRef.__PVT__MAC_payload_rcv, 0x1fU))) 
                                            & ((IData)(vlSelfRef.__PVT__next_is_tcp) 
                                               | (IData)(vlSelfRef.__PVT__next_is_udp)))
                                            ? 3U : 8U);
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
                if (vlSelfRef.__PVT__is_src_addr) {
                    vlSelfRef.__PVT__nstate = 4U;
                    vlSelfRef.__PVT__nIP_valid = 1U;
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
                if ((0xaaaaaaaaU == VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__dst_addr), 
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
            vlSelfRef.__PVT__chksum_en = 1U;
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__MAC_payload_rcv;
            }
            if (((IData)(vlSelfRef.__PVT__chksum_pl) 
                 == (IData)(vlSelfRef.__PVT__IP_checksum))) {
                vlSelfRef.__PVT__nstate = 6U;
                vlSelfRef.__PVT__nIP_valid = 1U;
                if ((VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_rcv)) 
                     >= (VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__IP_len)) 
                         - (IData)(0x28U)))) {
                    vlSelfRef.__PVT__nIP_valid = 0U;
                    vlSelfRef.__PVT__nstate = 7U;
                }
            } else {
                vlSelfRef.__PVT__nstate = 8U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__MAC_valid) {
                vlSelfRef.__PVT__nIP_payload = vlSelfRef.__PVT__MAC_payload_rcv;
                vlSelfRef.__PVT__nIP_valid = 1U;
                if ((VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_rcv)) 
                     >= (VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__IP_len)) 
                         - (IData)(0x28U)))) {
                    vlSelfRef.__PVT__nIP_valid = 0U;
                    vlSelfRef.__PVT__nstate = 7U;
                }
            }
        } else {
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
    vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__FIFO_rd_en 
        = vlSelfRef.__PVT__chksum_en;
    vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_payload_tx 
        = vlSelfRef.__PVT__chksum_in;
    vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__clear 
        = vlSelfRef.__PVT__chksum_clear;
}
