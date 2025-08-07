// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vether_simulation__Syms.h"


VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);
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
    tracep->declBit(c+2614,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2615,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2616,0,"tb_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2617,0,"TX_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2618,0,"xgmii_txd_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2620,0,"xgmii_txc_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2621,0,"frame_end_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2622,0,"xgmii_rxd_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2624,0,"xgmii_rxc_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2625,0,"axis_last_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2626,0,"wr_FIFO_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2627,0,"len_seq_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2628,0,"soupbin_TCP_payload_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2630,0,"wr_FIFO_validing_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2631,0,"axis_r_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2632,0,"axis_r_valid_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2633,0,"axis_rd_data_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2635,0,"TCP_stop_flag_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2636,0,"seq_num_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2637,0,"rcv_next_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2638,0,"TX_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2639,0,"xgmii_txd_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2641,0,"xgmii_txc_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2642,0,"frame_end_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2643,0,"xgmii_rxd_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2645,0,"xgmii_rxc_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2646,0,"axis_last_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2647,0,"wr_FIFO_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2648,0,"len_seq_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2649,0,"soupbin_TCP_payload_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2651,0,"wr_FIFO_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2652,0,"axis_r_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2653,0,"axis_r_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2654,0,"axis_rd_data_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2656,0,"TCP_stop_flag_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2657,0,"seq_num_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2658,0,"rcv_next_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->declBus(c+2685,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+39,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"tb_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+42,0,"TX_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1294,0,"xgmii_txd_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1296,0,"xgmii_txc_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+180,0,"frame_end_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+43,0,"xgmii_rxd_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+45,0,"xgmii_rxc_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+46,0,"axis_last_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"wr_FIFO_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"len_seq_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+49,0,"soupbin_TCP_payload_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2688,0,"wr_FIFO_validing_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"axis_r_en_svr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"axis_r_valid_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+749,0,"axis_rd_data_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2390,0,"TCP_stop_flag_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1026,0,"seq_num_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1027,0,"rcv_next_svr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"TX_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1335,0,"xgmii_txd_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1337,0,"xgmii_txc_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+190,0,"frame_end_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+53,0,"xgmii_rxd_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+55,0,"xgmii_rxc_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+56,0,"axis_last_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"wr_FIFO_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"len_seq_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+59,0,"soupbin_TCP_payload_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1584,0,"wr_FIFO_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"axis_r_en_clt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"axis_r_valid_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+888,0,"axis_rd_data_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2498,0,"TCP_stop_flag_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1143,0,"seq_num_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1144,0,"rcv_next_clt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1297,0,"xgmii_rxd_clt_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1338,0,"xgmii_rxd_svr_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1299,0,"xgmii_rxc_clt_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1340,0,"xgmii_rxc_svr_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("cvrt_clt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_clt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cvrt_svr", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_svr__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("svr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1404,0,"wr_FIFO_valid_svr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("clt_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__0(vlSelf, tracep);
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
    tracep->declBus(c+2685,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+62,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1300,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1302,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+181,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1341,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1343,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+68,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1405,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+752,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2391,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1028,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1029,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1303,0,"IP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1376,0,"IP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1377,0,"IP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1379,0,"tt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2194,0,"TCP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2689,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1906,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1907,0,"TCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1908,0,"TCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1764,0,"IP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2109,0,"IP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1765,0,"IP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1766,0,"IP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1767,0,"IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2691,0,"TCP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1769,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1822,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1824,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"CRC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1825,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mac_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1960,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1961,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2218,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1962,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1030,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1031,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2392,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2393,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+754,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+755,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2394,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2395,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2396,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+756,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2360,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1406,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1408,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1409,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1410,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1964,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1965,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2397,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_ss_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1411,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2692,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2259,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2090,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+758,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1412,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1413,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1414,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1416,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("mac_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2693,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_payload_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_fifo_tx__0(vlSelf, tracep);
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
    tracep->declBus(c+2685,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+71,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1345,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1347,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+191,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1304,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1306,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+74,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+77,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1585,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+891,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2499,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1145,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1146,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"IP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1390,0,"IP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1391,0,"IP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1393,0,"tt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2206,0,"TCP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2694,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1933,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1934,0,"TCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1935,0,"TCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1793,0,"IP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2156,0,"IP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1794,0,"IP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1795,0,"IP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1796,0,"IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2695,0,"TCP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1798,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1864,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1866,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"CRC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1867,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mac_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2025,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2026,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2289,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2027,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1147,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1148,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2500,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2501,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+893,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+894,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2502,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2503,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2504,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+895,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2375,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1586,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1588,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1589,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1590,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2029,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2030,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2505,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"end_ss_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1591,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2696,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2330,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2095,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+897,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1592,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1593,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1594,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1596,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("mac_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2697,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_payload_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_fifo_tx__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_payload_fifo__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_payload_fifo__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2686,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2685,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2698,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+80,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1966,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2219,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1967,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1968,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1033,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1034,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2398,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2399,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+759,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+760,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2400,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2401,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2402,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+761,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+762,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+763,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+765,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+767,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+769,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+770,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+772,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+773,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+775,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+776,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+778,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+779,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+781,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+782,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+784,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+785,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+787,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+788,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+790,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+791,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+793,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+794,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+796,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+797,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+799,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+800,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+802,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+803,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+805,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+806,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+808,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+809,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+811,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+812,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+814,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+210,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+212,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+213,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+215,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+216,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+218,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+219,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+221,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+222,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+224,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+225,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+227,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+228,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+230,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+231,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+233,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+234,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+236,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+237,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+239,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+240,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+242,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+243,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+245,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+246,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+248,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+249,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+251,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+252,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+254,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+255,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+257,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+815,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+817,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+818,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+819,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2699,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+820,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+259,0,"nrd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+821,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+822,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+823,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"nhandshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("payload", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+826+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bytes_offset", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+858+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+874,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+265,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+875,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+266,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+876,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_payload_fifo__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_payload_fifo__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2686,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2685,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2698,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+83,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2031,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2290,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2032,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2033,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1150,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1151,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2506,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2507,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+898,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+899,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2508,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2509,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2510,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+900,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+901,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+902,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+904,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+906,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+908,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+909,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+911,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+912,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+914,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+915,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+917,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+918,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+920,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+921,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+923,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+924,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+926,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+927,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+929,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+930,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+932,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+933,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+935,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+936,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+938,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+939,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+941,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+942,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+944,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+945,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+947,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+948,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+950,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+951,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+953,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+267,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+269,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+270,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+272,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+273,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+275,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+276,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+278,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+279,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+281,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+282,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+284,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+285,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+287,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+288,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+290,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+291,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+293,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+294,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+296,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+297,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+299,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+300,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+302,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+303,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+305,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+306,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+308,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+309,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+311,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+312,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+314,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+954,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+956,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+957,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+958,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2700,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+959,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+316,0,"nrd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+960,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+962,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+963,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+964,0,"handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"nhandshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("payload", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+965+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bytes_offset", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+997+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1013,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+322,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1014,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+323,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1015,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBus(c+2701,0,"PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2702,0,"PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+86,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1826,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1827,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+634,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1829,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1770,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2110,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1772,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1774,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1775,0,"IP_pseuder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1776,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1777,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1778,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2111,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1779,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2112,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2113,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1780,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2115,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2116,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2117,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2118,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1266,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2120,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1781,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2121,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1782,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2122,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2123,0,"nIP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2124,0,"nIP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2125,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2126,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2127,0,"nIP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2128,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2129,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+2130,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2131,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2132,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2133,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2134,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+2135,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2136,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2137,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2138,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2701,0,"PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2702,0,"PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+88,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1868,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1869,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+689,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1871,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1799,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2157,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1800,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1801,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1803,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1804,0,"IP_pseuder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1805,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1806,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1807,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2158,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1808,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2159,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2160,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1809,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2162,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2163,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2164,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2165,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1269,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2167,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1810,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2168,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1811,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2169,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2170,0,"nIP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2171,0,"nIP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2172,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2173,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2174,0,"nIP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2175,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2176,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+2177,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2178,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2179,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2180,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2181,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+2182,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2183,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2184,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2185,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2704,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2705,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2707,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2709,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2710,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1349,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1351,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1830,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1832,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1833,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+637,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1352,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1272,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+638,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+640,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1834,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+642,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1353,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2711,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2712,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1835,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1836,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1837,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+644,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+645,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2713,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2715,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+647,0,"xgmii_rxd_f_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2717,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2718,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2719,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1838,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+649,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2100,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1839,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+650,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1840,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+651,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+2101,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+2720,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+2724,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2725,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1354,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1355,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1844,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+655,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1845,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1846,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1848,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+657,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"ncrc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+659,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1849,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"case_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1850,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+662,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1852,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+664,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1853,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+665,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+666,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+1854,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+667,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+668,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+670,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+2726,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+672,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+673,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2704,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2705,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2707,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2709,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2710,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1308,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1310,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1872,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1874,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1875,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+692,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1275,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+693,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+695,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1876,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+697,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1312,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2730,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2731,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1877,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1878,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1879,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+699,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+700,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2732,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2734,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+702,0,"xgmii_rxd_f_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2736,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2737,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2738,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1880,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+704,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2147,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1881,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1882,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+706,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+2148,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+2739,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+2743,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2744,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1313,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1314,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1886,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+710,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1887,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1888,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1890,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"ncrc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+714,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1891,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"case_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1892,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+717,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1894,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+719,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1895,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+720,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+721,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+1896,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+722,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+723,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+725,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+2745,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+727,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2704,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2705,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2707,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2749,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+94,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1315,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1317,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1380,0,"IP_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1382,0,"tt_len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1383,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1318,0,"IP_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1319,0,"xgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2659,0,"nxgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1321,0,"xgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2661,0,"nxgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+183,0,"IP_send_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1322,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+184,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+185,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2750,0,"nvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1260,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1323,0,"len_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+187,0,"nlen_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
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
    tracep->declBus(c+2703,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2704,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2705,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2707,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2749,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+97,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1356,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1358,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1394,0,"IP_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1396,0,"tt_len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1397,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1359,0,"IP_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1360,0,"xgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2662,0,"nxgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1362,0,"xgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2664,0,"nxgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+193,0,"IP_send_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1363,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+194,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+195,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2751,0,"nvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1263,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"len_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+197,0,"nlen_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
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
    tracep->declBus(c+2749,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2703,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2752,0,"TYPE_OF_SERVICE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2753,0,"IPV4_VER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2702,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2754,0,"IP_IDENFICATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2755,0,"IP_FLAG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2756,0,"IP_TLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2701,0,"IP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2702,0,"IP_PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2757,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2758,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"IP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1910,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1911,0,"len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1912,0,"protocol_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"IP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1386,0,"tt_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1387,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2195,0,"protocol_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"IP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2196,0,"nxIP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+2197,0,"nxIP_transmit_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2199,0,"chk_sum_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2200,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1389,0,"IPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2201,0,"nIPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2202,0,"ntt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2203,0,"chksum_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2749,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2703,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2752,0,"TYPE_OF_SERVICE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2753,0,"IPV4_VER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2702,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2754,0,"IP_IDENFICATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2755,0,"IP_FLAG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2756,0,"IP_TLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2701,0,"IP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2702,0,"IP_PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2757,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2758,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1365,0,"IP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1937,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1938,0,"len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1939,0,"protocol_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1398,0,"IP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1400,0,"tt_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1401,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2207,0,"protocol_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1402,0,"IP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2208,0,"nxIP_state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+2209,0,"nxIP_transmit_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2211,0,"chk_sum_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2212,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1403,0,"IPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2213,0,"nIPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2214,0,"ntt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2215,0,"chksum_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
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
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2698,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+104,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2091,0,"checksum_TX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1783,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2139,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1784,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1785,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1787,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1970,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1971,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2220,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1972,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1035,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1036,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2403,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2404,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2405,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2406,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2407,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+877,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+878,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+879,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+881,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1974,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1975,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1037,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2408,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1417,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1419,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1420,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1421,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2361,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2260,0,"seq_num_tx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2204,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1914,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1915,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1916,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1422,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+107,0,"wr_FIFO_TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"wr_axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+109,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1038,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1039,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1976,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1977,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1978,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1979,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1980,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1981,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1982,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1983,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1984,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1918,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2261,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2262,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2263,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1919,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2264,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2265,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2266,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2092,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1278,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1286,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1040,0,"clear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1041,0,"count_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1985,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2686,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2687,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2690,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2698,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+111,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2096,0,"checksum_TX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1812,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2186,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1813,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1814,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1816,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2035,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2036,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2291,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2037,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1152,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1153,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2511,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2512,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2513,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2514,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2515,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1016,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1017,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1018,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1020,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2039,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2040,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2516,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1597,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1599,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1600,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1601,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2376,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2331,0,"seq_num_tx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2216,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1941,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1942,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1943,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1602,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+114,0,"wr_FIFO_TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"wr_axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+116,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1155,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1156,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2041,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2042,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2043,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2044,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2045,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2046,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2047,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2048,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2049,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1945,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2332,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2333,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2334,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+745,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1946,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2335,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2336,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2337,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2097,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1282,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1290,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"clear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1158,0,"count_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2050,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_fifo_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_fifo_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2759,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2760,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2267,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2362,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"hand_shake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2093,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1423,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1424,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1425,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1427,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1986,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1987,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1043,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2761,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2762,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+124,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1428,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1429,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2763,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+324,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1430,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+325,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+326,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1431,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+328,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1432,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+329,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1433,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+330,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1434,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+331,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1435,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+332,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1436,0,"rd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+333,0,"nrd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1437,0,"wr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+334,0,"nwr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1438,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1439,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1440,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1441,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1442,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1443,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1444,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1446,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1447,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1448,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1449,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1450,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1451,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1452,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1453,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1454,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1455,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1456,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1457,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1458,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1459,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1460,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1461,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1462,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1463,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1464,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1465,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1466,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1467,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1468,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1469,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1470,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1471,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1472,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1473,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1474,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1475,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1476,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1477,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1478,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1479,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1480,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1481,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1482,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1483,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1484,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1485,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1486,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1487,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1488,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1489,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1490,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1491,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1492,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1493,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1494,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1496,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1497,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1498,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1499,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1500,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1501,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1502,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1503,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1504,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1505,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1506,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1507,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1508,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1509,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1510,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1511,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1512,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1513,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1514,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1515,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1516,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1517,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1518,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1519,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1520,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1521,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1522,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1523,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1524,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1525,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1526,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1527,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1528,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1529,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1530,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1531,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1532,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1533,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+335,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+339,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+340,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+341,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+345,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+346,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+347,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+351,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+352,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+353,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+355,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+357,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+359,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+361,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+363,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+364,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+365,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+369,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+370,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+371,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+375,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+376,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+377,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+381,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+382,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+383,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+388,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+389,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+393,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+394,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+395,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+398,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+399,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+400,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+401,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+405,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+406,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+407,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+411,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+413,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+417,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+418,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+419,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+423,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+424,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+425,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+429,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+430,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1534,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1535,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1536,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+434,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1537,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1538,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1539,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+1540,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1542,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1544,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1546,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1548,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1550,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1552,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1554,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1556,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1558,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1560,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1562,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1564,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1566,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1568,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1570,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+438,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+440,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+442,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+444,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+446,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+448,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+450,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+452,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+454,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+456,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+458,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+460,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+462,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+464,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+466,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+468,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+1572,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1573,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1574,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+473,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1575,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1576,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+476,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1577,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+477,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_fifo_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_fifo_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2759,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2760,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2338,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2377,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"hand_shake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2098,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1603,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1604,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1605,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1607,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2051,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2052,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1160,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2764,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2765,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+132,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1608,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1609,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2766,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+478,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1610,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+479,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+480,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1611,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+482,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1612,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+483,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1613,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+484,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1614,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+485,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1615,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+486,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1616,0,"rd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+487,0,"nrd_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1617,0,"wr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+488,0,"nwr_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1618,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1619,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1620,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1621,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1622,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1623,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1624,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1625,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1626,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1627,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1628,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1629,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1630,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1631,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1632,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1633,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1634,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1635,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1636,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1637,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1638,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1639,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1640,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1641,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1642,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1643,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1644,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1645,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1646,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1647,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1648,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1649,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1650,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1651,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1652,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1653,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1654,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1655,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1656,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1657,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1658,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1659,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1660,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1661,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1663,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1664,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1665,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1666,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1667,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1668,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1669,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1670,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1671,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1672,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1673,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1674,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1676,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1677,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1678,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1680,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1681,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1682,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1683,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1684,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1686,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1687,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1688,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1689,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1690,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1692,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1693,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1694,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1695,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1696,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1697,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1698,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1699,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1700,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1701,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1702,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1703,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1704,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1705,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1706,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1707,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1708,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1709,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1710,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1711,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1712,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1713,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+489,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+492,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+493,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+494,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+495,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+496,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+499,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+501,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+505,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+506,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+507,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+508,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+511,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+512,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+513,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+517,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+518,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+519,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+520,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+523,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+524,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+525,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+526,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+527,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+528,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+529,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+530,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+531,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+532,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+533,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+534,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+535,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+536,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+537,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+538,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+541,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+542,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+543,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+546,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+547,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+548,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+549,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+550,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+551,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+552,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+553,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+554,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+555,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+556,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+558,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+559,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+560,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+561,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+562,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+564,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+565,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+567,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+569,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+570,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+571,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+572,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+573,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+577,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+578,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+579,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+580,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+583,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+584,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1714,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1715,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1716,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+588,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1717,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+589,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1718,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+590,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1719,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+591,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+1720,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1722,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1724,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1726,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1728,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1730,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1732,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1734,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1736,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1738,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1740,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1742,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1744,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1746,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1748,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1750,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+592,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+594,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+596,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+598,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+600,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+602,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+604,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+606,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+608,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+610,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+612,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+614,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+616,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+618,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+620,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+622,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+1752,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1753,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1754,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+626,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+627,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1755,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1756,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+630,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1757,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+631,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2767,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+743,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2767,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+746,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+747,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+142,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+144,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1578,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1279,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+200,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1280,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+201,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1281,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+202,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+203,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+204,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2665,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+149,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+151,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1758,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1283,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+205,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1284,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+206,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1285,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+207,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+208,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+209,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2666,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__TCP_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2768,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2769,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2770,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2757,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2758,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2268,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2269,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2270,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2271,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2272,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2273,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2363,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1579,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1580,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1581,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2667,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1920,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1921,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2205,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1922,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1923,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1924,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1925,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2094,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2364,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1927,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2606,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+2365,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1928,0,"state",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2366,0,"nstate",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+2367,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2607,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2369,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2370,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2371,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2372,0,"chksum_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2608,0,"IP_pseuder_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2609,0,"IP_pseuder_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+1929,0,"frame_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2373,0,"nframe_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__TCP_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2768,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2769,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2770,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2757,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2758,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2339,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2340,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2341,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2342,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2343,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2344,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2378,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1759,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1760,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1761,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2668,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1947,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1948,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2217,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1949,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1950,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1951,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1952,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2099,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2379,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1954,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2610,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+2380,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1955,0,"state",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2381,0,"nstate",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+2382,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2611,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2384,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2385,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2386,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2387,0,"chksum_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2612,0,"IP_pseuder_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2613,0,"IP_pseuder_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+1956,0,"frame_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2388,0,"nframe_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2768,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2769,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2770,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2771,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1788,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1790,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1791,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2140,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1792,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1988,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1989,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1990,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1991,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1992,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1993,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1994,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1995,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1996,0,"bytes_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1997,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1999,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2221,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2000,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2001,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2222,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2223,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2224,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2225,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2226,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2227,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2228,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2772,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2002,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2229,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2230,0,"TCP_checksum_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2773,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2774,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2231,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2233,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2234,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2235,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2775,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2776,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2236,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2237,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2238,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2003,0,"state",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2239,0,"nstate",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2768,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2769,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2770,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2771,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1817,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1819,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1820,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2187,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1821,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2053,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2054,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2055,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2056,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2057,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2058,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2059,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2060,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2061,0,"bytes_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2062,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2064,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2292,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2065,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2066,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2293,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2294,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2295,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2296,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2297,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2298,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2299,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2777,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2067,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2300,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2301,0,"TCP_checksum_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2778,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2779,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2302,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2304,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+2305,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2306,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2780,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2781,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2307,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2308,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2309,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2068,0,"state",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2310,0,"nstate",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

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
    tracep->declBus(c+2782,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2783,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2784,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+160,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2004,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2005,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2006,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2007,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2008,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2009,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2010,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2011,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+23,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1931,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2274,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2275,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2276,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2277,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2278,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2279,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2409,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1287,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1044,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1045,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2669,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1932,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1583,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2012,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1046,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2013,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2410,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+884,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2411,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+885,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2412,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+2413,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2014,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2240,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2414,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2015,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2016,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1048,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"count_en_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1050,0,"clear_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2415,0,"case_bug",9, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2416,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1051,0,"state",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2417,0,"nstate",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2017,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2018,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2019,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2020,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2021,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2022,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2023,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2024,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2280,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2281,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2282,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2283,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2284,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2285,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2286,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2287,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1052,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1053,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+2418,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2419,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1054,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1055,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2420,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2421,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+1056,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2422,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2670,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2671,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2288,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2423,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2424,0,"ncount_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2425,0,"nclear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2426,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2427,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2428,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2429,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2430,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2431,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2432,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2434,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2435,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2436,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2437,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2438,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2439,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2440,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2441,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2442,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2443,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2444,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2445,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2446,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2447,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2448,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2449,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2450,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2451,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2452,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2454,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2455,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2456,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2457,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2458,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2459,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2460,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2461,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2462,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2465,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2466,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2467,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2468,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2469,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2470,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2471,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2472,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2473,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2474,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2475,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1057,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1058,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1059,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1060,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1061,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1062,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1063,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1064,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1066,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1067,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1068,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1071,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1072,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1074,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1075,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1076,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1077,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1078,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1079,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1081,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1082,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1083,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1084,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1086,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1087,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1088,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1091,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1092,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1094,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1095,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1096,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1097,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1098,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1099,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1101,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1102,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1106,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+1107,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2476,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"rcv_next_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2477,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2478,0,"nout_order_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1109,0,"seq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2479,0,"nseq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1111,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1112,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1113,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+2785,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2786,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2787,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2788,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2789,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2790,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2791,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2792,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2793,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2794,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2795,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2796,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2797,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2798,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2799,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2800,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2801,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2802,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2803,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2804,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2805,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2806,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2807,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2808,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2809,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2810,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2811,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2812,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2813,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2814,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2815,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2816,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+1114,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1115,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1116,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2480,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1117,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2481,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2241,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1118,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2242,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2243,0,"left_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2244,0,"right_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2245,0,"lt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2246,0,"rt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2817,0,"ov_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1119,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2482,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1120,0,"seq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2483,0,"nseq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2484,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2485,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1121,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1122,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1123,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1124,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1125,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1126,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1127,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1128,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1129,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1130,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+2486,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2487,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2488,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2489,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2490,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2491,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2492,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2493,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2494,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2495,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
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
    tracep->declBus(c+1131,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1132,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2496,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2497,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

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
    tracep->declBus(c+2782,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2783,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2784,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+162,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2069,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2070,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2071,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2072,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2073,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2074,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2075,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2076,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+24,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1958,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2345,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2346,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2347,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2348,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2349,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2350,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2517,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1021,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1291,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1162,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2672,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1959,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1763,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2077,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1163,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1164,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1022,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2078,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2518,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1023,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2519,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1024,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2520,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+2521,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2079,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2311,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2522,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2080,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2081,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"count_en_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1167,0,"clear_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2523,0,"case_bug",9, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2524,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1168,0,"state",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2525,0,"nstate",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2082,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2083,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2084,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2085,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2086,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2087,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2088,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2089,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2351,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2352,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2353,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2354,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2355,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2356,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2357,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2358,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1169,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1170,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+2526,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2527,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1171,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1172,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2528,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2529,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+1173,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2530,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2673,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2674,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2359,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2531,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2532,0,"ncount_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2533,0,"nclear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2534,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2535,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2536,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2537,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2538,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2539,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2540,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2541,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2542,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2543,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2544,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2545,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2546,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2547,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2548,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2549,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2550,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2551,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2552,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2553,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2554,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2555,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2556,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2557,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2558,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2559,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2560,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2561,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2562,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2563,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2564,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2565,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2566,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2567,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2568,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2569,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2570,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2571,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2572,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2573,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2574,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2575,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2576,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2577,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2578,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+2579,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2580,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2581,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2582,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2583,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1174,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1175,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1176,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1178,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1179,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1180,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1183,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1184,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1185,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1187,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1188,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1189,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1190,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1191,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1192,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1193,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1194,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1195,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1197,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1198,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1199,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1200,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1202,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1203,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1204,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1207,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1208,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1209,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1210,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1211,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1212,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1213,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1214,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1215,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1216,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1217,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1218,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1219,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1220,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1221,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1222,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1223,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+1224,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2584,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1225,0,"rcv_next_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2585,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2586,0,"nout_order_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1226,0,"seq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2587,0,"nseq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1227,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1228,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1229,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1230,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+2818,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2819,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2820,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2821,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2822,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2823,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2824,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2825,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2826,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2827,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2828,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2829,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2830,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2831,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2832,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2833,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2834,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2835,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2836,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2837,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2838,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2839,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2840,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2841,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2842,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2843,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2844,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2845,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2846,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2847,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2848,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2849,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+1231,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1232,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1233,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2588,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1234,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2589,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2312,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1235,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2313,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2314,0,"left_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2315,0,"right_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2316,0,"lt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2317,0,"rt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2850,0,"ov_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1236,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2590,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1237,0,"seq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2591,0,"nseq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2592,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2593,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1238,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1239,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1240,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1241,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1242,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1243,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1244,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1245,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1246,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1247,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+2594,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2595,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2596,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2597,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2598,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2599,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2600,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2601,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2602,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2603,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
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
    tracep->declBus(c+1248,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1249,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2604,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2605,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_clt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_clt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1366,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1368,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1369,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1371,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_svr__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__cvrt_svr__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1325,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1327,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1328,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1330,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+675,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2851,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+677,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+25,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1855,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2852,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1857,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+26,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1859,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2853,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1861,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+27,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+679,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2854,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+681,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+28,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+730,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2855,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+732,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+29,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1897,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2856,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1899,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+30,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+1901,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2857,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1903,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+31,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+734,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2858,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+736,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+32,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+164,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1863,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+684,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1273,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1274,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+686,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_tx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+166,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2859,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2675,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1261,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1262,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2677,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+168,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1905,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+739,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1276,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1277,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+741,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__CRC__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_tx__CRC__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+170,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2860,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2678,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1264,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1265,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2680,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__rx_pkg__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+2861,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+2863,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2749,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2865,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2866,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2867,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2701,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2868,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2756,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2757,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2758,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2769,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2869,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2709,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2870,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__ip_rx__chksum_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2141,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2142,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2143,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1267,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1268,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2145,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2146,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__ip_rx__chksum_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2703,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+174,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2188,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2189,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2190,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1270,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1271,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2192,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2193,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__timeout_fl__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2767,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+176,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1133,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1134,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"initial_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1288,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1289,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2681,0,"nxt_count_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2682,0,"nxt_rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__timeout_fl__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2767,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1250,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1251,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"initial_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1292,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1293,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2683,0,"nxt_count_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2684,0,"nxt_rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2687,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2872,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1372,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1373,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1374,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1375,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2687,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2872,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1331,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1332,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1333,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2686,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2105,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2106,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2107,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2108,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2686,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2152,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2153,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2154,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2155,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1135,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1136,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1137,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1138,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1139,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1140,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1141,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1142,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2247,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2248,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2249,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2251,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2252,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2253,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2254,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2255,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2256,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2257,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2258,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1252,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1253,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1254,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1255,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1256,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1257,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1258,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2318,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2319,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2320,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2321,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2322,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2323,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2324,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2325,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0(Vether_simulation___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_init_sub__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2873,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2871,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2690,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2326,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2327,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2328,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+2685,(0x40U),32);
    bufp->fullIData(oldp+2686,(0x10U),32);
    bufp->fullIData(oldp+2687,(8U),32);
    bufp->fullBit(oldp+2688,(vlSymsp->TOP__ether_simulation.wr_FIFO_validing_svr));
    bufp->fullBit(oldp+2689,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_tx_valid));
    bufp->fullIData(oldp+2690,(4U),32);
    bufp->fullSData(oldp+2691,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_len),16);
    bufp->fullBit(oldp+2692,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_up));
    bufp->fullBit(oldp+2693,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_bytes_rcv));
    bufp->fullBit(oldp+2694,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_tx_valid));
    bufp->fullSData(oldp+2695,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_len),16);
    bufp->fullBit(oldp+2696,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_up));
    bufp->fullBit(oldp+2697,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_bytes_rcv));
    bufp->fullIData(oldp+2698,(0x80U),32);
    bufp->fullCData(oldp+2699,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nlen_TCP_flush),4);
    bufp->fullCData(oldp+2700,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nlen_TCP_flush),4);
    bufp->fullCData(oldp+2701,(6U),8);
    bufp->fullSData(oldp+2702,(0x14U),16);
    bufp->fullIData(oldp+2703,(0x40U),32);
    bufp->fullIData(oldp+2704,(8U),32);
    bufp->fullQData(oldp+2705,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+2707,(0xaaccbbffffffULL),48);
    bufp->fullSData(oldp+2709,(8U),16);
    bufp->fullIData(oldp+2710,(0xc704dd7bU),32);
    bufp->fullCData(oldp+2711,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__end_FCS),3);
    bufp->fullCData(oldp+2712,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__str_FCS),3);
    bufp->fullQData(oldp+2713,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+2715,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+2717,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+2718,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+2719,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+2720,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_shifted),128);
    bufp->fullSData(oldp+2724,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_ind),16);
    bufp->fullSData(oldp+2725,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_ind),16);
    bufp->fullWData(oldp+2726,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__temp),128);
    bufp->fullCData(oldp+2730,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__end_FCS),3);
    bufp->fullCData(oldp+2731,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__str_FCS),3);
    bufp->fullQData(oldp+2732,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+2734,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+2736,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+2737,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+2738,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+2739,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_shifted),128);
    bufp->fullSData(oldp+2743,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_ind),16);
    bufp->fullSData(oldp+2744,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_ind),16);
    bufp->fullWData(oldp+2745,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__temp),128);
    bufp->fullSData(oldp+2749,(0x800U),16);
    bufp->fullBit(oldp+2750,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nvalid));
    bufp->fullBit(oldp+2751,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nvalid));
    bufp->fullCData(oldp+2752,(0U),8);
    bufp->fullCData(oldp+2753,(0x45U),8);
    bufp->fullSData(oldp+2754,(1U),16);
    bufp->fullSData(oldp+2755,(0x4000U),16);
    bufp->fullCData(oldp+2756,(0x40U),8);
    bufp->fullIData(oldp+2757,(0xc0a80101U),32);
    bufp->fullIData(oldp+2758,(0xc0a80102U),32);
    bufp->fullIData(oldp+2759,(0x10U),32);
    bufp->fullIData(oldp+2760,(4U),32);
    bufp->fullBit(oldp+2761,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+2762,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__end_ss));
    bufp->fullSData(oldp+2763,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_re_trans),16);
    bufp->fullBit(oldp+2764,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+2765,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__end_ss));
    bufp->fullSData(oldp+2766,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_re_trans),16);
    bufp->fullIData(oldp+2767,(0x20U),32);
    bufp->fullIData(oldp+2768,(5U),32);
    bufp->fullSData(oldp+2769,(0x1234U),16);
    bufp->fullSData(oldp+2770,(0x5678U),16);
    bufp->fullIData(oldp+2771,(0x14U),32);
    bufp->fullSData(oldp+2772,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_in),16);
    bufp->fullCData(oldp+2773,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_data_dl),8);
    bufp->fullCData(oldp+2774,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_data_dl),8);
    bufp->fullBit(oldp+2775,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_en));
    bufp->fullBit(oldp+2776,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nchecksum_en));
    bufp->fullSData(oldp+2777,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_in),16);
    bufp->fullCData(oldp+2778,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_data_dl),8);
    bufp->fullCData(oldp+2779,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_data_dl),8);
    bufp->fullBit(oldp+2780,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_en));
    bufp->fullBit(oldp+2781,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nchecksum_en));
    bufp->fullIData(oldp+2782,(0xaU),32);
    bufp->fullIData(oldp+2783,(0x800U),32);
    bufp->fullIData(oldp+2784,(0xbU),32);
    bufp->fullSData(oldp+2785,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0U, 0xaU))),10);
    bufp->fullSData(oldp+2786,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaU, 0xaU))),10);
    bufp->fullSData(oldp+2787,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x14U, 0xaU))),10);
    bufp->fullSData(oldp+2788,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x1eU, 0xaU))),10);
    bufp->fullSData(oldp+2789,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x28U, 0xaU))),10);
    bufp->fullSData(oldp+2790,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x32U, 0xaU))),10);
    bufp->fullSData(oldp+2791,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x3cU, 0xaU))),10);
    bufp->fullSData(oldp+2792,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x46U, 0xaU))),10);
    bufp->fullSData(oldp+2793,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x50U, 0xaU))),10);
    bufp->fullSData(oldp+2794,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x5aU, 0xaU))),10);
    bufp->fullSData(oldp+2795,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x64U, 0xaU))),10);
    bufp->fullSData(oldp+2796,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x6eU, 0xaU))),10);
    bufp->fullSData(oldp+2797,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x78U, 0xaU))),10);
    bufp->fullSData(oldp+2798,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x82U, 0xaU))),10);
    bufp->fullSData(oldp+2799,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x8cU, 0xaU))),10);
    bufp->fullSData(oldp+2800,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x96U, 0xaU))),10);
    bufp->fullSData(oldp+2801,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xa0U, 0xaU))),10);
    bufp->fullSData(oldp+2802,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaaU, 0xaU))),10);
    bufp->fullSData(oldp+2803,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xb4U, 0xaU))),10);
    bufp->fullSData(oldp+2804,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xbeU, 0xaU))),10);
    bufp->fullSData(oldp+2805,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xc8U, 0xaU))),10);
    bufp->fullSData(oldp+2806,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xd2U, 0xaU))),10);
    bufp->fullSData(oldp+2807,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xdcU, 0xaU))),10);
    bufp->fullSData(oldp+2808,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xe6U, 0xaU))),10);
    bufp->fullSData(oldp+2809,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xf0U, 0xaU))),10);
    bufp->fullSData(oldp+2810,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xfaU, 0xaU))),10);
    bufp->fullSData(oldp+2811,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x104U, 0xaU))),10);
    bufp->fullSData(oldp+2812,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x10eU, 0xaU))),10);
    bufp->fullSData(oldp+2813,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x118U, 0xaU))),10);
    bufp->fullSData(oldp+2814,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x122U, 0xaU))),10);
    bufp->fullSData(oldp+2815,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x12cU, 0xaU))),10);
    bufp->fullSData(oldp+2816,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x136U, 0xaU))),10);
    bufp->fullCData(oldp+2817,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ov_idx),4);
    bufp->fullSData(oldp+2818,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0U, 0xaU))),10);
    bufp->fullSData(oldp+2819,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaU, 0xaU))),10);
    bufp->fullSData(oldp+2820,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x14U, 0xaU))),10);
    bufp->fullSData(oldp+2821,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x1eU, 0xaU))),10);
    bufp->fullSData(oldp+2822,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x28U, 0xaU))),10);
    bufp->fullSData(oldp+2823,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x32U, 0xaU))),10);
    bufp->fullSData(oldp+2824,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x3cU, 0xaU))),10);
    bufp->fullSData(oldp+2825,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x46U, 0xaU))),10);
    bufp->fullSData(oldp+2826,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x50U, 0xaU))),10);
    bufp->fullSData(oldp+2827,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x5aU, 0xaU))),10);
    bufp->fullSData(oldp+2828,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x64U, 0xaU))),10);
    bufp->fullSData(oldp+2829,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x6eU, 0xaU))),10);
    bufp->fullSData(oldp+2830,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x78U, 0xaU))),10);
    bufp->fullSData(oldp+2831,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x82U, 0xaU))),10);
    bufp->fullSData(oldp+2832,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x8cU, 0xaU))),10);
    bufp->fullSData(oldp+2833,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x96U, 0xaU))),10);
    bufp->fullSData(oldp+2834,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xa0U, 0xaU))),10);
    bufp->fullSData(oldp+2835,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xaaU, 0xaU))),10);
    bufp->fullSData(oldp+2836,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xb4U, 0xaU))),10);
    bufp->fullSData(oldp+2837,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xbeU, 0xaU))),10);
    bufp->fullSData(oldp+2838,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xc8U, 0xaU))),10);
    bufp->fullSData(oldp+2839,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xd2U, 0xaU))),10);
    bufp->fullSData(oldp+2840,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xdcU, 0xaU))),10);
    bufp->fullSData(oldp+2841,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xe6U, 0xaU))),10);
    bufp->fullSData(oldp+2842,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xf0U, 0xaU))),10);
    bufp->fullSData(oldp+2843,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0xfaU, 0xaU))),10);
    bufp->fullSData(oldp+2844,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x104U, 0xaU))),10);
    bufp->fullSData(oldp+2845,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x10eU, 0xaU))),10);
    bufp->fullSData(oldp+2846,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x118U, 0xaU))),10);
    bufp->fullSData(oldp+2847,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x122U, 0xaU))),10);
    bufp->fullSData(oldp+2848,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x12cU, 0xaU))),10);
    bufp->fullSData(oldp+2849,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_vec, 0x136U, 0xaU))),10);
    bufp->fullCData(oldp+2850,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ov_idx),4);
    bufp->fullCData(oldp+2851,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2852,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2853,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2854,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2855,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2856,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2857,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+2858,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullBit(oldp+2859,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__rx));
    bufp->fullBit(oldp+2860,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__rx));
    bufp->fullQData(oldp+2861,(0x123456ULL),48);
    bufp->fullQData(oldp+2863,(0x65431ULL),48);
    bufp->fullCData(oldp+2865,(4U),4);
    bufp->fullCData(oldp+2866,(5U),4);
    bufp->fullCData(oldp+2867,(0x11U),8);
    bufp->fullCData(oldp+2868,(1U),8);
    bufp->fullSData(oldp+2869,(0x4321U),16);
    bufp->fullSData(oldp+2870,(0U),16);
    bufp->fullBit(oldp+2871,(0U));
    bufp->fullIData(oldp+2872,(3U),32);
    bufp->fullIData(oldp+2873,(0xaU),32);
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__end_ss_int));
    bufp->fullSData(oldp+2,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_re_trans_int),16);
    bufp->fullBit(oldp+3,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__end_ss_int));
    bufp->fullSData(oldp+4,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_re_trans_int),16);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_bytes_rcv),8);
    bufp->fullBit(oldp+6,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__end_ss));
    bufp->fullSData(oldp+7,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_re_trans),16);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_bytes_rcv),8);
    bufp->fullBit(oldp+9,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__end_ss));
    bufp->fullSData(oldp+10,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_re_trans),16);
    bufp->fullBit(oldp+11,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_up));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_up));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__gen_en));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__gen_en));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__clear));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__clear));
    bufp->fullSData(oldp+17,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__src_port),16);
    bufp->fullSData(oldp+18,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
    bufp->fullSData(oldp+19,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__src_port),16);
    bufp->fullSData(oldp+20,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__end_ss));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__end_ss));
    bufp->fullCData(oldp+25,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+29,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
    bufp->fullBit(oldp+33,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__rx));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__rx));
    bufp->fullIData(oldp+35,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
    bufp->fullIData(oldp+37,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
    bufp->fullBit(oldp+39,(vlSymsp->TOP__ether_simulation.CLK));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__ether_simulation.nRST));
    bufp->fullCData(oldp+41,(vlSymsp->TOP__ether_simulation.tb_count),8);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__ether_simulation.TX_en_svr));
    bufp->fullQData(oldp+43,(vlSymsp->TOP__ether_simulation.xgmii_rxd_svr),64);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__ether_simulation.xgmii_rxc_svr),8);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__ether_simulation.axis_last_svr));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_svr));
    bufp->fullIData(oldp+48,(vlSymsp->TOP__ether_simulation.len_seq_svr),32);
    bufp->fullQData(oldp+49,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_svr),64);
    bufp->fullBit(oldp+51,(vlSymsp->TOP__ether_simulation.axis_r_en_svr));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__ether_simulation.TX_en_clt));
    bufp->fullQData(oldp+53,(vlSymsp->TOP__ether_simulation.xgmii_rxd_clt),64);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__ether_simulation.xgmii_rxc_clt),8);
    bufp->fullBit(oldp+56,(vlSymsp->TOP__ether_simulation.axis_last_clt));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_clt));
    bufp->fullIData(oldp+58,(vlSymsp->TOP__ether_simulation.len_seq_clt),32);
    bufp->fullQData(oldp+59,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_clt),64);
    bufp->fullBit(oldp+61,(vlSymsp->TOP__ether_simulation.axis_r_en_clt));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CLK));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nRST));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TX_en));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_last));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_en));
    bufp->fullIData(oldp+67,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__len_seq),32);
    bufp->fullQData(oldp+68,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+70,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_en));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CLK));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nRST));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TX_en));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_last));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_en));
    bufp->fullIData(oldp+76,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__len_seq),32);
    bufp->fullQData(oldp+77,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+79,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_en));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__CLK));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nRST));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_en));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__CLK));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nRST));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_en));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__CLK));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nRST));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__CLK));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nRST));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CLK));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nRST));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CLK));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nRST));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__CLK));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nRST));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__TX_en));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__CLK));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nRST));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__TX_en));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__CLK));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nRST));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__CLK));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nRST));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__CLK));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nRST));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TX_en));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_TX_en));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_axis_last));
    bufp->fullQData(oldp+109,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__CLK));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nRST));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TX_en));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_TX_en));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_axis_last));
    bufp->fullQData(oldp+116,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__CLK));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nRST));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TX_en));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__axis_last));
    bufp->fullIData(oldp+123,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__len_seq),32);
    bufp->fullQData(oldp+124,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+126,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__CLK));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nRST));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TX_en));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__axis_last));
    bufp->fullIData(oldp+131,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__len_seq),32);
    bufp->fullQData(oldp+132,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__CLK));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__nRST));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__CLK));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__nRST));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__CLK));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nRST));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__axis_last));
    bufp->fullQData(oldp+142,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
    bufp->fullBit(oldp+144,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TX_en));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__CLK));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nRST));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__axis_last));
    bufp->fullQData(oldp+149,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
    bufp->fullBit(oldp+151,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TX_en));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__CLK));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nRST));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__CLK));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nRST));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__CLK));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nRST));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__CLK));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nRST));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__CLK));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nRST));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__CLK));
    bufp->fullBit(oldp+163,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nRST));
    bufp->fullBit(oldp+164,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+166,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+167,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__nRST));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__CLK));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nRST));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__CLK));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nRST));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__CLK));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nRST));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__CLK));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nRST));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__ether_simulation.frame_end_svr));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_end));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__frame_end));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send_l));
    bufp->fullCData(oldp+184,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nstate),7);
    bufp->fullBit(oldp+185,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_init));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__valid));
    bufp->fullSData(oldp+187,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nlen_counter),16);
    bufp->fullBit(oldp+188,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__valid));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_init));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__ether_simulation.frame_end_clt));
    bufp->fullBit(oldp+191,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_end));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__frame_end));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send_l));
    bufp->fullCData(oldp+194,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nstate),7);
    bufp->fullBit(oldp+195,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_init));
    bufp->fullBit(oldp+196,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__valid));
    bufp->fullSData(oldp+197,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nlen_counter),16);
    bufp->fullBit(oldp+198,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__valid));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_init));
    bufp->fullSData(oldp+200,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp),20);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp1),20);
    bufp->fullSData(oldp+205,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp),20);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp1),20);
    bufp->fullQData(oldp+210,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+212,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+213,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+215,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+216,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+218,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+219,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+221,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+222,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+224,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+225,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+227,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+228,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+230,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+231,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+233,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+234,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+236,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+237,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+239,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+240,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+242,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+243,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+245,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+246,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+248,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+249,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+251,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+252,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+254,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+255,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+257,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullCData(oldp+258,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+259,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__naxis_r_valid));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_flush_l));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nhandshake));
    bufp->fullCData(oldp+265,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nwr_ptr),4);
    bufp->fullCData(oldp+266,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_ptr),4);
    bufp->fullQData(oldp+267,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+269,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+270,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+272,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+273,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+275,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+276,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+278,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+279,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+281,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+282,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+284,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+285,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+287,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+288,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+290,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+291,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+293,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+294,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+296,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+297,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+299,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+300,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+302,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+303,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+305,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+306,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+308,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+309,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+311,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+312,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+314,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+316,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
    bufp->fullBit(oldp+318,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__naxis_r_valid));
    bufp->fullBit(oldp+320,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_flush_l));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nhandshake));
    bufp->fullCData(oldp+322,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nwr_ptr),4);
    bufp->fullCData(oldp+323,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_ptr),4);
    bufp->fullSData(oldp+324,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
    bufp->fullSData(oldp+325,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
    bufp->fullQData(oldp+326,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+328,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_str),4);
    bufp->fullCData(oldp+329,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_end),4);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nflush_ptr),4);
    bufp->fullSData(oldp+331,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_state),2);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_state),2);
    bufp->fullBit(oldp+335,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
    bufp->fullIData(oldp+336,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+337,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+338,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+339,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+340,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+341,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
    bufp->fullIData(oldp+342,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+343,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+344,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+345,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+346,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+347,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
    bufp->fullIData(oldp+348,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+349,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+350,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+351,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+352,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+353,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
    bufp->fullIData(oldp+354,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+355,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+356,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+357,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+358,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+359,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
    bufp->fullIData(oldp+360,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+361,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+362,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+363,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+364,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+365,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
    bufp->fullIData(oldp+366,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+367,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+368,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+369,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+370,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+371,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
    bufp->fullIData(oldp+372,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+373,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+374,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+375,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+376,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+377,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
    bufp->fullIData(oldp+378,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+379,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+380,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+381,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+382,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+383,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
    bufp->fullIData(oldp+384,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+385,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+386,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+387,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+388,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+389,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
    bufp->fullIData(oldp+390,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+391,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+392,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+393,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+394,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+395,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
    bufp->fullIData(oldp+396,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+397,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+398,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+399,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+400,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+401,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
    bufp->fullIData(oldp+402,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+403,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+404,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+405,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+406,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+407,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
    bufp->fullIData(oldp+408,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+409,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+410,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+411,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+412,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+413,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
    bufp->fullIData(oldp+414,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+415,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+416,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+417,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+418,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+419,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
    bufp->fullIData(oldp+420,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+421,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+422,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+423,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+424,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+425,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
    bufp->fullIData(oldp+426,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+427,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+428,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+429,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+430,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+431,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
    bufp->fullBit(oldp+432,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
    bufp->fullBit(oldp+433,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
    bufp->fullCData(oldp+434,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+435,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+436,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_ptr),4);
    bufp->fullCData(oldp+437,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
    bufp->fullQData(oldp+438,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+440,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+442,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+444,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+446,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+448,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+450,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+452,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+454,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+456,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+458,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+460,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+462,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+464,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+466,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+468,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+470,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nout_order_req_l));
    bufp->fullBit(oldp+471,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+472,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_num_l),32);
    bufp->fullBit(oldp+473,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_1));
    bufp->fullBit(oldp+474,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_2));
    bufp->fullBit(oldp+475,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_upd));
    bufp->fullSData(oldp+476,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+477,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nchecksum_l),16);
    bufp->fullSData(oldp+478,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
    bufp->fullSData(oldp+479,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
    bufp->fullQData(oldp+480,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+482,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_str),4);
    bufp->fullCData(oldp+483,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_end),4);
    bufp->fullCData(oldp+484,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nflush_ptr),4);
    bufp->fullSData(oldp+485,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+486,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
    bufp->fullCData(oldp+487,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_state),2);
    bufp->fullCData(oldp+488,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_state),2);
    bufp->fullBit(oldp+489,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
    bufp->fullIData(oldp+490,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+491,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+492,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+493,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+494,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+495,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
    bufp->fullIData(oldp+496,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+497,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+498,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+499,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+500,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+501,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
    bufp->fullIData(oldp+502,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+503,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+504,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+505,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+506,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+507,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
    bufp->fullIData(oldp+508,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+509,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+510,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+511,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+512,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+513,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
    bufp->fullIData(oldp+514,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+515,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+516,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+517,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+518,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+519,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
    bufp->fullIData(oldp+520,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+521,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+522,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+523,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+524,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+525,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
    bufp->fullIData(oldp+526,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+527,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+528,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+529,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+530,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+531,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
    bufp->fullIData(oldp+532,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+533,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+534,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+535,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+536,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+537,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
    bufp->fullIData(oldp+538,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+539,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+540,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+541,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+542,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+543,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
    bufp->fullIData(oldp+544,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+545,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+546,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+547,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+548,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+549,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
    bufp->fullIData(oldp+550,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+551,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+552,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+553,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+554,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+555,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
    bufp->fullIData(oldp+556,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+557,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+558,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+559,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+560,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+561,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
    bufp->fullIData(oldp+562,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+563,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+564,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+565,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+566,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+567,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
    bufp->fullIData(oldp+568,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+569,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+570,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+571,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+572,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+573,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
    bufp->fullIData(oldp+574,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+575,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+576,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+577,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+578,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+579,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
    bufp->fullIData(oldp+580,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+581,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+582,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+583,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+584,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+585,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
    bufp->fullBit(oldp+586,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
    bufp->fullBit(oldp+587,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
    bufp->fullCData(oldp+588,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+589,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+590,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_ptr),4);
    bufp->fullCData(oldp+591,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
    bufp->fullQData(oldp+592,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+594,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+596,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+598,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+600,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+602,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+604,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+606,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+608,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+610,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+612,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+614,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+616,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+618,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+620,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+622,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+624,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nout_order_req_l));
    bufp->fullBit(oldp+625,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+626,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_num_l),32);
    bufp->fullBit(oldp+627,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_1));
    bufp->fullBit(oldp+628,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_2));
    bufp->fullBit(oldp+629,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_upd));
    bufp->fullSData(oldp+630,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+631,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nchecksum_l),16);
    bufp->fullBit(oldp+632,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CRC_flush));
    bufp->fullBit(oldp+633,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_ok));
    bufp->fullBit(oldp+634,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_flush));
    bufp->fullBit(oldp+635,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CRC_flush));
    bufp->fullBit(oldp+636,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_ok));
    bufp->fullBit(oldp+637,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_init));
    bufp->fullQData(oldp+638,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in),64);
    bufp->fullQData(oldp+640,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in_big),64);
    bufp->fullSData(oldp+642,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
    bufp->fullBit(oldp+643,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_found));
    bufp->fullCData(oldp+644,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_lane),3);
    bufp->fullQData(oldp+645,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+647,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
    bufp->fullSData(oldp+649,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_rxc),16);
    bufp->fullIData(oldp+650,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_check),32);
    bufp->fullWData(oldp+651,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nframe_store),128);
    bufp->fullIData(oldp+655,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_frame),32);
    bufp->fullIData(oldp+656,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nrg),32);
    bufp->fullBit(oldp+657,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_delay));
    bufp->fullBit(oldp+658,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_valid));
    bufp->fullIData(oldp+659,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__i),32);
    bufp->fullBit(oldp+660,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsoft_dl));
    bufp->fullBit(oldp+661,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__case_debug));
    bufp->fullQData(oldp+662,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+664,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+665,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+666,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_valid));
    bufp->fullCData(oldp+667,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__next_state),6);
    bufp->fullQData(oldp+668,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr),48);
    bufp->fullQData(oldp+670,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr),48);
    bufp->fullBit(oldp+672,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr_valid));
    bufp->fullBit(oldp+673,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_first_valid));
    bufp->fullBit(oldp+674,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_second_valid));
    bufp->fullQData(oldp+675,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+677,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+679,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+681,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+683,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_init));
    bufp->fullQData(oldp+684,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+686,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__next_crc),32);
    bufp->fullBit(oldp+687,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CRC_flush));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_ok));
    bufp->fullBit(oldp+689,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_flush));
    bufp->fullBit(oldp+690,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CRC_flush));
    bufp->fullBit(oldp+691,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_ok));
    bufp->fullBit(oldp+692,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_init));
    bufp->fullQData(oldp+693,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in),64);
    bufp->fullQData(oldp+695,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in_big),64);
    bufp->fullSData(oldp+697,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
    bufp->fullBit(oldp+698,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_found));
    bufp->fullCData(oldp+699,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_lane),3);
    bufp->fullQData(oldp+700,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+702,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
    bufp->fullSData(oldp+704,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_rxc),16);
    bufp->fullIData(oldp+705,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_check),32);
    bufp->fullWData(oldp+706,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nframe_store),128);
    bufp->fullIData(oldp+710,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_frame),32);
    bufp->fullIData(oldp+711,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nrg),32);
    bufp->fullBit(oldp+712,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_delay));
    bufp->fullBit(oldp+713,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_valid));
    bufp->fullIData(oldp+714,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__i),32);
    bufp->fullBit(oldp+715,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsoft_dl));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__case_debug));
    bufp->fullQData(oldp+717,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+719,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+720,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+721,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_valid));
    bufp->fullCData(oldp+722,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__next_state),6);
    bufp->fullQData(oldp+723,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr),48);
    bufp->fullQData(oldp+725,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr),48);
    bufp->fullBit(oldp+727,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr_valid));
    bufp->fullBit(oldp+728,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_first_valid));
    bufp->fullBit(oldp+729,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_second_valid));
    bufp->fullQData(oldp+730,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+732,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+734,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+736,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+738,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_init));
    bufp->fullQData(oldp+739,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+741,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__next_crc),32);
    bufp->fullIData(oldp+742,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ISN_num),32);
    bufp->fullIData(oldp+743,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
    bufp->fullIData(oldp+744,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__counter),32);
    bufp->fullIData(oldp+745,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ISN_num),32);
    bufp->fullIData(oldp+746,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
    bufp->fullIData(oldp+747,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__counter),32);
    bufp->fullBit(oldp+748,(vlSymsp->TOP__ether_simulation.axis_r_valid_svr));
    bufp->fullQData(oldp+749,(vlSymsp->TOP__ether_simulation.axis_rd_data_svr),64);
    bufp->fullBit(oldp+751,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_valid));
    bufp->fullQData(oldp+752,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_rd_data),64);
    bufp->fullCData(oldp+754,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+755,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+756,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_en_int));
    bufp->fullIData(oldp+757,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+758,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__full));
    bufp->fullCData(oldp+759,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+760,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+761,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+762,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+763,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__full));
    bufp->fullBit(oldp+764,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_valid));
    bufp->fullQData(oldp+765,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_rd_data),64);
    bufp->fullQData(oldp+767,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+769,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+770,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+772,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+773,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+775,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+776,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+778,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+779,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+781,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+782,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+784,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+785,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+787,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+788,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+790,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+791,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+793,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+794,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+796,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+797,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+799,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+800,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+802,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+803,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+805,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+806,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+808,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+809,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+811,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+812,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+814,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullQData(oldp+815,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
    bufp->fullCData(oldp+817,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
    bufp->fullCData(oldp+818,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+819,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
    bufp->fullCData(oldp+820,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
    bufp->fullIData(oldp+821,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
    bufp->fullCData(oldp+822,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_len),4);
    bufp->fullBit(oldp+823,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
    bufp->fullBit(oldp+824,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush_l));
    bufp->fullBit(oldp+825,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake));
    bufp->fullQData(oldp+826,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[0]),64);
    bufp->fullQData(oldp+828,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[1]),64);
    bufp->fullQData(oldp+830,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[2]),64);
    bufp->fullQData(oldp+832,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[3]),64);
    bufp->fullQData(oldp+834,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[4]),64);
    bufp->fullQData(oldp+836,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[5]),64);
    bufp->fullQData(oldp+838,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[6]),64);
    bufp->fullQData(oldp+840,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[7]),64);
    bufp->fullQData(oldp+842,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[8]),64);
    bufp->fullQData(oldp+844,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[9]),64);
    bufp->fullQData(oldp+846,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[10]),64);
    bufp->fullQData(oldp+848,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[11]),64);
    bufp->fullQData(oldp+850,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[12]),64);
    bufp->fullQData(oldp+852,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[13]),64);
    bufp->fullQData(oldp+854,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[14]),64);
    bufp->fullQData(oldp+856,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[15]),64);
    bufp->fullCData(oldp+858,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
    bufp->fullCData(oldp+859,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
    bufp->fullCData(oldp+860,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
    bufp->fullCData(oldp+861,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
    bufp->fullCData(oldp+862,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
    bufp->fullCData(oldp+863,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
    bufp->fullCData(oldp+864,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
    bufp->fullCData(oldp+865,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
    bufp->fullCData(oldp+866,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
    bufp->fullCData(oldp+867,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
    bufp->fullCData(oldp+868,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
    bufp->fullCData(oldp+869,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
    bufp->fullCData(oldp+870,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
    bufp->fullCData(oldp+871,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
    bufp->fullCData(oldp+872,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
    bufp->fullCData(oldp+873,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
    bufp->fullCData(oldp+874,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr),4);
    bufp->fullCData(oldp+875,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_ptr),4);
    bufp->fullIData(oldp+876,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+877,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+878,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+879,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
    bufp->fullIData(oldp+880,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+881,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__full));
    bufp->fullBit(oldp+882,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__full));
    bufp->fullIData(oldp+883,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+884,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
    bufp->fullSData(oldp+885,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    bufp->fullBit(oldp+886,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+887,(vlSymsp->TOP__ether_simulation.axis_r_valid_clt));
    bufp->fullQData(oldp+888,(vlSymsp->TOP__ether_simulation.axis_rd_data_clt),64);
    bufp->fullBit(oldp+890,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_valid));
    bufp->fullQData(oldp+891,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_rd_data),64);
    bufp->fullCData(oldp+893,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+894,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+895,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_en_int));
    bufp->fullIData(oldp+896,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+897,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__full));
    bufp->fullCData(oldp+898,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+899,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+900,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+901,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+902,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__full));
    bufp->fullBit(oldp+903,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_valid));
    bufp->fullQData(oldp+904,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_rd_data),64);
    bufp->fullQData(oldp+906,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+908,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+909,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+911,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+912,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+914,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+915,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+917,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+918,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+920,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+921,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+923,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+924,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+926,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+927,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+929,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+930,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+932,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+933,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+935,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+936,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+938,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+939,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+941,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+942,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+944,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+945,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+947,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+948,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+950,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+951,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+953,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullQData(oldp+954,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
    bufp->fullCData(oldp+956,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
    bufp->fullCData(oldp+957,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+958,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
    bufp->fullCData(oldp+959,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
    bufp->fullIData(oldp+960,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
    bufp->fullCData(oldp+961,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_len),4);
    bufp->fullBit(oldp+962,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
    bufp->fullBit(oldp+963,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush_l));
    bufp->fullBit(oldp+964,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake));
    bufp->fullQData(oldp+965,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[0]),64);
    bufp->fullQData(oldp+967,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[1]),64);
    bufp->fullQData(oldp+969,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[2]),64);
    bufp->fullQData(oldp+971,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[3]),64);
    bufp->fullQData(oldp+973,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[4]),64);
    bufp->fullQData(oldp+975,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[5]),64);
    bufp->fullQData(oldp+977,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[6]),64);
    bufp->fullQData(oldp+979,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[7]),64);
    bufp->fullQData(oldp+981,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[8]),64);
    bufp->fullQData(oldp+983,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[9]),64);
    bufp->fullQData(oldp+985,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[10]),64);
    bufp->fullQData(oldp+987,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[11]),64);
    bufp->fullQData(oldp+989,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[12]),64);
    bufp->fullQData(oldp+991,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[13]),64);
    bufp->fullQData(oldp+993,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[14]),64);
    bufp->fullQData(oldp+995,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[15]),64);
    bufp->fullCData(oldp+997,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
    bufp->fullCData(oldp+998,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
    bufp->fullCData(oldp+999,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
    bufp->fullCData(oldp+1000,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
    bufp->fullCData(oldp+1001,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
    bufp->fullCData(oldp+1002,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
    bufp->fullCData(oldp+1003,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
    bufp->fullCData(oldp+1004,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
    bufp->fullCData(oldp+1005,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
    bufp->fullCData(oldp+1006,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
    bufp->fullCData(oldp+1007,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
    bufp->fullCData(oldp+1008,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
    bufp->fullCData(oldp+1009,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
    bufp->fullCData(oldp+1010,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
    bufp->fullCData(oldp+1011,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
    bufp->fullCData(oldp+1012,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
    bufp->fullCData(oldp+1013,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr),4);
    bufp->fullCData(oldp+1014,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_ptr),4);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1016,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+1017,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+1018,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
    bufp->fullIData(oldp+1019,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__full));
    bufp->fullBit(oldp+1021,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__full));
    bufp->fullIData(oldp+1022,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+1023,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
    bufp->fullSData(oldp+1024,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    bufp->fullBit(oldp+1025,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+1026,(vlSymsp->TOP__ether_simulation.seq_num_svr),32);
    bufp->fullIData(oldp+1027,(vlSymsp->TOP__ether_simulation.rcv_next_svr),32);
    bufp->fullIData(oldp+1028,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1029,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num),32);
    bufp->fullBit(oldp+1030,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__handshake_done_int));
    bufp->fullIData(oldp+1031,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+1032,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__out_order_req_int));
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake_done));
    bufp->fullIData(oldp+1034,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1035,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__handshake_done));
    bufp->fullIData(oldp+1036,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1037,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__out_order_req));
    bufp->fullIData(oldp+1038,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1039,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num),32);
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__clear_timeout));
    bufp->fullBit(oldp+1041,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1042,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__hand_shake_done));
    bufp->fullBit(oldp+1043,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req));
    bufp->fullBit(oldp+1044,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
    bufp->fullIData(oldp+1045,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
    bufp->fullIData(oldp+1046,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
    bufp->fullIData(oldp+1047,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
    bufp->fullBit(oldp+1048,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_order_req));
    bufp->fullBit(oldp+1049,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1050,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
    bufp->fullCData(oldp+1051,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__state),7);
    bufp->fullCData(oldp+1052,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+1053,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+1054,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
    bufp->fullIData(oldp+1055,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+1056,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size),16);
    bufp->fullBit(oldp+1057,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [0U], 0x60U))));
    bufp->fullIData(oldp+1058,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1059,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1060,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1061,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1062,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [1U], 0x60U))));
    bufp->fullIData(oldp+1063,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1064,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1065,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1066,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1067,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [2U], 0x60U))));
    bufp->fullIData(oldp+1068,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1069,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1070,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1071,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1072,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [3U], 0x60U))));
    bufp->fullIData(oldp+1073,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1074,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1075,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1076,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1077,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [4U], 0x60U))));
    bufp->fullIData(oldp+1078,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1079,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1080,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1081,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1082,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [5U], 0x60U))));
    bufp->fullIData(oldp+1083,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1084,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1085,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1086,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1087,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [6U], 0x60U))));
    bufp->fullIData(oldp+1088,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1089,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1090,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1091,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1092,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [7U], 0x60U))));
    bufp->fullIData(oldp+1093,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1094,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1095,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1096,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1097,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [8U], 0x60U))));
    bufp->fullIData(oldp+1098,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1099,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1100,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1101,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1102,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [9U], 0x60U))));
    bufp->fullIData(oldp+1103,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1104,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1105,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1106,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+1107,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1108,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
    bufp->fullIData(oldp+1109,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
    bufp->fullCData(oldp+1110,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
    bufp->fullCData(oldp+1111,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
    bufp->fullSData(oldp+1112,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
    bufp->fullSData(oldp+1113,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
    bufp->fullBit(oldp+1114,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_mask));
    bufp->fullBit(oldp+1115,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_found));
    bufp->fullCData(oldp+1116,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+1117,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
    bufp->fullSData(oldp+1118,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
    bufp->fullCData(oldp+1121,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+1122,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+1123,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+1124,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+1125,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+1126,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+1127,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+1128,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+1129,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+1130,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+1131,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+1132,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullBit(oldp+1133,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__clear));
    bufp->fullBit(oldp+1134,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_enable));
    bufp->fullSData(oldp+1135,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__din),10);
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__valid));
    bufp->fullCData(oldp+1137,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
    bufp->fullIData(oldp+1138,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+1139,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
    bufp->fullBit(oldp+1140,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__valid));
    bufp->fullCData(oldp+1141,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
    bufp->fullIData(oldp+1142,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1143,(vlSymsp->TOP__ether_simulation.seq_num_clt),32);
    bufp->fullIData(oldp+1144,(vlSymsp->TOP__ether_simulation.rcv_next_clt),32);
    bufp->fullIData(oldp+1145,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1146,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num),32);
    bufp->fullBit(oldp+1147,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__handshake_done_int));
    bufp->fullIData(oldp+1148,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+1149,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__out_order_req_int));
    bufp->fullBit(oldp+1150,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake_done));
    bufp->fullIData(oldp+1151,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1152,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__handshake_done));
    bufp->fullIData(oldp+1153,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+1154,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order_req));
    bufp->fullIData(oldp+1155,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1156,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num),32);
    bufp->fullBit(oldp+1157,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__clear_timeout));
    bufp->fullBit(oldp+1158,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1159,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__hand_shake_done));
    bufp->fullBit(oldp+1160,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req));
    bufp->fullBit(oldp+1161,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
    bufp->fullIData(oldp+1162,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
    bufp->fullIData(oldp+1163,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
    bufp->fullIData(oldp+1164,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
    bufp->fullBit(oldp+1165,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order_req));
    bufp->fullBit(oldp+1166,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
    bufp->fullBit(oldp+1167,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
    bufp->fullCData(oldp+1168,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__state),7);
    bufp->fullCData(oldp+1169,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+1170,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+1171,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
    bufp->fullIData(oldp+1172,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+1173,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size),16);
    bufp->fullBit(oldp+1174,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [0U], 0x60U))));
    bufp->fullIData(oldp+1175,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1176,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1177,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1178,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1179,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [1U], 0x60U))));
    bufp->fullIData(oldp+1180,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1181,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1182,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1183,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1184,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [2U], 0x60U))));
    bufp->fullIData(oldp+1185,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1186,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1187,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1188,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1189,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [3U], 0x60U))));
    bufp->fullIData(oldp+1190,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1191,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1192,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1193,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1194,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [4U], 0x60U))));
    bufp->fullIData(oldp+1195,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1196,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1197,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1198,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1199,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [5U], 0x60U))));
    bufp->fullIData(oldp+1200,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1201,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1202,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1203,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1204,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [6U], 0x60U))));
    bufp->fullIData(oldp+1205,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1206,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1207,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1208,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1209,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [7U], 0x60U))));
    bufp->fullIData(oldp+1210,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1211,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1212,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1213,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1214,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [8U], 0x60U))));
    bufp->fullIData(oldp+1215,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1216,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1217,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1218,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+1219,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                  [9U], 0x60U))));
    bufp->fullIData(oldp+1220,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+1221,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                           [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+1222,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+1223,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                      [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+1224,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
    bufp->fullIData(oldp+1225,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
    bufp->fullIData(oldp+1226,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
    bufp->fullCData(oldp+1227,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
    bufp->fullCData(oldp+1228,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
    bufp->fullSData(oldp+1229,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
    bufp->fullSData(oldp+1230,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
    bufp->fullBit(oldp+1231,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_mask));
    bufp->fullBit(oldp+1232,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_found));
    bufp->fullCData(oldp+1233,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+1234,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
    bufp->fullSData(oldp+1235,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
    bufp->fullIData(oldp+1236,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
    bufp->fullIData(oldp+1237,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
    bufp->fullCData(oldp+1238,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+1239,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+1240,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+1241,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+1242,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+1243,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+1244,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+1245,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+1246,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+1247,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+1248,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+1249,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullBit(oldp+1250,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__clear));
    bufp->fullBit(oldp+1251,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_enable));
    bufp->fullSData(oldp+1252,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__din),10);
    bufp->fullBit(oldp+1253,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__valid));
    bufp->fullCData(oldp+1254,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
    bufp->fullIData(oldp+1255,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+1256,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
    bufp->fullBit(oldp+1257,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__valid));
    bufp->fullCData(oldp+1258,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
    bufp->fullIData(oldp+1259,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1260,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1261,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1262,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_reg),32);
    bufp->fullIData(oldp+1263,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1264,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1265,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_reg),32);
    bufp->fullSData(oldp+1266,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_pl),16);
    bufp->fullSData(oldp+1267,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
    bufp->fullIData(oldp+1268,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    bufp->fullSData(oldp+1269,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_pl),16);
    bufp->fullSData(oldp+1270,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
    bufp->fullIData(oldp+1271,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+1272,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1273,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1274,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_reg),32);
    bufp->fullIData(oldp+1275,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_out),32);
    bufp->fullIData(oldp+1276,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+1277,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_reg),32);
    bufp->fullSData(oldp+1278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_checksum_out),16);
    bufp->fullSData(oldp+1279,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
    bufp->fullIData(oldp+1280,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+1281,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    bufp->fullSData(oldp+1282,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_checksum_out),16);
    bufp->fullSData(oldp+1283,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
    bufp->fullIData(oldp+1284,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+1285,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    bufp->fullBit(oldp+1286,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__timeout_flag));
    bufp->fullBit(oldp+1287,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
    bufp->fullIData(oldp+1288,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_out),32);
    bufp->fullBit(oldp+1289,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    bufp->fullBit(oldp+1290,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__timeout_flag));
    bufp->fullBit(oldp+1291,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
    bufp->fullIData(oldp+1292,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_out),32);
    bufp->fullBit(oldp+1293,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    bufp->fullQData(oldp+1294,(vlSymsp->TOP__ether_simulation.xgmii_txd_svr),64);
    bufp->fullCData(oldp+1296,(vlSymsp->TOP__ether_simulation.xgmii_txc_svr),8);
    bufp->fullQData(oldp+1297,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_clt_cvrt),64);
    bufp->fullCData(oldp+1299,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_clt_cvrt),8);
    bufp->fullQData(oldp+1300,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1302,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1303,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_send));
    bufp->fullQData(oldp+1304,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1306,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxc),64);
    bufp->fullQData(oldp+1308,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+1310,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc),8);
    bufp->fullBit(oldp+1311,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__end_valid));
    bufp->fullCData(oldp+1312,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_offset),3);
    bufp->fullCData(oldp+1313,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__shift_bits),6);
    bufp->fullCData(oldp+1314,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__byte_END),8);
    bufp->fullQData(oldp+1315,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1317,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1318,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1319,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd_l),64);
    bufp->fullCData(oldp+1321,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc_l),8);
    bufp->fullCData(oldp+1322,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__state),7);
    bufp->fullSData(oldp+1323,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__len_counter),16);
    bufp->fullBit(oldp+1324,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1325,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+1327,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxc),8);
    bufp->fullQData(oldp+1328,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxd),64);
    bufp->fullCData(oldp+1330,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxc),8);
    bufp->fullCData(oldp+1331,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__din),8);
    bufp->fullBit(oldp+1332,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__valid));
    bufp->fullCData(oldp+1333,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
    bufp->fullIData(oldp+1334,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullQData(oldp+1335,(vlSymsp->TOP__ether_simulation.xgmii_txd_clt),64);
    bufp->fullCData(oldp+1337,(vlSymsp->TOP__ether_simulation.xgmii_txc_clt),8);
    bufp->fullQData(oldp+1338,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_svr_cvrt),64);
    bufp->fullCData(oldp+1340,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_svr_cvrt),8);
    bufp->fullQData(oldp+1341,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1343,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxc),64);
    bufp->fullQData(oldp+1345,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1347,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1348,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_send));
    bufp->fullQData(oldp+1349,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+1351,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc),8);
    bufp->fullBit(oldp+1352,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__end_valid));
    bufp->fullCData(oldp+1353,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_offset),3);
    bufp->fullCData(oldp+1354,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__shift_bits),6);
    bufp->fullCData(oldp+1355,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__byte_END),8);
    bufp->fullQData(oldp+1356,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd),64);
    bufp->fullCData(oldp+1358,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc),8);
    bufp->fullBit(oldp+1359,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1360,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd_l),64);
    bufp->fullCData(oldp+1362,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc_l),8);
    bufp->fullCData(oldp+1363,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__state),7);
    bufp->fullSData(oldp+1364,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__len_counter),16);
    bufp->fullBit(oldp+1365,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_send));
    bufp->fullQData(oldp+1366,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+1368,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxc),8);
    bufp->fullQData(oldp+1369,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxd),64);
    bufp->fullCData(oldp+1371,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+1372,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__din),8);
    bufp->fullBit(oldp+1373,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__valid));
    bufp->fullCData(oldp+1374,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
    bufp->fullIData(oldp+1375,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+1376,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_tx_last));
    bufp->fullQData(oldp+1377,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1379,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__tt_len_data),16);
    bufp->fullQData(oldp+1380,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1382,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1383,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_last));
    bufp->fullQData(oldp+1384,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1386,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1387,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_last));
    bufp->fullCData(oldp+1388,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_state),3);
    bufp->fullIData(oldp+1389,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    bufp->fullBit(oldp+1390,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_tx_last));
    bufp->fullQData(oldp+1391,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1393,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__tt_len_data),16);
    bufp->fullQData(oldp+1394,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1396,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1397,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_last));
    bufp->fullQData(oldp+1398,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_transmit),64);
    bufp->fullSData(oldp+1400,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__tt_len_data),16);
    bufp->fullBit(oldp+1401,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_last));
    bufp->fullCData(oldp+1402,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_state),3);
    bufp->fullIData(oldp+1403,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    bufp->fullBit(oldp+1404,(vlSymsp->TOP__ether_simulation.__PVT__wr_FIFO_valid_svr));
    bufp->fullBit(oldp+1405,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_valid));
    bufp->fullQData(oldp+1406,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+1408,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_valid_int));
    bufp->fullBit(oldp+1409,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_last_int));
    bufp->fullSData(oldp+1410,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent_int),16);
    bufp->fullBit(oldp+1411,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__re_trans_int));
    bufp->fullBit(oldp+1412,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+1413,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1414,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1416,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent),16);
    bufp->fullQData(oldp+1417,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_payload),64);
    bufp->fullBit(oldp+1419,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+1420,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_last));
    bufp->fullSData(oldp+1421,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1422,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__re_trans));
    bufp->fullBit(oldp+1423,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+1424,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1425,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1427,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1428,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
    bufp->fullBit(oldp+1429,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__re_trans));
    bufp->fullSData(oldp+1430,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
    bufp->fullCData(oldp+1431,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_str),4);
    bufp->fullCData(oldp+1432,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_end),4);
    bufp->fullCData(oldp+1433,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__flush_ptr),4);
    bufp->fullSData(oldp+1434,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+1435,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
    bufp->fullCData(oldp+1436,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_state),2);
    bufp->fullCData(oldp+1437,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_state),2);
    bufp->fullBit(oldp+1438,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
    bufp->fullIData(oldp+1439,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+1440,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+1441,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+1442,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+1443,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+1444,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
    bufp->fullIData(oldp+1445,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+1446,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+1447,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+1448,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+1449,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+1450,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
    bufp->fullIData(oldp+1451,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+1452,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+1453,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+1454,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+1455,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+1456,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
    bufp->fullIData(oldp+1457,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+1458,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+1459,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+1460,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+1461,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+1462,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
    bufp->fullIData(oldp+1463,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+1464,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+1465,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+1466,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+1467,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+1468,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
    bufp->fullIData(oldp+1469,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+1470,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+1471,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+1472,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+1473,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+1474,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
    bufp->fullIData(oldp+1475,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+1476,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+1477,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+1478,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+1479,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+1480,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
    bufp->fullIData(oldp+1481,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+1482,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+1483,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+1484,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+1485,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+1486,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
    bufp->fullIData(oldp+1487,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+1488,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+1489,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+1490,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+1491,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+1492,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
    bufp->fullIData(oldp+1493,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+1494,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+1495,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+1496,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+1497,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+1498,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
    bufp->fullIData(oldp+1499,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+1500,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+1501,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+1502,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+1503,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+1504,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
    bufp->fullIData(oldp+1505,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+1506,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+1507,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+1508,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+1509,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+1510,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
    bufp->fullIData(oldp+1511,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+1512,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+1513,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+1514,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+1515,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+1516,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
    bufp->fullIData(oldp+1517,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+1518,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+1519,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+1520,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+1521,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+1522,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
    bufp->fullIData(oldp+1523,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+1524,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+1525,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+1526,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+1527,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+1528,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
    bufp->fullIData(oldp+1529,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+1530,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+1531,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+1532,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+1533,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+1534,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__full));
    bufp->fullBit(oldp+1535,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__empty));
    bufp->fullCData(oldp+1536,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+1537,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
    bufp->fullCData(oldp+1538,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_ptr),4);
    bufp->fullCData(oldp+1539,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wrt_ptr),4);
    bufp->fullQData(oldp+1540,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+1542,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+1544,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+1546,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+1548,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+1550,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+1552,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+1554,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+1556,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+1558,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+1560,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+1562,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+1564,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+1566,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+1568,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+1570,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+1572,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req_l));
    bufp->fullBit(oldp+1573,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+1574,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num_l),32);
    bufp->fullBit(oldp+1575,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_upd));
    bufp->fullSData(oldp+1576,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+1577,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_l),16);
    bufp->fullBit(oldp+1578,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__re_trans));
    bufp->fullBit(oldp+1579,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+1580,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1581,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullIData(oldp+1583,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    bufp->fullBit(oldp+1584,(vlSymsp->TOP__ether_simulation.wr_FIFO_valid_clt));
    bufp->fullBit(oldp+1585,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_valid));
    bufp->fullQData(oldp+1586,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+1588,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_valid_int));
    bufp->fullBit(oldp+1589,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_last_int));
    bufp->fullSData(oldp+1590,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent_int),16);
    bufp->fullBit(oldp+1591,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__re_trans_int));
    bufp->fullBit(oldp+1592,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+1593,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1594,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1596,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent),16);
    bufp->fullQData(oldp+1597,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_payload),64);
    bufp->fullBit(oldp+1599,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+1600,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_last));
    bufp->fullSData(oldp+1601,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1602,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__re_trans));
    bufp->fullBit(oldp+1603,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+1604,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1605,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+1607,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+1608,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
    bufp->fullBit(oldp+1609,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__re_trans));
    bufp->fullSData(oldp+1610,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
    bufp->fullCData(oldp+1611,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_str),4);
    bufp->fullCData(oldp+1612,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_end),4);
    bufp->fullCData(oldp+1613,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__flush_ptr),4);
    bufp->fullSData(oldp+1614,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+1615,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
    bufp->fullCData(oldp+1616,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_state),2);
    bufp->fullCData(oldp+1617,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_state),2);
    bufp->fullBit(oldp+1618,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
    bufp->fullIData(oldp+1619,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+1620,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+1621,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+1622,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+1623,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+1624,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
    bufp->fullIData(oldp+1625,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+1626,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+1627,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+1628,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+1629,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+1630,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
    bufp->fullIData(oldp+1631,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+1632,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+1633,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+1634,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+1635,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+1636,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
    bufp->fullIData(oldp+1637,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+1638,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+1639,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+1640,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+1641,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+1642,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
    bufp->fullIData(oldp+1643,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+1644,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+1645,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+1646,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+1647,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+1648,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
    bufp->fullIData(oldp+1649,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+1650,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+1651,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+1652,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+1653,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+1654,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
    bufp->fullIData(oldp+1655,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+1656,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+1657,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+1658,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+1659,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+1660,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
    bufp->fullIData(oldp+1661,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+1662,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+1663,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+1664,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+1665,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+1666,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
    bufp->fullIData(oldp+1667,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+1668,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+1669,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+1670,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+1671,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+1672,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
    bufp->fullIData(oldp+1673,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+1674,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+1675,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+1676,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+1677,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+1678,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
    bufp->fullIData(oldp+1679,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+1680,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+1681,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+1682,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+1683,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+1684,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
    bufp->fullIData(oldp+1685,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+1686,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+1687,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+1688,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+1689,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+1690,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
    bufp->fullIData(oldp+1691,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+1692,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+1693,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+1694,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+1695,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+1696,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
    bufp->fullIData(oldp+1697,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+1698,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+1699,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+1700,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+1701,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+1702,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
    bufp->fullIData(oldp+1703,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+1704,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+1705,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+1706,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+1707,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+1708,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
    bufp->fullIData(oldp+1709,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+1710,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+1711,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+1712,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+1713,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+1714,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__full));
    bufp->fullBit(oldp+1715,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__empty));
    bufp->fullCData(oldp+1716,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+1717,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
    bufp->fullCData(oldp+1718,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_ptr),4);
    bufp->fullCData(oldp+1719,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wrt_ptr),4);
    bufp->fullQData(oldp+1720,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+1722,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+1724,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+1726,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+1728,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+1730,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+1732,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+1734,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+1736,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+1738,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+1740,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+1742,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+1744,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+1746,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+1748,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+1750,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+1752,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req_l));
    bufp->fullBit(oldp+1753,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+1754,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num_l),32);
    bufp->fullBit(oldp+1755,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_upd));
    bufp->fullSData(oldp+1756,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+1757,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_l),16);
    bufp->fullBit(oldp+1758,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__re_trans));
    bufp->fullBit(oldp+1759,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+1760,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+1761,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullIData(oldp+1763,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    bufp->fullBit(oldp+1764,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_valid));
    bufp->fullBit(oldp+1765,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_rx_last));
    bufp->fullSData(oldp+1766,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+1767,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_payload),64);
    bufp->fullCData(oldp+1769,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_bytes_rcv_len),8);
    bufp->fullBit(oldp+1770,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_valid));
    bufp->fullBit(oldp+1771,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_last));
    bufp->fullQData(oldp+1772,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_payload),64);
    bufp->fullCData(oldp+1774,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
    bufp->fullSData(oldp+1775,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+1776,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_udp));
    bufp->fullBit(oldp+1777,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_tcp));
    bufp->fullCData(oldp+1778,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__state),4);
    bufp->fullSData(oldp+1779,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_checksum),16);
    bufp->fullSData(oldp+1780,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv),16);
    bufp->fullSData(oldp+1781,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__dst_addr),16);
    bufp->fullSData(oldp+1782,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_len),16);
    bufp->fullBit(oldp+1783,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_valid));
    bufp->fullSData(oldp+1784,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+1785,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_payload),64);
    bufp->fullBit(oldp+1787,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_last));
    bufp->fullQData(oldp+1788,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
    bufp->fullBit(oldp+1790,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_last));
    bufp->fullBit(oldp+1791,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
    bufp->fullSData(oldp+1792,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+1793,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_valid));
    bufp->fullBit(oldp+1794,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_rx_last));
    bufp->fullSData(oldp+1795,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+1796,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_payload),64);
    bufp->fullCData(oldp+1798,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_bytes_rcv_len),8);
    bufp->fullBit(oldp+1799,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_valid));
    bufp->fullBit(oldp+1800,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_last));
    bufp->fullQData(oldp+1801,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_payload),64);
    bufp->fullCData(oldp+1803,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
    bufp->fullSData(oldp+1804,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+1805,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_udp));
    bufp->fullBit(oldp+1806,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_tcp));
    bufp->fullCData(oldp+1807,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__state),4);
    bufp->fullSData(oldp+1808,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_checksum),16);
    bufp->fullSData(oldp+1809,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv),16);
    bufp->fullSData(oldp+1810,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__dst_addr),16);
    bufp->fullSData(oldp+1811,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_len),16);
    bufp->fullBit(oldp+1812,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_valid));
    bufp->fullSData(oldp+1813,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+1814,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_payload),64);
    bufp->fullBit(oldp+1816,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_last));
    bufp->fullQData(oldp+1817,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
    bufp->fullBit(oldp+1819,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_last));
    bufp->fullBit(oldp+1820,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
    bufp->fullSData(oldp+1821,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+1822,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+1824,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_valid));
    bufp->fullCData(oldp+1825,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_rcv_len),8);
    bufp->fullBit(oldp+1826,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_valid));
    bufp->fullQData(oldp+1827,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+1829,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv_len),8);
    bufp->fullQData(oldp+1830,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+1832,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_valid));
    bufp->fullCData(oldp+1833,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_len),8);
    bufp->fullSData(oldp+1834,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+1835,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_found));
    bufp->fullBit(oldp+1836,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_valid));
    bufp->fullCData(oldp+1837,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_lane),3);
    bufp->fullSData(oldp+1838,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_rxc),16);
    bufp->fullIData(oldp+1839,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_check),32);
    bufp->fullWData(oldp+1840,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_store),128);
    bufp->fullIData(oldp+1844,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame),32);
    bufp->fullIData(oldp+1845,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__rg),32);
    bufp->fullQData(oldp+1846,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+1848,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_delay));
    bufp->fullBit(oldp+1849,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__soft_dl));
    bufp->fullQData(oldp+1850,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+1852,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv),8);
    bufp->fullCData(oldp+1853,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+1854,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__state),6);
    bufp->fullQData(oldp+1855,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1857,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+1859,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1861,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+1863,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__valid));
    bufp->fullQData(oldp+1864,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+1866,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_valid));
    bufp->fullCData(oldp+1867,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_rcv_len),8);
    bufp->fullBit(oldp+1868,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_valid));
    bufp->fullQData(oldp+1869,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+1871,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv_len),8);
    bufp->fullQData(oldp+1872,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+1874,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_valid));
    bufp->fullCData(oldp+1875,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_len),8);
    bufp->fullSData(oldp+1876,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+1877,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_found));
    bufp->fullBit(oldp+1878,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_valid));
    bufp->fullCData(oldp+1879,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_lane),3);
    bufp->fullSData(oldp+1880,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_rxc),16);
    bufp->fullIData(oldp+1881,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_check),32);
    bufp->fullWData(oldp+1882,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_store),128);
    bufp->fullIData(oldp+1886,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame),32);
    bufp->fullIData(oldp+1887,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__rg),32);
    bufp->fullQData(oldp+1888,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+1890,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_delay));
    bufp->fullBit(oldp+1891,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__soft_dl));
    bufp->fullQData(oldp+1892,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+1894,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv),8);
    bufp->fullCData(oldp+1895,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+1896,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__state),6);
    bufp->fullQData(oldp+1897,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1899,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+1901,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+1903,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+1905,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__valid));
    bufp->fullBit(oldp+1906,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+1907,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+1908,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+1910,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_last));
    bufp->fullSData(oldp+1911,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__len_data),16);
    bufp->fullQData(oldp+1912,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_transmit),64);
    bufp->fullBit(oldp+1914,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+1915,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+1916,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+1918,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_up));
    bufp->fullIData(oldp+1919,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+1920,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_up));
    bufp->fullIData(oldp+1921,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+1922,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
    bufp->fullBit(oldp+1923,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+1924,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+1925,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
    bufp->fullIData(oldp+1927,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+1928,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__state),7);
    bufp->fullQData(oldp+1929,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
    bufp->fullBit(oldp+1931,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_up));
    bufp->fullIData(oldp+1932,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+1933,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+1934,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+1935,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+1937,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_last));
    bufp->fullSData(oldp+1938,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__len_data),16);
    bufp->fullQData(oldp+1939,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_transmit),64);
    bufp->fullBit(oldp+1941,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+1942,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+1943,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+1945,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_up));
    bufp->fullIData(oldp+1946,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+1947,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_up));
    bufp->fullIData(oldp+1948,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+1949,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
    bufp->fullBit(oldp+1950,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
    bufp->fullSData(oldp+1951,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+1952,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
    bufp->fullIData(oldp+1954,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+1955,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__state),7);
    bufp->fullQData(oldp+1956,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
    bufp->fullBit(oldp+1958,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_up));
    bufp->fullIData(oldp+1959,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+1960,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nw_segment));
    bufp->fullBit(oldp+1961,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+1962,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_data_rx_int),64);
    bufp->fullIData(oldp+1964,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_num_int),32);
    bufp->fullBit(oldp+1965,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+1966,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nw_segment));
    bufp->fullBit(oldp+1967,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_t_last));
    bufp->fullQData(oldp+1968,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_data_rx),64);
    bufp->fullBit(oldp+1970,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nw_segment));
    bufp->fullBit(oldp+1971,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+1972,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+1974,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_num),32);
    bufp->fullBit(oldp+1975,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+1976,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_data));
    bufp->fullCData(oldp+1977,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_rx),8);
    bufp->fullCData(oldp+1978,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_rcv),8);
    bufp->fullIData(oldp+1979,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+1980,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+1981,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_rx),4);
    bufp->fullSData(oldp+1982,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+1983,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+1984,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+1985,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid));
    bufp->fullIData(oldp+1986,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num),32);
    bufp->fullBit(oldp+1987,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+1988,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
    bufp->fullCData(oldp+1989,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+1990,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+1991,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+1992,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
    bufp->fullSData(oldp+1993,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+1994,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+1995,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
    bufp->fullCData(oldp+1996,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
    bufp->fullQData(oldp+1997,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
    bufp->fullBit(oldp+1999,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
    bufp->fullBit(oldp+2000,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
    bufp->fullBit(oldp+2001,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
    bufp->fullIData(oldp+2002,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+2003,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__state),3);
    bufp->fullBit(oldp+2004,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_data));
    bufp->fullCData(oldp+2005,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+2006,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2007,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2008,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2009,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2010,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2011,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+2012,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_last));
    bufp->fullCData(oldp+2013,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    bufp->fullBit(oldp+2014,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nw_segment));
    bufp->fullIData(oldp+2015,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2016,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2017,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
    bufp->fullBit(oldp+2018,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
    bufp->fullBit(oldp+2019,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
    bufp->fullBit(oldp+2020,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
    bufp->fullBit(oldp+2021,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
    bufp->fullBit(oldp+2022,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
    bufp->fullBit(oldp+2023,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
    bufp->fullBit(oldp+2024,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    bufp->fullBit(oldp+2025,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nw_segment));
    bufp->fullBit(oldp+2026,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+2027,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_data_rx_int),64);
    bufp->fullIData(oldp+2029,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_num_int),32);
    bufp->fullBit(oldp+2030,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+2031,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nw_segment));
    bufp->fullBit(oldp+2032,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_t_last));
    bufp->fullQData(oldp+2033,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_data_rx),64);
    bufp->fullBit(oldp+2035,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nw_segment));
    bufp->fullBit(oldp+2036,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_rx_last));
    bufp->fullQData(oldp+2037,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+2039,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2040,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2041,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_data));
    bufp->fullCData(oldp+2042,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_rx),8);
    bufp->fullCData(oldp+2043,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_rcv),8);
    bufp->fullIData(oldp+2044,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2045,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2046,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2047,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2048,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2049,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+2050,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid));
    bufp->fullIData(oldp+2051,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2052,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2053,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
    bufp->fullCData(oldp+2054,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+2055,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2056,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2057,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2058,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2059,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2060,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
    bufp->fullCData(oldp+2061,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
    bufp->fullQData(oldp+2062,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
    bufp->fullBit(oldp+2064,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
    bufp->fullBit(oldp+2065,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
    bufp->fullBit(oldp+2066,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
    bufp->fullIData(oldp+2067,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+2068,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__state),3);
    bufp->fullBit(oldp+2069,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_data));
    bufp->fullCData(oldp+2070,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+2071,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+2072,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+2073,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
    bufp->fullSData(oldp+2074,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+2075,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+2076,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
    bufp->fullBit(oldp+2077,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_last));
    bufp->fullCData(oldp+2078,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    bufp->fullBit(oldp+2079,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nw_segment));
    bufp->fullIData(oldp+2080,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
    bufp->fullBit(oldp+2081,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+2082,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
    bufp->fullBit(oldp+2083,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
    bufp->fullBit(oldp+2084,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
    bufp->fullBit(oldp+2085,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
    bufp->fullBit(oldp+2086,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
    bufp->fullBit(oldp+2087,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
    bufp->fullBit(oldp+2088,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
    bufp->fullBit(oldp+2089,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    bufp->fullSData(oldp+2090,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2091,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2092,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->fullSData(oldp+2093,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2094,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->fullSData(oldp+2095,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2096,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2097,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->fullSData(oldp+2098,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+2099,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->fullCData(oldp+2100,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_offset),4);
    bufp->fullWData(oldp+2101,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_grap),128);
    bufp->fullSData(oldp+2105,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__din),16);
    bufp->fullBit(oldp+2106,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__valid));
    bufp->fullCData(oldp+2107,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
    bufp->fullIData(oldp+2108,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+2109,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_flush));
    bufp->fullBit(oldp+2110,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_flush));
    bufp->fullCData(oldp+2111,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nstate),4);
    bufp->fullSData(oldp+2112,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_checksum),16);
    bufp->fullQData(oldp+2113,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_payload),64);
    bufp->fullSData(oldp+2115,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nbytes_rcv),16);
    bufp->fullBit(oldp+2116,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_en));
    bufp->fullBit(oldp+2117,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_clear));
    bufp->fullQData(oldp+2118,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_in),64);
    bufp->fullIData(oldp+2120,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_final),17);
    bufp->fullSData(oldp+2121,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ndst_addr),16);
    bufp->fullSData(oldp+2122,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_len),16);
    bufp->fullCData(oldp+2123,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
    bufp->fullSData(oldp+2124,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_pseuder),16);
    bufp->fullIData(oldp+2125,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__temp),20);
    bufp->fullBit(oldp+2126,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_valid));
    bufp->fullBit(oldp+2127,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_last));
    bufp->fullBit(oldp+2128,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_udp));
    bufp->fullBit(oldp+2129,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_tcp));
    bufp->fullSData(oldp+2130,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__total_len),16);
    bufp->fullSData(oldp+2131,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__frags_flag),16);
    bufp->fullCData(oldp+2132,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ttl),8);
    bufp->fullCData(oldp+2133,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__flags),3);
    bufp->fullSData(oldp+2134,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__fragoff),13);
    bufp->fullCData(oldp+2135,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__test_valid),4);
    bufp->fullCData(oldp+2136,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ip_version),4);
    bufp->fullBit(oldp+2137,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_src_addr));
    bufp->fullBit(oldp+2138,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_ip_version_valid));
    bufp->fullBit(oldp+2139,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_flush));
    bufp->fullBit(oldp+2140,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
    bufp->fullBit(oldp+2141,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
    bufp->fullBit(oldp+2142,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__clear));
    bufp->fullQData(oldp+2143,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
    bufp->fullIData(oldp+2145,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+2146,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__temp),20);
    bufp->fullCData(oldp+2147,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_offset),4);
    bufp->fullWData(oldp+2148,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_grap),128);
    bufp->fullSData(oldp+2152,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__din),16);
    bufp->fullBit(oldp+2153,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__valid));
    bufp->fullCData(oldp+2154,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
    bufp->fullIData(oldp+2155,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+2156,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_flush));
    bufp->fullBit(oldp+2157,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_flush));
    bufp->fullCData(oldp+2158,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nstate),4);
    bufp->fullSData(oldp+2159,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_checksum),16);
    bufp->fullQData(oldp+2160,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_payload),64);
    bufp->fullSData(oldp+2162,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nbytes_rcv),16);
    bufp->fullBit(oldp+2163,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_en));
    bufp->fullBit(oldp+2164,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_clear));
    bufp->fullQData(oldp+2165,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_in),64);
    bufp->fullIData(oldp+2167,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_final),17);
    bufp->fullSData(oldp+2168,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ndst_addr),16);
    bufp->fullSData(oldp+2169,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_len),16);
    bufp->fullCData(oldp+2170,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
    bufp->fullSData(oldp+2171,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_pseuder),16);
    bufp->fullIData(oldp+2172,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__temp),20);
    bufp->fullBit(oldp+2173,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_valid));
    bufp->fullBit(oldp+2174,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_last));
    bufp->fullBit(oldp+2175,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_udp));
    bufp->fullBit(oldp+2176,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_tcp));
    bufp->fullSData(oldp+2177,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__total_len),16);
    bufp->fullSData(oldp+2178,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__frags_flag),16);
    bufp->fullCData(oldp+2179,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ttl),8);
    bufp->fullCData(oldp+2180,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__flags),3);
    bufp->fullSData(oldp+2181,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__fragoff),13);
    bufp->fullCData(oldp+2182,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__test_valid),4);
    bufp->fullCData(oldp+2183,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ip_version),4);
    bufp->fullBit(oldp+2184,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_src_addr));
    bufp->fullBit(oldp+2185,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_ip_version_valid));
    bufp->fullBit(oldp+2186,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_flush));
    bufp->fullBit(oldp+2187,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
    bufp->fullBit(oldp+2188,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
    bufp->fullBit(oldp+2189,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__clear));
    bufp->fullQData(oldp+2190,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
    bufp->fullIData(oldp+2192,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+2193,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__temp),20);
    bufp->fullBit(oldp+2194,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_send));
    bufp->fullBit(oldp+2195,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_send));
    bufp->fullCData(oldp+2196,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_state),3);
    bufp->fullQData(oldp+2197,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_transmit_l),64);
    bufp->fullBit(oldp+2199,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chk_sum_valid));
    bufp->fullIData(oldp+2200,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__temp),20);
    bufp->fullIData(oldp+2201,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
    bufp->fullSData(oldp+2202,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__ntt_len_data),16);
    bufp->fullSData(oldp+2203,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chksum_rslt),16);
    bufp->fullBit(oldp+2204,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_send));
    bufp->fullBit(oldp+2205,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    bufp->fullBit(oldp+2206,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_send));
    bufp->fullBit(oldp+2207,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_send));
    bufp->fullCData(oldp+2208,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_state),3);
    bufp->fullQData(oldp+2209,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_transmit_l),64);
    bufp->fullBit(oldp+2211,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chk_sum_valid));
    bufp->fullIData(oldp+2212,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__temp),20);
    bufp->fullIData(oldp+2213,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
    bufp->fullSData(oldp+2214,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__ntt_len_data),16);
    bufp->fullSData(oldp+2215,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chksum_rslt),16);
    bufp->fullBit(oldp+2216,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_send));
    bufp->fullBit(oldp+2217,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    bufp->fullBit(oldp+2218,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_flush_int));
    bufp->fullBit(oldp+2219,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush));
    bufp->fullBit(oldp+2220,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_flush));
    bufp->fullBit(oldp+2221,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
    bufp->fullCData(oldp+2222,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
    bufp->fullIData(oldp+2223,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
    bufp->fullIData(oldp+2224,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
    bufp->fullCData(oldp+2225,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
    bufp->fullSData(oldp+2226,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
    bufp->fullSData(oldp+2227,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
    bufp->fullSData(oldp+2228,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
    bufp->fullIData(oldp+2229,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
    bufp->fullSData(oldp+2230,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
    bufp->fullQData(oldp+2231,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
    bufp->fullIData(oldp+2233,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__temp),20);
    bufp->fullBit(oldp+2234,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
    bufp->fullBit(oldp+2235,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
    bufp->fullBit(oldp+2236,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
    bufp->fullBit(oldp+2237,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
    bufp->fullCData(oldp+2238,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+2239,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
    bufp->fullBit(oldp+2240,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    bufp->fullBit(oldp+2241,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__debug));
    bufp->fullSData(oldp+2242,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->fullSData(oldp+2243,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
    bufp->fullSData(oldp+2244,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
    bufp->fullCData(oldp+2245,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
    bufp->fullCData(oldp+2246,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
    bufp->fullSData(oldp+2247,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
    bufp->fullBit(oldp+2248,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__valid));
    bufp->fullCData(oldp+2249,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
    bufp->fullIData(oldp+2250,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2251,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
    bufp->fullBit(oldp+2252,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__valid));
    bufp->fullCData(oldp+2253,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
    bufp->fullIData(oldp+2254,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2255,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
    bufp->fullBit(oldp+2256,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__valid));
    bufp->fullCData(oldp+2257,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
    bufp->fullIData(oldp+2258,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+2259,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2260,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx_out),32);
    bufp->fullCData(oldp+2261,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+2262,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2263,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+2264,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_tx),4);
    bufp->fullSData(oldp+2265,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+2266,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_tx),16);
    bufp->fullIData(oldp+2267,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_num_tx),32);
    bufp->fullCData(oldp+2268,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+2269,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2270,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+2271,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
    bufp->fullSData(oldp+2272,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+2273,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+2274,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+2275,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2276,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+2277,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
    bufp->fullSData(oldp+2278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+2279,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
    bufp->fullBit(oldp+2280,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
    bufp->fullBit(oldp+2281,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
    bufp->fullBit(oldp+2282,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
    bufp->fullBit(oldp+2283,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
    bufp->fullBit(oldp+2284,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
    bufp->fullBit(oldp+2285,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
    bufp->fullBit(oldp+2286,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
    bufp->fullBit(oldp+2287,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
    bufp->fullBit(oldp+2288,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    bufp->fullBit(oldp+2289,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_flush_int));
    bufp->fullBit(oldp+2290,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush));
    bufp->fullBit(oldp+2291,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_flush));
    bufp->fullBit(oldp+2292,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
    bufp->fullCData(oldp+2293,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
    bufp->fullIData(oldp+2294,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
    bufp->fullIData(oldp+2295,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
    bufp->fullCData(oldp+2296,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
    bufp->fullSData(oldp+2297,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
    bufp->fullSData(oldp+2298,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
    bufp->fullSData(oldp+2299,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
    bufp->fullIData(oldp+2300,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
    bufp->fullSData(oldp+2301,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
    bufp->fullQData(oldp+2302,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
    bufp->fullIData(oldp+2304,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__temp),20);
    bufp->fullBit(oldp+2305,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
    bufp->fullBit(oldp+2306,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
    bufp->fullBit(oldp+2307,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
    bufp->fullBit(oldp+2308,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
    bufp->fullCData(oldp+2309,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+2310,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
    bufp->fullBit(oldp+2311,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    bufp->fullBit(oldp+2312,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__debug));
    bufp->fullSData(oldp+2313,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->fullSData(oldp+2314,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
    bufp->fullSData(oldp+2315,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
    bufp->fullCData(oldp+2316,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
    bufp->fullCData(oldp+2317,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
    bufp->fullSData(oldp+2318,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
    bufp->fullBit(oldp+2319,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__valid));
    bufp->fullCData(oldp+2320,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
    bufp->fullIData(oldp+2321,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2322,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
    bufp->fullBit(oldp+2323,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__valid));
    bufp->fullCData(oldp+2324,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
    bufp->fullIData(oldp+2325,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+2326,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
    bufp->fullBit(oldp+2327,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__valid));
    bufp->fullCData(oldp+2328,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
    bufp->fullIData(oldp+2329,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+2330,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2331,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx_out),32);
    bufp->fullCData(oldp+2332,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+2333,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2334,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+2335,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_tx),4);
    bufp->fullSData(oldp+2336,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+2337,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_tx),16);
    bufp->fullIData(oldp+2338,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_num_tx),32);
    bufp->fullCData(oldp+2339,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+2340,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2341,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+2342,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
    bufp->fullSData(oldp+2343,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+2344,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+2345,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+2346,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+2347,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+2348,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
    bufp->fullSData(oldp+2349,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+2350,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
    bufp->fullBit(oldp+2351,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
    bufp->fullBit(oldp+2352,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
    bufp->fullBit(oldp+2353,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
    bufp->fullBit(oldp+2354,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
    bufp->fullBit(oldp+2355,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
    bufp->fullBit(oldp+2356,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
    bufp->fullBit(oldp+2357,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
    bufp->fullBit(oldp+2358,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
    bufp->fullBit(oldp+2359,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    bufp->fullBit(oldp+2360,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_en_int));
    bufp->fullBit(oldp+2361,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_tx));
    bufp->fullBit(oldp+2362,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+2363,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+2364,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
    bufp->fullBit(oldp+2365,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
    bufp->fullCData(oldp+2366,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nstate),7);
    bufp->fullQData(oldp+2367,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
    bufp->fullBit(oldp+2369,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
    bufp->fullBit(oldp+2370,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
    bufp->fullBit(oldp+2371,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nseq_up));
    bufp->fullSData(oldp+2372,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
    bufp->fullQData(oldp+2373,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    bufp->fullBit(oldp+2375,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_en_int));
    bufp->fullBit(oldp+2376,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_tx));
    bufp->fullBit(oldp+2377,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+2378,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+2379,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
    bufp->fullBit(oldp+2380,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
    bufp->fullCData(oldp+2381,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nstate),7);
    bufp->fullQData(oldp+2382,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
    bufp->fullBit(oldp+2384,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
    bufp->fullBit(oldp+2385,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
    bufp->fullBit(oldp+2386,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nseq_up));
    bufp->fullSData(oldp+2387,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
    bufp->fullQData(oldp+2388,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    bufp->fullBit(oldp+2390,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_svr));
    bufp->fullBit(oldp+2391,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+2392,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_en_int));
    bufp->fullCData(oldp+2393,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+2394,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+2395,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+2396,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+2397,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flg_int));
    bufp->fullBit(oldp+2398,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+2399,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+2400,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+2401,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+2402,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+2403,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+2404,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+2405,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
    bufp->fullCData(oldp+2406,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+2407,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+2408,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_stop_flg));
    bufp->fullBit(oldp+2409,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
    bufp->fullCData(oldp+2410,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
    bufp->fullCData(oldp+2411,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
    bufp->fullSData(oldp+2412,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
    bufp->fullBit(oldp+2413,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+2414,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+2415,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
    bufp->fullBit(oldp+2416,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
    bufp->fullCData(oldp+2417,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nstate),7);
    bufp->fullCData(oldp+2418,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+2419,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+2420,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
    bufp->fullIData(oldp+2421,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+2422,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
    bufp->fullIData(oldp+2423,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
    bufp->fullBit(oldp+2424,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
    bufp->fullBit(oldp+2425,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
    bufp->fullBit(oldp+2426,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [0U], 0x60U))));
    bufp->fullIData(oldp+2427,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2428,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2429,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2430,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2431,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [1U], 0x60U))));
    bufp->fullIData(oldp+2432,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2433,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2434,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2435,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2436,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [2U], 0x60U))));
    bufp->fullIData(oldp+2437,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2438,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2439,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2440,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2441,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [3U], 0x60U))));
    bufp->fullIData(oldp+2442,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2443,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2444,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2445,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2446,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [4U], 0x60U))));
    bufp->fullIData(oldp+2447,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2448,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2449,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2450,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2451,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [5U], 0x60U))));
    bufp->fullIData(oldp+2452,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2453,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2454,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2455,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2456,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [6U], 0x60U))));
    bufp->fullIData(oldp+2457,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2458,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2459,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2460,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2461,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [7U], 0x60U))));
    bufp->fullIData(oldp+2462,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2463,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2464,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2465,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2466,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [8U], 0x60U))));
    bufp->fullIData(oldp+2467,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2468,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2469,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2470,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2471,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [9U], 0x60U))));
    bufp->fullIData(oldp+2472,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2473,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2474,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2475,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+2476,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
    bufp->fullBit(oldp+2477,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
    bufp->fullBit(oldp+2478,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
    bufp->fullIData(oldp+2479,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
    bufp->fullCData(oldp+2480,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+2481,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+2482,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
    bufp->fullIData(oldp+2483,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
    bufp->fullCData(oldp+2484,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
    bufp->fullCData(oldp+2485,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
    bufp->fullCData(oldp+2486,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+2487,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+2488,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+2489,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+2490,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+2491,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+2492,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+2493,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+2494,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+2495,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+2496,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+2497,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+2498,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_clt));
    bufp->fullBit(oldp+2499,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+2500,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_en_int));
    bufp->fullCData(oldp+2501,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+2502,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+2503,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+2504,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+2505,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flg_int));
    bufp->fullBit(oldp+2506,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+2507,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+2508,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+2509,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+2510,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+2511,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+2512,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+2513,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
    bufp->fullCData(oldp+2514,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+2515,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+2516,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_stop_flg));
    bufp->fullBit(oldp+2517,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
    bufp->fullCData(oldp+2518,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
    bufp->fullCData(oldp+2519,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
    bufp->fullSData(oldp+2520,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
    bufp->fullBit(oldp+2521,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+2522,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+2523,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
    bufp->fullBit(oldp+2524,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
    bufp->fullCData(oldp+2525,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nstate),7);
    bufp->fullCData(oldp+2526,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+2527,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+2528,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
    bufp->fullIData(oldp+2529,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+2530,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
    bufp->fullIData(oldp+2531,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
    bufp->fullBit(oldp+2532,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
    bufp->fullBit(oldp+2533,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
    bufp->fullBit(oldp+2534,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [0U], 0x60U))));
    bufp->fullIData(oldp+2535,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2536,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2537,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2538,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2539,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [1U], 0x60U))));
    bufp->fullIData(oldp+2540,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2541,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2542,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2543,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2544,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [2U], 0x60U))));
    bufp->fullIData(oldp+2545,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2546,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2547,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2548,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2549,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [3U], 0x60U))));
    bufp->fullIData(oldp+2550,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2551,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2552,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2553,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2554,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [4U], 0x60U))));
    bufp->fullIData(oldp+2555,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2556,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2557,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2558,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2559,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [5U], 0x60U))));
    bufp->fullIData(oldp+2560,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2561,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2562,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2563,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2564,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [6U], 0x60U))));
    bufp->fullIData(oldp+2565,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2566,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2567,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2568,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2569,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [7U], 0x60U))));
    bufp->fullIData(oldp+2570,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2571,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2572,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2573,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2574,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [8U], 0x60U))));
    bufp->fullIData(oldp+2575,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2576,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2577,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2578,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+2579,((1U & VL_BITSEL_IWII(97, 
                                                  vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                  [9U], 0x60U))));
    bufp->fullIData(oldp+2580,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+2581,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                           [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+2582,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+2583,((0xffffU & VL_SEL_IWII(97, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                      [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+2584,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
    bufp->fullBit(oldp+2585,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
    bufp->fullBit(oldp+2586,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
    bufp->fullIData(oldp+2587,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
    bufp->fullCData(oldp+2588,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+2589,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+2590,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
    bufp->fullIData(oldp+2591,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
    bufp->fullCData(oldp+2592,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
    bufp->fullCData(oldp+2593,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
    bufp->fullCData(oldp+2594,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+2595,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+2596,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+2597,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+2598,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+2599,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+2600,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+2601,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+2602,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+2603,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+2604,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+2605,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+2606,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+2607,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->fullSData(oldp+2608,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
    bufp->fullIData(oldp+2609,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    bufp->fullIData(oldp+2610,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+2611,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->fullSData(oldp+2612,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
    bufp->fullIData(oldp+2613,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    bufp->fullBit(oldp+2614,(vlSelfRef.CLK));
    bufp->fullBit(oldp+2615,(vlSelfRef.nRST));
    bufp->fullCData(oldp+2616,(vlSelfRef.tb_count),8);
    bufp->fullBit(oldp+2617,(vlSelfRef.TX_en_svr));
    bufp->fullQData(oldp+2618,(vlSelfRef.xgmii_txd_svr),64);
    bufp->fullCData(oldp+2620,(vlSelfRef.xgmii_txc_svr),8);
    bufp->fullBit(oldp+2621,(vlSelfRef.frame_end_svr));
    bufp->fullQData(oldp+2622,(vlSelfRef.xgmii_rxd_svr),64);
    bufp->fullCData(oldp+2624,(vlSelfRef.xgmii_rxc_svr),8);
    bufp->fullBit(oldp+2625,(vlSelfRef.axis_last_svr));
    bufp->fullBit(oldp+2626,(vlSelfRef.wr_FIFO_en_svr));
    bufp->fullIData(oldp+2627,(vlSelfRef.len_seq_svr),32);
    bufp->fullQData(oldp+2628,(vlSelfRef.soupbin_TCP_payload_svr),64);
    bufp->fullBit(oldp+2630,(vlSelfRef.wr_FIFO_validing_svr));
    bufp->fullBit(oldp+2631,(vlSelfRef.axis_r_en_svr));
    bufp->fullBit(oldp+2632,(vlSelfRef.axis_r_valid_svr));
    bufp->fullQData(oldp+2633,(vlSelfRef.axis_rd_data_svr),64);
    bufp->fullBit(oldp+2635,(vlSelfRef.TCP_stop_flag_svr));
    bufp->fullIData(oldp+2636,(vlSelfRef.seq_num_svr),32);
    bufp->fullIData(oldp+2637,(vlSelfRef.rcv_next_svr),32);
    bufp->fullBit(oldp+2638,(vlSelfRef.TX_en_clt));
    bufp->fullQData(oldp+2639,(vlSelfRef.xgmii_txd_clt),64);
    bufp->fullCData(oldp+2641,(vlSelfRef.xgmii_txc_clt),8);
    bufp->fullBit(oldp+2642,(vlSelfRef.frame_end_clt));
    bufp->fullQData(oldp+2643,(vlSelfRef.xgmii_rxd_clt),64);
    bufp->fullCData(oldp+2645,(vlSelfRef.xgmii_rxc_clt),8);
    bufp->fullBit(oldp+2646,(vlSelfRef.axis_last_clt));
    bufp->fullBit(oldp+2647,(vlSelfRef.wr_FIFO_en_clt));
    bufp->fullIData(oldp+2648,(vlSelfRef.len_seq_clt),32);
    bufp->fullQData(oldp+2649,(vlSelfRef.soupbin_TCP_payload_clt),64);
    bufp->fullBit(oldp+2651,(vlSelfRef.wr_FIFO_valid_clt));
    bufp->fullBit(oldp+2652,(vlSelfRef.axis_r_en_clt));
    bufp->fullBit(oldp+2653,(vlSelfRef.axis_r_valid_clt));
    bufp->fullQData(oldp+2654,(vlSelfRef.axis_rd_data_clt),64);
    bufp->fullBit(oldp+2656,(vlSelfRef.TCP_stop_flag_clt));
    bufp->fullIData(oldp+2657,(vlSelfRef.seq_num_clt),32);
    bufp->fullIData(oldp+2658,(vlSelfRef.rcv_next_clt),32);
    bufp->fullQData(oldp+2659,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->fullCData(oldp+2661,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->fullQData(oldp+2662,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->fullCData(oldp+2664,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->fullBit(oldp+2665,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__up_send));
    bufp->fullBit(oldp+2666,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__up_send));
    bufp->fullIData(oldp+2667,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->fullIData(oldp+2668,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->fullIData(oldp+2669,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->fullIData(oldp+2670,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->fullIData(oldp+2671,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->fullIData(oldp+2672,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->fullIData(oldp+2673,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->fullIData(oldp+2674,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->fullQData(oldp+2675,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+2677,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->fullQData(oldp+2678,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+2680,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->fullIData(oldp+2681,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->fullBit(oldp+2682,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
    bufp->fullIData(oldp+2683,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->fullBit(oldp+2684,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
}
