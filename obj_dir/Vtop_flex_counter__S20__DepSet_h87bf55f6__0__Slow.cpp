// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_flex_counter__S20.h"

VL_ATTR_COLD void Vtop_flex_counter__S20___stl_sequent__TOP__top__u_tcp__timeout_fl__0(Vtop_flex_counter__S20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_flex_counter__S20___stl_sequent__TOP__top__u_tcp__timeout_fl__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__clear) {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__initial_val;
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
    } else if (vlSelfRef.__PVT__count_enable) {
        vlSelfRef.__PVT__nxt_count_out = ((IData)(1U) 
                                          + vlSelfRef.__PVT__count_out);
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        if ((vlSelfRef.__PVT__count_out >= vlSelfRef.__PVT__rollover_val)) {
            vlSelfRef.__PVT__nxt_count_out = 1U;
            vlSelfRef.__PVT__nxt_rollover_flag = 1U;
        } else {
            vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        }
    } else {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__count_out;
        vlSelfRef.__PVT__nxt_rollover_flag = vlSelfRef.__PVT__rollover_flag;
    }
}

VL_ATTR_COLD void Vtop_flex_counter__S20___ctor_var_reset(Vtop_flex_counter__S20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_flex_counter__S20___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->__PVT__count_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11489161304432490413ull);
    vlSelf->__PVT__rollover_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9215359523459122562ull);
    vlSelf->__PVT__initial_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13542372643679212188ull);
    vlSelf->__PVT__count_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5747114898930918141ull);
    vlSelf->__PVT__rollover_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2552473876905737463ull);
    vlSelf->__PVT__nxt_count_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11651455384960476173ull);
    vlSelf->__PVT__nxt_rollover_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9847087526156221132ull);
    vlSelf->__Vdly__count_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 143345922353354252ull);
    vlSelf->__Vdly__rollover_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 415960226592340380ull);
}
