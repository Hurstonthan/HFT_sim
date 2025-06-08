// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_TX.h for the primary calling header

#include "Vether_TX__pch.h"
#include "Vether_TX___024root.h"

VL_ATTR_COLD void Vether_TX___024root___eval_static(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_static\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__nRST__0 = vlSelfRef.nRST;
}

VL_ATTR_COLD void Vether_TX___024root___eval_initial__TOP(Vether_TX___024root* vlSelf);

VL_ATTR_COLD void Vether_TX___024root___eval_initial(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_initial\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vether_TX___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vether_TX___024root___eval_initial__TOP(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_initial__TOP\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.offset_tx = 5U;
    vlSelfRef.window_size_tx = 0x1fU;
    vlSelfRef.urgent_pointer_tx = 0U;
}

VL_ATTR_COLD void Vether_TX___024root___eval_final(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_final\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__stl(Vether_TX___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vether_TX___024root___eval_phase__stl(Vether_TX___024root* vlSelf);

VL_ATTR_COLD void Vether_TX___024root___eval_settle(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_settle\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vether_TX___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ether_TX.sv", 69, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vether_TX___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__stl(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___dump_triggers__stl\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vether_TX___024root___stl_sequent__TOP__0(Vether_TX___024root* vlSelf);
VL_ATTR_COLD void Vether_TX___024root____Vm_traceActivitySetAll(Vether_TX___024root* vlSelf);

VL_ATTR_COLD void Vether_TX___024root___eval_stl(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_stl\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vether_TX___024root___stl_sequent__TOP__0(vlSelf);
        Vether_TX___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vether_TX___024root___eval_triggers__stl(Vether_TX___024root* vlSelf);

VL_ATTR_COLD bool Vether_TX___024root___eval_phase__stl(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_phase__stl\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vether_TX___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vether_TX___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__ico(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___dump_triggers__ico\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__act(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___dump_triggers__act\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__nba(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___dump_triggers__nba\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vether_TX___024root____Vm_traceActivitySetAll(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root____Vm_traceActivitySetAll\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vether_TX___024root___ctor_var_reset(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___ctor_var_reset\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->rcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1176143556994983169ull);
    vlSelf->timeout_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17326411071393352280ull);
    vlSelf->TCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17334492037900634746ull);
    vlSelf->seq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 364544424723261665ull);
    vlSelf->ACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14319586186662147529ull);
    vlSelf->offset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3236647185777849343ull);
    vlSelf->window_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14451436454142830211ull);
    vlSelf->checksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14844497424139250528ull);
    vlSelf->urgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6361226637399478120ull);
    vlSelf->payload_len_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2219682286286776853ull);
    vlSelf->SYN_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13447878228694682953ull);
    vlSelf->ACK_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18299788803112442653ull);
    vlSelf->FIN_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1427916261814200903ull);
    vlSelf->end_ss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419734627887829661ull);
    vlSelf->ISN_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1935430307898601140ull);
    vlSelf->bytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15316022159330874346ull);
    vlSelf->bytes_abt_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14892826253315460437ull);
    vlSelf->seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796946559863942825ull);
    vlSelf->TCP_len_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11129810575715508051ull);
    vlSelf->TCP_stop_flg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4843867744612491753ull);
    vlSelf->TCP_control_tx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1155514922710194501ull);
    vlSelf->seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452675836633821188ull);
    vlSelf->ACK_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13840256559930938490ull);
    vlSelf->offset_tx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10448814117025191111ull);
    vlSelf->window_size_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12658951007252711963ull);
    vlSelf->checksum_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6497913269903047936ull);
    vlSelf->urgent_pointer_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2381669506756488056ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1374474817425065504ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4134135589002223326ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13558391970044767705ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6770091674254388164ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7014493411482990554ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15476271801917067765ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12671440396775437908ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__window_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7962427738818502770ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nwindow_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 959662706978911545ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__bytes_in_flight = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11361374814238907491ull);
    VL_SCOPED_RAND_RESET_W(1152, vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order, __VscopeHash, 7317537483003529581ull);
    VL_SCOPED_RAND_RESET_W(1152, vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order, __VscopeHash, 16231368411426322520ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2491232122819131298ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3985282446481836654ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstart_ptr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10067682767022963191ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nincr_ptr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 18439823383004133626ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5184557635331096862ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__ntrk_ptr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13019218963812566596ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9261968628650335922ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT__nrcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6277711535984723579ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_h64428630__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11488696664488096117ull);
    vlSelf->ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_hcac8f00c__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9319578710216855849ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
