// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_priority_encoder__W10_Mz2.h"
#include "Vether_simulation_priority_encoder__W8_Mz2.h"

VL_ATTR_COLD void Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__svr_inst__mac_rx__2(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__svr_inst__mac_rx__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__FCS_grap, vlSelfRef.__PVT__xgmii_rxd, 
                  VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
    vlSelfRef.__Vcellinp__xgmii_fcs__din = ((0U == (IData)(vlSelfRef.__PVT__sof_lane))
                                             ? VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)))
                                             : VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 4U, 8U))));
    vlSelf->__PVT__crc_check_encoder->__PVT__din = vlSelfRef.__PVT__xgmii_rxc;
    vlSelf->__PVT__xgmii_fcs->__PVT__din = vlSelfRef.__Vcellinp__xgmii_fcs__din;
}

VL_ATTR_COLD void Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__svr_inst__mac_rx__3(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__svr_inst__mac_rx__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_valid = vlSelf->__PVT__crc_check_encoder->__PVT__valid;
    vlSelfRef.__PVT__bytes_offset = vlSelf->__PVT__crc_check_encoder->__PVT__idx;
    vlSelfRef.__PVT__FCS_offset = vlSelf->__PVT__xgmii_fcs->__PVT__idx;
    vlSelfRef.__PVT__shift_bits = (0x3fU & VL_SHIFTL_III(6,6,32, 
                                                         VL_EXTEND_II(6,3, (IData)(vlSelfRef.__PVT__bytes_offset)), 3U));
    vlSelfRef.__PVT__byte_END = (0xffU & VL_SEL_IQII(64, 
                                                     (vlSelfRef.__PVT__xgmii_rxd 
                                                      >> (IData)(vlSelfRef.__PVT__shift_bits)), 0U, 8U));
}

VL_ATTR_COLD void Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__clt_inst__mac_rx__2(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__clt_inst__mac_rx__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__FCS_grap, vlSelfRef.__PVT__xgmii_rxd, 
                  VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
    vlSelfRef.__Vcellinp__xgmii_fcs__din = ((0U == (IData)(vlSelfRef.__PVT__sof_lane))
                                             ? VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)))
                                             : VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 4U, 8U))));
    vlSelf->__PVT__crc_check_encoder->__PVT__din = vlSelfRef.__PVT__xgmii_rxc;
    vlSelf->__PVT__xgmii_fcs->__PVT__din = vlSelfRef.__Vcellinp__xgmii_fcs__din;
}

VL_ATTR_COLD void Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__clt_inst__mac_rx__3(Vether_simulation_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_rx___stl_sequent__TOP__ether_simulation__clt_inst__mac_rx__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_valid = vlSelf->__PVT__crc_check_encoder->__PVT__valid;
    vlSelfRef.__PVT__bytes_offset = vlSelf->__PVT__crc_check_encoder->__PVT__idx;
    vlSelfRef.__PVT__FCS_offset = vlSelf->__PVT__xgmii_fcs->__PVT__idx;
    vlSelfRef.__PVT__shift_bits = (0x3fU & VL_SHIFTL_III(6,6,32, 
                                                         VL_EXTEND_II(6,3, (IData)(vlSelfRef.__PVT__bytes_offset)), 3U));
    vlSelfRef.__PVT__byte_END = (0xffU & VL_SEL_IQII(64, 
                                                     (vlSelfRef.__PVT__xgmii_rxd 
                                                      >> (IData)(vlSelfRef.__PVT__shift_bits)), 0U, 8U));
}
