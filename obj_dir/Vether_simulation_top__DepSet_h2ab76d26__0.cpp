// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_rx.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___act_sequent__TOP__ether_simulation__svr_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___act_sequent__TOP__ether_simulation__svr_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSelf->__PVT__mac_rx->__PVT__frame_ok;
    vlSelfRef.__PVT__CRC_flush = vlSelf->__PVT__mac_rx->__PVT__CRC_flush;
    vlSelf->__PVT__ip_rx->__PVT__MAC_flush = vlSelfRef.__PVT__CRC_flush;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__7(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_valid = vlSelf->__PVT__mac_rx->__PVT__MAC_valid;
    vlSelfRef.__PVT__bytes_rcv_len = vlSelf->__PVT__mac_rx->__PVT__bytes_rcv_len;
    vlSelf->__PVT__ip_rx->__PVT__MAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelf->__PVT__ip_rx->__PVT__bytes_rcv_len = vlSelfRef.__PVT__bytes_rcv_len;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__8(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSelf->__PVT__mac_rx->__PVT__MAC_payload_rcv;
    vlSelf->__PVT__ip_rx->__PVT__MAC_payload_rcv = vlSelfRef.__PVT__MAC_payload_rcv;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__6(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSelf->__PVT__mac_rx->__PVT__frame_ok;
    vlSelfRef.__PVT__CRC_flush = vlSelf->__PVT__mac_rx->__PVT__CRC_flush;
    vlSelf->__PVT__ip_rx->__PVT__MAC_flush = vlSelfRef.__PVT__CRC_flush;
}

VL_INLINE_OPT void Vether_simulation_top___act_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___act_sequent__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSelf->__PVT__mac_rx->__PVT__frame_ok;
    vlSelfRef.__PVT__CRC_flush = vlSelf->__PVT__mac_rx->__PVT__CRC_flush;
    vlSelf->__PVT__ip_rx->__PVT__MAC_flush = vlSelfRef.__PVT__CRC_flush;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__7(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_valid = vlSelf->__PVT__mac_rx->__PVT__MAC_valid;
    vlSelfRef.__PVT__bytes_rcv_len = vlSelf->__PVT__mac_rx->__PVT__bytes_rcv_len;
    vlSelf->__PVT__ip_rx->__PVT__MAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelf->__PVT__ip_rx->__PVT__bytes_rcv_len = vlSelfRef.__PVT__bytes_rcv_len;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__8(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSelf->__PVT__mac_rx->__PVT__MAC_payload_rcv;
    vlSelf->__PVT__ip_rx->__PVT__MAC_payload_rcv = vlSelfRef.__PVT__MAC_payload_rcv;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__6(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSelf->__PVT__mac_rx->__PVT__frame_ok;
    vlSelfRef.__PVT__CRC_flush = vlSelf->__PVT__mac_rx->__PVT__CRC_flush;
    vlSelf->__PVT__ip_rx->__PVT__MAC_flush = vlSelfRef.__PVT__CRC_flush;
}
