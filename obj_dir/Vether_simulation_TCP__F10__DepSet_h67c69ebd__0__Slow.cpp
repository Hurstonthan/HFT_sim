// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_ISN.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_checksum_TCP.h"
#include "Vether_simulation_flex_counter__S20.h"

VL_ATTR_COLD void Vether_simulation_TCP__F10___eval_initial__TOP__ether_simulation__svr_inst__u_tcp(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___eval_initial__TOP__ether_simulation__svr_inst__u_tcp\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__ISN_gen->__PVT__gen_en = 0U;
    vlSelf->__PVT__timeout_fl->__PVT__initial_val = 0U;
    vlSelf->__PVT__timeout_fl->__PVT__rollover_val = 0x1194U;
    vlSelf->__PVT__inst->__PVT__clear = 0U;
}

VL_ATTR_COLD void Vether_simulation_TCP__F10___eval_initial__TOP__ether_simulation__clt_inst__u_tcp(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___eval_initial__TOP__ether_simulation__clt_inst__u_tcp\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__ISN_gen->__PVT__gen_en = 0U;
    vlSelf->__PVT__timeout_fl->__PVT__initial_val = 0U;
    vlSelf->__PVT__timeout_fl->__PVT__rollover_val = 0x1194U;
    vlSelf->__PVT__inst->__PVT__clear = 0U;
}
