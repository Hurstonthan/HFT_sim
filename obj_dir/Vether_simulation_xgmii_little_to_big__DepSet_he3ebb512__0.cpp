// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_xgmii_little_to_big.h"

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_clt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_clt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
    vlSelfRef.__PVT__be_rxc = VL_CONCAT_III(8,4,4, 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)))), 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_svr__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__cvrt_svr__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
    vlSelfRef.__PVT__be_rxc = VL_CONCAT_III(8,4,4, 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)))), 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___ico_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___act_sequent__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_xgmii_little_to_big___nba_comb__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}
