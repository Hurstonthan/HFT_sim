// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx__Syms.h"
#include "VMAC_rx___024root.h"

VL_ATTR_COLD void VMAC_rx___024root___eval_static(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_static\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__0 
        = vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__1 
        = vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__2 
        = vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CLK__0 
        = vlSymsp->TOP__MAC_rx.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__nRST__0 
        = vlSymsp->TOP__MAC_rx.nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__CLK__0 
        = vlSymsp->TOP__MAC_rx__CRC.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__nRST__0 
        = vlSymsp->TOP__MAC_rx__CRC.__PVT__nRST;
}

VL_ATTR_COLD void VMAC_rx_MAC_rx___eval_initial__TOP__MAC_rx(VMAC_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void VMAC_rx___024root____Vm_traceActivitySetAll(VMAC_rx___024root* vlSelf);

VL_ATTR_COLD void VMAC_rx___024root___eval_initial(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_initial\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMAC_rx_MAC_rx___eval_initial__TOP__MAC_rx((&vlSymsp->TOP__MAC_rx));
    VMAC_rx___024root____Vm_traceActivitySetAll(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__stl(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC_rx___024root___eval_triggers__stl(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_triggers__stl\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, (vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__0));
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__0 
        = vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC_rx___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VMAC_rx___024root___stl_sequent__TOP__0(VMAC_rx___024root* vlSelf);
VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__0(VMAC_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void VMAC_rx_MAC_rx___stl_sequent__TOP__MAC_rx__0(VMAC_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void VMAC_rx_crc32_parallel_64bit___stl_sequent__TOP__MAC_rx__CRC__0(VMAC_rx_crc32_parallel_64bit* vlSelf);
VL_ATTR_COLD void VMAC_rx___024root___stl_sequent__TOP__1(VMAC_rx___024root* vlSelf);
VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__1(VMAC_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void VMAC_rx_priority_encoder__W10_Mz1___stl_sequent__TOP__MAC_rx__xgmii_fcs__0(VMAC_rx_priority_encoder__W10_Mz1* vlSelf);
VL_ATTR_COLD void VMAC_rx_priority_encoder__W8_Mz1___stl_sequent__TOP__MAC_rx__crc_check_encoder__0(VMAC_rx_priority_encoder__W8_Mz1* vlSelf);
VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__1(VMAC_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void VMAC_rx_MAC_rx___stl_sequent__TOP__MAC_rx__1(VMAC_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void VMAC_rx___024root___stl_sequent__TOP__2(VMAC_rx___024root* vlSelf);
VL_ATTR_COLD void VMAC_rx_MAC_rx___stl_comb__TOP__MAC_rx__0(VMAC_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void VMAC_rx___024root___stl_comb__TOP__0(VMAC_rx___024root* vlSelf);
VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_comb__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf);
VL_ATTR_COLD void VMAC_rx_MAC_rx___stl_comb__TOP__MAC_rx__1(VMAC_rx_MAC_rx* vlSelf);
VL_ATTR_COLD void VMAC_rx_crc32_parallel_64bit___stl_comb__TOP__MAC_rx__CRC__0(VMAC_rx_crc32_parallel_64bit* vlSelf);

VL_ATTR_COLD void VMAC_rx___024root___eval_stl(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_stl\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VMAC_rx___024root___stl_sequent__TOP__0(vlSelf);
        VMAC_rx___024root____Vm_traceActivitySetAll(vlSelf);
        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_convert__0((&vlSymsp->TOP__MAC_rx__crc_convert));
        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__0((&vlSymsp->TOP__MAC_rx__crc_frame_convert));
        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__0((&vlSymsp->TOP__MAC_rx__payload_cvrt));
        VMAC_rx_MAC_rx___stl_sequent__TOP__MAC_rx__0((&vlSymsp->TOP__MAC_rx));
        VMAC_rx_crc32_parallel_64bit___stl_sequent__TOP__MAC_rx__CRC__0((&vlSymsp->TOP__MAC_rx__CRC));
        VMAC_rx___024root___stl_sequent__TOP__1(vlSelf);
        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__1((&vlSymsp->TOP__MAC_rx__payload_cvrt));
        VMAC_rx_priority_encoder__W10_Mz1___stl_sequent__TOP__MAC_rx__xgmii_fcs__0((&vlSymsp->TOP__MAC_rx__xgmii_fcs));
        VMAC_rx_priority_encoder__W8_Mz1___stl_sequent__TOP__MAC_rx__crc_check_encoder__0((&vlSymsp->TOP__MAC_rx__crc_check_encoder));
        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__1((&vlSymsp->TOP__MAC_rx__crc_frame_convert));
        VMAC_rx_MAC_rx___stl_sequent__TOP__MAC_rx__1((&vlSymsp->TOP__MAC_rx));
        VMAC_rx___024root___stl_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VMAC_rx_MAC_rx___stl_comb__TOP__MAC_rx__0((&vlSymsp->TOP__MAC_rx));
        VMAC_rx___024root____Vm_traceActivitySetAll(vlSelf);
        VMAC_rx___024root___stl_comb__TOP__0(vlSelf);
        VMAC_rx_xgmii_little_to_big___stl_comb__TOP__MAC_rx__crc_convert__0((&vlSymsp->TOP__MAC_rx__crc_convert));
        VMAC_rx_MAC_rx___stl_comb__TOP__MAC_rx__1((&vlSymsp->TOP__MAC_rx));
        VMAC_rx_crc32_parallel_64bit___stl_comb__TOP__MAC_rx__CRC__0((&vlSymsp->TOP__MAC_rx__CRC));
    }
}

VL_ATTR_COLD void VMAC_rx___024root___stl_sequent__TOP__0(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___stl_sequent__TOP__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC_valid = vlSymsp->TOP__MAC_rx.MAC_valid;
    vlSymsp->TOP__MAC_rx.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__MAC_rx.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__MAC_rx.xgmii_rxd = vlSelfRef.xgmii_rxd;
    vlSymsp->TOP__MAC_rx.xgmii_rxc = vlSelfRef.xgmii_rxc;
}

VL_ATTR_COLD void VMAC_rx___024root___stl_sequent__TOP__1(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___stl_sequent__TOP__1\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bytes_rcv_len = vlSymsp->TOP__MAC_rx.bytes_rcv_len;
}

VL_ATTR_COLD void VMAC_rx___024root___stl_sequent__TOP__2(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___stl_sequent__TOP__2\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC_payload_rcv = vlSymsp->TOP__MAC_rx.MAC_payload_rcv;
}

VL_ATTR_COLD void VMAC_rx___024root___stl_comb__TOP__0(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___stl_comb__TOP__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_ok = vlSymsp->TOP__MAC_rx.frame_ok;
    vlSelfRef.CRC_flush = vlSymsp->TOP__MAC_rx.CRC_flush;
}
