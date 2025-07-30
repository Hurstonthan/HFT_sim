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
        bufp->chgBit(oldp+2,(vlSymsp->TOP__MAC_rx__CRC.__PVT__rx));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+3,(vlSymsp->TOP__MAC_rx.CLK));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__MAC_rx.nRST));
        bufp->chgQData(oldp+5,(vlSymsp->TOP__MAC_rx.xgmii_rxd),64);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__MAC_rx.xgmii_rxc),8);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__MAC_rx.__PVT__end_valid));
        bufp->chgCData(oldp+9,(vlSymsp->TOP__MAC_rx.__PVT__bytes_offset),3);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__MAC_rx.__PVT__shift_bits),6);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__MAC_rx.__PVT__byte_END),8);
        bufp->chgBit(oldp+12,(vlSymsp->TOP__MAC_rx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__MAC_rx__CRC.__PVT__nRST));
        bufp->chgCData(oldp+14,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__din),8);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__valid));
        bufp->chgCData(oldp+16,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__idx),3);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__MAC_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+18,(vlSymsp->TOP__MAC_rx.__PVT__nsof_found));
        bufp->chgCData(oldp+19,(vlSymsp->TOP__MAC_rx.__PVT__nsof_lane),3);
        bufp->chgWData(oldp+20,(vlSymsp->TOP__MAC_rx.__PVT__FCS_grap),128);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__MAC_rx.__PVT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+25,(vlSymsp->TOP__MAC_rx.CRC_flush));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__MAC_rx.frame_ok));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__MAC_rx.__PVT__crc_init));
        bufp->chgQData(oldp+28,(vlSymsp->TOP__MAC_rx.__PVT__crc_in),64);
        bufp->chgQData(oldp+30,(vlSymsp->TOP__MAC_rx.__PVT__crc_in_big),64);
        bufp->chgSData(oldp+32,(vlSymsp->TOP__MAC_rx.__PVT__nxgmii_rxc_frame),16);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__MAC_rx.__PVT__crc_valid));
        bufp->chgQData(oldp+34,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxd_f),64);
        bufp->chgSData(oldp+36,(vlSymsp->TOP__MAC_rx.__PVT__nFCS_rxc),16);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__MAC_rx.__PVT__ncrc_check),32);
        bufp->chgWData(oldp+38,(vlSymsp->TOP__MAC_rx.__PVT__nframe_store),128);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__MAC_rx.__PVT__nFCS_frame),32);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__MAC_rx.__PVT__ncrc_delay));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__MAC_rx.__PVT__nsoft_dl));
        bufp->chgQData(oldp+45,(vlSymsp->TOP__MAC_rx.__PVT__nMAC_payload_rcv),64);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__MAC_rx.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__MAC_rx.__PVT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__MAC_rx.__PVT__nMAC_valid));
        bufp->chgCData(oldp+50,(vlSymsp->TOP__MAC_rx.__PVT__next_state),6);
        bufp->chgQData(oldp+51,(vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr),48);
        bufp->chgQData(oldp+53,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr),48);
        bufp->chgBit(oldp+55,(vlSymsp->TOP__MAC_rx.__PVT__mac_dest_addr_valid));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr_first_valid));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__MAC_rx.__PVT__mac_src_addr_second_valid));
        bufp->chgQData(oldp+58,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+60,(vlSymsp->TOP__MAC_rx__crc_convert.__PVT__be_rxd),64);
        bufp->chgBit(oldp+62,(vlSymsp->TOP__MAC_rx__CRC.__PVT__valid));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_init));
        bufp->chgQData(oldp+64,(vlSymsp->TOP__MAC_rx__CRC.__PVT__data_in),64);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__MAC_rx__CRC.__PVT__next_crc),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+67,(vlSymsp->TOP__MAC_rx.__PVT__crc_out),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__MAC_rx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+70,(vlSymsp->TOP__MAC_rx.MAC_payload_rcv),64);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__MAC_rx.MAC_valid));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__MAC_rx.bytes_rcv_len),8);
        bufp->chgSData(oldp+74,(vlSymsp->TOP__MAC_rx.__PVT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__MAC_rx.__PVT__sof_found));
        bufp->chgCData(oldp+76,(vlSymsp->TOP__MAC_rx.__PVT__sof_lane),3);
        bufp->chgSData(oldp+77,(vlSymsp->TOP__MAC_rx.__PVT__FCS_rxc),16);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__MAC_rx.__PVT__FCS_offset),4);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__MAC_rx.__PVT__crc_check),32);
        bufp->chgWData(oldp+80,(vlSymsp->TOP__MAC_rx.__PVT__frame_store),128);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__MAC_rx.__PVT__FCS_frame),32);
        bufp->chgQData(oldp+85,(vlSymsp->TOP__MAC_rx.__PVT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__MAC_rx.__PVT__crc_delay));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__MAC_rx.__PVT__soft_dl));
        bufp->chgCData(oldp+89,(vlSymsp->TOP__MAC_rx.__PVT__bytes_rcv),8);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__MAC_rx.__PVT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__MAC_rx.__PVT__state),6);
        bufp->chgQData(oldp+92,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+94,(vlSymsp->TOP__MAC_rx__crc_frame_convert.__PVT__be_rxd),64);
        bufp->chgSData(oldp+96,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__din),16);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__valid));
        bufp->chgCData(oldp+98,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__idx),4);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__MAC_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+100,(vlSelfRef.CLK));
    bufp->chgBit(oldp+101,(vlSelfRef.nRST));
    bufp->chgQData(oldp+102,(vlSelfRef.xgmii_rxd),64);
    bufp->chgCData(oldp+104,(vlSelfRef.xgmii_rxc),8);
    bufp->chgQData(oldp+105,(vlSelfRef.MAC_payload_rcv),64);
    bufp->chgBit(oldp+107,(vlSelfRef.MAC_valid));
    bufp->chgBit(oldp+108,(vlSelfRef.CRC_flush));
    bufp->chgBit(oldp+109,(vlSelfRef.frame_ok));
    bufp->chgCData(oldp+110,(vlSelfRef.bytes_rcv_len),8);
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
}
