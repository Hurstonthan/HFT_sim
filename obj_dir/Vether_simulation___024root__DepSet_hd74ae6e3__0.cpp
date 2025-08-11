// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation__Syms.h"
#include "Vether_simulation___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__ico(Vether_simulation___024root* vlSelf);
#endif  // VL_DEBUG

void Vether_simulation___024root___eval_triggers__ico(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_triggers__ico\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.setBit(1U, (vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__1));
    vlSelfRef.__VicoTriggered.setBit(2U, (vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__1));
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__1 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__1 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.setBit(1U, 1U);
        vlSelfRef.__VicoTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vether_simulation___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vether_simulation___024root___ico_sequent__TOP__0(Vether_simulation___024root* vlSelf);
void Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__0(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf);
void Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__0(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_TCP__F10_CBz1___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_priority_encoder__W8_Mz2___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0(Vether_simulation_priority_encoder__W8_Mz2* vlSelf);
void Vether_simulation_priority_encoder__W10_Mz2___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0(Vether_simulation_priority_encoder__W10_Mz2* vlSelf);
void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf);
void Vether_simulation_crc32_parallel_64bit___ico_sequent__TOP__ether_simulation__clt_inst__mac_tx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_TCP_flow_ctrl___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_checksum_TCP___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__inst__0(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_priority_encoder__W8_Mz2___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0(Vether_simulation_priority_encoder__W8_Mz2* vlSelf);
void Vether_simulation_priority_encoder__W10_Mz2___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0(Vether_simulation_priority_encoder__W10_Mz2* vlSelf);
void Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__1(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_crc32_parallel_64bit___ico_sequent__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_TCP_flow_ctrl___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_checksum_TCP___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__inst__0(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__1(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf);
void Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_TCP__F10_CBz1___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf);
void Vether_simulation___024root___ico_sequent__TOP__1(Vether_simulation___024root* vlSelf);
void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP_tx___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__2(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_tx___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__2(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_payload_FIFO___ico_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf);
void Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_payload_FIFO___ico_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf);
void Vether_simulation_TCP__F10_CBz1___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation___024root___ico_sequent__TOP__2(Vether_simulation___024root* vlSelf);
void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf);
void Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__3(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_FIFO_TX__F10___ico_sequent__TOP__ether_simulation__clt_inst__u_fifo_tx__0(Vether_simulation_FIFO_TX__F10* vlSelf);
void Vether_simulation_FIFO_TX__F10___ico_sequent__TOP__ether_simulation__svr_inst__u_fifo_tx__0(Vether_simulation_FIFO_TX__F10* vlSelf);
void Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top___ico_comb__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf);
void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top__CBz1___ico_comb__TOP__ether_simulation__svr_inst__0(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);

void Vether_simulation___024root___eval_ico(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_ico\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vether_simulation___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__0((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__0((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__0((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__clt_inst__ip_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__ip_rx));
        Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__clt_inst__mac_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx));
        Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        Vether_simulation_IP_rx___ico_sequent__TOP__ether_simulation__svr_inst__ip_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__ip_rx));
        Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__svr_inst__mac_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx));
        Vether_simulation_TCP__F10_CBz1___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_priority_encoder__W8_Mz2___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder));
        Vether_simulation_priority_encoder__W10_Mz2___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs));
        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__1((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_crc32_parallel_64bit___ico_sequent__TOP__ether_simulation__clt_inst__mac_tx__CRC__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC));
        Vether_simulation_TCP_flow_ctrl___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
        Vether_simulation_checksum_TCP___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__inst__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst));
        Vether_simulation_priority_encoder__W8_Mz2___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder));
        Vether_simulation_priority_encoder__W10_Mz2___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs));
        Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__1((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_crc32_parallel_64bit___ico_sequent__TOP__ether_simulation__svr_inst__mac_tx__CRC__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC));
        Vether_simulation_TCP_flow_ctrl___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
        Vether_simulation_checksum_TCP___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__inst__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst));
        Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__clt_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__1((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__1((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait));
        Vether_simulation_MAC_rx___ico_sequent__TOP__ether_simulation__svr_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        Vether_simulation_TCP__F10_CBz1___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__1((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait));
        Vether_simulation___024root___ico_sequent__TOP__1(vlSelf);
        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__2((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_TCP_tx___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx));
        Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__2((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_TCP_tx___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx));
        Vether_simulation_ether_simulation___ico_sequent__TOP__ether_simulation__2((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_payload_FIFO___ico_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo));
        Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__2((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_payload_FIFO___ico_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo));
        Vether_simulation_TCP__F10_CBz1___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__2((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation___024root___ico_sequent__TOP__2(vlSelf);
        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__3((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_top__CBz1___ico_sequent__TOP__ether_simulation__svr_inst__3((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_FIFO_TX__F10___ico_sequent__TOP__ether_simulation__clt_inst__u_fifo_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx));
        Vether_simulation_FIFO_TX__F10___ico_sequent__TOP__ether_simulation__svr_inst__u_fifo_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx));
    }
    if ((5ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vether_simulation_top___ico_comb__TOP__ether_simulation__clt_inst__0((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt));
        Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert));
        Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        Vether_simulation_crc32_parallel_64bit___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC));
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vether_simulation_top__CBz1___ico_comb__TOP__ether_simulation__svr_inst__0((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt));
        Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert));
        Vether_simulation_MAC_rx___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        Vether_simulation_crc32_parallel_64bit___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC));
    }
}

