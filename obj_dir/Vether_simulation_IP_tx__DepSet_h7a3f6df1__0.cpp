// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_tx.h"

VL_INLINE_OPT void Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__svr_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__svr_inst__ip_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelfRef.__Vdly__IP_state = vlSelfRef.__PVT__IP_state;
    vlSelfRef.__Vdly__IPv4_chk_sum = vlSelfRef.__PVT__IPv4_chk_sum;
    vlSelfRef.__Vdly__IP_transmit = vlSelfRef.__PVT__IP_transmit;
    vlSelfRef.__Vdly__tt_len_data = vlSelfRef.__PVT__tt_len_data;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__IP_state = vlSelfRef.__PVT__nxIP_state;
        vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__protocol_last;
        vlSelfRef.__Vdly__IP_transmit = vlSelfRef.__PVT__nxIP_transmit_l;
        vlSelfRef.__Vdly__tt_len_data = vlSelfRef.__PVT__ntt_len_data;
        vlSelfRef.__Vdly__IPv4_chk_sum = vlSelfRef.__PVT__nIPv4_chk_sum;
    } else {
        vlSelfRef.__Vdly__IP_transmit = 0ULL;
        vlSelfRef.__Vdly__IPv4_chk_sum = 0U;
        vlSelfRef.__Vdly__tt_len_data = 0U;
        vlSelfRef.__Vdly__IP_last = 0U;
        vlSelfRef.__Vdly__IP_state = 0U;
    }
    vlSelfRef.__PVT__IP_last = vlSelfRef.__Vdly__IP_last;
    vlSelfRef.__PVT__IP_state = vlSelfRef.__Vdly__IP_state;
    vlSelfRef.__PVT__IPv4_chk_sum = vlSelfRef.__Vdly__IPv4_chk_sum;
    vlSelfRef.__PVT__IP_transmit = vlSelfRef.__Vdly__IP_transmit;
    vlSelfRef.__PVT__tt_len_data = vlSelfRef.__Vdly__tt_len_data;
}

VL_INLINE_OPT void Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__svr_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__svr_inst__ip_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__nxIP_transmit_l = vlSelfRef.__PVT__IP_transmit;
    vlSelfRef.__PVT__nxIP_state = vlSelfRef.__PVT__IP_state;
    vlSelfRef.__PVT__ntt_len_data = vlSelfRef.__PVT__tt_len_data;
    vlSelfRef.__PVT__chk_sum_valid = 0U;
    vlSelfRef.__PVT__protocol_send = 0U;
    vlSelfRef.__PVT__chksum_rslt = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__IP_state))) {
        if (vlSelfRef.__PVT__IP_send) {
            vlSelfRef.__PVT__nxIP_state = 1U;
            vlSelfRef.__PVT__nxIP_transmit_l = 0x8004500ULL;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__nxIP_state = 2U;
        vlSelfRef.__PVT__ntt_len_data = (0xffffU & 
                                         ((IData)(0x28U) 
                                          + (IData)(vlSelfRef.__PVT__len_data)));
        vlSelfRef.__PVT__nxIP_transmit_l = VL_CONCAT_QII(64,32,32, 
                                                         VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__ntt_len_data), 1U), 0x40004006U);
        vlSelfRef.__PVT__chk_sum_valid = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_state = 3U;
        vlSelfRef.__PVT__chksum_rslt = (0xffffU & (~ 
                                                   VL_SEL_IIII(17, vlSelfRef.__PVT__IPv4_chk_sum, 0U, 0x10U)));
        vlSelfRef.__PVT__nxIP_transmit_l = VL_CONCAT_QIQ(64,16,48, 
                                                         (0xffffU 
                                                          & (~ 
                                                             VL_SEL_IIII(17, vlSelfRef.__PVT__IPv4_chk_sum, 0U, 0x10U))), 0xc0a80101c0a8ULL);
    } else if ((3U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_state = 4U;
        vlSelfRef.__PVT__nxIP_transmit_l = VL_CONCAT_QIQ(64,16,48, 0x102U, 
                                                         (0xffffffffffffULL 
                                                          & VL_SEL_QQII(64, vlSelfRef.__PVT__protocol_transmit, 0U, 0x30U)));
    } else if ((4U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_state = 5U;
        vlSelfRef.__PVT__nxIP_transmit_l = vlSelfRef.__PVT__protocol_transmit;
    } else if ((5U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_transmit_l = vlSelfRef.__PVT__protocol_transmit;
        if (vlSelfRef.__PVT__protocol_last) {
            vlSelfRef.__PVT__protocol_send = 0U;
            vlSelfRef.__PVT__nxIP_state = 6U;
        }
    } else if ((6U == (IData)(vlSelfRef.__PVT__IP_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__IP_send)))) {
            vlSelfRef.__PVT__nxIP_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__nxIP_transmit_l = 0ULL;
    }
    vlSelfRef.__PVT__nIPv4_chk_sum = vlSelfRef.__PVT__IPv4_chk_sum;
    if (vlSelfRef.__PVT__chk_sum_valid) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((IData)(0x24882U) 
                                             + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__len_data))));
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
        vlSelfRef.__PVT__nIPv4_chk_sum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
    }
}

