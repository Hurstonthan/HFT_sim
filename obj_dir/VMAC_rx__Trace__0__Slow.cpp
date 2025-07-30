// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VMAC_rx__Syms.h"


VL_ATTR_COLD void VMAC_rx___024root__trace_init_sub__TOP__0(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+62,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+63,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("MAC_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+76,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+78,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+80,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+62,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+63,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+5,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+36,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+82,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+37,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+5,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+40,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+42,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+13,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+70,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+86,0,"FCS_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+90,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+47,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+49,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+50,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+19,0,"nMAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+52,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,0,"next_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+25,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+27,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+29,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+7,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+35,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+93,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+62,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+5,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+96,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+7,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+97,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+56,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+98,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+47,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+99,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+93,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VMAC_rx___024root__trace_init_top(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_init_top\n"); );
    // Body
    VMAC_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMAC_rx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VMAC_rx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VMAC_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VMAC_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VMAC_rx___024root__trace_register(VMAC_rx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_register\n"); );
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
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+74,(0x40U),32);
    bufp->fullIData(oldp+75,(8U),32);
    bufp->fullQData(oldp+76,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+78,(0xaaccbbffffffULL),48);
    bufp->fullIData(oldp+80,(0xc704dd7bU),32);
    bufp->fullCData(oldp+81,(vlSelf->MAC_rx__DOT__end_FCS),3);
    bufp->fullCData(oldp+82,(vlSelf->MAC_rx__DOT__str_FCS),3);
    bufp->fullQData(oldp+83,(vlSelf->MAC_rx__DOT__nxgmii_rxd_f),64);
    bufp->fullCData(oldp+85,(vlSelf->MAC_rx__DOT__nxgmii_rxc_f),8);
    bufp->fullWData(oldp+86,(vlSelf->MAC_rx__DOT__FCS_shifted),128);
    bufp->fullSData(oldp+90,(vlSelf->MAC_rx__DOT__crc_ind),16);
    bufp->fullSData(oldp+91,(vlSelf->MAC_rx__DOT__ncrc_ind),16);
    bufp->fullIData(oldp+92,(8U),32);
    bufp->fullBit(oldp+93,(0U));
    bufp->fullIData(oldp+94,(8U),32);
    bufp->fullIData(oldp+95,(3U),32);
    bufp->fullCData(oldp+96,(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+97,(((0x80U & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                       << 5U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                          << 3U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                             << 1U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                                >> 1U)) 
                                                            | ((4U 
                                                                & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                                   >> 3U)) 
                                                               | ((2U 
                                                                   & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                                      >> 5U)) 
                                                                  | (1U 
                                                                     & ((IData)(vlSelf->MAC_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                                        >> 7U)))))))))),8);
    bufp->fullCData(oldp+98,(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+99,(((0x80U & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                       << 5U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                          << 3U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                             << 1U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                                >> 1U)) 
                                                            | ((4U 
                                                                & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                                   >> 3U)) 
                                                               | ((2U 
                                                                   & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                                      >> 5U)) 
                                                                  | (1U 
                                                                     & ((IData)(vlSelf->MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                                        >> 7U)))))))))),8);
    bufp->fullIData(oldp+100,(0x10U),32);
    bufp->fullIData(oldp+101,(4U),32);
    bufp->fullIData(oldp+102,(0x10U),32);
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
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->MAC_rx__DOT__end_valid));
    bufp->fullCData(oldp+2,(vlSelf->MAC_rx__DOT__bytes_offset),3);
    bufp->fullCData(oldp+3,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->MAC_rx__DOT__bytes_offset), 3U))),6);
    bufp->fullCData(oldp+4,(vlSelf->MAC_rx__DOT__byte_END),8);
    bufp->fullQData(oldp+5,(vlSelf->MAC_rx__DOT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+7,(vlSelf->MAC_rx__DOT__crc_in_big),64);
    bufp->fullBit(oldp+9,(vlSelf->MAC_rx__DOT__nsof_found));
    bufp->fullCData(oldp+10,(vlSelf->MAC_rx__DOT__nsof_lane),3);
    bufp->fullSData(oldp+11,(vlSelf->MAC_rx__DOT__FCS_rxc),16);
    bufp->fullCData(oldp+12,(vlSelf->MAC_rx__DOT__FCS_offset),4);
    bufp->fullWData(oldp+13,(vlSelf->MAC_rx__DOT__nframe_store),128);
    bufp->fullIData(oldp+17,(vlSelf->MAC_rx__DOT__nFCS_frame),32);
    bufp->fullBit(oldp+18,(vlSelf->MAC_rx__DOT__ncrc_delay));
    bufp->fullQData(oldp+19,(vlSelf->MAC_rx__DOT__nMAC_payload_rcv),64);
    bufp->fullCData(oldp+21,(vlSelf->MAC_rx__DOT__nbytes_rcv),8);
    bufp->fullCData(oldp+22,(vlSelf->MAC_rx__DOT__nbytes_rcv_dl),8);
    bufp->fullBit(oldp+23,(vlSelf->MAC_rx__DOT__nMAC_valid));
    bufp->fullCData(oldp+24,(vlSelf->MAC_rx__DOT__next_state),6);
    bufp->fullQData(oldp+25,((0xffffffffffffULL & vlSelf->MAC_rx__DOT__xgmii_rxd_f)),48);
    bufp->fullQData(oldp+27,((((QData)((IData)((0xffffU 
                                                & (IData)(
                                                          (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->MAC_rx__DOT__xgmii_rxd_f)))),48);
    bufp->fullBit(oldp+29,((0xffffffccbbaaULL == (0xffffffffffffULL 
                                                  & vlSelf->MAC_rx__DOT__xgmii_rxd_f))));
    bufp->fullBit(oldp+30,((0xaaccU == (0xffffU & (IData)(
                                                          (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))));
    bufp->fullBit(oldp+31,((0xbbffffffU == (IData)(vlSelf->MAC_rx__DOT__xgmii_rxd_f))));
    bufp->fullIData(oldp+32,(vlSelf->MAC_rx__DOT__CRC__DOT__next_crc),32);
    bufp->fullBit(oldp+33,(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid));
    bufp->fullBit(oldp+34,(vlSelf->MAC_rx__DOT__crc_init));
    bufp->fullIData(oldp+35,((~ vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)),32);
    bufp->fullSData(oldp+36,(vlSelf->MAC_rx__DOT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+37,(vlSelf->MAC_rx__DOT__sof_found));
    bufp->fullBit(oldp+38,(vlSelf->MAC_rx__DOT__crc_valid));
    bufp->fullCData(oldp+39,(vlSelf->MAC_rx__DOT__sof_lane),3);
    bufp->fullCData(oldp+40,(vlSelf->MAC_rx__DOT__xgmii_rxc_f),8);
    bufp->fullIData(oldp+41,(vlSelf->MAC_rx__DOT__crc_check),32);
    bufp->fullWData(oldp+42,(vlSelf->MAC_rx__DOT__frame_store),128);
    bufp->fullIData(oldp+46,(vlSelf->MAC_rx__DOT__FCS_frame),32);
    bufp->fullQData(oldp+47,(vlSelf->MAC_rx__DOT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+49,(vlSelf->MAC_rx__DOT__crc_delay));
    bufp->fullBit(oldp+50,(vlSelf->MAC_rx__DOT__soft_dl));
    bufp->fullBit(oldp+51,(vlSelf->MAC_rx__DOT__nsoft_dl));
    bufp->fullCData(oldp+52,(vlSelf->MAC_rx__DOT__bytes_rcv),8);
    bufp->fullCData(oldp+53,(vlSelf->MAC_rx__DOT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+54,(vlSelf->MAC_rx__DOT__state),6);
    bufp->fullIData(oldp+55,(vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg),32);
    bufp->fullQData(oldp+56,(((QData)((IData)(vlSelf->MAC_rx__DOT__FCS_frame)) 
                              << 0x20U)),64);
    bufp->fullBit(oldp+58,(vlSelf->CLK));
    bufp->fullBit(oldp+59,(vlSelf->nRST));
    bufp->fullQData(oldp+60,(vlSelf->xgmii_rxd),64);
    bufp->fullCData(oldp+62,(vlSelf->xgmii_rxc),8);
    bufp->fullQData(oldp+63,(vlSelf->MAC_payload_rcv),64);
    bufp->fullBit(oldp+65,(vlSelf->MAC_valid));
    bufp->fullBit(oldp+66,(vlSelf->CRC_flush));
    bufp->fullBit(oldp+67,(vlSelf->frame_ok));
    bufp->fullCData(oldp+68,(vlSelf->bytes_rcv_len),8);
    bufp->fullSData(oldp+69,((((IData)(vlSelf->xgmii_rxc) 
                               << 8U) | (0xffU & ((IData)(vlSelf->MAC_rx__DOT__xgmii_rxc_frame) 
                                                  >> 8U)))),16);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->MAC_rx__DOT__frame_store[2U]))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->MAC_rx__DOT__frame_store[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->MAC_rx__DOT__frame_store[2U]))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (IData)(vlSelf->xgmii_rxd);
    __Vtemp_1[3U] = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    bufp->fullWData(oldp+70,(__Vtemp_1),128);
}
