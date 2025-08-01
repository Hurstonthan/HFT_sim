// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__ico(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vethernet_rx___024root___eval_triggers__ico(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_triggers__ico\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.setBit(1U, (vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__1));
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__1 
        = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vethernet_rx___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vethernet_rx___024root___ico_sequent__TOP__0(Vethernet_rx___024root* vlSelf);
void Vethernet_rx_ethernet_rx___ico_sequent__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_IP_rx___ico_sequent__TOP__ethernet_rx__ip_inst__0(Vethernet_rx_IP_rx* vlSelf);
void Vethernet_rx_priority_encoder__W8_Mz1___ico_sequent__TOP__ethernet_rx__mac_inst__crc_check_encoder__0(Vethernet_rx_priority_encoder__W8_Mz1* vlSelf);
void Vethernet_rx_priority_encoder__W10_Mz1___ico_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0(Vethernet_rx_priority_encoder__W10_Mz1* vlSelf);
void Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_ethernet_rx___ico_comb__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx_xgmii_little_to_big___ico_comb__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_xgmii_little_to_big___ico_comb__TOP__ethernet_rx__mac_inst__crc_convert__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_crc32_parallel_64bit___ico_comb__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx_crc32_parallel_64bit* vlSelf);

void Vethernet_rx___024root___eval_ico(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_ico\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vethernet_rx___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vethernet_rx_ethernet_rx___ico_sequent__TOP__ethernet_rx__0((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__0((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_IP_rx___ico_sequent__TOP__ethernet_rx__ip_inst__0((&vlSymsp->TOP__ethernet_rx__ip_inst));
        Vethernet_rx_priority_encoder__W8_Mz1___ico_sequent__TOP__ethernet_rx__mac_inst__crc_check_encoder__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder));
        Vethernet_rx_priority_encoder__W10_Mz1___ico_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs));
        Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__1((&vlSymsp->TOP__ethernet_rx__mac_inst));
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__0((&vlSymsp->TOP__ethernet_rx__mac_inst));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vethernet_rx_ethernet_rx___ico_comb__TOP__ethernet_rx__0((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_xgmii_little_to_big___ico_comb__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt));
        Vethernet_rx_xgmii_little_to_big___ico_comb__TOP__ethernet_rx__mac_inst__crc_convert__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert));
        Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__1((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_crc32_parallel_64bit___ico_comb__TOP__ethernet_rx__mac_inst__CRC__0((&vlSymsp->TOP__ethernet_rx__mac_inst__CRC));
    }
}

