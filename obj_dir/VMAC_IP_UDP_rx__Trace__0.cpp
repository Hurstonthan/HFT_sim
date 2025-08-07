// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VMAC_IP_UDP_rx__Syms.h"


void VMAC_IP_UDP_rx___024root__trace_chg_0_sub_0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VMAC_IP_UDP_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_chg_0\n"); );
    // Init
    VMAC_IP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_IP_UDP_rx___024root*>(voidSelf);
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMAC_IP_UDP_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMAC_IP_UDP_rx___024root__trace_chg_0_sub_0(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__end_valid));
        bufp->chgCData(oldp+1,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_offset),3);
        bufp->chgCData(oldp+2,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_offset), 3U))),6);
        bufp->chgCData(oldp+3,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__byte_END),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+4,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsof_found));
        bufp->chgCData(oldp+5,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsof_lane),3);
        bufp->chgWData(oldp+6,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nframe_store),128);
        bufp->chgWData(oldp+10,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_grap),128);
        bufp->chgIData(oldp+14,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nFCS_frame),32);
        bufp->chgIData(oldp+15,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nrg),32);
        bufp->chgBit(oldp+16,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__ncrc_delay));
        bufp->chgCData(oldp+17,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nbytes_rcv_dl),8);
        bufp->chgWData(oldp+18,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__temp),128);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+22,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+24,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_in_big),64);
        bufp->chgQData(oldp+26,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+28,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nbytes_rcv),8);
        bufp->chgBit(oldp+29,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nMAC_valid));
        bufp->chgCData(oldp+30,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__next_state),6);
        bufp->chgQData(oldp+31,((((QData)((IData)((0xffU 
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
        bufp->chgQData(oldp+33,((((QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                              >> 0x30U))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f)))),48);
        bufp->chgBit(oldp+35,((0xffffffccbbaaULL == 
                               (((QData)((IData)((0xffU 
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
                                                                                >> 0x28U)))))))))))));
        bufp->chgBit(oldp+36,((0xaaccU == (0xffffU 
                                           & (IData)(
                                                     (vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f 
                                                      >> 0x30U))))));
        bufp->chgBit(oldp+37,((0xbbffffffU == (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f))));
        bufp->chgIData(oldp+38,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+39,(vlSelf->MAC_IP_UDP_rx__DOT__IP_valid));
        bufp->chgBit(oldp+40,(vlSelf->MAC_IP_UDP_rx__DOT__IP_flush));
        bufp->chgQData(oldp+41,(vlSelf->MAC_IP_UDP_rx__DOT__IP_payload),64);
        bufp->chgBit(oldp+43,(vlSelf->MAC_IP_UDP_rx__DOT__is_udp));
        bufp->chgBit(oldp+44,(vlSelf->MAC_IP_UDP_rx__DOT__is_tcp));
        bufp->chgBit(oldp+45,(vlSelf->MAC_IP_UDP_rx__DOT__MAC_valid));
        bufp->chgBit(oldp+46,(vlSelf->MAC_IP_UDP_rx__DOT__CRC_flush));
        bufp->chgBit(oldp+47,(vlSelf->MAC_IP_UDP_rx__DOT__frame_ok));
        bufp->chgQData(oldp+48,(vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+50,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_rcv),8);
        bufp->chgCData(oldp+51,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__state),4);
        bufp->chgCData(oldp+52,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nstate),4);
        bufp->chgSData(oldp+53,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum),16);
        bufp->chgSData(oldp+54,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum),16);
        bufp->chgQData(oldp+55,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload),64);
        bufp->chgSData(oldp+57,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv),16);
        bufp->chgSData(oldp+58,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv),16);
        bufp->chgBit(oldp+59,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_en));
        bufp->chgBit(oldp+60,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear));
        bufp->chgQData(oldp+61,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_in),64);
        bufp->chgSData(oldp+63,(((0U == (0xffffU & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                                  ? 0xffffU : (0xffffU 
                                               & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),16);
        bufp->chgIData(oldp+64,(((0U == (0xffffU & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                                  ? 0xffffU : (0xffffU 
                                               & vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),17);
        bufp->chgSData(oldp+65,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__dst_addr),16);
        bufp->chgSData(oldp+66,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr),16);
        bufp->chgSData(oldp+67,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__IP_len),16);
        bufp->chgSData(oldp+68,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_len),16);
        bufp->chgBit(oldp+69,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid));
        bufp->chgBit(oldp+70,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp));
        bufp->chgBit(oldp+71,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp));
        bufp->chgSData(oldp+72,((0xffffU & (IData)(
                                                   (vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                                    >> 0x30U)))),16);
        bufp->chgSData(oldp+73,((0xffffU & (IData)(
                                                   (vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                                    >> 0x10U)))),16);
        bufp->chgCData(oldp+74,((0xffU & (IData)((vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                                  >> 8U)))),8);
        bufp->chgCData(oldp+75,((7U & (IData)((vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                               >> 0x1dU)))),3);
        bufp->chgSData(oldp+76,((0x1fffU & (IData)(
                                                   (vlSelf->MAC_IP_UDP_rx__DOT__MAC_payload_rcv 
                                                    >> 0x10U)))),13);
        bufp->chgCData(oldp+77,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__test_valid),4);
        bufp->chgCData(oldp+78,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__ip_version),4);
        bufp->chgBit(oldp+79,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr));
        bufp->chgBit(oldp+80,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid));
        bufp->chgIData(oldp+81,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum),17);
        bufp->chgIData(oldp+82,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum),17);
        bufp->chgIData(oldp+83,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp),20);
        bufp->chgIData(oldp+84,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1),20);
        bufp->chgIData(oldp+85,(vlSelf->MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2),20);
        bufp->chgBit(oldp+86,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_init));
        bufp->chgIData(oldp+87,((~ vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg)),32);
        bufp->chgSData(oldp+88,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+89,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_found));
        bufp->chgBit(oldp+90,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_valid));
        bufp->chgCData(oldp+91,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_lane),3);
        bufp->chgSData(oldp+92,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_rxc),16);
        bufp->chgCData(oldp+93,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_offset),4);
        bufp->chgIData(oldp+94,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_check),32);
        bufp->chgWData(oldp+95,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__frame_store),128);
        bufp->chgIData(oldp+99,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame),32);
        bufp->chgIData(oldp+100,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__rg),32);
        bufp->chgQData(oldp+101,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+103,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_delay));
        bufp->chgBit(oldp+104,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__soft_dl));
        bufp->chgBit(oldp+105,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsoft_dl));
        bufp->chgQData(oldp+106,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+108,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+109,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__state),6);
        bufp->chgIData(oldp+110,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg),32);
        bufp->chgQData(oldp+111,(((QData)((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame)) 
                                  << 0x20U)),64);
        bufp->chgBit(oldp+113,(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid));
        bufp->chgSData(oldp+114,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__cnt),16);
        bufp->chgSData(oldp+115,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_cnt),16);
        bufp->chgSData(oldp+116,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__UDP_len),16);
        bufp->chgSData(oldp+117,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len),16);
        bufp->chgCData(oldp+118,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__current_state),3);
        bufp->chgCData(oldp+119,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__nstate),3);
        bufp->chgBit(oldp+120,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid));
        bufp->chgQData(oldp+121,(vlSelf->MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload),64);
        bufp->chgBit(oldp+123,((0x1234U == (0xffffU 
                                            & (IData)(
                                                      (vlSelf->MAC_IP_UDP_rx__DOT__IP_payload 
                                                       >> 0x20U))))));
        bufp->chgBit(oldp+124,((0x4321U == (0xffffU 
                                            & (IData)(
                                                      (vlSelf->MAC_IP_UDP_rx__DOT__IP_payload 
                                                       >> 0x10U))))));
    }
    bufp->chgBit(oldp+125,(vlSelf->CLK));
    bufp->chgBit(oldp+126,(vlSelf->nRST));
    bufp->chgQData(oldp+127,(vlSelf->xgmii_rxd),64);
    bufp->chgCData(oldp+129,(vlSelf->xgmii_rxc),8);
    bufp->chgBit(oldp+130,(vlSelf->UDP_flush));
    bufp->chgBit(oldp+131,(vlSelf->UDP_valid));
    bufp->chgQData(oldp+132,(vlSelf->UDP_payload),64);
    bufp->chgSData(oldp+134,((((IData)(vlSelf->xgmii_rxc) 
                               << 8U) | (0xffU & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                  >> 8U)))),16);
    bufp->chgSData(oldp+135,(((0U == (IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_lane))
                               ? (((IData)(vlSelf->xgmii_rxc) 
                                   << 8U) | (0xffU 
                                             & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                >> 8U)))
                               : (((IData)(vlSelf->xgmii_rxc) 
                                   << 8U) | (0xffU 
                                             & ((IData)(vlSelf->MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame) 
                                                >> 4U))))),16);
}

void VMAC_IP_UDP_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_IP_UDP_rx___024root__trace_cleanup\n"); );
    // Init
    VMAC_IP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_IP_UDP_rx___024root*>(voidSelf);
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
