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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__end_ss_int));
        bufp->chgSData(oldp+1,(vlSymsp->TOP__top.__PVT__checksum_re_trans_int),16);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__top__u_tcp.__PVT__end_ss));
        bufp->chgSData(oldp+3,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_re_trans),16);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_up));
        bufp->chgSData(oldp+5,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__gen_en));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__top__u_tcp__inst.__PVT__clear));
        bufp->chgSData(oldp+8,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__src_port),16);
        bufp->chgSData(oldp+9,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__dest_port),16);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__end_ss));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__timeout_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+12,(vlSymsp->TOP__top.CLK));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__top.nRST));
        bufp->chgCData(oldp+14,(vlSymsp->TOP__top.tb_count),8);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__top.IP_valid));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__top.IP_flush));
        bufp->chgSData(oldp+17,(vlSymsp->TOP__top.IP_pseuder),16);
        bufp->chgQData(oldp+18,(vlSymsp->TOP__top.IP_payload),64);
        bufp->chgSData(oldp+20,(vlSymsp->TOP__top.TCP_len),16);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__top.IP_bytes_rcv),8);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__top.TCP_send));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__top.TX_en));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__top.axis_last));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__top.wr_FIFO_en));
        bufp->chgIData(oldp+26,(vlSymsp->TOP__top.len_seq),32);
        bufp->chgQData(oldp+27,(vlSymsp->TOP__top.soupbin_TCP_payload),64);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__top.axis_r_en));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__top__u_payload_fifo.__PVT__CLK));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nRST));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_en));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__top__u_tcp.__PVT__CLK));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__top__u_tcp.__PVT__nRST));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__top__u_tcp.__PVT__TX_en));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__top__u_tcp.__PVT__IP_valid));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__top__u_tcp.__PVT__IP_flush));
        bufp->chgSData(oldp+38,(vlSymsp->TOP__top__u_tcp.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+39,(vlSymsp->TOP__top__u_tcp.__PVT__IP_payload),64);
        bufp->chgSData(oldp+41,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_len),16);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__top__u_tcp.__PVT__IP_bytes_rcv),8);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_send));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_TX_en));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__top__u_tcp.__PVT__wr_axis_last));
        bufp->chgQData(oldp+46,(vlSymsp->TOP__top__u_tcp.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__top__u_fifo_tx.__PVT__CLK));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nRST));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__top__u_fifo_tx.__PVT__TX_en));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__top__u_fifo_tx.__PVT__axis_last));
        bufp->chgIData(oldp+53,(vlSymsp->TOP__top__u_fifo_tx.__PVT__len_seq),32);
        bufp->chgQData(oldp+54,(vlSymsp->TOP__top__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__CLK));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__nRST));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__top__u_tcp__inst.__PVT__CLK));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nRST));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__top__u_tcp__inst.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__top__u_tcp__inst.__PVT__axis_last));
        bufp->chgQData(oldp+62,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_payload_tx),64);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TX_en));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__CLK));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nRST));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_send));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__CLK));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nRST));
        bufp->chgQData(oldp+70,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_flush));
        bufp->chgSData(oldp+74,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len),16);
        bufp->chgSData(oldp+75,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__CLK));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nRST));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgBit(oldp+78,(vlSymsp->TOP__top.__PVT__TCP_flush_int));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_flush));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush));
        bufp->chgCData(oldp+82,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
        bufp->chgSData(oldp+86,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
        bufp->chgSData(oldp+87,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
        bufp->chgSData(oldp+88,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
        bufp->chgSData(oldp+89,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_trk),16);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_len_data),16);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
        bufp->chgSData(oldp+92,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
        bufp->chgQData(oldp+93,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__temp),20);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_valid));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nrcv_data));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__n_nw_segment));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_last));
        bufp->chgCData(oldp+100,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nstate),3);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgSData(oldp+103,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp),20);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp1),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xbU])))) {
        bufp->chgBit(oldp+108,(vlSymsp->TOP__top.__PVT__rd_ftx_en_int));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_tx));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_en));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+112,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__valid_checksum));
        bufp->chgCData(oldp+114,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nstate),7);
        bufp->chgQData(oldp+115,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nseq_up));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xcU])))) {
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top.TCP_stop_flag));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__top.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+122,(vlSymsp->TOP__top.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__top.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+124,(vlSymsp->TOP__top.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__top.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__top.__PVT__out_order_req_int));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__top.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+129,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+131,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgQData(oldp+133,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+135,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+136,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+138,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+139,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+141,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+142,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+144,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+145,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+147,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+148,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+150,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+151,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+153,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+154,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+156,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+157,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+159,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+160,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+162,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+163,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+165,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+166,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+168,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+169,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+171,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+172,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+174,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+175,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+177,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+178,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+180,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgCData(oldp+181,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nlen_TCP_flush),4);
        bufp->chgCData(oldp+183,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_len_ptr),4);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nseq_trk_rd),32);
        bufp->chgBit(oldp+185,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__top__u_payload_fifo.__PVT__naxis_r_valid));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_flush_l));
        bufp->chgCData(oldp+188,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nwr_ptr),4);
        bufp->chgCData(oldp+189,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_ptr),4);
        bufp->chgBit(oldp+190,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+191,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_rcv));
        bufp->chgCData(oldp+193,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+194,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__top__u_tcp.__PVT__out_order_req));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req));
        bufp->chgSData(oldp+198,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+199,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+200,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+202,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+203,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+204,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+205,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+206,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+207,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+208,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+209,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+210,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+211,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+212,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+213,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+214,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+215,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+216,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+217,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+218,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+219,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+220,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+221,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+222,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+223,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+224,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+225,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+226,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+227,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+228,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+229,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+230,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+231,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+232,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+233,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+234,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+235,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+236,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+237,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+238,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+239,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+240,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+241,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+242,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+243,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+244,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+245,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+246,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+247,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+248,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+249,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+250,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+251,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+252,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+253,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+254,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+255,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+256,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+257,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+258,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+259,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+260,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+261,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+262,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+263,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+264,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+265,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+266,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+267,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+268,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+269,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+270,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+271,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+272,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+273,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+274,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+275,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+276,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+277,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+278,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+279,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+280,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+281,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+282,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+283,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+284,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+285,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+286,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+287,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+288,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+289,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+290,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+291,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+292,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+293,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+294,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+295,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+296,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+297,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+298,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+299,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+300,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+301,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+302,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+303,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+304,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+305,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+306,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+308,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+309,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+310,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+311,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+312,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+314,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+316,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+318,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+320,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+322,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+324,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+326,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+328,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+330,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+332,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+334,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+336,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+338,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+340,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+342,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+344,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+346,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+350,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+351,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nchecksum_l),16);
        bufp->chgBit(oldp+352,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+353,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+355,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgCData(oldp+359,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+360,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+361,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+362,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+363,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+364,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+365,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+366,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+367,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+368,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [0U], 0x50U))));
        bufp->chgIData(oldp+369,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+370,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+371,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+372,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+373,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [1U], 0x50U))));
        bufp->chgIData(oldp+374,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+375,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+376,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+377,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+378,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [2U], 0x50U))));
        bufp->chgIData(oldp+379,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+380,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+381,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+382,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+383,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [3U], 0x50U))));
        bufp->chgIData(oldp+384,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+385,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+386,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+387,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+388,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [4U], 0x50U))));
        bufp->chgIData(oldp+389,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+390,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+391,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+392,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+393,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [5U], 0x50U))));
        bufp->chgIData(oldp+394,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+395,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+396,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+397,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+398,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [6U], 0x50U))));
        bufp->chgIData(oldp+399,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+400,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+401,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+402,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+403,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [7U], 0x50U))));
        bufp->chgIData(oldp+404,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+405,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+406,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+407,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+408,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [8U], 0x50U))));
        bufp->chgIData(oldp+409,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+410,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+411,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+412,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+413,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [9U], 0x50U))));
        bufp->chgIData(oldp+414,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+415,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+416,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+417,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+418,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+419,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgCData(oldp+420,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+422,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgCData(oldp+423,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+424,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+425,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+426,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+427,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+428,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+429,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+430,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+431,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+432,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+433,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+434,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+435,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+436,(vlSymsp->TOP__top__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+437,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+438,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+439,(vlSymsp->TOP__top.axis_r_valid));
        bufp->chgQData(oldp+440,(vlSymsp->TOP__top.axis_rd_data),64);
        bufp->chgCData(oldp+442,(vlSymsp->TOP__top.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+443,(vlSymsp->TOP__top.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+444,(vlSymsp->TOP__top.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+445,(vlSymsp->TOP__top.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+446,(vlSymsp->TOP__top.__PVT__full));
        bufp->chgCData(oldp+447,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+450,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+451,(vlSymsp->TOP__top__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+453,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+455,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+457,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+458,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+460,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+461,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+463,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+464,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+466,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+467,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+469,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+470,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+472,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+473,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+475,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+476,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+478,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+479,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+481,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+482,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+484,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+485,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+487,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+488,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+490,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+491,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+493,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+494,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+496,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+497,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+499,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+500,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+502,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgQData(oldp+503,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+505,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__top__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__top__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+509,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+511,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid_l));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgQData(oldp+513,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[0]),64);
        bufp->chgQData(oldp+515,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[1]),64);
        bufp->chgQData(oldp+517,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[2]),64);
        bufp->chgQData(oldp+519,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[3]),64);
        bufp->chgQData(oldp+521,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[4]),64);
        bufp->chgQData(oldp+523,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[5]),64);
        bufp->chgQData(oldp+525,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[6]),64);
        bufp->chgQData(oldp+527,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[7]),64);
        bufp->chgQData(oldp+529,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[8]),64);
        bufp->chgQData(oldp+531,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[9]),64);
        bufp->chgQData(oldp+533,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[10]),64);
        bufp->chgQData(oldp+535,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[11]),64);
        bufp->chgQData(oldp+537,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[12]),64);
        bufp->chgQData(oldp+539,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[13]),64);
        bufp->chgQData(oldp+541,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[14]),64);
        bufp->chgQData(oldp+543,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[15]),64);
        bufp->chgCData(oldp+545,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[0]),8);
        bufp->chgCData(oldp+546,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[1]),8);
        bufp->chgCData(oldp+547,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[2]),8);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[3]),8);
        bufp->chgCData(oldp+549,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[4]),8);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[5]),8);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[6]),8);
        bufp->chgCData(oldp+552,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[7]),8);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[8]),8);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[9]),8);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[10]),8);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[11]),8);
        bufp->chgCData(oldp+557,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[12]),8);
        bufp->chgCData(oldp+558,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[13]),8);
        bufp->chgCData(oldp+559,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[14]),8);
        bufp->chgCData(oldp+560,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[15]),8);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+563,(vlSymsp->TOP__top__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+564,(vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+566,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+567,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+568,(vlSymsp->TOP__top__u_tcp.__PVT__full));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+570,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+571,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgSData(oldp+572,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
        bufp->chgBit(oldp+573,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+574,(vlSymsp->TOP__top.rcv_next),32);
        bufp->chgIData(oldp+575,(vlSymsp->TOP__top.seq_num),32);
        bufp->chgBit(oldp+576,(vlSymsp->TOP__top.__PVT__handshake_done_int));
        bufp->chgIData(oldp+577,(vlSymsp->TOP__top.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+578,(vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done));
        bufp->chgIData(oldp+579,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+580,(vlSymsp->TOP__top__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+581,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_start),32);
        bufp->chgIData(oldp+582,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+583,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+584,(vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+586,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+587,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+588,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgCData(oldp+589,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+590,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+591,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+592,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+593,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+594,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+595,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [0U], 0x50U))));
        bufp->chgIData(oldp+596,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [0U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+597,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+598,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+599,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+600,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [1U], 0x50U))));
        bufp->chgIData(oldp+601,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [1U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+602,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+603,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+604,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+605,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [2U], 0x50U))));
        bufp->chgIData(oldp+606,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [2U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+607,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+608,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+609,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+610,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [3U], 0x50U))));
        bufp->chgIData(oldp+611,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [3U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+612,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+613,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+614,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+615,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [4U], 0x50U))));
        bufp->chgIData(oldp+616,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [4U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+617,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+618,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+619,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+620,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [5U], 0x50U))));
        bufp->chgIData(oldp+621,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [5U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+622,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+623,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+624,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+625,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [6U], 0x50U))));
        bufp->chgIData(oldp+626,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [6U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+627,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+628,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+629,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+630,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [7U], 0x50U))));
        bufp->chgIData(oldp+631,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [7U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+632,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+633,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+634,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+635,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [8U], 0x50U))));
        bufp->chgIData(oldp+636,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [8U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+637,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+638,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+639,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+640,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [9U], 0x50U))));
        bufp->chgIData(oldp+641,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [9U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+642,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+643,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+644,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+645,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgCData(oldp+646,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+647,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+648,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+649,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+650,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgSData(oldp+652,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgCData(oldp+653,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+654,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgCData(oldp+656,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+657,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+658,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+659,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+660,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+661,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+662,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+663,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+664,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+665,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+666,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+667,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgSData(oldp+668,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+669,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+670,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+671,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+672,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+673,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+674,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+675,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+676,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+677,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+678,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+679,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgQData(oldp+680,(vlSymsp->TOP__top.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+682,(vlSymsp->TOP__top.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__top.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+684,(vlSymsp->TOP__top.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+685,(vlSymsp->TOP__top.__PVT__re_trans_int));
        bufp->chgBit(oldp+686,(vlSymsp->TOP__top.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__top.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+688,(vlSymsp->TOP__top.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+690,(vlSymsp->TOP__top.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+691,(vlSymsp->TOP__top.__PVT__wr_TX_full));
        bufp->chgQData(oldp+692,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+694,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+696,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+697,(vlSymsp->TOP__top__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+700,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+702,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+703,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+705,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+706,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__top__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+709,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__top__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+713,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+714,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+715,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+716,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+717,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+718,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+719,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+720,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+721,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+722,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+723,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+724,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+725,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+726,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+727,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+728,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+729,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+730,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+731,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+732,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+733,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+734,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+735,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+736,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+737,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+738,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+739,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+740,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+741,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+742,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+743,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+744,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+745,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+746,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+747,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+748,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+749,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+750,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+751,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+752,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+753,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+754,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+755,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+756,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+757,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+758,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+759,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+760,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+761,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+762,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+763,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+764,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+765,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+766,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+767,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+768,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+769,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+770,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+771,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+772,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+773,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+774,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+775,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+776,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+777,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+778,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+779,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+780,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+781,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+782,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+783,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+784,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+785,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+786,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+787,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+788,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+789,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+790,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+791,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+792,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+793,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+794,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+795,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+796,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+797,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+798,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+799,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+800,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+801,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+802,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+803,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+804,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+805,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+806,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+807,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+808,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+809,(vlSymsp->TOP__top__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__top__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+811,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+812,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+815,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+817,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+819,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+821,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+823,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+825,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+827,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+829,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+831,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+833,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+835,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+837,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+839,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+841,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+843,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+845,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+847,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+849,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+850,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+851,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+852,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgBit(oldp+853,(vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+854,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+855,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+856,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+858,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
        bufp->chgIData(oldp+859,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+860,(vlSymsp->TOP__top.TCP_transmit),64);
        bufp->chgBit(oldp+862,(vlSymsp->TOP__top.TCP_last));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_last));
        bufp->chgQData(oldp+864,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+866,(vlSymsp->TOP__top__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+867,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+868,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+869,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+870,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+871,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgQData(oldp+872,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgBit(oldp+876,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+877,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+878,(vlSymsp->TOP__top.__PVT__nw_segment));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__top.__PVT__axis_t_last_int));
        bufp->chgQData(oldp+880,(vlSymsp->TOP__top.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__top.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+883,(vlSymsp->TOP__top.__PVT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+886,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgBit(oldp+888,(vlSymsp->TOP__top__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+889,(vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last));
        bufp->chgQData(oldp+890,(vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+893,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+895,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_rcv),8);
        bufp->chgIData(oldp+897,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+898,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__top__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+900,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+901,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+902,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgSData(oldp+903,(vlSymsp->TOP__top__u_tcp.__PVT__payload_len_rx),16);
        bufp->chgBit(oldp+904,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgIData(oldp+905,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+906,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+908,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+909,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+910,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+911,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+912,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+913,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+914,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
        bufp->chgSData(oldp+916,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+917,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+919,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+920,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+921,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgSData(oldp+922,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_trk),16);
        bufp->chgIData(oldp+923,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+924,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+925,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+926,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+927,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+928,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+929,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+930,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+931,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+932,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgIData(oldp+933,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx),32);
        bufp->chgBit(oldp+934,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgCData(oldp+935,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
        bufp->chgBit(oldp+936,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+937,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+938,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+939,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+940,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+941,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+942,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+943,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+944,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+945,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+946,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+947,(vlSymsp->TOP__top.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+948,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx_out),32);
        bufp->chgCData(oldp+949,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+950,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+951,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+952,(vlSymsp->TOP__top__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+953,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+954,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgIData(oldp+955,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgCData(oldp+956,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+957,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+958,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+959,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+960,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+961,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+963,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+964,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+966,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+967,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+968,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+969,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+970,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+971,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+972,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+973,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+974,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+975,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    bufp->chgBit(oldp+977,(vlSelfRef.CLK));
    bufp->chgBit(oldp+978,(vlSelfRef.nRST));
    bufp->chgCData(oldp+979,(vlSelfRef.tb_count),8);
    bufp->chgBit(oldp+980,(vlSelfRef.IP_valid));
    bufp->chgBit(oldp+981,(vlSelfRef.IP_flush));
    bufp->chgSData(oldp+982,(vlSelfRef.IP_pseuder),16);
    bufp->chgQData(oldp+983,(vlSelfRef.IP_payload),64);
    bufp->chgSData(oldp+985,(vlSelfRef.TCP_len),16);
    bufp->chgCData(oldp+986,(vlSelfRef.IP_bytes_rcv),8);
    bufp->chgBit(oldp+987,(vlSelfRef.TCP_send));
    bufp->chgQData(oldp+988,(vlSelfRef.TCP_transmit),64);
    bufp->chgBit(oldp+990,(vlSelfRef.TCP_last));
    bufp->chgBit(oldp+991,(vlSelfRef.TX_en));
    bufp->chgBit(oldp+992,(vlSelfRef.axis_last));
    bufp->chgBit(oldp+993,(vlSelfRef.wr_FIFO_en));
    bufp->chgIData(oldp+994,(vlSelfRef.len_seq),32);
    bufp->chgQData(oldp+995,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->chgBit(oldp+997,(vlSelfRef.axis_r_en));
    bufp->chgBit(oldp+998,(vlSelfRef.axis_r_valid));
    bufp->chgQData(oldp+999,(vlSelfRef.axis_rd_data),64);
    bufp->chgBit(oldp+1001,(vlSelfRef.TCP_stop_flag));
    bufp->chgIData(oldp+1002,(vlSelfRef.rcv_next),32);
    bufp->chgIData(oldp+1003,(vlSelfRef.seq_num),32);
    bufp->chgBit(oldp+1004,(vlSelfRef.wr_FIFO_full));
    bufp->chgSData(oldp+1005,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->chgBit(oldp+1006,(vlSymsp->TOP__top__u_tcp__inst.__PVT__up_send));
    bufp->chgSData(oldp+1007,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->chgIData(oldp+1008,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->chgIData(oldp+1009,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->chgIData(oldp+1010,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+1011,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+1012,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgSData(oldp+1013,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->chgBit(oldp+1014,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__debug));
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
}
