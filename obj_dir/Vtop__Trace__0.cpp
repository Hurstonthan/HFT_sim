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
        bufp->chgBit(oldp+5,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__gen_en));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__top__u_tcp__inst.__PVT__clear));
        bufp->chgSData(oldp+7,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__src_port),16);
        bufp->chgSData(oldp+8,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__dest_port),16);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__end_ss));
        bufp->chgIData(oldp+10,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__rollover_val),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__initial_val),32);
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
        bufp->chgBit(oldp+78,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__CLK));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nRST));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgBit(oldp+80,(vlSymsp->TOP__top.__PVT__TCP_flush_int));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_flush));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush));
        bufp->chgCData(oldp+84,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
        bufp->chgSData(oldp+88,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
        bufp->chgSData(oldp+89,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
        bufp->chgSData(oldp+91,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_trk),16);
        bufp->chgSData(oldp+92,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_len_data),16);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
        bufp->chgSData(oldp+94,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
        bufp->chgQData(oldp+95,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__temp),20);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_valid));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nrcv_data));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__n_nw_segment));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_last));
        bufp->chgCData(oldp+102,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nstate),3);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgSData(oldp+105,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp),20);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp1),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xdU])))) {
        bufp->chgBit(oldp+110,(vlSymsp->TOP__top.__PVT__rd_ftx_en_int));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_tx));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_en));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+114,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
        bufp->chgBit(oldp+115,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__valid_checksum));
        bufp->chgCData(oldp+116,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nstate),7);
        bufp->chgQData(oldp+117,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nseq_up));
        bufp->chgQData(oldp+122,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nframe_hold),48);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xeU])))) {
        bufp->chgBit(oldp+124,(vlSymsp->TOP__top.TCP_stop_flag));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__top.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+126,(vlSymsp->TOP__top.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__top.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+128,(vlSymsp->TOP__top.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__top.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__top.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+132,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+134,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgQData(oldp+136,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+138,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+139,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+141,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+142,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+144,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+145,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+147,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+148,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+150,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+151,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+153,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+154,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+156,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+157,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+159,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+160,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+162,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+163,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+165,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+166,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+168,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+169,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+171,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+172,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+174,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+175,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+177,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+178,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+180,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+181,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+183,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgCData(oldp+184,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_len_ptr),4);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nseq_trk_rd),32);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__top__u_payload_fifo.__PVT__naxis_r_valid));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_flush_l));
        bufp->chgCData(oldp+190,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nwr_ptr),4);
        bufp->chgCData(oldp+191,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_ptr),4);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+193,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+194,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_rcv));
        bufp->chgCData(oldp+195,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+197,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+199,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+200,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+201,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+202,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+204,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+206,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+207,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+208,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+209,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+210,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+211,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+213,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nclear_timeout));
        bufp->chgBit(oldp+215,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [0U], 0x60U))));
        bufp->chgIData(oldp+216,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+217,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+218,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+219,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+220,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [1U], 0x60U))));
        bufp->chgIData(oldp+221,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+222,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+223,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+224,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+225,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [2U], 0x60U))));
        bufp->chgIData(oldp+226,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+227,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+228,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+229,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+230,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [3U], 0x60U))));
        bufp->chgIData(oldp+231,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+232,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+233,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+234,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+235,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [4U], 0x60U))));
        bufp->chgIData(oldp+236,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+237,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+238,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+239,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+240,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [5U], 0x60U))));
        bufp->chgIData(oldp+241,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+242,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+243,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+244,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+245,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [6U], 0x60U))));
        bufp->chgIData(oldp+246,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+247,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+248,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+249,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+250,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [7U], 0x60U))));
        bufp->chgIData(oldp+251,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+252,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+253,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+254,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+255,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [8U], 0x60U))));
        bufp->chgIData(oldp+256,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+257,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+258,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+259,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+260,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [9U], 0x60U))));
        bufp->chgIData(oldp+261,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+262,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+263,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+264,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nout_order_req));
        bufp->chgIData(oldp+268,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+270,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
        bufp->chgCData(oldp+273,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+274,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+275,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+276,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+277,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+278,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+279,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+280,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+281,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+282,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+283,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+284,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgSData(oldp+287,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+288,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+289,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+291,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+294,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+296,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+298,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+299,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+300,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+301,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+302,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+303,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+304,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+305,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+306,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+307,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+308,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+309,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+310,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+311,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+312,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+313,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+314,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+315,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+316,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+317,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+318,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+319,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+320,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+321,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+322,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+323,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+324,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+325,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+326,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+327,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+328,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+329,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+330,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+331,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+332,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+333,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+334,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+335,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+336,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+337,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+338,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+339,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+340,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+341,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+342,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+343,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+344,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+345,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+346,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+347,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+348,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+349,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+350,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+351,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+352,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+353,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+354,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+355,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+356,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+357,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+358,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+359,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+360,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+361,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+362,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+363,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+364,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+365,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+366,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+367,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+368,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+369,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+370,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+371,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+372,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+373,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+374,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+375,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+376,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+377,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+378,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+379,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+380,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+381,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+382,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+383,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+384,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+385,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+386,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+387,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+388,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+389,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+390,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+391,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+392,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+393,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+394,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+397,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+399,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+400,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+401,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+403,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+405,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+407,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+409,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+411,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+413,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+415,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+417,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+419,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+421,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+423,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+425,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+427,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+429,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+431,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+433,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+435,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+436,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+439,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+440,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nchecksum_l),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+441,(vlSymsp->TOP__top__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+442,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+443,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+444,(vlSymsp->TOP__top.axis_r_valid));
        bufp->chgQData(oldp+445,(vlSymsp->TOP__top.axis_rd_data),64);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__top.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__top.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__top.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+450,(vlSymsp->TOP__top.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+451,(vlSymsp->TOP__top.__PVT__full));
        bufp->chgCData(oldp+452,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+453,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+454,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+455,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+456,(vlSymsp->TOP__top__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+458,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+460,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+462,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+463,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+465,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+466,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+468,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+469,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+471,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+472,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+474,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+475,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+477,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+478,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+480,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+481,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+483,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+484,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+486,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+487,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+489,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+490,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+492,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+493,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+495,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+496,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+498,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+499,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+501,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+502,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+504,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+505,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+507,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgQData(oldp+508,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+510,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+511,(vlSymsp->TOP__top__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+512,(vlSymsp->TOP__top__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+513,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+514,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgCData(oldp+515,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+516,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid_l));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgQData(oldp+518,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[0]),64);
        bufp->chgQData(oldp+520,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[1]),64);
        bufp->chgQData(oldp+522,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[2]),64);
        bufp->chgQData(oldp+524,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[3]),64);
        bufp->chgQData(oldp+526,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[4]),64);
        bufp->chgQData(oldp+528,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[5]),64);
        bufp->chgQData(oldp+530,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[6]),64);
        bufp->chgQData(oldp+532,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[7]),64);
        bufp->chgQData(oldp+534,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[8]),64);
        bufp->chgQData(oldp+536,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[9]),64);
        bufp->chgQData(oldp+538,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[10]),64);
        bufp->chgQData(oldp+540,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[11]),64);
        bufp->chgQData(oldp+542,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[12]),64);
        bufp->chgQData(oldp+544,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[13]),64);
        bufp->chgQData(oldp+546,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[14]),64);
        bufp->chgQData(oldp+548,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[15]),64);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[0]),8);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[1]),8);
        bufp->chgCData(oldp+552,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[2]),8);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[3]),8);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[4]),8);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[5]),8);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[6]),8);
        bufp->chgCData(oldp+557,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[7]),8);
        bufp->chgCData(oldp+558,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[8]),8);
        bufp->chgCData(oldp+559,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[9]),8);
        bufp->chgCData(oldp+560,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[10]),8);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[11]),8);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[12]),8);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[13]),8);
        bufp->chgCData(oldp+564,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[14]),8);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[15]),8);
        bufp->chgCData(oldp+566,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+567,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+568,(vlSymsp->TOP__top__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+569,(vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+570,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+571,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+572,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+573,(vlSymsp->TOP__top__u_tcp.__PVT__full));
        bufp->chgBit(oldp+574,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+575,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+576,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgSData(oldp+577,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
        bufp->chgBit(oldp+578,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+579,(vlSymsp->TOP__top.rcv_next),32);
        bufp->chgIData(oldp+580,(vlSymsp->TOP__top.seq_num),32);
        bufp->chgBit(oldp+581,(vlSymsp->TOP__top.__PVT__handshake_done_int));
        bufp->chgIData(oldp+582,(vlSymsp->TOP__top.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+583,(vlSymsp->TOP__top.__PVT__out_order_req_int));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done));
        bufp->chgIData(oldp+585,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+586,(vlSymsp->TOP__top__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+587,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+588,(vlSymsp->TOP__top__u_tcp.__PVT__out_order_req));
        bufp->chgIData(oldp+589,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+590,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+591,(vlSymsp->TOP__top__u_tcp.__PVT__clear_timeout));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__top__u_tcp.__PVT__count_en_timeout));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+594,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req));
        bufp->chgBit(oldp+595,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+596,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+597,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+598,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgBit(oldp+599,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgBit(oldp+600,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__count_en_timeout));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__clear_timeout));
        bufp->chgCData(oldp+602,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+603,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+604,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+605,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+606,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+607,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+608,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [0U], 0x60U))));
        bufp->chgIData(oldp+609,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+610,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+611,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+612,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+613,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [1U], 0x60U))));
        bufp->chgIData(oldp+614,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+615,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+616,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+617,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+618,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [2U], 0x60U))));
        bufp->chgIData(oldp+619,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+620,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+621,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+622,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+623,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [3U], 0x60U))));
        bufp->chgIData(oldp+624,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+625,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+626,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+627,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+628,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [4U], 0x60U))));
        bufp->chgIData(oldp+629,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+630,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+631,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+632,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+633,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [5U], 0x60U))));
        bufp->chgIData(oldp+634,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+635,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+636,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+637,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+638,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [6U], 0x60U))));
        bufp->chgIData(oldp+639,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+640,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+641,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+642,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+643,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [7U], 0x60U))));
        bufp->chgIData(oldp+644,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+645,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+646,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+647,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+648,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [8U], 0x60U))));
        bufp->chgIData(oldp+649,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+650,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+651,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+652,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+653,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [9U], 0x60U))));
        bufp->chgIData(oldp+654,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+655,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+656,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+657,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+658,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgIData(oldp+659,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
        bufp->chgIData(oldp+660,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
        bufp->chgCData(oldp+661,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+663,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+664,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+665,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+666,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgCData(oldp+667,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgSData(oldp+669,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgIData(oldp+671,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
        bufp->chgCData(oldp+672,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+673,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+674,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+675,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+676,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+677,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+678,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+679,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+680,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+681,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+682,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+683,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgBit(oldp+684,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__clear));
        bufp->chgBit(oldp+685,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__count_enable));
        bufp->chgSData(oldp+686,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+687,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+688,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+689,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+690,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+691,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+692,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+693,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+694,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+695,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+696,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+697,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+698,(vlSymsp->TOP__top__u_tcp.__PVT__timeout_flag));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__timeout_flag));
        bufp->chgIData(oldp+700,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__count_out),32);
        bufp->chgBit(oldp+701,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+702,(vlSymsp->TOP__top.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+704,(vlSymsp->TOP__top.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+705,(vlSymsp->TOP__top.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+706,(vlSymsp->TOP__top.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+707,(vlSymsp->TOP__top.__PVT__re_trans_int));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__top.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__top.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+710,(vlSymsp->TOP__top.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+712,(vlSymsp->TOP__top.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+713,(vlSymsp->TOP__top.__PVT__wr_TX_full));
        bufp->chgQData(oldp+714,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+716,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+718,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+719,(vlSymsp->TOP__top__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+722,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+724,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+725,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+727,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+729,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+730,(vlSymsp->TOP__top__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+731,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__top__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+734,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+735,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+736,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+737,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+738,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+739,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+740,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+741,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+742,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+743,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+744,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+745,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+746,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+747,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+748,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+749,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+750,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+751,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+752,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+753,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+754,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+755,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+756,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+757,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+758,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+759,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+760,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+761,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+762,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+763,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+764,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+765,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+766,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+767,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+768,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+769,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+770,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+771,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+772,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+773,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+774,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+775,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+776,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+777,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+778,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+779,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+780,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+781,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+782,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+783,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+784,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+785,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+786,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+787,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+788,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+789,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+790,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+791,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+792,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+793,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+794,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+795,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+796,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+797,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+798,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+799,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+800,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+801,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+802,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+803,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+804,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+805,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+806,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+807,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+808,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+809,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+810,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+811,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+812,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+813,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+814,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+815,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+816,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+817,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+818,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+819,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+820,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+821,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+822,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+823,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+824,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+825,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+826,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+827,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+828,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+829,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+830,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+831,(vlSymsp->TOP__top__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+832,(vlSymsp->TOP__top__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+833,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+837,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+839,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+841,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+843,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+845,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+847,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+849,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+851,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+853,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+855,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+857,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+859,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+861,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+863,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+865,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+867,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+869,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+871,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+872,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+873,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+874,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgBit(oldp+875,(vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+878,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgQData(oldp+882,(vlSymsp->TOP__top.TCP_transmit),64);
        bufp->chgBit(oldp+884,(vlSymsp->TOP__top.TCP_last));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_last));
        bufp->chgQData(oldp+886,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+888,(vlSymsp->TOP__top__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+889,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+890,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+891,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+892,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+893,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgQData(oldp+894,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+896,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgQData(oldp+898,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__frame_hold),48);
        bufp->chgBit(oldp+900,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+901,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+902,(vlSymsp->TOP__top.__PVT__nw_segment));
        bufp->chgBit(oldp+903,(vlSymsp->TOP__top.__PVT__axis_t_last_int));
        bufp->chgQData(oldp+904,(vlSymsp->TOP__top.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+906,(vlSymsp->TOP__top.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+907,(vlSymsp->TOP__top.__PVT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+910,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgBit(oldp+912,(vlSymsp->TOP__top__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last));
        bufp->chgQData(oldp+914,(vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+916,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+917,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+918,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+919,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgCData(oldp+920,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_rcv),8);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+922,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__top__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+924,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+925,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+926,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgSData(oldp+927,(vlSymsp->TOP__top__u_tcp.__PVT__payload_len_rx),16);
        bufp->chgBit(oldp+928,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgIData(oldp+929,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+930,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+932,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+933,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+934,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+936,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+937,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+938,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
        bufp->chgSData(oldp+940,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+941,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+943,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+944,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+945,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgSData(oldp+946,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_trk),16);
        bufp->chgIData(oldp+947,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+948,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+949,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+950,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+951,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+952,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+953,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+954,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+955,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+956,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgIData(oldp+957,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx),32);
        bufp->chgBit(oldp+958,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgCData(oldp+959,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
        bufp->chgBit(oldp+960,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+961,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+962,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+963,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+964,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+965,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+966,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+967,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+968,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+969,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+970,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgSData(oldp+971,(vlSymsp->TOP__top.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+972,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+973,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_basesum_payload),16);
        bufp->chgSData(oldp+974,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+975,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgIData(oldp+976,(vlSymsp->TOP__top.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+977,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx_out),32);
        bufp->chgCData(oldp+978,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+979,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+980,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+981,(vlSymsp->TOP__top__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+982,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+983,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgIData(oldp+984,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgCData(oldp+985,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+986,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+987,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+988,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+989,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+990,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+991,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+992,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+993,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+994,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+995,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+996,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+997,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+998,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+999,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+1000,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+1001,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+1002,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+1003,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+1004,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+1005,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+1006,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__debug));
        bufp->chgSData(oldp+1007,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__overlap_mask),10);
        bufp->chgSData(oldp+1008,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
        bufp->chgSData(oldp+1009,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__lt_idx),4);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rt_idx),4);
        bufp->chgSData(oldp+1012,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__din),10);
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__valid));
        bufp->chgCData(oldp+1014,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__idx),4);
        bufp->chgIData(oldp+1015,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1016,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__din),10);
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__valid));
        bufp->chgCData(oldp+1018,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__idx),4);
        bufp->chgIData(oldp+1019,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1020,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__din),10);
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__valid));
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__idx),4);
        bufp->chgIData(oldp+1023,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+1024,(vlSelfRef.CLK));
    bufp->chgBit(oldp+1025,(vlSelfRef.nRST));
    bufp->chgCData(oldp+1026,(vlSelfRef.tb_count),8);
    bufp->chgBit(oldp+1027,(vlSelfRef.IP_valid));
    bufp->chgBit(oldp+1028,(vlSelfRef.IP_flush));
    bufp->chgSData(oldp+1029,(vlSelfRef.IP_pseuder),16);
    bufp->chgQData(oldp+1030,(vlSelfRef.IP_payload),64);
    bufp->chgSData(oldp+1032,(vlSelfRef.TCP_len),16);
    bufp->chgCData(oldp+1033,(vlSelfRef.IP_bytes_rcv),8);
    bufp->chgBit(oldp+1034,(vlSelfRef.TCP_send));
    bufp->chgQData(oldp+1035,(vlSelfRef.TCP_transmit),64);
    bufp->chgBit(oldp+1037,(vlSelfRef.TCP_last));
    bufp->chgBit(oldp+1038,(vlSelfRef.TX_en));
    bufp->chgBit(oldp+1039,(vlSelfRef.axis_last));
    bufp->chgBit(oldp+1040,(vlSelfRef.wr_FIFO_en));
    bufp->chgIData(oldp+1041,(vlSelfRef.len_seq),32);
    bufp->chgQData(oldp+1042,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->chgBit(oldp+1044,(vlSelfRef.axis_r_en));
    bufp->chgBit(oldp+1045,(vlSelfRef.axis_r_valid));
    bufp->chgQData(oldp+1046,(vlSelfRef.axis_rd_data),64);
    bufp->chgBit(oldp+1048,(vlSelfRef.TCP_stop_flag));
    bufp->chgIData(oldp+1049,(vlSelfRef.rcv_next),32);
    bufp->chgIData(oldp+1050,(vlSelfRef.seq_num),32);
    bufp->chgBit(oldp+1051,(vlSelfRef.wr_FIFO_full));
    bufp->chgBit(oldp+1052,(vlSymsp->TOP__top__u_tcp__inst.__PVT__up_send));
    bufp->chgIData(oldp+1053,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->chgIData(oldp+1054,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->chgIData(oldp+1055,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+1056,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+1057,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgIData(oldp+1058,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->chgBit(oldp+1059,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
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
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
}
