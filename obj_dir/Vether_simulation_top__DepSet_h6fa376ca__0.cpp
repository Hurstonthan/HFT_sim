// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_FIFO_TX__F10.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_payload_FIFO.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_rcv_start_int = vlSelf->__PVT__u_tcp->__PVT__seq_rcv_start;
    vlSelfRef.__PVT__handshake_done_int = vlSelf->__PVT__u_tcp->__PVT__handshake_done;
    vlSelfRef.__PVT__out_order_req_int = vlSelf->__PVT__u_tcp->__PVT__out_order_req;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__u_tcp->__PVT__seq_num;
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__u_tcp->__PVT__rcv_next;
    vlSelf->__PVT__u_payload_fifo->__PVT__seq_rcv_start 
        = vlSelfRef.__PVT__seq_rcv_start_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__handshake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__hand_shake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__out_order_req 
        = vlSelfRef.__PVT__out_order_req_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_rcv_start_int = vlSelf->__PVT__u_tcp->__PVT__seq_rcv_start;
    vlSelfRef.__PVT__handshake_done_int = vlSelf->__PVT__u_tcp->__PVT__handshake_done;
    vlSelfRef.__PVT__out_order_req_int = vlSelf->__PVT__u_tcp->__PVT__out_order_req;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__u_tcp->__PVT__seq_num;
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__u_tcp->__PVT__rcv_next;
    vlSelf->__PVT__u_payload_fifo->__PVT__seq_rcv_start 
        = vlSelfRef.__PVT__seq_rcv_start_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__handshake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__hand_shake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__out_order_req 
        = vlSelfRef.__PVT__out_order_req_int;
}
