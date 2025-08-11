// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vether_simulation__Syms.h"


VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_pkg__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__rx_pkg__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ether_simulation", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2671,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2672,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2673,0,"tb_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2674,0,"client_lost",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2675,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2676,0,"err_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2677,0,"TX_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2678,0,"end_ss_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2679,0,"xgmii_txd_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2681,0,"xgmii_txc_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2682,0,"frame_end_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2683,0,"xgmii_rxd_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2685,0,"xgmii_rxc_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2686,0,"axis_last_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2687,0,"wr_FIFO_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2688,0,"len_seq_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2689,0,"soupbin_TCP_payload_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2691,0,"wr_FIFO_validing_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2692,0,"axis_r_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2693,0,"axis_r_valid_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2694,0,"axis_rd_data_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2696,0,"TCP_stop_flag_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2697,0,"seq_num_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2698,0,"rcv_next_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2699,0,"TX_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2700,0,"end_ss_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2701,0,"xgmii_txd_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2703,0,"xgmii_txc_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2704,0,"frame_end_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2705,0,"xgmii_rxd_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2707,0,"xgmii_rxc_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2708,0,"axis_last_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2709,0,"wr_FIFO_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2710,0,"len_seq_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2711,0,"soupbin_TCP_payload_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2713,0,"wr_FIFO_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2714,0,"axis_r_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2715,0,"axis_r_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2716,0,"axis_rd_data_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2718,0,"TCP_stop_flag_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2719,0,"seq_num_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2720,0,"rcv_next_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ether_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_clt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_svr__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2747,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+34,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"tb_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+37,0,"client_lost",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"err_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"TX_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"end_ss_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1697,0,"xgmii_txd_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1699,0,"xgmii_txc_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+225,0,"frame_end_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+42,0,"xgmii_rxd_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+44,0,"xgmii_rxc_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"axis_last_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"wr_FIFO_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"len_seq_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+48,0,"soupbin_TCP_payload_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2750,0,"wr_FIFO_validing_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"axis_r_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1143,0,"axis_r_valid_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1144,0,"axis_rd_data_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+363,0,"TCP_stop_flag_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1421,0,"seq_num_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1422,0,"rcv_next_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"TX_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"end_ss_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1724,0,"xgmii_txd_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1726,0,"xgmii_txc_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+235,0,"frame_end_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+53,0,"xgmii_rxd_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+55,0,"xgmii_rxc_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+56,0,"axis_last_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"wr_FIFO_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"len_seq_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+59,0,"soupbin_TCP_payload_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1959,0,"wr_FIFO_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"axis_r_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1282,0,"axis_r_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1283,0,"axis_rd_data_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+537,0,"TCP_stop_flag_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1539,0,"seq_num_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1540,0,"rcv_next_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1700,0,"xgmii_rxd_clt_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1727,0,"xgmii_rxd_svr_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1702,0,"xgmii_rxc_clt_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1729,0,"xgmii_rxc_svr_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("cvrt_clt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_clt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cvrt_svr", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_svr__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("svr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1779,0,"wr_FIFO_valid_svr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("clt_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_payload_fifo__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_fifo_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2747,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2751,0,"CLT_OR_SVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+62,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1730,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1732,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+236,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+195,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+197,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+67,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+70,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1960,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1285,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1286,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+538,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1541,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1542,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1733,0,"IP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1765,0,"IP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1766,0,"IP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1768,0,"tt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2499,0,"TCP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2752,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2250,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2251,0,"TCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2252,0,"TCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2312,0,"IP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2550,0,"IP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2313,0,"IP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"IP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2315,0,"IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2754,0,"TCP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2317,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2318,0,"protocol_data_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2181,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2183,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"CRC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2184,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mac_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2412,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2413,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2630,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2414,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1543,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1544,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+539,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+540,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1288,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1289,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+541,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+543,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1290,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1291,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1961,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1963,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1964,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1965,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2416,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2417,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1545,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1966,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2755,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2482,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1292,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1967,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1968,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1969,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1971,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("mac_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_payload_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_fifo_tx__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_payload_fifo__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_fifo_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2747,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2756,0,"CLT_OR_SVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+73,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1703,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1705,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+226,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+210,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+212,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+77,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+80,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1780,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1146,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1147,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+364,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1423,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1424,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1706,0,"IP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1751,0,"IP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1752,0,"IP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1754,0,"tt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2487,0,"TCP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2757,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2223,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2224,0,"TCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2225,0,"TCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2277,0,"IP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2511,0,"IP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2278,0,"IP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2279,0,"IP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2280,0,"IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2758,0,"TCP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2282,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2283,0,"protocol_data_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2139,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2141,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1082,0,"CRC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2142,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mac_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2347,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2348,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2589,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2349,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1425,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1426,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+365,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1149,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1150,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+367,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+369,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1151,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1152,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1781,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1783,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1784,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1785,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2351,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2352,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1427,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1786,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2759,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2477,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1153,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1787,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1788,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1789,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1791,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("mac_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_payload_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_fifo_tx__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_payload_fifo__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_payload_fifo__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2748,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2747,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2760,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+83,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2353,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2590,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2354,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2355,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1428,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1429,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+371,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1154,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1155,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+373,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+375,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1156,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1157,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1158,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1160,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1162,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1164,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1165,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1167,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1168,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1170,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1171,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1173,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1174,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1176,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1177,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1179,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1180,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1182,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1183,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1185,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1186,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1188,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1189,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1191,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1192,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1194,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1195,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1197,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1198,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1200,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1201,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1203,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1204,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1206,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1207,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1209,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+376,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+378,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+379,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+381,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+382,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+384,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+385,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+387,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+388,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+390,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+391,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+393,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+394,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+396,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+397,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+399,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+400,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+402,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+403,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+405,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+406,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+408,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+409,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+411,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+412,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+414,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+415,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+417,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+418,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+420,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+421,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+423,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1210,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1212,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+1213,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+424,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1214,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2761,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1215,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+425,0,"nrd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1216,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+426,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1217,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1218,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1220,0,"handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"nhandshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("payload", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1221+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bytes_offset", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1253+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1269,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+431,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1270,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+432,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1271,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_payload_fifo__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_payload_fifo__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2748,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2747,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2760,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+86,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2418,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2631,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2419,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2420,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1546,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1547,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+545,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+546,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1293,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1294,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+547,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+549,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1295,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1296,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1297,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1298,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1299,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1301,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1303,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1304,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1306,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1307,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1309,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1310,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1312,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1313,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1315,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1316,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1318,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1319,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1321,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1322,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1324,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1325,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1327,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1328,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1330,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1331,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1333,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1334,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1336,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1337,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1339,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1340,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1342,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1343,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1345,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1346,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1348,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+550,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+552,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+553,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+555,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+556,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+558,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+559,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+561,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+562,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+564,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+565,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+567,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+568,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+570,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+571,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+573,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+574,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+576,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+577,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+579,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+580,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+582,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+583,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+585,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+586,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+588,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+589,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+591,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+592,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+594,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+595,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+597,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1349,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1351,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+1352,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+598,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1353,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2762,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1354,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+599,0,"nrd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1355,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+600,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1357,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1358,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1359,0,"handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"nhandshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("payload", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1360+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bytes_offset", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1392+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1408,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+605,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1409,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+606,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1410,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2763,0,"PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2764,0,"PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+89,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2143,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2144,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1084,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2146,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2284,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2512,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2285,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2286,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2288,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2289,0,"IP_pseuder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2290,0,"protocol_data_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2291,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2292,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2293,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2513,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2294,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2514,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2515,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2295,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2517,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2518,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2519,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2520,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1663,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2522,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2296,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2523,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2297,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2524,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2525,0,"nIP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2526,0,"nIP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2527,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2528,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2529,0,"nIP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2530,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2531,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2532,0,"nprotocol_data_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+2533,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2534,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2535,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2536,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2537,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+2538,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2539,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2540,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2541,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2763,0,"PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2764,0,"PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+91,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2185,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2186,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1029,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2188,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2319,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2551,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2320,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2321,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2323,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2324,0,"IP_pseuder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2325,0,"protocol_data_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2326,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2327,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2328,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2552,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2329,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2553,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2554,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2330,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2556,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2557,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2558,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2559,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1666,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2561,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2331,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2562,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2332,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2563,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2564,0,"nIP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2565,0,"nIP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2566,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2567,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2568,0,"nIP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2569,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2570,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2571,0,"nprotocol_data_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+2572,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2573,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2574,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2575,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2576,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+2577,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2578,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2579,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2580,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2766,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2767,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2769,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2771,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2772,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+214,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+216,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2147,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2149,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1085,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1086,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2150,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1087,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1669,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1088,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1090,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2151,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1092,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+218,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2773,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2774,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+2152,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2153,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1093,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2154,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1094,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+1095,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2775,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2777,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1097,0,"xgmii_rxd_f_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2779,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2780,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2781,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2155,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1099,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+255,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2156,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2157,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1101,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+256,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+2782,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+2786,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2787,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+219,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+220,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2161,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2162,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2163,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2165,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1107,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"ncrc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1109,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2166,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1110,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1111,0,"case_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2167,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1112,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2169,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1114,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2170,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1115,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1116,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("payload_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+2171,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1117,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+1118,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1120,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+2788,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1122,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1123,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1124,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2766,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2767,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2769,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2771,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2772,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+199,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+201,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2189,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2191,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1030,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1031,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2192,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1032,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1033,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1035,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2193,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1037,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+203,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2792,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2793,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+2194,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2195,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1038,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2196,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1039,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+1040,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2794,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2796,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1042,0,"xgmii_rxd_f_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2798,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2799,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2800,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2197,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1044,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+264,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2198,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2199,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1046,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+265,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+2801,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+2805,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2806,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+204,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+205,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2203,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1050,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2204,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2205,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2207,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1052,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1053,0,"ncrc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1054,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2208,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1055,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1056,0,"case_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2209,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1057,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2211,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1059,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2212,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1060,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1061,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("payload_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+2213,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1062,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+1063,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1065,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+2807,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1067,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1068,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1069,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2766,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2767,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2769,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2811,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+97,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1707,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1709,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1755,0,"IP_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1757,0,"tt_len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1758,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1710,0,"IP_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1711,0,"xgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2721,0,"nxgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1713,0,"xgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2723,0,"nxgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+228,0,"IP_send_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1714,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+229,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+230,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2812,0,"nvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1715,0,"IP_last_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1657,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1716,0,"len_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"nlen_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2766,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2767,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2769,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2811,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+100,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1734,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1736,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1769,0,"IP_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1771,0,"tt_len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1772,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1737,0,"IP_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1738,0,"xgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2724,0,"nxgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1740,0,"xgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2726,0,"nxgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+238,0,"IP_send_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1741,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+239,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+240,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2813,0,"nvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1742,0,"IP_last_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1660,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1743,0,"len_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"nlen_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__CRC__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2811,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2765,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2814,0,"TYPE_OF_SERVICE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2815,0,"IPV4_VER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2764,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2816,0,"IP_IDENFICATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2817,0,"IP_FLAG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2818,0,"IP_TLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2763,0,"IP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2764,0,"IP_PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2819,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2820,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1717,0,"IP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2227,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2228,0,"len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2229,0,"protocol_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1759,0,"IP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1761,0,"tt_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1762,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2488,0,"protocol_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1763,0,"IP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2489,0,"nxIP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+2490,0,"nxIP_transmit_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2492,0,"chk_sum_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2493,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1764,0,"IPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2494,0,"nIPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2495,0,"ntt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2496,0,"chksum_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2811,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2765,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2814,0,"TYPE_OF_SERVICE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2815,0,"IPV4_VER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2764,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2816,0,"IP_IDENFICATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2817,0,"IP_FLAG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2818,0,"IP_TLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2763,0,"IP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2764,0,"IP_PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2819,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2820,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1744,0,"IP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2254,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2255,0,"len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2256,0,"protocol_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1773,0,"IP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1775,0,"tt_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1776,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2500,0,"protocol_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1777,0,"IP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2501,0,"nxIP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+2502,0,"nxIP_transmit_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2504,0,"chk_sum_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2505,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1778,0,"IPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2506,0,"nIPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2507,0,"ntt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2508,0,"chksum_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2756,0,"CLT_OR_SVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2749,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2760,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+107,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2478,0,"checksum_TX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2298,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2542,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2299,0,"IP_data_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2300,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2301,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2303,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2304,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2357,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2358,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2591,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2359,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1430,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1431,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+435,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1272,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1274,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1275,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1276,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2361,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2362,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1432,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1792,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1794,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1795,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1796,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+334,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"seq_num_tx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2497,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2231,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2232,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2233,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1797,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+111,0,"wr_FIFO_TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"wr_axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+113,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1433,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1434,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2363,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2364,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2365,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2366,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2367,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2368,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2369,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2370,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2371,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2235,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+276,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1137,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2236,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+280,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2479,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1675,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1689,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1435,0,"clear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1436,0,"count_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2372,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TCP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ISN_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("timeout_fl", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_fifo_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_fifo_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2821,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2822,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1437,0,"hand_shake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2480,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1798,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1799,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1800,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1802,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2373,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2374,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1438,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2823,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+122,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1803,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1804,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2824,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+711,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1805,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+712,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+713,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1806,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+715,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1807,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+716,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1808,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+717,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1809,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+718,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1810,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+719,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1811,0,"rd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+720,0,"nrd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1812,0,"wr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+721,0,"nwr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1813,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1814,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1815,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1816,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1817,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1818,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1819,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1820,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1821,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1822,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1823,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1824,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1825,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1826,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1827,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1828,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1829,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1830,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1831,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1832,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1833,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1834,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1835,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1836,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1837,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1838,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1839,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1840,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1841,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1842,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1843,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1844,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1845,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1846,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1847,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1848,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1849,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1850,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1851,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1852,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1853,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1854,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1855,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1856,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1857,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1858,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1859,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1860,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1861,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1862,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1863,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1864,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1865,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1866,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1867,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1868,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1869,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1870,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1871,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1873,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1874,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1875,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1876,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1877,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1878,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1879,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1880,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1881,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1882,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1883,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1884,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1885,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1886,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1887,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1888,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1889,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1890,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1891,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1892,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1893,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1894,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1895,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1896,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1897,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1898,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1899,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1900,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1901,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1902,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1903,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1904,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1905,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1906,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1907,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1908,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+722,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+723,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+724,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+725,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+726,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+727,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+728,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+729,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+731,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+732,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+733,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+734,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+738,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+739,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+740,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+741,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+744,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+745,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+746,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+748,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+750,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+751,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+752,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+755,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+756,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+757,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+758,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+759,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+762,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+763,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+764,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+766,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+768,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+769,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+770,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+771,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+774,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+775,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+776,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+777,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+780,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+781,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+782,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+783,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+784,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+786,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+787,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+788,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+789,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+792,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+793,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+794,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+795,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+798,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+799,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+800,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+801,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+802,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+804,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+805,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+806,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+807,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+810,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+811,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+812,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+816,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+817,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1909,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1910,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1911,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+821,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1912,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+822,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1913,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+823,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1914,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+824,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+1915,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1917,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1919,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1921,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1923,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1925,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1927,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1929,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1931,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1933,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1935,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1937,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1939,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1941,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1943,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1945,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+825,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+827,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+829,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+831,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+833,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+835,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+837,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+839,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+841,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+843,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+845,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+847,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+849,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+851,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+853,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+855,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+1947,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1948,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1949,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+859,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+860,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1950,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1951,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+863,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1952,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+864,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_fifo_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_fifo_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2821,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2822,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+349,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1548,0,"hand_shake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2483,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1972,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1973,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1974,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1976,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2422,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2423,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1549,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2825,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+131,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1977,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1978,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2826,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+869,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1979,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+870,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+871,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1980,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+873,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1981,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+874,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1982,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+875,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1983,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+876,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1984,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+877,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1985,0,"rd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+878,0,"nrd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1986,0,"wr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+879,0,"nwr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1987,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1988,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1989,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1990,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1991,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1992,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1993,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1994,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1995,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1996,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1997,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1998,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1999,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2000,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2001,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2002,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2003,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2004,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2005,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2006,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2007,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2008,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2009,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2010,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2011,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2012,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2013,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2014,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2015,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2016,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2017,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2018,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2019,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2020,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2021,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2022,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2023,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2024,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2025,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2026,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2027,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2028,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2029,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2030,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2031,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2032,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2033,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2034,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2035,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2036,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2037,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2038,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2039,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2040,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2041,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2042,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2043,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2044,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2045,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2046,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2047,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2048,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2049,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2050,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2051,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2052,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2053,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2054,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2055,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2056,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2057,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2058,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2059,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2060,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2061,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2062,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2063,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2064,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2065,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2066,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2067,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2068,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2069,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2070,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2071,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2072,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2073,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2074,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2075,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2076,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2077,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2078,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2079,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2080,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2081,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2082,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+880,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+881,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+884,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+885,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+886,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+888,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+890,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+891,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+892,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+894,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+896,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+897,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+898,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+901,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+902,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+903,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+904,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+905,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+906,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+907,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+908,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+909,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+910,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+911,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+912,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+914,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+915,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+916,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+917,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+919,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+920,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+921,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+922,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+923,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+924,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+925,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+926,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+927,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+928,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+930,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+932,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+933,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+934,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+935,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+937,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+938,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+939,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+940,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+941,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+944,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+945,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+946,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+948,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+950,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+951,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+952,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+953,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+954,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+955,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+956,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+957,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+958,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+959,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+960,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+962,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+963,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+964,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+965,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+966,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+967,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+968,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+969,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+970,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+972,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+974,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+975,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+2083,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2084,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+976,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2085,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+979,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2086,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+980,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2087,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+981,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2088,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+982,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+2089,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2091,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2093,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2095,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2097,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2099,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2101,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2103,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2105,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2107,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2109,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2111,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2113,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2115,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2117,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2119,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+983,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+985,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+987,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+989,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+991,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+993,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+995,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+997,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+999,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1001,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1003,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1005,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1007,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1009,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1011,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1013,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+2121,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2122,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2123,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1018,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1019,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2124,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1020,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2125,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1021,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2126,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1022,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2748,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2749,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2751,0,"CLT_OR_SVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2749,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2753,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2760,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+133,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2484,0,"checksum_TX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2333,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2581,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2334,0,"IP_data_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2335,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2336,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2338,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2339,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2424,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2425,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2632,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2426,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1550,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1551,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+607,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+609,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+610,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+611,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1411,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1412,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1413,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1414,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1415,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2428,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2429,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1552,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2127,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2129,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2130,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2131,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+350,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"seq_num_tx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2509,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2258,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2259,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2260,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2132,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+138,0,"wr_FIFO_TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"wr_axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+140,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1553,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1554,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2430,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2431,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2432,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2433,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2434,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2435,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2436,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2437,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2438,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2262,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1140,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2263,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+310,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+311,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2485,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1679,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1693,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1555,0,"clear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1556,0,"count_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2439,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TCP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ISN_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("timeout_fl", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+146,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+148,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1953,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1677,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+246,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1678,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+247,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+248,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+249,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2727,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+153,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+155,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2133,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+250,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1681,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+251,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1682,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+252,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+253,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+254,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2728,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2827,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2828,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2829,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2819,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2820,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+283,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+287,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+336,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1954,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1955,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1956,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2729,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2237,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2238,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2498,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2239,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2240,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2241,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2242,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2481,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+337,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2244,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+865,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+338,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2245,0,"state",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+339,0,"nstate",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+340,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+866,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+342,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"chksum_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+867,0,"IP_pseuder_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+868,0,"IP_pseuder_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+2246,0,"frame_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+346,0,"nframe_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2827,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2828,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2829,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2819,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2820,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+316,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+317,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+351,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2134,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2135,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2136,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2730,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2264,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2265,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2510,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2266,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2267,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2268,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2269,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2486,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+352,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2271,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1023,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+353,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2272,0,"state",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+354,0,"nstate",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+355,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1024,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+357,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"chksum_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1025,0,"IP_pseuder_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1026,0,"IP_pseuder_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+2273,0,"frame_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+361,0,"nframe_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2827,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2828,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2829,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2830,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2305,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2307,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2308,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2309,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2543,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2310,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2311,0,"IP_data_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2375,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2376,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2377,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2378,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2379,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2380,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2381,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2382,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2383,0,"bytes_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2384,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2386,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2592,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2387,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2388,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2593,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2594,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2595,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2596,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2597,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2598,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2599,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2831,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2389,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2600,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2601,0,"TCP_checksum_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2832,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2833,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2602,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2604,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2605,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2606,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2834,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2835,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2607,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2608,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2609,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2390,0,"state",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2610,0,"nstate",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2827,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2828,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2829,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2830,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2340,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2342,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2343,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2344,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2582,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2345,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2346,0,"IP_data_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2440,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2441,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2442,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2443,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2444,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2445,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2446,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2447,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2448,0,"bytes_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2449,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2451,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2633,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2452,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2453,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2634,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2635,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2636,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2637,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2638,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2639,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2640,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2836,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2454,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2641,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2642,0,"TCP_checksum_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2837,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2838,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2643,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2645,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2646,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2647,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2839,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2840,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2648,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2649,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2650,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2455,0,"state",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2651,0,"nstate",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2841,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2842,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2843,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+164,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2391,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2392,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2393,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2394,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2395,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2396,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2397,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2398,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+166,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2248,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+289,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+293,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+439,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1277,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1690,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1439,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1440,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2731,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2249,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1958,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2399,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1441,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1442,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1278,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2400,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+440,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1279,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+441,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1280,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+442,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+443,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1281,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2401,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2611,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2402,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2403,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1443,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1444,0,"count_en_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1445,0,"clear_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"case_bug",9, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+446,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1446,0,"state",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+447,0,"nstate",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2404,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2405,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2406,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2407,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2408,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2409,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2410,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2411,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+294,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1447,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1448,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+448,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+449,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1449,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1450,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+450,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+1451,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+452,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2732,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2733,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+302,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+453,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+454,0,"ncount_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"nclear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+456,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+458,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+460,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+461,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+465,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+466,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+470,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+471,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+472,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+475,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+476,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+477,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+480,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+481,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+482,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+485,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+486,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+489,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+490,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+491,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+493,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+495,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+496,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+497,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+500,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+501,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+505,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1452,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1453,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1454,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1455,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1456,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1457,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1458,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1459,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1460,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1461,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1462,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1463,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1464,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1465,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1466,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1467,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1468,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1469,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1470,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1471,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1472,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1473,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1474,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1475,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1476,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1477,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1478,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1479,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1480,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1481,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1482,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1483,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1484,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1485,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1486,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1487,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1488,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1489,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1490,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1491,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1492,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1493,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1494,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1496,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1497,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1498,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1499,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1500,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1501,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+1502,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1503,0,"rcv_next_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"nout_order_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1504,0,"seq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"nseq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1505,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1506,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1507,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1508,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+2844,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2845,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2846,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2847,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2848,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2849,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2850,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2851,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2852,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2853,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2854,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2855,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2856,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2857,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2858,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2859,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2860,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2861,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2862,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2863,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2864,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2865,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2866,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2867,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2868,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2869,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2870,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2871,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2872,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2873,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2874,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2875,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+1509,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1510,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1511,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+510,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1512,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+511,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2612,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1513,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2613,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2614,0,"left_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2615,0,"right_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2616,0,"lt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2617,0,"rt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2876,0,"ov_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1514,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1515,0,"seq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"nseq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+515,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1516,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1517,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1518,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1519,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1520,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1521,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1522,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1523,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1524,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1525,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+516,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+517,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+518,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+519,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+520,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+521,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+522,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+523,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+524,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+525,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+526,0,"timewait_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"timewait_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1683,0,"timewait_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1526,0,"pass_close",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"npass_close",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("timewait", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("lt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("rt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ov", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1527,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1528,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+529,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+530,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+531,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+532,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2841,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2842,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2843,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+167,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"out_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2456,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2457,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2458,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2459,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2460,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2461,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2462,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2463,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+170,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2275,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+322,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+323,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+613,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1416,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1694,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1557,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1558,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2734,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2276,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2138,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2464,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1559,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1560,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1417,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2465,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+614,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1418,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+615,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1419,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+616,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+617,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1420,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2466,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2652,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2467,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2468,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1561,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1562,0,"count_en_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1563,0,"clear_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+619,0,"case_bug",9, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+620,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1564,0,"state",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+621,0,"nstate",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2469,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2470,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2471,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2472,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2473,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2474,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2475,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2476,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+324,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1565,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1566,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+622,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+623,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1567,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1568,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+624,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+625,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+1569,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+626,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2735,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2736,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+332,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+627,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"ncount_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"nclear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+630,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+631,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+632,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+633,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+634,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+635,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+639,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+640,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+641,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+644,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+645,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+646,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+647,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+648,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+649,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+650,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+654,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+655,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+659,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+660,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+661,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+664,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+665,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+669,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+670,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+672,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+673,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+674,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+675,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+676,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+678,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+679,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1570,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1572,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1573,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1574,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1575,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1576,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1577,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1578,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1579,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1580,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1581,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1582,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1583,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1584,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1585,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1586,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1587,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1588,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1589,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1590,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1591,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1592,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1594,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1595,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1596,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1597,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1598,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1599,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1600,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1601,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1602,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1603,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1604,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1605,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1606,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1608,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1609,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1610,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1611,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1612,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1613,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1614,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1615,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1616,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1617,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1618,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1619,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+1620,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1621,0,"rcv_next_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+681,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"nout_order_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1622,0,"seq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+683,0,"nseq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1623,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1624,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1625,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1626,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+2877,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2878,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2879,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2880,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2881,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2882,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2883,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2884,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2885,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2886,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2887,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2888,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2889,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2890,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2891,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2892,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2893,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2894,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2895,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2896,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2897,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2898,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2899,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2900,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2901,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2902,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2903,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2904,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2905,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2906,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2907,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2908,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+1627,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1628,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1629,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+684,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1630,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+685,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2653,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1631,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2654,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2655,0,"left_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2656,0,"right_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2657,0,"lt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2658,0,"rt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2909,0,"ov_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1632,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+686,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1633,0,"seq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+687,0,"nseq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+688,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+689,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1634,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1635,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1636,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1637,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1638,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1639,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1640,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1641,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1642,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1643,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+690,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+691,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+692,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+693,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+694,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+695,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+696,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+697,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+698,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+699,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+700,0,"timewait_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+701,0,"timewait_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1686,0,"timewait_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1644,0,"pass_close",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"npass_close",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("timewait", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("lt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("rt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ov", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1645,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1646,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+703,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+704,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+705,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+706,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_clt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_clt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1745,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1747,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1748,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1750,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_svr__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_svr__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1718,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1720,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1721,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1723,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1125,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2910,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1127,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+16,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+2172,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2911,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2174,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+17,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+2176,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2912,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2178,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+18,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1129,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2913,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1131,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+19,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1070,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2914,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1072,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+20,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+2214,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2915,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2216,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+2218,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2916,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2220,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+22,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1074,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2917,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1076,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+23,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+171,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2180,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1133,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1134,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1670,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1671,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1136,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+173,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2918,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2737,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1658,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1659,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2739,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+175,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2222,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1079,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1673,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1674,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1081,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+177,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2919,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2740,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1661,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2742,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__rx_pkg__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+2920,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2922,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2811,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2924,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2925,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2926,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2763,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2927,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2818,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2819,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2820,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2828,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2928,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2771,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2929,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+179,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2544,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2545,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2546,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1664,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1665,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2548,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2549,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2765,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+181,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2583,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2584,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2585,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1667,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1668,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2587,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2588,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2930,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2756,0,"CLT_OR_SVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1138,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1139,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2930,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2751,0,"CLT_OR_SVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+185,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1141,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1142,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_pkg__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_pkg__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2931,0,"CLK_HZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2932,0,"SEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2933,0,"TIMEWAIT_SEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2934,0,"TIMEWAIT_TICK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2935,0,"TIMEWAIT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2749,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2937,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+221,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+222,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+224,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2749,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2937,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+206,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+207,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2748,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+260,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+261,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+263,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2748,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+269,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+270,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2930,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+187,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1529,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1530,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"initial_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1691,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2743,0,"nxt_count_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2744,0,"nxt_rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2930,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1647,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1648,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"initial_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1695,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1696,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2745,0,"nxt_count_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2746,0,"nxt_rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2938,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2939,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+32,0,"initial_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1684,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1685,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+535,0,"nxt_count_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+536,0,"nxt_rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2938,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2940,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+33,0,"initial_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1687,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1688,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+709,0,"nxt_count_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+710,0,"nxt_rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1531,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1532,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1533,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1534,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1535,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1536,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1537,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1538,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2618,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2619,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2620,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2621,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2622,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2623,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2624,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2625,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2626,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2627,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2628,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2629,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1649,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1650,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1651,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1652,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1653,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1654,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1655,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1656,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2659,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2660,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2661,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2662,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2663,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2664,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2665,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2666,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2941,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2936,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2753,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2667,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2668,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2669,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2670,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_top(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_top\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vether_simulation___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vether_simulation___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vether_simulation___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vether_simulation___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vether_simulation___024root__trace_register(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_register\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vether_simulation___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vether_simulation___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vether_simulation___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vether_simulation___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_const_0_sub_0(Vether_simulation___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vether_simulation___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_const_0\n"); );
    // Init
    Vether_simulation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_simulation___024root*>(voidSelf);
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vether_simulation___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_const_0_sub_0(Vether_simulation___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_const_0_sub_0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+2747,(0x40U),32);
    bufp->fullIData(oldp+2748,(0x10U),32);
    bufp->fullIData(oldp+2749,(8U),32);
    bufp->fullBit(oldp+2750,(vlSymsp->TOP__ether_simulation.wr_FIFO_validing_svr));
    bufp->fullBit(oldp+2751,(0U));
    bufp->fullBit(oldp+2752,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_tx_valid));
    bufp->fullIData(oldp+2753,(4U),32);
    bufp->fullSData(oldp+2754,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_len),16);
    bufp->fullBit(oldp+2755,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_up));
    bufp->fullBit(oldp+2756,(1U));
    bufp->fullBit(oldp+2757,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_tx_valid));
    bufp->fullSData(oldp+2758,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_len),16);
    bufp->fullBit(oldp+2759,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_up));
    bufp->fullIData(oldp+2760,(0x80U),32);
    bufp->fullCData(oldp+2761,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nlen_TCP_flush),4);
    bufp->fullCData(oldp+2762,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nlen_TCP_flush),4);
    bufp->fullCData(oldp+2763,(6U),8);
    bufp->fullSData(oldp+2764,(0x14U),16);
    bufp->fullIData(oldp+2765,(0x40U),32);
    bufp->fullIData(oldp+2766,(8U),32);
    bufp->fullQData(oldp+2767,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+2769,(0xaaccbbffffffULL),48);
    bufp->fullSData(oldp+2771,(8U),16);
    bufp->fullIData(oldp+2772,(0xc704dd7bU),32);
    bufp->fullCData(oldp+2773,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__end_FCS),3);
    bufp->fullCData(oldp+2774,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__str_FCS),3);
    bufp->fullQData(oldp+2775,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+2777,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+2779,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+2780,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+2781,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+2782,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_shifted),128);
    bufp->fullSData(oldp+2786,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_ind),16);
    bufp->fullSData(oldp+2787,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_ind),16);
    bufp->fullWData(oldp+2788,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__temp),128);
    bufp->fullCData(oldp+2792,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__end_FCS),3);
    bufp->fullCData(oldp+2793,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__str_FCS),3);
    bufp->fullQData(oldp+2794,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+2796,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+2798,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+2799,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+2800,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+2801,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_shifted),128);
    bufp->fullSData(oldp+2805,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_ind),16);
    bufp->fullSData(oldp+2806,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_ind),16);
    bufp->fullWData(oldp+2807,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__temp),128);
    bufp->fullSData(oldp+2811,(0x800U),16);
    bufp->fullBit(oldp+2812,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nvalid));
    bufp->fullBit(oldp+2813,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nvalid));
    bufp->fullCData(oldp+2814,(0U),8);
    bufp->fullCData(oldp+2815,(0x45U),8);
    bufp->fullSData(oldp+2816,(1U),16);
    bufp->fullSData(oldp+2817,(0x4000U),16);
    bufp->fullCData(oldp+2818,(0x40U),8);
    bufp->fullIData(oldp+2819,(0xc0a80101U),32);
    bufp->fullIData(oldp+2820,(0xc0a80102U),32);
    bufp->fullIData(oldp+2821,(0x10U),32);
    bufp->fullIData(oldp+2822,(4U),32);
    bufp->fullBit(oldp+2823,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_stop_flag));
    bufp->fullSData(oldp+2824,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_re_trans),16);
    bufp->fullBit(oldp+2825,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_stop_flag));
    bufp->fullSData(oldp+2826,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_re_trans),16);
    bufp->fullIData(oldp+2827,(5U),32);
    bufp->fullSData(oldp+2828,(0x1234U),16);
    bufp->fullSData(oldp+2829,(0x5678U),16);
    bufp->fullIData(oldp+2830,(0x14U),32);
    bufp->fullSData(oldp+2831,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_in),16);
    bufp->fullCData(oldp+2832,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_data_dl),8);
    bufp->fullCData(oldp+2833,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_data_dl),8);
    bufp->fullBit(oldp+2834,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_en));
    bufp->fullBit(oldp+2835,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nchecksum_en));
    bufp->fullSData(oldp+2836,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_in),16);
    bufp->fullCData(oldp+2837,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_data_dl),8);
    bufp->fullCData(oldp+2838,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_data_dl),8);
    bufp->fullBit(oldp+2839,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_en));
    bufp->fullBit(oldp+2840,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nchecksum_en));
    bufp->fullIData(oldp+2841,(0xaU),32);
    bufp->fullIData(oldp+2842,(0x800U),32);
    bufp->fullIData(oldp+2843,(0xbU),32);
    bufp->fullSData(oldp+2844,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0U, 0xaU))),10);
    bufp->fullSData(oldp+2845,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaU, 0xaU))),10);
    bufp->fullSData(oldp+2846,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x14U, 0xaU))),10);
    bufp->fullSData(oldp+2847,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x1eU, 0xaU))),10);
    bufp->fullSData(oldp+2848,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x28U, 0xaU))),10);
    bufp->fullSData(oldp+2849,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x32U, 0xaU))),10);
    bufp->fullSData(oldp+2850,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x3cU, 0xaU))),10);
    bufp->fullSData(oldp+2851,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x46U, 0xaU))),10);
    bufp->fullSData(oldp+2852,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x50U, 0xaU))),10);
    bufp->fullSData(oldp+2853,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x5aU, 0xaU))),10);
    bufp->fullSData(oldp+2854,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x64U, 0xaU))),10);
    bufp->fullSData(oldp+2855,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x6eU, 0xaU))),10);
    bufp->fullSData(oldp+2856,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x78U, 0xaU))),10);
    bufp->fullSData(oldp+2857,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x82U, 0xaU))),10);
    bufp->fullSData(oldp+2858,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x8cU, 0xaU))),10);
    bufp->fullSData(oldp+2859,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x96U, 0xaU))),10);
    bufp->fullSData(oldp+2860,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xa0U, 0xaU))),10);
    bufp->fullSData(oldp+2861,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaaU, 0xaU))),10);
    bufp->fullSData(oldp+2862,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xb4U, 0xaU))),10);
    bufp->fullSData(oldp+2863,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xbeU, 0xaU))),10);
    bufp->fullSData(oldp+2864,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xc8U, 0xaU))),10);
    bufp->fullSData(oldp+2865,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xd2U, 0xaU))),10);
    bufp->fullSData(oldp+2866,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xdcU, 0xaU))),10);
    bufp->fullSData(oldp+2867,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xe6U, 0xaU))),10);
    bufp->fullSData(oldp+2868,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xf0U, 0xaU))),10);
    bufp->fullSData(oldp+2869,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xfaU, 0xaU))),10);
    bufp->fullSData(oldp+2870,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x104U, 0xaU))),10);
    bufp->fullSData(oldp+2871,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x10eU, 0xaU))),10);
    bufp->fullSData(oldp+2872,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x118U, 0xaU))),10);
    bufp->fullSData(oldp+2873,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x122U, 0xaU))),10);
    bufp->fullSData(oldp+2874,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x12cU, 0xaU))),10);
    bufp->fullSData(oldp+2875,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x136U, 0xaU))),10);
    bufp->fullCData(oldp+2876,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ov_idx),4);
    bufp->fullSData(oldp+2877,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0U, 0xaU))),10);
    bufp->fullSData(oldp+2878,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaU, 0xaU))),10);
    bufp->fullSData(oldp+2879,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x14U, 0xaU))),10);
    bufp->fullSData(oldp+2880,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x1eU, 0xaU))),10);
    bufp->fullSData(oldp+2881,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x28U, 0xaU))),10);
    bufp->fullSData(oldp+2882,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x32U, 0xaU))),10);
    bufp->fullSData(oldp+2883,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x3cU, 0xaU))),10);
    bufp->fullSData(oldp+2884,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x46U, 0xaU))),10);
    bufp->fullSData(oldp+2885,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x50U, 0xaU))),10);
    bufp->fullSData(oldp+2886,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x5aU, 0xaU))),10);
    bufp->fullSData(oldp+2887,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x64U, 0xaU))),10);
    bufp->fullSData(oldp+2888,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x6eU, 0xaU))),10);
    bufp->fullSData(oldp+2889,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x78U, 0xaU))),10);
    bufp->fullSData(oldp+2890,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x82U, 0xaU))),10);
    bufp->fullSData(oldp+2891,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x8cU, 0xaU))),10);
    bufp->fullSData(oldp+2892,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x96U, 0xaU))),10);
    bufp->fullSData(oldp+2893,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xa0U, 0xaU))),10);
    bufp->fullSData(oldp+2894,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaaU, 0xaU))),10);
    bufp->fullSData(oldp+2895,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xb4U, 0xaU))),10);
    bufp->fullSData(oldp+2896,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xbeU, 0xaU))),10);
    bufp->fullSData(oldp+2897,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xc8U, 0xaU))),10);
    bufp->fullSData(oldp+2898,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xd2U, 0xaU))),10);
    bufp->fullSData(oldp+2899,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xdcU, 0xaU))),10);
    bufp->fullSData(oldp+2900,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xe6U, 0xaU))),10);
    bufp->fullSData(oldp+2901,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xf0U, 0xaU))),10);
    bufp->fullSData(oldp+2902,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xfaU, 0xaU))),10);
    bufp->fullSData(oldp+2903,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x104U, 0xaU))),10);
    bufp->fullSData(oldp+2904,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x10eU, 0xaU))),10);
    bufp->fullSData(oldp+2905,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x118U, 0xaU))),10);
    bufp->fullSData(oldp+2906,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x122U, 0xaU))),10);
    bufp->fullSData(oldp+2907,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x12cU, 0xaU))),10);
    bufp->fullSData(oldp+2908,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x136U, 0xaU))),10);
    bufp->fullCData(oldp+2909,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ov_idx),4);
    bufp->fullCData(oldp+2910,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2911,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2912,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2913,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2914,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2915,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2916,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2917,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullBit(oldp+2918,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__rx));
    bufp->fullBit(oldp+2919,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__rx));
    bufp->fullQData(oldp+2920,(0x123456ULL),48);
    bufp->fullQData(oldp+2922,(0x65431ULL),48);
    bufp->fullCData(oldp+2924,(4U),4);
    bufp->fullCData(oldp+2925,(5U),4);
    bufp->fullCData(oldp+2926,(0x11U),8);
    bufp->fullCData(oldp+2927,(1U),8);
    bufp->fullSData(oldp+2928,(0x4321U),16);
    bufp->fullSData(oldp+2929,(0U),16);
    bufp->fullIData(oldp+2930,(0x20U),32);
    bufp->fullIData(oldp+2931,(0x94c5f00U),32);
    bufp->fullIData(oldp+2932,(0x3cU),32);
    bufp->fullIData(oldp+2933,(0x78U),32);
    bufp->fullIData(oldp+2934,(0x12cU),32);
    bufp->fullIData(oldp+2935,(9U),32);
    bufp->fullBit(oldp+2936,(0U));
    bufp->fullIData(oldp+2937,(3U),32);
    bufp->fullIData(oldp+2938,(9U),32);
    bufp->fullSData(oldp+2939,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__rollover_val),9);
    bufp->fullSData(oldp+2940,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__rollover_val),9);
    bufp->fullIData(oldp+2941,(0xaU),32);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_full_0_sub_0(Vether_simulation___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vether_simulation___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_full_0\n"); );
    // Init
    Vether_simulation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_simulation___024root*>(voidSelf);
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vether_simulation___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_full_0_sub_0(Vether_simulation___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_full_0_sub_0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_re_trans_int),16);
    bufp->fullBit(oldp+2,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__out_order));
    bufp->fullSData(oldp+3,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_re_trans_int),16);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__out_order));
    bufp->fullSData(oldp+5,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_re_trans),16);
    bufp->fullBit(oldp+6,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_up));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_up));
    bufp->fullSData(oldp+8,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_re_trans),16);
    bufp->fullBit(oldp+9,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__clear));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__clear));
    bufp->fullSData(oldp+11,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__src_port),16);
    bufp->fullSData(oldp+12,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
    bufp->fullSData(oldp+13,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__src_port),16);
    bufp->fullSData(oldp+14,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
    bufp->fullBit(oldp+15,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_order));
    bufp->fullCData(oldp+16,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
    bufp->fullBit(oldp+24,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__rx));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__rx));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__gen_en));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__gen_en));
    bufp->fullIData(oldp+28,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
    bufp->fullSData(oldp+32,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__initial_val),9);
    bufp->fullSData(oldp+33,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__initial_val),9);
    bufp->fullBit(oldp+34,(vlSymsp->TOP__ether_simulation.CLK));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__ether_simulation.nRST));
    bufp->fullCData(oldp+36,(vlSymsp->TOP__ether_simulation.tb_count),8);
    bufp->fullBit(oldp+37,(vlSymsp->TOP__ether_simulation.client_lost));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__ether_simulation.out_order));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__ether_simulation.err_flag));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__ether_simulation.TX_en_svr));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__ether_simulation.end_ss_svr));
    bufp->fullQData(oldp+42,(vlSymsp->TOP__ether_simulation.xgmii_rxd_svr),64);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__ether_simulation.xgmii_rxc_svr),8);
    bufp->fullBit(oldp+45,(vlSymsp->TOP__ether_simulation.axis_last_svr));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_svr));
    bufp->fullIData(oldp+47,(vlSymsp->TOP__ether_simulation.len_seq_svr),32);
    bufp->fullQData(oldp+48,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_svr),64);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__ether_simulation.axis_r_en_svr));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__ether_simulation.TX_en_clt));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__ether_simulation.end_ss_clt));
    bufp->fullQData(oldp+53,(vlSymsp->TOP__ether_simulation.xgmii_rxd_clt),64);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__ether_simulation.xgmii_rxc_clt),8);
    bufp->fullBit(oldp+56,(vlSymsp->TOP__ether_simulation.axis_last_clt));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_clt));
    bufp->fullIData(oldp+58,(vlSymsp->TOP__ether_simulation.len_seq_clt),32);
    bufp->fullQData(oldp+59,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_clt),64);
    bufp->fullBit(oldp+61,(vlSymsp->TOP__ether_simulation.axis_r_en_clt));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CLK));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nRST));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__out_order));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TX_en));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__end_ss));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_last));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_en));
    bufp->fullIData(oldp+69,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__len_seq),32);
    bufp->fullQData(oldp+70,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+72,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_en));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CLK));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nRST));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TX_en));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__end_ss));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_last));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_en));
    bufp->fullIData(oldp+79,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__len_seq),32);
    bufp->fullQData(oldp+80,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_en));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__CLK));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nRST));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_en));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__CLK));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nRST));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_en));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__CLK));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nRST));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__CLK));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nRST));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CLK));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nRST));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CLK));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nRST));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__CLK));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nRST));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__TX_en));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__CLK));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nRST));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__TX_en));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__CLK));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nRST));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__CLK));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nRST));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__CLK));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nRST));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TX_en));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__end_ss));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_TX_en));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_axis_last));
    bufp->fullQData(oldp+113,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+115,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__CLK));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nRST));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TX_en));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__end_ss));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__axis_last));
    bufp->fullIData(oldp+121,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__len_seq),32);
    bufp->fullQData(oldp+122,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+124,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__CLK));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nRST));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TX_en));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__end_ss));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__axis_last));
    bufp->fullIData(oldp+130,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__len_seq),32);
    bufp->fullQData(oldp+131,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+133,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__CLK));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nRST));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TX_en));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__end_ss));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_TX_en));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_axis_last));
    bufp->fullQData(oldp+140,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+142,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__CLK));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nRST));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__axis_last));
    bufp->fullQData(oldp+146,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
    bufp->fullBit(oldp+148,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TX_en));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__CLK));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nRST));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__axis_last));
    bufp->fullQData(oldp+153,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
    bufp->fullBit(oldp+155,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TX_en));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__CLK));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nRST));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__CLK));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nRST));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__CLK));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nRST));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__CLK));
    bufp->fullBit(oldp+163,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nRST));
    bufp->fullBit(oldp+164,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__CLK));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nRST));
    bufp->fullBit(oldp+166,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__end_ss));
    bufp->fullBit(oldp+167,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__CLK));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nRST));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__end_ss));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__CLK));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nRST));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__CLK));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nRST));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__CLK));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__nRST));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__CLK));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__nRST));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__CLK));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nRST));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__CLK));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nRST));
    bufp->fullBit(oldp+191,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__CLK));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nRST));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__CLK));
    bufp->fullBit(oldp+194,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nRST));
    bufp->fullQData(oldp+195,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+197,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxc),64);
    bufp->fullQData(oldp+199,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+201,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc),8);
    bufp->fullBit(oldp+202,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__end_valid));
    bufp->fullCData(oldp+203,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_offset),3);
    bufp->fullCData(oldp+204,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__shift_bits),6);
    bufp->fullCData(oldp+205,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__byte_END),8);
    bufp->fullCData(oldp+206,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__din),8);
    bufp->fullBit(oldp+207,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__valid));
    bufp->fullCData(oldp+208,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullQData(oldp+210,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+212,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxc),64);
    bufp->fullQData(oldp+214,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+216,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc),8);
    bufp->fullBit(oldp+217,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__end_valid));
    bufp->fullCData(oldp+218,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_offset),3);
    bufp->fullCData(oldp+219,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__shift_bits),6);
    bufp->fullCData(oldp+220,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__byte_END),8);
    bufp->fullCData(oldp+221,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__din),8);
    bufp->fullBit(oldp+222,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__valid));
    bufp->fullCData(oldp+223,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+225,(vlSymsp->TOP__ether_simulation.frame_end_svr));
    bufp->fullBit(oldp+226,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_end));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__frame_end));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send_l));
    bufp->fullCData(oldp+229,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nstate),7);
    bufp->fullBit(oldp+230,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_init));
    bufp->fullBit(oldp+231,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__valid));
    bufp->fullSData(oldp+232,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nlen_counter),16);
    bufp->fullBit(oldp+233,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__valid));
    bufp->fullBit(oldp+234,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_init));
    bufp->fullBit(oldp+235,(vlSymsp->TOP__ether_simulation.frame_end_clt));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_end));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__frame_end));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send_l));
    bufp->fullCData(oldp+239,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nstate),7);
    bufp->fullBit(oldp+240,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_init));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__valid));
    bufp->fullSData(oldp+242,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nlen_counter),16);
    bufp->fullBit(oldp+243,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__valid));
    bufp->fullBit(oldp+244,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_init));
    bufp->fullSData(oldp+245,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp),20);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp1),20);
    bufp->fullSData(oldp+250,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp),20);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp1),20);
    bufp->fullCData(oldp+255,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_offset),4);
    bufp->fullWData(oldp+256,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_grap),128);
    bufp->fullSData(oldp+260,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__din),16);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__valid));
    bufp->fullCData(oldp+262,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+264,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_offset),4);
    bufp->fullWData(oldp+265,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_grap),128);
    bufp->fullSData(oldp+269,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__din),16);
    bufp->fullBit(oldp+270,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__valid));
    bufp->fullCData(oldp+271,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx_out),32);
    bufp->fullCData(oldp+275,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+277,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_tx),4);
    bufp->fullSData(oldp+279,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+280,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_tx),16);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_num_tx),32);
    bufp->fullCData(oldp+282,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+285,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
    bufp->fullSData(oldp+286,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+287,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+288,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+291,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
    bufp->fullSData(oldp+292,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+293,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
    bufp->fullBit(oldp+294,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
    bufp->fullBit(oldp+295,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
    bufp->fullBit(oldp+296,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
    bufp->fullBit(oldp+297,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
    bufp->fullBit(oldp+298,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
    bufp->fullBit(oldp+299,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
    bufp->fullBit(oldp+300,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
    bufp->fullBit(oldp+301,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
    bufp->fullBit(oldp+302,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    bufp->fullIData(oldp+303,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx_out),32);
    bufp->fullCData(oldp+306,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+309,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_tx),4);
    bufp->fullSData(oldp+310,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+311,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+312,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
    bufp->fullSData(oldp+316,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+317,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+318,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+321,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
    bufp->fullSData(oldp+322,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+323,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
    bufp->fullBit(oldp+324,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
    bufp->fullBit(oldp+325,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
    bufp->fullBit(oldp+326,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
    bufp->fullBit(oldp+327,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
    bufp->fullBit(oldp+328,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
    bufp->fullBit(oldp+329,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
    bufp->fullBit(oldp+330,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
    bufp->fullBit(oldp+331,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
    bufp->fullBit(oldp+332,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    bufp->fullBit(oldp+333,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_en_int));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_tx));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+337,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
    bufp->fullBit(oldp+338,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
    bufp->fullCData(oldp+339,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nstate),7);
    bufp->fullQData(oldp+340,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
    bufp->fullBit(oldp+342,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
    bufp->fullBit(oldp+343,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
    bufp->fullBit(oldp+344,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nseq_up));
    bufp->fullSData(oldp+345,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
    bufp->fullQData(oldp+346,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    bufp->fullBit(oldp+348,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_en_int));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_tx));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+352,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
    bufp->fullBit(oldp+353,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
    bufp->fullCData(oldp+354,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nstate),7);
    bufp->fullQData(oldp+355,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
    bufp->fullBit(oldp+357,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
    bufp->fullBit(oldp+358,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nseq_up));
    bufp->fullSData(oldp+360,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
    bufp->fullQData(oldp+361,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    bufp->fullBit(oldp+363,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_svr));
    bufp->fullBit(oldp+364,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+365,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_en_int));
    bufp->fullCData(oldp+366,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+367,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+368,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+369,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+370,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flg_int));
    bufp->fullBit(oldp+371,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+372,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+373,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+374,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+375,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
    bufp->fullQData(oldp+376,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+378,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+379,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+381,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+382,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+384,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+385,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+387,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+388,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+390,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+391,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+393,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+394,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+396,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+397,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+399,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+400,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+402,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+403,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+405,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+406,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+408,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+409,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+411,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+412,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+414,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+415,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+417,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+418,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+420,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+421,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+423,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullCData(oldp+424,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+425,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
    bufp->fullIData(oldp+426,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
    bufp->fullBit(oldp+427,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+428,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__naxis_r_valid));
    bufp->fullBit(oldp+429,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_flush_l));
    bufp->fullBit(oldp+430,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nhandshake));
    bufp->fullCData(oldp+431,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nwr_ptr),4);
    bufp->fullCData(oldp+432,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_ptr),4);
    bufp->fullBit(oldp+433,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+434,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+435,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
    bufp->fullCData(oldp+436,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+437,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+438,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_stop_flg));
    bufp->fullBit(oldp+439,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
    bufp->fullCData(oldp+440,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
    bufp->fullCData(oldp+441,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
    bufp->fullSData(oldp+442,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
    bufp->fullBit(oldp+443,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+444,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+445,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
    bufp->fullBit(oldp+446,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
    bufp->fullCData(oldp+447,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nstate),7);
    bufp->fullCData(oldp+448,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+449,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+450,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
    bufp->fullIData(oldp+451,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+452,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
    bufp->fullIData(oldp+453,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
    bufp->fullBit(oldp+454,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
    bufp->fullBit(oldp+455,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
    bufp->fullBit(oldp+456,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [0U], 0x60U))));
    bufp->fullIData(oldp+457,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+458,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+459,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+460,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+461,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [1U], 0x60U))));
    bufp->fullIData(oldp+462,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+463,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+464,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+465,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+466,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [2U], 0x60U))));
    bufp->fullIData(oldp+467,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+468,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+469,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+470,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+471,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [3U], 0x60U))));
    bufp->fullIData(oldp+472,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+473,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+474,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+475,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+476,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [4U], 0x60U))));
    bufp->fullIData(oldp+477,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+478,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+479,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+480,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+481,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [5U], 0x60U))));
    bufp->fullIData(oldp+482,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+483,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+484,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+485,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+486,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [6U], 0x60U))));
    bufp->fullIData(oldp+487,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+488,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+489,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+490,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+491,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [7U], 0x60U))));
    bufp->fullIData(oldp+492,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+493,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+494,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+495,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+496,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [8U], 0x60U))));
    bufp->fullIData(oldp+497,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+498,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+499,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+500,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+501,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [9U], 0x60U))));
    bufp->fullIData(oldp+502,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+503,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+504,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+505,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+506,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
    bufp->fullBit(oldp+507,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
    bufp->fullBit(oldp+508,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
    bufp->fullIData(oldp+509,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
    bufp->fullCData(oldp+510,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+511,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+512,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
    bufp->fullIData(oldp+513,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
    bufp->fullCData(oldp+514,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
    bufp->fullCData(oldp+515,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
    bufp->fullCData(oldp+516,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+517,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+518,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+519,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+520,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+521,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+522,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+523,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+524,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+525,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
    bufp->fullBit(oldp+526,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timewait_en));
    bufp->fullBit(oldp+527,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timewait_clear));
    bufp->fullBit(oldp+528,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__npass_close));
    bufp->fullIData(oldp+529,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+530,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+531,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+532,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+533,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__clear));
    bufp->fullBit(oldp+534,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__count_enable));
    bufp->fullSData(oldp+535,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_count_out),9);
    bufp->fullBit(oldp+536,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_rollover_flag));
    bufp->fullBit(oldp+537,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_clt));
    bufp->fullBit(oldp+538,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+539,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_en_int));
    bufp->fullCData(oldp+540,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+541,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+542,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+543,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+544,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flg_int));
    bufp->fullBit(oldp+545,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+546,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+547,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+548,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+549,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
    bufp->fullQData(oldp+550,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+552,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+553,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+555,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+556,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+558,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+559,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+561,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+562,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+564,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+565,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+567,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+568,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+570,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+571,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+573,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+574,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+576,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+577,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+579,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+580,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+582,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+583,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+585,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+586,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+588,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+589,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+591,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+592,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+594,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+595,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+597,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullCData(oldp+598,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+599,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
    bufp->fullIData(oldp+600,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
    bufp->fullBit(oldp+601,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+602,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__naxis_r_valid));
    bufp->fullBit(oldp+603,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_flush_l));
    bufp->fullBit(oldp+604,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nhandshake));
    bufp->fullCData(oldp+605,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nwr_ptr),4);
    bufp->fullCData(oldp+606,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_ptr),4);
    bufp->fullBit(oldp+607,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+608,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+609,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
    bufp->fullCData(oldp+610,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+611,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+612,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_stop_flg));
    bufp->fullBit(oldp+613,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
    bufp->fullCData(oldp+614,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
    bufp->fullCData(oldp+615,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
    bufp->fullSData(oldp+616,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
    bufp->fullBit(oldp+617,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+618,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+619,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
    bufp->fullBit(oldp+620,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
    bufp->fullCData(oldp+621,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nstate),7);
    bufp->fullCData(oldp+622,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+623,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+624,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
    bufp->fullIData(oldp+625,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+626,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
    bufp->fullBit(oldp+628,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
    bufp->fullBit(oldp+629,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
    bufp->fullBit(oldp+630,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [0U], 0x60U))));
    bufp->fullIData(oldp+631,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+632,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+633,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+634,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+635,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [1U], 0x60U))));
    bufp->fullIData(oldp+636,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+637,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+638,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+639,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+640,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [2U], 0x60U))));
    bufp->fullIData(oldp+641,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+642,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+643,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+644,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+645,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [3U], 0x60U))));
    bufp->fullIData(oldp+646,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+647,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+648,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+649,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+650,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [4U], 0x60U))));
    bufp->fullIData(oldp+651,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+652,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+653,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+654,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+655,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [5U], 0x60U))));
    bufp->fullIData(oldp+656,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+657,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+658,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+659,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+660,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [6U], 0x60U))));
    bufp->fullIData(oldp+661,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+662,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+663,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+664,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+665,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [7U], 0x60U))));
    bufp->fullIData(oldp+666,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+667,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+668,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+669,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+670,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [8U], 0x60U))));
    bufp->fullIData(oldp+671,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+672,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+673,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+674,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+675,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [9U], 0x60U))));
    bufp->fullIData(oldp+676,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+677,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+678,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+679,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+680,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
    bufp->fullBit(oldp+681,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
    bufp->fullBit(oldp+682,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
    bufp->fullIData(oldp+683,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
    bufp->fullCData(oldp+684,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+685,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+686,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
    bufp->fullIData(oldp+687,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
    bufp->fullCData(oldp+688,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
    bufp->fullCData(oldp+689,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
    bufp->fullCData(oldp+690,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+691,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+692,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+693,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+694,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+695,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+696,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+697,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+698,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+699,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
    bufp->fullBit(oldp+700,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timewait_en));
    bufp->fullBit(oldp+701,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timewait_clear));
    bufp->fullBit(oldp+702,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__npass_close));
    bufp->fullIData(oldp+703,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+704,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+705,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+706,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+707,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__clear));
    bufp->fullBit(oldp+708,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__count_enable));
    bufp->fullSData(oldp+709,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_count_out),9);
    bufp->fullBit(oldp+710,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_rollover_flag));
    bufp->fullSData(oldp+711,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
    bufp->fullSData(oldp+712,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
    bufp->fullQData(oldp+713,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+715,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_str),4);
    bufp->fullCData(oldp+716,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_end),4);
    bufp->fullCData(oldp+717,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nflush_ptr),4);
    bufp->fullSData(oldp+718,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+719,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
    bufp->fullCData(oldp+720,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_state),2);
    bufp->fullCData(oldp+721,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_state),2);
    bufp->fullBit(oldp+722,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
    bufp->fullIData(oldp+723,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+724,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+725,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+726,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+727,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+728,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
    bufp->fullIData(oldp+729,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+730,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+731,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+732,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+733,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+734,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
    bufp->fullIData(oldp+735,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+736,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+737,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+738,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+739,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+740,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
    bufp->fullIData(oldp+741,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+742,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+743,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+744,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+745,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+746,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
    bufp->fullIData(oldp+747,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+748,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+749,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+750,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+751,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+752,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
    bufp->fullIData(oldp+753,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+754,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+755,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+756,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+757,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+758,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
    bufp->fullIData(oldp+759,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+760,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+761,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+762,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+763,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+764,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
    bufp->fullIData(oldp+765,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+766,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+767,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+768,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+769,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+770,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
    bufp->fullIData(oldp+771,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+772,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+773,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+774,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+775,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+776,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
    bufp->fullIData(oldp+777,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+778,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+779,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+780,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+781,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+782,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
    bufp->fullIData(oldp+783,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+784,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+785,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+786,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+787,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+788,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
    bufp->fullIData(oldp+789,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+790,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+791,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+792,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+793,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+794,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
    bufp->fullIData(oldp+795,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+796,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+797,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+798,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+799,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+800,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
    bufp->fullIData(oldp+801,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+802,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+803,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+804,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+805,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+806,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
    bufp->fullIData(oldp+807,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+808,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+809,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+810,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+811,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+812,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
    bufp->fullIData(oldp+813,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+814,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+815,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+816,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+817,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+818,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
    bufp->fullBit(oldp+819,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
    bufp->fullBit(oldp+820,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
    bufp->fullCData(oldp+821,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+822,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+823,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_ptr),4);
    bufp->fullCData(oldp+824,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
    bufp->fullQData(oldp+825,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+827,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+829,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+831,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+833,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+835,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+837,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+839,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+841,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+843,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+845,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+847,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+849,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+851,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+853,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+855,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+857,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nout_order_req_l));
    bufp->fullBit(oldp+858,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+859,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_num_l),32);
    bufp->fullBit(oldp+860,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_1));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_2));
    bufp->fullBit(oldp+862,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_upd));
    bufp->fullSData(oldp+863,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+864,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nchecksum_l),16);
    bufp->fullIData(oldp+865,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+866,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->fullSData(oldp+867,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
    bufp->fullIData(oldp+868,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    bufp->fullSData(oldp+869,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
    bufp->fullSData(oldp+870,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
    bufp->fullQData(oldp+871,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+873,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_str),4);
    bufp->fullCData(oldp+874,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_end),4);
    bufp->fullCData(oldp+875,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nflush_ptr),4);
    bufp->fullSData(oldp+876,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+877,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
    bufp->fullCData(oldp+878,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_state),2);
    bufp->fullCData(oldp+879,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_state),2);
    bufp->fullBit(oldp+880,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
    bufp->fullIData(oldp+881,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+882,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+883,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+884,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+885,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+886,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
    bufp->fullIData(oldp+887,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+888,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+889,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+890,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+891,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+892,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
    bufp->fullIData(oldp+893,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+894,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+895,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+896,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+897,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+898,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
    bufp->fullIData(oldp+899,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+900,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+901,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+902,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+903,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+904,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
    bufp->fullIData(oldp+905,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+906,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+907,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+908,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+909,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+910,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
    bufp->fullIData(oldp+911,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+912,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+913,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+914,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+915,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+916,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
    bufp->fullIData(oldp+917,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+918,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+919,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+920,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+921,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+922,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
    bufp->fullIData(oldp+923,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+924,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+925,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+926,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+927,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+928,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
    bufp->fullIData(oldp+929,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+930,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+931,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+932,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+933,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+934,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
    bufp->fullIData(oldp+935,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+936,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+937,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+938,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+939,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+940,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
    bufp->fullIData(oldp+941,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+942,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+943,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+944,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+945,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+946,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
    bufp->fullIData(oldp+947,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+948,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+949,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+950,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+951,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+952,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
    bufp->fullIData(oldp+953,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+954,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+955,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+956,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+957,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+958,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
    bufp->fullIData(oldp+959,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+960,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+961,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+962,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+963,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+964,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
    bufp->fullIData(oldp+965,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+966,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+967,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+968,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+969,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+970,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
    bufp->fullIData(oldp+971,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+972,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+973,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+974,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+975,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+976,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
    bufp->fullBit(oldp+977,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
    bufp->fullBit(oldp+978,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
    bufp->fullCData(oldp+979,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+980,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+981,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_ptr),4);
    bufp->fullCData(oldp+982,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
    bufp->fullQData(oldp+983,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+985,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+987,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+989,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+991,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+993,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+995,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+997,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+999,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+1001,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+1003,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+1005,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+1007,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+1009,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+1011,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+1013,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+1015,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nout_order_req_l));
    bufp->fullBit(oldp+1016,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_num_l),32);
    bufp->fullBit(oldp+1018,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_1));
    bufp->fullBit(oldp+1019,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_2));
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_upd));
    bufp->fullSData(oldp+1021,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+1022,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nchecksum_l),16);
    bufp->fullIData(oldp+1023,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+1024,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->fullSData(oldp+1025,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
    bufp->fullIData(oldp+1026,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    bufp->fullBit(oldp+1027,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CRC_flush));
    bufp->fullBit(oldp+1028,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_ok));
    bufp->fullBit(oldp+1029,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_flush));
    bufp->fullBit(oldp+1030,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CRC_flush));
    bufp->fullBit(oldp+1031,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_ok));
    bufp->fullBit(oldp+1032,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_init));
    bufp->fullQData(oldp+1033,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in),64);
    bufp->fullQData(oldp+1035,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in_big),64);
    bufp->fullSData(oldp+1037,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
    bufp->fullBit(oldp+1038,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_found));
    bufp->fullCData(oldp+1039,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_lane),3);
    bufp->fullQData(oldp+1040,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+1042,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
    bufp->fullSData(oldp+1044,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_rxc),16);
    bufp->fullIData(oldp+1045,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_check),32);
    bufp->fullWData(oldp+1046,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nframe_store),128);
    bufp->fullIData(oldp+1050,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_frame),32);
    bufp->fullIData(oldp+1051,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nrg),32);
    bufp->fullBit(oldp+1052,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_delay));
    bufp->fullBit(oldp+1053,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_valid));
    bufp->fullIData(oldp+1054,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__i),32);
    bufp->fullBit(oldp+1055,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsoft_dl));
    bufp->fullBit(oldp+1056,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__case_debug));
    bufp->fullQData(oldp+1057,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+1059,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+1060,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+1061,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_valid));
    bufp->fullCData(oldp+1062,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__next_state),6);
    bufp->fullQData(oldp+1063,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr),48);
    bufp->fullQData(oldp+1065,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr),48);
    bufp->fullBit(oldp+1067,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr_valid));
    bufp->fullBit(oldp+1068,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_first_valid));
    bufp->fullBit(oldp+1069,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_second_valid));
    bufp->fullQData(oldp+1070,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1072,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+1074,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1076,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+1078,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_init));
    bufp->fullQData(oldp+1079,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+1081,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__next_crc),32);
    bufp->fullBit(oldp+1082,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CRC_flush));
    bufp->fullBit(oldp+1083,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_ok));
    bufp->fullBit(oldp+1084,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_flush));
    bufp->fullBit(oldp+1085,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CRC_flush));
    bufp->fullBit(oldp+1086,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_ok));
    bufp->fullBit(oldp+1087,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_init));
    bufp->fullQData(oldp+1088,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in),64);
    bufp->fullQData(oldp+1090,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in_big),64);
    bufp->fullSData(oldp+1092,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
    bufp->fullBit(oldp+1093,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_found));
    bufp->fullCData(oldp+1094,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_lane),3);
    bufp->fullQData(oldp+1095,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+1097,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
    bufp->fullSData(oldp+1099,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_rxc),16);
    bufp->fullIData(oldp+1100,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_check),32);
    bufp->fullWData(oldp+1101,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nframe_store),128);
    bufp->fullIData(oldp+1105,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_frame),32);
    bufp->fullIData(oldp+1106,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nrg),32);
    bufp->fullBit(oldp+1107,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_delay));
    bufp->fullBit(oldp+1108,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_valid));
    bufp->fullIData(oldp+1109,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__i),32);
    bufp->fullBit(oldp+1110,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsoft_dl));
    bufp->fullBit(oldp+1111,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__case_debug));
    bufp->fullQData(oldp+1112,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+1114,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+1115,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+1116,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_valid));
    bufp->fullCData(oldp+1117,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__next_state),6);
    bufp->fullQData(oldp+1118,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr),48);
    bufp->fullQData(oldp+1120,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr),48);
    bufp->fullBit(oldp+1122,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr_valid));
    bufp->fullBit(oldp+1123,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_first_valid));
    bufp->fullBit(oldp+1124,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_second_valid));
    bufp->fullQData(oldp+1125,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1127,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+1129,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1131,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+1133,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_init));
    bufp->fullQData(oldp+1134,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+1136,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__next_crc),32);
    bufp->fullIData(oldp+1137,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ISN_num),32);
    bufp->fullIData(oldp+1138,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
    bufp->fullIData(oldp+1139,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__counter),32);
    bufp->fullIData(oldp+1140,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ISN_num),32);
    bufp->fullIData(oldp+1141,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
    bufp->fullIData(oldp+1142,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__counter),32);
    bufp->fullBit(oldp+1143,(vlSymsp->TOP__ether_simulation.axis_r_valid_svr));
    bufp->fullQData(oldp+1144,(vlSymsp->TOP__ether_simulation.axis_rd_data_svr),64);
    bufp->fullBit(oldp+1146,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_valid));
    bufp->fullQData(oldp+1147,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_rd_data),64);
    bufp->fullCData(oldp+1149,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+1150,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+1151,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_en_int));
    bufp->fullIData(oldp+1152,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+1153,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__full));
    bufp->fullCData(oldp+1154,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+1155,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+1156,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+1157,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+1158,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__full));
    bufp->fullBit(oldp+1159,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_valid));
    bufp->fullQData(oldp+1160,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_rd_data),64);
    bufp->fullQData(oldp+1162,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1164,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+1165,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1167,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+1168,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1170,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+1171,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1173,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+1174,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1176,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+1177,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1179,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+1180,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1182,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+1183,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1185,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+1186,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1188,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+1189,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1191,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+1192,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1194,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+1195,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1197,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+1198,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1200,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+1201,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1203,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+1204,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1206,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+1207,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1209,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xfU], 0U, 8U))),8);
    bufp->fullQData(oldp+1210,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
    bufp->fullCData(oldp+1212,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
    bufp->fullCData(oldp+1213,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+1214,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
    bufp->fullCData(oldp+1215,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
    bufp->fullIData(oldp+1216,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
    bufp->fullCData(oldp+1217,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_len),4);
    bufp->fullBit(oldp+1218,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
    bufp->fullBit(oldp+1219,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush_l));
    bufp->fullBit(oldp+1220,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake));
    bufp->fullQData(oldp+1221,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[0]),64);
    bufp->fullQData(oldp+1223,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[1]),64);
    bufp->fullQData(oldp+1225,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[2]),64);
    bufp->fullQData(oldp+1227,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[3]),64);
    bufp->fullQData(oldp+1229,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[4]),64);
    bufp->fullQData(oldp+1231,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[5]),64);
    bufp->fullQData(oldp+1233,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[6]),64);
    bufp->fullQData(oldp+1235,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[7]),64);
    bufp->fullQData(oldp+1237,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[8]),64);
    bufp->fullQData(oldp+1239,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[9]),64);
    bufp->fullQData(oldp+1241,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[10]),64);
    bufp->fullQData(oldp+1243,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[11]),64);
    bufp->fullQData(oldp+1245,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[12]),64);
    bufp->fullQData(oldp+1247,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[13]),64);
    bufp->fullQData(oldp+1249,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[14]),64);
    bufp->fullQData(oldp+1251,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[15]),64);
    bufp->fullCData(oldp+1253,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
    bufp->fullCData(oldp+1254,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
    bufp->fullCData(oldp+1255,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
    bufp->fullCData(oldp+1256,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
    bufp->fullCData(oldp+1257,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
    bufp->fullCData(oldp+1258,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
    bufp->fullCData(oldp+1259,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
    bufp->fullCData(oldp+1260,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
    bufp->fullCData(oldp+1261,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
    bufp->fullCData(oldp+1262,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
    bufp->fullCData(oldp+1263,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
    bufp->fullCData(oldp+1264,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
    bufp->fullCData(oldp+1265,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
    bufp->fullCData(oldp+1266,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
    bufp->fullCData(oldp+1267,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
    bufp->fullCData(oldp+1268,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
    bufp->fullCData(oldp+1269,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr),4);
    bufp->fullCData(oldp+1270,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_ptr),4);
    bufp->fullIData(oldp+1271,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1272,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+1273,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+1274,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
    bufp->fullIData(oldp+1275,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+1276,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__full));
    bufp->fullBit(oldp+1277,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__full));
    bufp->fullIData(oldp+1278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+1279,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
    bufp->fullSData(oldp+1280,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    bufp->fullBit(oldp+1281,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+1282,(vlSymsp->TOP__ether_simulation.axis_r_valid_clt));
    bufp->fullQData(oldp+1283,(vlSymsp->TOP__ether_simulation.axis_rd_data_clt),64);
    bufp->fullBit(oldp+1285,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_valid));
    bufp->fullQData(oldp+1286,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_rd_data),64);
    bufp->fullCData(oldp+1288,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+1289,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+1290,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_en_int));
    bufp->fullIData(oldp+1291,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+1292,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__full));
    bufp->fullCData(oldp+1293,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+1294,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+1295,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+1296,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+1297,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__full));
    bufp->fullBit(oldp+1298,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_valid));
    bufp->fullQData(oldp+1299,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_rd_data),64);
    bufp->fullQData(oldp+1301,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1303,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+1304,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1306,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+1307,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1309,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+1310,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1312,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+1313,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1315,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+1316,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1318,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+1319,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1321,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+1322,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1324,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+1325,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1327,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+1328,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1330,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+1331,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1333,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+1334,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1336,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+1337,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1339,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+1340,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1342,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+1343,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1345,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+1346,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                           [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+1348,((0xffU & VL_SEL_IWII(72, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                    [0xfU], 0U, 8U))),8);
    bufp->fullQData(oldp+1349,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
    bufp->fullCData(oldp+1351,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
    bufp->fullCData(oldp+1352,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+1353,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
    bufp->fullCData(oldp+1354,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
    bufp->fullIData(oldp+1355,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
    bufp->fullCData(oldp+1356,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_len),4);
    bufp->fullBit(oldp+1357,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
    bufp->fullBit(oldp+1358,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush_l));
    bufp->fullBit(oldp+1359,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake));
    bufp->fullQData(oldp+1360,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[0]),64);
    bufp->fullQData(oldp+1362,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[1]),64);
    bufp->fullQData(oldp+1364,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[2]),64);
    bufp->fullQData(oldp+1366,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[3]),64);
    bufp->fullQData(oldp+1368,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[4]),64);
    bufp->fullQData(oldp+1370,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[5]),64);
    bufp->fullQData(oldp+1372,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[6]),64);
    bufp->fullQData(oldp+1374,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[7]),64);
    bufp->fullQData(oldp+1376,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[8]),64);
    bufp->fullQData(oldp+1378,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[9]),64);
    bufp->fullQData(oldp+1380,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[10]),64);
    bufp->fullQData(oldp+1382,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[11]),64);
    bufp->fullQData(oldp+1384,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[12]),64);
    bufp->fullQData(oldp+1386,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[13]),64);
    bufp->fullQData(oldp+1388,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[14]),64);
    bufp->fullQData(oldp+1390,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[15]),64);
    bufp->fullCData(oldp+1392,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
    bufp->fullCData(oldp+1393,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
    bufp->fullCData(oldp+1394,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
    bufp->fullCData(oldp+1395,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
    bufp->fullCData(oldp+1396,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
    bufp->fullCData(oldp+1397,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
    bufp->fullCData(oldp+1398,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
    bufp->fullCData(oldp+1399,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
    bufp->fullCData(oldp+1400,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
    bufp->fullCData(oldp+1401,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
    bufp->fullCData(oldp+1402,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
    bufp->fullCData(oldp+1403,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
    bufp->fullCData(oldp+1404,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
    bufp->fullCData(oldp+1405,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
    bufp->fullCData(oldp+1406,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
    bufp->fullCData(oldp+1407,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
    bufp->fullCData(oldp+1408,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr),4);
    bufp->fullCData(oldp+1409,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_ptr),4);
    bufp->fullIData(oldp+1410,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1411,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+1412,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+1413,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
    bufp->fullIData(oldp+1414,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+1415,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__full));
    bufp->fullBit(oldp+1416,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__full));
    bufp->fullIData(oldp+1417,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+1418,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
    bufp->fullSData(oldp+1419,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    bufp->fullBit(oldp+1420,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+1421,(vlSymsp->TOP__ether_simulation.seq_num_svr),32);
    bufp->fullIData(oldp+1422,(vlSymsp->TOP__ether_simulation.rcv_next_svr),32);
    bufp->fullIData(oldp+1423,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1424,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num),32);
    bufp->fullBit(oldp+1425,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__handshake_done_int));
    bufp->fullIData(oldp+1426,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+1427,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__out_order_req_int));
    bufp->fullBit(oldp+1428,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake_done));
    bufp->fullIData(oldp+1429,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1430,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__handshake_done));
    bufp->fullIData(oldp+1431,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1432,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__out_order_req));
    bufp->fullIData(oldp+1433,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1434,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num),32);
    bufp->fullBit(oldp+1435,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__clear_timeout));
    bufp->fullBit(oldp+1436,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1437,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__hand_shake_done));
    bufp->fullBit(oldp+1438,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req));
    bufp->fullBit(oldp+1439,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
    bufp->fullIData(oldp+1440,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
    bufp->fullIData(oldp+1441,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
    bufp->fullIData(oldp+1442,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
    bufp->fullBit(oldp+1443,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_order_req));
    bufp->fullBit(oldp+1444,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1445,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
    bufp->fullCData(oldp+1446,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__state),7);
    bufp->fullCData(oldp+1447,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+1448,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+1449,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
    bufp->fullIData(oldp+1450,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+1451,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size),16);
    bufp->fullBit(oldp+1452,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [0U], 0x60U))));
    bufp->fullIData(oldp+1453,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1454,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1455,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1456,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1457,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [1U], 0x60U))));
    bufp->fullIData(oldp+1458,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1459,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1460,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1461,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1462,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [2U], 0x60U))));
    bufp->fullIData(oldp+1463,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1464,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1465,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1466,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1467,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [3U], 0x60U))));
    bufp->fullIData(oldp+1468,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1469,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1470,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1471,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1472,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [4U], 0x60U))));
    bufp->fullIData(oldp+1473,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1474,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1475,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1476,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1477,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [5U], 0x60U))));
    bufp->fullIData(oldp+1478,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1479,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1480,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1481,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1482,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [6U], 0x60U))));
    bufp->fullIData(oldp+1483,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1484,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1485,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1486,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1487,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [7U], 0x60U))));
    bufp->fullIData(oldp+1488,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1489,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1490,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1491,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1492,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [8U], 0x60U))));
    bufp->fullIData(oldp+1493,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1494,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1495,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1496,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1497,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [9U], 0x60U))));
    bufp->fullIData(oldp+1498,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1499,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1500,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1501,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+1502,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1503,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
    bufp->fullIData(oldp+1504,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
    bufp->fullCData(oldp+1505,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
    bufp->fullCData(oldp+1506,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
    bufp->fullSData(oldp+1507,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
    bufp->fullSData(oldp+1508,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
    bufp->fullBit(oldp+1509,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_mask));
    bufp->fullBit(oldp+1510,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_found));
    bufp->fullCData(oldp+1511,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+1512,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
    bufp->fullSData(oldp+1513,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
    bufp->fullIData(oldp+1514,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
    bufp->fullIData(oldp+1515,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
    bufp->fullCData(oldp+1516,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+1517,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+1518,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+1519,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+1520,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+1521,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+1522,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+1523,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+1524,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+1525,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
    bufp->fullBit(oldp+1526,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__pass_close));
    bufp->fullIData(oldp+1527,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+1528,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullBit(oldp+1529,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__clear));
    bufp->fullBit(oldp+1530,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_enable));
    bufp->fullSData(oldp+1531,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__din),10);
    bufp->fullBit(oldp+1532,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__valid));
    bufp->fullCData(oldp+1533,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
    bufp->fullIData(oldp+1534,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+1535,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
    bufp->fullBit(oldp+1536,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__valid));
    bufp->fullCData(oldp+1537,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
    bufp->fullIData(oldp+1538,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1539,(vlSymsp->TOP__ether_simulation.seq_num_clt),32);
    bufp->fullIData(oldp+1540,(vlSymsp->TOP__ether_simulation.rcv_next_clt),32);
    bufp->fullIData(oldp+1541,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1542,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num),32);
    bufp->fullBit(oldp+1543,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__handshake_done_int));
    bufp->fullIData(oldp+1544,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+1545,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__out_order_req_int));
    bufp->fullBit(oldp+1546,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake_done));
    bufp->fullIData(oldp+1547,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1548,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__hand_shake_done));
    bufp->fullBit(oldp+1549,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req));
    bufp->fullBit(oldp+1550,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__handshake_done));
    bufp->fullIData(oldp+1551,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1552,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order_req));
    bufp->fullIData(oldp+1553,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1554,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num),32);
    bufp->fullBit(oldp+1555,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__clear_timeout));
    bufp->fullBit(oldp+1556,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1557,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
    bufp->fullIData(oldp+1558,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
    bufp->fullIData(oldp+1559,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
    bufp->fullIData(oldp+1560,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
    bufp->fullBit(oldp+1561,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order_req));
    bufp->fullBit(oldp+1562,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1563,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
    bufp->fullCData(oldp+1564,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__state),7);
    bufp->fullCData(oldp+1565,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+1566,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+1567,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
    bufp->fullIData(oldp+1568,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+1569,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size),16);
    bufp->fullBit(oldp+1570,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [0U], 0x60U))));
    bufp->fullIData(oldp+1571,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1572,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1573,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1574,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1575,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [1U], 0x60U))));
    bufp->fullIData(oldp+1576,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1577,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1578,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1579,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1580,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [2U], 0x60U))));
    bufp->fullIData(oldp+1581,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1582,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1583,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1584,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1585,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [3U], 0x60U))));
    bufp->fullIData(oldp+1586,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1587,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1588,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1589,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1590,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [4U], 0x60U))));
    bufp->fullIData(oldp+1591,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1592,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1593,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1594,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1595,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [5U], 0x60U))));
    bufp->fullIData(oldp+1596,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1597,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1598,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1599,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1600,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [6U], 0x60U))));
    bufp->fullIData(oldp+1601,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1602,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1603,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1604,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1605,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [7U], 0x60U))));
    bufp->fullIData(oldp+1606,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1607,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1608,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1609,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1610,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [8U], 0x60U))));
    bufp->fullIData(oldp+1611,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1612,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1613,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1614,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1615,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [9U], 0x60U))));
    bufp->fullIData(oldp+1616,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1617,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1618,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1619,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+1620,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1621,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
    bufp->fullIData(oldp+1622,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
    bufp->fullCData(oldp+1623,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
    bufp->fullCData(oldp+1624,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
    bufp->fullSData(oldp+1625,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
    bufp->fullSData(oldp+1626,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
    bufp->fullBit(oldp+1627,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_mask));
    bufp->fullBit(oldp+1628,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_found));
    bufp->fullCData(oldp+1629,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+1630,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
    bufp->fullSData(oldp+1631,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
    bufp->fullIData(oldp+1632,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
    bufp->fullIData(oldp+1633,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
    bufp->fullCData(oldp+1634,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+1635,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+1636,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+1637,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+1638,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+1639,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+1640,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+1641,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+1642,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+1643,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
    bufp->fullBit(oldp+1644,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__pass_close));
    bufp->fullIData(oldp+1645,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+1646,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullBit(oldp+1647,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__clear));
    bufp->fullBit(oldp+1648,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_enable));
    bufp->fullSData(oldp+1649,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__din),10);
    bufp->fullBit(oldp+1650,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__valid));
    bufp->fullCData(oldp+1651,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
    bufp->fullIData(oldp+1652,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+1653,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
    bufp->fullBit(oldp+1654,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__valid));
    bufp->fullCData(oldp+1655,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
    bufp->fullIData(oldp+1656,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1657,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1658,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1659,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_reg),32);
    bufp->fullIData(oldp+1660,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1661,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1662,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_reg),32);
    bufp->fullSData(oldp+1663,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_pl),16);
    bufp->fullSData(oldp+1664,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
    bufp->fullIData(oldp+1665,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    bufp->fullSData(oldp+1666,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_pl),16);
    bufp->fullSData(oldp+1667,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
    bufp->fullIData(oldp+1668,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+1669,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1670,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1671,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_reg),32);
    bufp->fullIData(oldp+1672,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1673,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1674,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_reg),32);
    bufp->fullSData(oldp+1675,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_checksum_out),16);
    bufp->fullSData(oldp+1676,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
    bufp->fullIData(oldp+1677,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+1678,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    bufp->fullSData(oldp+1679,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_checksum_out),16);
    bufp->fullSData(oldp+1680,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
    bufp->fullIData(oldp+1681,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+1682,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    bufp->fullBit(oldp+1683,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timewait_flag));
    bufp->fullSData(oldp+1684,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__count_out),9);
    bufp->fullBit(oldp+1685,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__rollover_flag));
    bufp->fullBit(oldp+1686,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timewait_flag));
    bufp->fullSData(oldp+1687,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__count_out),9);
    bufp->fullBit(oldp+1688,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__rollover_flag));
    bufp->fullBit(oldp+1689,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__timeout_flag));
    bufp->fullBit(oldp+1690,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
    bufp->fullIData(oldp+1691,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_out),32);
    bufp->fullBit(oldp+1692,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    bufp->fullBit(oldp+1693,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__timeout_flag));
    bufp->fullBit(oldp+1694,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
    bufp->fullIData(oldp+1695,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_out),32);
    bufp->fullBit(oldp+1696,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    bufp->fullQData(oldp+1697,(vlSymsp->TOP__ether_simulation.xgmii_txd_svr),64);
    bufp->fullCData(oldp+1699,(vlSymsp->TOP__ether_simulation.xgmii_txc_svr),8);
    bufp->fullQData(oldp+1700,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_clt_cvrt),64);
    bufp->fullCData(oldp+1702,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_clt_cvrt),8);
    bufp->fullQData(oldp+1703,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1705,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1706,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_send));
    bufp->fullQData(oldp+1707,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1709,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1710,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1711,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd_l),64);
    bufp->fullCData(oldp+1713,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc_l),8);
    bufp->fullCData(oldp+1714,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__state),7);
    bufp->fullBit(oldp+1715,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_last_dl));
    bufp->fullSData(oldp+1716,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__len_counter),16);
    bufp->fullBit(oldp+1717,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1718,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+1720,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxc),8);
    bufp->fullQData(oldp+1721,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxd),64);
    bufp->fullCData(oldp+1723,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxc),8);
    bufp->fullQData(oldp+1724,(vlSymsp->TOP__ether_simulation.xgmii_txd_clt),64);
    bufp->fullCData(oldp+1726,(vlSymsp->TOP__ether_simulation.xgmii_txc_clt),8);
    bufp->fullQData(oldp+1727,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_svr_cvrt),64);
    bufp->fullCData(oldp+1729,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_svr_cvrt),8);
    bufp->fullQData(oldp+1730,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1732,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1733,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_send));
    bufp->fullQData(oldp+1734,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1736,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1737,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1738,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd_l),64);
    bufp->fullCData(oldp+1740,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc_l),8);
    bufp->fullCData(oldp+1741,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__state),7);
    bufp->fullBit(oldp+1742,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_last_dl));
    bufp->fullSData(oldp+1743,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__len_counter),16);
    bufp->fullBit(oldp+1744,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1745,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+1747,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxc),8);
    bufp->fullQData(oldp+1748,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxd),64);
    bufp->fullCData(oldp+1750,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxc),8);
    bufp->fullBit(oldp+1751,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_tx_last));
    bufp->fullQData(oldp+1752,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1754,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__tt_len_data),16);
    bufp->fullQData(oldp+1755,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1757,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1758,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_last));
    bufp->fullQData(oldp+1759,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1761,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1762,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_last));
    bufp->fullCData(oldp+1763,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_state),3);
    bufp->fullIData(oldp+1764,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    bufp->fullBit(oldp+1765,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_tx_last));
    bufp->fullQData(oldp+1766,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1768,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__tt_len_data),16);
    bufp->fullQData(oldp+1769,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1771,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1772,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_last));
    bufp->fullQData(oldp+1773,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1775,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1776,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_last));
    bufp->fullCData(oldp+1777,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_state),3);
    bufp->fullIData(oldp+1778,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    bufp->fullBit(oldp+1779,(vlSymsp->TOP__ether_simulation.__PVT__wr_FIFO_valid_svr));
    bufp->fullBit(oldp+1780,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_valid));
    bufp->fullQData(oldp+1781,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+1783,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_valid_int));
    bufp->fullBit(oldp+1784,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_last_int));
    bufp->fullSData(oldp+1785,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent_int),16);
    bufp->fullBit(oldp+1786,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__re_trans_int));
    bufp->fullBit(oldp+1787,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+1788,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1789,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1791,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent),16);
    bufp->fullQData(oldp+1792,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_payload),64);
    bufp->fullBit(oldp+1794,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+1795,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_last));
    bufp->fullSData(oldp+1796,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1797,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__re_trans));
    bufp->fullBit(oldp+1798,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+1799,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1800,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1802,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1803,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
    bufp->fullBit(oldp+1804,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__re_trans));
    bufp->fullSData(oldp+1805,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
    bufp->fullCData(oldp+1806,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_str),4);
    bufp->fullCData(oldp+1807,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_end),4);
    bufp->fullCData(oldp+1808,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__flush_ptr),4);
    bufp->fullSData(oldp+1809,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+1810,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
    bufp->fullCData(oldp+1811,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_state),2);
    bufp->fullCData(oldp+1812,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_state),2);
    bufp->fullBit(oldp+1813,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
    bufp->fullIData(oldp+1814,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+1815,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+1816,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+1817,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+1818,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+1819,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
    bufp->fullIData(oldp+1820,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+1821,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+1822,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+1823,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+1824,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+1825,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
    bufp->fullIData(oldp+1826,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+1827,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+1828,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+1829,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+1830,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+1831,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
    bufp->fullIData(oldp+1832,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+1833,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+1834,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+1835,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+1836,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+1837,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
    bufp->fullIData(oldp+1838,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+1839,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+1840,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+1841,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+1842,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+1843,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
    bufp->fullIData(oldp+1844,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+1845,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+1846,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+1847,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+1848,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+1849,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
    bufp->fullIData(oldp+1850,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+1851,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+1852,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+1853,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+1854,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+1855,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
    bufp->fullIData(oldp+1856,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+1857,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+1858,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+1859,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+1860,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+1861,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
    bufp->fullIData(oldp+1862,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+1863,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+1864,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+1865,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+1866,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+1867,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
    bufp->fullIData(oldp+1868,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+1869,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+1870,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+1871,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+1872,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+1873,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
    bufp->fullIData(oldp+1874,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+1875,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+1876,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+1877,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+1878,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+1879,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
    bufp->fullIData(oldp+1880,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+1881,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+1882,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+1883,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+1884,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+1885,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
    bufp->fullIData(oldp+1886,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+1887,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+1888,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+1889,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+1890,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+1891,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
    bufp->fullIData(oldp+1892,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+1893,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+1894,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+1895,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+1896,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+1897,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
    bufp->fullIData(oldp+1898,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+1899,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+1900,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+1901,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+1902,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+1903,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
    bufp->fullIData(oldp+1904,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+1905,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+1906,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+1907,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+1908,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+1909,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__full));
    bufp->fullBit(oldp+1910,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__empty));
    bufp->fullCData(oldp+1911,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+1912,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
    bufp->fullCData(oldp+1913,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_ptr),4);
    bufp->fullCData(oldp+1914,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wrt_ptr),4);
    bufp->fullQData(oldp+1915,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+1917,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+1919,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+1921,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+1923,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+1925,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+1927,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+1929,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+1931,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+1933,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+1935,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+1937,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+1939,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+1941,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+1943,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+1945,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+1947,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req_l));
    bufp->fullBit(oldp+1948,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+1949,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num_l),32);
    bufp->fullBit(oldp+1950,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_upd));
    bufp->fullSData(oldp+1951,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+1952,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_l),16);
    bufp->fullBit(oldp+1953,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__re_trans));
    bufp->fullBit(oldp+1954,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+1955,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1956,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullIData(oldp+1958,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    bufp->fullBit(oldp+1959,(vlSymsp->TOP__ether_simulation.wr_FIFO_valid_clt));
    bufp->fullBit(oldp+1960,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_valid));
    bufp->fullQData(oldp+1961,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+1963,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_valid_int));
    bufp->fullBit(oldp+1964,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_last_int));
    bufp->fullSData(oldp+1965,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent_int),16);
    bufp->fullBit(oldp+1966,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__re_trans_int));
    bufp->fullBit(oldp+1967,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+1968,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1969,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1971,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1972,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+1973,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1974,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1976,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1977,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
    bufp->fullBit(oldp+1978,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__re_trans));
    bufp->fullSData(oldp+1979,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
    bufp->fullCData(oldp+1980,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_str),4);
    bufp->fullCData(oldp+1981,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_end),4);
    bufp->fullCData(oldp+1982,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__flush_ptr),4);
    bufp->fullSData(oldp+1983,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+1984,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
    bufp->fullCData(oldp+1985,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_state),2);
    bufp->fullCData(oldp+1986,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_state),2);
    bufp->fullBit(oldp+1987,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
    bufp->fullIData(oldp+1988,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+1989,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+1990,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+1991,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+1992,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+1993,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
    bufp->fullIData(oldp+1994,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+1995,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+1996,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+1997,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+1998,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+1999,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
    bufp->fullIData(oldp+2000,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+2001,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+2002,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+2003,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+2004,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+2005,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
    bufp->fullIData(oldp+2006,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+2007,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+2008,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+2009,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+2010,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+2011,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
    bufp->fullIData(oldp+2012,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+2013,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+2014,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+2015,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+2016,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+2017,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
    bufp->fullIData(oldp+2018,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+2019,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+2020,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+2021,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+2022,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+2023,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
    bufp->fullIData(oldp+2024,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+2025,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+2026,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+2027,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+2028,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+2029,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
    bufp->fullIData(oldp+2030,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+2031,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+2032,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+2033,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+2034,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+2035,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
    bufp->fullIData(oldp+2036,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+2037,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+2038,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+2039,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+2040,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+2041,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
    bufp->fullIData(oldp+2042,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+2043,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+2044,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+2045,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+2046,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+2047,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
    bufp->fullIData(oldp+2048,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+2049,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+2050,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+2051,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+2052,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+2053,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
    bufp->fullIData(oldp+2054,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+2055,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+2056,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+2057,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+2058,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+2059,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
    bufp->fullIData(oldp+2060,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+2061,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+2062,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+2063,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+2064,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+2065,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
    bufp->fullIData(oldp+2066,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+2067,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+2068,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+2069,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+2070,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+2071,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
    bufp->fullIData(oldp+2072,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+2073,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+2074,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+2075,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+2076,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+2077,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
    bufp->fullIData(oldp+2078,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+2079,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+2080,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+2081,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+2082,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+2083,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__full));
    bufp->fullBit(oldp+2084,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__empty));
    bufp->fullCData(oldp+2085,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+2086,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
    bufp->fullCData(oldp+2087,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_ptr),4);
    bufp->fullCData(oldp+2088,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wrt_ptr),4);
    bufp->fullQData(oldp+2089,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+2091,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+2093,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+2095,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+2097,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+2099,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+2101,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+2103,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+2105,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+2107,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+2109,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+2111,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+2113,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+2115,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+2117,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+2119,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+2121,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req_l));
    bufp->fullBit(oldp+2122,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+2123,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num_l),32);
    bufp->fullBit(oldp+2124,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_upd));
    bufp->fullSData(oldp+2125,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+2126,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_l),16);
    bufp->fullQData(oldp+2127,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_payload),64);
    bufp->fullBit(oldp+2129,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+2130,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_last));
    bufp->fullSData(oldp+2131,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+2132,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__re_trans));
    bufp->fullBit(oldp+2133,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__re_trans));
    bufp->fullBit(oldp+2134,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+2135,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+2136,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullIData(oldp+2138,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    bufp->fullQData(oldp+2139,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+2141,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_valid));
    bufp->fullCData(oldp+2142,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_rcv_len),8);
    bufp->fullBit(oldp+2143,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_valid));
    bufp->fullQData(oldp+2144,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+2146,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv_len),8);
    bufp->fullQData(oldp+2147,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+2149,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_valid));
    bufp->fullCData(oldp+2150,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_len),8);
    bufp->fullSData(oldp+2151,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+2152,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_found));
    bufp->fullBit(oldp+2153,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_valid));
    bufp->fullCData(oldp+2154,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_lane),3);
    bufp->fullSData(oldp+2155,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_rxc),16);
    bufp->fullIData(oldp+2156,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_check),32);
    bufp->fullWData(oldp+2157,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_store),128);
    bufp->fullIData(oldp+2161,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame),32);
    bufp->fullIData(oldp+2162,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__rg),32);
    bufp->fullQData(oldp+2163,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+2165,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_delay));
    bufp->fullBit(oldp+2166,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__soft_dl));
    bufp->fullQData(oldp+2167,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+2169,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv),8);
    bufp->fullCData(oldp+2170,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+2171,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__state),6);
    bufp->fullQData(oldp+2172,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+2174,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+2176,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+2178,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+2180,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__valid));
    bufp->fullQData(oldp+2181,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+2183,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_valid));
    bufp->fullCData(oldp+2184,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_rcv_len),8);
    bufp->fullBit(oldp+2185,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_valid));
    bufp->fullQData(oldp+2186,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+2188,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv_len),8);
    bufp->fullQData(oldp+2189,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+2191,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_valid));
    bufp->fullCData(oldp+2192,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_len),8);
    bufp->fullSData(oldp+2193,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+2194,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_found));
    bufp->fullBit(oldp+2195,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_valid));
    bufp->fullCData(oldp+2196,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_lane),3);
    bufp->fullSData(oldp+2197,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_rxc),16);
    bufp->fullIData(oldp+2198,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_check),32);
    bufp->fullWData(oldp+2199,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_store),128);
    bufp->fullIData(oldp+2203,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame),32);
    bufp->fullIData(oldp+2204,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__rg),32);
    bufp->fullQData(oldp+2205,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+2207,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_delay));
    bufp->fullBit(oldp+2208,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__soft_dl));
    bufp->fullQData(oldp+2209,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+2211,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv),8);
    bufp->fullCData(oldp+2212,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+2213,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__state),6);
    bufp->fullQData(oldp+2214,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+2216,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+2218,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+2220,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+2222,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__valid));
    bufp->fullBit(oldp+2223,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+2224,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+2225,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+2227,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_last));
    bufp->fullSData(oldp+2228,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__len_data),16);
    bufp->fullQData(oldp+2229,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_transmit),64);
    bufp->fullBit(oldp+2231,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+2232,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+2233,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+2235,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_up));
    bufp->fullIData(oldp+2236,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+2237,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_up));
    bufp->fullIData(oldp+2238,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+2239,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
    bufp->fullBit(oldp+2240,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+2241,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+2242,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
    bufp->fullIData(oldp+2244,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+2245,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__state),7);
    bufp->fullQData(oldp+2246,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
    bufp->fullBit(oldp+2248,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_up));
    bufp->fullIData(oldp+2249,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+2250,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+2251,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+2252,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+2254,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_last));
    bufp->fullSData(oldp+2255,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__len_data),16);
    bufp->fullQData(oldp+2256,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_transmit),64);
    bufp->fullBit(oldp+2258,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+2259,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+2260,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+2262,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_up));
    bufp->fullIData(oldp+2263,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+2264,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_up));
    bufp->fullIData(oldp+2265,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+2266,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
    bufp->fullBit(oldp+2267,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+2268,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+2269,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
    bufp->fullIData(oldp+2271,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+2272,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__state),7);
    bufp->fullQData(oldp+2273,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
    bufp->fullBit(oldp+2275,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_up));
    bufp->fullIData(oldp+2276,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+2277,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_valid));
    bufp->fullBit(oldp+2278,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_rx_last));
    bufp->fullSData(oldp+2279,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+2280,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_payload),64);
    bufp->fullCData(oldp+2282,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_bytes_rcv_len),8);
    bufp->fullBit(oldp+2283,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__protocol_data_flag));
    bufp->fullBit(oldp+2284,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_valid));
    bufp->fullBit(oldp+2285,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_last));
    bufp->fullQData(oldp+2286,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_payload),64);
    bufp->fullCData(oldp+2288,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
    bufp->fullSData(oldp+2289,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+2290,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__protocol_data_flag));
    bufp->fullBit(oldp+2291,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_udp));
    bufp->fullBit(oldp+2292,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_tcp));
    bufp->fullCData(oldp+2293,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__state),4);
    bufp->fullSData(oldp+2294,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_checksum),16);
    bufp->fullSData(oldp+2295,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv),16);
    bufp->fullSData(oldp+2296,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__dst_addr),16);
    bufp->fullSData(oldp+2297,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_len),16);
    bufp->fullBit(oldp+2298,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_valid));
    bufp->fullBit(oldp+2299,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_data_flag));
    bufp->fullSData(oldp+2300,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+2301,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_payload),64);
    bufp->fullBit(oldp+2303,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_last));
    bufp->fullCData(oldp+2304,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_bytes_rcv),8);
    bufp->fullQData(oldp+2305,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
    bufp->fullBit(oldp+2307,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_last));
    bufp->fullBit(oldp+2308,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
    bufp->fullCData(oldp+2309,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
    bufp->fullSData(oldp+2310,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+2311,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_data_flag));
    bufp->fullBit(oldp+2312,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_valid));
    bufp->fullBit(oldp+2313,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_rx_last));
    bufp->fullSData(oldp+2314,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+2315,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_payload),64);
    bufp->fullCData(oldp+2317,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_bytes_rcv_len),8);
    bufp->fullBit(oldp+2318,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__protocol_data_flag));
    bufp->fullBit(oldp+2319,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_valid));
    bufp->fullBit(oldp+2320,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_last));
    bufp->fullQData(oldp+2321,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_payload),64);
    bufp->fullCData(oldp+2323,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
    bufp->fullSData(oldp+2324,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+2325,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__protocol_data_flag));
    bufp->fullBit(oldp+2326,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_udp));
    bufp->fullBit(oldp+2327,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_tcp));
    bufp->fullCData(oldp+2328,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__state),4);
    bufp->fullSData(oldp+2329,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_checksum),16);
    bufp->fullSData(oldp+2330,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv),16);
    bufp->fullSData(oldp+2331,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__dst_addr),16);
    bufp->fullSData(oldp+2332,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_len),16);
    bufp->fullBit(oldp+2333,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_valid));
    bufp->fullBit(oldp+2334,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_data_flag));
    bufp->fullSData(oldp+2335,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+2336,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_payload),64);
    bufp->fullBit(oldp+2338,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_last));
    bufp->fullCData(oldp+2339,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_bytes_rcv),8);
    bufp->fullQData(oldp+2340,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
    bufp->fullBit(oldp+2342,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_last));
    bufp->fullBit(oldp+2343,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
    bufp->fullCData(oldp+2344,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
    bufp->fullSData(oldp+2345,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+2346,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_data_flag));
    bufp->fullBit(oldp+2347,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nw_segment));
    bufp->fullBit(oldp+2348,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+2349,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_data_rx_int),64);
    bufp->fullIData(oldp+2351,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_num_int),32);
    bufp->fullBit(oldp+2352,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+2353,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nw_segment));
    bufp->fullBit(oldp+2354,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_t_last));
    bufp->fullQData(oldp+2355,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_data_rx),64);
    bufp->fullBit(oldp+2357,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nw_segment));
    bufp->fullBit(oldp+2358,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+2359,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+2361,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2362,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2363,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_data));
    bufp->fullCData(oldp+2364,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_rx),8);
    bufp->fullCData(oldp+2365,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_rcv),8);
    bufp->fullIData(oldp+2366,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2367,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2368,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2369,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2370,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2371,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+2372,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid));
    bufp->fullIData(oldp+2373,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2374,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2375,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
    bufp->fullCData(oldp+2376,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+2377,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2378,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2379,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2380,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2381,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2382,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
    bufp->fullCData(oldp+2383,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
    bufp->fullQData(oldp+2384,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
    bufp->fullBit(oldp+2386,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
    bufp->fullBit(oldp+2387,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
    bufp->fullBit(oldp+2388,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
    bufp->fullIData(oldp+2389,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+2390,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__state),3);
    bufp->fullBit(oldp+2391,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_data));
    bufp->fullCData(oldp+2392,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+2393,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2394,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2395,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2396,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2397,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2398,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+2399,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_last));
    bufp->fullCData(oldp+2400,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    bufp->fullBit(oldp+2401,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nw_segment));
    bufp->fullIData(oldp+2402,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2403,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2404,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
    bufp->fullBit(oldp+2405,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
    bufp->fullBit(oldp+2406,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
    bufp->fullBit(oldp+2407,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
    bufp->fullBit(oldp+2408,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
    bufp->fullBit(oldp+2409,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
    bufp->fullBit(oldp+2410,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
    bufp->fullBit(oldp+2411,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    bufp->fullBit(oldp+2412,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nw_segment));
    bufp->fullBit(oldp+2413,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+2414,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_data_rx_int),64);
    bufp->fullIData(oldp+2416,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_num_int),32);
    bufp->fullBit(oldp+2417,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+2418,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nw_segment));
    bufp->fullBit(oldp+2419,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_t_last));
    bufp->fullQData(oldp+2420,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+2422,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2423,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2424,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nw_segment));
    bufp->fullBit(oldp+2425,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+2426,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+2428,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2429,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2430,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_data));
    bufp->fullCData(oldp+2431,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_rx),8);
    bufp->fullCData(oldp+2432,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_rcv),8);
    bufp->fullIData(oldp+2433,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2434,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2435,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2436,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2437,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2438,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+2439,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+2440,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
    bufp->fullCData(oldp+2441,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+2442,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2443,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2444,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2445,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2446,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2447,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
    bufp->fullCData(oldp+2448,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
    bufp->fullQData(oldp+2449,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
    bufp->fullBit(oldp+2451,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
    bufp->fullBit(oldp+2452,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
    bufp->fullBit(oldp+2453,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
    bufp->fullIData(oldp+2454,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+2455,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__state),3);
    bufp->fullBit(oldp+2456,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_data));
    bufp->fullCData(oldp+2457,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+2458,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2459,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2460,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2461,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2462,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2463,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+2464,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_last));
    bufp->fullCData(oldp+2465,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    bufp->fullBit(oldp+2466,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nw_segment));
    bufp->fullIData(oldp+2467,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2468,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2469,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
    bufp->fullBit(oldp+2470,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
    bufp->fullBit(oldp+2471,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
    bufp->fullBit(oldp+2472,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
    bufp->fullBit(oldp+2473,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
    bufp->fullBit(oldp+2474,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
    bufp->fullBit(oldp+2475,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
    bufp->fullBit(oldp+2476,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    bufp->fullSData(oldp+2477,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2478,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2479,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->fullSData(oldp+2480,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2481,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->fullSData(oldp+2482,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2483,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2484,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2485,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->fullSData(oldp+2486,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->fullBit(oldp+2487,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_send));
    bufp->fullBit(oldp+2488,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_send));
    bufp->fullCData(oldp+2489,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_state),3);
    bufp->fullQData(oldp+2490,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_transmit_l),64);
    bufp->fullBit(oldp+2492,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chk_sum_valid));
    bufp->fullIData(oldp+2493,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__temp),20);
    bufp->fullIData(oldp+2494,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
    bufp->fullSData(oldp+2495,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__ntt_len_data),16);
    bufp->fullSData(oldp+2496,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chksum_rslt),16);
    bufp->fullBit(oldp+2497,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_send));
    bufp->fullBit(oldp+2498,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    bufp->fullBit(oldp+2499,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_send));
    bufp->fullBit(oldp+2500,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_send));
    bufp->fullCData(oldp+2501,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_state),3);
    bufp->fullQData(oldp+2502,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_transmit_l),64);
    bufp->fullBit(oldp+2504,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chk_sum_valid));
    bufp->fullIData(oldp+2505,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__temp),20);
    bufp->fullIData(oldp+2506,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
    bufp->fullSData(oldp+2507,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__ntt_len_data),16);
    bufp->fullSData(oldp+2508,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chksum_rslt),16);
    bufp->fullBit(oldp+2509,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_send));
    bufp->fullBit(oldp+2510,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    bufp->fullBit(oldp+2511,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_flush));
    bufp->fullBit(oldp+2512,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_flush));
    bufp->fullCData(oldp+2513,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nstate),4);
    bufp->fullSData(oldp+2514,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_checksum),16);
    bufp->fullQData(oldp+2515,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_payload),64);
    bufp->fullSData(oldp+2517,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nbytes_rcv),16);
    bufp->fullBit(oldp+2518,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_en));
    bufp->fullBit(oldp+2519,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_clear));
    bufp->fullQData(oldp+2520,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_in),64);
    bufp->fullIData(oldp+2522,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_final),17);
    bufp->fullSData(oldp+2523,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ndst_addr),16);
    bufp->fullSData(oldp+2524,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_len),16);
    bufp->fullCData(oldp+2525,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
    bufp->fullSData(oldp+2526,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_pseuder),16);
    bufp->fullIData(oldp+2527,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__temp),20);
    bufp->fullBit(oldp+2528,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_valid));
    bufp->fullBit(oldp+2529,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_last));
    bufp->fullBit(oldp+2530,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_udp));
    bufp->fullBit(oldp+2531,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_tcp));
    bufp->fullBit(oldp+2532,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nprotocol_data_flag));
    bufp->fullSData(oldp+2533,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__total_len),16);
    bufp->fullSData(oldp+2534,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__frags_flag),16);
    bufp->fullCData(oldp+2535,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ttl),8);
    bufp->fullCData(oldp+2536,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__flags),3);
    bufp->fullSData(oldp+2537,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__fragoff),13);
    bufp->fullCData(oldp+2538,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__test_valid),4);
    bufp->fullCData(oldp+2539,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ip_version),4);
    bufp->fullBit(oldp+2540,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_src_addr));
    bufp->fullBit(oldp+2541,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_ip_version_valid));
    bufp->fullBit(oldp+2542,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_flush));
    bufp->fullBit(oldp+2543,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
    bufp->fullBit(oldp+2544,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
    bufp->fullBit(oldp+2545,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__clear));
    bufp->fullQData(oldp+2546,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
    bufp->fullIData(oldp+2548,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+2549,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__temp),20);
    bufp->fullBit(oldp+2550,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_flush));
    bufp->fullBit(oldp+2551,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_flush));
    bufp->fullCData(oldp+2552,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nstate),4);
    bufp->fullSData(oldp+2553,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_checksum),16);
    bufp->fullQData(oldp+2554,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_payload),64);
    bufp->fullSData(oldp+2556,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nbytes_rcv),16);
    bufp->fullBit(oldp+2557,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_en));
    bufp->fullBit(oldp+2558,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_clear));
    bufp->fullQData(oldp+2559,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_in),64);
    bufp->fullIData(oldp+2561,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_final),17);
    bufp->fullSData(oldp+2562,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ndst_addr),16);
    bufp->fullSData(oldp+2563,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_len),16);
    bufp->fullCData(oldp+2564,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
    bufp->fullSData(oldp+2565,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_pseuder),16);
    bufp->fullIData(oldp+2566,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__temp),20);
    bufp->fullBit(oldp+2567,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_valid));
    bufp->fullBit(oldp+2568,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_last));
    bufp->fullBit(oldp+2569,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_udp));
    bufp->fullBit(oldp+2570,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_tcp));
    bufp->fullBit(oldp+2571,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nprotocol_data_flag));
    bufp->fullSData(oldp+2572,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__total_len),16);
    bufp->fullSData(oldp+2573,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__frags_flag),16);
    bufp->fullCData(oldp+2574,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ttl),8);
    bufp->fullCData(oldp+2575,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__flags),3);
    bufp->fullSData(oldp+2576,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__fragoff),13);
    bufp->fullCData(oldp+2577,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__test_valid),4);
    bufp->fullCData(oldp+2578,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ip_version),4);
    bufp->fullBit(oldp+2579,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_src_addr));
    bufp->fullBit(oldp+2580,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_ip_version_valid));
    bufp->fullBit(oldp+2581,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_flush));
    bufp->fullBit(oldp+2582,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
    bufp->fullBit(oldp+2583,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
    bufp->fullBit(oldp+2584,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__clear));
    bufp->fullQData(oldp+2585,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
    bufp->fullIData(oldp+2587,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+2588,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__temp),20);
    bufp->fullBit(oldp+2589,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_flush_int));
    bufp->fullBit(oldp+2590,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush));
    bufp->fullBit(oldp+2591,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_flush));
    bufp->fullBit(oldp+2592,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
    bufp->fullCData(oldp+2593,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
    bufp->fullIData(oldp+2594,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
    bufp->fullIData(oldp+2595,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
    bufp->fullCData(oldp+2596,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
    bufp->fullSData(oldp+2597,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
    bufp->fullSData(oldp+2598,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
    bufp->fullSData(oldp+2599,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
    bufp->fullIData(oldp+2600,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
    bufp->fullSData(oldp+2601,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
    bufp->fullQData(oldp+2602,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
    bufp->fullIData(oldp+2604,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__temp),20);
    bufp->fullBit(oldp+2605,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
    bufp->fullBit(oldp+2606,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
    bufp->fullBit(oldp+2607,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
    bufp->fullBit(oldp+2608,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
    bufp->fullCData(oldp+2609,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+2610,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
    bufp->fullBit(oldp+2611,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    bufp->fullBit(oldp+2612,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__debug));
    bufp->fullSData(oldp+2613,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->fullSData(oldp+2614,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
    bufp->fullSData(oldp+2615,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
    bufp->fullCData(oldp+2616,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
    bufp->fullCData(oldp+2617,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
    bufp->fullSData(oldp+2618,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
    bufp->fullBit(oldp+2619,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__valid));
    bufp->fullCData(oldp+2620,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
    bufp->fullIData(oldp+2621,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2622,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
    bufp->fullBit(oldp+2623,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__valid));
    bufp->fullCData(oldp+2624,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
    bufp->fullIData(oldp+2625,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2626,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
    bufp->fullBit(oldp+2627,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__valid));
    bufp->fullCData(oldp+2628,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
    bufp->fullIData(oldp+2629,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+2630,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_flush_int));
    bufp->fullBit(oldp+2631,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush));
    bufp->fullBit(oldp+2632,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_flush));
    bufp->fullBit(oldp+2633,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
    bufp->fullCData(oldp+2634,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
    bufp->fullIData(oldp+2635,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
    bufp->fullIData(oldp+2636,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
    bufp->fullCData(oldp+2637,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
    bufp->fullSData(oldp+2638,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
    bufp->fullSData(oldp+2639,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
    bufp->fullSData(oldp+2640,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
    bufp->fullIData(oldp+2641,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
    bufp->fullSData(oldp+2642,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
    bufp->fullQData(oldp+2643,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
    bufp->fullIData(oldp+2645,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__temp),20);
    bufp->fullBit(oldp+2646,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
    bufp->fullBit(oldp+2647,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
    bufp->fullBit(oldp+2648,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
    bufp->fullBit(oldp+2649,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
    bufp->fullCData(oldp+2650,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+2651,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
    bufp->fullBit(oldp+2652,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    bufp->fullBit(oldp+2653,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__debug));
    bufp->fullSData(oldp+2654,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->fullSData(oldp+2655,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
    bufp->fullSData(oldp+2656,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
    bufp->fullCData(oldp+2657,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
    bufp->fullCData(oldp+2658,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
    bufp->fullSData(oldp+2659,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
    bufp->fullBit(oldp+2660,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__valid));
    bufp->fullCData(oldp+2661,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
    bufp->fullIData(oldp+2662,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2663,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
    bufp->fullBit(oldp+2664,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__valid));
    bufp->fullCData(oldp+2665,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
    bufp->fullIData(oldp+2666,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2667,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
    bufp->fullBit(oldp+2668,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__valid));
    bufp->fullCData(oldp+2669,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
    bufp->fullIData(oldp+2670,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+2671,(vlSelfRef.CLK));
    bufp->fullBit(oldp+2672,(vlSelfRef.nRST));
    bufp->fullCData(oldp+2673,(vlSelfRef.tb_count),8);
    bufp->fullBit(oldp+2674,(vlSelfRef.client_lost));
    bufp->fullBit(oldp+2675,(vlSelfRef.out_order));
    bufp->fullBit(oldp+2676,(vlSelfRef.err_flag));
    bufp->fullBit(oldp+2677,(vlSelfRef.TX_en_svr));
    bufp->fullBit(oldp+2678,(vlSelfRef.end_ss_svr));
    bufp->fullQData(oldp+2679,(vlSelfRef.xgmii_txd_svr),64);
    bufp->fullCData(oldp+2681,(vlSelfRef.xgmii_txc_svr),8);
    bufp->fullBit(oldp+2682,(vlSelfRef.frame_end_svr));
    bufp->fullQData(oldp+2683,(vlSelfRef.xgmii_rxd_svr),64);
    bufp->fullCData(oldp+2685,(vlSelfRef.xgmii_rxc_svr),8);
    bufp->fullBit(oldp+2686,(vlSelfRef.axis_last_svr));
    bufp->fullBit(oldp+2687,(vlSelfRef.wr_FIFO_en_svr));
    bufp->fullIData(oldp+2688,(vlSelfRef.len_seq_svr),32);
    bufp->fullQData(oldp+2689,(vlSelfRef.soupbin_TCP_payload_svr),64);
    bufp->fullBit(oldp+2691,(vlSelfRef.wr_FIFO_validing_svr));
    bufp->fullBit(oldp+2692,(vlSelfRef.axis_r_en_svr));
    bufp->fullBit(oldp+2693,(vlSelfRef.axis_r_valid_svr));
    bufp->fullQData(oldp+2694,(vlSelfRef.axis_rd_data_svr),64);
    bufp->fullBit(oldp+2696,(vlSelfRef.TCP_stop_flag_svr));
    bufp->fullIData(oldp+2697,(vlSelfRef.seq_num_svr),32);
    bufp->fullIData(oldp+2698,(vlSelfRef.rcv_next_svr),32);
    bufp->fullBit(oldp+2699,(vlSelfRef.TX_en_clt));
    bufp->fullBit(oldp+2700,(vlSelfRef.end_ss_clt));
    bufp->fullQData(oldp+2701,(vlSelfRef.xgmii_txd_clt),64);
    bufp->fullCData(oldp+2703,(vlSelfRef.xgmii_txc_clt),8);
    bufp->fullBit(oldp+2704,(vlSelfRef.frame_end_clt));
    bufp->fullQData(oldp+2705,(vlSelfRef.xgmii_rxd_clt),64);
    bufp->fullCData(oldp+2707,(vlSelfRef.xgmii_rxc_clt),8);
    bufp->fullBit(oldp+2708,(vlSelfRef.axis_last_clt));
    bufp->fullBit(oldp+2709,(vlSelfRef.wr_FIFO_en_clt));
    bufp->fullIData(oldp+2710,(vlSelfRef.len_seq_clt),32);
    bufp->fullQData(oldp+2711,(vlSelfRef.soupbin_TCP_payload_clt),64);
    bufp->fullBit(oldp+2713,(vlSelfRef.wr_FIFO_valid_clt));
    bufp->fullBit(oldp+2714,(vlSelfRef.axis_r_en_clt));
    bufp->fullBit(oldp+2715,(vlSelfRef.axis_r_valid_clt));
    bufp->fullQData(oldp+2716,(vlSelfRef.axis_rd_data_clt),64);
    bufp->fullBit(oldp+2718,(vlSelfRef.TCP_stop_flag_clt));
    bufp->fullIData(oldp+2719,(vlSelfRef.seq_num_clt),32);
    bufp->fullIData(oldp+2720,(vlSelfRef.rcv_next_clt),32);
    bufp->fullQData(oldp+2721,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->fullCData(oldp+2723,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->fullQData(oldp+2724,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->fullCData(oldp+2726,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->fullBit(oldp+2727,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__up_send));
    bufp->fullBit(oldp+2728,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__up_send));
    bufp->fullIData(oldp+2729,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->fullIData(oldp+2730,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->fullIData(oldp+2731,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->fullIData(oldp+2732,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->fullIData(oldp+2733,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->fullIData(oldp+2734,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->fullIData(oldp+2735,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->fullIData(oldp+2736,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->fullQData(oldp+2737,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+2739,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->fullQData(oldp+2740,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+2742,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->fullIData(oldp+2743,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->fullBit(oldp+2744,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
    bufp->fullIData(oldp+2745,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->fullBit(oldp+2746,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
}
