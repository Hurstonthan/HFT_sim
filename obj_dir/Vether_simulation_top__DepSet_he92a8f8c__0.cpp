// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_FIFO_TX__F10.h"
#include "Vether_simulation_IP_rx.h"
#include "Vether_simulation_IP_tx.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_MAC_tx.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_payload_FIFO.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__svr_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__svr_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_en 
        = vlSelfRef.__PVT__axis_r_en;
    vlSelf->__PVT__ip_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_payload_fifo->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_fifo_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_tcp->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_payload_fifo->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ip_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_tcp->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__len_seq = vlSelfRef.__PVT__len_seq;
    vlSelf->__PVT__u_tcp->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_fifo_tx->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_TX_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_tcp->__PVT__wr_axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_fifo_tx->__PVT__axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_tcp->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__mac_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
}

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_en 
        = vlSelfRef.__PVT__axis_r_en;
    vlSelf->__PVT__ip_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_payload_fifo->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_fifo_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_tcp->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_payload_fifo->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ip_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_tcp->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__len_seq = vlSelfRef.__PVT__len_seq;
    vlSelf->__PVT__u_tcp->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_fifo_tx->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_TX_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_tcp->__PVT__wr_axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_fifo_tx->__PVT__axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_tcp->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__mac_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
}
