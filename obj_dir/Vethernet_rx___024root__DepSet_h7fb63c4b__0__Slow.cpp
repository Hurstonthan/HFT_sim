// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx___024root.h"

VL_ATTR_COLD void Vethernet_rx___024root___eval_static(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vethernet_rx___024root___eval_initial(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__0 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr;
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__1 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr;
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__2 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr;
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void Vethernet_rx___024root___eval_final(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__stl(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vethernet_rx___024root___eval_phase__stl(Vethernet_rx___024root* vlSelf);

VL_ATTR_COLD void Vethernet_rx___024root___eval_settle(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_settle\n"); );
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
            Vethernet_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ethernet_rx.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vethernet_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__stl(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vethernet_rx___024root___stl_sequent__TOP__0(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_15;
    // Body
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_check 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid = 1U;
    vlSelf->IP_flush = 0U;
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_frame 
        = (((IData)(vlSelf->xgmii_rxc) << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                    >> 8U)));
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv 
        = vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv;
    if (vlSelf->ethernet_rx__DOT__MAC_valid) {
        vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv 
            = (0xffffU & ((IData)(vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv) 
                          + (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv)));
    }
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
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear = 0U;
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
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END 
        = (0xffU & (IData)((vlSelf->xgmii_rxd >> (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset), 3U)))));
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

void Vethernet_rx___024root___ico_comb__TOP__0(Vethernet_rx___024root* vlSelf);

VL_ATTR_COLD void Vethernet_rx___024root___eval_stl(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vethernet_rx___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vethernet_rx___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vethernet_rx___024root___eval_triggers__stl(Vethernet_rx___024root* vlSelf);

VL_ATTR_COLD bool Vethernet_rx___024root___eval_phase__stl(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vethernet_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vethernet_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__ico(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__act(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__nba(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vethernet_rx___024root___ctor_var_reset(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->xgmii_rxd = VL_RAND_RESET_Q(64);
    vlSelf->xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->IP_valid = VL_RAND_RESET_I(1);
    vlSelf->IP_flush = VL_RAND_RESET_I(1);
    vlSelf->IP_payload = VL_RAND_RESET_Q(64);
    vlSelf->is_udp = VL_RAND_RESET_I(1);
    vlSelf->is_tcp = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__MAC_valid = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__MAC_flush = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__MAC_payload_rcv = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__frame_ok = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_frame = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset = VL_RAND_RESET_I(3);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_FCS = VL_RAND_RESET_I(3);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__str_FCS = VL_RAND_RESET_I(3);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane = VL_RAND_RESET_I(3);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane = VL_RAND_RESET_I(3);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxd_f = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_MSB = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_f = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_f = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_MSB = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset = VL_RAND_RESET_I(4);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check = VL_RAND_RESET_I(32);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_check = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store);
    VL_RAND_RESET_W(128, vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store);
    VL_RAND_RESET_W(128, vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap);
    VL_RAND_RESET_W(128, vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_shifted);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_ind = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_ind = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame = VL_RAND_RESET_I(32);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame = VL_RAND_RESET_I(32);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__rg = VL_RAND_RESET_I(32);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nrg = VL_RAND_RESET_I(32);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_delay = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__soft_dl = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsoft_dl = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg = VL_RAND_RESET_I(32);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc = VL_RAND_RESET_I(32);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc = VL_RAND_RESET_I(8);
    vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate = VL_RAND_RESET_I(4);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_checksum = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_checksum = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in = VL_RAND_RESET_Q(64);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__ndst_addr = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_len = VL_RAND_RESET_I(16);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid = VL_RAND_RESET_I(4);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__ip_version = VL_RAND_RESET_I(4);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_src_addr = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_ip_version_valid = VL_RAND_RESET_I(1);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp = VL_RAND_RESET_I(20);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1 = VL_RAND_RESET_I(20);
    vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2 = VL_RAND_RESET_I(20);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__0 = VL_RAND_RESET_Q(48);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__1 = VL_RAND_RESET_Q(48);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__2 = VL_RAND_RESET_Q(48);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
