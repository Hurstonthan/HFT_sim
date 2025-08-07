// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_receiver.h"
#include "Vether_simulation_TCP_tx.h"

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__3(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_rcv->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_en;
}

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__3(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_rcv->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_en;
}
