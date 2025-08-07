// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_FIFO_TX__F10.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_top.h"

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ftx_en_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_tx;
    vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_ftx_en_int;
}

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ftx_en_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_tx;
    vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_ftx_en_int;
}
