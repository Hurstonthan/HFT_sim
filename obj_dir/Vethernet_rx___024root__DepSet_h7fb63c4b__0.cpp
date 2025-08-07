// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx___024root.h"

VL_INLINE_OPT void Vethernet_rx___024root___ico_sequent__TOP__0(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_15;
    // Body
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_frame 
        = (((IData)(vlSelf->xgmii_rxc) << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                    >> 8U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found;
    if ((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane;
    if ((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 0U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 2U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 3U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 4U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 5U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 6U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 7U)) 
                 & (0xfb00000000000000ULL == (0xff00000000000000ULL 
                                              & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 7U;
    }
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[0U] 
        = (IData)((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                   >> 0x20U));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[2U] 
        = (IData)(vlSelf->xgmii_rxd);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[3U] 
        = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 0U;
    if ((1U & (IData)(vlSelf->xgmii_rxc))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 0U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 1U) & 
               (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 1U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 2U) & 
               (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 2U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 3U) & 
               (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 3U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 4U) & 
               (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 4U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 5U) & 
               (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 5U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 6U) & 
               (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 6U;
    }
    if ((IData)((((IData)(vlSelf->xgmii_rxc) >> 7U) 
                 & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = 7U;
    }
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END 
        = (0xffU & (IData)((vlSelf->xgmii_rxd >> (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset), 3U)))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nrg = vlSelf->ethernet_rx__DOT__mac_inst__DOT__rg;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
        = (IData)((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                   >> 0x20U));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
        = (IData)(vlSelf->xgmii_rxd);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
        = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_15, vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap, 
                  VL_SHIFTL_III(32,32,32, ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset) 
                                           - (IData)(4U)), 3U));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame 
        = __Vtemp_15[0U];
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[0U] = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[1U] = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[2U] = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[3U] = 0U;
    if ((0U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        if ((1U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
            if ((2U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
                if ((3U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
                    if (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid) 
                         & (0xfdU == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END)))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nrg = 0xffffffffU;
                        if ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))) {
                            if ((5U <= (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay = 1U;
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                                                - (IData)(4U)));
                                if ((5U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((6U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((7U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                }
                            }
                        } else {
                            vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay = 1U;
                            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                = (0xffU & ((IData)(4U) 
                                            + ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                                               - (IData)(4U))));
                            if ((4U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)))) {
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                            = (0xffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                    }
                                }
                                if ((2U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    } else {
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] = 0U;
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                }
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] = 0U;
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] = 0U;
                            } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(4U) 
                                                + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                    = (IData)((0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))));
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                    = (IData)(((0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))) 
                                               >> 0x20U));
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] = 0U;
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] = 0U;
                            }
                        }
                        VL_SHIFTR_WWI(128,128,32, vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp, vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap, 
                                      VL_SHIFTL_III(32,32,32, 
                                                    ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset) 
                                                     - (IData)(4U)), 3U));
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame 
                            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[0U];
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vethernet_rx___024root___ico_comb__TOP__0(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__state;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f = 0ULL;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid 
        = vlSelf->ethernet_rx__DOT__MAC_valid;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv;
    if ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
            = (((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])));
    } else if ((4U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
            = (((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[1U])));
    }
    if ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        if (vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found) {
            if ((4U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))) {
                vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 1U;
            }
        }
        if (vlSelf->ethernet_rx__DOT__mac_inst__DOT__soft_dl) {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        if (((0xffffffccbbaaULL == vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr) 
             & (0xaaccU == ((0xff00U & ((IData)((vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                 >> 0x30U)) 
                                        << 8U)) | (0xffU 
                                                   & (IData)(
                                                             (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                              >> 0x38U))))))) {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 2U;
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid = 1U;
        } else {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 5U;
        }
    } else if ((2U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        if ((IData)(((0x800000000ULL == (0xffff00000000ULL 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)) 
                     & (0xbbffffffU == (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f) 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & ((IData)(
                                                       (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                        >> 8U)) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((IData)(
                                                          (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                           >> 0x10U)) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (IData)(
                                                           (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                            >> 0x18U)))))))))) {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 3U;
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
                = ((QData)((IData)((0xffffU & (IData)(
                                                      (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                       >> 0x30U))))) 
                   << 0x30U);
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv = 2U;
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid = 1U;
        } else {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid = 0U;
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 5U;
        }
    } else if ((3U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv = 8U;
        if (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid) 
             & (0xfdU == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END)))) {
            if ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))) {
                if ((5U > (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                    if ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
                            = (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]));
                    } else if ((1U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
                            = (QData)((IData)((0xffffffU 
                                               & vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])));
                    } else if ((2U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
                            = (QData)((IData)((0xffffU 
                                               & vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])));
                    } else if ((3U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
                            = (QData)((IData)((0xffU 
                                               & vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])));
                    }
                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv 
                        = (0xffU & ((IData)(4U) - (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt;
                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 4U;
                } else {
                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt 
                        = (((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])));
                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv = 8U;
                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                        = (((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])));
                }
            } else if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv = 8U;
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 4U;
                    }
                }
            }
        }
        if (vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_delay) {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = 4U;
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv 
                = vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl;
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid = 0U;
        }
    } else if ((4U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state 
            = (((~ vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg) 
                == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt))
                ? 0U : 5U);
    }
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr 
        = (((QData)((IData)((0xffU & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))) 
            << 0x28U) | (((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                            >> 8U))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (((IData)(
                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                 >> 0x10U)) 
                                                        << 0x18U) 
                                                       | ((0xff0000U 
                                                           & ((IData)(
                                                                      (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                       >> 0x18U)) 
                                                              << 0x10U)) 
                                                          | ((0xff00U 
                                                              & ((IData)(
                                                                         (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                          >> 0x20U)) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                           >> 0x28U))))))))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big 
        = (((QData)((IData)((0xffU & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))) 
            << 0x38U) | (((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                            >> 8U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                    >> 0x10U))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                     >> 0x18U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                     >> 0x20U)) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((IData)(
                                                                          (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                           >> 0x28U)) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((IData)(
                                                                             (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                              >> 0x30U)) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                               >> 0x38U))))))))))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffffffeU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (1U & (VL_REDXOR_32((0x481b4e5aU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                    ^ VL_REDXOR_64((0x4d101df481b4e5aULL 
                                    & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big)))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffffffdU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (2U & ((VL_REDXOR_32((0x90369cb5U & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                     ^ VL_REDXOR_64((0x9a203be90369cb5ULL 
                                     & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                    << 1U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffffffbU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (4U & ((VL_REDXOR_32((0x206d396bU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                     ^ VL_REDXOR_64((0x1344077d206d396bULL 
                                     & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                    << 2U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffffff7U & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (8U & ((VL_REDXOR_32((0x40da72d7U & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                     ^ VL_REDXOR_64((0x26880efa40da72d7ULL 
                                     & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                    << 3U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffffffefU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x10U & ((VL_REDXOR_32((0x81b4e5afU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x4d101df481b4e5afULL 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                       << 4U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffffffdfU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x20U & ((VL_REDXOR_32((0x369cb5eU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x9a203be90369cb5eULL 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                       << 5U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffffffbfU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x40U & ((VL_REDXOR_32((0x4ec8d8e6U & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x3091760d4ec8d8e6ULL 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                       << 6U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffffff7fU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x80U & ((VL_REDXOR_32((0x9d91b1cdU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x6122ec1a9d91b1cdULL 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                       << 7U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffffeffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x100U & ((VL_REDXOR_32((0x3b23639aU 
                                       & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0xc245d8353b23639aULL 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                        << 8U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffffdffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x200U & ((VL_REDXOR_32((0x3e5d896eU 
                                       & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x805ab1b53e5d896eULL 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                        << 9U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffffbffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x400U & ((VL_REDXOR_32((0x34a05c86U 
                                       & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x46462b534a05c86ULL 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                        << 0xaU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffff7ffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x800U & ((VL_REDXOR_32((0x6940b90cU 
                                       & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x8c8c56a6940b90cULL 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                        << 0xbU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffffefffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x1000U & ((VL_REDXOR_32((0xd2817218U 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x11918ad4d2817218ULL 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                         << 0xcU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffffdfffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x2000U & ((VL_REDXOR_32((0xa502e430U 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x232315a9a502e430ULL 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                         << 0xdU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffffbfffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x4000U & ((VL_REDXOR_32((0x4a05c860U 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x46462b534a05c860ULL 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                         << 0xeU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffff7fffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x8000U & ((VL_REDXOR_32((0x940b90c0U 
                                        & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x8c8c56a6940b90c0ULL 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                         << 0xfU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffeffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x10000U & ((VL_REDXOR_32((0x600c6fdaU 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x1dc9ac92600c6fdaULL 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                          << 0x10U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffdffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x20000U & ((VL_REDXOR_32((0xc018dfb5U 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x3b935924c018dfb5ULL 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                          << 0x11U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfffbffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x40000U & ((VL_REDXOR_32((0x8031bf6aU 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x7726b2498031bf6aULL 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                          << 0x12U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfff7ffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x80000U & ((VL_REDXOR_32((0x637ed5U 
                                         & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xee4d649300637ed5ULL 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                          << 0x13U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffefffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x100000U & ((VL_REDXOR_32((0x48ddb3f0U 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xd84bc8f948ddb3f0ULL 
                                            & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                           << 0x14U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffdfffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x200000U & ((VL_REDXOR_32((0xd9a029bbU 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xb446902dd9a029bbULL 
                                            & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                           << 0x15U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xffbfffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x400000U & ((VL_REDXOR_32((0xfb5b1d2cU 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0x6c5c2184fb5b1d2cULL 
                                            & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                           << 0x16U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xff7fffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x800000U & ((VL_REDXOR_32((0xf6b63a59U 
                                          & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xd8b84309f6b63a59ULL 
                                            & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                           << 0x17U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfeffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x1000000U & ((VL_REDXOR_32((0xa5773ae8U 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0xb5a187cca5773ae8ULL 
                                             & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                            << 0x18U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfdffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x2000000U & ((VL_REDXOR_32((0x2f53b8aU 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0x6f920e4602f53b8aULL 
                                             & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                            << 0x19U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xfbffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x4000000U & ((VL_REDXOR_32((0x5ea7715U 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0xdf241c8c05ea7715ULL 
                                             & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                            << 0x1aU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xf7ffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x8000000U & ((VL_REDXOR_32((0x43cfa071U 
                                           & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                             ^ VL_REDXOR_64((0xba9938c743cfa071ULL 
                                             & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                            << 0x1bU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xefffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x10000000U & ((VL_REDXOR_32((0xcf840eb8U 
                                            & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                              ^ VL_REDXOR_64((0x71e37051cf840eb8ULL 
                                              & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                             << 0x1cU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xdfffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x20000000U & ((VL_REDXOR_32((0x9f081d70U 
                                            & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                              ^ VL_REDXOR_64((0xe3c6e0a39f081d70ULL 
                                              & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                             << 0x1dU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0xbfffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | (0x40000000U & ((VL_REDXOR_32((0x760b74bbU 
                                            & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
                              ^ VL_REDXOR_64((0xc35cc098760b74bbULL 
                                              & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
                             << 0x1eU)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc 
        = ((0x7fffffffU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc) 
           | ((VL_REDXOR_32((0xa40da72dU & vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)) 
               ^ VL_REDXOR_64((0x826880efa40da72dULL 
                               & vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big))) 
              << 0x1fU));
}

void Vethernet_rx___024root___eval_ico(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vethernet_rx___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vethernet_rx___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vethernet_rx___024root___eval_triggers__ico(Vethernet_rx___024root* vlSelf);

bool Vethernet_rx___024root___eval_phase__ico(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vethernet_rx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vethernet_rx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vethernet_rx___024root___eval_act(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vethernet_rx___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vethernet_rx___024root___nba_sequent__TOP__0(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    if (vlSelf->nRST) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_check;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__rg 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nrg;
        vlSelf->IP_payload = vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_checksum 
            = vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_checksum;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv 
            = vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len 
            = vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_len;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr 
            = vlSelf->ethernet_rx__DOT__ip_inst__DOT__ndst_addr;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum 
            = vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum;
        if (vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid) {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame 
                = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame;
        }
        if (vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init) {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg = 0xffffffffU;
        } else if (vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid) {
            vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg 
                = vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc;
        }
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[0U] 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U];
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[1U] 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U];
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U] 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U];
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U] 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U];
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__state 
            = vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__state 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc 
            = ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))
                ? (((IData)(vlSelf->xgmii_rxc) << 8U) 
                   | (0xffU & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                               >> 8U))) : (((IData)(vlSelf->xgmii_rxc) 
                                            << 8U) 
                                           | (0xffU 
                                              & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                 >> 4U))));
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_frame;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane 
            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane;
    } else {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__rg = 0U;
        vlSelf->IP_payload = 0ULL;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_checksum = 0U;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv = 0U;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl = 0U;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr = 0U;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg = 0xffffffffU;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[0U] = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[1U] = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U] = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U] = 0U;
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__state = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__state = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt = 0ULL;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame = 0U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane = 0U;
    }
    vlSelf->IP_valid = ((IData)(vlSelf->nRST) && (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_delay 
        = ((IData)(vlSelf->nRST) && (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__soft_dl 
        = ((IData)(vlSelf->nRST) && (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsoft_dl));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found 
        = ((IData)(vlSelf->nRST) && (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found));
    vlSelf->is_udp = ((IData)(vlSelf->nRST) && (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp));
    vlSelf->is_tcp = ((IData)(vlSelf->nRST) && (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp));
    vlSelf->ethernet_rx__DOT__MAC_valid = ((IData)(vlSelf->nRST) 
                                           && (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_check 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt 
        = (QData)((IData)(((vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame 
                            << 0x18U) | ((0xff0000U 
                                          & (vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame 
                                             << 8U)) 
                                         | ((0xff00U 
                                             & (vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame 
                                                >> 8U)) 
                                            | (vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame 
                                               >> 0x18U))))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[0U] 
        = (IData)((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                   >> 0x20U));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[2U] 
        = (IData)(vlSelf->xgmii_rxd);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap[3U] 
        = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    vlSelf->IP_flush = 0U;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid = 1U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nrg = vlSelf->ethernet_rx__DOT__mac_inst__DOT__rg;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found;
    if ((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
    }
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv 
        = vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv;
    if (vlSelf->ethernet_rx__DOT__MAC_valid) {
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv 
            = (0xffffU & ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv) 
                          + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv)));
    }
    vlSelf->ethernet_rx__DOT__MAC_payload_rcv = (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 8U))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x10U))))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x18U))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x20U)) 
                                                                              << 0x18U) 
                                                                             | ((0xff0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x28U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x30U)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt 
                                                                                >> 0x38U))))))))))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0U;
    if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 1U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 1U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 2U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 2U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 3U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 3U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 4U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 4U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 5U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 5U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 6U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 6U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 7U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 7U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 8U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 8U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 9U) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 9U;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 0xaU) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0xaU;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 0xbU) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0xbU;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 0xcU) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0xcU;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 0xdU) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0xdU;
    }
    if ((1U & (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                >> 0xeU) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0xeU;
    }
    if ((IData)((((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc) 
                  >> 0xfU) & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = 0xfU;
    }
    vlSelf->ethernet_rx__DOT__frame_ok = 0U;
    vlSelf->ethernet_rx__DOT__MAC_flush = 0U;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid 
        = ((3U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid)) 
           | (((0x5c8U >= (0xffffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                              >> 0x30U)))) 
               << 3U) | ((0U == (0x1fffU & (IData)(
                                                   (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                    >> 0x10U)))) 
                         << 2U)));
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid 
        = ((0xcU & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid)) 
           | (((0U != (0xffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                        >> 8U)))) << 1U) 
              | (1U & (~ (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                  >> 0x1fU))))));
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__ip_version 
        = (0xfU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                           >> 0xcU)));
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_ip_version_valid 
        = (4U == (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__ip_version));
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__ndst_addr 
        = vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_len 
        = vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload 
        = vlSelf->IP_payload;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in 
        = vlSelf->ethernet_rx__DOT__MAC_payload_rcv;
    if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state)))) {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
                if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
                    if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                        vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_checksum 
                            = (0xffffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                  >> 0x30U)));
                        vlSelf->ethernet_rx__DOT__ip_inst__DOT__ndst_addr 
                            = (0xffffU & (IData)(vlSelf->ethernet_rx__DOT__MAC_payload_rcv));
                    }
                }
                if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state)))) {
                    if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                        vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_len 
                            = (0xffffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                  >> 0x30U)));
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            if ((2U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state)))) {
                    if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                        vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload 
                            = vlSelf->ethernet_rx__DOT__MAC_payload_rcv;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
                if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload 
                        = vlSelf->ethernet_rx__DOT__MAC_payload_rcv;
                }
            } else if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                if ((0xaaaaaaaaU == (((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                              >> 0x30U)))))) {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload 
                        = (0xffffffffffffULL & vlSelf->ethernet_rx__DOT__MAC_payload_rcv);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state)))) {
                    if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                          >> 0x30U)))));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
                if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in 
                        = (0xffffffffffffULL & vlSelf->ethernet_rx__DOT__MAC_payload_rcv);
                }
            }
        } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in 
                    = (QData)((IData)((0xffffU & (IData)(vlSelf->ethernet_rx__DOT__MAC_payload_rcv))));
            }
        }
    }
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate 
        = vlSelf->ethernet_rx__DOT__ip_inst__DOT__state;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en = 0U;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp 
        = vlSelf->is_tcp;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp 
        = vlSelf->is_udp;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_src_addr 
        = (0xffffffffU == (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                   >> 0x10U)));
    if ((8U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state)))) {
                    vlSelf->IP_flush = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 0U;
        } else if ((2U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 0U;
        } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 0U;
        } else if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__MAC_valid)))) {
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 0U;
        }
    } else if ((4U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
        if ((2U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 0U;
            } else if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                if (((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv) 
                     >= ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len) 
                         - (IData)(0x28U)))) {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 7U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            if ((((0U == (0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                   ? 0xffffU : (0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum)) 
                 == (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_checksum))) {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 6U;
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                if (((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv) 
                     >= ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len) 
                         - (IData)(0x28U)))) {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 0U;
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 7U;
                }
            } else {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 8U;
            }
        } else if (vlSelf->ethernet_rx__DOT__MAC_valid) {
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en = 1U;
            if ((0xaaaaaaaaU == (((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                          >> 0x30U)))))) {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 5U;
            } else {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 8U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
        if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
            if (vlSelf->ethernet_rx__DOT__MAC_valid) {
                vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en = 1U;
                if (vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_src_addr) {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 4U;
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = 1U;
                } else {
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 8U;
                    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en = 0U;
                }
            }
        } else if (vlSelf->ethernet_rx__DOT__MAC_valid) {
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp 
                = (6U == (0xffU & (IData)(vlSelf->ethernet_rx__DOT__MAC_payload_rcv)));
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en = 1U;
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp 
                = (0x11U == (0xffU & (IData)(vlSelf->ethernet_rx__DOT__MAC_payload_rcv)));
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate 
                = (((((0x5c8U >= (0xffffU & (IData)(
                                                    (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                     >> 0x30U)))) 
                      & (0U != (0xffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                 >> 8U))))) 
                     & (~ (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                   >> 0x1fU)))) & ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp) 
                                                   | (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp)))
                    ? 3U : 8U);
        }
    } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state))) {
        if (vlSelf->ethernet_rx__DOT__MAC_valid) {
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en = 1U;
            vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate 
                = ((4U == (0xfU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                           >> 0xcU))))
                    ? 2U : 8U);
        }
    } else if (vlSelf->ethernet_rx__DOT__MAC_valid) {
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = 1U;
    }
    VL_SHIFTR_WWI(128,128,32, __Vtemp_2, vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap, 
                  VL_SHIFTL_III(32,32,32, ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset) 
                                           - (IData)(4U)), 3U));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame 
        = __Vtemp_2[0U];
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[0U] = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[1U] = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[2U] = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[3U] = 0U;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum 
        = vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp = 0U;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 = 0U;
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2 = 0U;
    if (vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear) {
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en) {
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp 
            = (0xfffffU & (((((0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum) 
                              + (0xffffU & (IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in))) 
                             + (0xffffU & (IData)((vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in 
                                                   >> 0x10U)))) 
                            + (0xffffU & (IData)((vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in 
                                                  >> 0x20U)))) 
                           + (0xffffU & (IData)((vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in 
                                                 >> 0x30U)))));
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 
            = (0xfffffU & ((0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp) 
                           + (0xfU & (vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp 
                                      >> 0x10U))));
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2 
            = (0xfffffU & ((0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1) 
                           + (1U & (vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 
                                    >> 0x10U))));
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2);
    }
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_frame 
        = (((IData)(vlSelf->xgmii_rxc) << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                    >> 8U)));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsoft_dl 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__soft_dl;
    if ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init = 1U;
        if (vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found) {
            if ((4U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))) {
                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsoft_dl = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init = 0U;
    }
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane;
    if ((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 0U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 2U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 3U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 4U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 5U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 6U;
    }
    if ((IData)((((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 7U)) 
                 & (0xfb00000000000000ULL == (0xff00000000000000ULL 
                                              & vlSelf->xgmii_rxd))))) {
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = 1U;
        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = 7U;
    }
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
        = (IData)((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                   >> 0x20U));
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
        = (IData)(vlSelf->xgmii_rxd);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
        = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    if ((0U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
        if ((1U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
            if ((2U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
                if ((3U != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
                    if ((4U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid = 0U;
                        if (((~ vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg) 
                             == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt))) {
                            vlSelf->ethernet_rx__DOT__frame_ok = 1U;
                        }
                        if (((~ vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg) 
                             != (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt))) {
                            vlSelf->ethernet_rx__DOT__MAC_flush = 1U;
                        }
                    }
                }
                if ((3U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state))) {
                    if (((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid) 
                         & (0xfdU == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END)))) {
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nrg = 0xffffffffU;
                        VL_SHIFTR_WWI(128,128,32, vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp, vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap, 
                                      VL_SHIFTL_III(32,32,32, 
                                                    ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset) 
                                                     - (IData)(4U)), 3U));
                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame 
                            = vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp[0U];
                        if ((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))) {
                            if ((5U <= (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay = 1U;
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                                                - (IData)(4U)));
                                if ((5U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((6U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((7U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                }
                            }
                        } else {
                            vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay = 1U;
                            vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                = (0xffU & ((IData)(4U) 
                                            + ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                                               - (IData)(4U))));
                            if ((4U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                if ((1U & (~ ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)))) {
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                            = (0xffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                    }
                                }
                                if ((2U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    } else {
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] = 0U;
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))));
                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                }
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] = 0U;
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] = 0U;
                            } else if ((1U & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset))) {
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(4U) 
                                                + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset)));
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[0U] 
                                    = (IData)((0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))));
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[1U] 
                                    = (IData)(((0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U])))) 
                                               >> 0x20U));
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[2U] = 0U;
                                vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store[3U] = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vethernet_rx___024root___eval_nba(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vethernet_rx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vethernet_rx___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vethernet_rx___024root___eval_triggers__act(Vethernet_rx___024root* vlSelf);

bool Vethernet_rx___024root___eval_phase__act(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vethernet_rx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vethernet_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vethernet_rx___024root___eval_phase__nba(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vethernet_rx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__ico(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__nba(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__act(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vethernet_rx___024root___eval(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vethernet_rx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/ethernet_rx.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vethernet_rx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vethernet_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/ethernet_rx.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vethernet_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/ethernet_rx.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vethernet_rx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vethernet_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vethernet_rx___024root___eval_debug_assertions(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->nRST & 0xfeU))) {
        Verilated::overWidthError("nRST");}
}
#endif  // VL_DEBUG
