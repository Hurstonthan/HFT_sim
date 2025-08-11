// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_ISN__Cz1.h"

VL_ATTR_COLD void Vether_simulation_TCP_ISN__Cz1___ctor_var_reset(Vether_simulation_TCP_ISN__Cz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_ISN__Cz1___ctor_var_reset\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__gen_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17439782646795945524ull);
    vlSelf->__PVT__ISN_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1935430307898601140ull);
    vlSelf->__PVT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10036164530568767505ull);
    vlSelf->__Vdly__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12026562012798655805ull);
    vlSelf->__Vdly__ISN_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7643149258049349649ull);
}
