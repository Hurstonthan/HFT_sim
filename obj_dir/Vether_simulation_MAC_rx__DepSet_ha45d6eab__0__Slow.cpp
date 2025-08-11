// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_crc32_parallel_64bit.h"

VL_ATTR_COLD void Vether_simulation_MAC_rx___eval_initial__TOP__ether_simulation__svr_inst__mac_rx(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___eval_initial__TOP__ether_simulation__svr_inst__mac_rx\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__CRC->__PVT__rx = 0U;
}

VL_ATTR_COLD void Vether_simulation_MAC_rx___eval_initial__TOP__ether_simulation__clt_inst__mac_rx(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___eval_initial__TOP__ether_simulation__clt_inst__mac_rx\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__CRC->__PVT__rx = 0U;
}
