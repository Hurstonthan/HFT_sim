// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vethernet_rx__Syms.h"


void Vethernet_rx___024root__trace_chg_0_sub_0(Vethernet_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vethernet_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_chg_0\n"); );
    // Init
    Vethernet_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vethernet_rx___024root*>(voidSelf);
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vethernet_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vethernet_rx___024root__trace_chg_0_sub_0(Vethernet_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_chg_0_sub_0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__be_rxc),8);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__rx));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+5,(vlSymsp->TOP__ethernet_rx.CLK));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__ethernet_rx.nRST));
        bufp->chgQData(oldp+7,(vlSymsp->TOP__ethernet_rx.xgmii_rxd),64);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__ethernet_rx.xgmii_rxc),8);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__CLK));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nRST));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CLK));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nRST));
        bufp->chgQData(oldp+14,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxc),8);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__end_valid));
        bufp->chgCData(oldp+18,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_offset),3);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__shift_bits),6);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__byte_END),8);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__CLK));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__nRST));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__CLK));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__nRST));
        bufp->chgCData(oldp+25,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__din),8);
        bufp->chgBit(oldp+26,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__valid));
        bufp->chgCData(oldp+27,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__idx),3);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgCData(oldp+29,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_offset),4);
        bufp->chgWData(oldp+30,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_grap),128);
        bufp->chgSData(oldp+34,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__din),16);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__valid));
        bufp->chgCData(oldp+36,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__idx),4);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [2U] | vlSelfRef.__Vm_traceActivity
                       [3U]) | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgBit(oldp+38,(vlSymsp->TOP__ethernet_rx.__PVT__MAC_flush));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__ethernet_rx.__PVT__frame_ok));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_flush));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__CRC_flush));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__frame_ok));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_init));
        bufp->chgQData(oldp+44,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_in),64);
        bufp->chgQData(oldp+46,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_in_big),64);
        bufp->chgSData(oldp+48,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nxgmii_rxc_frame),16);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_valid));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nsof_found));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nsof_lane),3);
        bufp->chgQData(oldp+52,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+54,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxd_f_cvt),64);
        bufp->chgSData(oldp+56,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nFCS_rxc),16);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__ncrc_check),32);
        bufp->chgWData(oldp+58,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nframe_store),128);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nFCS_frame),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nrg),32);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__ncrc_delay));
        bufp->chgIData(oldp+65,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__i),32);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nsoft_dl));
        bufp->chgQData(oldp+67,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__nMAC_valid));
        bufp->chgCData(oldp+72,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__next_state),6);
        bufp->chgQData(oldp+73,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr),48);
        bufp->chgQData(oldp+75,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_src_addr),48);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_dest_addr_valid));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_src_addr_first_valid));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__mac_src_addr_second_valid));
        bufp->chgQData(oldp+80,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+82,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+84,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+86,(vlSymsp->TOP__ethernet_rx__mac_inst__xgmii_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__valid));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_init));
        bufp->chgQData(oldp+90,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__data_in),64);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__next_crc),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+93,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_pl),16);
        bufp->chgSData(oldp+94,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_checksum_pl),16);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_checksum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+96,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_out),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__ethernet_rx__mac_inst__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+99,(vlSymsp->TOP__ethernet_rx.IP_valid));
        bufp->chgQData(oldp+100,(vlSymsp->TOP__ethernet_rx.IP_payload),64);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ethernet_rx.is_udp));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ethernet_rx.is_tcp));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_valid));
        bufp->chgQData(oldp+105,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_payload),64);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_udp));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_tcp));
        bufp->chgCData(oldp+109,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__state),4);
        bufp->chgSData(oldp+110,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_checksum),16);
        bufp->chgSData(oldp+111,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__bytes_rcv),16);
        bufp->chgSData(oldp+112,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__dst_addr),16);
        bufp->chgSData(oldp+113,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_len),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+114,(vlSymsp->TOP__ethernet_rx.__PVT__MAC_valid));
        bufp->chgQData(oldp+115,(vlSymsp->TOP__ethernet_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__ethernet_rx.__PVT__bytes_rcv_len),8);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_valid));
        bufp->chgQData(oldp+119,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__bytes_rcv_len),8);
        bufp->chgQData(oldp+122,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_valid));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_rcv_len),8);
        bufp->chgSData(oldp+126,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__sof_found));
        bufp->chgCData(oldp+128,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__sof_lane),3);
        bufp->chgSData(oldp+129,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_rxc),16);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_check),32);
        bufp->chgWData(oldp+131,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__frame_store),128);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_frame),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__rg),32);
        bufp->chgQData(oldp+137,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+139,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__crc_delay));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__soft_dl));
        bufp->chgQData(oldp+141,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_rcv),8);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__ethernet_rx__mac_inst.__PVT__state),6);
        bufp->chgQData(oldp+146,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+148,(vlSymsp->TOP__ethernet_rx__mac_inst__crc_frame_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+150,(vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+152,(vlSymsp->TOP__ethernet_rx__mac_inst__payload_cvrt.__PVT__be_rxd),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ethernet_rx.IP_flush));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__IP_flush));
        bufp->chgCData(oldp+156,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nstate),4);
        bufp->chgSData(oldp+157,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_checksum),16);
        bufp->chgQData(oldp+158,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_payload),64);
        bufp->chgSData(oldp+160,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nbytes_rcv),16);
        bufp->chgBit(oldp+161,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_en));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_clear));
        bufp->chgQData(oldp+163,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_in),64);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__chksum_final),17);
        bufp->chgSData(oldp+166,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__ndst_addr),16);
        bufp->chgSData(oldp+167,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_len),16);
        bufp->chgBit(oldp+168,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__nIP_valid));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__next_is_udp));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__next_is_tcp));
        bufp->chgSData(oldp+171,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__total_len),16);
        bufp->chgSData(oldp+172,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__frags_flag),16);
        bufp->chgCData(oldp+173,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__ttl),8);
        bufp->chgCData(oldp+174,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__flags),3);
        bufp->chgSData(oldp+175,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__fragoff),13);
        bufp->chgCData(oldp+176,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__test_valid),4);
        bufp->chgCData(oldp+177,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__ip_version),4);
        bufp->chgBit(oldp+178,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_src_addr));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ethernet_rx__ip_inst.__PVT__is_ip_version_valid));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__FIFO_rd_en));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__clear));
        bufp->chgQData(oldp+182,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__TCP_payload_tx),64);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__ethernet_rx__ip_inst__chksum_inst.__PVT__temp),20);
    }
    bufp->chgBit(oldp+186,(vlSelfRef.CLK));
    bufp->chgBit(oldp+187,(vlSelfRef.nRST));
    bufp->chgQData(oldp+188,(vlSelfRef.xgmii_rxd),64);
    bufp->chgCData(oldp+190,(vlSelfRef.xgmii_rxc),8);
    bufp->chgBit(oldp+191,(vlSelfRef.IP_valid));
    bufp->chgBit(oldp+192,(vlSelfRef.IP_flush));
    bufp->chgQData(oldp+193,(vlSelfRef.IP_payload),64);
    bufp->chgBit(oldp+195,(vlSelfRef.is_udp));
    bufp->chgBit(oldp+196,(vlSelfRef.is_tcp));
}

void Vethernet_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_cleanup\n"); );
    // Init
    Vethernet_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vethernet_rx___024root*>(voidSelf);
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
