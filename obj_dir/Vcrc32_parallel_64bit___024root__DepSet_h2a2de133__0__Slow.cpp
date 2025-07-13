// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc32_parallel_64bit.h for the primary calling header

#include "Vcrc32_parallel_64bit__pch.h"
#include "Vcrc32_parallel_64bit___024root.h"

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___eval_static(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_static\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__nRST__0 = vlSelfRef.nRST;
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___eval_initial(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_initial\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___eval_final(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_final\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__stl(Vcrc32_parallel_64bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcrc32_parallel_64bit___024root___eval_phase__stl(Vcrc32_parallel_64bit___024root* vlSelf);

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___eval_settle(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_settle\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcrc32_parallel_64bit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/crc32_parallel_64bit.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcrc32_parallel_64bit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__stl(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___dump_triggers__stl\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcrc32_parallel_64bit___024root___ico_sequent__TOP__0(Vcrc32_parallel_64bit___024root* vlSelf);

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___eval_stl(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_stl\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcrc32_parallel_64bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___eval_triggers__stl(Vcrc32_parallel_64bit___024root* vlSelf);

VL_ATTR_COLD bool Vcrc32_parallel_64bit___024root___eval_phase__stl(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_phase__stl\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcrc32_parallel_64bit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcrc32_parallel_64bit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__ico(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___dump_triggers__ico\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__act(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___dump_triggers__act\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__nba(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___dump_triggers__nba\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___ctor_var_reset(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___ctor_var_reset\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->crc_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18340435131149598088ull);
    vlSelf->rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7329251852453572689ull);
    vlSelf->data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10574596302020702150ull);
    vlSelf->crc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1753120250124389930ull);
    vlSelf->crc32_parallel_64bit__DOT__crc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4071778182728984479ull);
    vlSelf->crc32_parallel_64bit__DOT__next_crc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9458784023225814993ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
}
