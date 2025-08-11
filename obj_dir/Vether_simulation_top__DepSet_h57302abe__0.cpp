// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation__Syms.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_en 
        = vlSelfRef.__PVT__axis_r_en;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__len_seq 
        = vlSelfRef.__PVT__len_seq;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_TX_en 
        = vlSelfRef.__PVT__wr_FIFO_en;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_FIFO_en;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_axis_last 
        = vlSelfRef.__PVT__axis_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__axis_last 
        = vlSelfRef.__PVT__axis_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TX_en 
        = vlSelfRef.__PVT__TX_en;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__TX_en 
        = vlSelfRef.__PVT__TX_en;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TX_en 
        = vlSelfRef.__PVT__TX_en;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order 
        = vlSelfRef.__PVT__out_order;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__end_ss 
        = vlSelfRef.__PVT__end_ss;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__end_ss 
        = vlSelfRef.__PVT__end_ss;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__xgmii_rxd;
    vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc = (0xffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxc, 0U, 8U));
    vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc 
        = vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc;
}

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_end = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_pfifo_en_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_offset_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_pfifo_valid_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_rcv;
    vlSelfRef.__PVT__rd_pfifo_ptr_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__rd_pfifo_len_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__seq_num_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx_out;
    vlSelfRef.__PVT__TCP_stop_flag = vlSelfRef.__PVT__TCP_stop_flg_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_pfifo_en_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_offset 
        = vlSelfRef.__PVT__wr_pfifo_offset_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_pfifo_valid_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_ptr 
        = vlSelfRef.__PVT__rd_pfifo_ptr_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_len 
        = vlSelfRef.__PVT__rd_pfifo_len_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_num_tx 
        = vlSelfRef.__PVT__seq_num_tx;
}

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ftx_en_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_en 
        = vlSelfRef.__PVT__rd_ftx_en_int;
}

VL_INLINE_OPT void Vether_simulation_top___ico_comb__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_comb__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_ok;
    vlSelfRef.__PVT__CRC_flush = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CRC_flush;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_flush 
        = vlSelfRef.__PVT__CRC_flush;
}

