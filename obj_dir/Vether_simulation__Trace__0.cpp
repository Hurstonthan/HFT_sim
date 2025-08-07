// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vether_simulation__Syms.h"


void Vether_simulation___024root__trace_chg_0_sub_0(Vether_simulation___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vether_simulation___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_chg_0\n"); );
    // Init
    Vether_simulation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_simulation___024root*>(voidSelf);
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vether_simulation___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vether_simulation___024root__trace_chg_0_sub_0(Vether_simulation___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_chg_0_sub_0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__end_ss_int));
        bufp->chgSData(oldp+1,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_re_trans_int),16);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__end_ss_int));
        bufp->chgSData(oldp+3,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_re_trans_int),16);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_bytes_rcv),8);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__end_ss));
        bufp->chgSData(oldp+6,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_re_trans),16);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_bytes_rcv),8);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__end_ss));
        bufp->chgSData(oldp+9,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_re_trans),16);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_up));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_up));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__gen_en));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__gen_en));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__clear));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__clear));
        bufp->chgSData(oldp+16,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__src_port),16);
        bufp->chgSData(oldp+17,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
        bufp->chgSData(oldp+18,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__src_port),16);
        bufp->chgSData(oldp+19,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__end_ss));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__end_ss));
        bufp->chgCData(oldp+24,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__rx));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__rx));
        bufp->chgIData(oldp+34,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+38,(vlSymsp->TOP__ether_simulation.CLK));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__ether_simulation.nRST));
        bufp->chgCData(oldp+40,(vlSymsp->TOP__ether_simulation.tb_count),8);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__ether_simulation.TX_en_svr));
        bufp->chgQData(oldp+42,(vlSymsp->TOP__ether_simulation.xgmii_rxd_svr),64);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__ether_simulation.xgmii_rxc_svr),8);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__ether_simulation.axis_last_svr));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_svr));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__ether_simulation.len_seq_svr),32);
        bufp->chgQData(oldp+48,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_svr),64);
        bufp->chgBit(oldp+50,(vlSymsp->TOP__ether_simulation.axis_r_en_svr));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__ether_simulation.TX_en_clt));
        bufp->chgQData(oldp+52,(vlSymsp->TOP__ether_simulation.xgmii_rxd_clt),64);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__ether_simulation.xgmii_rxc_clt),8);
        bufp->chgBit(oldp+55,(vlSymsp->TOP__ether_simulation.axis_last_clt));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_clt));
        bufp->chgIData(oldp+57,(vlSymsp->TOP__ether_simulation.len_seq_clt),32);
        bufp->chgQData(oldp+58,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_clt),64);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__ether_simulation.axis_r_en_clt));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CLK));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nRST));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TX_en));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_last));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_en));
        bufp->chgIData(oldp+66,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__len_seq),32);
        bufp->chgQData(oldp+67,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_en));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CLK));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nRST));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TX_en));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_last));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_en));
        bufp->chgIData(oldp+75,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__len_seq),32);
        bufp->chgQData(oldp+76,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_en));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__CLK));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nRST));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_en));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__CLK));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nRST));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_en));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__CLK));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nRST));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__CLK));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nRST));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CLK));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nRST));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CLK));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nRST));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__CLK));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nRST));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__TX_en));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__CLK));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nRST));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__TX_en));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__CLK));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nRST));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__CLK));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nRST));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__CLK));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nRST));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TX_en));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_TX_en));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_axis_last));
        bufp->chgQData(oldp+108,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__CLK));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nRST));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TX_en));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_TX_en));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_axis_last));
        bufp->chgQData(oldp+115,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__CLK));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nRST));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TX_en));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__axis_last));
        bufp->chgIData(oldp+122,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__len_seq),32);
        bufp->chgQData(oldp+123,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__CLK));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nRST));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TX_en));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__axis_last));
        bufp->chgIData(oldp+130,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__len_seq),32);
        bufp->chgQData(oldp+131,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__CLK));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__nRST));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__CLK));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__nRST));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__CLK));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nRST));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__axis_last));
        bufp->chgQData(oldp+141,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
        bufp->chgBit(oldp+143,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TX_en));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__CLK));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nRST));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__axis_last));
        bufp->chgQData(oldp+148,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
        bufp->chgBit(oldp+150,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TX_en));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__CLK));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nRST));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__CLK));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nRST));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__CLK));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nRST));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__CLK));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nRST));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__CLK));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nRST));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__CLK));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nRST));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__CLK));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nRST));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__CLK));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nRST));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__CLK));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nRST));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__CLK));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nRST));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x22U])))) {
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ether_simulation.frame_end_svr));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_end));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__frame_end));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send_l));
        bufp->chgCData(oldp+183,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nstate),7);
        bufp->chgBit(oldp+184,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_init));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__valid));
        bufp->chgSData(oldp+186,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nlen_counter),16);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__valid));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_init));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x23U])))) {
        bufp->chgBit(oldp+189,(vlSymsp->TOP__ether_simulation.frame_end_clt));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_end));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__frame_end));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send_l));
        bufp->chgCData(oldp+193,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nstate),7);
        bufp->chgBit(oldp+194,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_init));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__valid));
        bufp->chgSData(oldp+196,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nlen_counter),16);
        bufp->chgBit(oldp+197,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__valid));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_init));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x24U])))) {
        bufp->chgSData(oldp+199,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp),20);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp1),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x25U])))) {
        bufp->chgSData(oldp+204,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp),20);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp1),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x36U])))) {
        bufp->chgQData(oldp+209,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+211,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+212,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+214,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+215,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+217,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+218,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+220,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+221,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+223,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+224,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+226,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+227,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+229,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+230,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+232,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+233,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+235,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+236,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+238,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+239,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+241,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+242,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+244,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+245,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+247,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+248,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+250,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+251,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+253,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+254,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+256,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgCData(oldp+257,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+258,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__naxis_r_valid));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_flush_l));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nhandshake));
        bufp->chgCData(oldp+264,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nwr_ptr),4);
        bufp->chgCData(oldp+265,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_ptr),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x37U])))) {
        bufp->chgQData(oldp+266,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+268,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+269,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+271,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+272,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+274,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+275,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+277,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+278,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+280,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+281,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+283,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+284,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+286,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+287,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+289,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+290,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+292,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+293,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+295,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+296,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+298,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+299,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+301,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+302,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+304,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+305,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+307,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+308,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+310,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+311,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+313,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+315,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
        bufp->chgIData(oldp+316,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
        bufp->chgBit(oldp+317,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__naxis_r_valid));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_flush_l));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nhandshake));
        bufp->chgCData(oldp+321,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nwr_ptr),4);
        bufp->chgCData(oldp+322,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_ptr),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x38U])))) {
        bufp->chgSData(oldp+323,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+324,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+325,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+327,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+328,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+329,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+330,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+331,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+332,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+334,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+335,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+336,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+337,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+338,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+339,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+340,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+341,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+342,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+343,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+344,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+345,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+346,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+347,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+348,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+349,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+350,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+351,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+352,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+353,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+354,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+355,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+356,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+357,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+358,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+359,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+360,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+361,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+362,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+363,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+364,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+365,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+366,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+367,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+368,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+369,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+370,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+371,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+372,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+373,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+374,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+375,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+376,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+377,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+378,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+379,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+380,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+381,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+382,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+383,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+384,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+385,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+386,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+387,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+388,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+389,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+390,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+391,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+392,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+393,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+394,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+395,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+396,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+397,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+398,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+399,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+400,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+401,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+402,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+403,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+404,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+405,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+406,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+407,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+408,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+409,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+410,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+411,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+412,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+413,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+414,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+415,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+416,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+417,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+418,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+419,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+420,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+421,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+422,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+423,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+424,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+425,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+426,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+427,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+428,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+429,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+430,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+433,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+434,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+435,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+437,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+439,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+441,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+443,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+445,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+447,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+449,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+451,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+453,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+455,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+457,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+459,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+461,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+463,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+465,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+467,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+469,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+471,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+472,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+474,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+475,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+476,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nchecksum_l),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x39U])))) {
        bufp->chgSData(oldp+477,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+478,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+479,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+484,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+485,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+486,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+487,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+488,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+489,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+490,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+491,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+492,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+493,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+494,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+495,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+496,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+497,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+498,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+499,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+500,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+501,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+502,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+503,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+504,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+505,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+506,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+507,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+508,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+509,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+510,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+511,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+512,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+513,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+514,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+515,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+516,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+517,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+518,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+519,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+520,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+521,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+522,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+523,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+524,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+525,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+526,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+527,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+528,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+529,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+530,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+531,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+532,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+533,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+534,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+535,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+536,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+537,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+538,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+539,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+540,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+541,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+542,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+543,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+544,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+545,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+546,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+547,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+548,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+549,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+550,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+551,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+552,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+553,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+554,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+555,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+556,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+557,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+558,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+559,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+560,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+561,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+562,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+563,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+564,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+565,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+566,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+567,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+568,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+569,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+570,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+571,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+572,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+573,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+574,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+575,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+576,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+577,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+578,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+579,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+580,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+581,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+582,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+583,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+584,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+587,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+588,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+589,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+590,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+591,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+593,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+595,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+597,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+599,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+601,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+603,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+605,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+607,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+609,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+611,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+613,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+615,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+617,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+619,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+621,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+623,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+625,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+626,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+629,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+630,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nchecksum_l),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x32U])))) {
        bufp->chgBit(oldp+631,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CRC_flush));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_ok));
        bufp->chgBit(oldp+633,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_flush));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CRC_flush));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_ok));
        bufp->chgBit(oldp+636,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_init));
        bufp->chgQData(oldp+637,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in),64);
        bufp->chgQData(oldp+639,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in_big),64);
        bufp->chgSData(oldp+641,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
        bufp->chgBit(oldp+642,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_found));
        bufp->chgCData(oldp+643,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_lane),3);
        bufp->chgQData(oldp+644,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+646,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
        bufp->chgSData(oldp+648,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_rxc),16);
        bufp->chgIData(oldp+649,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_check),32);
        bufp->chgWData(oldp+650,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nframe_store),128);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_frame),32);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nrg),32);
        bufp->chgBit(oldp+656,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_delay));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_valid));
        bufp->chgIData(oldp+658,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__i),32);
        bufp->chgBit(oldp+659,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsoft_dl));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__case_debug));
        bufp->chgQData(oldp+661,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+664,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+665,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_valid));
        bufp->chgCData(oldp+666,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__next_state),6);
        bufp->chgQData(oldp+667,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr),48);
        bufp->chgQData(oldp+669,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr),48);
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr_valid));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_first_valid));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_second_valid));
        bufp->chgQData(oldp+674,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+676,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+678,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+680,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+682,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_init));
        bufp->chgQData(oldp+683,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__data_in),64);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__next_crc),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x33U])))) {
        bufp->chgBit(oldp+686,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CRC_flush));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_ok));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_flush));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CRC_flush));
        bufp->chgBit(oldp+690,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_ok));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_init));
        bufp->chgQData(oldp+692,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in),64);
        bufp->chgQData(oldp+694,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in_big),64);
        bufp->chgSData(oldp+696,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
        bufp->chgBit(oldp+697,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_found));
        bufp->chgCData(oldp+698,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_lane),3);
        bufp->chgQData(oldp+699,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+701,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
        bufp->chgSData(oldp+703,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_rxc),16);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_check),32);
        bufp->chgWData(oldp+705,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nframe_store),128);
        bufp->chgIData(oldp+709,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_frame),32);
        bufp->chgIData(oldp+710,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nrg),32);
        bufp->chgBit(oldp+711,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_delay));
        bufp->chgBit(oldp+712,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_valid));
        bufp->chgIData(oldp+713,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__i),32);
        bufp->chgBit(oldp+714,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsoft_dl));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__case_debug));
        bufp->chgQData(oldp+716,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+720,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_valid));
        bufp->chgCData(oldp+721,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__next_state),6);
        bufp->chgQData(oldp+722,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr),48);
        bufp->chgQData(oldp+724,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr),48);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr_valid));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_first_valid));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_second_valid));
        bufp->chgQData(oldp+729,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+731,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+733,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+735,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_init));
        bufp->chgQData(oldp+738,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__data_in),64);
        bufp->chgIData(oldp+740,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__next_crc),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+741,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+742,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+743,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+744,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+745,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+746,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+747,(vlSymsp->TOP__ether_simulation.axis_r_valid_svr));
        bufp->chgQData(oldp+748,(vlSymsp->TOP__ether_simulation.axis_rd_data_svr),64);
        bufp->chgBit(oldp+750,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_valid));
        bufp->chgQData(oldp+751,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_rd_data),64);
        bufp->chgCData(oldp+753,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+754,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+755,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+756,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+757,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__full));
        bufp->chgCData(oldp+758,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+760,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+761,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+762,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+764,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+766,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+768,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+769,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+771,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+772,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+774,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+775,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+777,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+778,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+780,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+781,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+783,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+784,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+786,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+787,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+789,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+790,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+792,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+793,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+795,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+796,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+798,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+799,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+801,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+802,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+804,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+805,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+807,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+808,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+810,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+811,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+813,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgQData(oldp+814,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+816,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+819,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+820,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+822,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake));
        bufp->chgQData(oldp+825,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[0]),64);
        bufp->chgQData(oldp+827,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[1]),64);
        bufp->chgQData(oldp+829,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[2]),64);
        bufp->chgQData(oldp+831,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[3]),64);
        bufp->chgQData(oldp+833,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[4]),64);
        bufp->chgQData(oldp+835,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[5]),64);
        bufp->chgQData(oldp+837,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[6]),64);
        bufp->chgQData(oldp+839,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[7]),64);
        bufp->chgQData(oldp+841,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[8]),64);
        bufp->chgQData(oldp+843,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[9]),64);
        bufp->chgQData(oldp+845,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[10]),64);
        bufp->chgQData(oldp+847,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[11]),64);
        bufp->chgQData(oldp+849,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[12]),64);
        bufp->chgQData(oldp+851,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[13]),64);
        bufp->chgQData(oldp+853,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[14]),64);
        bufp->chgQData(oldp+855,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[15]),64);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
        bufp->chgCData(oldp+862,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
        bufp->chgCData(oldp+863,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
        bufp->chgCData(oldp+865,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
        bufp->chgCData(oldp+866,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+875,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+878,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+879,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+880,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__full));
        bufp->chgBit(oldp+881,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+882,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgSData(oldp+884,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
        bufp->chgBit(oldp+885,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+886,(vlSymsp->TOP__ether_simulation.axis_r_valid_clt));
        bufp->chgQData(oldp+887,(vlSymsp->TOP__ether_simulation.axis_rd_data_clt),64);
        bufp->chgBit(oldp+889,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_valid));
        bufp->chgQData(oldp+890,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_rd_data),64);
        bufp->chgCData(oldp+892,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+894,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+895,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+896,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__full));
        bufp->chgCData(oldp+897,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+899,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+900,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+901,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+903,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+905,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+907,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+908,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+910,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+911,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+913,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+914,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+916,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+917,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+919,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+920,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+922,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+923,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+925,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+926,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+928,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+929,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+931,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+932,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+934,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+935,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+937,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+938,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+940,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+941,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+943,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+944,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+946,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+947,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+949,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+950,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+952,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgQData(oldp+953,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+955,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+956,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+957,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+958,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+959,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+961,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake));
        bufp->chgQData(oldp+964,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[0]),64);
        bufp->chgQData(oldp+966,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[1]),64);
        bufp->chgQData(oldp+968,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[2]),64);
        bufp->chgQData(oldp+970,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[3]),64);
        bufp->chgQData(oldp+972,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[4]),64);
        bufp->chgQData(oldp+974,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[5]),64);
        bufp->chgQData(oldp+976,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[6]),64);
        bufp->chgQData(oldp+978,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[7]),64);
        bufp->chgQData(oldp+980,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[8]),64);
        bufp->chgQData(oldp+982,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[9]),64);
        bufp->chgQData(oldp+984,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[10]),64);
        bufp->chgQData(oldp+986,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[11]),64);
        bufp->chgQData(oldp+988,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[12]),64);
        bufp->chgQData(oldp+990,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[13]),64);
        bufp->chgQData(oldp+992,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[14]),64);
        bufp->chgQData(oldp+994,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[15]),64);
        bufp->chgCData(oldp+996,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
        bufp->chgCData(oldp+997,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
        bufp->chgCData(oldp+999,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+1013,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+1014,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+1015,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+1018,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__full));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+1021,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgSData(oldp+1023,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
        bufp->chgBit(oldp+1024,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+1025,(vlSymsp->TOP__ether_simulation.seq_num_svr),32);
        bufp->chgIData(oldp+1026,(vlSymsp->TOP__ether_simulation.rcv_next_svr),32);
        bufp->chgIData(oldp+1027,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1028,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num),32);
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__handshake_done_int));
        bufp->chgIData(oldp+1030,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__out_order_req_int));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake_done));
        bufp->chgIData(oldp+1033,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+1035,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__out_order_req));
        bufp->chgIData(oldp+1037,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1038,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__clear_timeout));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+1042,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req));
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+1044,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+1045,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+1046,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1049,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+1051,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+1052,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+1053,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+1054,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+1055,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+1056,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x60U))));
        bufp->chgIData(oldp+1057,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1058,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1059,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1060,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1061,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x60U))));
        bufp->chgIData(oldp+1062,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1063,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1064,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1065,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1066,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x60U))));
        bufp->chgIData(oldp+1067,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1068,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1069,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1070,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1071,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x60U))));
        bufp->chgIData(oldp+1072,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1073,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1074,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1075,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1076,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x60U))));
        bufp->chgIData(oldp+1077,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1078,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1079,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1080,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1081,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x60U))));
        bufp->chgIData(oldp+1082,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1083,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1084,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1085,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1086,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x60U))));
        bufp->chgIData(oldp+1087,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1088,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1089,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1090,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1091,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x60U))));
        bufp->chgIData(oldp+1092,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1093,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1094,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1095,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1096,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x60U))));
        bufp->chgIData(oldp+1097,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1098,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1099,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1100,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1101,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x60U))));
        bufp->chgIData(oldp+1102,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1103,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1104,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1105,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+1106,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1107,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
        bufp->chgIData(oldp+1108,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+1111,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+1112,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgSData(oldp+1117,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgIData(oldp+1118,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgIData(oldp+1119,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
        bufp->chgCData(oldp+1120,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+1121,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+1122,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+1123,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+1124,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+1125,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+1126,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+1127,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+1128,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+1129,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+1130,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+1131,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__clear));
        bufp->chgBit(oldp+1133,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_enable));
        bufp->chgSData(oldp+1134,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+1136,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+1137,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1138,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+1141,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+1142,(vlSymsp->TOP__ether_simulation.seq_num_clt),32);
        bufp->chgIData(oldp+1143,(vlSymsp->TOP__ether_simulation.rcv_next_clt),32);
        bufp->chgIData(oldp+1144,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1145,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num),32);
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__handshake_done_int));
        bufp->chgIData(oldp+1147,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+1148,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__out_order_req_int));
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake_done));
        bufp->chgIData(oldp+1150,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+1152,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order_req));
        bufp->chgIData(oldp+1154,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1155,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__clear_timeout));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req));
        bufp->chgBit(oldp+1160,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+1161,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+1162,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+1163,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgBit(oldp+1165,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1166,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+1168,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+1169,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+1170,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+1171,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+1172,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+1173,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x60U))));
        bufp->chgIData(oldp+1174,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1175,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1176,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1177,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1178,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x60U))));
        bufp->chgIData(oldp+1179,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1180,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1181,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1182,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1183,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x60U))));
        bufp->chgIData(oldp+1184,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1185,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1186,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1187,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1188,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x60U))));
        bufp->chgIData(oldp+1189,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1190,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1191,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1192,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1193,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x60U))));
        bufp->chgIData(oldp+1194,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1195,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1196,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1197,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1198,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x60U))));
        bufp->chgIData(oldp+1199,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1200,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1201,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1202,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1203,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x60U))));
        bufp->chgIData(oldp+1204,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1205,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1206,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1207,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1208,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x60U))));
        bufp->chgIData(oldp+1209,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1210,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1211,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1212,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1213,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x60U))));
        bufp->chgIData(oldp+1214,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1215,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1216,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1217,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1218,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x60U))));
        bufp->chgIData(oldp+1219,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1220,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1221,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1222,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+1223,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1224,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
        bufp->chgIData(oldp+1225,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+1228,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+1229,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+1230,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgSData(oldp+1234,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgIData(oldp+1235,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgIData(oldp+1236,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
        bufp->chgCData(oldp+1237,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+1238,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+1239,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+1240,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+1241,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+1242,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+1243,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+1244,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+1245,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+1246,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+1247,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+1248,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgBit(oldp+1249,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__clear));
        bufp->chgBit(oldp+1250,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_enable));
        bufp->chgSData(oldp+1251,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+1254,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1255,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+1258,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+1259,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1260,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1261,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgIData(oldp+1262,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1263,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1264,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgSData(oldp+1265,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_pl),16);
        bufp->chgSData(oldp+1266,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
        bufp->chgIData(oldp+1267,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xdU]))) {
        bufp->chgSData(oldp+1268,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_pl),16);
        bufp->chgSData(oldp+1269,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
        bufp->chgIData(oldp+1270,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xeU]))) {
        bufp->chgIData(oldp+1271,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1272,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1273,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xfU]))) {
        bufp->chgIData(oldp+1274,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1275,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1276,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x10U]))) {
        bufp->chgSData(oldp+1277,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+1278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+1279,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+1280,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x11U]))) {
        bufp->chgSData(oldp+1281,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+1282,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+1283,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+1284,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x12U]))) {
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__timeout_flag));
        bufp->chgBit(oldp+1286,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
        bufp->chgIData(oldp+1287,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_out),32);
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x13U]))) {
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__timeout_flag));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
        bufp->chgIData(oldp+1291,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_out),32);
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x14U]))) {
        bufp->chgQData(oldp+1293,(vlSymsp->TOP__ether_simulation.xgmii_txd_svr),64);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__ether_simulation.xgmii_txc_svr),8);
        bufp->chgQData(oldp+1296,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_clt_cvrt),64);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_clt_cvrt),8);
        bufp->chgQData(oldp+1299,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1301,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_send));
        bufp->chgQData(oldp+1303,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1305,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxc),64);
        bufp->chgQData(oldp+1307,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc),8);
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__end_valid));
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_offset),3);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__shift_bits),6);
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__byte_END),8);
        bufp->chgQData(oldp+1314,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1316,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1317,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1318,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd_l),64);
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc_l),8);
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__state),7);
        bufp->chgSData(oldp+1322,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__len_counter),16);
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1324,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxc),8);
        bufp->chgQData(oldp+1327,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxd),64);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxc),8);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__din),8);
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__valid));
        bufp->chgCData(oldp+1332,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
        bufp->chgIData(oldp+1333,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x15U]))) {
        bufp->chgQData(oldp+1334,(vlSymsp->TOP__ether_simulation.xgmii_txd_clt),64);
        bufp->chgCData(oldp+1336,(vlSymsp->TOP__ether_simulation.xgmii_txc_clt),8);
        bufp->chgQData(oldp+1337,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_svr_cvrt),64);
        bufp->chgCData(oldp+1339,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_svr_cvrt),8);
        bufp->chgQData(oldp+1340,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1342,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxc),64);
        bufp->chgQData(oldp+1344,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1346,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_send));
        bufp->chgQData(oldp+1348,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+1350,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc),8);
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__end_valid));
        bufp->chgCData(oldp+1352,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_offset),3);
        bufp->chgCData(oldp+1353,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__shift_bits),6);
        bufp->chgCData(oldp+1354,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__byte_END),8);
        bufp->chgQData(oldp+1355,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1357,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1359,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd_l),64);
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc_l),8);
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__state),7);
        bufp->chgSData(oldp+1363,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__len_counter),16);
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1365,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+1367,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxc),8);
        bufp->chgQData(oldp+1368,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxd),64);
        bufp->chgCData(oldp+1370,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+1371,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__din),8);
        bufp->chgBit(oldp+1372,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__valid));
        bufp->chgCData(oldp+1373,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
        bufp->chgIData(oldp+1374,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x16U]))) {
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_tx_last));
        bufp->chgQData(oldp+1376,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1378,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__tt_len_data),16);
        bufp->chgQData(oldp+1379,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1381,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_last));
        bufp->chgQData(oldp+1383,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1385,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_last));
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_state),3);
        bufp->chgIData(oldp+1388,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+1389,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_tx_last));
        bufp->chgQData(oldp+1390,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1392,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__tt_len_data),16);
        bufp->chgQData(oldp+1393,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1395,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1396,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_last));
        bufp->chgQData(oldp+1397,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1399,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1400,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_last));
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_state),3);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x18U]))) {
        bufp->chgBit(oldp+1403,(vlSymsp->TOP__ether_simulation.__PVT__wr_FIFO_valid_svr));
        bufp->chgBit(oldp+1404,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_valid));
        bufp->chgQData(oldp+1405,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+1407,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+1408,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+1409,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+1410,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__re_trans_int));
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1413,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1415,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent),16);
        bufp->chgQData(oldp+1416,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+1420,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+1422,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+1423,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1424,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1426,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+1428,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+1429,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+1431,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+1432,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+1433,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+1434,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+1435,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+1436,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+1437,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+1438,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+1439,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+1440,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+1441,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+1442,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+1443,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+1444,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+1445,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+1446,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+1447,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+1448,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+1449,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+1450,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+1451,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+1452,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+1453,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+1454,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+1455,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+1456,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+1457,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+1458,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+1459,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+1460,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+1461,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+1462,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+1463,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+1464,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+1465,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+1466,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+1467,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+1468,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+1469,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+1470,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+1471,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+1472,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+1473,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+1474,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+1475,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+1476,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+1477,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+1478,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+1479,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+1480,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+1481,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+1482,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+1483,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+1484,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+1485,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+1486,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+1487,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+1488,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+1489,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+1490,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+1491,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+1492,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+1493,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+1494,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+1495,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+1496,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+1497,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+1498,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+1499,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+1500,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+1501,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+1502,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+1503,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+1504,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+1505,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+1506,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+1507,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+1508,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+1509,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+1510,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+1511,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+1512,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+1513,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+1514,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+1515,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+1516,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+1517,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+1518,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+1519,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+1520,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+1521,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+1522,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+1523,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+1524,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+1525,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+1526,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+1527,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+1528,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+1529,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+1530,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+1531,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+1532,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+1533,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+1534,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+1535,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+1536,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+1537,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+1539,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+1541,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+1543,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+1545,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+1547,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+1549,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+1551,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+1553,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+1555,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+1557,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+1559,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+1561,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+1563,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+1565,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+1567,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+1569,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+1572,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+1573,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+1575,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+1576,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgBit(oldp+1577,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+1578,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+1579,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1580,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+1582,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x19U]))) {
        bufp->chgBit(oldp+1583,(vlSymsp->TOP__ether_simulation.wr_FIFO_valid_clt));
        bufp->chgBit(oldp+1584,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_valid));
        bufp->chgQData(oldp+1585,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+1587,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+1588,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+1589,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__re_trans_int));
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+1592,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1593,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1595,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent),16);
        bufp->chgQData(oldp+1596,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+1598,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+1599,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+1600,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1601,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+1602,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+1603,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1604,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1606,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+1608,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+1609,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+1610,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+1611,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+1612,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+1613,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+1614,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+1615,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+1616,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+1617,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+1618,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+1619,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+1620,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+1621,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+1622,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+1623,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+1624,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+1625,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+1626,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+1627,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+1628,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+1629,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+1630,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+1631,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+1632,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+1633,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+1634,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+1635,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+1636,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+1637,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+1638,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+1639,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+1640,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+1641,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+1642,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+1643,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+1644,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+1645,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+1646,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+1647,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+1648,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+1649,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+1650,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+1651,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+1652,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+1653,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+1654,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+1655,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+1656,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+1657,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+1658,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+1659,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+1660,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+1661,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+1662,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+1663,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+1664,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+1665,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+1666,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+1667,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+1668,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+1669,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+1670,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+1671,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+1672,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+1673,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+1674,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+1675,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+1676,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+1677,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+1678,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+1679,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+1680,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+1681,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+1682,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+1683,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+1684,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+1685,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+1686,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+1687,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+1688,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+1689,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+1690,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+1691,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+1692,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+1693,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+1694,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+1695,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+1696,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+1697,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+1698,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+1699,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+1700,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+1701,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+1702,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+1703,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+1704,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+1705,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+1706,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+1707,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+1708,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+1709,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+1710,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+1711,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+1712,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+1713,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+1714,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+1715,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+1716,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+1717,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+1718,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+1719,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+1721,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+1723,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+1725,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+1727,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+1729,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+1731,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+1733,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+1735,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+1737,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+1739,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+1741,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+1743,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+1745,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+1747,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+1749,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+1751,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+1752,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+1753,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+1754,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+1755,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+1756,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgBit(oldp+1757,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+1758,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+1759,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1760,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+1762,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+1763,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_valid));
        bufp->chgBit(oldp+1764,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_rx_last));
        bufp->chgSData(oldp+1765,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+1766,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_payload),64);
        bufp->chgCData(oldp+1768,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_bytes_rcv_len),8);
        bufp->chgBit(oldp+1769,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_valid));
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_last));
        bufp->chgQData(oldp+1771,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_payload),64);
        bufp->chgCData(oldp+1773,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
        bufp->chgSData(oldp+1774,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+1775,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_udp));
        bufp->chgBit(oldp+1776,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_tcp));
        bufp->chgCData(oldp+1777,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__state),4);
        bufp->chgSData(oldp+1778,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_checksum),16);
        bufp->chgSData(oldp+1779,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv),16);
        bufp->chgSData(oldp+1780,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__dst_addr),16);
        bufp->chgSData(oldp+1781,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_len),16);
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_valid));
        bufp->chgSData(oldp+1783,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+1784,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_payload),64);
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_last));
        bufp->chgQData(oldp+1787,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
        bufp->chgBit(oldp+1789,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_last));
        bufp->chgBit(oldp+1790,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
        bufp->chgSData(oldp+1791,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_valid));
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_rx_last));
        bufp->chgSData(oldp+1794,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+1795,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_payload),64);
        bufp->chgCData(oldp+1797,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_bytes_rcv_len),8);
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_valid));
        bufp->chgBit(oldp+1799,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_last));
        bufp->chgQData(oldp+1800,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_payload),64);
        bufp->chgCData(oldp+1802,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
        bufp->chgSData(oldp+1803,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_udp));
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_tcp));
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__state),4);
        bufp->chgSData(oldp+1807,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_checksum),16);
        bufp->chgSData(oldp+1808,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv),16);
        bufp->chgSData(oldp+1809,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__dst_addr),16);
        bufp->chgSData(oldp+1810,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_len),16);
        bufp->chgBit(oldp+1811,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_valid));
        bufp->chgSData(oldp+1812,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+1813,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_payload),64);
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_last));
        bufp->chgQData(oldp+1816,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
        bufp->chgBit(oldp+1818,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_last));
        bufp->chgBit(oldp+1819,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
        bufp->chgSData(oldp+1820,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1cU]))) {
        bufp->chgQData(oldp+1821,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+1823,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_valid));
        bufp->chgCData(oldp+1824,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_rcv_len),8);
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_valid));
        bufp->chgQData(oldp+1826,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+1828,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv_len),8);
        bufp->chgQData(oldp+1829,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_valid));
        bufp->chgCData(oldp+1832,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_len),8);
        bufp->chgSData(oldp+1833,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+1834,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_found));
        bufp->chgBit(oldp+1835,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_valid));
        bufp->chgCData(oldp+1836,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_lane),3);
        bufp->chgSData(oldp+1837,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_rxc),16);
        bufp->chgIData(oldp+1838,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_check),32);
        bufp->chgWData(oldp+1839,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_store),128);
        bufp->chgIData(oldp+1843,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame),32);
        bufp->chgIData(oldp+1844,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__rg),32);
        bufp->chgQData(oldp+1845,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_delay));
        bufp->chgBit(oldp+1848,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__soft_dl));
        bufp->chgQData(oldp+1849,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+1851,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv),8);
        bufp->chgCData(oldp+1852,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+1853,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__state),6);
        bufp->chgQData(oldp+1854,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1856,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+1858,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1860,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+1862,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1dU]))) {
        bufp->chgQData(oldp+1863,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+1865,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_valid));
        bufp->chgCData(oldp+1866,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_rcv_len),8);
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_valid));
        bufp->chgQData(oldp+1868,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+1870,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv_len),8);
        bufp->chgQData(oldp+1871,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+1873,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_valid));
        bufp->chgCData(oldp+1874,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_len),8);
        bufp->chgSData(oldp+1875,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+1876,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_found));
        bufp->chgBit(oldp+1877,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_valid));
        bufp->chgCData(oldp+1878,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_lane),3);
        bufp->chgSData(oldp+1879,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_rxc),16);
        bufp->chgIData(oldp+1880,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_check),32);
        bufp->chgWData(oldp+1881,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_store),128);
        bufp->chgIData(oldp+1885,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame),32);
        bufp->chgIData(oldp+1886,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__rg),32);
        bufp->chgQData(oldp+1887,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+1889,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_delay));
        bufp->chgBit(oldp+1890,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__soft_dl));
        bufp->chgQData(oldp+1891,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+1893,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv),8);
        bufp->chgCData(oldp+1894,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+1895,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__state),6);
        bufp->chgQData(oldp+1896,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1898,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+1900,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1902,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+1905,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+1906,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+1907,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+1909,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_last));
        bufp->chgSData(oldp+1910,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__len_data),16);
        bufp->chgQData(oldp+1911,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_transmit),64);
        bufp->chgBit(oldp+1913,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+1914,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+1915,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+1917,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+1918,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+1919,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+1920,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+1921,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+1922,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+1923,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+1924,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+1926,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+1927,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgQData(oldp+1928,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
        bufp->chgBit(oldp+1930,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+1931,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1fU]))) {
        bufp->chgBit(oldp+1932,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+1933,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+1934,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+1936,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_last));
        bufp->chgSData(oldp+1937,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__len_data),16);
        bufp->chgQData(oldp+1938,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_transmit),64);
        bufp->chgBit(oldp+1940,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+1941,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+1942,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+1944,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+1945,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+1946,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+1947,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+1948,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+1949,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+1950,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+1951,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+1953,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+1954,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgQData(oldp+1955,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
        bufp->chgBit(oldp+1957,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+1958,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x20U]))) {
        bufp->chgBit(oldp+1959,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nw_segment));
        bufp->chgBit(oldp+1960,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+1961,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+1963,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+1964,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+1965,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+1966,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+1967,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgBit(oldp+1969,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+1970,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+1971,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+1973,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+1974,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+1975,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+1976,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgCData(oldp+1977,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_rcv),8);
        bufp->chgIData(oldp+1978,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+1979,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+1980,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+1981,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+1982,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+1983,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+1984,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgIData(oldp+1985,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+1986,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+1987,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+1988,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+1989,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+1990,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+1991,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+1992,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+1993,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+1994,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgCData(oldp+1995,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
        bufp->chgQData(oldp+1996,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+1998,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+1999,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+2000,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgIData(oldp+2001,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+2002,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+2003,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+2004,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+2005,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2006,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2007,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2008,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2009,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2010,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+2011,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgCData(oldp+2012,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
        bufp->chgBit(oldp+2013,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+2014,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2015,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2016,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+2017,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+2018,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+2019,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+2020,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+2021,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+2022,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+2023,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x21U]))) {
        bufp->chgBit(oldp+2024,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nw_segment));
        bufp->chgBit(oldp+2025,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+2026,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+2028,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+2029,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+2030,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+2031,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+2032,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgBit(oldp+2034,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+2035,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+2036,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+2038,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2039,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2040,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+2041,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgCData(oldp+2042,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_rcv),8);
        bufp->chgIData(oldp+2043,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2044,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2045,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2046,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2047,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2048,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+2049,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgIData(oldp+2050,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2051,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2052,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+2053,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+2054,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2055,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2056,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2057,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2058,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2059,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgCData(oldp+2060,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
        bufp->chgQData(oldp+2061,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+2063,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+2064,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+2065,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgIData(oldp+2066,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+2067,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+2068,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+2069,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+2070,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2071,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2072,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2073,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2074,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2075,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+2076,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgCData(oldp+2077,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
        bufp->chgBit(oldp+2078,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+2079,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2080,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2081,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+2082,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+2083,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+2084,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+2085,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+2086,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+2087,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+2088,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x24U]))) {
        bufp->chgSData(oldp+2089,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2090,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2091,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_basesum_payload),16);
        bufp->chgSData(oldp+2092,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2093,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x25U]))) {
        bufp->chgSData(oldp+2094,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2095,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2096,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_basesum_payload),16);
        bufp->chgSData(oldp+2097,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2098,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x26U]))) {
        bufp->chgCData(oldp+2099,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_offset),4);
        bufp->chgWData(oldp+2100,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_grap),128);
        bufp->chgSData(oldp+2104,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__din),16);
        bufp->chgBit(oldp+2105,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__valid));
        bufp->chgCData(oldp+2106,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
        bufp->chgIData(oldp+2107,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x27U]))) {
        bufp->chgBit(oldp+2108,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_flush));
        bufp->chgBit(oldp+2109,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_flush));
        bufp->chgCData(oldp+2110,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nstate),4);
        bufp->chgSData(oldp+2111,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_checksum),16);
        bufp->chgQData(oldp+2112,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_payload),64);
        bufp->chgSData(oldp+2114,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nbytes_rcv),16);
        bufp->chgBit(oldp+2115,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_en));
        bufp->chgBit(oldp+2116,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_clear));
        bufp->chgQData(oldp+2117,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_in),64);
        bufp->chgIData(oldp+2119,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_final),17);
        bufp->chgSData(oldp+2120,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ndst_addr),16);
        bufp->chgSData(oldp+2121,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_len),16);
        bufp->chgCData(oldp+2122,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
        bufp->chgSData(oldp+2123,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_pseuder),16);
        bufp->chgIData(oldp+2124,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__temp),20);
        bufp->chgBit(oldp+2125,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_valid));
        bufp->chgBit(oldp+2126,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_last));
        bufp->chgBit(oldp+2127,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_udp));
        bufp->chgBit(oldp+2128,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_tcp));
        bufp->chgSData(oldp+2129,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__total_len),16);
        bufp->chgSData(oldp+2130,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__frags_flag),16);
        bufp->chgCData(oldp+2131,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ttl),8);
        bufp->chgCData(oldp+2132,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__flags),3);
        bufp->chgSData(oldp+2133,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__fragoff),13);
        bufp->chgCData(oldp+2134,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__test_valid),4);
        bufp->chgCData(oldp+2135,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ip_version),4);
        bufp->chgBit(oldp+2136,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_src_addr));
        bufp->chgBit(oldp+2137,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_ip_version_valid));
        bufp->chgBit(oldp+2138,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_flush));
        bufp->chgBit(oldp+2139,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
        bufp->chgBit(oldp+2140,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__clear));
        bufp->chgQData(oldp+2142,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
        bufp->chgIData(oldp+2144,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+2145,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__temp),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x28U]))) {
        bufp->chgCData(oldp+2146,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_offset),4);
        bufp->chgWData(oldp+2147,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_grap),128);
        bufp->chgSData(oldp+2151,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__din),16);
        bufp->chgBit(oldp+2152,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__valid));
        bufp->chgCData(oldp+2153,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
        bufp->chgIData(oldp+2154,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x29U]))) {
        bufp->chgBit(oldp+2155,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_flush));
        bufp->chgBit(oldp+2156,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_flush));
        bufp->chgCData(oldp+2157,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nstate),4);
        bufp->chgSData(oldp+2158,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_checksum),16);
        bufp->chgQData(oldp+2159,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_payload),64);
        bufp->chgSData(oldp+2161,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nbytes_rcv),16);
        bufp->chgBit(oldp+2162,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_en));
        bufp->chgBit(oldp+2163,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_clear));
        bufp->chgQData(oldp+2164,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_in),64);
        bufp->chgIData(oldp+2166,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_final),17);
        bufp->chgSData(oldp+2167,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ndst_addr),16);
        bufp->chgSData(oldp+2168,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_len),16);
        bufp->chgCData(oldp+2169,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
        bufp->chgSData(oldp+2170,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_pseuder),16);
        bufp->chgIData(oldp+2171,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__temp),20);
        bufp->chgBit(oldp+2172,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_valid));
        bufp->chgBit(oldp+2173,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_last));
        bufp->chgBit(oldp+2174,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_udp));
        bufp->chgBit(oldp+2175,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_tcp));
        bufp->chgSData(oldp+2176,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__total_len),16);
        bufp->chgSData(oldp+2177,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__frags_flag),16);
        bufp->chgCData(oldp+2178,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ttl),8);
        bufp->chgCData(oldp+2179,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__flags),3);
        bufp->chgSData(oldp+2180,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__fragoff),13);
        bufp->chgCData(oldp+2181,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__test_valid),4);
        bufp->chgCData(oldp+2182,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ip_version),4);
        bufp->chgBit(oldp+2183,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_src_addr));
        bufp->chgBit(oldp+2184,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_ip_version_valid));
        bufp->chgBit(oldp+2185,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_flush));
        bufp->chgBit(oldp+2186,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
        bufp->chgBit(oldp+2187,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
        bufp->chgBit(oldp+2188,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__clear));
        bufp->chgQData(oldp+2189,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
        bufp->chgIData(oldp+2191,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+2192,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__temp),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2aU]))) {
        bufp->chgBit(oldp+2193,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_send));
        bufp->chgBit(oldp+2194,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_send));
        bufp->chgCData(oldp+2195,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_state),3);
        bufp->chgQData(oldp+2196,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_transmit_l),64);
        bufp->chgBit(oldp+2198,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chk_sum_valid));
        bufp->chgIData(oldp+2199,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__temp),20);
        bufp->chgIData(oldp+2200,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
        bufp->chgSData(oldp+2201,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__ntt_len_data),16);
        bufp->chgSData(oldp+2202,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chksum_rslt),16);
        bufp->chgBit(oldp+2203,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_send));
        bufp->chgBit(oldp+2204,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2bU]))) {
        bufp->chgBit(oldp+2205,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_send));
        bufp->chgBit(oldp+2206,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_send));
        bufp->chgCData(oldp+2207,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_state),3);
        bufp->chgQData(oldp+2208,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_transmit_l),64);
        bufp->chgBit(oldp+2210,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chk_sum_valid));
        bufp->chgIData(oldp+2211,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__temp),20);
        bufp->chgIData(oldp+2212,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
        bufp->chgSData(oldp+2213,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__ntt_len_data),16);
        bufp->chgSData(oldp+2214,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chksum_rslt),16);
        bufp->chgBit(oldp+2215,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_send));
        bufp->chgBit(oldp+2216,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2cU]))) {
        bufp->chgBit(oldp+2217,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_flush_int));
        bufp->chgBit(oldp+2218,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush));
        bufp->chgBit(oldp+2219,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_flush));
        bufp->chgBit(oldp+2220,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
        bufp->chgCData(oldp+2221,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
        bufp->chgIData(oldp+2222,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
        bufp->chgIData(oldp+2223,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
        bufp->chgCData(oldp+2224,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
        bufp->chgSData(oldp+2225,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
        bufp->chgSData(oldp+2226,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
        bufp->chgSData(oldp+2227,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
        bufp->chgIData(oldp+2228,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
        bufp->chgSData(oldp+2229,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
        bufp->chgQData(oldp+2230,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
        bufp->chgIData(oldp+2232,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__temp),20);
        bufp->chgBit(oldp+2233,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
        bufp->chgBit(oldp+2234,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
        bufp->chgBit(oldp+2235,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
        bufp->chgBit(oldp+2236,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
        bufp->chgCData(oldp+2237,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+2238,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
        bufp->chgBit(oldp+2239,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2dU]))) {
        bufp->chgBit(oldp+2240,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__debug));
        bufp->chgSData(oldp+2241,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
        bufp->chgSData(oldp+2242,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
        bufp->chgSData(oldp+2243,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
        bufp->chgCData(oldp+2244,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
        bufp->chgCData(oldp+2245,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
        bufp->chgSData(oldp+2246,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
        bufp->chgBit(oldp+2247,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__valid));
        bufp->chgCData(oldp+2248,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
        bufp->chgIData(oldp+2249,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2250,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
        bufp->chgBit(oldp+2251,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__valid));
        bufp->chgCData(oldp+2252,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
        bufp->chgIData(oldp+2253,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2254,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
        bufp->chgBit(oldp+2255,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__valid));
        bufp->chgCData(oldp+2256,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
        bufp->chgIData(oldp+2257,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2eU]))) {
        bufp->chgIData(oldp+2258,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2259,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx_out),32);
        bufp->chgCData(oldp+2260,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+2261,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2262,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+2263,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+2264,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+2265,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgIData(oldp+2266,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgCData(oldp+2267,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+2268,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2269,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+2270,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+2271,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+2272,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+2273,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+2274,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2275,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+2276,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+2277,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+2278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+2279,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+2280,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+2281,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+2282,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+2283,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+2284,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+2285,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+2286,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+2287,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2fU]))) {
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_flush_int));
        bufp->chgBit(oldp+2289,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush));
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_flush));
        bufp->chgBit(oldp+2291,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
        bufp->chgCData(oldp+2292,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
        bufp->chgIData(oldp+2293,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
        bufp->chgIData(oldp+2294,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
        bufp->chgCData(oldp+2295,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
        bufp->chgSData(oldp+2296,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
        bufp->chgSData(oldp+2297,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
        bufp->chgSData(oldp+2298,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
        bufp->chgIData(oldp+2299,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
        bufp->chgSData(oldp+2300,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
        bufp->chgQData(oldp+2301,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
        bufp->chgIData(oldp+2303,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__temp),20);
        bufp->chgBit(oldp+2304,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
        bufp->chgBit(oldp+2305,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
        bufp->chgBit(oldp+2306,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
        bufp->chgBit(oldp+2307,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
        bufp->chgCData(oldp+2308,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+2309,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
        bufp->chgBit(oldp+2310,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x30U]))) {
        bufp->chgBit(oldp+2311,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__debug));
        bufp->chgSData(oldp+2312,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
        bufp->chgSData(oldp+2313,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
        bufp->chgSData(oldp+2314,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
        bufp->chgCData(oldp+2315,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
        bufp->chgCData(oldp+2316,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
        bufp->chgSData(oldp+2317,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
        bufp->chgBit(oldp+2318,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__valid));
        bufp->chgCData(oldp+2319,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
        bufp->chgIData(oldp+2320,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2321,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
        bufp->chgBit(oldp+2322,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__valid));
        bufp->chgCData(oldp+2323,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
        bufp->chgIData(oldp+2324,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2325,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
        bufp->chgBit(oldp+2326,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__valid));
        bufp->chgCData(oldp+2327,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
        bufp->chgIData(oldp+2328,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x31U]))) {
        bufp->chgIData(oldp+2329,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2330,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx_out),32);
        bufp->chgCData(oldp+2331,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+2332,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2333,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+2334,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+2335,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+2336,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgIData(oldp+2337,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgCData(oldp+2338,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+2339,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2340,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+2341,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+2342,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+2343,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+2344,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+2345,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+2346,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+2347,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+2348,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+2349,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+2350,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+2351,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+2352,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+2353,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+2354,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+2355,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+2356,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+2357,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+2358,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x34U]))) {
        bufp->chgBit(oldp+2359,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_en_int));
        bufp->chgBit(oldp+2360,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_tx));
        bufp->chgBit(oldp+2361,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_en));
        bufp->chgBit(oldp+2362,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+2363,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
        bufp->chgBit(oldp+2364,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
        bufp->chgCData(oldp+2365,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nstate),7);
        bufp->chgQData(oldp+2366,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
        bufp->chgBit(oldp+2368,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
        bufp->chgBit(oldp+2369,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
        bufp->chgBit(oldp+2370,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nseq_up));
        bufp->chgSData(oldp+2371,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
        bufp->chgQData(oldp+2372,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x35U]))) {
        bufp->chgBit(oldp+2374,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_en_int));
        bufp->chgBit(oldp+2375,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_tx));
        bufp->chgBit(oldp+2376,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_en));
        bufp->chgBit(oldp+2377,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+2378,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
        bufp->chgBit(oldp+2379,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
        bufp->chgCData(oldp+2380,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nstate),7);
        bufp->chgQData(oldp+2381,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
        bufp->chgBit(oldp+2383,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
        bufp->chgBit(oldp+2384,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
        bufp->chgBit(oldp+2385,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nseq_up));
        bufp->chgSData(oldp+2386,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
        bufp->chgQData(oldp+2387,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x36U]))) {
        bufp->chgBit(oldp+2389,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_svr));
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flag));
        bufp->chgBit(oldp+2391,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+2392,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+2393,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+2394,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+2395,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+2396,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+2397,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+2398,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+2399,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+2400,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+2401,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+2402,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+2403,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
        bufp->chgCData(oldp+2405,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+2406,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+2407,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+2408,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+2409,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+2410,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+2411,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+2413,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+2414,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+2415,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+2416,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+2417,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+2418,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+2419,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+2420,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+2421,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+2422,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+2423,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
        bufp->chgBit(oldp+2424,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
        bufp->chgBit(oldp+2425,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x60U))));
        bufp->chgIData(oldp+2426,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2427,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2428,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2429,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2430,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x60U))));
        bufp->chgIData(oldp+2431,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2432,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2433,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2434,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2435,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x60U))));
        bufp->chgIData(oldp+2436,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2437,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2438,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2439,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2440,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x60U))));
        bufp->chgIData(oldp+2441,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2442,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2443,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2444,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2445,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x60U))));
        bufp->chgIData(oldp+2446,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2447,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2448,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2449,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2450,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x60U))));
        bufp->chgIData(oldp+2451,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2452,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2453,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2454,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2455,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x60U))));
        bufp->chgIData(oldp+2456,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2457,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2458,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2459,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2460,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x60U))));
        bufp->chgIData(oldp+2461,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2462,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2463,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2464,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2465,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x60U))));
        bufp->chgIData(oldp+2466,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2467,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2468,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2469,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2470,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x60U))));
        bufp->chgIData(oldp+2471,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2472,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2473,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2474,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+2475,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+2476,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgBit(oldp+2477,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
        bufp->chgIData(oldp+2478,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
        bufp->chgCData(oldp+2479,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+2480,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+2481,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgIData(oldp+2482,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
        bufp->chgCData(oldp+2483,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+2484,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+2485,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+2486,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+2487,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+2488,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+2489,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+2490,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+2491,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+2492,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+2493,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+2494,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+2495,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+2496,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x37U]))) {
        bufp->chgBit(oldp+2497,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_clt));
        bufp->chgBit(oldp+2498,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flag));
        bufp->chgBit(oldp+2499,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+2500,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+2501,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+2502,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+2503,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+2504,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+2505,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+2506,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+2507,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+2508,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+2509,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+2510,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+2511,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+2512,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
        bufp->chgCData(oldp+2513,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+2514,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+2515,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+2516,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+2517,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+2518,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+2519,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+2520,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+2521,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+2522,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+2523,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+2524,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+2525,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+2526,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+2527,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+2528,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+2529,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+2530,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
        bufp->chgBit(oldp+2532,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
        bufp->chgBit(oldp+2533,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x60U))));
        bufp->chgIData(oldp+2534,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2535,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2536,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2537,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2538,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x60U))));
        bufp->chgIData(oldp+2539,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2540,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2541,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2542,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2543,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x60U))));
        bufp->chgIData(oldp+2544,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2545,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2546,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2547,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2548,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x60U))));
        bufp->chgIData(oldp+2549,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2550,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2551,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2552,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2553,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x60U))));
        bufp->chgIData(oldp+2554,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2555,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2556,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2557,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2558,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x60U))));
        bufp->chgIData(oldp+2559,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2560,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2561,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2562,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2563,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x60U))));
        bufp->chgIData(oldp+2564,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2565,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2566,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2567,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2568,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x60U))));
        bufp->chgIData(oldp+2569,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2570,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2571,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2572,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2573,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x60U))));
        bufp->chgIData(oldp+2574,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2575,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2576,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2577,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+2578,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x60U))));
        bufp->chgIData(oldp+2579,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+2580,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                              [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+2581,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+2582,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                         [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+2583,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+2584,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgBit(oldp+2585,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
        bufp->chgIData(oldp+2586,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
        bufp->chgCData(oldp+2587,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+2588,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+2589,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgIData(oldp+2590,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
        bufp->chgCData(oldp+2591,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+2592,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+2593,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+2594,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+2595,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+2596,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+2597,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+2598,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+2599,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+2600,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+2601,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+2602,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+2603,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+2604,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x38U]))) {
        bufp->chgIData(oldp+2605,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+2606,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__temp),20);
        bufp->chgSData(oldp+2607,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
        bufp->chgIData(oldp+2608,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x39U]))) {
        bufp->chgIData(oldp+2609,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+2610,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__temp),20);
        bufp->chgSData(oldp+2611,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
        bufp->chgIData(oldp+2612,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    }
    bufp->chgBit(oldp+2613,(vlSelfRef.CLK));
    bufp->chgBit(oldp+2614,(vlSelfRef.nRST));
    bufp->chgCData(oldp+2615,(vlSelfRef.tb_count),8);
    bufp->chgBit(oldp+2616,(vlSelfRef.TX_en_svr));
    bufp->chgQData(oldp+2617,(vlSelfRef.xgmii_txd_svr),64);
    bufp->chgCData(oldp+2619,(vlSelfRef.xgmii_txc_svr),8);
    bufp->chgBit(oldp+2620,(vlSelfRef.frame_end_svr));
    bufp->chgQData(oldp+2621,(vlSelfRef.xgmii_rxd_svr),64);
    bufp->chgCData(oldp+2623,(vlSelfRef.xgmii_rxc_svr),8);
    bufp->chgBit(oldp+2624,(vlSelfRef.axis_last_svr));
    bufp->chgBit(oldp+2625,(vlSelfRef.wr_FIFO_en_svr));
    bufp->chgIData(oldp+2626,(vlSelfRef.len_seq_svr),32);
    bufp->chgQData(oldp+2627,(vlSelfRef.soupbin_TCP_payload_svr),64);
    bufp->chgBit(oldp+2629,(vlSelfRef.wr_FIFO_validing_svr));
    bufp->chgBit(oldp+2630,(vlSelfRef.axis_r_en_svr));
    bufp->chgBit(oldp+2631,(vlSelfRef.axis_r_valid_svr));
    bufp->chgQData(oldp+2632,(vlSelfRef.axis_rd_data_svr),64);
    bufp->chgBit(oldp+2634,(vlSelfRef.TCP_stop_flag_svr));
    bufp->chgIData(oldp+2635,(vlSelfRef.seq_num_svr),32);
    bufp->chgIData(oldp+2636,(vlSelfRef.rcv_next_svr),32);
    bufp->chgBit(oldp+2637,(vlSelfRef.TX_en_clt));
    bufp->chgQData(oldp+2638,(vlSelfRef.xgmii_txd_clt),64);
    bufp->chgCData(oldp+2640,(vlSelfRef.xgmii_txc_clt),8);
    bufp->chgBit(oldp+2641,(vlSelfRef.frame_end_clt));
    bufp->chgQData(oldp+2642,(vlSelfRef.xgmii_rxd_clt),64);
    bufp->chgCData(oldp+2644,(vlSelfRef.xgmii_rxc_clt),8);
    bufp->chgBit(oldp+2645,(vlSelfRef.axis_last_clt));
    bufp->chgBit(oldp+2646,(vlSelfRef.wr_FIFO_en_clt));
    bufp->chgIData(oldp+2647,(vlSelfRef.len_seq_clt),32);
    bufp->chgQData(oldp+2648,(vlSelfRef.soupbin_TCP_payload_clt),64);
    bufp->chgBit(oldp+2650,(vlSelfRef.wr_FIFO_valid_clt));
    bufp->chgBit(oldp+2651,(vlSelfRef.axis_r_en_clt));
    bufp->chgBit(oldp+2652,(vlSelfRef.axis_r_valid_clt));
    bufp->chgQData(oldp+2653,(vlSelfRef.axis_rd_data_clt),64);
    bufp->chgBit(oldp+2655,(vlSelfRef.TCP_stop_flag_clt));
    bufp->chgIData(oldp+2656,(vlSelfRef.seq_num_clt),32);
    bufp->chgIData(oldp+2657,(vlSelfRef.rcv_next_clt),32);
    bufp->chgQData(oldp+2658,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->chgCData(oldp+2660,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->chgQData(oldp+2661,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->chgCData(oldp+2663,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->chgBit(oldp+2664,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__up_send));
    bufp->chgBit(oldp+2665,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__up_send));
    bufp->chgIData(oldp+2666,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->chgIData(oldp+2667,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->chgIData(oldp+2668,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+2669,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+2670,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgIData(oldp+2671,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+2672,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+2673,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgQData(oldp+2674,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->chgIData(oldp+2676,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->chgQData(oldp+2677,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->chgIData(oldp+2679,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->chgIData(oldp+2680,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->chgBit(oldp+2681,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
    bufp->chgIData(oldp+2682,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->chgBit(oldp+2683,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
}

void Vether_simulation___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_simulation___024root__trace_cleanup\n"); );
    // Init
    Vether_simulation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_simulation___024root*>(voidSelf);
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x23U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x24U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x25U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x26U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x27U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x28U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x29U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x30U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x31U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x32U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x33U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x34U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x35U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x36U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x37U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x38U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x39U] = 0U;
}
