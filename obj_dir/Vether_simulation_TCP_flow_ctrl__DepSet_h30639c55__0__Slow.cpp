// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_flex_counter__S9.h"

VL_ATTR_COLD void Vether_simulation_TCP_flow_ctrl___eval_initial__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___eval_initial__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__timewait->__PVT__initial_val = 0x12cU;
}

VL_ATTR_COLD void Vether_simulation_TCP_flow_ctrl___eval_initial__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___eval_initial__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__timewait->__PVT__initial_val = 0x12cU;
}
