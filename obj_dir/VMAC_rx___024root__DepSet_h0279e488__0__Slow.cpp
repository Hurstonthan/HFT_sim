// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx___024root.h"

VL_ATTR_COLD void VMAC_rx___024root___eval_final(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_final\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__stl(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMAC_rx___024root___eval_phase__stl(VMAC_rx___024root* vlSelf);

VL_ATTR_COLD void VMAC_rx___024root___eval_settle(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_settle\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    vlSelfRef.__VstlContinue = 1U;
    while (vlSelfRef.__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VstlIterCount)))) {
#ifdef VL_DEBUG
            VMAC_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/MAC_rx.sv", 3, "", "Settle region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VstlIterCount);
        vlSelfRef.__VstlIterCount = __Vtemp_1;
        vlSelfRef.__VstlContinue = 0U;
        if (VMAC_rx___024root___eval_phase__stl(vlSelf)) {
            vlSelfRef.__VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__stl(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__stl\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] MAC_rx.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC_rx___024root___eval_triggers__stl(VMAC_rx___024root* vlSelf);
VL_ATTR_COLD void VMAC_rx___024root___eval_stl(VMAC_rx___024root* vlSelf);

VL_ATTR_COLD bool VMAC_rx___024root___eval_phase__stl(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_phase__stl\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMAC_rx___024root___eval_triggers__stl(vlSelf);
    vlSelfRef.__VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (vlSelfRef.__VstlExecute) {
        VMAC_rx___024root___eval_stl(vlSelf);
    }
    return (vlSelfRef.__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__ico(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__ico\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] MAC_rx.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__act(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__act\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] MAC_rx.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge MAC_rx.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge MAC_rx.nRST)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge MAC_rx.CRC.CLK)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge MAC_rx.CRC.nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__nba(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___dump_triggers__nba\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] MAC_rx.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge MAC_rx.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge MAC_rx.nRST)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge MAC_rx.CRC.CLK)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge MAC_rx.CRC.nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC_rx___024root____Vm_traceActivitySetAll(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root____Vm_traceActivitySetAll\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void VMAC_rx___024root___ctor_var_reset(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___ctor_var_reset\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->xgmii_rxd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14365979020943574069ull);
    vlSelf->xgmii_rxc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11892103045410615185ull);
    vlSelf->MAC_payload_rcv = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4151267856945533676ull);
    vlSelf->MAC_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882839068407703899ull);
    vlSelf->CRC_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16946334118890181985ull);
    vlSelf->frame_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2537328812920291937ull);
    vlSelf->bytes_rcv_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8940703865407227134ull);
    vlSelf->__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__0 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 8113393944444750768ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__1 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 12331260640232690401ull);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__2 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 395071132953846498ull);
    vlSelf->__Vtrigprevexpr___TOP__MAC_rx__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13637225778923588577ull);
    vlSelf->__Vtrigprevexpr___TOP__MAC_rx__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3382065738739528873ull);
    vlSelf->__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13206790338423490063ull);
    vlSelf->__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7950241536072366815ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
