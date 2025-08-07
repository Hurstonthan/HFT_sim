// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_tx.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_basesum_payload = ((IData)(vlSelfRef.__PVT__re_trans)
                                             ? (IData)(vlSelfRef.__PVT__checksum_re_trans)
                                             : (IData)(vlSelfRef.__PVT__TCP_checksum_out));
    vlSelf->__PVT__TCP_tx->__PVT__TCP_basesum_payload 
        = vlSelfRef.__PVT__TCP_basesum_payload;
    vlSelfRef.__PVT__checksum_TX = vlSelfRef.__PVT__TCP_basesum_payload;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__11(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__11\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__bytes_abt_sent = vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__2(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__5(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_en;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_basesum_payload = ((IData)(vlSelfRef.__PVT__re_trans)
                                             ? (IData)(vlSelfRef.__PVT__checksum_re_trans)
                                             : (IData)(vlSelfRef.__PVT__TCP_checksum_out));
    vlSelf->__PVT__TCP_tx->__PVT__TCP_basesum_payload 
        = vlSelfRef.__PVT__TCP_basesum_payload;
    vlSelfRef.__PVT__checksum_TX = vlSelfRef.__PVT__TCP_basesum_payload;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__11(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__11\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__bytes_abt_sent = vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__5(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_en;
}
