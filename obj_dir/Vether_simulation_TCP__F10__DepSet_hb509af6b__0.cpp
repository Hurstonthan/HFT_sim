// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_ISN.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_TCP_receiver.h"
#include "Vether_simulation_TCP_tx.h"
#include "Vether_simulation_checksum_TCP.h"
#include "Vether_simulation_flex_counter__S20.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_flow->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_rcv->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__TCP_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ISN_gen->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__timeout_fl->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__inst->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_flow->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__tcp_rcv->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__TCP_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ISN_gen->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__timeout_fl->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__TCP_payload_tx = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__inst->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_TX_en;
    vlSelf->__PVT__inst->__PVT__axis_last = vlSelfRef.__PVT__wr_axis_last;
    vlSelf->__PVT__inst->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_flow->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_rcv->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__TCP_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ISN_gen->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__timeout_fl->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__inst->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_flow->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__tcp_rcv->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__TCP_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ISN_gen->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__timeout_fl->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__TCP_payload_tx = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__inst->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_TX_en;
    vlSelf->__PVT__inst->__PVT__axis_last = vlSelfRef.__PVT__wr_axis_last;
    vlSelf->__PVT__inst->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
}
