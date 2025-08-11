// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__mac_rx__DOT__end_valid));
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__mac_rx__DOT__bytes_offset),3);
        bufp->chgCData(oldp+2,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset), 3U))),6);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__mac_rx__DOT__byte_END),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+4,(vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l),64);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__ip_tx__DOT__temp),20);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__ip_tx__DOT__temp1),20);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__ip_tx__DOT__temp2),20);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__ip_tx__DOT__nIPv4_chk_sum),17);
        bufp->chgSData(oldp+10,(vlSelf->top__DOT__ip_tx__DOT__ntt_len_data),16);
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__mac_rx__DOT__nsof_found));
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__mac_rx__DOT__nsof_lane),3);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__mac_rx__DOT__FCS_offset),4);
        bufp->chgWData(oldp+14,(vlSelf->top__DOT__mac_rx__DOT__nframe_store),128);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__mac_rx__DOT__nFCS_frame),32);
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__mac_rx__DOT__ncrc_delay));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__mac_rx__DOT__ncrc_valid));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__mac_rx__DOT__case_debug));
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv_dl),8);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din),16);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid));
        bufp->chgQData(oldp+25,(vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l),64);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l),8);
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__mac_tx__DOT__IP_send_l));
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__mac_tx__DOT__nstate),7);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc),32);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__udp_tx__DOT__nstate),3);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+32,(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__mac_rx__DOT__crc_in_big),64);
        bufp->chgQData(oldp+36,(vlSelf->top__DOT__mac_rx__DOT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv),8);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__mac_rx__DOT__nMAC_valid));
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__mac_rx__DOT__next_state),6);
        bufp->chgQData(oldp+41,((((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f)))) 
                                  << 0x28U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                            >> 8U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                            >> 0x10U)) 
                                                                   << 0x18U) 
                                                                  | ((0xff0000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x18U)) 
                                                                         << 0x10U)) 
                                                                     | ((0xff00U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                            << 8U)) 
                                                                        | (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x28U))))))))))),48);
        bufp->chgQData(oldp+43,((((QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                              >> 0x30U))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f)))),48);
        bufp->chgIData(oldp+45,((((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f) 
                                  << 0x18U) | ((0xff0000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                            >> 8U)) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                               >> 0x10U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                >> 0x18U))))))),32);
        bufp->chgBit(oldp+46,((0xffffffccbbaaULL == 
                               (((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f)))) 
                                 << 0x28U) | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                           >> 8U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                           >> 0x10U)) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x18U)) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x28U)))))))))))));
        bufp->chgBit(oldp+47,((0xaaccU == (0xffffU 
                                           & (IData)(
                                                     (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                      >> 0x30U))))));
        bufp->chgBit(oldp+48,((0xbbffffffU == (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f))));
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__next_crc),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__IP_send));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__IP_tx_last));
        bufp->chgQData(oldp+52,(vlSelf->top__DOT__IP_transmit),64);
        bufp->chgSData(oldp+54,(vlSelf->top__DOT__tt_len_data),16);
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__IP_valid));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__IP_flush));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__IP_rx_last));
        bufp->chgSData(oldp+58,(vlSelf->top__DOT__IP_pseuder),16);
        bufp->chgQData(oldp+59,(vlSelf->top__DOT__IP_payload),64);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__IP_bytes_rcv_len),8);
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__protocol_data_flag));
        bufp->chgQData(oldp+63,(vlSelf->top__DOT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__MAC_valid));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__CRC_flush));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__frame_ok));
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__mac_rx__DOT__bytes_rcv),8);
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__UDP_flush));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__UDP_valid));
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__is_udp_rx));
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__is_tcp_rx));
        bufp->chgQData(oldp+73,(vlSelf->top__DOT__UDP_payload),64);
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__UDP_send));
        bufp->chgSData(oldp+76,((0xffffU & (IData)(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload))),16);
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__UDP_tx_last));
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__ip_rx__DOT__state),4);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__ip_rx__DOT__nstate),4);
        bufp->chgSData(oldp+80,(vlSelf->top__DOT__ip_rx__DOT__IP_checksum),16);
        bufp->chgSData(oldp+81,(vlSelf->top__DOT__ip_rx__DOT__nIP_checksum),16);
        bufp->chgQData(oldp+82,(vlSelf->top__DOT__ip_rx__DOT__nIP_payload),64);
        bufp->chgSData(oldp+84,(vlSelf->top__DOT__ip_rx__DOT__bytes_rcv),16);
        bufp->chgSData(oldp+85,(vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv),16);
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__ip_rx__DOT__chksum_en));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__ip_rx__DOT__chksum_clear));
        bufp->chgQData(oldp+88,(vlSelf->top__DOT__ip_rx__DOT__chksum_in),64);
        bufp->chgSData(oldp+90,(((0U == (0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))
                                  ? 0xffffU : (0xffffU 
                                               & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))),16);
        bufp->chgIData(oldp+91,(((0U == (0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))
                                  ? 0xffffU : (0xffffU 
                                               & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))),17);
        bufp->chgSData(oldp+92,(vlSelf->top__DOT__ip_rx__DOT__dst_addr),16);
        bufp->chgSData(oldp+93,(vlSelf->top__DOT__ip_rx__DOT__ndst_addr),16);
        bufp->chgSData(oldp+94,(vlSelf->top__DOT__ip_rx__DOT__IP_len),16);
        bufp->chgSData(oldp+95,(vlSelf->top__DOT__ip_rx__DOT__nIP_len),16);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__ip_rx__DOT__nIP_bytes_rcv_len),8);
        bufp->chgSData(oldp+97,(vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder),16);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__ip_rx__DOT__temp),20);
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__ip_rx__DOT__nIP_valid));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__ip_rx__DOT__nIP_last));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__ip_rx__DOT__next_is_udp));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__ip_rx__DOT__next_is_tcp));
        bufp->chgBit(oldp+103,((0x28U < (IData)(vlSelf->top__DOT__ip_rx__DOT__IP_len))));
        bufp->chgSData(oldp+104,((0xffffU & (IData)(
                                                    (vlSelf->top__DOT__MAC_payload_rcv 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+105,((0xffffU & (IData)(
                                                    (vlSelf->top__DOT__MAC_payload_rcv 
                                                     >> 0x10U)))),16);
        bufp->chgCData(oldp+106,((0xffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                   >> 8U)))),8);
        bufp->chgCData(oldp+107,((7U & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                >> 0x1dU)))),3);
        bufp->chgSData(oldp+108,((0x1fffU & (IData)(
                                                    (vlSelf->top__DOT__MAC_payload_rcv 
                                                     >> 0x10U)))),13);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__ip_rx__DOT__test_valid),4);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__ip_rx__DOT__ip_version),4);
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__ip_rx__DOT__is_src_addr));
        bufp->chgBit(oldp+112,(vlSelf->top__DOT__ip_rx__DOT__is_ip_version_valid));
        bufp->chgIData(oldp+113,((IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                          >> 0x10U))),32);
        bufp->chgIData(oldp+114,((((IData)(vlSelf->top__DOT__ip_rx__DOT__dst_addr) 
                                   << 0x10U) | (0xffffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__MAC_payload_rcv 
                                                           >> 0x30U))))),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum),17);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__nTCP_checksum),17);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp),20);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1),20);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp2),20);
        bufp->chgQData(oldp+120,((QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload))))),64);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__ip_tx__DOT__IP_state),3);
        bufp->chgCData(oldp+123,(vlSelf->top__DOT__ip_tx__DOT__nxIP_state),3);
        bufp->chgBit(oldp+124,(vlSelf->top__DOT__ip_tx__DOT__chk_sum_valid));
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__ip_tx__DOT__IPv4_chk_sum),17);
        bufp->chgSData(oldp+126,(vlSelf->top__DOT__ip_tx__DOT__chksum_rslt),16);
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__mac_rx__DOT__crc_init));
        bufp->chgIData(oldp+128,((~ vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__crc_reg)),32);
        bufp->chgSData(oldp+129,(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__mac_rx__DOT__sof_found));
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__mac_rx__DOT__crc_valid));
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__mac_rx__DOT__sof_lane),3);
        bufp->chgSData(oldp+133,(vlSelf->top__DOT__mac_rx__DOT__FCS_rxc),16);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__mac_rx__DOT__crc_check),32);
        bufp->chgWData(oldp+135,(vlSelf->top__DOT__mac_rx__DOT__frame_store),128);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__mac_rx__DOT__FCS_frame),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__mac_rx__DOT__rg),32);
        bufp->chgQData(oldp+141,(vlSelf->top__DOT__mac_rx__DOT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+143,(vlSelf->top__DOT__mac_rx__DOT__crc_delay));
        bufp->chgBit(oldp+144,(vlSelf->top__DOT__mac_rx__DOT__soft_dl));
        bufp->chgBit(oldp+145,(vlSelf->top__DOT__mac_rx__DOT__nsoft_dl));
        bufp->chgQData(oldp+146,(vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+148,(vlSelf->top__DOT__mac_rx__DOT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+149,(vlSelf->top__DOT__mac_rx__DOT__state),6);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__crc_reg),32);
        bufp->chgQData(oldp+151,(((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__FCS_frame)) 
                                  << 0x20U)),64);
        bufp->chgQData(oldp+153,(vlSelf->top__DOT__mac_tx__DOT__xgmii_txd_l),64);
        bufp->chgCData(oldp+155,(vlSelf->top__DOT__mac_tx__DOT__xgmii_txc_l),8);
        bufp->chgCData(oldp+156,(vlSelf->top__DOT__mac_tx__DOT__state),7);
        bufp->chgBit(oldp+157,(vlSelf->top__DOT__mac_tx__DOT__crc_init));
        bufp->chgBit(oldp+158,(vlSelf->top__DOT__mac_tx__DOT__valid));
        bufp->chgBit(oldp+159,(vlSelf->top__DOT__mac_tx__DOT__IP_last_dl));
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__mac_tx__DOT__crc_out),32);
        bufp->chgSData(oldp+161,(vlSelf->top__DOT__mac_tx__DOT__len_counter),16);
        bufp->chgSData(oldp+162,(vlSelf->top__DOT__mac_tx__DOT__nlen_counter),16);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg),32);
        bufp->chgSData(oldp+164,(vlSelf->top__DOT__udp_rx__DOT__cnt),16);
        bufp->chgSData(oldp+165,(vlSelf->top__DOT__udp_rx__DOT__next_cnt),16);
        bufp->chgSData(oldp+166,(vlSelf->top__DOT__udp_rx__DOT__UDP_len),16);
        bufp->chgSData(oldp+167,(vlSelf->top__DOT__udp_rx__DOT__next_UDP_len),16);
        bufp->chgCData(oldp+168,(vlSelf->top__DOT__udp_rx__DOT__current_state),3);
        bufp->chgCData(oldp+169,(vlSelf->top__DOT__udp_rx__DOT__nstate),3);
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__udp_rx__DOT__next_UDP_valid));
        bufp->chgQData(oldp+171,(vlSelf->top__DOT__udp_rx__DOT__next_UDP_payload),64);
        bufp->chgBit(oldp+173,((0x1234U == (0xffffU 
                                            & (IData)(
                                                      (vlSelf->top__DOT__IP_payload 
                                                       >> 0x20U))))));
        bufp->chgBit(oldp+174,((0x4321U == (0xffffU 
                                            & (IData)(
                                                      (vlSelf->top__DOT__IP_payload 
                                                       >> 0x10U))))));
        bufp->chgQData(oldp+175,(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload),64);
        bufp->chgQData(oldp+177,(vlSelf->top__DOT__udp_tx__DOT__next_IP_payload),64);
        bufp->chgCData(oldp+179,(vlSelf->top__DOT__udp_tx__DOT__current_state),3);
        bufp->chgQData(oldp+180,(vlSelf->top__DOT__udp_tx__DOT__header_reg),64);
    }
    bufp->chgBit(oldp+182,(vlSelf->CLK));
    bufp->chgBit(oldp+183,(vlSelf->nRST));
    bufp->chgBit(oldp+184,(vlSelf->TX_en));
    bufp->chgSData(oldp+185,(vlSelf->UDP_len),16);
    bufp->chgQData(oldp+186,(vlSelf->xgmii_txd),64);
    bufp->chgCData(oldp+188,(vlSelf->xgmii_txc),8);
    bufp->chgBit(oldp+189,(vlSelf->frame_end));
    bufp->chgQData(oldp+190,(vlSelf->xgmii_rxd),64);
    bufp->chgCData(oldp+192,(vlSelf->xgmii_rxc),8);
    bufp->chgBit(oldp+193,(vlSelf->protocol_last));
    bufp->chgSData(oldp+194,((((IData)(vlSelf->xgmii_rxc) 
                               << 8U) | (0xffU & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                  >> 8U)))),16);
    bufp->chgSData(oldp+195,(((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__sof_lane))
                               ? (((IData)(vlSelf->xgmii_rxc) 
                                   << 8U) | (0xffU 
                                             & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                >> 8U)))
                               : (((IData)(vlSelf->xgmii_rxc) 
                                   << 8U) | (0xffU 
                                             & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                >> 4U))))),16);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (IData)(vlSelf->xgmii_rxd);
    __Vtemp_1[3U] = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    bufp->chgWData(oldp+196,(__Vtemp_1),128);
    bufp->chgSData(oldp+200,((0xffffU & ((IData)(8U) 
                                         + (IData)(vlSelf->UDP_len)))),16);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
