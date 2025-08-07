// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_TCP_tx.h"
#include "Vether_simulation_checksum_TCP.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__5(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_valid = vlSelfRef.__PVT__rd_FIFO_valid_tx;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_FIFO_last;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent = 
        VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent 
        = VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelf->__PVT__inst->__PVT__re_trans = vlSelfRef.__PVT__re_trans;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__5(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_valid = vlSelfRef.__PVT__rd_FIFO_valid_tx;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_FIFO_last;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent = 
        VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent 
        = VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelf->__PVT__inst->__PVT__re_trans = vlSelfRef.__PVT__re_trans;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent;
}
