// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx_ethernet_rx.h"

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___ico_sequent__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___ico_sequent__TOP__ethernet_rx__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nRST 
        = vlSelfRef.nRST;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nRST 
        = vlSelfRef.nRST;
    vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CLK 
        = vlSelfRef.CLK;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__CLK = vlSelfRef.CLK;
    vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd 
        = vlSelfRef.xgmii_rxd;
    vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxc 
        = vlSelfRef.xgmii_rxc;
}

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___ico_comb__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___ico_comb__TOP__ethernet_rx__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__frame_ok;
    vlSelfRef.__PVT__MAC_flush = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CRC_flush;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_flush 
        = vlSelfRef.__PVT__MAC_flush;
}

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___act_sequent__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___act_sequent__TOP__ethernet_rx__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__frame_ok;
    vlSelfRef.__PVT__MAC_flush = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CRC_flush;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_flush 
        = vlSelfRef.__PVT__MAC_flush;
}

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IP_valid = vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_valid;
    vlSelfRef.IP_payload = vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_payload;
    vlSelfRef.is_tcp = vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_tcp;
    vlSelfRef.is_udp = vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_udp;
}

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__1(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_valid = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_valid;
    vlSelfRef.__PVT__bytes_rcv_len = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_rcv_len;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_valid 
        = vlSelfRef.__PVT__MAC_valid;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__bytes_rcv_len 
        = vlSelfRef.__PVT__bytes_rcv_len;
}

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__2(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__2\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_payload_rcv;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_payload_rcv 
        = vlSelfRef.__PVT__MAC_payload_rcv;
}

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__frame_ok;
    vlSelfRef.__PVT__MAC_flush = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CRC_flush;
    vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_flush 
        = vlSelfRef.__PVT__MAC_flush;
}

VL_INLINE_OPT void Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__1(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IP_flush = vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_flush;
}
