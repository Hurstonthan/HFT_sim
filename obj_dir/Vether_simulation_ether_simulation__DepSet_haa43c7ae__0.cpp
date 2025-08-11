// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation__Syms.h"
#include "Vether_simulation_ether_simulation.h"

VL_INLINE_OPT void Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__0(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_en 
        = vlSelfRef.axis_r_en_clt;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_en 
        = vlSelfRef.axis_r_en_svr;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nRST 
        = vlSelfRef.nRST;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nRST 
        = vlSelfRef.nRST;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CLK 
        = vlSelfRef.CLK;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CLK 
        = vlSelfRef.CLK;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__len_seq 
        = vlSelfRef.len_seq_clt;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__len_seq 
        = vlSelfRef.len_seq_svr;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__soupbin_TCP_payload 
        = vlSelfRef.soupbin_TCP_payload_clt;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_en 
        = vlSelfRef.wr_FIFO_en_clt;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_last 
        = vlSelfRef.axis_last_clt;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__soupbin_TCP_payload 
        = vlSelfRef.soupbin_TCP_payload_svr;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_en 
        = vlSelfRef.wr_FIFO_en_svr;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_last 
        = vlSelfRef.axis_last_svr;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TX_en 
        = vlSelfRef.TX_en_clt;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TX_en 
        = vlSelfRef.TX_en_svr;
    vlSelfRef.__Vcellinp__svr_inst__xgmii_rxd = ((IData)(vlSelfRef.err_flag)
                                                  ? 0xffffffffffffffffULL
                                                  : vlSelfRef.__PVT__xgmii_rxd_svr_cvrt);
    vlSelfRef.__Vcellinp__svr_inst__xgmii_rxc = ((IData)(vlSelfRef.err_flag)
                                                  ? 0ULL
                                                  : 
                                                 VL_EXTEND_QI(64,8, (IData)(vlSelfRef.__PVT__xgmii_rxc_svr_cvrt)));
    vlSelfRef.__Vcellinp__clt_inst__xgmii_rxd = ((IData)(vlSelfRef.client_lost)
                                                  ? 0x70707070707ULL
                                                  : vlSelfRef.__PVT__xgmii_rxd_clt_cvrt);
    vlSelfRef.__Vcellinp__clt_inst__xgmii_rxc = ((IData)(vlSelfRef.client_lost)
                                                  ? 0xffULL
                                                  : 
                                                 VL_EXTEND_QI(64,8, (IData)(vlSelfRef.__PVT__xgmii_rxc_clt_cvrt)));
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__out_order 
        = vlSelfRef.out_order;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__end_ss 
        = vlSelfRef.end_ss_clt;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__end_ss 
        = vlSelfRef.end_ss_svr;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxd 
        = vlSelfRef.__Vcellinp__svr_inst__xgmii_rxd;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxc 
        = vlSelfRef.__Vcellinp__svr_inst__xgmii_rxc;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxd 
        = vlSelfRef.__Vcellinp__clt_inst__xgmii_rxd;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxc 
        = vlSelfRef.__Vcellinp__clt_inst__xgmii_rxc;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__1(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_end_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_end;
    vlSelfRef.frame_end_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__2(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flag;
    vlSelfRef.TCP_stop_flag_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flag;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__0(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_rd_data_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_rd_data;
    vlSelfRef.axis_r_valid_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_valid;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__1(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_rd_data_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_rd_data;
    vlSelfRef.axis_r_valid_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_valid;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__2(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.seq_num_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num;
    vlSelfRef.rcv_next_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rcv_next;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__3(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.seq_num_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num;
    vlSelfRef.rcv_next_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rcv_next;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__4(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xgmii_txd_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txd;
    vlSelfRef.xgmii_txc_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txc;
    vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxd 
        = vlSelfRef.xgmii_txd_svr;
    vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxc 
        = vlSelfRef.xgmii_txc_svr;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__5(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xgmii_rxd_clt_cvrt = vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxd;
    vlSelfRef.__PVT__xgmii_rxc_clt_cvrt = vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxc;
    vlSelfRef.__Vcellinp__clt_inst__xgmii_rxd = ((IData)(vlSelfRef.client_lost)
                                                  ? 0x70707070707ULL
                                                  : vlSelfRef.__PVT__xgmii_rxd_clt_cvrt);
    vlSelfRef.__Vcellinp__clt_inst__xgmii_rxc = ((IData)(vlSelfRef.client_lost)
                                                  ? 0xffULL
                                                  : 
                                                 VL_EXTEND_QI(64,8, (IData)(vlSelfRef.__PVT__xgmii_rxc_clt_cvrt)));
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxd 
        = vlSelfRef.__Vcellinp__clt_inst__xgmii_rxd;
    vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxc 
        = vlSelfRef.__Vcellinp__clt_inst__xgmii_rxc;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__6(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xgmii_txd_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txd;
    vlSelfRef.xgmii_txc_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txc;
    vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxd 
        = vlSelfRef.xgmii_txd_clt;
    vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxc 
        = vlSelfRef.xgmii_txc_clt;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__7(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xgmii_rxd_svr_cvrt = vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxd;
    vlSelfRef.__PVT__xgmii_rxc_svr_cvrt = vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxc;
    vlSelfRef.__Vcellinp__svr_inst__xgmii_rxd = ((IData)(vlSelfRef.err_flag)
                                                  ? 0xffffffffffffffffULL
                                                  : vlSelfRef.__PVT__xgmii_rxd_svr_cvrt);
    vlSelfRef.__Vcellinp__svr_inst__xgmii_rxc = ((IData)(vlSelfRef.err_flag)
                                                  ? 0ULL
                                                  : 
                                                 VL_EXTEND_QI(64,8, (IData)(vlSelfRef.__PVT__xgmii_rxc_svr_cvrt)));
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxd 
        = vlSelfRef.__Vcellinp__svr_inst__xgmii_rxd;
    vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxc 
        = vlSelfRef.__Vcellinp__svr_inst__xgmii_rxc;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__8(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_FIFO_valid_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_valid;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__9(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__9\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_FIFO_valid_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_valid;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__0(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_end_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__1(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_end_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__2(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag_svr = vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flag;
}

VL_INLINE_OPT void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__3(Vether_simulation_ether_simulation* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag_clt = vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flag;
}
