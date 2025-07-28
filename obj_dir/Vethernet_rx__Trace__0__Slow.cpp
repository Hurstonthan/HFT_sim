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
    tracep->declBit(c+95,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+97,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+99,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+100,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+102,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+104,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ethernet_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+97,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+99,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+100,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+102,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+104,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"MAC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+36,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+38,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+39,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ip_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+36,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+35,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+100,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+102,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+104,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+44,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+46,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+48,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+50,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+52,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+54,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+58,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+66,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+68,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+50,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+52,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+71,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+113,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+115,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+117,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+97,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+99,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+36,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+34,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+72,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+5,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+74,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+118,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+119,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+75,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+5,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+120,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+78,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+122,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+80,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+13,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+107,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+123,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+127,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+128,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+85,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+87,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+88,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+19,0,"nMAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+38,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+25,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+27,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+29,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+7,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+73,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+131,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+130,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+129,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+5,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+133,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+7,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+134,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+93,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+135,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+85,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+136,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+130,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declQuad(c+140,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+142,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+144,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+145,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+147,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+155,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+156,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
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
    bufp->fullIData(oldp+111,(0x40U),32);
    bufp->fullIData(oldp+112,(8U),32);
    bufp->fullQData(oldp+113,(0xffffffffffffULL),48);
    bufp->fullQData(oldp+115,(0xaaccbbffffffULL),48);
    bufp->fullIData(oldp+117,(0xc704dd7bU),32);
    bufp->fullCData(oldp+118,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_FCS),3);
    bufp->fullCData(oldp+119,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__str_FCS),3);
    bufp->fullQData(oldp+120,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxd_f),64);
    bufp->fullCData(oldp+122,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nxgmii_rxc_f),8);
    bufp->fullWData(oldp+123,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_shifted),128);
    bufp->fullSData(oldp+127,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_ind),16);
    bufp->fullSData(oldp+128,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_ind),16);
    bufp->fullIData(oldp+129,(8U),32);
    bufp->fullBit(oldp+130,(0U));
    bufp->fullIData(oldp+131,(8U),32);
    bufp->fullIData(oldp+132,(3U),32);
    bufp->fullCData(oldp+133,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+134,(((0x80U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
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
    bufp->fullCData(oldp+135,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+136,(((0x80U & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
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
    bufp->fullIData(oldp+137,(0x10U),32);
    bufp->fullIData(oldp+138,(4U),32);
    bufp->fullIData(oldp+139,(0x10U),32);
    bufp->fullQData(oldp+140,(0x123456ULL),48);
    bufp->fullQData(oldp+142,(0x65431ULL),48);
    bufp->fullSData(oldp+144,(0x800U),16);
    bufp->fullCData(oldp+145,(4U),4);
    bufp->fullCData(oldp+146,(5U),4);
    bufp->fullCData(oldp+147,(0x11U),8);
    bufp->fullCData(oldp+148,(6U),8);
    bufp->fullCData(oldp+149,(1U),8);
    bufp->fullCData(oldp+150,(0x40U),8);
    bufp->fullIData(oldp+151,(0xffffffffU),32);
    bufp->fullIData(oldp+152,(0xaaaaaaaaU),32);
    bufp->fullSData(oldp+153,(0x1234U),16);
    bufp->fullSData(oldp+154,(0x4321U),16);
    bufp->fullSData(oldp+155,(8U),16);
    bufp->fullSData(oldp+156,(0U),16);
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
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid));
    bufp->fullCData(oldp+2,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset),3);
    bufp->fullCData(oldp+3,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset), 3U))),6);
    bufp->fullCData(oldp+4,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END),8);
    bufp->fullQData(oldp+5,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+7,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big),64);
    bufp->fullBit(oldp+9,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found));
    bufp->fullCData(oldp+10,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane),3);
    bufp->fullSData(oldp+11,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc),16);
    bufp->fullCData(oldp+12,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset),4);
    bufp->fullWData(oldp+13,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store),128);
    bufp->fullIData(oldp+17,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame),32);
    bufp->fullBit(oldp+18,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay));
    bufp->fullQData(oldp+19,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv),64);
    bufp->fullCData(oldp+21,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv),8);
    bufp->fullCData(oldp+22,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+23,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid));
    bufp->fullCData(oldp+24,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state),6);
    bufp->fullQData(oldp+25,((0xffffffffffffULL & vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)),48);
    bufp->fullQData(oldp+27,((((QData)((IData)((0xffffU 
                                                & (IData)(
                                                          (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))),48);
    bufp->fullBit(oldp+29,((0xffffffffffffULL == (0xffffffffffffULL 
                                                  & vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f))));
    bufp->fullBit(oldp+30,((0xaaccU == (0xffffU & (IData)(
                                                          (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))));
    bufp->fullBit(oldp+31,((0xbbffffffU == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f))));
    bufp->fullIData(oldp+32,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc),32);
    bufp->fullBit(oldp+33,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid));
    bufp->fullBit(oldp+34,(vlSelf->ethernet_rx__DOT__MAC_valid));
    bufp->fullBit(oldp+35,(vlSelf->ethernet_rx__DOT__MAC_flush));
    bufp->fullQData(oldp+36,(vlSelf->ethernet_rx__DOT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+38,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv),8);
    bufp->fullBit(oldp+39,(vlSelf->ethernet_rx__DOT__frame_ok));
    bufp->fullCData(oldp+40,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state),4);
    bufp->fullCData(oldp+41,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate),4);
    bufp->fullSData(oldp+42,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_checksum),16);
    bufp->fullSData(oldp+43,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_checksum),16);
    bufp->fullQData(oldp+44,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload),64);
    bufp->fullSData(oldp+46,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv),16);
    bufp->fullSData(oldp+47,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv),16);
    bufp->fullBit(oldp+48,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en));
    bufp->fullBit(oldp+49,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear));
    bufp->fullQData(oldp+50,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in),64);
    bufp->fullSData(oldp+52,((0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum)),16);
    bufp->fullIData(oldp+53,((0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum)),17);
    bufp->fullSData(oldp+54,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr),16);
    bufp->fullSData(oldp+55,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__ndst_addr),16);
    bufp->fullSData(oldp+56,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len),16);
    bufp->fullSData(oldp+57,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_len),16);
    bufp->fullBit(oldp+58,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid));
    bufp->fullBit(oldp+59,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp));
    bufp->fullBit(oldp+60,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp));
    bufp->fullSData(oldp+61,((0xffffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                 >> 0x30U)))),16);
    bufp->fullSData(oldp+62,((0xffffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                 >> 0x10U)))),16);
    bufp->fullCData(oldp+63,((0xffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+64,((7U & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                            >> 0x1dU)))),3);
    bufp->fullSData(oldp+65,((0x1fffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                 >> 0x10U)))),13);
    bufp->fullCData(oldp+66,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid),4);
    bufp->fullCData(oldp+67,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__ip_version),4);
    bufp->fullBit(oldp+68,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_src_addr));
    bufp->fullBit(oldp+69,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_ip_version_valid));
    bufp->fullIData(oldp+70,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum),17);
    bufp->fullIData(oldp+71,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum),17);
    bufp->fullBit(oldp+72,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init));
    bufp->fullIData(oldp+73,((~ vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)),32);
    bufp->fullSData(oldp+74,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+75,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found));
    bufp->fullBit(oldp+76,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid));
    bufp->fullCData(oldp+77,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane),3);
    bufp->fullCData(oldp+78,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_f),8);
    bufp->fullIData(oldp+79,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check),32);
    bufp->fullWData(oldp+80,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store),128);
    bufp->fullIData(oldp+84,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame),32);
    bufp->fullQData(oldp+85,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+87,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_delay));
    bufp->fullBit(oldp+88,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__soft_dl));
    bufp->fullBit(oldp+89,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsoft_dl));
    bufp->fullCData(oldp+90,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+91,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state),6);
    bufp->fullIData(oldp+92,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg),32);
    bufp->fullQData(oldp+93,(((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame)) 
                              << 0x20U)),64);
    bufp->fullBit(oldp+95,(vlSelf->CLK));
    bufp->fullBit(oldp+96,(vlSelf->nRST));
    bufp->fullQData(oldp+97,(vlSelf->xgmii_rxd),64);
    bufp->fullCData(oldp+99,(vlSelf->xgmii_rxc),8);
    bufp->fullBit(oldp+100,(vlSelf->IP_valid));
    bufp->fullBit(oldp+101,(vlSelf->IP_flush));
    bufp->fullQData(oldp+102,(vlSelf->IP_payload),64);
    bufp->fullBit(oldp+104,(vlSelf->is_udp));
    bufp->fullBit(oldp+105,(vlSelf->is_tcp));
    bufp->fullSData(oldp+106,((((IData)(vlSelf->xgmii_rxc) 
                                << 8U) | (0xffU & ((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                   >> 8U)))),16);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store[2U]))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (IData)(vlSelf->xgmii_rxd);
    __Vtemp_1[3U] = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    bufp->fullWData(oldp+107,(__Vtemp_1),128);
}
