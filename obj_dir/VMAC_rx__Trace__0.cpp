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
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->MAC_rx__DOT__end_valid));
        bufp->chgCData(oldp+1,(vlSelf->MAC_rx__DOT__bytes_offset),3);
        bufp->chgCData(oldp+2,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->MAC_rx__DOT__bytes_offset), 3U))),6);
        bufp->chgCData(oldp+3,(vlSelf->MAC_rx__DOT__byte_END),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+4,(vlSelf->MAC_rx__DOT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+6,(vlSelf->MAC_rx__DOT__crc_in_big),64);
        bufp->chgBit(oldp+8,(vlSelf->MAC_rx__DOT__nsof_found));
        bufp->chgCData(oldp+9,(vlSelf->MAC_rx__DOT__nsof_lane),3);
        bufp->chgSData(oldp+10,(vlSelf->MAC_rx__DOT__FCS_rxc),16);
        bufp->chgCData(oldp+11,(vlSelf->MAC_rx__DOT__FCS_offset),4);
        bufp->chgWData(oldp+12,(vlSelf->MAC_rx__DOT__nframe_store),128);
        bufp->chgIData(oldp+16,(vlSelf->MAC_rx__DOT__nFCS_frame),32);
        bufp->chgBit(oldp+17,(vlSelf->MAC_rx__DOT__ncrc_delay));
        bufp->chgQData(oldp+18,(vlSelf->MAC_rx__DOT__nMAC_payload_rcv),64);
        bufp->chgCData(oldp+20,(vlSelf->MAC_rx__DOT__nbytes_rcv),8);
        bufp->chgCData(oldp+21,(vlSelf->MAC_rx__DOT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+22,(vlSelf->MAC_rx__DOT__nMAC_valid));
        bufp->chgCData(oldp+23,(vlSelf->MAC_rx__DOT__next_state),6);
        bufp->chgQData(oldp+24,((0xffffffffffffULL 
                                 & vlSelf->MAC_rx__DOT__xgmii_rxd_f)),48);
        bufp->chgQData(oldp+26,((((QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                              >> 0x30U))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->MAC_rx__DOT__xgmii_rxd_f)))),48);
        bufp->chgBit(oldp+28,((0xffffffccbbaaULL == 
                               (0xffffffffffffULL & vlSelf->MAC_rx__DOT__xgmii_rxd_f))));
        bufp->chgBit(oldp+29,((0xaaccU == (0xffffU 
                                           & (IData)(
                                                     (vlSelf->MAC_rx__DOT__xgmii_rxd_f 
                                                      >> 0x30U))))));
        bufp->chgBit(oldp+30,((0xbbffffffU == (IData)(vlSelf->MAC_rx__DOT__xgmii_rxd_f))));
        bufp->chgIData(oldp+31,(vlSelf->MAC_rx__DOT__CRC__DOT__next_crc),32);
        bufp->chgBit(oldp+32,(vlSelf->MAC_rx__DOT__xgmii_fcs__DOT__valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+33,(vlSelf->MAC_rx__DOT__crc_init));
        bufp->chgIData(oldp+34,((~ vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg)),32);
        bufp->chgSData(oldp+35,(vlSelf->MAC_rx__DOT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+36,(vlSelf->MAC_rx__DOT__sof_found));
        bufp->chgBit(oldp+37,(vlSelf->MAC_rx__DOT__crc_valid));
        bufp->chgCData(oldp+38,(vlSelf->MAC_rx__DOT__sof_lane),3);
        bufp->chgCData(oldp+39,(vlSelf->MAC_rx__DOT__xgmii_rxc_f),8);
        bufp->chgIData(oldp+40,(vlSelf->MAC_rx__DOT__crc_check),32);
        bufp->chgWData(oldp+41,(vlSelf->MAC_rx__DOT__frame_store),128);
        bufp->chgIData(oldp+45,(vlSelf->MAC_rx__DOT__FCS_frame),32);
        bufp->chgQData(oldp+46,(vlSelf->MAC_rx__DOT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+48,(vlSelf->MAC_rx__DOT__crc_delay));
        bufp->chgBit(oldp+49,(vlSelf->MAC_rx__DOT__soft_dl));
        bufp->chgBit(oldp+50,(vlSelf->MAC_rx__DOT__nsoft_dl));
        bufp->chgCData(oldp+51,(vlSelf->MAC_rx__DOT__bytes_rcv),8);
        bufp->chgCData(oldp+52,(vlSelf->MAC_rx__DOT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+53,(vlSelf->MAC_rx__DOT__state),6);
        bufp->chgIData(oldp+54,(vlSelf->MAC_rx__DOT__CRC__DOT__crc_reg),32);
        bufp->chgQData(oldp+55,(((QData)((IData)(vlSelf->MAC_rx__DOT__FCS_frame)) 
                                 << 0x20U)),64);
    }
    bufp->chgBit(oldp+57,(vlSelf->CLK));
    bufp->chgBit(oldp+58,(vlSelf->nRST));
    bufp->chgQData(oldp+59,(vlSelf->xgmii_rxd),64);
    bufp->chgCData(oldp+61,(vlSelf->xgmii_rxc),8);
    bufp->chgQData(oldp+62,(vlSelf->MAC_payload_rcv),64);
    bufp->chgBit(oldp+64,(vlSelf->MAC_valid));
    bufp->chgBit(oldp+65,(vlSelf->CRC_flush));
    bufp->chgBit(oldp+66,(vlSelf->frame_ok));
    bufp->chgCData(oldp+67,(vlSelf->bytes_rcv_len),8);
    bufp->chgSData(oldp+68,((((IData)(vlSelf->xgmii_rxc) 
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
    bufp->chgWData(oldp+69,(__Vtemp_1),128);
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
}
