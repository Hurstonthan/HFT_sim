// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl___024root.h"

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_static(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_initial(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_final(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__stl(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vchksum_tcp_pl___024root___eval_phase__stl(Vchksum_tcp_pl___024root* vlSelf);

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_settle(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_settle\n"); );
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
            Vchksum_tcp_pl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vchksum_tcp_pl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__stl(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchksum_tcp_pl___024root___stl_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->TCP_checksum_pl = (0xffffU & vlSelf->chksum_tcp_pl__DOT__TCP_checksum);
    vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    if (vlSelf->clear) {
        vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    } else if (vlSelf->FIFO_rd_en) {
        vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = 
            (0x1ffffU & ((((vlSelf->chksum_tcp_pl__DOT__TCP_checksum 
                            + (0xffffU & (IData)(vlSelf->TCP_payload_tx))) 
                           + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                                 >> 0x10U)))) 
                          + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                                >> 0x20U)))) 
                         + (0xffffU & (IData)((vlSelf->TCP_payload_tx 
                                               >> 0x30U)))));
    }
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_stl(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_triggers__stl(Vchksum_tcp_pl___024root* vlSelf);

VL_ATTR_COLD bool Vchksum_tcp_pl___024root___eval_phase__stl(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vchksum_tcp_pl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__ico(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__act(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__nba(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK or negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchksum_tcp_pl___024root___ctor_var_reset(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->FIFO_rd_en = VL_RAND_RESET_I(1);
    vlSelf->clear = VL_RAND_RESET_I(1);
    vlSelf->TCP_payload_tx = VL_RAND_RESET_Q(64);
    vlSelf->TCP_checksum_pl = VL_RAND_RESET_I(16);
    vlSelf->chksum_tcp_pl__DOT__TCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = VL_RAND_RESET_I(17);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_RAND_RESET_I(1);
}