VL_INLINE_OPT void Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__clt_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__clt_inst__ip_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelfRef.__Vdly__IP_state = vlSelfRef.__PVT__IP_state;
    vlSelfRef.__Vdly__IPv4_chk_sum = vlSelfRef.__PVT__IPv4_chk_sum;
    vlSelfRef.__Vdly__IP_transmit = vlSelfRef.__PVT__IP_transmit;
    vlSelfRef.__Vdly__tt_len_data = vlSelfRef.__PVT__tt_len_data;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__IP_state = vlSelfRef.__PVT__nxIP_state;
        vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__protocol_last;
        vlSelfRef.__Vdly__IP_transmit = vlSelfRef.__PVT__nxIP_transmit_l;
        vlSelfRef.__Vdly__tt_len_data = vlSelfRef.__PVT__ntt_len_data;
        vlSelfRef.__Vdly__IPv4_chk_sum = vlSelfRef.__PVT__nIPv4_chk_sum;
    } else {
        vlSelfRef.__Vdly__IP_transmit = 0ULL;
        vlSelfRef.__Vdly__IPv4_chk_sum = 0U;
        vlSelfRef.__Vdly__tt_len_data = 0U;
        vlSelfRef.__Vdly__IP_last = 0U;
        vlSelfRef.__Vdly__IP_state = 0U;
    }
    vlSelfRef.__PVT__IP_last = vlSelfRef.__Vdly__IP_last;
    vlSelfRef.__PVT__IP_state = vlSelfRef.__Vdly__IP_state;
    vlSelfRef.__PVT__IPv4_chk_sum = vlSelfRef.__Vdly__IPv4_chk_sum;
    vlSelfRef.__PVT__IP_transmit = vlSelfRef.__Vdly__IP_transmit;
    vlSelfRef.__PVT__tt_len_data = vlSelfRef.__Vdly__tt_len_data;
}

VL_INLINE_OPT void Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__clt_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__clt_inst__ip_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__nxIP_transmit_l = vlSelfRef.__PVT__IP_transmit;
    vlSelfRef.__PVT__nxIP_state = vlSelfRef.__PVT__IP_state;
    vlSelfRef.__PVT__ntt_len_data = vlSelfRef.__PVT__tt_len_data;
    vlSelfRef.__PVT__chk_sum_valid = 0U;
    vlSelfRef.__PVT__protocol_send = 0U;
    vlSelfRef.__PVT__chksum_rslt = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__IP_state))) {
        if (vlSelfRef.__PVT__IP_send) {
            vlSelfRef.__PVT__nxIP_state = 1U;
            vlSelfRef.__PVT__nxIP_transmit_l = 0x8004500ULL;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__nxIP_state = 2U;
        vlSelfRef.__PVT__ntt_len_data = (0xffffU & 
                                         ((IData)(0x28U) 
                                          + (IData)(vlSelfRef.__PVT__len_data)));
        vlSelfRef.__PVT__nxIP_transmit_l = VL_CONCAT_QII(64,32,32, 
                                                         VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__ntt_len_data), 1U), 0x40004006U);
        vlSelfRef.__PVT__chk_sum_valid = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_state = 3U;
        vlSelfRef.__PVT__chksum_rslt = (0xffffU & (~ 
                                                   VL_SEL_IIII(17, vlSelfRef.__PVT__IPv4_chk_sum, 0U, 0x10U)));
        vlSelfRef.__PVT__nxIP_transmit_l = VL_CONCAT_QIQ(64,16,48, 
                                                         (0xffffU 
                                                          & (~ 
                                                             VL_SEL_IIII(17, vlSelfRef.__PVT__IPv4_chk_sum, 0U, 0x10U))), 0xc0a80101c0a8ULL);
    } else if ((3U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_state = 4U;
        vlSelfRef.__PVT__nxIP_transmit_l = VL_CONCAT_QIQ(64,16,48, 0x102U, 
                                                         (0xffffffffffffULL 
                                                          & VL_SEL_QQII(64, vlSelfRef.__PVT__protocol_transmit, 0U, 0x30U)));
    } else if ((4U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_state = 5U;
        vlSelfRef.__PVT__nxIP_transmit_l = vlSelfRef.__PVT__protocol_transmit;
    } else if ((5U == (IData)(vlSelfRef.__PVT__IP_state))) {
        vlSelfRef.__PVT__protocol_send = 1U;
        vlSelfRef.__PVT__nxIP_transmit_l = vlSelfRef.__PVT__protocol_transmit;
        if (vlSelfRef.__PVT__protocol_last) {
            vlSelfRef.__PVT__protocol_send = 0U;
            vlSelfRef.__PVT__nxIP_state = 6U;
        }
    } else if ((6U == (IData)(vlSelfRef.__PVT__IP_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__IP_send)))) {
            vlSelfRef.__PVT__nxIP_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__nxIP_transmit_l = 0ULL;
    }
    vlSelfRef.__PVT__nIPv4_chk_sum = vlSelfRef.__PVT__IPv4_chk_sum;
    if (vlSelfRef.__PVT__chk_sum_valid) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((IData)(0x24882U) 
                                             + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__len_data))));
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
        vlSelfRef.__PVT__nIPv4_chk_sum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
    }
}
