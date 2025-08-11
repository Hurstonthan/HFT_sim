// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_xgmii_little_to_big.h"

VL_INLINE_OPT void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__4(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSelf->__PVT__payload_cvrt->__PVT__be_rxd;
    vlSelfRef.__PVT__FCS_frame_cvt = vlSelf->__PVT__crc_frame_convert->__PVT__be_rxd;
}

VL_INLINE_OPT void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__4(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSelf->__PVT__payload_cvrt->__PVT__be_rxd;
    vlSelfRef.__PVT__FCS_frame_cvt = vlSelf->__PVT__crc_frame_convert->__PVT__be_rxd;
}
