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
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__end_valid));
        bufp->chgCData(oldp+1,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset),3);
        bufp->chgCData(oldp+2,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_offset), 3U))),6);
        bufp->chgCData(oldp+3,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__byte_END),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+4,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+6,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_in_big),64);
        bufp->chgBit(oldp+8,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_found));
        bufp->chgCData(oldp+9,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsof_lane),3);
        bufp->chgSData(oldp+10,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_rxc),16);
        bufp->chgCData(oldp+11,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_offset),4);
        bufp->chgWData(oldp+12,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nframe_store),128);
        bufp->chgIData(oldp+16,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nFCS_frame),32);
        bufp->chgBit(oldp+17,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__ncrc_delay));
        bufp->chgQData(oldp+18,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_payload_rcv),64);
        bufp->chgCData(oldp+20,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv),8);
        bufp->chgCData(oldp+21,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+22,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nMAC_valid));
        bufp->chgCData(oldp+23,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__next_state),6);
        bufp->chgQData(oldp+24,((0xffffffffffffULL 
                                 & vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)),48);
        bufp->chgQData(oldp+26,((((QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                              >> 0x30U))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))),48);
        bufp->chgBit(oldp+28,((0xffffffffffffULL == 
                               (0xffffffffffffULL & vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f))));
        bufp->chgBit(oldp+29,((0xaaccU == (0xffffU 
                                           & (IData)(
                                                     (vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                      >> 0x30U))))));
        bufp->chgBit(oldp+30,((0xbbffffffU == (IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxd_f))));
        bufp->chgIData(oldp+31,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc),32);
        bufp->chgBit(oldp+32,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+33,(vlSelf->ethernet_rx__DOT__MAC_valid));
        bufp->chgBit(oldp+34,(vlSelf->ethernet_rx__DOT__MAC_flush));
        bufp->chgQData(oldp+35,(vlSelf->ethernet_rx__DOT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+37,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv),8);
        bufp->chgBit(oldp+38,(vlSelf->ethernet_rx__DOT__frame_ok));
        bufp->chgCData(oldp+39,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__state),4);
        bufp->chgCData(oldp+40,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nstate),4);
        bufp->chgSData(oldp+41,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_checksum),16);
        bufp->chgSData(oldp+42,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_checksum),16);
        bufp->chgQData(oldp+43,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_payload),64);
        bufp->chgSData(oldp+45,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__bytes_rcv),16);
        bufp->chgSData(oldp+46,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nbytes_rcv),16);
        bufp->chgBit(oldp+47,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_en));
        bufp->chgBit(oldp+48,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_clear));
        bufp->chgQData(oldp+49,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_in),64);
        bufp->chgSData(oldp+51,((0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum)),16);
        bufp->chgIData(oldp+52,((0xffffU & vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum)),17);
        bufp->chgSData(oldp+53,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__dst_addr),16);
        bufp->chgSData(oldp+54,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__ndst_addr),16);
        bufp->chgSData(oldp+55,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__IP_len),16);
        bufp->chgSData(oldp+56,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_len),16);
        bufp->chgBit(oldp+57,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__nIP_valid));
        bufp->chgBit(oldp+58,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_udp));
        bufp->chgBit(oldp+59,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__next_is_tcp));
        bufp->chgSData(oldp+60,((0xffffU & (IData)(
                                                   (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                    >> 0x30U)))),16);
        bufp->chgSData(oldp+61,((0xffffU & (IData)(
                                                   (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                    >> 0x10U)))),16);
        bufp->chgCData(oldp+62,((0xffU & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                  >> 8U)))),8);
        bufp->chgCData(oldp+63,((7U & (IData)((vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                               >> 0x1dU)))),3);
        bufp->chgSData(oldp+64,((0x1fffU & (IData)(
                                                   (vlSelf->ethernet_rx__DOT__MAC_payload_rcv 
                                                    >> 0x10U)))),13);
        bufp->chgCData(oldp+65,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__test_valid),4);
        bufp->chgCData(oldp+66,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__ip_version),4);
        bufp->chgBit(oldp+67,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_src_addr));
        bufp->chgBit(oldp+68,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__is_ip_version_valid));
        bufp->chgIData(oldp+69,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum),17);
        bufp->chgIData(oldp+70,(vlSelf->ethernet_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum),17);
        bufp->chgBit(oldp+71,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_init));
        bufp->chgIData(oldp+72,((~ vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)),32);
        bufp->chgSData(oldp+73,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+74,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_found));
        bufp->chgBit(oldp+75,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_valid));
        bufp->chgCData(oldp+76,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__sof_lane),3);
        bufp->chgCData(oldp+77,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__xgmii_rxc_f),8);
        bufp->chgIData(oldp+78,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_check),32);
        bufp->chgWData(oldp+79,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__frame_store),128);
        bufp->chgIData(oldp+83,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame),32);
        bufp->chgQData(oldp+84,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+86,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__crc_delay));
        bufp->chgBit(oldp+87,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__soft_dl));
        bufp->chgBit(oldp+88,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__nsoft_dl));
        bufp->chgCData(oldp+89,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+90,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__state),6);
        bufp->chgIData(oldp+91,(vlSelf->ethernet_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg),32);
        bufp->chgQData(oldp+92,(((QData)((IData)(vlSelf->ethernet_rx__DOT__mac_inst__DOT__FCS_frame)) 
                                 << 0x20U)),64);
    }
    bufp->chgBit(oldp+94,(vlSelf->CLK));
    bufp->chgBit(oldp+95,(vlSelf->nRST));
    bufp->chgQData(oldp+96,(vlSelf->xgmii_rxd),64);
    bufp->chgCData(oldp+98,(vlSelf->xgmii_rxc),8);
    bufp->chgBit(oldp+99,(vlSelf->IP_valid));
    bufp->chgBit(oldp+100,(vlSelf->IP_flush));
    bufp->chgQData(oldp+101,(vlSelf->IP_payload),64);
    bufp->chgBit(oldp+103,(vlSelf->is_udp));
    bufp->chgBit(oldp+104,(vlSelf->is_tcp));
    bufp->chgSData(oldp+105,((((IData)(vlSelf->xgmii_rxc) 
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
    bufp->chgWData(oldp+106,(__Vtemp_1),128);
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
}
