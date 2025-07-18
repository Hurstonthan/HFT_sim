// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl___024root.h"

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_static(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_static\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__nRST__0 = vlSelfRef.nRST;
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_initial(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_initial\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_final(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_final\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__stl(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vchksum_tcp_pl___024root___eval_phase__stl(Vchksum_tcp_pl___024root* vlSelf);

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_settle(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_settle\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vchksum_tcp_pl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/chksum_tcp_pl.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vchksum_tcp_pl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__stl(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__stl\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchksum_tcp_pl___024root___stl_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf);

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_stl(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_stl\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___stl_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___stl_sequent__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_checksum_pl = (0xffffU & vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum);
    vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum = vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum;
    if (vlSelfRef.clear) {
        vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum = 0U;
    } else if (vlSelfRef.FIFO_rd_en) {
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & (((((0xffffU 
                                                     & vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum) 
                                                    + 
                                                    (0xffffU 
                                                     & (IData)(vlSelfRef.TCP_payload_tx))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.TCP_payload_tx 
                                                               >> 0x10U)))) 
                                                  + 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.TCP_payload_tx 
                                                              >> 0x20U)))) 
                                                 + 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelfRef.TCP_payload_tx 
                                                             >> 0x30U)))));
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & ((0xffffU 
                                                  & vlSelfRef.chksum_tcp_pl__DOT__temp) 
                                                 + 
                                                 (0xfU 
                                                  & (vlSelfRef.chksum_tcp_pl__DOT__temp 
                                                     >> 0x10U))));
        vlSelfRef.chksum_tcp_pl__DOT__temp = (0xfffffU 
                                              & ((0xffffU 
                                                  & vlSelfRef.chksum_tcp_pl__DOT__temp) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.chksum_tcp_pl__DOT__temp 
                                                     >> 0x10U))));
        vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelfRef.chksum_tcp_pl__DOT__temp);
    }
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_triggers__stl(Vchksum_tcp_pl___024root* vlSelf);

VL_ATTR_COLD bool Vchksum_tcp_pl___024root___eval_phase__stl(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_phase__stl\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vchksum_tcp_pl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vchksum_tcp_pl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__ico(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__ico\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__act(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__act\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__nba(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___dump_triggers__nba\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchksum_tcp_pl___024root___ctor_var_reset(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___ctor_var_reset\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->FIFO_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4128175887487812915ull);
    vlSelf->clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->TCP_payload_tx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4942590929804810109ull);
    vlSelf->TCP_checksum_pl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7924513635327023977ull);
    vlSelf->chksum_tcp_pl__DOT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6559074120140732417ull);
    vlSelf->chksum_tcp_pl__DOT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7983373551578097348ull);
    vlSelf->chksum_tcp_pl__DOT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 18208642182668291775ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
}