VL_INLINE_OPT void Vether_simulation___024root___ico_sequent__TOP__0(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___ico_sequent__TOP__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation.xgmii_rxc_clt = vlSelfRef.xgmii_rxc_clt;
    vlSymsp->TOP__ether_simulation.xgmii_rxd_clt = vlSelfRef.xgmii_rxd_clt;
    vlSymsp->TOP__ether_simulation.xgmii_rxc_svr = vlSelfRef.xgmii_rxc_svr;
    vlSymsp->TOP__ether_simulation.xgmii_rxd_svr = vlSelfRef.xgmii_rxd_svr;
    vlSymsp->TOP__ether_simulation.tb_count = vlSelfRef.tb_count;
    vlSymsp->TOP__ether_simulation.axis_r_en_clt = vlSelfRef.axis_r_en_clt;
    vlSymsp->TOP__ether_simulation.axis_r_en_svr = vlSelfRef.axis_r_en_svr;
    vlSymsp->TOP__ether_simulation.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__ether_simulation.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__ether_simulation.len_seq_clt = vlSelfRef.len_seq_clt;
    vlSymsp->TOP__ether_simulation.len_seq_svr = vlSelfRef.len_seq_svr;
    vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_clt 
        = vlSelfRef.soupbin_TCP_payload_clt;
    vlSymsp->TOP__ether_simulation.wr_FIFO_en_clt = vlSelfRef.wr_FIFO_en_clt;
    vlSymsp->TOP__ether_simulation.axis_last_clt = vlSelfRef.axis_last_clt;
    vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_svr 
        = vlSelfRef.soupbin_TCP_payload_svr;
    vlSymsp->TOP__ether_simulation.wr_FIFO_en_svr = vlSelfRef.wr_FIFO_en_svr;
    vlSymsp->TOP__ether_simulation.axis_last_svr = vlSelfRef.axis_last_svr;
    vlSymsp->TOP__ether_simulation.TX_en_clt = vlSelfRef.TX_en_clt;
    vlSymsp->TOP__ether_simulation.TX_en_svr = vlSelfRef.TX_en_svr;
    vlSymsp->TOP__ether_simulation.err_flag = vlSelfRef.err_flag;
    vlSymsp->TOP__ether_simulation.client_lost = vlSelfRef.client_lost;
    vlSymsp->TOP__ether_simulation.out_order = vlSelfRef.out_order;
    vlSymsp->TOP__ether_simulation.end_ss_clt = vlSelfRef.end_ss_clt;
    vlSymsp->TOP__ether_simulation.end_ss_svr = vlSelfRef.end_ss_svr;
}

VL_INLINE_OPT void Vether_simulation___024root___ico_sequent__TOP__1(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___ico_sequent__TOP__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_end_clt = vlSymsp->TOP__ether_simulation.frame_end_clt;
    vlSelfRef.frame_end_svr = vlSymsp->TOP__ether_simulation.frame_end_svr;
}