VL_INLINE_OPT void Vether_simulation_top___act_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___act_sequent__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_ok;
    vlSelfRef.__PVT__CRC_flush = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CRC_flush;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_flush 
        = vlSelfRef.__PVT__CRC_flush;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axis_rd_data = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_rd_data;
    vlSelfRef.__PVT__axis_r_valid = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_valid;
    vlSelfRef.__PVT__rd_pfifo_en_int = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_en;
    vlSelfRef.__PVT__seq_rx_FIFO_rd_int = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__wr_pfifo_len_int = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_len;
    vlSelfRef.__PVT__wr_ptr_out_int = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr_out;
    vlSelfRef.__PVT__full = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__full;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_rcv 
        = vlSelfRef.__PVT__rd_pfifo_en_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_len 
        = vlSelfRef.__PVT__wr_pfifo_len_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_ptr_out 
        = vlSelfRef.__PVT__wr_ptr_out_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__full 
        = vlSelfRef.__PVT__full;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_rcv_start_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rcv_start;
    vlSelfRef.__PVT__handshake_done_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__handshake_done;
    vlSelfRef.__PVT__out_order_req_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order_req;
    vlSelfRef.__PVT__seq_num = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num;
    vlSelfRef.__PVT__rcv_next = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_next;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rcv_start 
        = vlSelfRef.__PVT__seq_rcv_start_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__hand_shake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req 
        = vlSelfRef.__PVT__out_order_req_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__xgmii_rxd;
    vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc = (0xffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxc, 0U, 8U));
    vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc 
        = vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_send = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send;
    vlSelfRef.__PVT__xgmii_txd = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd;
    vlSelfRef.__PVT__xgmii_txc = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_send 
        = vlSelfRef.__PVT__IP_send;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_tx_last = vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_last;
    vlSelfRef.__PVT__IP_transmit = vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_transmit;
    vlSelfRef.__PVT__tt_len_data = vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__tt_len_data;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_last 
        = vlSelfRef.__PVT__IP_tx_last;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_transmit 
        = vlSelfRef.__PVT__IP_transmit;
    vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__tt_len_data 
        = vlSelfRef.__PVT__tt_len_data;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__5(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_FIFO_valid = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_valid;
    vlSelfRef.__PVT__rd_ftx_valid_int = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__rd_ftx_last_int = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__rd_ftx_payload_int = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__bytes_abt_sent_int = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent;
    vlSelfRef.__PVT__re_trans_int = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__re_trans;
    vlSelfRef.__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_tx 
        = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelfRef.__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_last 
        = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelfRef.__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_payload 
        = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelfRef.__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_abt_sent 
        = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__re_trans 
        = vlSelfRef.__PVT__re_trans_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__6(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_valid = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_valid;
    vlSelfRef.__PVT__bytes_rcv_len = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_len;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_valid 
        = vlSelfRef.__PVT__MAC_valid;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv_len 
        = vlSelfRef.__PVT__bytes_rcv_len;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__7(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_payload_rcv 
        = vlSelfRef.__PVT__MAC_payload_rcv;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__8(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_len_data = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_transmit = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_tx_last = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_tx_last;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__len_data 
        = vlSelfRef.__PVT__TCP_len_data;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_transmit 
        = vlSelfRef.__PVT__TCP_transmit;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_last 
        = vlSelfRef.__PVT__TCP_tx_last;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__9(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__9\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_valid = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_valid;
    vlSelfRef.__PVT__IP_bytes_rcv_len = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_bytes_rcv_len;
    vlSelfRef.__PVT__IP_rx_last = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_last;
    vlSelfRef.__PVT__protocol_data_flag = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__protocol_data_flag;
    vlSelfRef.__PVT__IP_payload = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_payload;
    vlSelfRef.__PVT__IP_pseuder = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_pseuder;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_valid 
        = vlSelfRef.__PVT__IP_valid;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_bytes_rcv 
        = vlSelfRef.__PVT__IP_bytes_rcv_len;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_last 
        = vlSelfRef.__PVT__IP_rx_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_data_flag 
        = vlSelfRef.__PVT__protocol_data_flag;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_payload 
        = vlSelfRef.__PVT__IP_payload;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_pseuder 
        = vlSelfRef.__PVT__IP_pseuder;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__10(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__10\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axis_data_rx_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__axis_data_rx;
    vlSelfRef.__PVT__TCP_rx_last = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_rx_last;
    vlSelfRef.__PVT__nw_segment = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nw_segment;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_data_rx 
        = vlSelfRef.__PVT__axis_data_rx_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_t_last 
        = vlSelfRef.__PVT__TCP_rx_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__11(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__11\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rcv_flag;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num 
        = vlSelfRef.__PVT__ACK_num_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag 
        = vlSelfRef.__PVT__ACK_rcv_flag_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_end = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__checksum_TX = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_TX;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_TX 
        = vlSelfRef.__PVT__checksum_TX;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_send = vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_send;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_send 
        = vlSelfRef.__PVT__TCP_send;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_flush = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_flush;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_flush 
        = vlSelfRef.__PVT__IP_flush;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_flush_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_flush;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__5(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_num_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx_out;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_num_tx 
        = vlSelfRef.__PVT__seq_num_tx;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__6(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_ok = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_ok;
    vlSelfRef.__PVT__CRC_flush = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CRC_flush;
    vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_flush 
        = vlSelfRef.__PVT__CRC_flush;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__7(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ftx_en_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_en 
        = vlSelfRef.__PVT__rd_ftx_en_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__8(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_pfifo_en_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_offset_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_pfifo_valid_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_rcv;
    vlSelfRef.__PVT__rd_pfifo_ptr_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__rd_pfifo_len_int = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__TCP_stop_flag = vlSelfRef.__PVT__TCP_stop_flg_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_pfifo_en_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_offset 
        = vlSelfRef.__PVT__wr_pfifo_offset_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_pfifo_valid_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_ptr 
        = vlSelfRef.__PVT__rd_pfifo_ptr_int;
    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_len 
        = vlSelfRef.__PVT__rd_pfifo_len_int;
}
