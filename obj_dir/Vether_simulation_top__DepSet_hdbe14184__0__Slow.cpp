// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_FIFO_TX__F10.h"
#include "Vether_simulation_IP_rx.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_payload_FIFO.h"
#include "Vether_simulation_top.h"

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxd = vlSelfRef.__PVT__xgmii_rxd;
    vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc = (0xffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxc, 0U, 8U));
    vlSelfRef.__PVT__IP_flush = vlSelf->__PVT__ip_rx->__PVT__IP_flush;
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSelf->__PVT__u_tcp->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_pfifo_en_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_offset_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_pfifo_valid_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_rcv;
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__u_tcp->__PVT__seq_num_tx_out;
    vlSelfRef.__PVT__rd_pfifo_ptr_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__rd_pfifo_len_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_len;
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxc = vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc;
    vlSelf->__PVT__u_tcp->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
    vlSelfRef.__PVT__TCP_stop_flag = vlSelfRef.__PVT__TCP_stop_flg_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_pfifo_en_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_offset 
        = vlSelfRef.__PVT__wr_pfifo_offset_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_pfifo_valid_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_ptr 
        = vlSelfRef.__PVT__rd_pfifo_ptr_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_len 
        = vlSelfRef.__PVT__rd_pfifo_len_int;
}

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxd = vlSelfRef.__PVT__xgmii_rxd;
    vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc = (0xffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxc, 0U, 8U));
    vlSelfRef.__PVT__IP_flush = vlSelf->__PVT__ip_rx->__PVT__IP_flush;
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSelf->__PVT__u_tcp->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_pfifo_en_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_offset_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_pfifo_valid_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_rcv;
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__u_tcp->__PVT__seq_num_tx_out;
    vlSelfRef.__PVT__rd_pfifo_ptr_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__rd_pfifo_len_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_len;
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxc = vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc;
    vlSelf->__PVT__u_tcp->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
    vlSelfRef.__PVT__TCP_stop_flag = vlSelfRef.__PVT__TCP_stop_flg_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_pfifo_en_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_offset 
        = vlSelfRef.__PVT__wr_pfifo_offset_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_pfifo_valid_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_ptr 
        = vlSelfRef.__PVT__rd_pfifo_ptr_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_len 
        = vlSelfRef.__PVT__rd_pfifo_len_int;
}
