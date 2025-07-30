// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx___024root.h"

VL_INLINE_OPT void VMAC_rx___024root___ico_sequent__TOP__0(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelf->MAC_rx__DOT__nxgmii_rxc_frame = (((IData)(vlSelf->xgmii_rxc) 
                                              << 8U) 
                                             | (0xffU 
                                                & ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                                   >> 8U)));
    vlSelf->MAC_rx__DOT__nsof_found = vlSelf->MAC_rx__DOT__sof_found;
    if ((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    vlSelf->MAC_rx__DOT__nsof_lane = vlSelf->MAC_rx__DOT__sof_lane;
    if ((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 0U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 2U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 3U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 4U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 5U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 6U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 7U)) 
                 & (0xfb00000000000000ULL == (0xff00000000000000ULL 
                                              & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
        vlSelf->MAC_rx__DOT__nsof_lane = 7U;
    }
    vlSelf->MAC_rx__DOT__FCS_rxc = (((IData)(vlSelf->xgmii_rxc) 
                                     << 8U) | (IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_f));
    vlSelf->MAC_rx__DOT__end_valid = 0U;
    vlSelf->MAC_rx__DOT__bytes_offset = 0U;
    if ((1U & (IData)(vlSelf->xgmii_rxc))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 0U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 1U) & 
               (~ (IData)(vlSelf->MAC_rx__DOT__end_valid))))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 1U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 2U) & 
               (~ (IData)(vlSelf->MAC_rx__DOT__end_valid))))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 2U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 3U) & 
               (~ (IData)(vlSelf->MAC_rx__DOT__end_valid))))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 3U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 4U) & 
               (~ (IData)(vlSelf->MAC_rx__DOT__end_valid))))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 4U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 5U) & 
               (~ (IData)(vlSelf->MAC_rx__DOT__end_valid))))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 5U;
    }
    if ((1U & (((IData)(vlSelf->xgmii_rxc) >> 6U) & 
               (~ (IData)(vlSelf->MAC_rx__DOT__end_valid))))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 6U;
    }
    if ((IData)((((IData)(vlSelf->xgmii_rxc) >> 7U) 
                 & (~ (IData)(vlSelf->MAC_rx__DOT__end_valid))))) {
        vlSelf->MAC_rx__DOT__end_valid = 1U;
        vlSelf->MAC_rx__DOT__bytes_offset = 7U;
    }
    vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 0U;
    vlSelf->MAC_rx__DOT__FCS_offset = 0U;
    if ((1U & (IData)(vlSelf->MAC_rx__DOT__FCS_rxc))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 1U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 1U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 2U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 2U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 3U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 3U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 4U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 4U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 5U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 5U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 6U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 6U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 7U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 7U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 8U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 8U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 9U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 9U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xaU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xaU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xbU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xbU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xcU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xcU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xdU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xdU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xeU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xeU;
    }
    if ((IData)((((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                  >> 0xfU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xfU;
    }
    vlSelf->MAC_rx__DOT__byte_END = (0xffU & (IData)(
                                                     (vlSelf->xgmii_rxd 
                                                      >> 
                                                      (0x3fU 
                                                       & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->MAC_rx__DOT__bytes_offset), 3U)))));
    vlSelf->MAC_rx__DOT__ncrc_delay = 0U;
    vlSelf->MAC_rx__DOT__nbytes_rcv_dl = vlSelf->MAC_rx__DOT__bytes_rcv_dl;
    vlSelf->MAC_rx__DOT__nFCS_frame = vlSelf->MAC_rx__DOT__FCS_frame;
    vlSelf->MAC_rx__DOT__nframe_store[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[2U]))));
    vlSelf->MAC_rx__DOT__nframe_store[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                     >> 0x20U));
    vlSelf->MAC_rx__DOT__nframe_store[2U] = (IData)(vlSelf->xgmii_rxd);
    vlSelf->MAC_rx__DOT__nframe_store[3U] = (IData)(
                                                    (vlSelf->xgmii_rxd 
                                                     >> 0x20U));
    if ((0U != (IData)(vlSelf->MAC_rx__DOT__state))) {
        if ((1U != (IData)(vlSelf->MAC_rx__DOT__state))) {
            if ((2U != (IData)(vlSelf->MAC_rx__DOT__state))) {
                if ((3U == (IData)(vlSelf->MAC_rx__DOT__state))) {
                    if (((IData)(vlSelf->MAC_rx__DOT__end_valid) 
                         & (0xfdU == (IData)(vlSelf->MAC_rx__DOT__byte_END)))) {
                        if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                            if ((5U <= (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                vlSelf->MAC_rx__DOT__ncrc_delay = 1U;
                                vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                                - (IData)(4U)));
                                if ((5U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((6U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((7U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                }
                            }
                        } else {
                            vlSelf->MAC_rx__DOT__ncrc_delay = 1U;
                            vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                = (0xffU & ((IData)(4U) 
                                            + ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                               - (IData)(4U))));
                            if ((4U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                if ((1U & (~ ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->MAC_rx__DOT__bytes_offset)))) {
                                        vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                            = (0xffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                    }
                                }
                                if ((2U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                        vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                        vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    } else {
                                        vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                        vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] = 0U;
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[2U])))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[2U])))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                }
                                vlSelf->MAC_rx__DOT__nframe_store[2U] = 0U;
                                vlSelf->MAC_rx__DOT__nframe_store[3U] = 0U;
                            } else if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(4U) 
                                                + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                    = (IData)((0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[2U])))));
                                vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                    = (IData)(((0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U])))) 
                                               >> 0x20U));
                                vlSelf->MAC_rx__DOT__nframe_store[2U] = 0U;
                                vlSelf->MAC_rx__DOT__nframe_store[3U] = 0U;
                            }
                        }
                        __Vtemp_1[0U] = (IData)((((QData)((IData)(
                                                                  vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->MAC_rx__DOT__frame_store[2U]))));
                        __Vtemp_1[1U] = (IData)(((((QData)((IData)(
                                                                   vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                 >> 0x20U));
                        __Vtemp_1[2U] = (IData)(vlSelf->xgmii_rxd);
                        __Vtemp_1[3U] = (IData)((vlSelf->xgmii_rxd 
                                                 >> 0x20U));
                        VL_SHIFTR_WWI(128,128,32, __Vtemp_2, __Vtemp_1, 
                                      VL_SHIFTL_III(32,32,32, 
                                                    ((IData)(vlSelf->MAC_rx__DOT__FCS_offset) 
                                                     - (IData)(4U)), 3U));
                        vlSelf->MAC_rx__DOT__nFCS_frame 
                            = __Vtemp_2[0U];
                    }
                }
            }
        }
    }
    vlSelf->MAC_rx__DOT__next_state = vlSelf->MAC_rx__DOT__state;
    vlSelf->MAC_rx__DOT__xgmii_rxd_f = 0ULL;
    vlSelf->MAC_rx__DOT__nMAC_payload_rcv = vlSelf->MAC_payload_rcv;
    vlSelf->MAC_rx__DOT__nMAC_valid = vlSelf->MAC_valid;
    vlSelf->MAC_rx__DOT__nbytes_rcv = vlSelf->MAC_rx__DOT__bytes_rcv;
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxd_f = (((QData)((IData)(
                                                             vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->MAC_rx__DOT__frame_store[2U])));
    } else if ((4U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxd_f = (((QData)((IData)(
                                                             vlSelf->MAC_rx__DOT__frame_store[2U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->MAC_rx__DOT__frame_store[1U])));
    }
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        if (vlSelf->MAC_rx__DOT__sof_found) {
            if ((4U != (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                vlSelf->MAC_rx__DOT__next_state = 1U;
            }
        }
        if (vlSelf->MAC_rx__DOT__soft_dl) {
            vlSelf->MAC_rx__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        if ((IData)((0xaaccffffffccbbaaULL == vlSelf->MAC_rx__DOT__xgmii_rxd_f))) {
            vlSelf->MAC_rx__DOT__next_state = 2U;
            vlSelf->MAC_rx__DOT__nMAC_valid = 1U;
        } else {
            vlSelf->MAC_rx__DOT__next_state = 5U;
        }
    } else if ((2U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        if ((IData)((0x800bbffffffULL == (0xffffffffffffULL 
                                          & vlSelf->MAC_rx__DOT__xgmii_rxd_f)))) {
            vlSelf->MAC_rx__DOT__next_state = 3U;
            vlSelf->MAC_rx__DOT__nMAC_payload_rcv = 
                ((QData)((IData)((0xffffU & (IData)(
                                                    (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                     >> 0x30U))))) 
                 << 0x30U);
            vlSelf->MAC_rx__DOT__nbytes_rcv = 2U;
            vlSelf->MAC_rx__DOT__nMAC_valid = 1U;
        } else {
            vlSelf->MAC_rx__DOT__nMAC_valid = 0U;
            vlSelf->MAC_rx__DOT__next_state = 5U;
        }
    } else if ((3U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__nMAC_valid = 1U;
        vlSelf->MAC_rx__DOT__nMAC_payload_rcv = vlSelf->MAC_rx__DOT__xgmii_rxd_f;
        vlSelf->MAC_rx__DOT__nbytes_rcv = 8U;
        if (((IData)(vlSelf->MAC_rx__DOT__end_valid) 
             & (0xfdU == (IData)(vlSelf->MAC_rx__DOT__byte_END)))) {
            if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                if ((5U > (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                    if ((0U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[2U]));
                    } else if ((1U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)((0xffffffU 
                                               & vlSelf->MAC_rx__DOT__frame_store[2U])));
                    } else if ((2U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)((0xffffU 
                                               & vlSelf->MAC_rx__DOT__frame_store[2U])));
                    } else if ((3U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)((0xffU 
                                               & vlSelf->MAC_rx__DOT__frame_store[2U])));
                    }
                    vlSelf->MAC_rx__DOT__nbytes_rcv 
                        = (0xffU & ((IData)(4U) - (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                    vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                        = vlSelf->MAC_rx__DOT__nMAC_payload_rcv;
                    vlSelf->MAC_rx__DOT__next_state = 4U;
                } else {
                    vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                        = (((QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->MAC_rx__DOT__frame_store[2U])));
                    vlSelf->MAC_rx__DOT__nbytes_rcv = 8U;
                    vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                        = (((QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->MAC_rx__DOT__frame_store[2U])));
                }
            } else if ((1U & (~ ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->MAC_rx__DOT__bytes_offset)))) {
                        vlSelf->MAC_rx__DOT__nbytes_rcv = 8U;
                        vlSelf->MAC_rx__DOT__next_state = 4U;
                    }
                }
            }
        }
        if (vlSelf->MAC_rx__DOT__crc_delay) {
            vlSelf->MAC_rx__DOT__next_state = 4U;
            vlSelf->MAC_rx__DOT__nbytes_rcv = vlSelf->MAC_rx__DOT__bytes_rcv_dl;
            vlSelf->MAC_rx__DOT__nMAC_valid = 0U;
        }
    } else if ((4U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__nMAC_valid = 0U;
        vlSelf->MAC_rx__DOT__next_state = (((~ vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg) 
                                            == (IData)(vlSelf->MAC_rx__DOT__FCS_frame_cvt))
                                            ? 0U : 5U);
    }
    vlSelf->MAC_rx__DOT__crc_in_big = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->MAC_rx__DOT__xgmii_rxd_f)))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                     >> 8U))))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                        >> 0x10U))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                           >> 0x18U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                           >> 0x20U)) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & ((IData)(
                                                                                (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x28U)) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & ((IData)(
                                                                                (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x30U)) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x38U))))))))))));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffffeU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (1U 
                                                  & (VL_REDXOR_32(
                                                                  (0x481b4e5aU 
                                                                   & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                     ^ 
                                                     VL_REDXOR_64(
                                                                  (0x4d101df481b4e5aULL 
                                                                   & vlSelf->MAC_rx__DOT__crc_in_big)))));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffffdU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (2U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x90369cb5U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x9a203be90369cb5ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 1U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffffbU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (4U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x206d396bU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x1344077d206d396bULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 2U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffff7U 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (8U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x40da72d7U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x26880efa40da72d7ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 3U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffffefU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x10U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x81b4e5afU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x4d101df481b4e5afULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 4U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffffdfU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x20U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x369cb5eU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x9a203be90369cb5eULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 5U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffffbfU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x40U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x4ec8d8e6U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x3091760d4ec8d8e6ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 6U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffff7fU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x80U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x9d91b1cdU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x6122ec1a9d91b1cdULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 7U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffeffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x100U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x3b23639aU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xc245d8353b23639aULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 8U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffdffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x200U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x3e5d896eU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x805ab1b53e5d896eULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 9U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffbffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x400U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x34a05c86U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x46462b534a05c86ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xaU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffff7ffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x800U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x6940b90cU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x8c8c56a6940b90cULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xbU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffefffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x1000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xd2817218U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x11918ad4d2817218ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xcU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffdfffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x2000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xa502e430U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x232315a9a502e430ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xdU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffbfffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x4000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x4a05c860U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x46462b534a05c860ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xeU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffff7fffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x8000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x940b90c0U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x8c8c56a6940b90c0ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xfU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffeffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x10000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x600c6fdaU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x1dc9ac92600c6fdaULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x10U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffdffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x20000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xc018dfb5U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x3b935924c018dfb5ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x11U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffbffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x40000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x8031bf6aU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x7726b2498031bf6aULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x12U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfff7ffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x80000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x637ed5U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xee4d649300637ed5ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x13U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffefffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x100000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x48ddb3f0U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xd84bc8f948ddb3f0ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x14U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffdfffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x200000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xd9a029bbU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xb446902dd9a029bbULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x15U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffbfffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x400000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xfb5b1d2cU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x6c5c2184fb5b1d2cULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x16U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xff7fffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x800000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xf6b63a59U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xd8b84309f6b63a59ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x17U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfeffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x1000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xa5773ae8U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xb5a187cca5773ae8ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x18U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfdffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x2000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x2f53b8aU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x6f920e4602f53b8aULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x19U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfbffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x4000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x5ea7715U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xdf241c8c05ea7715ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1aU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xf7ffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x8000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x43cfa071U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xba9938c743cfa071ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1bU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xefffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x10000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xcf840eb8U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x71e37051cf840eb8ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1cU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xdfffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x20000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x9f081d70U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xe3c6e0a39f081d70ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1dU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xbfffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x40000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x760b74bbU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xc35cc098760b74bbULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1eU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0x7fffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | ((VL_REDXOR_32(
                                                                (0xa40da72dU 
                                                                 & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                   ^ 
                                                   VL_REDXOR_64(
                                                                (0x826880efa40da72dULL 
                                                                 & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                  << 0x1fU));
}

void VMAC_rx___024root___eval_ico(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMAC_rx___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VMAC_rx___024root___eval_triggers__ico(VMAC_rx___024root* vlSelf);

bool VMAC_rx___024root___eval_phase__ico(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMAC_rx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMAC_rx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMAC_rx___024root___eval_act(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_act\n"); );
}

VL_INLINE_OPT void VMAC_rx___024root___nba_sequent__TOP__0(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->nRST) {
        vlSelf->MAC_rx__DOT__crc_check = vlSelf->MAC_rx__DOT__ncrc_check;
        vlSelf->MAC_rx__DOT__xgmii_rxc_frame = vlSelf->MAC_rx__DOT__nxgmii_rxc_frame;
        vlSelf->MAC_rx__DOT__bytes_rcv_dl = vlSelf->MAC_rx__DOT__nbytes_rcv_dl;
        vlSelf->MAC_payload_rcv = vlSelf->MAC_rx__DOT__nMAC_payload_rcv;
        vlSelf->MAC_rx__DOT__bytes_rcv = vlSelf->MAC_rx__DOT__nbytes_rcv;
        if (vlSelf->MAC_rx__DOT__crc_init) {
            vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg = 0xffffffffU;
        } else if (vlSelf->MAC_rx__DOT__crc_valid) {
            vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg 
                = vlSelf->MAC_rx__DOT__CRC__DOT__next_crc;
        }
        vlSelf->MAC_rx__DOT__frame_store[0U] = vlSelf->MAC_rx__DOT__nframe_store[0U];
        vlSelf->MAC_rx__DOT__frame_store[1U] = vlSelf->MAC_rx__DOT__nframe_store[1U];
        vlSelf->MAC_rx__DOT__frame_store[2U] = vlSelf->MAC_rx__DOT__nframe_store[2U];
        vlSelf->MAC_rx__DOT__frame_store[3U] = vlSelf->MAC_rx__DOT__nframe_store[3U];
        vlSelf->MAC_rx__DOT__FCS_frame = vlSelf->MAC_rx__DOT__nFCS_frame;
        vlSelf->MAC_rx__DOT__sof_lane = vlSelf->MAC_rx__DOT__nsof_lane;
        vlSelf->MAC_rx__DOT__state = vlSelf->MAC_rx__DOT__next_state;
    } else {
        vlSelf->MAC_rx__DOT__crc_check = 0U;
        vlSelf->MAC_rx__DOT__xgmii_rxc_frame = 0U;
        vlSelf->MAC_rx__DOT__bytes_rcv_dl = 0U;
        vlSelf->MAC_payload_rcv = 0ULL;
        vlSelf->MAC_rx__DOT__bytes_rcv = 0U;
        vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg = 0xffffffffU;
        vlSelf->MAC_rx__DOT__frame_store[0U] = 0U;
        vlSelf->MAC_rx__DOT__frame_store[1U] = 0U;
        vlSelf->MAC_rx__DOT__frame_store[2U] = 0U;
        vlSelf->MAC_rx__DOT__frame_store[3U] = 0U;
        vlSelf->MAC_rx__DOT__FCS_frame = 0U;
        vlSelf->MAC_rx__DOT__sof_lane = 0U;
        vlSelf->MAC_rx__DOT__state = 0U;
    }
    vlSelf->MAC_rx__DOT__crc_delay = ((IData)(vlSelf->nRST) 
                                      && (IData)(vlSelf->MAC_rx__DOT__ncrc_delay));
    vlSelf->MAC_rx__DOT__soft_dl = ((IData)(vlSelf->nRST) 
                                    && (IData)(vlSelf->MAC_rx__DOT__nsoft_dl));
    vlSelf->MAC_rx__DOT__sof_found = ((IData)(vlSelf->nRST) 
                                      && (IData)(vlSelf->MAC_rx__DOT__nsof_found));
    vlSelf->MAC_valid = ((IData)(vlSelf->nRST) && (IData)(vlSelf->MAC_rx__DOT__nMAC_valid));
    vlSelf->MAC_rx__DOT__ncrc_check = vlSelf->MAC_rx__DOT__crc_check;
    vlSelf->MAC_rx__DOT__nxgmii_rxc_frame = (((IData)(vlSelf->xgmii_rxc) 
                                              << 8U) 
                                             | (0xffU 
                                                & ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                                   >> 8U)));
    vlSelf->bytes_rcv_len = vlSelf->MAC_rx__DOT__bytes_rcv;
    vlSelf->MAC_rx__DOT__FCS_frame_cvt = (QData)((IData)(
                                                         ((vlSelf->MAC_rx__DOT__FCS_frame 
                                                           << 0x18U) 
                                                          | ((0xff0000U 
                                                              & (vlSelf->MAC_rx__DOT__FCS_frame 
                                                                 << 8U)) 
                                                             | ((0xff00U 
                                                                 & (vlSelf->MAC_rx__DOT__FCS_frame 
                                                                    >> 8U)) 
                                                                | (vlSelf->MAC_rx__DOT__FCS_frame 
                                                                   >> 0x18U))))));
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxc_f = (0xffU & 
                                            ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                             >> 8U));
    } else if ((4U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxc_f = (0xffU & 
                                            ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                             >> 4U));
    }
    vlSelf->MAC_rx__DOT__crc_init = 0U;
    vlSelf->MAC_rx__DOT__crc_valid = 1U;
    vlSelf->MAC_rx__DOT__nsoft_dl = vlSelf->MAC_rx__DOT__soft_dl;
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__crc_init = 1U;
        if (vlSelf->MAC_rx__DOT__sof_found) {
            if ((4U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                vlSelf->MAC_rx__DOT__nsoft_dl = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__crc_init = 0U;
    }
    vlSelf->MAC_rx__DOT__nsof_found = vlSelf->MAC_rx__DOT__sof_found;
    if ((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
    }
    vlSelf->MAC_rx__DOT__nsof_lane = vlSelf->MAC_rx__DOT__sof_lane;
    if ((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
          & (IData)(vlSelf->xgmii_rxc)) & (0xfbU == 
                                           (0xffU & (IData)(vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 0U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 1U)) 
                 & (0xfb00ULL == (0xff00ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 1U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 2U)) 
                 & (0xfb0000ULL == (0xff0000ULL & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 2U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 3U)) 
                 & (0xfb000000ULL == (0xff000000ULL 
                                      & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 3U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 4U)) 
                 & (0xfb00000000ULL == (0xff00000000ULL 
                                        & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 4U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 5U)) 
                 & (0xfb0000000000ULL == (0xff0000000000ULL 
                                          & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 5U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 6U)) 
                 & (0xfb000000000000ULL == (0xff000000000000ULL 
                                            & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_lane = 6U;
    }
    if ((IData)((((0U == (IData)(vlSelf->MAC_rx__DOT__state)) 
                  & ((IData)(vlSelf->xgmii_rxc) >> 7U)) 
                 & (0xfb00000000000000ULL == (0xff00000000000000ULL 
                                              & vlSelf->xgmii_rxd))))) {
        vlSelf->MAC_rx__DOT__nsof_found = 1U;
        vlSelf->MAC_rx__DOT__nsof_lane = 7U;
    }
    vlSelf->frame_ok = 0U;
    vlSelf->CRC_flush = 0U;
    if ((0U != (IData)(vlSelf->MAC_rx__DOT__state))) {
        if ((1U != (IData)(vlSelf->MAC_rx__DOT__state))) {
            if ((2U != (IData)(vlSelf->MAC_rx__DOT__state))) {
                if ((3U != (IData)(vlSelf->MAC_rx__DOT__state))) {
                    if ((4U == (IData)(vlSelf->MAC_rx__DOT__state))) {
                        vlSelf->MAC_rx__DOT__crc_valid = 0U;
                        if (((~ vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg) 
                             == (IData)(vlSelf->MAC_rx__DOT__FCS_frame_cvt))) {
                            vlSelf->frame_ok = 1U;
                        }
                        if (((~ vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg) 
                             != (IData)(vlSelf->MAC_rx__DOT__FCS_frame_cvt))) {
                            vlSelf->CRC_flush = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->MAC_rx__DOT__FCS_rxc = (((IData)(vlSelf->xgmii_rxc) 
                                     << 8U) | (IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_f));
    vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 0U;
    vlSelf->MAC_rx__DOT__FCS_offset = 0U;
    if ((1U & (IData)(vlSelf->MAC_rx__DOT__FCS_rxc))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 1U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 1U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 2U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 2U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 3U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 3U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 4U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 4U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 5U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 5U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 6U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 6U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 7U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 7U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 8U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 8U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 9U) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 9U;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xaU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xaU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xbU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xbU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xcU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xcU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xdU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xdU;
    }
    if ((1U & (((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                >> 0xeU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xeU;
    }
    if ((IData)((((IData)(vlSelf->MAC_rx__DOT__FCS_rxc) 
                  >> 0xfU) & (~ (IData)(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid))))) {
        vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = 1U;
        vlSelf->MAC_rx__DOT__FCS_offset = 0xfU;
    }
}

VL_INLINE_OPT void VMAC_rx___024root___nba_sequent__TOP__1(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    vlSelf->MAC_rx__DOT__ncrc_delay = 0U;
    vlSelf->MAC_rx__DOT__nbytes_rcv_dl = vlSelf->MAC_rx__DOT__bytes_rcv_dl;
    vlSelf->MAC_rx__DOT__nframe_store[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[2U]))));
    vlSelf->MAC_rx__DOT__nframe_store[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                     >> 0x20U));
    vlSelf->MAC_rx__DOT__nframe_store[2U] = (IData)(vlSelf->xgmii_rxd);
    vlSelf->MAC_rx__DOT__nframe_store[3U] = (IData)(
                                                    (vlSelf->xgmii_rxd 
                                                     >> 0x20U));
    vlSelf->MAC_rx__DOT__next_state = vlSelf->MAC_rx__DOT__state;
    vlSelf->MAC_rx__DOT__xgmii_rxd_f = 0ULL;
    vlSelf->MAC_rx__DOT__nMAC_payload_rcv = vlSelf->MAC_payload_rcv;
    vlSelf->MAC_rx__DOT__nMAC_valid = vlSelf->MAC_valid;
    vlSelf->MAC_rx__DOT__nbytes_rcv = vlSelf->MAC_rx__DOT__bytes_rcv;
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxd_f = (((QData)((IData)(
                                                             vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->MAC_rx__DOT__frame_store[2U])));
    } else if ((4U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxd_f = (((QData)((IData)(
                                                             vlSelf->MAC_rx__DOT__frame_store[2U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->MAC_rx__DOT__frame_store[1U])));
    }
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        if (vlSelf->MAC_rx__DOT__sof_found) {
            if ((4U != (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                vlSelf->MAC_rx__DOT__next_state = 1U;
            }
        }
        if (vlSelf->MAC_rx__DOT__soft_dl) {
            vlSelf->MAC_rx__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        if ((IData)((0xaaccffffffccbbaaULL == vlSelf->MAC_rx__DOT__xgmii_rxd_f))) {
            vlSelf->MAC_rx__DOT__next_state = 2U;
            vlSelf->MAC_rx__DOT__nMAC_valid = 1U;
        } else {
            vlSelf->MAC_rx__DOT__next_state = 5U;
        }
    } else if ((2U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        if ((IData)((0x800bbffffffULL == (0xffffffffffffULL 
                                          & vlSelf->MAC_rx__DOT__xgmii_rxd_f)))) {
            vlSelf->MAC_rx__DOT__next_state = 3U;
            vlSelf->MAC_rx__DOT__nMAC_payload_rcv = 
                ((QData)((IData)((0xffffU & (IData)(
                                                    (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                     >> 0x30U))))) 
                 << 0x30U);
            vlSelf->MAC_rx__DOT__nbytes_rcv = 2U;
            vlSelf->MAC_rx__DOT__nMAC_valid = 1U;
        } else {
            vlSelf->MAC_rx__DOT__nMAC_valid = 0U;
            vlSelf->MAC_rx__DOT__next_state = 5U;
        }
    } else if ((3U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__nMAC_valid = 1U;
        vlSelf->MAC_rx__DOT__nMAC_payload_rcv = vlSelf->MAC_rx__DOT__xgmii_rxd_f;
        vlSelf->MAC_rx__DOT__nbytes_rcv = 8U;
        if (((IData)(vlSelf->MAC_rx__DOT__end_valid) 
             & (0xfdU == (IData)(vlSelf->MAC_rx__DOT__byte_END)))) {
            if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                if ((5U > (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                    if ((0U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[2U]));
                    } else if ((1U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)((0xffffffU 
                                               & vlSelf->MAC_rx__DOT__frame_store[2U])));
                    } else if ((2U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)((0xffffU 
                                               & vlSelf->MAC_rx__DOT__frame_store[2U])));
                    } else if ((3U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                        vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                            = (QData)((IData)((0xffU 
                                               & vlSelf->MAC_rx__DOT__frame_store[2U])));
                    }
                    vlSelf->MAC_rx__DOT__nbytes_rcv 
                        = (0xffU & ((IData)(4U) - (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                    vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                        = vlSelf->MAC_rx__DOT__nMAC_payload_rcv;
                    vlSelf->MAC_rx__DOT__next_state = 4U;
                } else {
                    vlSelf->MAC_rx__DOT__nMAC_payload_rcv 
                        = (((QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->MAC_rx__DOT__frame_store[2U])));
                    vlSelf->MAC_rx__DOT__nbytes_rcv = 8U;
                    vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                        = (((QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->MAC_rx__DOT__frame_store[2U])));
                }
            } else if ((1U & (~ ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->MAC_rx__DOT__bytes_offset)))) {
                        vlSelf->MAC_rx__DOT__nbytes_rcv = 8U;
                        vlSelf->MAC_rx__DOT__next_state = 4U;
                    }
                }
            }
        }
        if (vlSelf->MAC_rx__DOT__crc_delay) {
            vlSelf->MAC_rx__DOT__next_state = 4U;
            vlSelf->MAC_rx__DOT__nbytes_rcv = vlSelf->MAC_rx__DOT__bytes_rcv_dl;
            vlSelf->MAC_rx__DOT__nMAC_valid = 0U;
        }
    } else if ((4U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__nMAC_valid = 0U;
        vlSelf->MAC_rx__DOT__next_state = (((~ vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg) 
                                            == (IData)(vlSelf->MAC_rx__DOT__FCS_frame_cvt))
                                            ? 0U : 5U);
    }
    vlSelf->MAC_rx__DOT__nFCS_frame = vlSelf->MAC_rx__DOT__FCS_frame;
    if ((0U != (IData)(vlSelf->MAC_rx__DOT__state))) {
        if ((1U != (IData)(vlSelf->MAC_rx__DOT__state))) {
            if ((2U != (IData)(vlSelf->MAC_rx__DOT__state))) {
                if ((3U == (IData)(vlSelf->MAC_rx__DOT__state))) {
                    if (((IData)(vlSelf->MAC_rx__DOT__end_valid) 
                         & (0xfdU == (IData)(vlSelf->MAC_rx__DOT__byte_END)))) {
                        if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                            if ((5U <= (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                vlSelf->MAC_rx__DOT__ncrc_delay = 1U;
                                vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                                - (IData)(4U)));
                                if ((5U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((6U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else if ((7U == (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                }
                            }
                        } else {
                            vlSelf->MAC_rx__DOT__ncrc_delay = 1U;
                            vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                = (0xffU & ((IData)(4U) 
                                            + ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                               - (IData)(4U))));
                            if ((4U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                if ((1U & (~ ((IData)(vlSelf->MAC_rx__DOT__bytes_offset) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->MAC_rx__DOT__bytes_offset)))) {
                                        vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                            = (0xffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                    }
                                }
                                if ((2U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                        vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                        vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    } else {
                                        vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                        vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                       >> 0x20U));
                                        vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                            = (IData)((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->xgmii_rxd)))));
                                        vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                            = (IData)(
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->xgmii_rxd)))) 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] 
                                        = (IData)((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->xgmii_rxd)))));
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] 
                                        = (IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->xgmii_rxd)))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                   >> 0x20U));
                                    vlSelf->MAC_rx__DOT__nframe_store[2U] = 0U;
                                    vlSelf->MAC_rx__DOT__nframe_store[3U] = 0U;
                                }
                            } else if ((2U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                    vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[2U])))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                        = (0xffU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                    vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                        = (IData)((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[2U])))));
                                    vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                        = (IData)((
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->MAC_rx__DOT__frame_store[2U])))) 
                                                   >> 0x20U));
                                }
                                vlSelf->MAC_rx__DOT__nframe_store[2U] = 0U;
                                vlSelf->MAC_rx__DOT__nframe_store[3U] = 0U;
                            } else if ((1U & (IData)(vlSelf->MAC_rx__DOT__bytes_offset))) {
                                vlSelf->MAC_rx__DOT__nbytes_rcv_dl 
                                    = (0xffU & ((IData)(4U) 
                                                + (IData)(vlSelf->MAC_rx__DOT__bytes_offset)));
                                vlSelf->MAC_rx__DOT__nframe_store[0U] 
                                    = (IData)((0xffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[2U])))));
                                vlSelf->MAC_rx__DOT__nframe_store[1U] 
                                    = (IData)(((0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U])))) 
                                               >> 0x20U));
                                vlSelf->MAC_rx__DOT__nframe_store[2U] = 0U;
                                vlSelf->MAC_rx__DOT__nframe_store[3U] = 0U;
                            }
                        }
                        __Vtemp_15[0U] = (IData)((((QData)((IData)(
                                                                   vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[2U]))));
                        __Vtemp_15[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->MAC_rx__DOT__frame_store[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                                                  >> 0x20U));
                        __Vtemp_15[2U] = (IData)(vlSelf->xgmii_rxd);
                        __Vtemp_15[3U] = (IData)((vlSelf->xgmii_rxd 
                                                  >> 0x20U));
                        VL_SHIFTR_WWI(128,128,32, __Vtemp_16, __Vtemp_15, 
                                      VL_SHIFTL_III(32,32,32, 
                                                    ((IData)(vlSelf->MAC_rx__DOT__FCS_offset) 
                                                     - (IData)(4U)), 3U));
                        vlSelf->MAC_rx__DOT__nFCS_frame 
                            = __Vtemp_16[0U];
                    }
                }
            }
        }
    }
    vlSelf->MAC_rx__DOT__crc_in_big = (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->MAC_rx__DOT__xgmii_rxd_f)))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                     >> 8U))))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                        >> 0x10U))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                           >> 0x18U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                           >> 0x20U)) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & ((IData)(
                                                                                (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x28U)) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & ((IData)(
                                                                                (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x30U)) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x38U))))))))))));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffffeU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (1U 
                                                  & (VL_REDXOR_32(
                                                                  (0x481b4e5aU 
                                                                   & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                     ^ 
                                                     VL_REDXOR_64(
                                                                  (0x4d101df481b4e5aULL 
                                                                   & vlSelf->MAC_rx__DOT__crc_in_big)))));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffffdU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (2U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x90369cb5U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x9a203be90369cb5ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 1U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffffbU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (4U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x206d396bU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x1344077d206d396bULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 2U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffff7U 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (8U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x40da72d7U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x26880efa40da72d7ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 3U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffffefU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x10U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x81b4e5afU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x4d101df481b4e5afULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 4U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffffdfU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x20U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x369cb5eU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x9a203be90369cb5eULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 5U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffffbfU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x40U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x4ec8d8e6U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x3091760d4ec8d8e6ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 6U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffff7fU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x80U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x9d91b1cdU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x6122ec1a9d91b1cdULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 7U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffeffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x100U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x3b23639aU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xc245d8353b23639aULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 8U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffdffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x200U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x3e5d896eU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x805ab1b53e5d896eULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 9U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffffbffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x400U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x34a05c86U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x46462b534a05c86ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xaU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffff7ffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x800U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x6940b90cU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x8c8c56a6940b90cULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xbU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffefffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x1000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xd2817218U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x11918ad4d2817218ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xcU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffdfffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x2000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xa502e430U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x232315a9a502e430ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xdU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffffbfffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x4000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x4a05c860U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x46462b534a05c860ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xeU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffff7fffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x8000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x940b90c0U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x8c8c56a6940b90c0ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0xfU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffeffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x10000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x600c6fdaU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x1dc9ac92600c6fdaULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x10U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffdffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x20000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xc018dfb5U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x3b935924c018dfb5ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x11U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfffbffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x40000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x8031bf6aU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x7726b2498031bf6aULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x12U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfff7ffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x80000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x637ed5U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xee4d649300637ed5ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x13U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffefffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x100000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x48ddb3f0U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xd84bc8f948ddb3f0ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x14U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffdfffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x200000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xd9a029bbU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xb446902dd9a029bbULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x15U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xffbfffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x400000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xfb5b1d2cU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x6c5c2184fb5b1d2cULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x16U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xff7fffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x800000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xf6b63a59U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xd8b84309f6b63a59ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x17U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfeffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x1000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xa5773ae8U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xb5a187cca5773ae8ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x18U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfdffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x2000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x2f53b8aU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x6f920e4602f53b8aULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x19U)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xfbffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x4000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x5ea7715U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xdf241c8c05ea7715ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1aU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xf7ffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x8000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x43cfa071U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xba9938c743cfa071ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1bU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xefffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x10000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0xcf840eb8U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0x71e37051cf840eb8ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1cU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xdfffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x20000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x9f081d70U 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xe3c6e0a39f081d70ULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1dU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0xbfffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | (0x40000000U 
                                                  & ((VL_REDXOR_32(
                                                                   (0x760b74bbU 
                                                                    & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                      ^ 
                                                      VL_REDXOR_64(
                                                                   (0xc35cc098760b74bbULL 
                                                                    & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                     << 0x1eU)));
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = ((0x7fffffffU 
                                                & vlSelf->MAC_rx__DOT__CRC__DOT__next_crc) 
                                               | ((VL_REDXOR_32(
                                                                (0xa40da72dU 
                                                                 & vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)) 
                                                   ^ 
                                                   VL_REDXOR_64(
                                                                (0x826880efa40da72dULL 
                                                                 & vlSelf->MAC_rx__DOT__crc_in_big))) 
                                                  << 0x1fU));
}

void VMAC_rx___024root___eval_nba(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VMAC_rx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VMAC_rx___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VMAC_rx___024root___eval_triggers__act(VMAC_rx___024root* vlSelf);

bool VMAC_rx___024root___eval_phase__act(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMAC_rx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMAC_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMAC_rx___024root___eval_phase__nba(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMAC_rx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__ico(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__nba(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__act(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC_rx___024root___eval(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval\n"); );
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
            VMAC_rx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/MAC_rx.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMAC_rx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMAC_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/MAC_rx.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMAC_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/MAC_rx.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMAC_rx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMAC_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMAC_rx___024root___eval_debug_assertions(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->nRST & 0xfeU))) {
        Verilated::overWidthError("nRST");}
}
#endif  // VL_DEBUG
