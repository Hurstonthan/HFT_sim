// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_crc32_parallel_64bit.h"

VL_INLINE_OPT void Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__CRC->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__CRC->__PVT__CLK = vlSelfRef.__PVT__CLK;
}

VL_INLINE_OPT void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__crc_out = vlSelf->__PVT__CRC->__PVT__crc_out;
}

VL_INLINE_OPT void Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__CRC->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__CRC->__PVT__CLK = vlSelfRef.__PVT__CLK;
}

VL_INLINE_OPT void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__crc_out = vlSelf->__PVT__CRC->__PVT__crc_out;
}