VL_INLINE_OPT void Vether_simulation___024root___ico_sequent__TOP__2(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___ico_sequent__TOP__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag_clt = vlSymsp->TOP__ether_simulation.TCP_stop_flag_clt;
    vlSelfRef.TCP_stop_flag_svr = vlSymsp->TOP__ether_simulation.TCP_stop_flag_svr;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__act(Vether_simulation___024root* vlSelf);
#endif  // VL_DEBUG

void Vether_simulation___024root___eval_triggers__act(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_triggers__act\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setWord(0U, VL_CONCAT_QII(64,32,32, 
                                                        VL_CONCAT_III(32,16,16, 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__CLK__0)))))), 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__CLK__0))))))), 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__CLK__0)))))), 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__CLK__0)))))))), 
                                                        VL_CONCAT_III(32,16,16, 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__CLK__0)))))), 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__CLK__0))))))), 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__CLK__0)))))), 
                                                                                VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__CLK__0))))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                ((~ (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nRST)) 
                                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__nRST__0)), 
                                                                                ((IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__CLK) 
                                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__CLK__0)))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr 
                                                                                != vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__2), 
                                                                                (vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr 
                                                                                != vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__2))))))));
    vlSelfRef.__VactTriggered.setBit(0x40U, ((IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__CLK) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(0x41U, ((~ (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nRST)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait____PVT__nRST__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__2 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__2 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait____PVT__CLK__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait____PVT__nRST__0 
        = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nRST;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vether_simulation___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top__CBz1___act_sequent__TOP__ether_simulation__svr_inst__0(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top___act_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf);
void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);

void Vether_simulation___024root___eval_act(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_act\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vether_simulation_top__CBz1___act_sequent__TOP__ether_simulation__svr_inst__0((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt));
        Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert));
        Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        Vether_simulation_crc32_parallel_64bit___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC));
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vether_simulation_top___act_sequent__TOP__ether_simulation__clt_inst__0((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt));
        Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert));
        Vether_simulation_MAC_rx___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        Vether_simulation_crc32_parallel_64bit___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC));
    }
}

