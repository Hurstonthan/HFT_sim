// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_tx.h for the primary calling header

#include "VIP_tx__pch.h"
#include "VIP_tx___024root.h"

VL_ATTR_COLD void VIP_tx___024root___eval_static(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_static\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__nRST__0 = vlSelfRef.nRST;
}

VL_ATTR_COLD void VIP_tx___024root___eval_initial(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_initial\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VIP_tx___024root___eval_final(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_final\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__stl(VIP_tx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIP_tx___024root___eval_phase__stl(VIP_tx___024root* vlSelf);

VL_ATTR_COLD void VIP_tx___024root___eval_settle(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_settle\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VIP_tx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/IP_tx.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIP_tx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__stl(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___dump_triggers__stl\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VIP_tx___024root___ico_sequent__TOP__0(VIP_tx___024root* vlSelf);

VL_ATTR_COLD void VIP_tx___024root___eval_stl(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_stl\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VIP_tx___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VIP_tx___024root___eval_triggers__stl(VIP_tx___024root* vlSelf);

VL_ATTR_COLD bool VIP_tx___024root___eval_phase__stl(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_phase__stl\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIP_tx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VIP_tx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__ico(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___dump_triggers__ico\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__act(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___dump_triggers__act\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__nba(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___dump_triggers__nba\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VIP_tx___024root___ctor_var_reset(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___ctor_var_reset\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->IP_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2555916959053399504ull);
    vlSelf->TCP_len_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11129810575715508051ull);
    vlSelf->IP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13918429040783823530ull);
    vlSelf->IP_tx__DOT__IP_state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10152273939985376261ull);
    vlSelf->IP_tx__DOT__nxIP_state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12428508461248497815ull);
    vlSelf->IP_tx__DOT__nxIP_transmit_l = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4892043383907073047ull);
    vlSelf->IP_tx__DOT__chk_sum_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7728120683636974670ull);
    vlSelf->IP_tx__DOT__IPv4_chk_sum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15139534973494305298ull);
    vlSelf->IP_tx__DOT__nIPv4_chk_sum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17844433329282609552ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
}
