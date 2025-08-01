// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx___024root.h"

VL_ATTR_COLD void Vethernet_rx___024root___eval_static(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_static\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__0 
        = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__1 
        = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr;
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
}

VL_ATTR_COLD void Vethernet_rx_MAC_rx___eval_initial__TOP__ethernet_rx__mac_inst(Vethernet_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx___024root____Vm_traceActivitySetAll(Vethernet_rx___024root* vlSelf);

VL_ATTR_COLD void Vethernet_rx___024root___eval_initial(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_initial\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vethernet_rx_MAC_rx___eval_initial__TOP__ethernet_rx__mac_inst((&vlSymsp->TOP__ethernet_rx__mac_inst));
    Vethernet_rx___024root____Vm_traceActivitySetAll(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__stl(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vethernet_rx___024root___eval_triggers__stl(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_triggers__stl\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, (vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__0));
    vlSelfRef.__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__0 
        = vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vethernet_rx___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__crc_convert__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__crc_frame_convert__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__payload_cvrt__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx___024root___stl_sequent__TOP__0(Vethernet_rx___024root* vlSelf);
VL_ATTR_COLD void Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__0(Vethernet_rx_chksum_tcp_pl* vlSelf);
VL_ATTR_COLD void Vethernet_rx_MAC_rx___stl_sequent__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_crc32_parallel_64bit___stl_sequent__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx_crc32_parallel_64bit* vlSelf);
VL_ATTR_COLD void Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__1(Vethernet_rx_ethernet_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_IP_rx___stl_sequent__TOP__ethernet_rx__ip_inst__0(Vethernet_rx_IP_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__payload_cvrt__1(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__crc_frame_convert__1(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_MAC_rx___stl_sequent__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_priority_encoder__W8_Mz1___stl_sequent__TOP__ethernet_rx__mac_inst__crc_check_encoder__0(Vethernet_rx_priority_encoder__W8_Mz1* vlSelf);
VL_ATTR_COLD void Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__2(Vethernet_rx_ethernet_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_priority_encoder__W10_Mz1___stl_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0(Vethernet_rx_priority_encoder__W10_Mz1* vlSelf);
VL_ATTR_COLD void Vethernet_rx_MAC_rx___stl_sequent__TOP__ethernet_rx__mac_inst__2(Vethernet_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_IP_rx___stl_sequent__TOP__ethernet_rx__ip_inst__1(Vethernet_rx_IP_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__3(Vethernet_rx_ethernet_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__1(Vethernet_rx_chksum_tcp_pl* vlSelf);
VL_ATTR_COLD void Vethernet_rx___024root___stl_sequent__TOP__1(Vethernet_rx___024root* vlSelf);
VL_ATTR_COLD void Vethernet_rx_MAC_rx___stl_comb__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_ethernet_rx___stl_comb__TOP__ethernet_rx__0(Vethernet_rx_ethernet_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_comb__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_xgmii_little_to_big___stl_comb__TOP__ethernet_rx__mac_inst__crc_convert__0(Vethernet_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void Vethernet_rx_MAC_rx___stl_comb__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void Vethernet_rx_crc32_parallel_64bit___stl_comb__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx_crc32_parallel_64bit* vlSelf);

VL_ATTR_COLD void Vethernet_rx___024root___eval_stl(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_stl\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__crc_convert__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert));
        Vethernet_rx___024root____Vm_traceActivitySetAll(vlSelf);
        Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__crc_frame_convert__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert));
        Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__payload_cvrt__0((&vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt));
        Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt));
        Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__0((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx___024root___stl_sequent__TOP__0(vlSelf);
        Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__0((&vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst));
        Vethernet_rx_MAC_rx___stl_sequent__TOP__ethernet_rx__mac_inst__0((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_crc32_parallel_64bit___stl_sequent__TOP__ethernet_rx__mac_inst__CRC__0((&vlSymsp->TOP__ethernet_rx__mac_inst__CRC));
        Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__1((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_IP_rx___stl_sequent__TOP__ethernet_rx__ip_inst__0((&vlSymsp->TOP__ethernet_rx__ip_inst));
        Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__payload_cvrt__1((&vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt));
        Vethernet_rx_xgmii_little_to_big___stl_sequent__TOP__ethernet_rx__mac_inst__crc_frame_convert__1((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert));
        Vethernet_rx_MAC_rx___stl_sequent__TOP__ethernet_rx__mac_inst__1((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_priority_encoder__W8_Mz1___stl_sequent__TOP__ethernet_rx__mac_inst__crc_check_encoder__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder));
        Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__2((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_priority_encoder__W10_Mz1___stl_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs));
        Vethernet_rx_MAC_rx___stl_sequent__TOP__ethernet_rx__mac_inst__2((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_IP_rx___stl_sequent__TOP__ethernet_rx__ip_inst__1((&vlSymsp->TOP__ethernet_rx__ip_inst));
        Vethernet_rx_ethernet_rx___stl_sequent__TOP__ethernet_rx__3((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__1((&vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst));
        Vethernet_rx___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vethernet_rx_MAC_rx___stl_comb__TOP__ethernet_rx__mac_inst__0((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx___024root____Vm_traceActivitySetAll(vlSelf);
        Vethernet_rx_ethernet_rx___stl_comb__TOP__ethernet_rx__0((&vlSymsp->TOP__ethernet_rx));
        Vethernet_rx_xgmii_little_to_big___stl_comb__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0((&vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt));
        Vethernet_rx_xgmii_little_to_big___stl_comb__TOP__ethernet_rx__mac_inst__crc_convert__0((&vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert));
        Vethernet_rx_MAC_rx___stl_comb__TOP__ethernet_rx__mac_inst__1((&vlSymsp->TOP__ethernet_rx__mac_inst));
        Vethernet_rx_crc32_parallel_64bit___stl_comb__TOP__ethernet_rx__mac_inst__CRC__0((&vlSymsp->TOP__ethernet_rx__mac_inst__CRC));
    }
}

VL_ATTR_COLD void Vethernet_rx___024root___stl_sequent__TOP__0(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___stl_sequent__TOP__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ethernet_rx.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__ethernet_rx.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__ethernet_rx.xgmii_rxd = vlSelfRef.xgmii_rxd;
    vlSymsp->TOP__ethernet_rx.xgmii_rxc = vlSelfRef.xgmii_rxc;
    vlSelfRef.is_tcp = vlSymsp->TOP__ethernet_rx.is_tcp;
    vlSelfRef.is_udp = vlSymsp->TOP__ethernet_rx.is_udp;
    vlSelfRef.IP_payload = vlSymsp->TOP__ethernet_rx.IP_payload;
    vlSelfRef.IP_valid = vlSymsp->TOP__ethernet_rx.IP_valid;
}

VL_ATTR_COLD void Vethernet_rx___024root___stl_sequent__TOP__1(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___stl_sequent__TOP__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IP_flush = vlSymsp->TOP__ethernet_rx.IP_flush;
}
