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
        bufp->chgSData(oldp+0,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_re_trans_int),16);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__out_order));
        bufp->chgSData(oldp+2,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_re_trans_int),16);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__out_order));
        bufp->chgSData(oldp+4,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_re_trans),16);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_up));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_up));
        bufp->chgSData(oldp+7,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_re_trans),16);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__clear));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__clear));
        bufp->chgSData(oldp+10,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__src_port),16);
        bufp->chgSData(oldp+11,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
        bufp->chgSData(oldp+12,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__src_port),16);
        bufp->chgSData(oldp+13,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__dest_port),16);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_order));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxc),8);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxc),8);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxc),8);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__rx));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__rx));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__gen_en));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__gen_en));
        bufp->chgIData(oldp+27,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_val),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__initial_val),32);
        bufp->chgSData(oldp+31,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__initial_val),9);
        bufp->chgSData(oldp+32,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__initial_val),9);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+33,(vlSymsp->TOP__ether_simulation.CLK));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__ether_simulation.nRST));
        bufp->chgCData(oldp+35,(vlSymsp->TOP__ether_simulation.tb_count),8);
        bufp->chgBit(oldp+36,(vlSymsp->TOP__ether_simulation.client_lost));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__ether_simulation.out_order));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__ether_simulation.err_flag));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__ether_simulation.TX_en_svr));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__ether_simulation.end_ss_svr));
        bufp->chgQData(oldp+41,(vlSymsp->TOP__ether_simulation.xgmii_rxd_svr),64);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__ether_simulation.xgmii_rxc_svr),8);
        bufp->chgBit(oldp+44,(vlSymsp->TOP__ether_simulation.axis_last_svr));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_svr));
        bufp->chgIData(oldp+46,(vlSymsp->TOP__ether_simulation.len_seq_svr),32);
        bufp->chgQData(oldp+47,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_svr),64);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__ether_simulation.axis_r_en_svr));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__ether_simulation.TX_en_clt));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__ether_simulation.end_ss_clt));
        bufp->chgQData(oldp+52,(vlSymsp->TOP__ether_simulation.xgmii_rxd_clt),64);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__ether_simulation.xgmii_rxc_clt),8);
        bufp->chgBit(oldp+55,(vlSymsp->TOP__ether_simulation.axis_last_clt));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__ether_simulation.wr_FIFO_en_clt));
        bufp->chgIData(oldp+57,(vlSymsp->TOP__ether_simulation.len_seq_clt),32);
        bufp->chgQData(oldp+58,(vlSymsp->TOP__ether_simulation.soupbin_TCP_payload_clt),64);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__ether_simulation.axis_r_en_clt));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CLK));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nRST));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__out_order));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TX_en));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__end_ss));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_last));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_en));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__len_seq),32);
        bufp->chgQData(oldp+69,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_en));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CLK));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nRST));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TX_en));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__end_ss));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_last));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_en));
        bufp->chgIData(oldp+78,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__len_seq),32);
        bufp->chgQData(oldp+79,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_en));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__CLK));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nRST));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_en));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__CLK));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nRST));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_en));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__CLK));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nRST));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__CLK));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nRST));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CLK));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nRST));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CLK));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nRST));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__CLK));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nRST));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__TX_en));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__CLK));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nRST));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__TX_en));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__CLK));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nRST));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__CLK));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nRST));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__CLK));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nRST));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TX_en));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__end_ss));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_TX_en));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_axis_last));
        bufp->chgQData(oldp+112,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__CLK));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nRST));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TX_en));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__end_ss));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__axis_last));
        bufp->chgIData(oldp+120,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__len_seq),32);
        bufp->chgQData(oldp+121,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__CLK));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nRST));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TX_en));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__end_ss));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__axis_last));
        bufp->chgIData(oldp+129,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__len_seq),32);
        bufp->chgQData(oldp+130,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+132,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__CLK));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nRST));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TX_en));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__end_ss));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_TX_en));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_axis_last));
        bufp->chgQData(oldp+139,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+141,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__CLK));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nRST));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__axis_last));
        bufp->chgQData(oldp+145,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
        bufp->chgBit(oldp+147,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TX_en));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__CLK));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nRST));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__axis_last));
        bufp->chgQData(oldp+152,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_payload_tx),64);
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TX_en));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__CLK));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nRST));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__CLK));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nRST));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__CLK));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nRST));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__CLK));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nRST));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__CLK));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nRST));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__end_ss));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__CLK));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nRST));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__end_ss));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__CLK));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__nRST));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__CLK));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nRST));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__CLK));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nRST));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__CLK));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__nRST));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__CLK));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__nRST));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__CLK));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nRST));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__CLK));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nRST));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__CLK));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nRST));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__CLK));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nRST));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x18U])))) {
        bufp->chgQData(oldp+194,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+196,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_rxc),64);
        bufp->chgQData(oldp+198,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+200,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc),8);
        bufp->chgBit(oldp+201,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__end_valid));
        bufp->chgCData(oldp+202,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_offset),3);
        bufp->chgCData(oldp+203,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__shift_bits),6);
        bufp->chgCData(oldp+204,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__byte_END),8);
        bufp->chgCData(oldp+205,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__din),8);
        bufp->chgBit(oldp+206,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__valid));
        bufp->chgCData(oldp+207,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x19U])))) {
        bufp->chgQData(oldp+209,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+211,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_rxc),64);
        bufp->chgQData(oldp+213,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+215,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc),8);
        bufp->chgBit(oldp+216,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__end_valid));
        bufp->chgCData(oldp+217,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_offset),3);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__shift_bits),6);
        bufp->chgCData(oldp+219,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__byte_END),8);
        bufp->chgCData(oldp+220,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__din),8);
        bufp->chgBit(oldp+221,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__valid));
        bufp->chgCData(oldp+222,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__idx),3);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x26U])))) {
        bufp->chgBit(oldp+224,(vlSymsp->TOP__ether_simulation.frame_end_svr));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_end));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__frame_end));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send_l));
        bufp->chgCData(oldp+228,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nstate),7);
        bufp->chgBit(oldp+229,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_init));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__valid));
        bufp->chgSData(oldp+231,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nlen_counter),16);
        bufp->chgBit(oldp+232,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__valid));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_init));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x27U])))) {
        bufp->chgBit(oldp+234,(vlSymsp->TOP__ether_simulation.frame_end_clt));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_end));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__frame_end));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send_l));
        bufp->chgCData(oldp+238,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nstate),7);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_init));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__valid));
        bufp->chgSData(oldp+241,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nlen_counter),16);
        bufp->chgBit(oldp+242,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__valid));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_init));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x28U])))) {
        bufp->chgSData(oldp+244,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp),20);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__temp1),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x29U])))) {
        bufp->chgSData(oldp+249,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp),20);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__temp1),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x2aU])))) {
        bufp->chgCData(oldp+254,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_offset),4);
        bufp->chgWData(oldp+255,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_grap),128);
        bufp->chgSData(oldp+259,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__din),16);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__valid));
        bufp->chgCData(oldp+261,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x2bU])))) {
        bufp->chgCData(oldp+263,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_offset),4);
        bufp->chgWData(oldp+264,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_grap),128);
        bufp->chgSData(oldp+268,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__din),16);
        bufp->chgBit(oldp+269,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__valid));
        bufp->chgCData(oldp+270,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__idx),4);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x32U])))) {
        bufp->chgIData(oldp+272,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx_out),32);
        bufp->chgCData(oldp+274,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+277,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+279,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+284,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+285,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+286,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+287,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+290,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+291,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+292,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+293,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+294,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+295,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+296,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+297,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+298,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+299,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+300,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x35U])))) {
        bufp->chgIData(oldp+302,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+303,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx_out),32);
        bufp->chgCData(oldp+305,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+306,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+308,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+309,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+310,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+311,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+312,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+313,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+315,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+316,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+320,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+321,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+322,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+323,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+324,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+325,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+326,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+327,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+328,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+329,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+330,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x38U])))) {
        bufp->chgBit(oldp+332,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_en_int));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_tx));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_en));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+336,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
        bufp->chgBit(oldp+337,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
        bufp->chgCData(oldp+338,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nstate),7);
        bufp->chgQData(oldp+339,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
        bufp->chgBit(oldp+341,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nseq_up));
        bufp->chgSData(oldp+344,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
        bufp->chgQData(oldp+345,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x39U])))) {
        bufp->chgBit(oldp+347,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_en_int));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_en));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_tx));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+351,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
        bufp->chgBit(oldp+352,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__valid_checksum));
        bufp->chgCData(oldp+353,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nstate),7);
        bufp->chgQData(oldp+354,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nseq_up));
        bufp->chgSData(oldp+359,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__chksum_debug),16);
        bufp->chgQData(oldp+360,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x3aU])))) {
        bufp->chgBit(oldp+362,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_svr));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flag));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+365,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+366,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+367,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+369,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+371,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+372,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+373,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgQData(oldp+375,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+377,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+378,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+380,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+381,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+383,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+384,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+386,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+387,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+389,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+390,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+392,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+393,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+395,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+396,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+398,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+399,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+401,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+402,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+404,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+405,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+407,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+408,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+410,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+411,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+413,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+414,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+416,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+417,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+419,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+420,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+422,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgCData(oldp+423,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+424,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
        bufp->chgIData(oldp+425,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
        bufp->chgBit(oldp+426,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+427,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__naxis_r_valid));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nTCP_flush_l));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nhandshake));
        bufp->chgCData(oldp+430,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nwr_ptr),4);
        bufp->chgCData(oldp+431,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nrd_ptr),4);
        bufp->chgBit(oldp+432,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+433,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
        bufp->chgCData(oldp+435,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+439,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+440,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+441,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+442,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+444,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+445,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+446,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+447,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+448,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+449,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+450,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+451,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+452,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+453,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
        bufp->chgBit(oldp+455,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [0U], 0x60U))));
        bufp->chgIData(oldp+456,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+457,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+458,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+459,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+460,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [1U], 0x60U))));
        bufp->chgIData(oldp+461,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+462,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+463,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+464,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+465,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [2U], 0x60U))));
        bufp->chgIData(oldp+466,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+467,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+468,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+469,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+470,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [3U], 0x60U))));
        bufp->chgIData(oldp+471,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+472,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+473,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+474,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+475,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [4U], 0x60U))));
        bufp->chgIData(oldp+476,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+477,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+478,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+479,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+480,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [5U], 0x60U))));
        bufp->chgIData(oldp+481,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+482,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+483,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+484,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+485,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [6U], 0x60U))));
        bufp->chgIData(oldp+486,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+487,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+488,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+489,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+490,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [7U], 0x60U))));
        bufp->chgIData(oldp+491,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+492,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+493,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+494,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+495,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [8U], 0x60U))));
        bufp->chgIData(oldp+496,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+497,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+498,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+499,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+500,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [9U], 0x60U))));
        bufp->chgIData(oldp+501,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+502,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+503,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+504,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+505,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+506,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
        bufp->chgIData(oldp+508,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
        bufp->chgCData(oldp+513,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+514,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+515,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+516,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+517,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+518,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+519,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+520,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+521,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+522,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+523,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+524,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgBit(oldp+525,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timewait_en));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timewait_clear));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__npass_close));
        bufp->chgIData(oldp+528,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+529,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+530,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+531,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk6__DOT__i),32);
        bufp->chgBit(oldp+532,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__clear));
        bufp->chgBit(oldp+533,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__count_enable));
        bufp->chgSData(oldp+534,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_count_out),9);
        bufp->chgBit(oldp+535,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_rollover_flag));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x3bU])))) {
        bufp->chgBit(oldp+536,(vlSymsp->TOP__ether_simulation.TCP_stop_flag_clt));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flag));
        bufp->chgBit(oldp+538,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+539,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+540,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+541,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+542,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+543,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+545,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+546,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+547,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgQData(oldp+549,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+551,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+552,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+554,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+555,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+557,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+558,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+560,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+561,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+563,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+564,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+566,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+567,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+569,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+570,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+572,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+573,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+575,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+576,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+578,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+579,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+581,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+582,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+584,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+585,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+587,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+588,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+590,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+591,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+593,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+594,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+596,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgCData(oldp+597,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+598,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_len_ptr),4);
        bufp->chgIData(oldp+599,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nseq_trk_rd),32);
        bufp->chgBit(oldp+600,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__naxis_r_valid));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nTCP_flush_l));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nhandshake));
        bufp->chgCData(oldp+604,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nwr_ptr),4);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nrd_ptr),4);
        bufp->chgBit(oldp+606,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+607,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+608,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_rcv));
        bufp->chgCData(oldp+609,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+610,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+611,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+613,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+614,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+615,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+616,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+618,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+619,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+620,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+621,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+622,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+623,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+624,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+625,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+626,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+627,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nclear_timeout));
        bufp->chgBit(oldp+629,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [0U], 0x60U))));
        bufp->chgIData(oldp+630,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+631,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+632,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+633,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+634,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [1U], 0x60U))));
        bufp->chgIData(oldp+635,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+636,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+637,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+638,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+639,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [2U], 0x60U))));
        bufp->chgIData(oldp+640,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+641,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+642,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+643,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+644,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [3U], 0x60U))));
        bufp->chgIData(oldp+645,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+646,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+647,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+648,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+649,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [4U], 0x60U))));
        bufp->chgIData(oldp+650,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+651,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+652,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+653,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+654,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [5U], 0x60U))));
        bufp->chgIData(oldp+655,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+656,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+657,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+658,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+659,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [6U], 0x60U))));
        bufp->chgIData(oldp+660,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+661,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+662,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+663,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+664,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [7U], 0x60U))));
        bufp->chgIData(oldp+665,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+666,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+667,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+668,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+669,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [8U], 0x60U))));
        bufp->chgIData(oldp+670,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+671,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+672,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+673,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+674,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [9U], 0x60U))));
        bufp->chgIData(oldp+675,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+676,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+677,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+678,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+679,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+680,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nout_order_req));
        bufp->chgIData(oldp+682,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
        bufp->chgCData(oldp+683,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+684,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgIData(oldp+686,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
        bufp->chgCData(oldp+687,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+689,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+690,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+691,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+692,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+693,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+694,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+695,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+696,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+697,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+698,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgBit(oldp+699,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timewait_en));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timewait_clear));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__npass_close));
        bufp->chgIData(oldp+702,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+703,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+705,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk6__DOT__i),32);
        bufp->chgBit(oldp+706,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__clear));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__count_enable));
        bufp->chgSData(oldp+708,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_count_out),9);
        bufp->chgBit(oldp+709,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__nxt_rollover_flag));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x3cU])))) {
        bufp->chgSData(oldp+710,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+711,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+712,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+717,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+720,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+721,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+722,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+723,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+724,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+725,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+726,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+727,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+728,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+729,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+730,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+731,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+732,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+733,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+734,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+735,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+736,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+737,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+738,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+739,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+740,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+741,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+742,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+743,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+744,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+745,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+746,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+747,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+748,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+749,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+750,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+751,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+752,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+753,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+754,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+755,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+756,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+757,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+758,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+759,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+760,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+761,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+762,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+763,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+764,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+765,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+766,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+767,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+768,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+769,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+770,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+771,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+772,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+773,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+774,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+775,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+776,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+777,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+778,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+779,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+780,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+781,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+782,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+783,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+784,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+785,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+786,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+787,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+788,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+789,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+790,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+791,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+792,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+793,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+794,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+795,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+796,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+797,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+798,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+799,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+800,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+801,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+802,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+803,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+804,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+805,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+806,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+807,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+808,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+809,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+810,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+811,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+812,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+813,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+814,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+815,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+816,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+817,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+818,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+819,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+820,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+822,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+823,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+824,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+826,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+828,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+830,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+832,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+834,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+836,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+838,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+840,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+842,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+844,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+846,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+848,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+850,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+852,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+854,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+856,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+858,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+859,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+862,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+863,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__nchecksum_l),16);
        bufp->chgIData(oldp+864,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+865,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__temp),20);
        bufp->chgSData(oldp+866,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
        bufp->chgIData(oldp+867,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x3dU])))) {
        bufp->chgSData(oldp+868,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+869,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+870,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+875,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+879,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+880,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+881,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+882,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+883,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+884,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+885,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+886,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+887,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+888,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+889,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+890,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+891,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+892,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+893,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+894,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+895,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+896,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+897,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+898,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+899,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+900,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+901,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+902,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+903,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+904,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+905,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+906,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+907,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+908,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+909,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+910,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+911,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+912,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+913,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+914,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+915,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+916,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+917,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+918,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+919,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+920,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+921,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+922,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+923,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+924,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+925,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+926,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+927,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+928,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+929,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+930,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+931,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+932,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+933,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+934,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+935,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+936,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+937,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+938,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+939,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+940,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+941,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+942,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+943,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+944,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+945,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+946,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+947,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+948,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+949,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+950,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+951,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+952,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+953,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+954,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+955,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+956,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+957,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+958,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+959,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+960,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+961,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+962,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+963,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+964,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+965,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+966,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+967,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+968,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+969,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+970,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+971,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+972,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+973,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+974,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+975,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+977,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+978,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+979,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+980,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+981,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+982,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+984,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+986,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+988,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+990,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+992,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+994,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+996,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+998,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+1000,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+1002,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+1004,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+1006,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+1008,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+1010,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+1012,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+1016,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+1020,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+1021,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__nchecksum_l),16);
        bufp->chgIData(oldp+1022,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+1023,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__temp),20);
        bufp->chgSData(oldp+1024,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_debug),16);
        bufp->chgIData(oldp+1025,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__IP_pseuder_temp),20);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [2U] | vlSelfRef.__Vm_traceActivity
                       [5U]) | vlSelfRef.__Vm_traceActivity
                      [0x37U])))) {
        bufp->chgBit(oldp+1026,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__CRC_flush));
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__frame_ok));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_flush));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__CRC_flush));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_ok));
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_init));
        bufp->chgQData(oldp+1032,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in),64);
        bufp->chgQData(oldp+1034,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_in_big),64);
        bufp->chgSData(oldp+1036,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_found));
        bufp->chgCData(oldp+1038,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsof_lane),3);
        bufp->chgQData(oldp+1039,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+1041,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
        bufp->chgSData(oldp+1043,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_rxc),16);
        bufp->chgIData(oldp+1044,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_check),32);
        bufp->chgWData(oldp+1045,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nframe_store),128);
        bufp->chgIData(oldp+1049,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nFCS_frame),32);
        bufp->chgIData(oldp+1050,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nrg),32);
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_delay));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__ncrc_valid));
        bufp->chgIData(oldp+1053,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__i),32);
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nsoft_dl));
        bufp->chgBit(oldp+1055,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__case_debug));
        bufp->chgQData(oldp+1056,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__nMAC_valid));
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__next_state),6);
        bufp->chgQData(oldp+1062,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr),48);
        bufp->chgQData(oldp+1064,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr),48);
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_dest_addr_valid));
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_first_valid));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__mac_src_addr_second_valid));
        bufp->chgQData(oldp+1069,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1071,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+1073,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1075,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+1077,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_init));
        bufp->chgQData(oldp+1078,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__data_in),64);
        bufp->chgIData(oldp+1080,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__next_crc),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [0x36U])))) {
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__CRC_flush));
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__frame_ok));
        bufp->chgBit(oldp+1083,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_flush));
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__CRC_flush));
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_ok));
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_init));
        bufp->chgQData(oldp+1087,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in),64);
        bufp->chgQData(oldp+1089,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_in_big),64);
        bufp->chgSData(oldp+1091,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nxgmii_rxc_frame),16);
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_found));
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsof_lane),3);
        bufp->chgQData(oldp+1094,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f),64);
        bufp->chgQData(oldp+1096,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxd_f_cvt),64);
        bufp->chgSData(oldp+1098,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_rxc),16);
        bufp->chgIData(oldp+1099,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_check),32);
        bufp->chgWData(oldp+1100,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nframe_store),128);
        bufp->chgIData(oldp+1104,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nFCS_frame),32);
        bufp->chgIData(oldp+1105,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nrg),32);
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_delay));
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__ncrc_valid));
        bufp->chgIData(oldp+1108,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__i),32);
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nsoft_dl));
        bufp->chgBit(oldp+1110,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__case_debug));
        bufp->chgQData(oldp+1111,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+1113,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+1114,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nbytes_rcv_dl),8);
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__nMAC_valid));
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__next_state),6);
        bufp->chgQData(oldp+1117,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr),48);
        bufp->chgQData(oldp+1119,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr),48);
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_dest_addr_valid));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_first_valid));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__mac_src_addr_second_valid));
        bufp->chgQData(oldp+1124,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1126,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+1128,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+1130,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_init));
        bufp->chgQData(oldp+1133,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__data_in),64);
        bufp->chgIData(oldp+1135,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__next_crc),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+1136,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+1137,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+1138,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+1139,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+1140,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+1141,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__ether_simulation.axis_r_valid_svr));
        bufp->chgQData(oldp+1143,(vlSymsp->TOP__ether_simulation.axis_rd_data_svr),64);
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_r_valid));
        bufp->chgQData(oldp+1146,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_rd_data),64);
        bufp->chgCData(oldp+1148,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+1149,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+1150,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+1151,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__full));
        bufp->chgCData(oldp+1153,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+1154,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+1156,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+1159,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+1161,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1163,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+1164,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1166,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+1167,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1169,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+1170,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1172,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+1173,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1175,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+1176,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1178,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+1179,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1181,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+1182,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1184,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+1185,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1187,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+1188,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1190,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+1191,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1193,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+1194,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1196,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+1197,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1199,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+1200,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1202,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+1203,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1205,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+1206,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1208,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xfU], 0U, 8U))),8);
        bufp->chgQData(oldp+1209,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+1211,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+1215,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+1217,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
        bufp->chgBit(oldp+1218,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgBit(oldp+1219,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake));
        bufp->chgQData(oldp+1220,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[0]),64);
        bufp->chgQData(oldp+1222,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[1]),64);
        bufp->chgQData(oldp+1224,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[2]),64);
        bufp->chgQData(oldp+1226,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[3]),64);
        bufp->chgQData(oldp+1228,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[4]),64);
        bufp->chgQData(oldp+1230,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[5]),64);
        bufp->chgQData(oldp+1232,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[6]),64);
        bufp->chgQData(oldp+1234,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[7]),64);
        bufp->chgQData(oldp+1236,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[8]),64);
        bufp->chgQData(oldp+1238,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[9]),64);
        bufp->chgQData(oldp+1240,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[10]),64);
        bufp->chgQData(oldp+1242,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[11]),64);
        bufp->chgQData(oldp+1244,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[12]),64);
        bufp->chgQData(oldp+1246,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[13]),64);
        bufp->chgQData(oldp+1248,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[14]),64);
        bufp->chgQData(oldp+1250,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__payload[15]),64);
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
        bufp->chgCData(oldp+1255,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
        bufp->chgCData(oldp+1256,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
        bufp->chgCData(oldp+1264,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+1269,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+1270,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+1271,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+1272,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+1274,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__full));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+1277,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgSData(oldp+1279,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__ether_simulation.axis_r_valid_clt));
        bufp->chgQData(oldp+1282,(vlSymsp->TOP__ether_simulation.axis_rd_data_clt),64);
        bufp->chgBit(oldp+1284,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_r_valid));
        bufp->chgQData(oldp+1285,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_rd_data),64);
        bufp->chgCData(oldp+1287,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+1288,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+1290,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__full));
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+1294,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+1295,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+1297,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+1298,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+1300,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1302,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+1303,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1305,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+1306,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1308,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+1309,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1311,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+1312,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1314,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+1315,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1317,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+1318,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1320,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+1321,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1323,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+1324,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1326,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+1327,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1329,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+1330,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1332,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+1333,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1335,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+1336,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1338,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+1339,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1341,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+1342,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1344,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+1345,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                              [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+1347,((0xffU & VL_SEL_IWII(72, 
                                                       vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_FIFO
                                                       [0xfU], 0U, 8U))),8);
        bufp->chgQData(oldp+1348,(VL_SEL_QWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+1350,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+1351,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+1352,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+1353,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+1354,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgCData(oldp+1355,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_FIFO_valid_l));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake));
        bufp->chgQData(oldp+1359,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[0]),64);
        bufp->chgQData(oldp+1361,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[1]),64);
        bufp->chgQData(oldp+1363,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[2]),64);
        bufp->chgQData(oldp+1365,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[3]),64);
        bufp->chgQData(oldp+1367,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[4]),64);
        bufp->chgQData(oldp+1369,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[5]),64);
        bufp->chgQData(oldp+1371,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[6]),64);
        bufp->chgQData(oldp+1373,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[7]),64);
        bufp->chgQData(oldp+1375,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[8]),64);
        bufp->chgQData(oldp+1377,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[9]),64);
        bufp->chgQData(oldp+1379,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[10]),64);
        bufp->chgQData(oldp+1381,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[11]),64);
        bufp->chgQData(oldp+1383,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[12]),64);
        bufp->chgQData(oldp+1385,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[13]),64);
        bufp->chgQData(oldp+1387,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[14]),64);
        bufp->chgQData(oldp+1389,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__payload[15]),64);
        bufp->chgCData(oldp+1391,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[0]),8);
        bufp->chgCData(oldp+1392,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[1]),8);
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[2]),8);
        bufp->chgCData(oldp+1394,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[3]),8);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[4]),8);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[5]),8);
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[6]),8);
        bufp->chgCData(oldp+1398,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[7]),8);
        bufp->chgCData(oldp+1399,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[8]),8);
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[9]),8);
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[10]),8);
        bufp->chgCData(oldp+1402,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[11]),8);
        bufp->chgCData(oldp+1403,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[12]),8);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[13]),8);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[14]),8);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__bytes_offset[15]),8);
        bufp->chgCData(oldp+1407,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+1408,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+1409,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+1410,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+1413,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+1414,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__full));
        bufp->chgBit(oldp+1415,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+1416,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+1417,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgSData(oldp+1418,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+1420,(vlSymsp->TOP__ether_simulation.seq_num_svr),32);
        bufp->chgIData(oldp+1421,(vlSymsp->TOP__ether_simulation.rcv_next_svr),32);
        bufp->chgIData(oldp+1422,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1423,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_num),32);
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__handshake_done_int));
        bufp->chgIData(oldp+1425,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+1426,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__out_order_req_int));
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__handshake_done));
        bufp->chgIData(oldp+1428,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1429,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+1430,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__out_order_req));
        bufp->chgIData(oldp+1432,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1433,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__clear_timeout));
        bufp->chgBit(oldp+1435,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1436,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+1437,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req));
        bufp->chgBit(oldp+1438,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+1439,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+1440,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+1441,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgBit(oldp+1442,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgBit(oldp+1443,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
        bufp->chgCData(oldp+1445,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+1446,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+1447,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+1448,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+1449,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+1450,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+1451,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x60U))));
        bufp->chgIData(oldp+1452,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1453,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1454,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1455,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1456,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x60U))));
        bufp->chgIData(oldp+1457,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1458,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1459,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1460,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1461,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x60U))));
        bufp->chgIData(oldp+1462,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1463,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1464,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1465,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1466,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x60U))));
        bufp->chgIData(oldp+1467,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1468,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1469,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1470,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1471,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x60U))));
        bufp->chgIData(oldp+1472,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1473,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1474,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1475,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1476,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x60U))));
        bufp->chgIData(oldp+1477,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1478,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1479,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1480,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1481,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x60U))));
        bufp->chgIData(oldp+1482,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1483,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1484,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1485,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1486,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x60U))));
        bufp->chgIData(oldp+1487,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1488,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1489,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1490,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1491,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x60U))));
        bufp->chgIData(oldp+1492,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1493,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1494,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1495,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1496,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x60U))));
        bufp->chgIData(oldp+1497,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1498,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1499,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1500,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1502,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
        bufp->chgIData(oldp+1503,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
        bufp->chgCData(oldp+1504,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+1505,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+1506,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+1507,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+1508,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgCData(oldp+1510,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+1511,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgSData(oldp+1512,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgIData(oldp+1513,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgIData(oldp+1514,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
        bufp->chgCData(oldp+1515,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+1516,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+1517,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+1518,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+1519,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+1520,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+1521,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+1522,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+1523,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+1524,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__pass_close));
        bufp->chgIData(oldp+1526,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+1527,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgBit(oldp+1528,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__clear));
        bufp->chgBit(oldp+1529,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_enable));
        bufp->chgSData(oldp+1530,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+1533,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1534,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+1535,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+1536,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+1537,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgIData(oldp+1538,(vlSymsp->TOP__ether_simulation.seq_num_clt),32);
        bufp->chgIData(oldp+1539,(vlSymsp->TOP__ether_simulation.rcv_next_clt),32);
        bufp->chgIData(oldp+1540,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1541,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_num),32);
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__handshake_done_int));
        bufp->chgIData(oldp+1543,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+1544,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__out_order_req_int));
        bufp->chgBit(oldp+1545,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__handshake_done));
        bufp->chgIData(oldp+1546,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1547,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req));
        bufp->chgBit(oldp+1549,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+1550,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+1551,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__out_order_req));
        bufp->chgIData(oldp+1552,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1553,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+1554,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__clear_timeout));
        bufp->chgBit(oldp+1555,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1556,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+1557,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+1558,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+1559,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgBit(oldp+1560,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgBit(oldp+1561,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__count_en_timeout));
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__clear_timeout));
        bufp->chgCData(oldp+1563,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+1564,((7U & VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+1565,(VL_SEL_IQII(35, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+1566,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+1567,(VL_SEL_IQII(33, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+1568,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+1569,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x60U))));
        bufp->chgIData(oldp+1570,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1571,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1572,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1573,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1574,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x60U))));
        bufp->chgIData(oldp+1575,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1576,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1577,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1578,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1579,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x60U))));
        bufp->chgIData(oldp+1580,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1581,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1582,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1583,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1584,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x60U))));
        bufp->chgIData(oldp+1585,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1586,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1587,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1588,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1589,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x60U))));
        bufp->chgIData(oldp+1590,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1591,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1592,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1593,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1594,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x60U))));
        bufp->chgIData(oldp+1595,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1596,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1597,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1598,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1599,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x60U))));
        bufp->chgIData(oldp+1600,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1601,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1602,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1603,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1604,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x60U))));
        bufp->chgIData(oldp+1605,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1606,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1607,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1608,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1609,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x60U))));
        bufp->chgIData(oldp+1610,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1611,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1612,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1613,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+1614,((1U & VL_BITSEL_IWII(97, 
                                                     vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x60U))));
        bufp->chgIData(oldp+1615,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+1616,(VL_SEL_IWII(97, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                              [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+1617,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+1618,((0xffffU & VL_SEL_IWII(97, 
                                                         vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_order
                                                         [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+1619,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgIData(oldp+1620,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
        bufp->chgIData(oldp+1621,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
        bufp->chgCData(oldp+1622,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+1623,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+1624,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+1625,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+1627,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+1629,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgSData(oldp+1630,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgIData(oldp+1631,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgIData(oldp+1632,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
        bufp->chgCData(oldp+1633,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+1634,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+1635,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+1636,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+1637,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+1638,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+1639,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+1640,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+1641,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+1642,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__pass_close));
        bufp->chgIData(oldp+1644,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+1645,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgBit(oldp+1646,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__clear));
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_enable));
        bufp->chgSData(oldp+1648,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+1649,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+1650,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+1651,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1652,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+1654,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+1655,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgIData(oldp+1656,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1657,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1658,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+1659,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1660,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1661,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xeU]))) {
        bufp->chgSData(oldp+1662,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_pl),16);
        bufp->chgSData(oldp+1663,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
        bufp->chgIData(oldp+1664,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xfU]))) {
        bufp->chgSData(oldp+1665,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_pl),16);
        bufp->chgSData(oldp+1666,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum_pl),16);
        bufp->chgIData(oldp+1667,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_checksum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x10U]))) {
        bufp->chgIData(oldp+1668,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1669,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1670,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x11U]))) {
        bufp->chgIData(oldp+1671,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_out),32);
        bufp->chgIData(oldp+1672,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_out),32);
        bufp->chgIData(oldp+1673,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__crc_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x12U]))) {
        bufp->chgSData(oldp+1674,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+1675,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+1676,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+1677,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x13U]))) {
        bufp->chgSData(oldp+1678,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+1679,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+1680,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+1681,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x14U]))) {
        bufp->chgBit(oldp+1682,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timewait_flag));
        bufp->chgSData(oldp+1683,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__count_out),9);
        bufp->chgBit(oldp+1684,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+1685,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timewait_flag));
        bufp->chgSData(oldp+1686,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__count_out),9);
        bufp->chgBit(oldp+1687,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x16U]))) {
        bufp->chgBit(oldp+1688,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__timeout_flag));
        bufp->chgBit(oldp+1689,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
        bufp->chgIData(oldp+1690,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__count_out),32);
        bufp->chgBit(oldp+1691,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+1692,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__timeout_flag));
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timeout_flag));
        bufp->chgIData(oldp+1694,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_out),32);
        bufp->chgBit(oldp+1695,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x18U]))) {
        bufp->chgQData(oldp+1696,(vlSymsp->TOP__ether_simulation.xgmii_txd_svr),64);
        bufp->chgCData(oldp+1698,(vlSymsp->TOP__ether_simulation.xgmii_txc_svr),8);
        bufp->chgQData(oldp+1699,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_clt_cvrt),64);
        bufp->chgCData(oldp+1701,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_clt_cvrt),8);
        bufp->chgQData(oldp+1702,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1704,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1705,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_send));
        bufp->chgQData(oldp+1706,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1709,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1710,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txd_l),64);
        bufp->chgCData(oldp+1712,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__xgmii_txc_l),8);
        bufp->chgCData(oldp+1713,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__state),7);
        bufp->chgBit(oldp+1714,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_last_dl));
        bufp->chgSData(oldp+1715,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__len_counter),16);
        bufp->chgBit(oldp+1716,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1717,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+1719,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__xgmii_rxc),8);
        bufp->chgQData(oldp+1720,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxd),64);
        bufp->chgCData(oldp+1722,(vlSymsp->TOP__ether_simulation__cvrt_svr.__PVT__be_rxc),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x19U]))) {
        bufp->chgQData(oldp+1723,(vlSymsp->TOP__ether_simulation.xgmii_txd_clt),64);
        bufp->chgCData(oldp+1725,(vlSymsp->TOP__ether_simulation.xgmii_txc_clt),8);
        bufp->chgQData(oldp+1726,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxd_svr_cvrt),64);
        bufp->chgCData(oldp+1728,(vlSymsp->TOP__ether_simulation.__PVT__xgmii_rxc_svr_cvrt),8);
        bufp->chgQData(oldp+1729,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1731,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1732,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_send));
        bufp->chgQData(oldp+1733,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd),64);
        bufp->chgCData(oldp+1735,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc),8);
        bufp->chgBit(oldp+1736,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1737,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txd_l),64);
        bufp->chgCData(oldp+1739,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__xgmii_txc_l),8);
        bufp->chgCData(oldp+1740,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__state),7);
        bufp->chgBit(oldp+1741,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_last_dl));
        bufp->chgSData(oldp+1742,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__len_counter),16);
        bufp->chgBit(oldp+1743,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_send));
        bufp->chgQData(oldp+1744,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxd),64);
        bufp->chgCData(oldp+1746,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__xgmii_rxc),8);
        bufp->chgQData(oldp+1747,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxd),64);
        bufp->chgCData(oldp+1749,(vlSymsp->TOP__ether_simulation__cvrt_clt.__PVT__be_rxc),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+1750,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_tx_last));
        bufp->chgQData(oldp+1751,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1753,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__tt_len_data),16);
        bufp->chgQData(oldp+1754,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1756,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1757,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__IP_last));
        bufp->chgQData(oldp+1758,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1760,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1761,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_last));
        bufp->chgCData(oldp+1762,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IP_state),3);
        bufp->chgIData(oldp+1763,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+1764,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_tx_last));
        bufp->chgQData(oldp+1765,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1767,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__tt_len_data),16);
        bufp->chgQData(oldp+1768,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1770,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1771,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__IP_last));
        bufp->chgQData(oldp+1772,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_transmit),64);
        bufp->chgSData(oldp+1774,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__tt_len_data),16);
        bufp->chgBit(oldp+1775,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_last));
        bufp->chgCData(oldp+1776,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IP_state),3);
        bufp->chgIData(oldp+1777,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__IPv4_chk_sum),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1cU]))) {
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__ether_simulation.__PVT__wr_FIFO_valid_svr));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__wr_FIFO_valid));
        bufp->chgQData(oldp+1780,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+1783,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+1784,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+1785,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__re_trans_int));
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+1787,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1788,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1790,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_abt_sent),16);
        bufp->chgQData(oldp+1791,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+1794,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+1795,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1796,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+1797,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1799,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1801,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+1804,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+1805,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+1807,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+1808,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+1809,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+1810,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+1811,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+1812,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+1813,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+1814,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+1815,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+1816,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+1817,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+1818,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+1819,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+1820,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+1821,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+1822,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+1823,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+1824,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+1825,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+1826,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+1827,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+1828,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+1829,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+1830,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+1831,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+1832,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+1833,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+1834,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+1835,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+1836,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+1837,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+1838,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+1839,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+1840,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+1841,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+1842,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+1843,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+1844,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+1845,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+1846,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+1847,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+1848,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+1849,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+1850,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+1851,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+1852,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+1853,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+1854,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+1855,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+1856,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+1857,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+1858,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+1859,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+1860,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+1861,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+1862,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+1863,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+1864,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+1865,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+1866,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+1867,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+1868,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+1869,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+1870,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+1871,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+1872,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+1873,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+1874,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+1875,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+1876,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+1877,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+1878,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+1879,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+1880,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+1881,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+1882,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+1883,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+1884,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+1885,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+1886,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+1887,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+1888,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+1889,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+1890,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+1891,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+1892,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+1893,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+1894,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+1895,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+1896,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+1897,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+1898,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+1899,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+1900,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+1901,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+1902,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+1903,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+1904,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+1905,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+1906,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+1907,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+1908,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+1909,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+1910,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+1911,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+1912,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+1913,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+1914,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+1916,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+1918,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+1920,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+1922,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+1924,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+1926,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+1928,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+1930,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+1932,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+1934,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+1936,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+1938,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+1940,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+1942,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+1944,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+1946,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+1947,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+1948,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+1949,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+1950,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+1951,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgBit(oldp+1952,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+1953,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+1954,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1955,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+1957,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1dU]))) {
        bufp->chgBit(oldp+1958,(vlSymsp->TOP__ether_simulation.wr_FIFO_valid_clt));
        bufp->chgBit(oldp+1959,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__wr_FIFO_valid));
        bufp->chgQData(oldp+1960,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+1962,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+1963,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+1964,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+1965,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__re_trans_int));
        bufp->chgBit(oldp+1966,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+1967,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1968,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1970,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1971,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+1972,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+1973,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+1975,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+1976,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+1977,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+1978,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+1979,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+1980,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+1981,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+1982,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+1983,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+1984,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+1985,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+1986,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+1987,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+1988,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+1989,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+1990,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+1991,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+1992,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+1993,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+1994,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+1995,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+1996,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+1997,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+1998,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+1999,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+2000,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+2001,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+2002,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+2003,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+2004,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+2005,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+2006,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+2007,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+2008,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+2009,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+2010,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+2011,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+2012,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+2013,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+2014,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+2015,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+2016,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+2017,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+2018,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+2019,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+2020,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+2021,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+2022,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+2023,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+2024,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+2025,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+2026,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+2027,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+2028,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+2029,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+2030,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+2031,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+2032,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+2033,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+2034,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+2035,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+2036,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+2037,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+2038,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+2039,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+2040,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+2041,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+2042,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+2043,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+2044,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+2045,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+2046,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+2047,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+2048,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+2049,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+2050,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+2051,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+2052,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+2053,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+2054,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+2055,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+2056,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+2057,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+2058,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+2059,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+2060,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+2061,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+2062,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+2063,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+2064,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+2065,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+2066,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+2067,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+2068,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+2069,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+2070,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+2071,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+2072,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+2073,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+2074,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+2075,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+2076,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+2077,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+2078,(VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+2079,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+2080,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+2081,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+2082,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+2083,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+2084,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+2085,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+2086,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+2087,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+2088,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+2090,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+2092,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+2094,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+2096,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+2098,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+2100,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+2102,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+2104,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+2106,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+2108,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+2110,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+2112,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+2114,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+2116,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+2118,(VL_SEL_QWII(1024, vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+2120,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+2121,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+2122,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+2123,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+2124,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+2125,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgQData(oldp+2126,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+2128,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+2129,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+2130,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+2131,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+2132,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+2133,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+2134,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+2135,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+2137,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1eU]))) {
        bufp->chgQData(oldp+2138,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+2140,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__MAC_valid));
        bufp->chgCData(oldp+2141,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__bytes_rcv_len),8);
        bufp->chgBit(oldp+2142,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_valid));
        bufp->chgQData(oldp+2143,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+2145,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv_len),8);
        bufp->chgQData(oldp+2146,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+2148,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_valid));
        bufp->chgCData(oldp+2149,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_len),8);
        bufp->chgSData(oldp+2150,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+2151,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_found));
        bufp->chgBit(oldp+2152,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_valid));
        bufp->chgCData(oldp+2153,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__sof_lane),3);
        bufp->chgSData(oldp+2154,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_rxc),16);
        bufp->chgIData(oldp+2155,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_check),32);
        bufp->chgWData(oldp+2156,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__frame_store),128);
        bufp->chgIData(oldp+2160,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame),32);
        bufp->chgIData(oldp+2161,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__rg),32);
        bufp->chgQData(oldp+2162,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+2164,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__crc_delay));
        bufp->chgBit(oldp+2165,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__soft_dl));
        bufp->chgQData(oldp+2166,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+2168,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv),8);
        bufp->chgCData(oldp+2169,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+2170,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx.__PVT__state),6);
        bufp->chgQData(oldp+2171,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+2173,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+2175,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+2177,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+2179,(vlSymsp->TOP__ether_simulation__svr_inst__mac_rx__CRC.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1fU]))) {
        bufp->chgQData(oldp+2180,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+2182,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__MAC_valid));
        bufp->chgCData(oldp+2183,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__bytes_rcv_len),8);
        bufp->chgBit(oldp+2184,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_valid));
        bufp->chgQData(oldp+2185,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgCData(oldp+2187,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv_len),8);
        bufp->chgQData(oldp+2188,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv),64);
        bufp->chgBit(oldp+2190,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_valid));
        bufp->chgCData(oldp+2191,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_len),8);
        bufp->chgSData(oldp+2192,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__xgmii_rxc_frame),16);
        bufp->chgBit(oldp+2193,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_found));
        bufp->chgBit(oldp+2194,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_valid));
        bufp->chgCData(oldp+2195,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__sof_lane),3);
        bufp->chgSData(oldp+2196,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_rxc),16);
        bufp->chgIData(oldp+2197,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_check),32);
        bufp->chgWData(oldp+2198,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__frame_store),128);
        bufp->chgIData(oldp+2202,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame),32);
        bufp->chgIData(oldp+2203,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__rg),32);
        bufp->chgQData(oldp+2204,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__FCS_frame_cvt),64);
        bufp->chgBit(oldp+2206,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__crc_delay));
        bufp->chgBit(oldp+2207,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__soft_dl));
        bufp->chgQData(oldp+2208,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__MAC_payload_rcv_cvrt),64);
        bufp->chgCData(oldp+2210,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv),8);
        bufp->chgCData(oldp+2211,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__bytes_rcv_dl),8);
        bufp->chgCData(oldp+2212,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx.__PVT__state),6);
        bufp->chgQData(oldp+2213,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+2215,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert.__PVT__be_rxd),64);
        bufp->chgQData(oldp+2217,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__xgmii_rxd),64);
        bufp->chgQData(oldp+2219,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt.__PVT__be_rxd),64);
        bufp->chgBit(oldp+2221,(vlSymsp->TOP__ether_simulation__clt_inst__mac_rx__CRC.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x20U]))) {
        bufp->chgBit(oldp+2222,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+2223,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+2224,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+2226,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_last));
        bufp->chgSData(oldp+2227,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__len_data),16);
        bufp->chgQData(oldp+2228,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_transmit),64);
        bufp->chgBit(oldp+2230,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+2231,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+2232,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+2234,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+2235,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+2236,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+2237,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+2238,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+2239,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+2240,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+2241,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+2243,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+2244,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgQData(oldp+2245,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
        bufp->chgBit(oldp+2247,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+2248,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x21U]))) {
        bufp->chgBit(oldp+2249,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+2250,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+2251,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+2253,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_last));
        bufp->chgSData(oldp+2254,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__len_data),16);
        bufp->chgQData(oldp+2255,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_transmit),64);
        bufp->chgBit(oldp+2257,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+2258,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+2259,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+2261,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+2262,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+2263,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+2264,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+2265,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+2266,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgSData(oldp+2267,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+2268,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+2270,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+2271,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgQData(oldp+2272,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__frame_hold),48);
        bufp->chgBit(oldp+2274,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+2275,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x22U]))) {
        bufp->chgBit(oldp+2276,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_valid));
        bufp->chgBit(oldp+2277,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_rx_last));
        bufp->chgSData(oldp+2278,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+2279,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_payload),64);
        bufp->chgCData(oldp+2281,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_bytes_rcv_len),8);
        bufp->chgBit(oldp+2282,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__protocol_data_flag));
        bufp->chgBit(oldp+2283,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_valid));
        bufp->chgBit(oldp+2284,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_last));
        bufp->chgQData(oldp+2285,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_payload),64);
        bufp->chgCData(oldp+2287,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
        bufp->chgSData(oldp+2288,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+2289,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__protocol_data_flag));
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_udp));
        bufp->chgBit(oldp+2291,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_tcp));
        bufp->chgCData(oldp+2292,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__state),4);
        bufp->chgSData(oldp+2293,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_checksum),16);
        bufp->chgSData(oldp+2294,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__bytes_rcv),16);
        bufp->chgSData(oldp+2295,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__dst_addr),16);
        bufp->chgSData(oldp+2296,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_len),16);
        bufp->chgBit(oldp+2297,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_valid));
        bufp->chgBit(oldp+2298,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_data_flag));
        bufp->chgSData(oldp+2299,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+2300,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_payload),64);
        bufp->chgBit(oldp+2302,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_last));
        bufp->chgCData(oldp+2303,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_bytes_rcv),8);
        bufp->chgQData(oldp+2304,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
        bufp->chgBit(oldp+2306,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_last));
        bufp->chgBit(oldp+2307,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
        bufp->chgCData(oldp+2308,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
        bufp->chgSData(oldp+2309,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+2310,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_data_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x23U]))) {
        bufp->chgBit(oldp+2311,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_valid));
        bufp->chgBit(oldp+2312,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_rx_last));
        bufp->chgSData(oldp+2313,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+2314,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_payload),64);
        bufp->chgCData(oldp+2316,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_bytes_rcv_len),8);
        bufp->chgBit(oldp+2317,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__protocol_data_flag));
        bufp->chgBit(oldp+2318,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_valid));
        bufp->chgBit(oldp+2319,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_last));
        bufp->chgQData(oldp+2320,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_payload),64);
        bufp->chgCData(oldp+2322,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_bytes_rcv_len),8);
        bufp->chgSData(oldp+2323,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+2324,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__protocol_data_flag));
        bufp->chgBit(oldp+2325,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_udp));
        bufp->chgBit(oldp+2326,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_tcp));
        bufp->chgCData(oldp+2327,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__state),4);
        bufp->chgSData(oldp+2328,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_checksum),16);
        bufp->chgSData(oldp+2329,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__bytes_rcv),16);
        bufp->chgSData(oldp+2330,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__dst_addr),16);
        bufp->chgSData(oldp+2331,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_len),16);
        bufp->chgBit(oldp+2332,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_valid));
        bufp->chgBit(oldp+2333,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_data_flag));
        bufp->chgSData(oldp+2334,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+2335,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_payload),64);
        bufp->chgBit(oldp+2337,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_last));
        bufp->chgCData(oldp+2338,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_bytes_rcv),8);
        bufp->chgQData(oldp+2339,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
        bufp->chgBit(oldp+2341,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_last));
        bufp->chgBit(oldp+2342,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
        bufp->chgCData(oldp+2343,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv),8);
        bufp->chgSData(oldp+2344,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+2345,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_data_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x24U]))) {
        bufp->chgBit(oldp+2346,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__nw_segment));
        bufp->chgBit(oldp+2347,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+2348,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+2350,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+2351,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+2352,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+2353,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+2354,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgBit(oldp+2356,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+2357,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+2358,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+2360,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2361,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2362,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+2363,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgCData(oldp+2364,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__bytes_rcv),8);
        bufp->chgIData(oldp+2365,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2366,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2367,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2368,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2369,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2370,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+2371,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgIData(oldp+2372,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2373,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2374,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+2375,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+2376,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2377,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2378,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2379,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2380,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2381,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgCData(oldp+2382,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
        bufp->chgQData(oldp+2383,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+2385,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+2386,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgIData(oldp+2388,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+2389,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+2391,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+2392,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2393,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2394,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2395,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2396,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2397,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgCData(oldp+2399,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
        bufp->chgBit(oldp+2400,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+2401,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2402,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2403,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+2404,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+2405,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+2406,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+2407,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+2408,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+2409,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+2410,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x25U]))) {
        bufp->chgBit(oldp+2411,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__nw_segment));
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+2413,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+2415,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+2416,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+2418,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+2419,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+2421,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2423,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+2424,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_rx_last));
        bufp->chgQData(oldp+2425,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+2427,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2428,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2429,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+2430,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgCData(oldp+2431,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__bytes_rcv),8);
        bufp->chgIData(oldp+2432,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2433,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2434,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2435,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2436,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2437,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+2438,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+2439,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+2440,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+2441,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2442,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2443,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2444,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2445,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2446,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgCData(oldp+2447,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
        bufp->chgQData(oldp+2448,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+2450,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+2451,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+2452,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgIData(oldp+2453,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+2454,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+2456,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+2457,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+2458,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+2459,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+2460,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+2461,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+2462,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgBit(oldp+2463,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgCData(oldp+2464,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
        bufp->chgBit(oldp+2465,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+2466,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+2468,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+2469,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+2470,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+2471,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+2472,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+2473,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+2474,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+2475,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x28U]))) {
        bufp->chgSData(oldp+2476,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2477,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2478,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_basesum_payload),16);
        bufp->chgSData(oldp+2479,(vlSymsp->TOP__ether_simulation__svr_inst__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2480,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x29U]))) {
        bufp->chgSData(oldp+2481,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2482,(vlSymsp->TOP__ether_simulation__clt_inst__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2483,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+2484,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_basesum_payload),16);
        bufp->chgSData(oldp+2485,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2cU]))) {
        bufp->chgBit(oldp+2486,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_send));
        bufp->chgBit(oldp+2487,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__protocol_send));
        bufp->chgCData(oldp+2488,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_state),3);
        bufp->chgQData(oldp+2489,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nxIP_transmit_l),64);
        bufp->chgBit(oldp+2491,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chk_sum_valid));
        bufp->chgIData(oldp+2492,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__temp),20);
        bufp->chgIData(oldp+2493,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
        bufp->chgSData(oldp+2494,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__ntt_len_data),16);
        bufp->chgSData(oldp+2495,(vlSymsp->TOP__ether_simulation__svr_inst__ip_tx.__PVT__chksum_rslt),16);
        bufp->chgBit(oldp+2496,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_send));
        bufp->chgBit(oldp+2497,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2dU]))) {
        bufp->chgBit(oldp+2498,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_send));
        bufp->chgBit(oldp+2499,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__protocol_send));
        bufp->chgCData(oldp+2500,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_state),3);
        bufp->chgQData(oldp+2501,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nxIP_transmit_l),64);
        bufp->chgBit(oldp+2503,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chk_sum_valid));
        bufp->chgIData(oldp+2504,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__temp),20);
        bufp->chgIData(oldp+2505,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__nIPv4_chk_sum),17);
        bufp->chgSData(oldp+2506,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__ntt_len_data),16);
        bufp->chgSData(oldp+2507,(vlSymsp->TOP__ether_simulation__clt_inst__ip_tx.__PVT__chksum_rslt),16);
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_send));
        bufp->chgBit(oldp+2509,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_send));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2eU]))) {
        bufp->chgBit(oldp+2510,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__IP_flush));
        bufp->chgBit(oldp+2511,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__IP_flush));
        bufp->chgCData(oldp+2512,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nstate),4);
        bufp->chgSData(oldp+2513,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_checksum),16);
        bufp->chgQData(oldp+2514,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_payload),64);
        bufp->chgSData(oldp+2516,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nbytes_rcv),16);
        bufp->chgBit(oldp+2517,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_en));
        bufp->chgBit(oldp+2518,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_clear));
        bufp->chgQData(oldp+2519,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_in),64);
        bufp->chgIData(oldp+2521,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__chksum_final),17);
        bufp->chgSData(oldp+2522,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ndst_addr),16);
        bufp->chgSData(oldp+2523,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_len),16);
        bufp->chgCData(oldp+2524,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
        bufp->chgSData(oldp+2525,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_pseuder),16);
        bufp->chgIData(oldp+2526,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__temp),20);
        bufp->chgBit(oldp+2527,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_valid));
        bufp->chgBit(oldp+2528,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nIP_last));
        bufp->chgBit(oldp+2529,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_udp));
        bufp->chgBit(oldp+2530,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__next_is_tcp));
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__nprotocol_data_flag));
        bufp->chgSData(oldp+2532,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__total_len),16);
        bufp->chgSData(oldp+2533,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__frags_flag),16);
        bufp->chgCData(oldp+2534,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ttl),8);
        bufp->chgCData(oldp+2535,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__flags),3);
        bufp->chgSData(oldp+2536,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__fragoff),13);
        bufp->chgCData(oldp+2537,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__test_valid),4);
        bufp->chgCData(oldp+2538,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__ip_version),4);
        bufp->chgBit(oldp+2539,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_src_addr));
        bufp->chgBit(oldp+2540,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx.__PVT__is_ip_version_valid));
        bufp->chgBit(oldp+2541,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__IP_flush));
        bufp->chgBit(oldp+2542,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
        bufp->chgBit(oldp+2543,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
        bufp->chgBit(oldp+2544,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__clear));
        bufp->chgQData(oldp+2545,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
        bufp->chgIData(oldp+2547,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+2548,(vlSymsp->TOP__ether_simulation__svr_inst__ip_rx__chksum_inst.__PVT__temp),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2fU]))) {
        bufp->chgBit(oldp+2549,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__IP_flush));
        bufp->chgBit(oldp+2550,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__IP_flush));
        bufp->chgCData(oldp+2551,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nstate),4);
        bufp->chgSData(oldp+2552,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_checksum),16);
        bufp->chgQData(oldp+2553,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_payload),64);
        bufp->chgSData(oldp+2555,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nbytes_rcv),16);
        bufp->chgBit(oldp+2556,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_en));
        bufp->chgBit(oldp+2557,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_clear));
        bufp->chgQData(oldp+2558,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_in),64);
        bufp->chgIData(oldp+2560,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__chksum_final),17);
        bufp->chgSData(oldp+2561,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ndst_addr),16);
        bufp->chgSData(oldp+2562,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_len),16);
        bufp->chgCData(oldp+2563,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_bytes_rcv_len),8);
        bufp->chgSData(oldp+2564,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_pseuder),16);
        bufp->chgIData(oldp+2565,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__temp),20);
        bufp->chgBit(oldp+2566,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_valid));
        bufp->chgBit(oldp+2567,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nIP_last));
        bufp->chgBit(oldp+2568,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_udp));
        bufp->chgBit(oldp+2569,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__next_is_tcp));
        bufp->chgBit(oldp+2570,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__nprotocol_data_flag));
        bufp->chgSData(oldp+2571,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__total_len),16);
        bufp->chgSData(oldp+2572,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__frags_flag),16);
        bufp->chgCData(oldp+2573,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ttl),8);
        bufp->chgCData(oldp+2574,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__flags),3);
        bufp->chgSData(oldp+2575,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__fragoff),13);
        bufp->chgCData(oldp+2576,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__test_valid),4);
        bufp->chgCData(oldp+2577,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__ip_version),4);
        bufp->chgBit(oldp+2578,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_src_addr));
        bufp->chgBit(oldp+2579,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx.__PVT__is_ip_version_valid));
        bufp->chgBit(oldp+2580,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__IP_flush));
        bufp->chgBit(oldp+2581,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_flush));
        bufp->chgBit(oldp+2582,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__FIFO_rd_en));
        bufp->chgBit(oldp+2583,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__clear));
        bufp->chgQData(oldp+2584,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__TCP_payload_tx),64);
        bufp->chgIData(oldp+2586,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+2587,(vlSymsp->TOP__ether_simulation__clt_inst__ip_rx__chksum_inst.__PVT__temp),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x30U]))) {
        bufp->chgBit(oldp+2588,(vlSymsp->TOP__ether_simulation__svr_inst.__PVT__TCP_flush_int));
        bufp->chgBit(oldp+2589,(vlSymsp->TOP__ether_simulation__svr_inst__u_payload_fifo.__PVT__TCP_flush));
        bufp->chgBit(oldp+2590,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp.__PVT__TCP_flush));
        bufp->chgBit(oldp+2591,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
        bufp->chgCData(oldp+2592,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
        bufp->chgIData(oldp+2593,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
        bufp->chgIData(oldp+2594,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
        bufp->chgCData(oldp+2595,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
        bufp->chgSData(oldp+2596,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
        bufp->chgSData(oldp+2597,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
        bufp->chgSData(oldp+2598,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
        bufp->chgIData(oldp+2599,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
        bufp->chgSData(oldp+2600,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
        bufp->chgQData(oldp+2601,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
        bufp->chgIData(oldp+2603,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__temp),20);
        bufp->chgBit(oldp+2604,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
        bufp->chgBit(oldp+2605,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
        bufp->chgBit(oldp+2606,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
        bufp->chgBit(oldp+2607,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
        bufp->chgCData(oldp+2608,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+2609,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
        bufp->chgBit(oldp+2610,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x31U]))) {
        bufp->chgBit(oldp+2611,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__debug));
        bufp->chgSData(oldp+2612,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
        bufp->chgSData(oldp+2613,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
        bufp->chgSData(oldp+2614,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
        bufp->chgCData(oldp+2615,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
        bufp->chgCData(oldp+2616,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
        bufp->chgSData(oldp+2617,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
        bufp->chgBit(oldp+2618,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__valid));
        bufp->chgCData(oldp+2619,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
        bufp->chgIData(oldp+2620,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2621,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
        bufp->chgBit(oldp+2622,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__valid));
        bufp->chgCData(oldp+2623,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
        bufp->chgIData(oldp+2624,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2625,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
        bufp->chgBit(oldp+2626,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__valid));
        bufp->chgCData(oldp+2627,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
        bufp->chgIData(oldp+2628,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x33U]))) {
        bufp->chgBit(oldp+2629,(vlSymsp->TOP__ether_simulation__clt_inst.__PVT__TCP_flush_int));
        bufp->chgBit(oldp+2630,(vlSymsp->TOP__ether_simulation__clt_inst__u_payload_fifo.__PVT__TCP_flush));
        bufp->chgBit(oldp+2631,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp.__PVT__TCP_flush));
        bufp->chgBit(oldp+2632,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_flush));
        bufp->chgCData(oldp+2633,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
        bufp->chgIData(oldp+2634,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
        bufp->chgIData(oldp+2635,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
        bufp->chgCData(oldp+2636,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
        bufp->chgSData(oldp+2637,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
        bufp->chgSData(oldp+2638,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
        bufp->chgSData(oldp+2639,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
        bufp->chgIData(oldp+2640,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
        bufp->chgSData(oldp+2641,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
        bufp->chgQData(oldp+2642,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
        bufp->chgIData(oldp+2644,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__temp),20);
        bufp->chgBit(oldp+2645,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_valid));
        bufp->chgBit(oldp+2646,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nrcv_data));
        bufp->chgBit(oldp+2647,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__n_nw_segment));
        bufp->chgBit(oldp+2648,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nTCP_last));
        bufp->chgCData(oldp+2649,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+2650,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nstate),3);
        bufp->chgBit(oldp+2651,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_flush));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x34U]))) {
        bufp->chgBit(oldp+2652,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__debug));
        bufp->chgSData(oldp+2653,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__overlap_mask),10);
        bufp->chgSData(oldp+2654,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
        bufp->chgSData(oldp+2655,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
        bufp->chgCData(oldp+2656,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__lt_idx),4);
        bufp->chgCData(oldp+2657,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rt_idx),4);
        bufp->chgSData(oldp+2658,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__din),10);
        bufp->chgBit(oldp+2659,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__valid));
        bufp->chgCData(oldp+2660,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__idx),4);
        bufp->chgIData(oldp+2661,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2662,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__din),10);
        bufp->chgBit(oldp+2663,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__valid));
        bufp->chgCData(oldp+2664,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__idx),4);
        bufp->chgIData(oldp+2665,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+2666,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__din),10);
        bufp->chgBit(oldp+2667,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__valid));
        bufp->chgCData(oldp+2668,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__idx),4);
        bufp->chgIData(oldp+2669,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+2670,(vlSelfRef.CLK));
    bufp->chgBit(oldp+2671,(vlSelfRef.nRST));
    bufp->chgCData(oldp+2672,(vlSelfRef.tb_count),8);
    bufp->chgBit(oldp+2673,(vlSelfRef.client_lost));
    bufp->chgBit(oldp+2674,(vlSelfRef.out_order));
    bufp->chgBit(oldp+2675,(vlSelfRef.err_flag));
    bufp->chgBit(oldp+2676,(vlSelfRef.TX_en_svr));
    bufp->chgBit(oldp+2677,(vlSelfRef.end_ss_svr));
    bufp->chgQData(oldp+2678,(vlSelfRef.xgmii_txd_svr),64);
    bufp->chgCData(oldp+2680,(vlSelfRef.xgmii_txc_svr),8);
    bufp->chgBit(oldp+2681,(vlSelfRef.frame_end_svr));
    bufp->chgQData(oldp+2682,(vlSelfRef.xgmii_rxd_svr),64);
    bufp->chgCData(oldp+2684,(vlSelfRef.xgmii_rxc_svr),8);
    bufp->chgBit(oldp+2685,(vlSelfRef.axis_last_svr));
    bufp->chgBit(oldp+2686,(vlSelfRef.wr_FIFO_en_svr));
    bufp->chgIData(oldp+2687,(vlSelfRef.len_seq_svr),32);
    bufp->chgQData(oldp+2688,(vlSelfRef.soupbin_TCP_payload_svr),64);
    bufp->chgBit(oldp+2690,(vlSelfRef.wr_FIFO_validing_svr));
    bufp->chgBit(oldp+2691,(vlSelfRef.axis_r_en_svr));
    bufp->chgBit(oldp+2692,(vlSelfRef.axis_r_valid_svr));
    bufp->chgQData(oldp+2693,(vlSelfRef.axis_rd_data_svr),64);
    bufp->chgBit(oldp+2695,(vlSelfRef.TCP_stop_flag_svr));
    bufp->chgIData(oldp+2696,(vlSelfRef.seq_num_svr),32);
    bufp->chgIData(oldp+2697,(vlSelfRef.rcv_next_svr),32);
    bufp->chgBit(oldp+2698,(vlSelfRef.TX_en_clt));
    bufp->chgBit(oldp+2699,(vlSelfRef.end_ss_clt));
    bufp->chgQData(oldp+2700,(vlSelfRef.xgmii_txd_clt),64);
    bufp->chgCData(oldp+2702,(vlSelfRef.xgmii_txc_clt),8);
    bufp->chgBit(oldp+2703,(vlSelfRef.frame_end_clt));
    bufp->chgQData(oldp+2704,(vlSelfRef.xgmii_rxd_clt),64);
    bufp->chgCData(oldp+2706,(vlSelfRef.xgmii_rxc_clt),8);
    bufp->chgBit(oldp+2707,(vlSelfRef.axis_last_clt));
    bufp->chgBit(oldp+2708,(vlSelfRef.wr_FIFO_en_clt));
    bufp->chgIData(oldp+2709,(vlSelfRef.len_seq_clt),32);
    bufp->chgQData(oldp+2710,(vlSelfRef.soupbin_TCP_payload_clt),64);
    bufp->chgBit(oldp+2712,(vlSelfRef.wr_FIFO_valid_clt));
    bufp->chgBit(oldp+2713,(vlSelfRef.axis_r_en_clt));
    bufp->chgBit(oldp+2714,(vlSelfRef.axis_r_valid_clt));
    bufp->chgQData(oldp+2715,(vlSelfRef.axis_rd_data_clt),64);
    bufp->chgBit(oldp+2717,(vlSelfRef.TCP_stop_flag_clt));
    bufp->chgIData(oldp+2718,(vlSelfRef.seq_num_clt),32);
    bufp->chgIData(oldp+2719,(vlSelfRef.rcv_next_clt),32);
    bufp->chgQData(oldp+2720,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->chgCData(oldp+2722,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->chgQData(oldp+2723,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txd_l),64);
    bufp->chgCData(oldp+2725,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx.__PVT__nxgmii_txc_l),8);
    bufp->chgBit(oldp+2726,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__inst.__PVT__up_send));
    bufp->chgBit(oldp+2727,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__up_send));
    bufp->chgIData(oldp+2728,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->chgIData(oldp+2729,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->chgIData(oldp+2730,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+2731,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+2732,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgIData(oldp+2733,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+2734,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+2735,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgQData(oldp+2736,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->chgIData(oldp+2738,(vlSymsp->TOP__ether_simulation__svr_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->chgQData(oldp+2739,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__data_in),64);
    bufp->chgIData(oldp+2741,(vlSymsp->TOP__ether_simulation__clt_inst__mac_tx__CRC.__PVT__next_crc),32);
    bufp->chgIData(oldp+2742,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->chgBit(oldp+2743,(vlSymsp->TOP__ether_simulation__svr_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
    bufp->chgIData(oldp+2744,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->chgBit(oldp+2745,(vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
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
    vlSymsp->TOP.__Vm_traceActivity[0x3aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3dU] = 0U;
}
