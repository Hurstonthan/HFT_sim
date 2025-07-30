// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VMAC_rx__Syms.h"


void VMAC_rx___024root__trace_chg_0_sub_0(VMAC_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VMAC_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_chg_0\n"); );
    // Init
    VMAC_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_rx___024root*>(voidSelf);
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMAC_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMAC_rx___024root__trace_chg_0_sub_0(VMAC_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_chg_0_sub_0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__MAC_rx__payload_cvrt.__PVT__be_rxc),8);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__MAC_rx__CRC.__PVT__rx));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+4,(vlSymsp->TOP__MAC_rx.CLK));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__MAC_rx.nRST));
        bufp->chgQData(oldp+6,(vlSymsp->TOP__MAC_rx.xgmii_rxd),64);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__MAC_rx.xgmii_rxc),8);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__MAC_rx.__PVT__end_valid));
        bufp->chgCData(oldp+10,(vlSymsp->TOP__MAC_rx.__PVT__bytes_offset),3);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__MAC_rx.__PVT__shift_bits),6);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__MAC_rx.__PVT__byte_END),8);
        bufp->chgBit(oldp+13,(vlSymsp->TOP__MAC_rx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__MAC_rx__CRC.__PVT__nRST));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__din),8);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__valid));
        bufp->chgCData(oldp+17,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__idx),3);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+19,(vlSymsp->TOP__MAC_rx.__PVT__nsof_found));
        bufp->chgCData(oldp+20,(vlSymsp->TOP__MAC_rx.__PVT__nsof_lane),3);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__MAC_rx.__PVT__FCS_grap),128);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__MAC_rx.__PVT__i),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [2U] | vlSelfRef.__Vm_traceActivity
                       [3U]) | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+26,(vlSymsp->TOP__MAC_rx.CRC_flush));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__MAC_rx.frame_ok));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__MAC_rx.__PVT__crc_init));
        bufp->chgQData(oldp+29,(vlSymsp->TOP__MAC_rx.__PVT__crc_in),64);
        bufp->chgQData(oldp+31,(vlSymsp->TOP__MAC_rx.__PVT__crc_in_big),64);
        bufp->chgSData(oldp+33,(vlSymsp->TOP__MAC_rx.__PVT__nxgmii_rxc_frame),16);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__MAC_rx.__PVT__crc_valid));
        bufp->chgQData(oldp+35,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxd_f),64);
        bufp->chgSData(oldp+37,(vlSymsp->TOP__MAC_rx.__PVT__nFCS_rxc),16);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__MAC_rx.__PVT__ncrc_check),32);
        bufp->chgWData(oldp+39,(vlSymsp->TOP__MAC_rx.__PVT__nframe_store),128);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__MAC_rx.__PVT__nFCS_frame),32);
        bufp->chgBit(oldp+44,(vlSymsp->TOP__MAC_rx.__PVT__ncrc_delay));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__MAC_rx.__PVT__nsoft_dl));
        bufp->chgQData(oldp+46,(vlSymsp->TOP__MAC_rx.__PVT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__MAC_rx.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__MAC_rx.__PVT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+50,(vlSymsp->TOP__MAC_rx.__PVT__nMAC_valid));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__MAC_rx.__PVT__next_state),6);
        bufp->chgQData(oldp+52,(vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr),48);
        bufp->chgQData(oldp+54,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr),48);
        bufp->chgWData(oldp+56,(vlSymsp->TOP__MAC_rx.__PVT__temp),128);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr_valid));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr_first_valid));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr_second_valid));
        bufp->chgQData(oldp+63,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+65,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__be_rxd),64);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__MAC_rx__CRC.__PVT__valid));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_init));
        bufp->chgQData(oldp+69,(vlSymsp->TOP__MAC_rx__CRC.__PVT__data_in),64);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__MAC_rx__CRC.__PVT__next_crc),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+72,(vlSymsp->TOP__MAC_rx.__PVT__crc_out),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+75,(vlSymsp->TOP__MAC_rx.MAC_payload_rcv),64);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__MAC_rx.MAC_valid));
        bufp->chgCData(oldp+78,(vlSymsp->TOP__MAC_rx.bytes_rcv_len),8);
        bufp->chgSData(oldp+79,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__MAC_rx.__PVT__sof_found));
        bufp->chgCData(oldp+81,(vlSymsp->TOP__MAC_rx.__PVT__sof_lane),3);
        bufp->chgSData(oldp+82,(vlSymsp->TOP__MAC_rx.__PVT__FCS_rxc),16);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__MAC_rx.__PVT__FCS_offset),4);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__MAC_rx.__PVT__crc_check),32);
        bufp->chgWData(oldp+85,(vlSymsp->TOP__MAC_rx.__PVT__frame_store),128);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__MAC_rx.__PVT__FCS_frame),32);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__MAC_rx.__PVT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__MAC_rx.__PVT__crc_delay));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__MAC_rx.__PVT__soft_dl));
        bufp->chgQData(oldp+94,(vlSymsp->TOP__MAC_rx.__PVT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+96,(vlSymsp->TOP__MAC_rx.__PVT__bytes_rcv),8);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__MAC_rx.__PVT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__MAC_rx.__PVT__state),6);
        bufp->chgQData(oldp+99,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+101,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+103,(vlSymsp->TOP__MAC_rx__payload_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+105,(vlSymsp->TOP__MAC_rx__payload_cvrt.__PVT__be_rxd),64);
        bufp->chgSData(oldp+107,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__din),16);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__valid));
        bufp->chgCData(oldp+109,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__idx),4);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+111,(vlSelfRef.CLK));
    bufp->chgBit(oldp+112,(vlSelfRef.nRST));
    bufp->chgQData(oldp+113,(vlSelfRef.xgmii_rxd),64);
    bufp->chgCData(oldp+115,(vlSelfRef.xgmii_rxc),8);
    bufp->chgQData(oldp+116,(vlSelfRef.MAC_payload_rcv),64);
    bufp->chgBit(oldp+118,(vlSelfRef.MAC_valid));
    bufp->chgBit(oldp+119,(vlSelfRef.CRC_flush));
    bufp->chgBit(oldp+120,(vlSelfRef.frame_ok));
    bufp->chgCData(oldp+121,(vlSelfRef.bytes_rcv_len),8);
}

void VMAC_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_cleanup\n"); );
    // Init
    VMAC_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_rx___024root*>(voidSelf);
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
