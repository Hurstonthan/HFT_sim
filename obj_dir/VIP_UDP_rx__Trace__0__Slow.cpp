// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VIP_UDP_rx__Syms.h"


VL_ATTR_COLD void VIP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0(VIP_UDP_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_init_sub__TOP__0(VIP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+48,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+51,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+53,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"UDP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"UDP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+57,0,"UDP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    VIP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("IP_UDP_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+48,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+51,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+53,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"UDP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"UDP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+57,0,"UDP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+22,0,"IP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+24,0,"IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+26,0,"is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ip_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+48,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+51,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+53,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+24,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+26,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+6,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+30,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+9,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+10,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+32,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+34,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+14,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+60,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+10,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+32,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+18,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+19,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+20,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+21,0,"temp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("udp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+48,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+24,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+26,0,"is_udp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"UDP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"UDP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+57,0,"UDP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+37,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"UDP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"next_UDP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"current_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"nstate",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"next_UDP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+44,0,"next_UDP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+46,0,"is_udp_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_udp_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0(VIP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+65,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+67,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+69,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+71,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_init_top(VIP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_init_top\n"); );
    // Body
    VIP_UDP_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VIP_UDP_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VIP_UDP_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VIP_UDP_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_register(VIP_UDP_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VIP_UDP_rx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VIP_UDP_rx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VIP_UDP_rx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VIP_UDP_rx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_const_0_sub_0(VIP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_const_0\n"); );
    // Init
    VIP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_UDP_rx___024root*>(voidSelf);
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIP_UDP_rx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_const_0_sub_0(VIP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+64,(0x40U),32);
    bufp->fullQData(oldp+65,(0x123456ULL),48);
    bufp->fullQData(oldp+67,(0x65431ULL),48);
    bufp->fullSData(oldp+69,(0x800U),16);
    bufp->fullCData(oldp+70,(4U),4);
    bufp->fullCData(oldp+71,(5U),4);
    bufp->fullCData(oldp+72,(0x11U),8);
    bufp->fullCData(oldp+73,(6U),8);
    bufp->fullCData(oldp+74,(1U),8);
    bufp->fullCData(oldp+75,(0x40U),8);
    bufp->fullIData(oldp+76,(0xffffffffU),32);
    bufp->fullIData(oldp+77,(0xaaaaaaaaU),32);
    bufp->fullSData(oldp+78,(0x1234U),16);
    bufp->fullSData(oldp+79,(0x4321U),16);
    bufp->fullSData(oldp+80,(8U),16);
    bufp->fullSData(oldp+81,(0U),16);
}

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_full_0_sub_0(VIP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_full_0\n"); );
    // Init
    VIP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_UDP_rx___024root*>(voidSelf);
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIP_UDP_rx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VIP_UDP_rx___024root__trace_full_0_sub_0(VIP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__test_valid),4);
    bufp->fullCData(oldp+2,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ip_version),4);
    bufp->fullBit(oldp+3,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid));
    bufp->fullCData(oldp+4,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate),4);
    bufp->fullSData(oldp+5,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum),16);
    bufp->fullQData(oldp+6,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload),64);
    bufp->fullSData(oldp+8,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv),16);
    bufp->fullBit(oldp+9,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en));
    bufp->fullQData(oldp+10,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in),64);
    bufp->fullSData(oldp+12,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr),16);
    bufp->fullSData(oldp+13,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_len),16);
    bufp->fullBit(oldp+14,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid));
    bufp->fullBit(oldp+15,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp));
    bufp->fullBit(oldp+16,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp));
    bufp->fullBit(oldp+17,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr));
    bufp->fullIData(oldp+18,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum),17);
    bufp->fullIData(oldp+19,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp),20);
    bufp->fullIData(oldp+20,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1),20);
    bufp->fullIData(oldp+21,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2),20);
    bufp->fullBit(oldp+22,(vlSelf->IP_UDP_rx__DOT__IP_valid));
    bufp->fullBit(oldp+23,(vlSelf->IP_UDP_rx__DOT__IP_flush));
    bufp->fullQData(oldp+24,(vlSelf->IP_UDP_rx__DOT__IP_payload),64);
    bufp->fullBit(oldp+26,(vlSelf->IP_UDP_rx__DOT__is_udp));
    bufp->fullBit(oldp+27,(vlSelf->IP_UDP_rx__DOT__is_tcp));
    bufp->fullCData(oldp+28,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state),4);
    bufp->fullSData(oldp+29,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum),16);
    bufp->fullSData(oldp+30,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv),16);
    bufp->fullBit(oldp+31,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear));
    bufp->fullSData(oldp+32,(((0U == (0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),16);
    bufp->fullIData(oldp+33,(((0U == (0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),17);
    bufp->fullSData(oldp+34,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr),16);
    bufp->fullSData(oldp+35,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len),16);
    bufp->fullIData(oldp+36,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum),17);
    bufp->fullSData(oldp+37,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt),16);
    bufp->fullSData(oldp+38,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt),16);
    bufp->fullSData(oldp+39,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len),16);
    bufp->fullSData(oldp+40,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len),16);
    bufp->fullCData(oldp+41,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state),3);
    bufp->fullCData(oldp+42,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate),3);
    bufp->fullBit(oldp+43,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid));
    bufp->fullQData(oldp+44,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload),64);
    bufp->fullBit(oldp+46,((0x1234U == (0xffffU & (IData)(
                                                          (vlSelf->IP_UDP_rx__DOT__IP_payload 
                                                           >> 0x20U))))));
    bufp->fullBit(oldp+47,((0x4321U == (0xffffU & (IData)(
                                                          (vlSelf->IP_UDP_rx__DOT__IP_payload 
                                                           >> 0x10U))))));
    bufp->fullBit(oldp+48,(vlSelf->CLK));
    bufp->fullBit(oldp+49,(vlSelf->nRST));
    bufp->fullBit(oldp+50,(vlSelf->MAC_valid));
    bufp->fullQData(oldp+51,(vlSelf->MAC_payload_rcv),64);
    bufp->fullBit(oldp+53,(vlSelf->MAC_flush));
    bufp->fullCData(oldp+54,(vlSelf->bytes_rcv_len),8);
    bufp->fullBit(oldp+55,(vlSelf->UDP_valid));
    bufp->fullBit(oldp+56,(vlSelf->UDP_flush));
    bufp->fullQData(oldp+57,(vlSelf->UDP_payload),64);
    bufp->fullSData(oldp+59,((0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                                 >> 0x30U)))),16);
    bufp->fullSData(oldp+60,((0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                                 >> 0x10U)))),16);
    bufp->fullCData(oldp+61,((0xffU & (IData)((vlSelf->MAC_payload_rcv 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+62,((7U & (IData)((vlSelf->MAC_payload_rcv 
                                            >> 0x1dU)))),3);
    bufp->fullSData(oldp+63,((0x1fffU & (IData)((vlSelf->MAC_payload_rcv 
                                                 >> 0x10U)))),13);
}