void Vether_simulation_TCP_ISN__Cz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0(Vether_simulation_TCP_ISN__Cz1* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_TCP_ISN__Cz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0(Vether_simulation_TCP_ISN__Cz2* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_payload_FIFO___nba_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__0(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__0(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation___024root___nba_sequent__TOP__0(Vether_simulation___024root* vlSelf);
void Vether_simulation_payload_FIFO___nba_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__1(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation___024root___nba_sequent__TOP__1(Vether_simulation___024root* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__1(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__2(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation___024root___nba_sequent__TOP__2(Vether_simulation___024root* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__3(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation___024root___nba_sequent__TOP__3(Vether_simulation___024root* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_chksum_tcp_pl___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0(Vether_simulation_chksum_tcp_pl* vlSelf);
void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_chksum_tcp_pl___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(Vether_simulation_chksum_tcp_pl* vlSelf);
void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__inst__0(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__3(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__inst__0(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__3(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__2(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__2(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_flex_counter__S20___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0(Vether_simulation_flex_counter__S20* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__4(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_flex_counter__S20___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0(Vether_simulation_flex_counter__S20* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__4(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__2(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__4(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation___024root___nba_sequent__TOP__4(Vether_simulation___024root* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_svr__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__5(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_priority_encoder__W8_Mz2___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0(Vether_simulation_priority_encoder__W8_Mz2* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__2(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__6(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation___024root___nba_sequent__TOP__5(Vether_simulation___024root* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_clt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__7(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__3(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_priority_encoder__W8_Mz2___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0(Vether_simulation_priority_encoder__W8_Mz2* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__2(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__svr_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__4(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__clt_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__4(Vether_simulation_top* vlSelf);
void Vether_simulation_FIFO_TX__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_fifo_tx__0(Vether_simulation_FIFO_TX__F10* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__5(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__8(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__5(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__inst__1(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_FIFO_TX__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_fifo_tx__0(Vether_simulation_FIFO_TX__F10* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__5(Vether_simulation_top* vlSelf);
void Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__9(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__5(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation___024root___nba_sequent__TOP__6(Vether_simulation___024root* vlSelf);
void Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__inst__1(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__3(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__6(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__4(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__7(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__3(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__6(Vether_simulation_top* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__4(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__7(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP_tx___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__6(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__8(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_tx___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__6(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__8(Vether_simulation_top* vlSelf);
void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__1(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__9(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__7(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__1(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__9(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__7(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_TCP_receiver___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0(Vether_simulation_TCP_receiver* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__8(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__10(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__9(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__11(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_receiver___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0(Vether_simulation_TCP_receiver* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__8(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__10(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__9(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__11(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__10(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__10(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_flex_counter__S20___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0(Vether_simulation_flex_counter__S20* vlSelf);
void Vether_simulation_flex_counter__S20___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0(Vether_simulation_flex_counter__S20* vlSelf);
void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__0(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__0(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation___024root___nba_comb__TOP__0(Vether_simulation___024root* vlSelf);
void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf);
void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__1(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation___024root___nba_comb__TOP__1(Vether_simulation___024root* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_checksum_TCP___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__inst__0(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__1(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_checksum_TCP___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__inst__0(Vether_simulation_checksum_TCP* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_priority_encoder__W10_Mz2___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0(Vether_simulation_priority_encoder__W10_Mz2* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_priority_encoder__W10_Mz2___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0(Vether_simulation_priority_encoder__W10_Mz2* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__1(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__11(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__svr_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__2(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__11(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__clt_inst__ip_tx__0(Vether_simulation_IP_tx* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__3(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_chksum_tcp_pl___nba_comb__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0(Vether_simulation_chksum_tcp_pl* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation_IP_rx* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf);
void Vether_simulation_chksum_tcp_pl___nba_comb__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(Vether_simulation_chksum_tcp_pl* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_TCP_receiver___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0(Vether_simulation_TCP_receiver* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__3(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__4(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__2(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__4(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__5(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_receiver___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0(Vether_simulation_TCP_receiver* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__3(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__4(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0(Vether_simulation_priority_encoder__Wa* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__2(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__4(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__5(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__2(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__6(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__3(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__2(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__6(Vether_simulation_top* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf);
void Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__3(Vether_simulation_MAC_rx* vlSelf);
void Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(Vether_simulation_crc32_parallel_64bit* vlSelf);
void Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__5(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__7(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__5(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__7(Vether_simulation_top* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__4(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__6(Vether_simulation_TCP__F10_CBz1* vlSelf);
void Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf);
void Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__8(Vether_simulation_top__CBz1* vlSelf);
void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__2(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_payload_FIFO___nba_comb__TOP__ether_simulation__svr_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf);
void Vether_simulation___024root___nba_comb__TOP__2(Vether_simulation___024root* vlSelf);
void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__4(Vether_simulation_TCP_flow_ctrl* vlSelf);
void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__6(Vether_simulation_TCP__F10_CBz2* vlSelf);
void Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf);
void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__8(Vether_simulation_top* vlSelf);
void Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__3(Vether_simulation_ether_simulation* vlSelf);
void Vether_simulation_payload_FIFO___nba_comb__TOP__ether_simulation__clt_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf);
void Vether_simulation___024root___nba_comb__TOP__3(Vether_simulation___024root* vlSelf);
void Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__1(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_FIFO_TX__F10___nba_comb__TOP__ether_simulation__svr_inst__u_fifo_tx__0(Vether_simulation_FIFO_TX__F10* vlSelf);
void Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__1(Vether_simulation_TCP_tx* vlSelf);
void Vether_simulation_FIFO_TX__F10___nba_comb__TOP__ether_simulation__clt_inst__u_fifo_tx__0(Vether_simulation_FIFO_TX__F10* vlSelf);

void Vether_simulation___024root___eval_nba(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_nba\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xc0000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_ISN__Cz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0x300000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_ISN__Cz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_payload_FIFO___nba_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo));
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__0((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__0((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__1((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_payload_FIFO___nba_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__0((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__1((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__1((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xc000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__2((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me));
        Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe));
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__1((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__2((&vlSymsp->TOP__ether_simulation));
        Vether_simulation___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x30000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__2((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me));
        Vether_simulation_priority_encoder__Wa___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe));
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__1((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__3((&vlSymsp->TOP__ether_simulation));
        Vether_simulation___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x300000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__CRC__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC));
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
        Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx));
    }
    if ((0x3000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__CRC__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC));
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
        Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx));
    }
    if ((0xc000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_chksum_tcp_pl___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0((&vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst));
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
        Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__ip_rx));
    }
    if ((0x30000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_chksum_tcp_pl___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0((&vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst));
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
        Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__ip_rx));
    }
    if ((0xc0000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC));
        vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
    }
    if ((0xc00000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_crc32_parallel_64bit___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC));
        vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
    }
    if ((0xc000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__inst__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst));
        vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__3((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0x30000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__inst__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst));
        vlSelfRef.__Vm_traceActivity[0x13U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__3((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0xc000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait));
        vlSelfRef.__Vm_traceActivity[0x14U] = 1U;
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__2((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait));
        vlSelfRef.__Vm_traceActivity[0x15U] = 1U;
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__2((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
    }
    if ((0xc00000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_flex_counter__S20___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl));
        vlSelfRef.__Vm_traceActivity[0x16U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__4((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0x3000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_flex_counter__S20___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl));
        vlSelfRef.__Vm_traceActivity[0x17U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__4((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0xc000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__1((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx));
        vlSelfRef.__Vm_traceActivity[0x18U] = 1U;
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__2((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__4((&vlSymsp->TOP__ether_simulation));
        Vether_simulation___024root___nba_sequent__TOP__4(vlSelf);
        Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_svr__0((&vlSymsp->TOP__ether_simulation__cvrt_svr));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__5((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__2((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        Vether_simulation_priority_encoder__W8_Mz2___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder));
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__2((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
    }
    if ((0x30000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__1((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx));
        vlSelfRef.__Vm_traceActivity[0x19U] = 1U;
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__3((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__6((&vlSymsp->TOP__ether_simulation));
        Vether_simulation___024root___nba_sequent__TOP__5(vlSelf);
        Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_clt__0((&vlSymsp->TOP__ether_simulation__cvrt_clt));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__7((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__3((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        Vether_simulation_priority_encoder__W8_Mz2___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder));
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__2((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
    }
    if ((0xc0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__svr_inst__ip_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__ip_tx));
        vlSelfRef.__Vm_traceActivity[0x1aU] = 1U;
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__4((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0x300000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_tx___nba_sequent__TOP__ether_simulation__clt_inst__ip_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__ip_tx));
        vlSelfRef.__Vm_traceActivity[0x1bU] = 1U;
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__4((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0xc00000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_FIFO_TX__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_fifo_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx));
        vlSelfRef.__Vm_traceActivity[0x1cU] = 1U;
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__5((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__8((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__5((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__inst__1((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst));
    }
    if ((0x3000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_FIFO_TX__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_fifo_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx));
        vlSelfRef.__Vm_traceActivity[0x1dU] = 1U;
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__5((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_ether_simulation___nba_sequent__TOP__ether_simulation__9((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__5((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation___024root___nba_sequent__TOP__6(vlSelf);
        Vether_simulation_checksum_TCP___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__inst__1((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst));
    }
    if ((0xc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__3((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[0x1eU] = 1U;
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__6((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt));
        Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert));
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__4((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__7((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0x3000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__3((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[0x1fU] = 1U;
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__6((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt));
        Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert));
        Vether_simulation_MAC_rx___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__4((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__7((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0xc0000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_tx___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[0x20U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__6((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__8((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0x300000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_tx___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[0x21U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__6((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__8((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__1((&vlSymsp->TOP__ether_simulation__svr_inst__ip_rx));
        vlSelfRef.__Vm_traceActivity[0x22U] = 1U;
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__9((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__7((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__1((&vlSymsp->TOP__ether_simulation__clt_inst__ip_rx));
        vlSelfRef.__Vm_traceActivity[0x23U] = 1U;
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__9((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__7((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0xc00000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_receiver___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv));
        vlSelfRef.__Vm_traceActivity[0x24U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__8((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__10((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__9((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_top__CBz1___nba_sequent__TOP__ether_simulation__svr_inst__11((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0x3000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_receiver___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv));
        vlSelfRef.__Vm_traceActivity[0x25U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__8((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__10((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__9((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__11((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0xc0000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__10((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0x300000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__10((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0xc0000c000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_flex_counter__S20___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl));
    }
    if ((0x3000030000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_flex_counter__S20___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl));
    }
    if ((0x3000000cc000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx));
        Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__CRC__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC));
    }
    if ((0xcc000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__1((&vlSymsp->TOP__ether_simulation__svr_inst__mac_tx));
        vlSelfRef.__Vm_traceActivity[0x26U] = 1U;
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__0((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__0((&vlSymsp->TOP__ether_simulation));
        Vether_simulation___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x3000000330000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx));
        Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__CRC__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC));
    }
    if ((0x330000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__1((&vlSymsp->TOP__ether_simulation__clt_inst__mac_tx));
        vlSelfRef.__Vm_traceActivity[0x27U] = 1U;
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__0((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__1((&vlSymsp->TOP__ether_simulation));
        Vether_simulation___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xcc00000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        vlSelfRef.__Vm_traceActivity[0x28U] = 1U;
        Vether_simulation_checksum_TCP___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__inst__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst));
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__1((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0x33000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        vlSelfRef.__Vm_traceActivity[0x29U] = 1U;
        Vether_simulation_checksum_TCP___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__inst__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst));
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__1((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0x30c00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[0x2aU] = 1U;
        Vether_simulation_priority_encoder__W10_Mz2___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs));
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
    }
    if ((0xf000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[0x2bU] = 1U;
        Vether_simulation_priority_encoder__W10_Mz2___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs));
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__1((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
    }
    if ((0xc00000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP__F10_CBz1___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__11((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0xc00cc000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__svr_inst__ip_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__ip_tx));
        vlSelfRef.__Vm_traceActivity[0x2cU] = 1U;
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__2((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__1((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0x3000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__11((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0x300330000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_tx___nba_comb__TOP__ether_simulation__clt_inst__ip_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__ip_tx));
        vlSelfRef.__Vm_traceActivity[0x2dU] = 1U;
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__2((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__1((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0xc000000000cc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__svr_inst__ip_rx__0((&vlSymsp->TOP__ether_simulation__svr_inst__ip_rx));
        vlSelfRef.__Vm_traceActivity[0x2eU] = 1U;
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__3((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_chksum_tcp_pl___nba_comb__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0((&vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst));
        Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__2((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
    }
    if ((0x30000000003300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_IP_rx___nba_comb__TOP__ether_simulation__clt_inst__ip_rx__0((&vlSymsp->TOP__ether_simulation__clt_inst__ip_rx));
        vlSelfRef.__Vm_traceActivity[0x2fU] = 1U;
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__3((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_chksum_tcp_pl___nba_comb__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0((&vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst));
        Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__2((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
    }
    if ((0xc000000c0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_receiver___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv));
        vlSelfRef.__Vm_traceActivity[0x30U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__3((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__4((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0xcc00000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0x31U] = 1U;
        Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt));
        Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt));
        Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov));
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__1((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
    }
    if ((0xccc000000cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__2((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0x32U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__4((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__5((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0x3000000300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_receiver___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv));
        vlSelfRef.__Vm_traceActivity[0x33U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__3((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__4((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0x33000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0x34U] = 1U;
        Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt));
        Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt));
        Vether_simulation_priority_encoder__Wa___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov));
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__1((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
    }
    if ((0x33300000030ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__2((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0x35U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__4((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__5((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0xc000c000c00000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
    }
    if ((0x300030003000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
    }
    if ((0xc0000030c01ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__2((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[0x36U] = 1U;
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__6((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt));
        Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert));
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__3((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx));
        Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC));
    }
    if ((0xc0000000f002ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__2((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        vlSelfRef.__Vm_traceActivity[0x37U] = 1U;
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__6((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt));
        Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert));
        Vether_simulation_MAC_rx___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__3((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx));
        Vether_simulation_crc32_parallel_64bit___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__CRC__0((&vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC));
    }
    if ((0xccc0ccc00cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[0x38U] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__5((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__7((&vlSymsp->TOP__ether_simulation__svr_inst));
    }
    if ((0x33303330030ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[0x39U] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__5((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__7((&vlSymsp->TOP__ether_simulation__clt_inst));
    }
    if ((0xccc000ccc0c000ccULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__4((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0x3aU] = 1U;
        Vether_simulation_TCP__F10_CBz1___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__6((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp));
        Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait));
        Vether_simulation_top__CBz1___nba_comb__TOP__ether_simulation__svr_inst__8((&vlSymsp->TOP__ether_simulation__svr_inst));
        Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__2((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_payload_FIFO___nba_comb__TOP__ether_simulation__svr_inst__u_payload_fifo__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo));
        Vether_simulation___024root___nba_comb__TOP__2(vlSelf);
    }
    if (((3ULL & vlSelfRef.__VnbaTriggered.word(1U)) 
         | (0x3300033303000330ULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__4((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0x3bU] = 1U;
        Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__6((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp));
        Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait));
        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__8((&vlSymsp->TOP__ether_simulation__clt_inst));
        Vether_simulation_ether_simulation___nba_comb__TOP__ether_simulation__3((&vlSymsp->TOP__ether_simulation));
        Vether_simulation_payload_FIFO___nba_comb__TOP__ether_simulation__clt_inst__u_payload_fifo__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo));
        Vether_simulation___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0xccccccc00cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__1((&vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[0x3cU] = 1U;
        Vether_simulation_FIFO_TX__F10___nba_comb__TOP__ether_simulation__svr_inst__u_fifo_tx__0((&vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx));
    }
    if ((0x33333330030ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vether_simulation_TCP_tx___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__1((&vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[0x3dU] = 1U;
        Vether_simulation_FIFO_TX__F10___nba_comb__TOP__ether_simulation__clt_inst__u_fifo_tx__0((&vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx));
    }
}

VL_INLINE_OPT void Vether_simulation___024root___nba_sequent__TOP__0(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_sequent__TOP__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_rd_data_svr = vlSymsp->TOP__ether_simulation.axis_rd_data_svr;
    vlSelfRef.axis_r_valid_svr = vlSymsp->TOP__ether_simulation.axis_r_valid_svr;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_sequent__TOP__1(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_sequent__TOP__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_rd_data_clt = vlSymsp->TOP__ether_simulation.axis_rd_data_clt;
    vlSelfRef.axis_r_valid_clt = vlSymsp->TOP__ether_simulation.axis_r_valid_clt;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_sequent__TOP__2(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_sequent__TOP__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.seq_num_svr = vlSymsp->TOP__ether_simulation.seq_num_svr;
    vlSelfRef.rcv_next_svr = vlSymsp->TOP__ether_simulation.rcv_next_svr;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_sequent__TOP__3(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_sequent__TOP__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.seq_num_clt = vlSymsp->TOP__ether_simulation.seq_num_clt;
    vlSelfRef.rcv_next_clt = vlSymsp->TOP__ether_simulation.rcv_next_clt;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_sequent__TOP__4(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_sequent__TOP__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xgmii_txd_svr = vlSymsp->TOP__ether_simulation.xgmii_txd_svr;
    vlSelfRef.xgmii_txc_svr = vlSymsp->TOP__ether_simulation.xgmii_txc_svr;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_sequent__TOP__5(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_sequent__TOP__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xgmii_txd_clt = vlSymsp->TOP__ether_simulation.xgmii_txd_clt;
    vlSelfRef.xgmii_txc_clt = vlSymsp->TOP__ether_simulation.xgmii_txc_clt;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_sequent__TOP__6(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_sequent__TOP__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_FIFO_valid_clt = vlSymsp->TOP__ether_simulation.wr_FIFO_valid_clt;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_comb__TOP__0(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_comb__TOP__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_end_svr = vlSymsp->TOP__ether_simulation.frame_end_svr;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_comb__TOP__1(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_comb__TOP__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_end_clt = vlSymsp->TOP__ether_simulation.frame_end_clt;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_comb__TOP__2(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_comb__TOP__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag_svr = vlSymsp->TOP__ether_simulation.TCP_stop_flag_svr;
}

VL_INLINE_OPT void Vether_simulation___024root___nba_comb__TOP__3(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___nba_comb__TOP__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag_clt = vlSymsp->TOP__ether_simulation.TCP_stop_flag_clt;
}
