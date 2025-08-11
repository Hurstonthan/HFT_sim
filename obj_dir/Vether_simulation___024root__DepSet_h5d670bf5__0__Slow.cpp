// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation___024root.h"

VL_ATTR_COLD void Vether_simulation___024root___eval_final(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_final\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__stl(Vether_simulation___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vether_simulation___024root___eval_phase__stl(Vether_simulation___024root* vlSelf);

VL_ATTR_COLD void Vether_simulation___024root___eval_settle(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_settle\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vether_simulation___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ether_simulation.sv", 3, "", "Settle region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VstlIterCount);
        vlSelfRef.__VstlIterCount = __Vtemp_1;
        vlSelfRef.__VstlContinue = 0U;
        if (Vether_simulation___024root___eval_phase__stl(vlSelf)) {
            vlSelfRef.__VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__stl(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___dump_triggers__stl\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ether_simulation.svr_inst.mac_rx.mac_dest_addr)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] ether_simulation.clt_inst.mac_rx.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vether_simulation___024root___eval_triggers__stl(Vether_simulation___024root* vlSelf);
VL_ATTR_COLD void Vether_simulation___024root___eval_stl(Vether_simulation___024root* vlSelf);

VL_ATTR_COLD bool Vether_simulation___024root___eval_phase__stl(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___eval_phase__stl\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vether_simulation___024root___eval_triggers__stl(vlSelf);
    vlSelfRef.__VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (vlSelfRef.__VstlExecute) {
        Vether_simulation___024root___eval_stl(vlSelf);
    }
    return (vlSelfRef.__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__ico(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___dump_triggers__ico\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] ether_simulation.svr_inst.mac_rx.mac_dest_addr)\n");
    }
    if ((4ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] ether_simulation.clt_inst.mac_rx.mac_dest_addr)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__act(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___dump_triggers__act\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ether_simulation.svr_inst.mac_rx.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] ether_simulation.clt_inst.mac_rx.mac_dest_addr)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ether_simulation.svr_inst.u_payload_fifo.CLK)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge ether_simulation.svr_inst.u_payload_fifo.nRST)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ether_simulation.clt_inst.u_payload_fifo.CLK)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge ether_simulation.clt_inst.u_payload_fifo.nRST)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge ether_simulation.svr_inst.ip_rx.CLK)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge ether_simulation.svr_inst.ip_rx.nRST)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge ether_simulation.clt_inst.ip_rx.CLK)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge ether_simulation.clt_inst.ip_rx.nRST)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge ether_simulation.svr_inst.mac_rx.CLK)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(negedge ether_simulation.svr_inst.mac_rx.nRST)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge ether_simulation.clt_inst.mac_rx.CLK)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(negedge ether_simulation.clt_inst.mac_rx.nRST)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge ether_simulation.svr_inst.mac_tx.CLK)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(negedge ether_simulation.svr_inst.mac_tx.nRST)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge ether_simulation.clt_inst.mac_tx.CLK)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(negedge ether_simulation.clt_inst.mac_tx.nRST)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge ether_simulation.svr_inst.ip_tx.CLK)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(negedge ether_simulation.svr_inst.ip_tx.nRST)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge ether_simulation.clt_inst.ip_tx.CLK)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(negedge ether_simulation.clt_inst.ip_tx.nRST)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(posedge ether_simulation.svr_inst.u_fifo_tx.CLK)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(negedge ether_simulation.svr_inst.u_fifo_tx.nRST)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(posedge ether_simulation.clt_inst.u_fifo_tx.CLK)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(negedge ether_simulation.clt_inst.u_fifo_tx.nRST)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @(posedge ether_simulation.svr_inst.u_tcp.inst.CLK)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(negedge ether_simulation.svr_inst.u_tcp.inst.nRST)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(posedge ether_simulation.clt_inst.u_tcp.inst.CLK)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(negedge ether_simulation.clt_inst.u_tcp.inst.nRST)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(posedge ether_simulation.svr_inst.u_tcp.TCP_tx.CLK)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(negedge ether_simulation.svr_inst.u_tcp.TCP_tx.nRST)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge ether_simulation.clt_inst.u_tcp.TCP_tx.CLK)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @(negedge ether_simulation.clt_inst.u_tcp.TCP_tx.nRST)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(posedge ether_simulation.svr_inst.u_tcp.tcp_rcv.CLK)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @(negedge ether_simulation.svr_inst.u_tcp.tcp_rcv.nRST)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @(posedge ether_simulation.clt_inst.u_tcp.tcp_rcv.CLK)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @(negedge ether_simulation.clt_inst.u_tcp.tcp_rcv.nRST)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @(posedge ether_simulation.svr_inst.u_tcp.tcp_flow.CLK)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @(negedge ether_simulation.svr_inst.u_tcp.tcp_flow.nRST)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @(posedge ether_simulation.clt_inst.u_tcp.tcp_flow.CLK)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @(negedge ether_simulation.clt_inst.u_tcp.tcp_flow.nRST)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @(posedge ether_simulation.svr_inst.mac_rx.CRC.CLK)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @(negedge ether_simulation.svr_inst.mac_rx.CRC.nRST)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @(posedge ether_simulation.svr_inst.mac_tx.CRC.CLK)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @(negedge ether_simulation.svr_inst.mac_tx.CRC.nRST)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @(posedge ether_simulation.clt_inst.mac_rx.CRC.CLK)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @(negedge ether_simulation.clt_inst.mac_rx.CRC.nRST)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @(posedge ether_simulation.clt_inst.mac_tx.CRC.CLK)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @(negedge ether_simulation.clt_inst.mac_tx.CRC.nRST)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @(posedge ether_simulation.svr_inst.ip_rx.chksum_inst.CLK)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @(negedge ether_simulation.svr_inst.ip_rx.chksum_inst.nRST)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @(posedge ether_simulation.clt_inst.ip_rx.chksum_inst.CLK)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @(negedge ether_simulation.clt_inst.ip_rx.chksum_inst.nRST)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @(posedge ether_simulation.svr_inst.u_tcp.ISN_gen.CLK)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @(negedge ether_simulation.svr_inst.u_tcp.ISN_gen.nRST)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @(posedge ether_simulation.clt_inst.u_tcp.ISN_gen.CLK)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @(negedge ether_simulation.clt_inst.u_tcp.ISN_gen.nRST)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @(posedge ether_simulation.svr_inst.u_tcp.timeout_fl.CLK)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @(negedge ether_simulation.svr_inst.u_tcp.timeout_fl.nRST)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @(posedge ether_simulation.clt_inst.u_tcp.timeout_fl.CLK)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @(negedge ether_simulation.clt_inst.u_tcp.timeout_fl.nRST)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @(posedge ether_simulation.svr_inst.u_tcp.tcp_flow.timewait.CLK)\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @(negedge ether_simulation.svr_inst.u_tcp.tcp_flow.timewait.nRST)\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @(posedge ether_simulation.clt_inst.u_tcp.tcp_flow.timewait.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @(negedge ether_simulation.clt_inst.u_tcp.tcp_flow.timewait.nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_simulation___024root___dump_triggers__nba(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___dump_triggers__nba\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ether_simulation.svr_inst.mac_rx.mac_dest_addr)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] ether_simulation.clt_inst.mac_rx.mac_dest_addr)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ether_simulation.svr_inst.u_payload_fifo.CLK)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge ether_simulation.svr_inst.u_payload_fifo.nRST)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ether_simulation.clt_inst.u_payload_fifo.CLK)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge ether_simulation.clt_inst.u_payload_fifo.nRST)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge ether_simulation.svr_inst.ip_rx.CLK)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge ether_simulation.svr_inst.ip_rx.nRST)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge ether_simulation.clt_inst.ip_rx.CLK)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge ether_simulation.clt_inst.ip_rx.nRST)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge ether_simulation.svr_inst.mac_rx.CLK)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(negedge ether_simulation.svr_inst.mac_rx.nRST)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge ether_simulation.clt_inst.mac_rx.CLK)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(negedge ether_simulation.clt_inst.mac_rx.nRST)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge ether_simulation.svr_inst.mac_tx.CLK)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(negedge ether_simulation.svr_inst.mac_tx.nRST)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge ether_simulation.clt_inst.mac_tx.CLK)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(negedge ether_simulation.clt_inst.mac_tx.nRST)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge ether_simulation.svr_inst.ip_tx.CLK)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(negedge ether_simulation.svr_inst.ip_tx.nRST)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge ether_simulation.clt_inst.ip_tx.CLK)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(negedge ether_simulation.clt_inst.ip_tx.nRST)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(posedge ether_simulation.svr_inst.u_fifo_tx.CLK)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(negedge ether_simulation.svr_inst.u_fifo_tx.nRST)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(posedge ether_simulation.clt_inst.u_fifo_tx.CLK)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(negedge ether_simulation.clt_inst.u_fifo_tx.nRST)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @(posedge ether_simulation.svr_inst.u_tcp.inst.CLK)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(negedge ether_simulation.svr_inst.u_tcp.inst.nRST)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(posedge ether_simulation.clt_inst.u_tcp.inst.CLK)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(negedge ether_simulation.clt_inst.u_tcp.inst.nRST)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(posedge ether_simulation.svr_inst.u_tcp.TCP_tx.CLK)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(negedge ether_simulation.svr_inst.u_tcp.TCP_tx.nRST)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge ether_simulation.clt_inst.u_tcp.TCP_tx.CLK)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @(negedge ether_simulation.clt_inst.u_tcp.TCP_tx.nRST)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(posedge ether_simulation.svr_inst.u_tcp.tcp_rcv.CLK)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @(negedge ether_simulation.svr_inst.u_tcp.tcp_rcv.nRST)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @(posedge ether_simulation.clt_inst.u_tcp.tcp_rcv.CLK)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @(negedge ether_simulation.clt_inst.u_tcp.tcp_rcv.nRST)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @(posedge ether_simulation.svr_inst.u_tcp.tcp_flow.CLK)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @(negedge ether_simulation.svr_inst.u_tcp.tcp_flow.nRST)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @(posedge ether_simulation.clt_inst.u_tcp.tcp_flow.CLK)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @(negedge ether_simulation.clt_inst.u_tcp.tcp_flow.nRST)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @(posedge ether_simulation.svr_inst.mac_rx.CRC.CLK)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @(negedge ether_simulation.svr_inst.mac_rx.CRC.nRST)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @(posedge ether_simulation.svr_inst.mac_tx.CRC.CLK)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @(negedge ether_simulation.svr_inst.mac_tx.CRC.nRST)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @(posedge ether_simulation.clt_inst.mac_rx.CRC.CLK)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @(negedge ether_simulation.clt_inst.mac_rx.CRC.nRST)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @(posedge ether_simulation.clt_inst.mac_tx.CRC.CLK)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @(negedge ether_simulation.clt_inst.mac_tx.CRC.nRST)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @(posedge ether_simulation.svr_inst.ip_rx.chksum_inst.CLK)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @(negedge ether_simulation.svr_inst.ip_rx.chksum_inst.nRST)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @(posedge ether_simulation.clt_inst.ip_rx.chksum_inst.CLK)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @(negedge ether_simulation.clt_inst.ip_rx.chksum_inst.nRST)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @(posedge ether_simulation.svr_inst.u_tcp.ISN_gen.CLK)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @(negedge ether_simulation.svr_inst.u_tcp.ISN_gen.nRST)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @(posedge ether_simulation.clt_inst.u_tcp.ISN_gen.CLK)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @(negedge ether_simulation.clt_inst.u_tcp.ISN_gen.nRST)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @(posedge ether_simulation.svr_inst.u_tcp.timeout_fl.CLK)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @(negedge ether_simulation.svr_inst.u_tcp.timeout_fl.nRST)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @(posedge ether_simulation.clt_inst.u_tcp.timeout_fl.CLK)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @(negedge ether_simulation.clt_inst.u_tcp.timeout_fl.nRST)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @(posedge ether_simulation.svr_inst.u_tcp.tcp_flow.timewait.CLK)\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @(negedge ether_simulation.svr_inst.u_tcp.tcp_flow.timewait.nRST)\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @(posedge ether_simulation.clt_inst.u_tcp.tcp_flow.timewait.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @(negedge ether_simulation.clt_inst.u_tcp.tcp_flow.timewait.nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vether_simulation___024root____Vm_traceActivitySetAll(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root____Vm_traceActivitySetAll\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x13U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x14U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x15U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x16U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x17U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x18U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x19U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1dU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1eU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1fU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x20U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x21U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x22U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x23U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x24U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x25U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x26U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x27U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x28U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x29U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2dU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2eU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2fU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x30U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x31U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x32U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x33U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x34U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x35U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x36U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x37U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x38U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x39U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3dU] = 1U;
}

VL_ATTR_COLD void Vether_simulation___024root___ctor_var_reset(Vether_simulation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root___ctor_var_reset\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->tb_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7146430036020323982ull);
    vlSelf->client_lost = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 868292748989921119ull);
    vlSelf->out_order = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13958075750542966291ull);
    vlSelf->err_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15846061587655420913ull);
    vlSelf->TX_en_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9441659465474736571ull);
    vlSelf->end_ss_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11128608893264532948ull);
    vlSelf->xgmii_txd_svr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2586930445969697050ull);
    vlSelf->xgmii_txc_svr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14629971246968907165ull);
    vlSelf->frame_end_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2232643288799238638ull);
    vlSelf->xgmii_rxd_svr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 101344327123097338ull);
    vlSelf->xgmii_rxc_svr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14673724433481964471ull);
    vlSelf->axis_last_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3716806491782919090ull);
    vlSelf->wr_FIFO_en_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15060890461207664145ull);
    vlSelf->len_seq_svr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 907770498415525811ull);
    vlSelf->soupbin_TCP_payload_svr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5804313946109366841ull);
    vlSelf->wr_FIFO_validing_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8110009542661936295ull);
    vlSelf->axis_r_en_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10789980391198125577ull);
    vlSelf->axis_r_valid_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16864430803334743005ull);
    vlSelf->axis_rd_data_svr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10876293826631591704ull);
    vlSelf->TCP_stop_flag_svr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5278740074214284058ull);
    vlSelf->seq_num_svr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1564295245897372461ull);
    vlSelf->rcv_next_svr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16647350659205697790ull);
    vlSelf->TX_en_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3833649687162498481ull);
    vlSelf->end_ss_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9272264333083490363ull);
    vlSelf->xgmii_txd_clt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2069246762582499120ull);
    vlSelf->xgmii_txc_clt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12452212899373049405ull);
    vlSelf->frame_end_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14918751467306933444ull);
    vlSelf->xgmii_rxd_clt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15109216898642493781ull);
    vlSelf->xgmii_rxc_clt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7331742390637498525ull);
    vlSelf->axis_last_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10242267514104353083ull);
    vlSelf->wr_FIFO_en_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18088112056909432122ull);
    vlSelf->len_seq_clt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12595858149229357071ull);
    vlSelf->soupbin_TCP_payload_clt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5258581410977138042ull);
    vlSelf->wr_FIFO_valid_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7578193289984272486ull);
    vlSelf->axis_r_en_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 948856951167959826ull);
    vlSelf->axis_r_valid_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12904417827838588138ull);
    vlSelf->axis_rd_data_clt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11831720263253446557ull);
    vlSelf->TCP_stop_flag_clt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3593504844433848116ull);
    vlSelf->seq_num_clt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10790919403188394604ull);
    vlSelf->rcv_next_clt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6104258183714708217ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__0 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 13118631930590492489ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__0 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 15388487090959883229ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__1 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11192403350619725361ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__1 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2571249056475599514ull);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__2 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 1922276912569805721ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__2 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17494700258464644233ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7424923191562369905ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15867172645759023842ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 873129399919165775ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6365230531869002179ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16745621406791813683ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9683351081644886632ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6740188342324890082ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4868503414439369151ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3565805774048230508ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1774210691885479998ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8782843476932965089ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7086879388090266123ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13355631523461227346ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7868377657439894917ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16259525296253800311ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8525655357838814741ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2596120519130304148ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18109395614529999452ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7811816488254935932ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8302152391723452328ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7421617976551165378ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 186611299256246594ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2887577478982401459ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5790789600917940637ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9744639443503271057ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3716508785601877688ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11122957237239533396ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5167352463643023495ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11972761833518068638ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10785922681775184610ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7896390001871628707ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11831123935440099403ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7105959335465319932ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071315815764715175ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6989892851254646977ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11236204368498214527ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16326055523948266602ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6768669895726293255ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4582106351229242671ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14053506086231042305ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15322743824470630903ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10197309017890292896ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3282773487182854712ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11649805072984351766ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8025694312365011343ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7903394802674156152ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4527856024015172135ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5789650860710643063ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6638567179445080194ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4288205630832611052ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2915243550405075990ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 380524613146503589ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16032700136043450596ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17007285077775350062ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13416995412208336740ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16645313924170665828ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8371475201326554913ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12737310044804228656ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9798188680571517114ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3537866520412590376ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15603466689953285379ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8866684498564126298ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117392491160404115ull);
    vlSelf->__Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16331204866807972791ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 62; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
