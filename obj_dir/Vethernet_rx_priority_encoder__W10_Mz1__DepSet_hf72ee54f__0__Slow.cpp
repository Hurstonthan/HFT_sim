// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx_priority_encoder__W10_Mz1.h"

VL_ATTR_COLD void Vethernet_rx_priority_encoder__W10_Mz1___stl_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0(Vethernet_rx_priority_encoder__W10_Mz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vethernet_rx_priority_encoder__W10_Mz1___stl_sequent__TOP__ethernet_rx__mac_inst__xgmii_fcs__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid = 0U;
    vlSelfRef.__PVT__idx = 0U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 0U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 1U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 1U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 2U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 2U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 3U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 3U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 4U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 4U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 5U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 5U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 6U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 6U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 6U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 7U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 7U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 7U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 8U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 8U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 8U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 9U;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 9U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 9U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xaU;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 0xaU) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0xaU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xbU;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 0xbU) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0xbU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 0xcU) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0xcU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xdU;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 0xdU) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0xdU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xeU;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 0xeU) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0xeU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xfU;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__din), 0xfU) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0xfU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x10U;
}

VL_ATTR_COLD void Vethernet_rx_priority_encoder__W10_Mz1___ctor_var_reset(Vethernet_rx_priority_encoder__W10_Mz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vethernet_rx_priority_encoder__W10_Mz1___ctor_var_reset\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15192908731043726583ull);
    vlSelf->__PVT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->__PVT__idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4549807374266684455ull);
    vlSelf->__PVT__unnamedblk2__DOT__i = 0;
}
