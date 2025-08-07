// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VMAC_IP_UDP_rx__Syms.h"


VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_init_sub__TOP__0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+130,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+131,0,"UDP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"UDP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+133,0,"UDP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_IP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("MAC_IP_UDP_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+139,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+141,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+143,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+130,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+131,0,"UDP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"UDP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+133,0,"UDP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+40,0,"IP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"IP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+42,0,"IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+44,0,"is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"CRC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+49,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+51,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("ip_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+49,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+47,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+42,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+44,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+56,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+58,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+60,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+62,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+64,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+66,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+70,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+78,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+62,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+64,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+83,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+84,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+85,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+86,0,"temp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+139,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+141,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+143,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+130,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+49,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+46,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+87,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+23,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+89,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+135,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+145,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+90,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+23,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+147,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+149,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+151,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+95,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+96,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+7,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+11,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+154,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+158,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+159,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+102,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+104,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+105,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+107,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+51,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+31,0,"next_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+32,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+34,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+19,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+36,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+25,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+88,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+161,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+130,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+160,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+23,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+164,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+25,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+165,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+112,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+166,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+102,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+167,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("payload_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+107,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+168,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+49,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+169,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+161,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+93,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+114,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+172,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("udp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+42,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+44,0,"is_udp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"UDP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"UDP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+133,0,"UDP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+115,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"UDP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"next_UDP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+119,0,"current_state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+120,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+121,0,"next_UDP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+122,0,"next_UDP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+124,0,"is_udp_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"is_udp_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+173,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+175,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+177,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+180,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+187,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+188,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_init_top(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_init_top\n"); );
    // Body
    VMAC_IP_UDP_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VMAC_IP_UDP_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VMAC_IP_UDP_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_register(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VMAC_IP_UDP_rx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VMAC_IP_UDP_rx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VMAC_IP_UDP_rx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VMAC_IP_UDP_rx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_const_0_sub_0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_const_0\n"); );
    // Init
    VMAC_IP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_IP_UDP_rx___024root*>(voidSelf);
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMAC_IP_UDP_rx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_const_0_sub_0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+137,(0x40U),32);
    bufp->fullIData(oldp+138,(8U),32);
    bufp->fullQData(oldp+139,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+141,(0xaaccbbffffffULL),48);
    bufp->fullSData(oldp+143,(8U),16);
    bufp->fullIData(oldp+144,(0xc704dd7bU),32);
    bufp->fullCData(oldp+145,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__end_FCS),3);
    bufp->fullCData(oldp+146,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__str_FCS),3);
    bufp->fullQData(oldp+147,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+149,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+151,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+152,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+153,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+154,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_shifted),128);
    bufp->fullSData(oldp+158,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_ind),16);
    bufp->fullSData(oldp+159,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__ncrc_ind),16);
    bufp->fullIData(oldp+160,(8U),32);
    bufp->fullBit(oldp+161,(0U));
    bufp->fullIData(oldp+162,(8U),32);
    bufp->fullIData(oldp+163,(3U),32);
    bufp->fullCData(oldp+164,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+165,(((0x80U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+166,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+167,(((0x80U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+168,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+169,(((0x80U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullIData(oldp+170,(0x10U),32);
    bufp->fullIData(oldp+171,(4U),32);
    bufp->fullIData(oldp+172,(0x10U),32);
    bufp->fullQData(oldp+173,(0x123456ULL),48);
    bufp->fullQData(oldp+175,(0x65431ULL),48);
    bufp->fullSData(oldp+177,(0x800U),16);
    bufp->fullCData(oldp+178,(4U),4);
    bufp->fullCData(oldp+179,(5U),4);
    bufp->fullCData(oldp+180,(0x11U),8);
    bufp->fullCData(oldp+181,(6U),8);
    bufp->fullCData(oldp+182,(1U),8);
    bufp->fullCData(oldp+183,(0x40U),8);
    bufp->fullIData(oldp+184,(0xffffffffU),32);
    bufp->fullIData(oldp+185,(0xaaaaaaaaU),32);
    bufp->fullSData(oldp+186,(0x1234U),16);
    bufp->fullSData(oldp+187,(0x4321U),16);
    bufp->fullSData(oldp+188,(0U),16);
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_full_0_sub_0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_full_0\n"); );
    // Init
    VMAC_IP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_IP_UDP_rx___024root*>(voidSelf);
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMAC_IP_UDP_rx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_full_0_sub_0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__end_valid));
    bufp->fullCData(oldp+2,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_offset),3);
    bufp->fullCData(oldp+3,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_offset), 3U))),6);
    bufp->fullCData(oldp+4,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__byte_END),8);
    bufp->fullBit(oldp+5,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsof_found));
    bufp->fullCData(oldp+6,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsof_lane),3);
    bufp->fullWData(oldp+7,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nframe_store),128);
    bufp->fullWData(oldp+11,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_grap),128);
    bufp->fullIData(oldp+15,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nFCS_frame),32);
    bufp->fullIData(oldp+16,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nrg),32);
    bufp->fullBit(oldp+17,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__ncrc_delay));
    bufp->fullCData(oldp+18,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nbytes_rcv_dl),8);
    bufp->fullWData(oldp+19,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__temp),128);
    bufp->fullQData(oldp+23,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+25,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_in_big),64);
    bufp->fullQData(oldp+27,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+29,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nbytes_rcv),8);
    bufp->fullBit(oldp+30,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nMAC_valid));
    bufp->fullCData(oldp+31,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__next_state),6);
    bufp->fullQData(oldp+32,((((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))) 
                               << 0x28U) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                         >> 8U))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                         >> 0x10U)) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((IData)(
                                                                              (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                               >> 0x18U)) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((IData)(
                                                                                (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x28U))))))))))),48);
    bufp->fullQData(oldp+34,((((QData)((IData)((0xffffU 
                                                & (IData)(
                                                          (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))),48);
    bufp->fullBit(oldp+36,((0xffffffccbbaaULL == (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 8U))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(
                                                                                (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x10U)) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x18U)) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & ((IData)(
                                                                                (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                                                >> 0x28U)))))))))))));
    bufp->fullBit(oldp+37,((0xaaccU == (0xffffU & (IData)(
                                                          (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))));
    bufp->fullBit(oldp+38,((0xbbffffffU == (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f))));
    bufp->fullIData(oldp+39,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc),32);
    bufp->fullBit(oldp+40,(vlSelf->MAC_IP_UDP_rx__DOT__IP_valid));
    bufp->fullBit(oldp+41,(vlSelf->MAC_IP_UDP_rx__DOT__IP_flush));
    bufp->fullQData(oldp+42,(vlSelf->MAC_IP_UDP_rx__DOT__IP_payload),64);
    bufp->fullBit(oldp+44,(vlSelf->MAC_IP_UDP_rx__DOT__is_udp));
    bufp->fullBit(oldp+45,(vlSelf->MAC_IP_UDP_rx__DOT__is_tcp));
    bufp->fullBit(oldp+46,(vlSelf->MAC_IP_UDP_rx__DOT__MAC_valid));
    bufp->fullBit(oldp+47,(vlSelf->MAC_IP_UDP_rx__DOT__CRC_flush));
    bufp->fullBit(oldp+48,(vlSelf->MAC_IP_UDP_rx__DOT__frame_ok));
    bufp->fullQData(oldp+49,(vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv),64);
    bufp->fullCData(oldp+51,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_rcv),8);
    bufp->fullCData(oldp+52,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__state),4);
    bufp->fullCData(oldp+53,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nstate),4);
    bufp->fullSData(oldp+54,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum),16);
    bufp->fullSData(oldp+55,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum),16);
    bufp->fullQData(oldp+56,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload),64);
    bufp->fullSData(oldp+58,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv),16);
    bufp->fullSData(oldp+59,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv),16);
    bufp->fullBit(oldp+60,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_en));
    bufp->fullBit(oldp+61,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear));
    bufp->fullQData(oldp+62,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_in),64);
    bufp->fullSData(oldp+64,(((0U == (0xffffU & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),16);
    bufp->fullIData(oldp+65,(((0U == (0xffffU & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),17);
    bufp->fullSData(oldp+66,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__dst_addr),16);
    bufp->fullSData(oldp+67,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr),16);
    bufp->fullSData(oldp+68,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__IP_len),16);
    bufp->fullSData(oldp+69,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_len),16);
    bufp->fullBit(oldp+70,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid));
    bufp->fullBit(oldp+71,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp));
    bufp->fullBit(oldp+72,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp));
    bufp->fullSData(oldp+73,((0xffffU & (IData)((vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                                 >> 0x30U)))),16);
    bufp->fullSData(oldp+74,((0xffffU & (IData)((vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                                 >> 0x10U)))),16);
    bufp->fullCData(oldp+75,((0xffU & (IData)((vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+76,((7U & (IData)((vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                            >> 0x1dU)))),3);
    bufp->fullSData(oldp+77,((0x1fffU & (IData)((vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                                 >> 0x10U)))),13);
    bufp->fullCData(oldp+78,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__test_valid),4);
    bufp->fullCData(oldp+79,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__ip_version),4);
    bufp->fullBit(oldp+80,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr));
    bufp->fullBit(oldp+81,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid));
    bufp->fullIData(oldp+82,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum),17);
    bufp->fullIData(oldp+83,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum),17);
    bufp->fullIData(oldp+84,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp),20);
    bufp->fullIData(oldp+85,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1),20);
    bufp->fullIData(oldp+86,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2),20);
    bufp->fullBit(oldp+87,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_init));
    bufp->fullIData(oldp+88,((~ vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)),32);
    bufp->fullSData(oldp+89,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+90,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_found));
    bufp->fullBit(oldp+91,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_valid));
    bufp->fullCData(oldp+92,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_lane),3);
    bufp->fullSData(oldp+93,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_rxc),16);
    bufp->fullCData(oldp+94,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_offset),4);
    bufp->fullIData(oldp+95,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_check),32);
    bufp->fullWData(oldp+96,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__frame_store),128);
    bufp->fullIData(oldp+100,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame),32);
    bufp->fullIData(oldp+101,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__rg),32);
    bufp->fullQData(oldp+102,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+104,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_delay));
    bufp->fullBit(oldp+105,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__soft_dl));
    bufp->fullBit(oldp+106,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsoft_dl));
    bufp->fullQData(oldp+107,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+109,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+110,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__state),6);
    bufp->fullIData(oldp+111,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg),32);
    bufp->fullQData(oldp+112,(((QData)((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame)) 
                               << 0x20U)),64);
    bufp->fullBit(oldp+114,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid));
    bufp->fullSData(oldp+115,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__cnt),16);
    bufp->fullSData(oldp+116,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_cnt),16);
    bufp->fullSData(oldp+117,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__UDP_len),16);
    bufp->fullSData(oldp+118,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len),16);
    bufp->fullCData(oldp+119,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__current_state),3);
    bufp->fullCData(oldp+120,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__nstate),3);
    bufp->fullBit(oldp+121,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid));
    bufp->fullQData(oldp+122,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload),64);
    bufp->fullBit(oldp+124,((0x1234U == (0xffffU & (IData)(
                                                           (vlSelf->MAC_IP_UDP_rx__DOT__IP_payload 
                                                            >> 0x20U))))));
    bufp->fullBit(oldp+125,((0x4321U == (0xffffU & (IData)(
                                                           (vlSelf->MAC_IP_UDP_rx__DOT__IP_payload 
                                                            >> 0x10U))))));
    bufp->fullBit(oldp+126,(vlSelf->CLK));
    bufp->fullBit(oldp+127,(vlSelf->nRST));
    bufp->fullQData(oldp+128,(vlSelf->xgmii_rxd),64);
    bufp->fullCData(oldp+130,(vlSelf->xgmii_rxc),8);
    bufp->fullBit(oldp+131,(vlSelf->UDP_flush));
    bufp->fullBit(oldp+132,(vlSelf->UDP_valid));
    bufp->fullQData(oldp+133,(vlSelf->UDP_payload),64);
    bufp->fullSData(oldp+135,((((IData)(vlSelf->xgmii_rxc) 
                                << 8U) | (0xffU & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                   >> 8U)))),16);
    bufp->fullSData(oldp+136,(((0U == (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_lane))
                                ? (((IData)(vlSelf->xgmii_rxc) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                 >> 8U)))
                                : (((IData)(vlSelf->xgmii_rxc) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                 >> 4U))))),16);
}
