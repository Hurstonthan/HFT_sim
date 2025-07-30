// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx___024root.h"

VL_ATTR_COLD void VMAC_rx___024root___eval_static(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMAC_rx___024root___eval_initial(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void VMAC_rx___024root___eval_final(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__stl(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMAC_rx___024root___eval_phase__stl(VMAC_rx___024root* vlSelf);

VL_ATTR_COLD void VMAC_rx___024root___eval_settle(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VMAC_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/MAC_rx.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMAC_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__stl(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC_rx___024root___stl_sequent__TOP__0(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    vlSelf->MAC_rx__DOT__crc_init = 0U;
    vlSelf->MAC_rx__DOT__crc_valid = 1U;
    vlSelf->MAC_rx__DOT__ncrc_check = vlSelf->MAC_rx__DOT__crc_check;
    vlSelf->bytes_rcv_len = vlSelf->MAC_rx__DOT__bytes_rcv;
    vlSelf->MAC_rx__DOT__nxgmii_rxc_frame = (((IData)(vlSelf->xgmii_rxc) 
                                              << 8U) 
                                             | (0xffU 
                                                & ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                                   >> 8U)));
    vlSelf->MAC_rx__DOT__nsoft_dl = vlSelf->MAC_rx__DOT__soft_dl;
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
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxc_f = (0xffU & 
                                            ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                             >> 8U));
    } else if ((4U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
        vlSelf->MAC_rx__DOT__xgmii_rxc_f = (0xffU & 
                                            ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                             >> 4U));
    }
    vlSelf->MAC_rx__DOT__FCS_rxc = (((IData)(vlSelf->xgmii_rxc) 
                                     << 8U) | (IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_f));
    vlSelf->frame_ok = 0U;
    vlSelf->CRC_flush = 0U;
    vlSelf->MAC_rx__DOT__byte_END = (0xffU & (IData)(
                                                     (vlSelf->xgmii_rxd 
                                                      >> 
                                                      (0x3fU 
                                                       & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->MAC_rx__DOT__bytes_offset), 3U)))));
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
    vlSelf->MAC_rx__DOT__nMAC_payload_rcv = vlSelf->MAC_payload_rcv;
    vlSelf->MAC_rx__DOT__nMAC_valid = vlSelf->MAC_valid;
    vlSelf->MAC_rx__DOT__nbytes_rcv = vlSelf->MAC_rx__DOT__bytes_rcv;
    if ((0U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__crc_init = 1U;
        if (vlSelf->MAC_rx__DOT__sof_found) {
            if ((4U == (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                vlSelf->MAC_rx__DOT__nsoft_dl = 1U;
            }
            if ((4U != (IData)(vlSelf->MAC_rx__DOT__sof_lane))) {
                vlSelf->MAC_rx__DOT__next_state = 1U;
            }
        }
        if (vlSelf->MAC_rx__DOT__soft_dl) {
            vlSelf->MAC_rx__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->MAC_rx__DOT__state))) {
        vlSelf->MAC_rx__DOT__crc_init = 0U;
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

VL_ATTR_COLD void VMAC_rx___024root___eval_stl(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMAC_rx___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VMAC_rx___024root___eval_triggers__stl(VMAC_rx___024root* vlSelf);

VL_ATTR_COLD bool VMAC_rx___024root___eval_phase__stl(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMAC_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMAC_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__ico(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__act(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__nba(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC_rx___024root___ctor_var_reset(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->xgmii_rxd = VL_RAND_RESET_Q(64);
    vlSelf->xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->MAC_payload_rcv = VL_RAND_RESET_Q(64);
    vlSelf->MAC_valid = VL_RAND_RESET_I(1);
    vlSelf->CRC_flush = VL_RAND_RESET_I(1);
    vlSelf->frame_ok = VL_RAND_RESET_I(1);
    vlSelf->bytes_rcv_len = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__crc_init = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__end_valid = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__crc_in_big = VL_RAND_RESET_Q(64);
    vlSelf->MAC_rx__DOT__xgmii_rxc_frame = VL_RAND_RESET_I(16);
    vlSelf->MAC_rx__DOT__nxgmii_rxc_frame = VL_RAND_RESET_I(16);
    vlSelf->MAC_rx__DOT__bytes_offset = VL_RAND_RESET_I(3);
    vlSelf->MAC_rx__DOT__end_FCS = VL_RAND_RESET_I(3);
    vlSelf->MAC_rx__DOT__str_FCS = VL_RAND_RESET_I(3);
    vlSelf->MAC_rx__DOT__sof_found = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__crc_valid = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__nsof_found = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__sof_lane = VL_RAND_RESET_I(3);
    vlSelf->MAC_rx__DOT__nsof_lane = VL_RAND_RESET_I(3);
    vlSelf->MAC_rx__DOT__xgmii_rxd_f = VL_RAND_RESET_Q(64);
    vlSelf->MAC_rx__DOT__nxgmii_rxd_f = VL_RAND_RESET_Q(64);
    vlSelf->MAC_rx__DOT__xgmii_rxc_f = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__nxgmii_rxc_f = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__FCS_rxc = VL_RAND_RESET_I(16);
    vlSelf->MAC_rx__DOT__FCS_offset = VL_RAND_RESET_I(4);
    vlSelf->MAC_rx__DOT__crc_check = VL_RAND_RESET_I(32);
    vlSelf->MAC_rx__DOT__ncrc_check = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->MAC_rx__DOT__frame_store);
    VL_RAND_RESET_W(128, vlSelf->MAC_rx__DOT__nframe_store);
    VL_RAND_RESET_W(128, vlSelf->MAC_rx__DOT__FCS_shifted);
    vlSelf->MAC_rx__DOT__crc_ind = VL_RAND_RESET_I(16);
    vlSelf->MAC_rx__DOT__ncrc_ind = VL_RAND_RESET_I(16);
    vlSelf->MAC_rx__DOT__byte_END = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__FCS_frame = VL_RAND_RESET_I(32);
    vlSelf->MAC_rx__DOT__nFCS_frame = VL_RAND_RESET_I(32);
    vlSelf->MAC_rx__DOT__FCS_frame_cvt = VL_RAND_RESET_Q(64);
    vlSelf->MAC_rx__DOT__crc_delay = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__ncrc_delay = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__soft_dl = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__nsoft_dl = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__nMAC_payload_rcv = VL_RAND_RESET_Q(64);
    vlSelf->MAC_rx__DOT__bytes_rcv = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__nbytes_rcv = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__bytes_rcv_dl = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__nbytes_rcv_dl = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__nMAC_valid = VL_RAND_RESET_I(1);
    vlSelf->MAC_rx__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->MAC_rx__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg = VL_RAND_RESET_I(32);
    vlSelf->MAC_rx__DOT__CRC__DOT__next_crc = VL_RAND_RESET_I(32);
    vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
