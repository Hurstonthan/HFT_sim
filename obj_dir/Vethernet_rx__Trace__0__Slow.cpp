// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vethernet_rx__Syms.h"


VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ethernet_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+188,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+190,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+192,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+193,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+195,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+197,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+199,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+8,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+10,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+101,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+102,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+104,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"MAC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+117,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+119,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ip_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__chksum_inst__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+121,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+41,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+106,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+107,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+109,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+159,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+160,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+113,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+162,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+163,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+165,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+95,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+114,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+170,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__chksum_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+173,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+175,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+177,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+178,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+180,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_convert__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_frame_convert__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__payload_cvrt__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_check_encoder__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_fcs__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+199,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+201,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+203,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+205,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+206,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+17,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+124,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+126,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+44,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+45,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+47,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+128,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+207,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+208,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+129,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+53,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+209,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+211,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+55,0,"xgmii_rxd_f_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+213,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+133,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+59,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+31,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+216,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+220,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+139,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+141,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+142,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"case_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+143,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+69,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+145,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+73,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__CRC__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_frame_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("payload_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__payload_cvrt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_check_encoder__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_fcs__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+147,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+74,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+75,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+77,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+222,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+79,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_convert__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_convert__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+82,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+226,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+84,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_frame_convert__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_frame_convert__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+148,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+227,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+150,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__payload_cvrt__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__payload_cvrt__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+152,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+228,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+154,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+3,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_cvrt__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+86,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+229,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+88,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__CRC__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__CRC__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+22,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+92,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+99,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+230,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+232,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+234,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+235,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+237,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+241,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+205,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__chksum_inst__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__ip_inst__chksum_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+199,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+184,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+96,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+186,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+187,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_check_encoder__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__crc_check_encoder__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+246,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+26,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+27,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_fcs__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__ethernet_rx__mac_inst__xgmii_fcs__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+249,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+36,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_top(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_top\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vethernet_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vethernet_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vethernet_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vethernet_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vethernet_rx___024root__trace_register(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_register\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vethernet_rx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vethernet_rx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vethernet_rx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vethernet_rx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_const_0_sub_0(Vethernet_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vethernet_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_const_0\n"); );
    // Init
    Vethernet_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vethernet_rx___024root*>(voidSelf);
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vethernet_rx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_const_0_sub_0(Vethernet_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_const_0_sub_0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+199,(0x40U),32);
    bufp->fullIData(oldp+200,(8U),32);
    bufp->fullQData(oldp+201,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+203,(0xaaccbbffffffULL),48);
    bufp->fullSData(oldp+205,(8U),16);
    bufp->fullIData(oldp+206,(0xc704dd7bU),32);
    bufp->fullCData(oldp+207,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__end_FCS),3);
    bufp->fullCData(oldp+208,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__str_FCS),3);
    bufp->fullQData(oldp+209,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+211,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+213,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+214,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+215,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+216,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_shifted),128);
    bufp->fullSData(oldp+220,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_ind),16);
    bufp->fullSData(oldp+221,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__ncrc_ind),16);
    bufp->fullWData(oldp+222,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__temp),128);
    bufp->fullCData(oldp+226,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+227,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+228,(vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+229,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullQData(oldp+230,(0x123456ULL),48);
    bufp->fullQData(oldp+232,(0x65431ULL),48);
    bufp->fullSData(oldp+234,(0x800U),16);
    bufp->fullCData(oldp+235,(4U),4);
    bufp->fullCData(oldp+236,(5U),4);
    bufp->fullCData(oldp+237,(0x11U),8);
    bufp->fullCData(oldp+238,(6U),8);
    bufp->fullCData(oldp+239,(1U),8);
    bufp->fullCData(oldp+240,(0x40U),8);
    bufp->fullIData(oldp+241,(0xffffffffU),32);
    bufp->fullIData(oldp+242,(0xaaaaaaaaU),32);
    bufp->fullSData(oldp+243,(0x1234U),16);
    bufp->fullSData(oldp+244,(0x4321U),16);
    bufp->fullSData(oldp+245,(0U),16);
    bufp->fullIData(oldp+246,(8U),32);
    bufp->fullBit(oldp+247,(0U));
    bufp->fullIData(oldp+248,(3U),32);
    bufp->fullIData(oldp+249,(0x10U),32);
    bufp->fullIData(oldp+250,(4U),32);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_full_0_sub_0(Vethernet_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vethernet_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_full_0\n"); );
    // Init
    Vethernet_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vethernet_rx___024root*>(voidSelf);
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vethernet_rx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_full_0_sub_0(Vethernet_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_full_0_sub_0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__be_rxc),8);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__be_rxc),8);
    bufp->fullBit(oldp+5,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__rx));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__ethernet_rx.CLK));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__ethernet_rx.nRST));
    bufp->fullQData(oldp+8,(vlSymsp->TOP__ethernet_rx.xgmii_rxd),64);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__ethernet_rx.xgmii_rxc),8);
    bufp->fullBit(oldp+11,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__CLK));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nRST));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CLK));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nRST));
    bufp->fullQData(oldp+15,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd),64);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxc),8);
    bufp->fullBit(oldp+18,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__end_valid));
    bufp->fullCData(oldp+19,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_offset),3);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__shift_bits),6);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__byte_END),8);
    bufp->fullBit(oldp+22,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__CLK));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__nRST));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__CLK));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__nRST));
    bufp->fullCData(oldp+26,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__din),8);
    bufp->fullBit(oldp+27,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__valid));
    bufp->fullCData(oldp+28,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__idx),3);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_offset),4);
    bufp->fullWData(oldp+31,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_grap),128);
    bufp->fullSData(oldp+35,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__din),16);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__valid));
    bufp->fullCData(oldp+37,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__idx),4);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+39,(vlSymsp->TOP__ethernet_rx.__PVT__MAC_flush));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__ethernet_rx.__PVT__frame_ok));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_flush));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CRC_flush));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__frame_ok));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_init));
    bufp->fullQData(oldp+45,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_in),64);
    bufp->fullQData(oldp+47,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_in_big),64);
    bufp->fullSData(oldp+49,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nxgmii_rxc_frame),16);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_valid));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nsof_found));
    bufp->fullCData(oldp+52,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nsof_lane),3);
    bufp->fullQData(oldp+53,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+55,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd_f_cvt),64);
    bufp->fullSData(oldp+57,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nFCS_rxc),16);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__ncrc_check),32);
    bufp->fullWData(oldp+59,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nframe_store),128);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nFCS_frame),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nrg),32);
    bufp->fullBit(oldp+65,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__ncrc_delay));
    bufp->fullIData(oldp+66,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__i),32);
    bufp->fullBit(oldp+67,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nsoft_dl));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__case_debug));
    bufp->fullQData(oldp+69,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nMAC_valid));
    bufp->fullCData(oldp+74,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__next_state),6);
    bufp->fullQData(oldp+75,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr),48);
    bufp->fullQData(oldp+77,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_src_addr),48);
    bufp->fullBit(oldp+79,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr_valid));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_src_addr_first_valid));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_src_addr_second_valid));
    bufp->fullQData(oldp+82,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+84,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+86,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+88,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__valid));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_init));
    bufp->fullQData(oldp+92,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__next_crc),32);
    bufp->fullSData(oldp+95,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_pl),16);
    bufp->fullSData(oldp+96,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_checksum_pl),16);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_out),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_reg),32);
    bufp->fullBit(oldp+101,(vlSymsp->TOP__ethernet_rx.IP_valid));
    bufp->fullQData(oldp+102,(vlSymsp->TOP__ethernet_rx.IP_payload),64);
    bufp->fullBit(oldp+104,(vlSymsp->TOP__ethernet_rx.is_udp));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__ethernet_rx.is_tcp));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_valid));
    bufp->fullQData(oldp+107,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_payload),64);
    bufp->fullBit(oldp+109,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_udp));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_tcp));
    bufp->fullCData(oldp+111,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__state),4);
    bufp->fullSData(oldp+112,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_checksum),16);
    bufp->fullSData(oldp+113,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__bytes_rcv),16);
    bufp->fullSData(oldp+114,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__dst_addr),16);
    bufp->fullSData(oldp+115,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_len),16);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__ethernet_rx.__PVT__MAC_valid));
    bufp->fullQData(oldp+117,(vlSymsp->TOP__ethernet_rx.__PVT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__ethernet_rx.__PVT__bytes_rcv_len),8);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_valid));
    bufp->fullQData(oldp+121,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+123,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__bytes_rcv_len),8);
    bufp->fullQData(oldp+124,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+126,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_valid));
    bufp->fullCData(oldp+127,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_rcv_len),8);
    bufp->fullSData(oldp+128,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+129,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__sof_found));
    bufp->fullCData(oldp+130,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__sof_lane),3);
    bufp->fullSData(oldp+131,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_rxc),16);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_check),32);
    bufp->fullWData(oldp+133,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__frame_store),128);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_frame),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__rg),32);
    bufp->fullQData(oldp+139,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+141,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_delay));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__soft_dl));
    bufp->fullQData(oldp+143,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+145,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_rcv),8);
    bufp->fullCData(oldp+146,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+147,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__state),6);
    bufp->fullQData(oldp+148,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+150,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+152,(vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+154,(vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+156,(vlSymsp->TOP__ethernet_rx.IP_flush));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_flush));
    bufp->fullCData(oldp+158,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nstate),4);
    bufp->fullSData(oldp+159,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_checksum),16);
    bufp->fullQData(oldp+160,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_payload),64);
    bufp->fullSData(oldp+162,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nbytes_rcv),16);
    bufp->fullBit(oldp+163,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_en));
    bufp->fullBit(oldp+164,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_clear));
    bufp->fullQData(oldp+165,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_in),64);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_final),17);
    bufp->fullSData(oldp+168,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__ndst_addr),16);
    bufp->fullSData(oldp+169,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_len),16);
    bufp->fullBit(oldp+170,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_valid));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__next_is_udp));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__next_is_tcp));
    bufp->fullSData(oldp+173,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__total_len),16);
    bufp->fullSData(oldp+174,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__frags_flag),16);
    bufp->fullCData(oldp+175,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__ttl),8);
    bufp->fullCData(oldp+176,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__flags),3);
    bufp->fullSData(oldp+177,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__fragoff),13);
    bufp->fullCData(oldp+178,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__test_valid),4);
    bufp->fullCData(oldp+179,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__ip_version),4);
    bufp->fullBit(oldp+180,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_src_addr));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_ip_version_valid));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__FIFO_rd_en));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__clear));
    bufp->fullQData(oldp+184,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_payload_tx),64);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__temp),20);
    bufp->fullBit(oldp+188,(vlSelfRef.CLK));
    bufp->fullBit(oldp+189,(vlSelfRef.nRST));
    bufp->fullQData(oldp+190,(vlSelfRef.xgmii_rxd),64);
    bufp->fullCData(oldp+192,(vlSelfRef.xgmii_rxc),8);
    bufp->fullBit(oldp+193,(vlSelfRef.IP_valid));
    bufp->fullBit(oldp+194,(vlSelfRef.IP_flush));
    bufp->fullQData(oldp+195,(vlSelfRef.IP_payload),64);
    bufp->fullBit(oldp+197,(vlSelfRef.is_udp));
    bufp->fullBit(oldp+198,(vlSelfRef.is_tcp));
}
