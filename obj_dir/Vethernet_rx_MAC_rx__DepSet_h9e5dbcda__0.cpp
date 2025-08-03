// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx_MAC_rx.h"
#include "Vethernet_rx__Syms.h"

VL_INLINE_OPT void Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__FCS_grap, vlSelfRef.__PVT__xgmii_rxd, 
                  VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
    vlSelfRef.__Vcellinp__xgmii_fcs__din = ((0U == (IData)(vlSelfRef.__PVT__sof_lane))
                                             ? VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)))
                                             : VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 4U, 8U))));
    vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__din 
        = vlSelfRef.__PVT__xgmii_rxc;
    vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__din 
        = vlSelfRef.__Vcellinp__xgmii_fcs__din;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___ico_sequent__TOP__ethernet_rx__mac_inst__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_valid = vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__valid;
    vlSelfRef.__PVT__bytes_offset = vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__idx;
    vlSelfRef.__PVT__FCS_offset = vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__idx;
    vlSelfRef.__PVT__shift_bits = (0x3fU & VL_SHIFTL_III(6,6,32, 
                                                         VL_EXTEND_II(6,3, (IData)(vlSelfRef.__PVT__bytes_offset)), 3U));
    vlSelfRef.__PVT__byte_END = (0xffU & VL_SEL_IQII(64, 
                                                     (vlSelfRef.__PVT__xgmii_rxd 
                                                      >> (IData)(vlSelfRef.__PVT__shift_bits)), 0U, 8U));
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__nrg = vlSelfRef.__PVT__rg;
    vlSelfRef.__PVT__next_state = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__crc_init = 0U;
    vlSelfRef.__PVT__crc_valid = 1U;
    vlSelfRef.__PVT__frame_ok = 0U;
    vlSelfRef.__PVT__CRC_flush = 0U;
    vlSelfRef.__PVT__ncrc_check = vlSelfRef.__PVT__crc_check;
    vlSelfRef.__PVT__ncrc_delay = 0U;
    vlSelfRef.__PVT__nMAC_valid = 0U;
    vlSelfRef.__PVT__nsoft_dl = vlSelfRef.__PVT__soft_dl;
    vlSelfRef.__PVT__nFCS_frame = vlSelfRef.__PVT__FCS_frame;
    vlSelfRef.__PVT__xgmii_rxd_f = 0ULL;
    vlSelfRef.__PVT__nxgmii_rxc_frame = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                      (0xffU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)));
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, vlSelfRef.__PVT__xgmii_rxd, 
                  VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
    vlSelfRef.__PVT__nMAC_payload_rcv_cvrt = vlSelfRef.__PVT__MAC_payload_rcv_cvrt;
    vlSelfRef.__PVT__nMAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__nbytes_rcv_dl = vlSelfRef.__PVT__bytes_rcv_dl;
    vlSelfRef.__PVT__nFCS_rxc = ((0U == (IData)(vlSelfRef.__PVT__sof_lane))
                                  ? VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                  (0xffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)))
                                  : VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                  (0xffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 4U, 8U))));
    vlSelfRef.__PVT__nsof_found = vlSelfRef.__PVT__sof_found;
    vlSelfRef.__PVT__nsof_lane = vlSelfRef.__PVT__sof_lane;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 0U;
    }
    vlSelfRef.__PVT__i = 1U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 1U;
    }
    vlSelfRef.__PVT__i = 2U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 2U;
    }
    vlSelfRef.__PVT__i = 3U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 3U;
    }
    vlSelfRef.__PVT__i = 4U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 4U;
    }
    vlSelfRef.__PVT__i = 5U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 5U;
    }
    vlSelfRef.__PVT__i = 6U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 6U;
    }
    vlSelfRef.__PVT__i = 7U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 7U;
    }
    vlSelfRef.__PVT__i = 8U;
    if ((0U == (IData)(vlSelfRef.__PVT__sof_lane))) {
        vlSelfRef.__PVT__xgmii_rxd_f = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sof_lane))) {
        vlSelfRef.__PVT__xgmii_rxd_f = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x20U, 0x40U);
    }
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_init = 1U;
        vlSelfRef.__PVT__nMAC_valid = 0U;
        if (vlSelfRef.__PVT__sof_found) {
            if ((4U == (IData)(vlSelfRef.__PVT__sof_lane))) {
                vlSelfRef.__PVT__nsoft_dl = 1U;
            } else {
                vlSelfRef.__PVT__next_state = 1U;
            }
        }
        if (vlSelfRef.__PVT__soft_dl) {
            vlSelfRef.__PVT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_init = 0U;
        if (((0xffffffccbbaaULL == vlSelfRef.__PVT__mac_dest_addr) 
             & (0xaaccU == VL_CONCAT_III(16,8,8, (0xffU 
                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 8U)), 
                                         (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x38U, 8U)))))) {
            vlSelfRef.__PVT__next_state = 2U;
            vlSelfRef.__PVT__nMAC_valid = 1U;
        } else {
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        if (((0xbbffffffU == VL_CONCAT_III(32,16,16, 
                                           VL_CONCAT_III(16,8,8, 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 8U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 8U, 8U))), 
                                           VL_CONCAT_III(16,8,8, 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x10U, 8U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x18U, 8U))))) 
             & (8U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x20U, 0x10U))))) {
            vlSelfRef.__PVT__next_state = 3U;
            vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                = VL_CONCAT_QIQ(64,16,48, (0xffffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 0x10U)), 0ULL);
            vlSelfRef.__PVT__nbytes_rcv = 2U;
            vlSelfRef.__PVT__nMAC_valid = 1U;
        } else {
            vlSelfRef.__PVT__nMAC_valid = 0U;
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nMAC_valid = 1U;
        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt = vlSelfRef.__PVT__xgmii_rxd_f;
        vlSelfRef.__PVT__nbytes_rcv = 8U;
        if (((IData)(vlSelfRef.__PVT__end_valid) & 
             (0xfdU == (IData)(vlSelfRef.__PVT__byte_END)))) {
            VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelfRef.__PVT__FCS_grap, 
                          VL_SHIFTL_III(32,32,32, (
                                                   VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__FCS_offset)) 
                                                   - (IData)(4U)), 3U));
            vlSelfRef.__PVT__nFCS_frame = VL_SEL_IWII(128, __Vtemp_1, 0U, 0x20U);
            if ((0U == (IData)(vlSelfRef.__PVT__sof_lane))) {
                if ((5U > (IData)(vlSelfRef.__PVT__bytes_offset))) {
                    vlSelfRef.__PVT__case_debug = 1U;
                    vlSelfRef.__PVT__nbytes_rcv = (0xffU 
                                                   & ((IData)(4U) 
                                                      - 
                                                      VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset))));
                    if ((0U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QI(64,32, VL_SEL_IWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x20U));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((1U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,40, (0xffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x28U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((2U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,48, (0xffffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x30U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((3U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,56, (0xffffffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x38U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    }
                    vlSelfRef.__PVT__next_state = 4U;
                } else {
                    vlSelfRef.__PVT__nbytes_rcv_dl 
                        = (0xffU & (VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset)) 
                                    - (IData)(3U)));
                    if ((5U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,8, 
                                                   (0xffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((6U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,16, 
                                                   (0xffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x10U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((7U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,24, 
                                                   (0xffffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x18U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    }
                    vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                        = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U);
                    vlSelfRef.__PVT__nbytes_rcv = 8U;
                    vlSelfRef.__PVT__ncrc_delay = 1U;
                }
            } else {
                vlSelfRef.__PVT__ncrc_delay = 1U;
                vlSelfRef.__PVT__nbytes_rcv_dl = (0xffU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     (VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset)) 
                                                      - (IData)(4U))));
                if (((((((((7U == (IData)(vlSelfRef.__PVT__bytes_offset)) 
                           | (6U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                          | (5U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                         | (4U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                        | (3U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                       | (2U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                      | (1U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                     | (0U == (IData)(vlSelfRef.__PVT__bytes_offset)))) {
                    if ((7U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,24, 
                                                   (0xffffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x18U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((6U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,16, 
                                                   (0xffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x10U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((5U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,8, 
                                                   (0xffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((4U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,64, vlSelfRef.__PVT__nframe_store, 
                                     VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((3U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,56, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x38U)));
                    } else if ((2U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,48, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x30U)));
                    } else if ((1U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,40, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x28U)));
                    } else {
                        vlSelfRef.__PVT__nbytes_rcv = 8U;
                        vlSelfRef.__PVT__next_state = 4U;
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__crc_delay) {
            vlSelfRef.__PVT__next_state = 4U;
            vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv_dl;
            vlSelfRef.__PVT__nFCS_frame = vlSelfRef.__PVT__FCS_frame;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_valid = 0U;
        vlSelfRef.__PVT__nMAC_valid = 1U;
        vlSelfRef.__PVT__nsof_found = 0U;
        vlSelfRef.__PVT__nsoft_dl = 0U;
        if ((vlSelfRef.__PVT__crc_out == VL_SEL_IQII(64, vlSelfRef.__PVT__FCS_frame_cvt, 0U, 0x20U))) {
            vlSelfRef.__PVT__frame_ok = 1U;
            vlSelfRef.__PVT__next_state = 0U;
        } else {
            vlSelfRef.__PVT__CRC_flush = 1U;
            vlSelfRef.__PVT__nMAC_valid = 0U;
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__next_state = 0U;
    }
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_init 
        = vlSelfRef.__PVT__crc_init;
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__valid 
        = vlSelfRef.__PVT__crc_valid;
    vlSelfRef.__PVT__mac_dest_addr = VL_CONCAT_QII(48,32,16, 
                                                   VL_CONCAT_III(32,16,16, 
                                                                 VL_CONCAT_III(16,8,8, 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 8U)), 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 8U, 8U))), 
                                                                 VL_CONCAT_III(16,8,8, 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x10U, 8U)), 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x18U, 8U)))), 
                                                   VL_CONCAT_III(16,8,8, 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x20U, 8U)), 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x28U, 8U))));
    vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__xgmii_rxd_f;
    vlSelfRef.__PVT__mac_src_addr = VL_CONCAT_QII(48,16,32, 
                                                  (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 0x10U)), 
                                                  VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 0x20U));
    vlSelfRef.__PVT__crc_in = vlSelfRef.__PVT__xgmii_rxd_f;
    vlSelfRef.__PVT__mac_dest_addr_valid = (0xffffffccbbaaULL 
                                            == vlSelfRef.__PVT__mac_dest_addr);
    vlSelfRef.__PVT__mac_src_addr_first_valid = (0xaaccU 
                                                 == 
                                                 (0xffffU 
                                                  & VL_SEL_IQII(48, vlSelfRef.__PVT__mac_src_addr, 0x20U, 0x10U)));
    vlSelfRef.__PVT__mac_src_addr_second_valid = (0xbbffffffU 
                                                  == 
                                                  VL_SEL_IQII(48, vlSelfRef.__PVT__mac_src_addr, 0U, 0x20U));
    vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__crc_in;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___ico_comb__TOP__ethernet_rx__mac_inst__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xgmii_rxd_f_cvt = vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__be_rxd;
    vlSelfRef.__PVT__crc_in_big = vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__be_rxd;
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__data_in 
        = vlSelfRef.__PVT__crc_in_big;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__nrg = vlSelfRef.__PVT__rg;
    vlSelfRef.__PVT__next_state = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__crc_init = 0U;
    vlSelfRef.__PVT__crc_valid = 1U;
    vlSelfRef.__PVT__frame_ok = 0U;
    vlSelfRef.__PVT__CRC_flush = 0U;
    vlSelfRef.__PVT__ncrc_check = vlSelfRef.__PVT__crc_check;
    vlSelfRef.__PVT__ncrc_delay = 0U;
    vlSelfRef.__PVT__nMAC_valid = 0U;
    vlSelfRef.__PVT__nsoft_dl = vlSelfRef.__PVT__soft_dl;
    vlSelfRef.__PVT__nFCS_frame = vlSelfRef.__PVT__FCS_frame;
    vlSelfRef.__PVT__xgmii_rxd_f = 0ULL;
    vlSelfRef.__PVT__nxgmii_rxc_frame = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                      (0xffU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)));
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, vlSelfRef.__PVT__xgmii_rxd, 
                  VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
    vlSelfRef.__PVT__nMAC_payload_rcv_cvrt = vlSelfRef.__PVT__MAC_payload_rcv_cvrt;
    vlSelfRef.__PVT__nMAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__nbytes_rcv_dl = vlSelfRef.__PVT__bytes_rcv_dl;
    vlSelfRef.__PVT__nFCS_rxc = ((0U == (IData)(vlSelfRef.__PVT__sof_lane))
                                  ? VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                  (0xffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)))
                                  : VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                  (0xffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 4U, 8U))));
    vlSelfRef.__PVT__nsof_found = vlSelfRef.__PVT__sof_found;
    vlSelfRef.__PVT__nsof_lane = vlSelfRef.__PVT__sof_lane;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 0U;
    }
    vlSelfRef.__PVT__i = 1U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 1U;
    }
    vlSelfRef.__PVT__i = 2U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 2U;
    }
    vlSelfRef.__PVT__i = 3U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 3U;
    }
    vlSelfRef.__PVT__i = 4U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 4U;
    }
    vlSelfRef.__PVT__i = 5U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 5U;
    }
    vlSelfRef.__PVT__i = 6U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 6U;
    }
    vlSelfRef.__PVT__i = 7U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 7U;
    }
    vlSelfRef.__PVT__i = 8U;
    if ((0U == (IData)(vlSelfRef.__PVT__sof_lane))) {
        vlSelfRef.__PVT__xgmii_rxd_f = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sof_lane))) {
        vlSelfRef.__PVT__xgmii_rxd_f = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x20U, 0x40U);
    }
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_init = 1U;
        vlSelfRef.__PVT__nMAC_valid = 0U;
        if (vlSelfRef.__PVT__sof_found) {
            if ((4U == (IData)(vlSelfRef.__PVT__sof_lane))) {
                vlSelfRef.__PVT__nsoft_dl = 1U;
            } else {
                vlSelfRef.__PVT__next_state = 1U;
            }
        }
        if (vlSelfRef.__PVT__soft_dl) {
            vlSelfRef.__PVT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_init = 0U;
        if (((0xffffffccbbaaULL == vlSelfRef.__PVT__mac_dest_addr) 
             & (0xaaccU == VL_CONCAT_III(16,8,8, (0xffU 
                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 8U)), 
                                         (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x38U, 8U)))))) {
            vlSelfRef.__PVT__next_state = 2U;
            vlSelfRef.__PVT__nMAC_valid = 1U;
        } else {
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        if (((0xbbffffffU == VL_CONCAT_III(32,16,16, 
                                           VL_CONCAT_III(16,8,8, 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 8U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 8U, 8U))), 
                                           VL_CONCAT_III(16,8,8, 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x10U, 8U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x18U, 8U))))) 
             & (8U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x20U, 0x10U))))) {
            vlSelfRef.__PVT__next_state = 3U;
            vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                = VL_CONCAT_QIQ(64,16,48, (0xffffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 0x10U)), 0ULL);
            vlSelfRef.__PVT__nbytes_rcv = 2U;
            vlSelfRef.__PVT__nMAC_valid = 1U;
        } else {
            vlSelfRef.__PVT__nMAC_valid = 0U;
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nMAC_valid = 1U;
        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt = vlSelfRef.__PVT__xgmii_rxd_f;
        vlSelfRef.__PVT__nbytes_rcv = 8U;
        if (((IData)(vlSelfRef.__PVT__end_valid) & 
             (0xfdU == (IData)(vlSelfRef.__PVT__byte_END)))) {
            VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelfRef.__PVT__FCS_grap, 
                          VL_SHIFTL_III(32,32,32, (
                                                   VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__FCS_offset)) 
                                                   - (IData)(4U)), 3U));
            vlSelfRef.__PVT__nFCS_frame = VL_SEL_IWII(128, __Vtemp_1, 0U, 0x20U);
            if ((0U == (IData)(vlSelfRef.__PVT__sof_lane))) {
                if ((5U > (IData)(vlSelfRef.__PVT__bytes_offset))) {
                    vlSelfRef.__PVT__case_debug = 1U;
                    vlSelfRef.__PVT__nbytes_rcv = (0xffU 
                                                   & ((IData)(4U) 
                                                      - 
                                                      VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset))));
                    if ((0U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QI(64,32, VL_SEL_IWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x20U));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((1U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,40, (0xffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x28U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((2U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,48, (0xffffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x30U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((3U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,56, (0xffffffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x38U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    }
                    vlSelfRef.__PVT__next_state = 4U;
                } else {
                    vlSelfRef.__PVT__nbytes_rcv_dl 
                        = (0xffU & (VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset)) 
                                    - (IData)(3U)));
                    if ((5U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,8, 
                                                   (0xffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((6U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,16, 
                                                   (0xffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x10U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((7U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,24, 
                                                   (0xffffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x18U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    }
                    vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                        = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U);
                    vlSelfRef.__PVT__nbytes_rcv = 8U;
                    vlSelfRef.__PVT__ncrc_delay = 1U;
                }
            } else {
                vlSelfRef.__PVT__ncrc_delay = 1U;
                vlSelfRef.__PVT__nbytes_rcv_dl = (0xffU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     (VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset)) 
                                                      - (IData)(4U))));
                if (((((((((7U == (IData)(vlSelfRef.__PVT__bytes_offset)) 
                           | (6U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                          | (5U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                         | (4U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                        | (3U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                       | (2U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                      | (1U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                     | (0U == (IData)(vlSelfRef.__PVT__bytes_offset)))) {
                    if ((7U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,24, 
                                                   (0xffffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x18U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((6U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,16, 
                                                   (0xffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x10U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((5U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,8, 
                                                   (0xffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((4U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,64, vlSelfRef.__PVT__nframe_store, 
                                     VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((3U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,56, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x38U)));
                    } else if ((2U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,48, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x30U)));
                    } else if ((1U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,40, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x28U)));
                    } else {
                        vlSelfRef.__PVT__nbytes_rcv = 8U;
                        vlSelfRef.__PVT__next_state = 4U;
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__crc_delay) {
            vlSelfRef.__PVT__next_state = 4U;
            vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv_dl;
            vlSelfRef.__PVT__nFCS_frame = vlSelfRef.__PVT__FCS_frame;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_valid = 0U;
        vlSelfRef.__PVT__nMAC_valid = 1U;
        vlSelfRef.__PVT__nsof_found = 0U;
        vlSelfRef.__PVT__nsoft_dl = 0U;
        if ((vlSelfRef.__PVT__crc_out == VL_SEL_IQII(64, vlSelfRef.__PVT__FCS_frame_cvt, 0U, 0x20U))) {
            vlSelfRef.__PVT__frame_ok = 1U;
            vlSelfRef.__PVT__next_state = 0U;
        } else {
            vlSelfRef.__PVT__CRC_flush = 1U;
            vlSelfRef.__PVT__nMAC_valid = 0U;
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__next_state = 0U;
    }
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_init 
        = vlSelfRef.__PVT__crc_init;
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__valid 
        = vlSelfRef.__PVT__crc_valid;
    vlSelfRef.__PVT__mac_dest_addr = VL_CONCAT_QII(48,32,16, 
                                                   VL_CONCAT_III(32,16,16, 
                                                                 VL_CONCAT_III(16,8,8, 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 8U)), 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 8U, 8U))), 
                                                                 VL_CONCAT_III(16,8,8, 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x10U, 8U)), 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x18U, 8U)))), 
                                                   VL_CONCAT_III(16,8,8, 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x20U, 8U)), 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x28U, 8U))));
    vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__xgmii_rxd_f;
    vlSelfRef.__PVT__mac_src_addr = VL_CONCAT_QII(48,16,32, 
                                                  (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 0x10U)), 
                                                  VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 0x20U));
    vlSelfRef.__PVT__crc_in = vlSelfRef.__PVT__xgmii_rxd_f;
    vlSelfRef.__PVT__mac_dest_addr_valid = (0xffffffccbbaaULL 
                                            == vlSelfRef.__PVT__mac_dest_addr);
    vlSelfRef.__PVT__mac_src_addr_first_valid = (0xaaccU 
                                                 == 
                                                 (0xffffU 
                                                  & VL_SEL_IQII(48, vlSelfRef.__PVT__mac_src_addr, 0x20U, 0x10U)));
    vlSelfRef.__PVT__mac_src_addr_second_valid = (0xbbffffffU 
                                                  == 
                                                  VL_SEL_IQII(48, vlSelfRef.__PVT__mac_src_addr, 0U, 0x20U));
    vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__crc_in;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___act_sequent__TOP__ethernet_rx__mac_inst__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xgmii_rxd_f_cvt = vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__be_rxd;
    vlSelfRef.__PVT__crc_in_big = vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__be_rxd;
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__data_in 
        = vlSelfRef.__PVT__crc_in_big;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__crc_out = vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_out;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__FCS_rxc = vlSelfRef.__PVT__FCS_rxc;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__crc_check = vlSelfRef.__PVT__crc_check;
    vlSelfRef.__Vdly__rg = vlSelfRef.__PVT__rg;
    vlSelfRef.__Vdly__crc_delay = vlSelfRef.__PVT__crc_delay;
    vlSelfRef.__Vdly__sof_found = vlSelfRef.__PVT__sof_found;
    vlSelfRef.__Vdly__soft_dl = vlSelfRef.__PVT__soft_dl;
    vlSelfRef.__Vdly__bytes_rcv_dl = vlSelfRef.__PVT__bytes_rcv_dl;
    vlSelfRef.__Vdly__MAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__Vdly__MAC_payload_rcv_cvrt = vlSelfRef.__PVT__MAC_payload_rcv_cvrt;
    VL_ASSIGN_W(128,vlSelfRef.__Vdly__frame_store, vlSelfRef.__PVT__frame_store);
    vlSelfRef.__Vdly__FCS_frame = vlSelfRef.__PVT__FCS_frame;
    vlSelfRef.__Vdly__sof_lane = vlSelfRef.__PVT__sof_lane;
    vlSelfRef.__Vdly__xgmii_rxc_frame = vlSelfRef.__PVT__xgmii_rxc_frame;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__next_state;
        vlSelfRef.__Vdly__crc_check = vlSelfRef.__PVT__ncrc_check;
        VL_ASSIGN_W(128,vlSelfRef.__Vdly__frame_store, vlSelfRef.__PVT__nframe_store);
        vlSelfRef.__Vdly__rg = vlSelfRef.__PVT__nrg;
        vlSelfRef.__Vdly__FCS_frame = vlSelfRef.__PVT__nFCS_frame;
        vlSelfRef.__Vdly__crc_delay = vlSelfRef.__PVT__ncrc_delay;
        vlSelfRef.__Vdly__sof_found = vlSelfRef.__PVT__nsof_found;
        vlSelfRef.__Vdly__sof_lane = vlSelfRef.__PVT__nsof_lane;
        vlSelfRef.__Vdly__xgmii_rxc_frame = vlSelfRef.__PVT__nxgmii_rxc_frame;
        vlSelfRef.__Vdly__soft_dl = vlSelfRef.__PVT__nsoft_dl;
        vlSelfRef.__Vdly__MAC_valid = vlSelfRef.__PVT__nMAC_valid;
        vlSelfRef.__Vdly__MAC_payload_rcv_cvrt = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
        vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__nbytes_rcv;
        vlSelfRef.__Vdly__bytes_rcv_dl = vlSelfRef.__PVT__nbytes_rcv_dl;
        vlSelfRef.__Vdly__FCS_rxc = vlSelfRef.__PVT__nFCS_rxc;
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__crc_check = 0U;
        VL_CONST_W_1X(128,vlSelfRef.__Vdly__frame_store,0x00000000);
        vlSelfRef.__Vdly__crc_delay = 0U;
        vlSelfRef.__Vdly__FCS_frame = 0U;
        vlSelfRef.__Vdly__sof_found = 0U;
        vlSelfRef.__Vdly__sof_lane = 0U;
        vlSelfRef.__Vdly__xgmii_rxc_frame = 0U;
        vlSelfRef.__Vdly__soft_dl = 0U;
        vlSelfRef.__Vdly__MAC_valid = 0U;
        vlSelfRef.__Vdly__MAC_payload_rcv_cvrt = 0ULL;
        vlSelfRef.__Vdly__bytes_rcv = 0U;
        vlSelfRef.__Vdly__bytes_rcv_dl = 0U;
        vlSelfRef.__Vdly__FCS_rxc = 0U;
        vlSelfRef.__Vdly__rg = 0U;
    }
    vlSelfRef.__PVT__FCS_rxc = vlSelfRef.__Vdly__FCS_rxc;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__crc_check = vlSelfRef.__Vdly__crc_check;
    vlSelfRef.__PVT__rg = vlSelfRef.__Vdly__rg;
    vlSelfRef.__PVT__crc_delay = vlSelfRef.__Vdly__crc_delay;
    vlSelfRef.__PVT__sof_found = vlSelfRef.__Vdly__sof_found;
    vlSelfRef.__PVT__soft_dl = vlSelfRef.__Vdly__soft_dl;
    vlSelfRef.__PVT__bytes_rcv_dl = vlSelfRef.__Vdly__bytes_rcv_dl;
    vlSelfRef.__PVT__MAC_valid = vlSelfRef.__Vdly__MAC_valid;
    vlSelfRef.__PVT__bytes_rcv = vlSelfRef.__Vdly__bytes_rcv;
    vlSelfRef.__PVT__MAC_payload_rcv_cvrt = vlSelfRef.__Vdly__MAC_payload_rcv_cvrt;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__frame_store, vlSelfRef.__Vdly__frame_store);
    vlSelfRef.__PVT__FCS_frame = vlSelfRef.__Vdly__FCS_frame;
    vlSelfRef.__PVT__sof_lane = vlSelfRef.__Vdly__sof_lane;
    vlSelfRef.__PVT__xgmii_rxc_frame = vlSelfRef.__Vdly__xgmii_rxc_frame;
    vlSelfRef.__PVT__bytes_rcv_len = vlSelfRef.__PVT__bytes_rcv;
    vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__MAC_payload_rcv_cvrt;
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__FCS_grap, vlSelfRef.__PVT__xgmii_rxd, 
                  VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
    vlSelfRef.__Vcellinp__crc_frame_convert__xgmii_rxd 
        = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__FCS_frame, 0U);
    vlSelfRef.__Vcellinp__xgmii_fcs__din = ((0U == (IData)(vlSelfRef.__PVT__sof_lane))
                                             ? VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)))
                                             : VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                             (0xffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 4U, 8U))));
    vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__xgmii_rxd 
        = vlSelfRef.__Vcellinp__crc_frame_convert__xgmii_rxd;
    vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__din 
        = vlSelfRef.__Vcellinp__xgmii_fcs__din;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__2(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___nba_sequent__TOP__ethernet_rx__mac_inst__2\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__be_rxd;
    vlSelfRef.__PVT__FCS_frame_cvt = vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__be_rxd;
    vlSelfRef.__PVT__FCS_offset = vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__idx;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__0(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__nrg = vlSelfRef.__PVT__rg;
    vlSelfRef.__PVT__next_state = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__crc_init = 0U;
    vlSelfRef.__PVT__crc_valid = 1U;
    vlSelfRef.__PVT__frame_ok = 0U;
    vlSelfRef.__PVT__CRC_flush = 0U;
    vlSelfRef.__PVT__ncrc_check = vlSelfRef.__PVT__crc_check;
    vlSelfRef.__PVT__ncrc_delay = 0U;
    vlSelfRef.__PVT__nMAC_valid = 0U;
    vlSelfRef.__PVT__nsoft_dl = vlSelfRef.__PVT__soft_dl;
    vlSelfRef.__PVT__nFCS_frame = vlSelfRef.__PVT__FCS_frame;
    vlSelfRef.__PVT__xgmii_rxd_f = 0ULL;
    vlSelfRef.__PVT__nxgmii_rxc_frame = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                      (0xffU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)));
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, vlSelfRef.__PVT__xgmii_rxd, 
                  VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
    vlSelfRef.__PVT__nMAC_payload_rcv_cvrt = vlSelfRef.__PVT__MAC_payload_rcv_cvrt;
    vlSelfRef.__PVT__nMAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__nbytes_rcv_dl = vlSelfRef.__PVT__bytes_rcv_dl;
    vlSelfRef.__PVT__nFCS_rxc = ((0U == (IData)(vlSelfRef.__PVT__sof_lane))
                                  ? VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                  (0xffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 8U, 8U)))
                                  : VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 
                                                  (0xffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__xgmii_rxc_frame), 4U, 8U))));
    vlSelfRef.__PVT__nsof_found = vlSelfRef.__PVT__sof_found;
    vlSelfRef.__PVT__nsof_lane = vlSelfRef.__PVT__sof_lane;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 0U;
    }
    vlSelfRef.__PVT__i = 1U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 1U;
    }
    vlSelfRef.__PVT__i = 2U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 2U;
    }
    vlSelfRef.__PVT__i = 3U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 3U;
    }
    vlSelfRef.__PVT__i = 4U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 4U;
    }
    vlSelfRef.__PVT__i = 5U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 5U;
    }
    vlSelfRef.__PVT__i = 6U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 6U;
    }
    vlSelfRef.__PVT__i = 7U;
    if ((((0U == (IData)(vlSelfRef.__PVT__state)) & 
          VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)) 
         & (0xfbU == (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U))))) {
        vlSelfRef.__PVT__nsof_found = 1U;
        vlSelfRef.__PVT__nsof_lane = 7U;
    }
    vlSelfRef.__PVT__i = 8U;
    if ((0U == (IData)(vlSelfRef.__PVT__sof_lane))) {
        vlSelfRef.__PVT__xgmii_rxd_f = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U);
    } else if ((4U == (IData)(vlSelfRef.__PVT__sof_lane))) {
        vlSelfRef.__PVT__xgmii_rxd_f = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x20U, 0x40U);
    }
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_init = 1U;
        vlSelfRef.__PVT__nMAC_valid = 0U;
        if (vlSelfRef.__PVT__sof_found) {
            if ((4U == (IData)(vlSelfRef.__PVT__sof_lane))) {
                vlSelfRef.__PVT__nsoft_dl = 1U;
            } else {
                vlSelfRef.__PVT__next_state = 1U;
            }
        }
        if (vlSelfRef.__PVT__soft_dl) {
            vlSelfRef.__PVT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_init = 0U;
        if (((0xffffffccbbaaULL == vlSelfRef.__PVT__mac_dest_addr) 
             & (0xaaccU == VL_CONCAT_III(16,8,8, (0xffU 
                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 8U)), 
                                         (0xffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x38U, 8U)))))) {
            vlSelfRef.__PVT__next_state = 2U;
            vlSelfRef.__PVT__nMAC_valid = 1U;
        } else {
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        if (((0xbbffffffU == VL_CONCAT_III(32,16,16, 
                                           VL_CONCAT_III(16,8,8, 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 8U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 8U, 8U))), 
                                           VL_CONCAT_III(16,8,8, 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x10U, 8U)), 
                                                         (0xffU 
                                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x18U, 8U))))) 
             & (8U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x20U, 0x10U))))) {
            vlSelfRef.__PVT__next_state = 3U;
            vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                = VL_CONCAT_QIQ(64,16,48, (0xffffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 0x10U)), 0ULL);
            vlSelfRef.__PVT__nbytes_rcv = 2U;
            vlSelfRef.__PVT__nMAC_valid = 1U;
        } else {
            vlSelfRef.__PVT__nMAC_valid = 0U;
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nMAC_valid = 1U;
        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt = vlSelfRef.__PVT__xgmii_rxd_f;
        vlSelfRef.__PVT__nbytes_rcv = 8U;
        if (((IData)(vlSelfRef.__PVT__end_valid) & 
             (0xfdU == (IData)(vlSelfRef.__PVT__byte_END)))) {
            VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelfRef.__PVT__FCS_grap, 
                          VL_SHIFTL_III(32,32,32, (
                                                   VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__FCS_offset)) 
                                                   - (IData)(4U)), 3U));
            vlSelfRef.__PVT__nFCS_frame = VL_SEL_IWII(128, __Vtemp_1, 0U, 0x20U);
            if ((0U == (IData)(vlSelfRef.__PVT__sof_lane))) {
                if ((5U > (IData)(vlSelfRef.__PVT__bytes_offset))) {
                    vlSelfRef.__PVT__case_debug = 1U;
                    vlSelfRef.__PVT__nbytes_rcv = (0xffU 
                                                   & ((IData)(4U) 
                                                      - 
                                                      VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset))));
                    if ((0U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QI(64,32, VL_SEL_IWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x20U));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((1U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,40, (0xffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x28U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((2U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,48, (0xffffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x30U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    } else if ((3U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                            = VL_EXTEND_QQ(64,56, (0xffffffffffffffULL 
                                                   & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x38U)));
                        vlSelfRef.__PVT__xgmii_rxd_f 
                            = vlSelfRef.__PVT__nMAC_payload_rcv_cvrt;
                    }
                    vlSelfRef.__PVT__next_state = 4U;
                } else {
                    vlSelfRef.__PVT__nbytes_rcv_dl 
                        = (0xffU & (VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset)) 
                                    - (IData)(3U)));
                    if ((5U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,8, 
                                                   (0xffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((6U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,16, 
                                                   (0xffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x10U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((7U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,24, 
                                                   (0xffffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x18U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    }
                    vlSelfRef.__PVT__nMAC_payload_rcv_cvrt 
                        = VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U);
                    vlSelfRef.__PVT__nbytes_rcv = 8U;
                    vlSelfRef.__PVT__ncrc_delay = 1U;
                }
            } else {
                vlSelfRef.__PVT__ncrc_delay = 1U;
                vlSelfRef.__PVT__nbytes_rcv_dl = (0xffU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     (VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__bytes_offset)) 
                                                      - (IData)(4U))));
                if (((((((((7U == (IData)(vlSelfRef.__PVT__bytes_offset)) 
                           | (6U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                          | (5U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                         | (4U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                        | (3U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                       | (2U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                      | (1U == (IData)(vlSelfRef.__PVT__bytes_offset))) 
                     | (0U == (IData)(vlSelfRef.__PVT__bytes_offset)))) {
                    if ((7U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,24, 
                                                   (0xffffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x18U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((6U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,16, 
                                                   (0xffffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 0x10U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((5U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_CONCAT_WQQ(128,64,64, vlSelfRef.__PVT__nframe_store, 
                                      VL_EXTEND_QI(64,8, 
                                                   (0xffU 
                                                    & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U))), 
                                      VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((4U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,64, vlSelfRef.__PVT__nframe_store, 
                                     VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x40U));
                    } else if ((3U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,56, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x38U)));
                    } else if ((2U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,48, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x30U)));
                    } else if ((1U == (IData)(vlSelfRef.__PVT__bytes_offset))) {
                        VL_EXTEND_WQ(128,40, vlSelfRef.__PVT__nframe_store, 
                                     (0xffffffffffULL 
                                      & VL_SEL_QWII(128, vlSelfRef.__PVT__frame_store, 0x40U, 0x28U)));
                    } else {
                        vlSelfRef.__PVT__nbytes_rcv = 8U;
                        vlSelfRef.__PVT__next_state = 4U;
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__crc_delay) {
            vlSelfRef.__PVT__next_state = 4U;
            vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv_dl;
            vlSelfRef.__PVT__nFCS_frame = vlSelfRef.__PVT__FCS_frame;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__crc_valid = 0U;
        vlSelfRef.__PVT__nMAC_valid = 1U;
        vlSelfRef.__PVT__nsof_found = 0U;
        vlSelfRef.__PVT__nsoft_dl = 0U;
        if ((vlSelfRef.__PVT__crc_out == VL_SEL_IQII(64, vlSelfRef.__PVT__FCS_frame_cvt, 0U, 0x20U))) {
            vlSelfRef.__PVT__frame_ok = 1U;
            vlSelfRef.__PVT__next_state = 0U;
        } else {
            vlSelfRef.__PVT__CRC_flush = 1U;
            vlSelfRef.__PVT__nMAC_valid = 0U;
            vlSelfRef.__PVT__next_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__next_state = 0U;
    }
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_init 
        = vlSelfRef.__PVT__crc_init;
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__valid 
        = vlSelfRef.__PVT__crc_valid;
    vlSelfRef.__PVT__mac_dest_addr = VL_CONCAT_QII(48,32,16, 
                                                   VL_CONCAT_III(32,16,16, 
                                                                 VL_CONCAT_III(16,8,8, 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 8U)), 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 8U, 8U))), 
                                                                 VL_CONCAT_III(16,8,8, 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x10U, 8U)), 
                                                                               (0xffU 
                                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x18U, 8U)))), 
                                                   VL_CONCAT_III(16,8,8, 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x20U, 8U)), 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x28U, 8U))));
    vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__xgmii_rxd_f;
    vlSelfRef.__PVT__mac_src_addr = VL_CONCAT_QII(48,16,32, 
                                                  (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0x30U, 0x10U)), 
                                                  VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd_f, 0U, 0x20U));
    vlSelfRef.__PVT__crc_in = vlSelfRef.__PVT__xgmii_rxd_f;
    vlSelfRef.__PVT__mac_dest_addr_valid = (0xffffffccbbaaULL 
                                            == vlSelfRef.__PVT__mac_dest_addr);
    vlSelfRef.__PVT__mac_src_addr_first_valid = (0xaaccU 
                                                 == 
                                                 (0xffffU 
                                                  & VL_SEL_IQII(48, vlSelfRef.__PVT__mac_src_addr, 0x20U, 0x10U)));
    vlSelfRef.__PVT__mac_src_addr_second_valid = (0xbbffffffU 
                                                  == 
                                                  VL_SEL_IQII(48, vlSelfRef.__PVT__mac_src_addr, 0U, 0x20U));
    vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__xgmii_rxd 
        = vlSelfRef.__PVT__crc_in;
}

VL_INLINE_OPT void Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__1(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___nba_comb__TOP__ethernet_rx__mac_inst__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xgmii_rxd_f_cvt = vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__be_rxd;
    vlSelfRef.__PVT__crc_in_big = vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__be_rxd;
    vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__data_in 
        = vlSelfRef.__PVT__crc_in_big;
}
