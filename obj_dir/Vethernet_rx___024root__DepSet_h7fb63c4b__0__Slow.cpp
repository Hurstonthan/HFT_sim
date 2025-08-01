// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx___024root.h"

VL_ATTR_COLD void Vethernet_rx___024root___eval_final(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_final\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__stl(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vethernet_rx___024root___eval_phase__stl(Vethernet_rx___024root* vlSelf);

VL_ATTR_COLD void Vethernet_rx___024root___eval_settle(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_settle\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vethernet_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ethernet_rx.sv", 4, "", "Settle region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VstlIterCount);
        vlSelfRef.__VstlIterCount = __Vtemp_1;
        vlSelfRef.__VstlContinue = 0U;
        if (Vethernet_rx___024root___eval_phase__stl(vlSelf)) {
            vlSelfRef.__VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__stl(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__stl\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vethernet_rx___024root___eval_triggers__stl(Vethernet_rx___024root* vlSelf);
VL_ATTR_COLD void Vethernet_rx___024root___eval_stl(Vethernet_rx___024root* vlSelf);

VL_ATTR_COLD bool Vethernet_rx___024root___eval_phase__stl(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_phase__stl\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vethernet_rx___024root___eval_triggers__stl(vlSelf);
    vlSelfRef.__VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (vlSelfRef.__VstlExecute) {
        Vethernet_rx___024root___eval_stl(vlSelf);
    }
    return (vlSelfRef.__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__ico(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__ico\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__act(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__act\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ethernet_rx.ip_inst.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge ethernet_rx.ip_inst.nRST)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ethernet_rx.mac_inst.CLK)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge ethernet_rx.mac_inst.nRST)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ethernet_rx.mac_inst.CRC.CLK)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(negedge ethernet_rx.mac_inst.CRC.nRST)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge ethernet_rx.ip_inst.chksum_inst.CLK)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(negedge ethernet_rx.ip_inst.chksum_inst.nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__nba(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___dump_triggers__nba\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ethernet_rx.mac_inst.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ethernet_rx.ip_inst.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge ethernet_rx.ip_inst.nRST)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ethernet_rx.mac_inst.CLK)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge ethernet_rx.mac_inst.nRST)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ethernet_rx.mac_inst.CRC.CLK)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(negedge ethernet_rx.mac_inst.CRC.nRST)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge ethernet_rx.ip_inst.chksum_inst.CLK)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(negedge ethernet_rx.ip_inst.chksum_inst.nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vethernet_rx___024root____Vm_traceActivitySetAll(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root____Vm_traceActivitySetAll\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void Vethernet_rx___024root___ctor_var_reset(Vethernet_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___ctor_var_reset\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->xgmii_rxd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14365979020943574069ull);
    vlSelf->xgmii_rxc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11892103045410615185ull);
    vlSelf->IP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454921636400644467ull);
    vlSelf->IP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370612069209852218ull);
    vlSelf->IP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16509947563924968673ull);
    vlSelf->is_udp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8635861780934784090ull);
    vlSelf->is_tcp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1011679135266419320ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__0 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17286392606960319228ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__1 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 9400110671274232723ull);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__2 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 3089756298714165827ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7424268677125870053ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15474899732340187712ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6540486814846797421ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5284228579277000015ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15680551444279741937ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11386268253222769156ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11434568514139365819ull);
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16374414519462894597ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
