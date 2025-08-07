// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vethernet_rx__Syms.h"


VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+109,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+111,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+113,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+114,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+116,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+118,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ethernet_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+111,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+113,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+114,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+116,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+118,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"MAC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+42,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+44,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ip_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+42,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+41,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+114,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+116,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+118,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+50,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+52,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+54,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+56,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+58,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+60,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+64,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+72,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+74,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+56,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+58,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+77,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+78,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+79,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+80,0,"temp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+124,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+126,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+128,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+129,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+111,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+113,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+42,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+40,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+81,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+23,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+83,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+120,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+130,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+131,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+84,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+23,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+136,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+121,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+88,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+90,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+7,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+11,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+139,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+143,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+96,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+98,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+99,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+101,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+44,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+31,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+32,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+34,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+19,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+36,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+25,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+82,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+146,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+113,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+145,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+23,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+149,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+25,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+150,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+106,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+151,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+96,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+152,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("payload_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+101,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+153,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+42,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+154,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+155,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+146,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+87,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+108,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+157,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+158,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+160,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+162,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+128,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_init_top(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_init_top\n"); );
    // Body
    Vethernet_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vethernet_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vethernet_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vethernet_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vethernet_rx___024root__trace_register(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_register\n"); );
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
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+122,(0x40U),32);
    bufp->fullIData(oldp+123,(8U),32);
    bufp->fullQData(oldp+124,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+126,(0xaaccbbffffffULL),48);
    bufp->fullSData(oldp+128,(8U),16);
    bufp->fullIData(oldp+129,(0xc704dd7bU),32);
    bufp->fullCData(oldp+130,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_FCS),3);
    bufp->fullCData(oldp+131,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__str_FCS),3);
    bufp->fullQData(oldp+132,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+134,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+136,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+137,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+138,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+139,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_shifted),128);
    bufp->fullSData(oldp+143,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_ind),16);
    bufp->fullSData(oldp+144,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_ind),16);
    bufp->fullIData(oldp+145,(8U),32);
    bufp->fullBit(oldp+146,(0U));
    bufp->fullIData(oldp+147,(8U),32);
    bufp->fullIData(oldp+148,(3U),32);
    bufp->fullCData(oldp+149,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+150,(((0x80U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+151,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+152,(((0x80U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+153,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+154,(((0x80U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullIData(oldp+155,(0x10U),32);
    bufp->fullIData(oldp+156,(4U),32);
    bufp->fullIData(oldp+157,(0x10U),32);
    bufp->fullQData(oldp+158,(0x123456ULL),48);
    bufp->fullQData(oldp+160,(0x65431ULL),48);
    bufp->fullSData(oldp+162,(0x800U),16);
    bufp->fullCData(oldp+163,(4U),4);
    bufp->fullCData(oldp+164,(5U),4);
    bufp->fullCData(oldp+165,(0x11U),8);
    bufp->fullCData(oldp+166,(6U),8);
    bufp->fullCData(oldp+167,(1U),8);
    bufp->fullCData(oldp+168,(0x40U),8);
    bufp->fullIData(oldp+169,(0xffffffffU),32);
    bufp->fullIData(oldp+170,(0xaaaaaaaaU),32);
    bufp->fullSData(oldp+171,(0x1234U),16);
    bufp->fullSData(oldp+172,(0x4321U),16);
    bufp->fullSData(oldp+173,(0U),16);
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
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid));
    bufp->fullCData(oldp+2,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset),3);
    bufp->fullCData(oldp+3,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset), 3U))),6);
    bufp->fullCData(oldp+4,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END),8);
    bufp->fullBit(oldp+5,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found));
    bufp->fullCData(oldp+6,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane),3);
    bufp->fullWData(oldp+7,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store),128);
    bufp->fullWData(oldp+11,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_grap),128);
    bufp->fullIData(oldp+15,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame),32);
    bufp->fullIData(oldp+16,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nrg),32);
    bufp->fullBit(oldp+17,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay));
    bufp->fullCData(oldp+18,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl),8);
    bufp->fullWData(oldp+19,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__temp),128);
    bufp->fullQData(oldp+23,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+25,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big),64);
    bufp->fullQData(oldp+27,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+29,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv),8);
    bufp->fullBit(oldp+30,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid));
    bufp->fullCData(oldp+31,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state),6);
    bufp->fullQData(oldp+32,((((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))) 
                               << 0x28U) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                         >> 8U))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                         >> 0x10U)) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((IData)(
                                                                              (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                               >> 0x18U)) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x28U))))))))))),48);
    bufp->fullQData(oldp+34,((((QData)((IData)((0xffffU 
                                                & (IData)(
                                                          (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))),48);
    bufp->fullBit(oldp+36,((0xffffffccbbaaULL == (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 8U))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x10U)) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x18U)) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & ((IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x28U)))))))))))));
    bufp->fullBit(oldp+37,((0xaaccU == (0xffffU & (IData)(
                                                          (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))));
    bufp->fullBit(oldp+38,((0xbbffffffU == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f))));
    bufp->fullIData(oldp+39,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc),32);
    bufp->fullBit(oldp+40,(vlSelf->ethernet_rx__DOT__MAC_valid));
    bufp->fullBit(oldp+41,(vlSelf->ethernet_rx__DOT__MAC_flush));
    bufp->fullQData(oldp+42,(vlSelf->ethernet_rx__DOT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+44,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv),8);
    bufp->fullBit(oldp+45,(vlSelf->ethernet_rx__DOT__frame_ok));
    bufp->fullCData(oldp+46,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state),4);
    bufp->fullCData(oldp+47,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate),4);
    bufp->fullSData(oldp+48,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_checksum),16);
    bufp->fullSData(oldp+49,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_checksum),16);
    bufp->fullQData(oldp+50,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload),64);
    bufp->fullSData(oldp+52,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv),16);
    bufp->fullSData(oldp+53,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv),16);
    bufp->fullBit(oldp+54,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en));
    bufp->fullBit(oldp+55,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear));
    bufp->fullQData(oldp+56,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in),64);
    bufp->fullSData(oldp+58,(((0U == (0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),16);
    bufp->fullIData(oldp+59,(((0U == (0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),17);
    bufp->fullSData(oldp+60,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr),16);
    bufp->fullSData(oldp+61,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__ndst_addr),16);
    bufp->fullSData(oldp+62,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len),16);
    bufp->fullSData(oldp+63,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_len),16);
    bufp->fullBit(oldp+64,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid));
    bufp->fullBit(oldp+65,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp));
    bufp->fullBit(oldp+66,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp));
    bufp->fullSData(oldp+67,((0xffffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                 >> 0x30U)))),16);
    bufp->fullSData(oldp+68,((0xffffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                 >> 0x10U)))),16);
    bufp->fullCData(oldp+69,((0xffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+70,((7U & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                            >> 0x1dU)))),3);
    bufp->fullSData(oldp+71,((0x1fffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                 >> 0x10U)))),13);
    bufp->fullCData(oldp+72,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid),4);
    bufp->fullCData(oldp+73,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__ip_version),4);
    bufp->fullBit(oldp+74,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_src_addr));
    bufp->fullBit(oldp+75,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_ip_version_valid));
    bufp->fullIData(oldp+76,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum),17);
    bufp->fullIData(oldp+77,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum),17);
    bufp->fullIData(oldp+78,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp),20);
    bufp->fullIData(oldp+79,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1),20);
    bufp->fullIData(oldp+80,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2),20);
    bufp->fullBit(oldp+81,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init));
    bufp->fullIData(oldp+82,((~ vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)),32);
    bufp->fullSData(oldp+83,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+84,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found));
    bufp->fullBit(oldp+85,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid));
    bufp->fullCData(oldp+86,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane),3);
    bufp->fullSData(oldp+87,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc),16);
    bufp->fullCData(oldp+88,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset),4);
    bufp->fullIData(oldp+89,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check),32);
    bufp->fullWData(oldp+90,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store),128);
    bufp->fullIData(oldp+94,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame),32);
    bufp->fullIData(oldp+95,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__rg),32);
    bufp->fullQData(oldp+96,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+98,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_delay));
    bufp->fullBit(oldp+99,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__soft_dl));
    bufp->fullBit(oldp+100,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsoft_dl));
    bufp->fullQData(oldp+101,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+103,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+104,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state),6);
    bufp->fullIData(oldp+105,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg),32);
    bufp->fullQData(oldp+106,(((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame)) 
                               << 0x20U)),64);
    bufp->fullBit(oldp+108,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid));
    bufp->fullBit(oldp+109,(vlSelf->CLK));
    bufp->fullBit(oldp+110,(vlSelf->nRST));
    bufp->fullQData(oldp+111,(vlSelf->xgmii_rxd),64);
    bufp->fullCData(oldp+113,(vlSelf->xgmii_rxc),8);
    bufp->fullBit(oldp+114,(vlSelf->IP_valid));
    bufp->fullBit(oldp+115,(vlSelf->IP_flush));
    bufp->fullQData(oldp+116,(vlSelf->IP_payload),64);
    bufp->fullBit(oldp+118,(vlSelf->is_udp));
    bufp->fullBit(oldp+119,(vlSelf->is_tcp));
    bufp->fullSData(oldp+120,((((IData)(vlSelf->xgmii_rxc) 
                                << 8U) | (0xffU & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                   >> 8U)))),16);
    bufp->fullSData(oldp+121,(((0U == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane))
                                ? (((IData)(vlSelf->xgmii_rxc) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                 >> 8U)))
                                : (((IData)(vlSelf->xgmii_rxc) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                 >> 4U))))),16);
}