VL_INLINE_OPT void Vethernet_rx___024root___ico_sequent__TOP__0(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___ico_sequent__TOP__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ethernet_rx.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__ethernet_rx.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__ethernet_rx.xgmii_rxd = vlSelfRef.xgmii_rxd;
    vlSymsp->TOP__ethernet_rx.xgmii_rxc = vlSelfRef.xgmii_rxc;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__act(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vethernet_rx___024root___eval_triggers__act(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_triggers__act\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, (vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__2));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(6U, ((~ (IData)(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(8U, ((~ (IData)(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__nRST__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__2 
        = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__CLK__0 
        = vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__nRST__0 
        = vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__CLK__0 
        = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__nRST__0 
        = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__CLK__0 
        = vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__nRST__0 
        = vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__CLK__0 
        = vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__nRST__0 
        = vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__nRST;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vethernet_rx___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_ethernet_rx___act_sequent__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx_xgmii_little_to_big___act_sequent__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_xgmii_little_to_big___act_sequent__TOP__ethernet_rx__mac_inst__crc_convert__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_crc32_parallel_64bit___act_sequent__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx_crc32_parallel_64bit* vlSelf);

void Vethernet_rx___024root___eval_act(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_act\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__0((&vlSymsp->TOP__ethernet_rx__mac_inst));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vethernet_rx_ethernet_rx___act_sequent__TOP__ethernet_rx__0((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_xgmii_little_to_big___act_sequent__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt));
        Vethernet_rx_xgmii_little_to_big___act_sequent__TOP__ethernet_rx__mac_inst__crc_convert__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert));
        Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__1((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_crc32_parallel_64bit___act_sequent__TOP__ethernet_rx__mac_inst__CRC__0((&vlSymsp->TOP__ethernet_rx__mac_inst__CRC));
    }
}

void Vethernet_rx_chksum_tcp_pl___nba_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__0(Vethernet_rx_chksum_tcp_pl* vlSelf);
void Vethernet_rx_IP_rx___nba_sequent__TOP__ethernet_rx__ip_inst__0(Vethernet_rx_IP_rx* vlSelf);
void Vethernet_rx_crc32_parallel_64bit___nba_sequent__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx_crc32_parallel_64bit* vlSelf);
void Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_IP_rx___nba_sequent__TOP__ethernet_rx__ip_inst__1(Vethernet_rx_IP_rx* vlSelf);
void Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx___024root___nba_sequent__TOP__0(Vethernet_rx___024root* vlSelf);
void Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__1(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx_xgmii_little_to_big___nba_sequent__TOP__ethernet_rx__mac_inst__payload_cvrt__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_xgmii_little_to_big___nba_sequent__TOP__ethernet_rx__mac_inst__crc_frame_convert__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_priority_encoder__W10_Mz1___nba_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0(Vethernet_rx_priority_encoder__W10_Mz1* vlSelf);
void Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__2(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__2(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx_xgmii_little_to_big___nba_comb__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_xgmii_little_to_big___nba_comb__TOP__ethernet_rx__mac_inst__crc_convert__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
void Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf);
void Vethernet_rx_crc32_parallel_64bit___nba_comb__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx_crc32_parallel_64bit* vlSelf);
void Vethernet_rx_IP_rx___nba_comb__TOP__ethernet_rx__ip_inst__0(Vethernet_rx_IP_rx* vlSelf);
void Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__1(Vethernet_rx_ethernet_rx* vlSelf);
void Vethernet_rx_chksum_tcp_pl___nba_comb__TOP__ethernet_rx__ip_inst__chksum_inst__0(Vethernet_rx_chksum_tcp_pl* vlSelf);
void Vethernet_rx___024root___nba_comb__TOP__0(Vethernet_rx___024root* vlSelf);

void Vethernet_rx___024root___eval_nba(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_nba\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vethernet_rx_chksum_tcp_pl___nba_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__0((&vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vethernet_rx_IP_rx___nba_sequent__TOP__ethernet_rx__ip_inst__0((&vlSymsp->TOP__ethernet_rx__ip_inst));
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vethernet_rx_crc32_parallel_64bit___nba_sequent__TOP__ethernet_rx__mac_inst__CRC__0((&vlSymsp->TOP__ethernet_rx__mac_inst__CRC));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__0((&vlSymsp->TOP__ethernet_rx__mac_inst));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vethernet_rx_IP_rx___nba_sequent__TOP__ethernet_rx__ip_inst__1((&vlSymsp->TOP__ethernet_rx__ip_inst));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__0((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__1((&vlSymsp->TOP__ethernet_rx__mac_inst));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__1((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_xgmii_little_to_big___nba_sequent__TOP__ethernet_rx__mac_inst__payload_cvrt__0((&vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt));
        Vethernet_rx_xgmii_little_to_big___nba_sequent__TOP__ethernet_rx__mac_inst__crc_frame_convert__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert));
        Vethernet_rx_priority_encoder__W10_Mz1___nba_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs));
        Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__2((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_ethernet_rx___nba_sequent__TOP__ethernet_rx__2((&vlSymsp->TOP__ethernet_rx));
    }
    if ((0x79ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__0((&vlSymsp->TOP__ethernet_rx__mac_inst));
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__0((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_xgmii_little_to_big___nba_comb__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt));
        Vethernet_rx_xgmii_little_to_big___nba_comb__TOP__ethernet_rx__mac_inst__crc_convert__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert));
        Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__1((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_crc32_parallel_64bit___nba_comb__TOP__ethernet_rx__mac_inst__CRC__0((&vlSymsp->TOP__ethernet_rx__mac_inst__CRC));
    }
    if ((0x19eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vethernet_rx_IP_rx___nba_comb__TOP__ethernet_rx__ip_inst__0((&vlSymsp->TOP__ethernet_rx__ip_inst));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
        Vethernet_rx_ethernet_rx___nba_comb__TOP__ethernet_rx__1((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_chksum_tcp_pl___nba_comb__TOP__ethernet_rx__ip_inst__chksum_inst__0((&vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst));
        Vethernet_rx___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vethernet_rx___024root___nba_sequent__TOP__0(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___nba_sequent__TOP__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IP_valid = vlSymsp->TOP__ethernet_rx.IP_valid;
    vlSelfRef.IP_payload = vlSymsp->TOP__ethernet_rx.IP_payload;
    vlSelfRef.is_tcp = vlSymsp->TOP__ethernet_rx.is_tcp;
    vlSelfRef.is_udp = vlSymsp->TOP__ethernet_rx.is_udp;
}

VL_INLINE_OPT void Vethernet_rx___024root___nba_comb__TOP__0(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___nba_comb__TOP__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IP_flush = vlSymsp->TOP__ethernet_rx.IP_flush;
}
