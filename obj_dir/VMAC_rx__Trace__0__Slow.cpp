// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VMAC_rx__Syms.h"


VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("MAC_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+110,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+112,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+114,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+115,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+117,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__CRC__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_convert__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_frame_convert__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__payload_cvrt__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_check_encoder__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__xgmii_fcs__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+121,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+123,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+125,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+127,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+128,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+7,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+78,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+80,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+31,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+32,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+34,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+82,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+129,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+130,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+83,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+40,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+131,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+133,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+135,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+87,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+44,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+21,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+138,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+142,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+13,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+93,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+95,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+96,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+97,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+53,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+99,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+57,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__CRC__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_frame_convert__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("payload_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__payload_cvrt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_check_encoder__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__xgmii_fcs__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+101,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+58,0,"next_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+59,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+61,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declArray(c+144,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+63,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_convert__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+66,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+148,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+68,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_frame_convert__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_frame_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+102,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+149,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+104,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__payload_cvrt__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__payload_cvrt__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+106,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+150,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+108,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+3,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__CRC__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__CRC__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+14,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+72,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+76,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_check_encoder__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__crc_check_encoder__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+151,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+152,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+16,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__xgmii_fcs__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__MAC_rx__xgmii_fcs__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+154,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+152,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+25,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+26,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_top(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_top\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMAC_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VMAC_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VMAC_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VMAC_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VMAC_rx___024root__trace_register(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_register\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VMAC_rx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VMAC_rx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VMAC_rx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VMAC_rx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_const_0_sub_0(VMAC_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VMAC_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_const_0\n"); );
    // Init
    VMAC_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_rx___024root*>(voidSelf);
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMAC_rx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_const_0_sub_0(VMAC_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_const_0_sub_0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+121,(0x40U),32);
    bufp->fullIData(oldp+122,(8U),32);
    bufp->fullQData(oldp+123,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+125,(0xaaccbbffffffULL),48);
    bufp->fullSData(oldp+127,(8U),16);
    bufp->fullIData(oldp+128,(0xc704dd7bU),32);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__MAC_rx.__PVT__end_FCS),3);
    bufp->fullCData(oldp+130,(vlSymsp->TOP__MAC_rx.__PVT__str_FCS),3);
    bufp->fullQData(oldp+131,(vlSymsp->TOP__MAC_rx.__PVT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+133,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+135,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+136,(vlSymsp->TOP__MAC_rx.__PVT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxc_MSB),8);
    bufp->fullWData(oldp+138,(vlSymsp->TOP__MAC_rx.__PVT__FCS_shifted),128);
    bufp->fullSData(oldp+142,(vlSymsp->TOP__MAC_rx.__PVT__crc_ind),16);
    bufp->fullSData(oldp+143,(vlSymsp->TOP__MAC_rx.__PVT__ncrc_ind),16);
    bufp->fullWData(oldp+144,(vlSymsp->TOP__MAC_rx.__PVT__temp),128);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__xgmii_rxc),8);
    bufp->fullCData(oldp+150,(vlSymsp->TOP__MAC_rx__payload_cvrt.__PVT__xgmii_rxc),8);
    bufp->fullIData(oldp+151,(8U),32);
    bufp->fullBit(oldp+152,(0U));
    bufp->fullIData(oldp+153,(3U),32);
    bufp->fullIData(oldp+154,(0x10U),32);
    bufp->fullIData(oldp+155,(4U),32);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_full_0_sub_0(VMAC_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VMAC_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_full_0\n"); );
    // Init
    VMAC_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_rx___024root*>(voidSelf);
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMAC_rx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_full_0_sub_0(VMAC_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_full_0_sub_0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__be_rxc),8);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__MAC_rx__payload_cvrt.__PVT__be_rxc),8);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__MAC_rx__CRC.__PVT__rx));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__MAC_rx.CLK));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__MAC_rx.nRST));
    bufp->fullQData(oldp+7,(vlSymsp->TOP__MAC_rx.xgmii_rxd),64);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__MAC_rx.xgmii_rxc),8);
    bufp->fullBit(oldp+10,(vlSymsp->TOP__MAC_rx.__PVT__end_valid));
    bufp->fullCData(oldp+11,(vlSymsp->TOP__MAC_rx.__PVT__bytes_offset),3);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__MAC_rx.__PVT__shift_bits),6);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__MAC_rx.__PVT__byte_END),8);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__MAC_rx__CRC.__PVT__CLK));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__MAC_rx__CRC.__PVT__nRST));
    bufp->fullCData(oldp+16,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__din),8);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__valid));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__idx),3);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__MAC_rx.__PVT__FCS_offset),4);
    bufp->fullWData(oldp+21,(vlSymsp->TOP__MAC_rx.__PVT__FCS_grap),128);
    bufp->fullSData(oldp+25,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__din),16);
    bufp->fullBit(oldp+26,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__valid));
    bufp->fullCData(oldp+27,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__idx),4);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__MAC_rx.CRC_flush));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__MAC_rx.frame_ok));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__MAC_rx.__PVT__crc_init));
    bufp->fullQData(oldp+32,(vlSymsp->TOP__MAC_rx.__PVT__crc_in),64);
    bufp->fullQData(oldp+34,(vlSymsp->TOP__MAC_rx.__PVT__crc_in_big),64);
    bufp->fullSData(oldp+36,(vlSymsp->TOP__MAC_rx.__PVT__nxgmii_rxc_frame),16);
    bufp->fullBit(oldp+37,(vlSymsp->TOP__MAC_rx.__PVT__crc_valid));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__MAC_rx.__PVT__nsof_found));
    bufp->fullCData(oldp+39,(vlSymsp->TOP__MAC_rx.__PVT__nsof_lane),3);
    bufp->fullQData(oldp+40,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxd_f),64);
    bufp->fullSData(oldp+42,(vlSymsp->TOP__MAC_rx.__PVT__nFCS_rxc),16);
    bufp->fullIData(oldp+43,(vlSymsp->TOP__MAC_rx.__PVT__ncrc_check),32);
    bufp->fullWData(oldp+44,(vlSymsp->TOP__MAC_rx.__PVT__nframe_store),128);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__MAC_rx.__PVT__nFCS_frame),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__MAC_rx.__PVT__nrg),32);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__MAC_rx.__PVT__ncrc_delay));
    bufp->fullIData(oldp+51,(vlSymsp->TOP__MAC_rx.__PVT__i),32);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__MAC_rx.__PVT__nsoft_dl));
    bufp->fullQData(oldp+53,(vlSymsp->TOP__MAC_rx.__PVT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__MAC_rx.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__MAC_rx.__PVT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+57,(vlSymsp->TOP__MAC_rx.__PVT__nMAC_valid));
    bufp->fullCData(oldp+58,(vlSymsp->TOP__MAC_rx.__PVT__next_state),6);
    bufp->fullQData(oldp+59,(vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr),48);
    bufp->fullQData(oldp+61,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr),48);
    bufp->fullBit(oldp+63,(vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr_valid));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr_first_valid));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr_second_valid));
    bufp->fullQData(oldp+66,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+68,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__be_rxd),64);
    bufp->fullBit(oldp+70,(vlSymsp->TOP__MAC_rx__CRC.__PVT__valid));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_init));
    bufp->fullQData(oldp+72,(vlSymsp->TOP__MAC_rx__CRC.__PVT__data_in),64);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__MAC_rx__CRC.__PVT__next_crc),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__MAC_rx.__PVT__crc_out),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_out),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_reg),32);
    bufp->fullQData(oldp+78,(vlSymsp->TOP__MAC_rx.MAC_payload_rcv),64);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__MAC_rx.MAC_valid));
    bufp->fullCData(oldp+81,(vlSymsp->TOP__MAC_rx.bytes_rcv_len),8);
    bufp->fullSData(oldp+82,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__MAC_rx.__PVT__sof_found));
    bufp->fullCData(oldp+84,(vlSymsp->TOP__MAC_rx.__PVT__sof_lane),3);
    bufp->fullSData(oldp+85,(vlSymsp->TOP__MAC_rx.__PVT__FCS_rxc),16);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__MAC_rx.__PVT__crc_check),32);
    bufp->fullWData(oldp+87,(vlSymsp->TOP__MAC_rx.__PVT__frame_store),128);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__MAC_rx.__PVT__FCS_frame),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__MAC_rx.__PVT__rg),32);
    bufp->fullQData(oldp+93,(vlSymsp->TOP__MAC_rx.__PVT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+95,(vlSymsp->TOP__MAC_rx.__PVT__crc_delay));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__MAC_rx.__PVT__soft_dl));
    bufp->fullQData(oldp+97,(vlSymsp->TOP__MAC_rx.__PVT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__MAC_rx.__PVT__bytes_rcv),8);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__MAC_rx.__PVT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__MAC_rx.__PVT__state),6);
    bufp->fullQData(oldp+102,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+104,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__be_rxd),64);
    bufp->fullQData(oldp+106,(vlSymsp->TOP__MAC_rx__payload_cvrt.__PVT__xgmii_rxd),64);
    bufp->fullQData(oldp+108,(vlSymsp->TOP__MAC_rx__payload_cvrt.__PVT__be_rxd),64);
    bufp->fullBit(oldp+110,(vlSelfRef.CLK));
    bufp->fullBit(oldp+111,(vlSelfRef.nRST));
    bufp->fullQData(oldp+112,(vlSelfRef.xgmii_rxd),64);
    bufp->fullCData(oldp+114,(vlSelfRef.xgmii_rxc),8);
    bufp->fullQData(oldp+115,(vlSelfRef.MAC_payload_rcv),64);
    bufp->fullBit(oldp+117,(vlSelfRef.MAC_valid));
    bufp->fullBit(oldp+118,(vlSelfRef.CRC_flush));
    bufp->fullBit(oldp+119,(vlSelfRef.frame_ok));
    bufp->fullCData(oldp+120,(vlSelfRef.bytes_rcv_len),8);
}
