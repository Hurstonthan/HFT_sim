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
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xeU])))) {
        bufp->chgBit(oldp+122,(vlSymsp->TOP__top.TCP_stop_flag));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__top.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+124,(vlSymsp->TOP__top.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__top.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+126,(vlSymsp->TOP__top.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+127,(vlSymsp->TOP__top.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__top.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+130,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+132,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+133,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgQData(oldp+134,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+136,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+137,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+139,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+140,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+142,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+143,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+145,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+146,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+148,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+149,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+151,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+152,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+154,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+155,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+157,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+158,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+160,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+161,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+163,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+164,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+166,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+167,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+169,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+170,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+172,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+173,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+175,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+176,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+178,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+179,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+181,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nflush_ptr),4);
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
        bufp->chgBit(oldp+195,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+197,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+198,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+199,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+200,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+202,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+204,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+205,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+206,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+207,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+208,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+209,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+211,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nclear_timeout));
        bufp->chgBit(oldp+213,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [0U], 0x60U))));
        bufp->chgIData(oldp+214,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+215,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+216,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+217,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+218,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [1U], 0x60U))));
        bufp->chgIData(oldp+219,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+220,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+221,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+222,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+223,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [2U], 0x60U))));
        bufp->chgIData(oldp+224,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+225,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+226,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+227,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+228,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [3U], 0x60U))));
        bufp->chgIData(oldp+229,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+230,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+231,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+232,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+233,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [4U], 0x60U))));
        bufp->chgIData(oldp+234,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+235,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+236,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+237,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+238,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [5U], 0x60U))));
        bufp->chgIData(oldp+239,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+240,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+241,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+242,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+243,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [6U], 0x60U))));
        bufp->chgIData(oldp+244,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+245,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+246,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+247,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+248,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [7U], 0x60U))));
        bufp->chgIData(oldp+249,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+250,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+251,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+252,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+253,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [8U], 0x60U))));
        bufp->chgIData(oldp+254,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+255,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+256,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+257,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+258,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [9U], 0x60U))));
        bufp->chgIData(oldp+259,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+260,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+261,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+262,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+264,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nout_order_req));
        bufp->chgIData(oldp+266,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
        bufp->chgCData(oldp+267,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
        bufp->chgCData(oldp+271,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+272,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+273,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+274,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+275,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+276,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+277,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+278,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+279,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+280,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+281,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+282,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgSData(oldp+285,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+286,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+287,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+289,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+290,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+291,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+292,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+294,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+296,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+297,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+298,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+299,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+300,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+301,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+302,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+303,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+304,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+305,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+306,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+307,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+308,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+309,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+310,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+311,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+312,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+313,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+314,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+315,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+316,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+317,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+318,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+319,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+320,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+321,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+322,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+323,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+324,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+325,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+326,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+327,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+328,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+329,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+330,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+331,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+332,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+333,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+334,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+335,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+336,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+337,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+338,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+339,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+340,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+341,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+342,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+343,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+344,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+345,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+346,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+347,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+348,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+349,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+350,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+351,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+352,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+353,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+354,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+355,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+356,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+357,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+358,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+359,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+360,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+361,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+362,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+363,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+364,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+365,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+366,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+367,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+368,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+369,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+370,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+371,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+372,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+373,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+374,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+375,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+376,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+377,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+378,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+379,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+380,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+381,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+382,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+383,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+384,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+385,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+386,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+387,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+388,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+389,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+390,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+391,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+392,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+395,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+399,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+401,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+403,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+405,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+407,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+409,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+411,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+413,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+415,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+417,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+419,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+421,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+423,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+425,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+427,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+429,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+431,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+433,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+437,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+438,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nchecksum_l),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+439,(vlSymsp->TOP__top__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+440,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+441,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+442,(vlSymsp->TOP__top.axis_r_valid));
        bufp->chgQData(oldp+443,(vlSymsp->TOP__top.axis_rd_data),64);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__top.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+446,(vlSymsp->TOP__top.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+447,(vlSymsp->TOP__top.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+448,(vlSymsp->TOP__top.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__top.__PVT__full));
        bufp->chgCData(oldp+450,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+451,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+452,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+453,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+454,(vlSymsp->TOP__top__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+456,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+458,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+460,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+461,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+463,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+464,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+466,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+467,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+469,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+470,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+472,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+473,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+475,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+476,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+478,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+479,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+481,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+482,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+484,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+485,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+487,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+488,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xaU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+490,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xaU], 0U, 8U))),8);
        bufp->chgQData(oldp+491,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xbU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+493,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xbU], 0U, 8U))),8);
        bufp->chgQData(oldp+494,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xcU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+496,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xcU], 0U, 8U))),8);
        bufp->chgQData(oldp+497,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xdU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+499,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xdU], 0U, 8U))),8);
        bufp->chgQData(oldp+500,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xeU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+502,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xeU], 0U, 8U))),8);
        bufp->chgQData(oldp+503,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0xfU], 8U, 0x40U)),64);
        bufp->chgCData(oldp+505,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0xfU], 0U, 8U))),8);
        bufp->chgQData(oldp+506,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+508,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__top__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__top__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+511,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgCData(oldp+513,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+514,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid_l));
        bufp->chgBit(oldp+515,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgQData(oldp+516,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[0]),64);
        bufp->chgQData(oldp+518,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[1]),64);
        bufp->chgQData(oldp+520,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[2]),64);
        bufp->chgQData(oldp+522,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[3]),64);
        bufp->chgQData(oldp+524,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[4]),64);
        bufp->chgQData(oldp+526,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[5]),64);
        bufp->chgQData(oldp+528,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[6]),64);
        bufp->chgQData(oldp+530,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[7]),64);
        bufp->chgQData(oldp+532,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[8]),64);
        bufp->chgQData(oldp+534,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[9]),64);
        bufp->chgQData(oldp+536,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[10]),64);
        bufp->chgQData(oldp+538,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[11]),64);
        bufp->chgQData(oldp+540,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[12]),64);
        bufp->chgQData(oldp+542,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[13]),64);
        bufp->chgQData(oldp+544,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[14]),64);
        bufp->chgQData(oldp+546,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[15]),64);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[0]),8);
        bufp->chgCData(oldp+549,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[1]),8);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[2]),8);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[3]),8);
        bufp->chgCData(oldp+552,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[4]),8);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[5]),8);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[6]),8);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[7]),8);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[8]),8);
        bufp->chgCData(oldp+557,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[9]),8);
        bufp->chgCData(oldp+558,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[10]),8);
        bufp->chgCData(oldp+559,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[11]),8);
        bufp->chgCData(oldp+560,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[12]),8);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[13]),8);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[14]),8);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[15]),8);
        bufp->chgCData(oldp+564,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+566,(vlSymsp->TOP__top__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+567,(vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+568,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+569,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+570,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+571,(vlSymsp->TOP__top__u_tcp.__PVT__full));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+573,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+574,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgSData(oldp+575,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
        bufp->chgBit(oldp+576,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+577,(vlSymsp->TOP__top.rcv_next),32);
        bufp->chgIData(oldp+578,(vlSymsp->TOP__top.seq_num),32);
        bufp->chgBit(oldp+579,(vlSymsp->TOP__top.__PVT__handshake_done_int));
        bufp->chgIData(oldp+580,(vlSymsp->TOP__top.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+581,(vlSymsp->TOP__top.__PVT__out_order_req_int));
        bufp->chgBit(oldp+582,(vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done));
        bufp->chgIData(oldp+583,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+584,(vlSymsp->TOP__top__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+585,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+586,(vlSymsp->TOP__top__u_tcp.__PVT__out_order_req));
        bufp->chgIData(oldp+587,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+588,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+589,(vlSymsp->TOP__top__u_tcp.__PVT__clear_timeout));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__top__u_tcp.__PVT__count_en_timeout));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+594,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgBit(oldp+597,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__count_en_timeout));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__clear_timeout));
        bufp->chgCData(oldp+600,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+601,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+602,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+603,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+604,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+605,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+606,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [0U], 0x60U))));
        bufp->chgIData(oldp+607,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [0U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+608,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [0U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+609,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+610,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+611,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [1U], 0x60U))));
        bufp->chgIData(oldp+612,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [1U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+613,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [1U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+614,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+615,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+616,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [2U], 0x60U))));
        bufp->chgIData(oldp+617,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [2U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+618,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [2U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+619,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+620,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+621,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [3U], 0x60U))));
        bufp->chgIData(oldp+622,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [3U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+623,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [3U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+624,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+625,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+626,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [4U], 0x60U))));
        bufp->chgIData(oldp+627,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [4U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+628,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [4U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+629,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+630,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+631,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [5U], 0x60U))));
        bufp->chgIData(oldp+632,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [5U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+633,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [5U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+634,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+635,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+636,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [6U], 0x60U))));
        bufp->chgIData(oldp+637,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [6U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+638,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [6U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+639,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+640,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+641,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [7U], 0x60U))));
        bufp->chgIData(oldp+642,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [7U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+643,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [7U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+644,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+645,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+646,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [8U], 0x60U))));
        bufp->chgIData(oldp+647,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [8U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+648,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [8U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+649,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+650,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+651,((1U & VL_BITSEL_IWII(97, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [9U], 0x60U))));
        bufp->chgIData(oldp+652,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [9U], 0x40U, 0x20U)),32);
        bufp->chgIData(oldp+653,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [9U], 0x20U, 0x20U)),32);
        bufp->chgSData(oldp+654,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+655,((0xffffU & VL_SEL_IWII(97, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+656,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgIData(oldp+657,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
        bufp->chgIData(oldp+658,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
        bufp->chgCData(oldp+659,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+660,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+661,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+662,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+663,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgCData(oldp+665,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+666,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgSData(oldp+667,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgIData(oldp+668,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
        bufp->chgCData(oldp+670,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+671,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+672,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+673,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+674,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+675,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+676,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+677,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+678,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+679,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+680,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+681,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgBit(oldp+682,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__clear));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__count_enable));
        bufp->chgSData(oldp+684,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+685,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+686,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+687,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+688,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+689,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+690,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+691,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+692,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+693,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+694,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+695,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+696,(vlSymsp->TOP__top__u_tcp.__PVT__timeout_flag));
        bufp->chgBit(oldp+697,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__timeout_flag));
        bufp->chgIData(oldp+698,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__count_out),32);
        bufp->chgBit(oldp+699,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__rollover_flag));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+700,(vlSymsp->TOP__top.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+702,(vlSymsp->TOP__top.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+703,(vlSymsp->TOP__top.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+704,(vlSymsp->TOP__top.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+705,(vlSymsp->TOP__top.__PVT__re_trans_int));
        bufp->chgBit(oldp+706,(vlSymsp->TOP__top.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__top.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+708,(vlSymsp->TOP__top.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+710,(vlSymsp->TOP__top.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+711,(vlSymsp->TOP__top.__PVT__wr_TX_full));
        bufp->chgQData(oldp+712,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+714,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+716,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+717,(vlSymsp->TOP__top__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+720,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+722,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+723,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+725,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+726,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__top__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+729,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+730,(vlSymsp->TOP__top__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+733,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+734,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+735,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+736,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+737,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+738,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+739,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+740,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+741,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+742,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+743,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+744,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+745,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+746,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+747,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+748,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+749,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+750,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+751,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+752,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+753,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+754,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+755,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+756,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+757,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+758,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+759,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+760,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+761,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+762,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+763,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+764,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+765,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+766,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+767,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+768,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+769,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+770,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+771,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+772,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+773,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+774,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+775,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+776,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+777,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+778,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+779,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+780,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+781,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+782,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+783,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+784,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+785,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+786,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+787,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+788,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+789,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+790,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+791,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+792,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+793,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+794,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+795,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+796,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+797,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+798,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+799,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+800,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+801,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+802,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+803,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+804,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+805,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+806,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+807,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+808,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+809,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+810,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+811,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+812,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+813,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+814,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+815,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+816,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+817,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+818,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+819,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+820,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+821,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+822,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+823,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+824,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+825,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+826,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+827,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+828,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+829,(vlSymsp->TOP__top__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+830,(vlSymsp->TOP__top__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+831,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+833,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+835,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+837,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+839,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+841,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+843,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+845,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+847,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+849,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+851,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+853,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgQData(oldp+855,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
        bufp->chgQData(oldp+857,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
        bufp->chgQData(oldp+859,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
        bufp->chgQData(oldp+861,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
        bufp->chgQData(oldp+863,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
        bufp->chgQData(oldp+865,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
        bufp->chgBit(oldp+867,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+868,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+869,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+870,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+871,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+872,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgBit(oldp+873,(vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+874,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+876,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
        bufp->chgIData(oldp+879,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgQData(oldp+880,(vlSymsp->TOP__top.TCP_transmit),64);
        bufp->chgBit(oldp+882,(vlSymsp->TOP__top.TCP_last));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_last));
        bufp->chgQData(oldp+884,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+886,(vlSymsp->TOP__top__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+887,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+888,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+889,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+890,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgQData(oldp+892,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+894,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+895,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgBit(oldp+896,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+897,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+898,(vlSymsp->TOP__top.__PVT__nw_segment));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__top.__PVT__axis_t_last_int));
        bufp->chgQData(oldp+900,(vlSymsp->TOP__top.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__top.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+903,(vlSymsp->TOP__top.__PVT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+906,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgBit(oldp+908,(vlSymsp->TOP__top__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last));
        bufp->chgQData(oldp+910,(vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+913,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+914,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+915,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgCData(oldp+916,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_rcv),8);
        bufp->chgIData(oldp+917,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+918,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+919,(vlSymsp->TOP__top__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+920,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+921,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+922,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgSData(oldp+923,(vlSymsp->TOP__top__u_tcp.__PVT__payload_len_rx),16);
        bufp->chgBit(oldp+924,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgIData(oldp+925,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+926,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+927,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+928,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+929,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+930,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+931,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+932,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+933,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+934,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
        bufp->chgSData(oldp+936,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+937,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+939,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+940,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+941,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgSData(oldp+942,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_trk),16);
        bufp->chgIData(oldp+943,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+945,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+946,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+947,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+948,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+949,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+950,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+951,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+952,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgIData(oldp+953,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx),32);
        bufp->chgBit(oldp+954,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgCData(oldp+955,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
        bufp->chgBit(oldp+956,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+957,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+958,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+959,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+960,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+961,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+962,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+963,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+964,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+965,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+966,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgSData(oldp+967,(vlSymsp->TOP__top.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+968,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+969,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_basesum_payload),16);
        bufp->chgSData(oldp+970,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgSData(oldp+971,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgIData(oldp+972,(vlSymsp->TOP__top.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+973,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx_out),32);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+975,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+976,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+977,(vlSymsp->TOP__top__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+978,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+979,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgIData(oldp+980,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgCData(oldp+981,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+982,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+983,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+984,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+985,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+986,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+987,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+988,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+989,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+990,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+991,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+992,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+993,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+994,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+995,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+996,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+997,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+998,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+999,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+1000,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+1002,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__debug));
        bufp->chgSData(oldp+1003,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__overlap_mask),10);
        bufp->chgSData(oldp+1004,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
        bufp->chgSData(oldp+1005,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__lt_idx),4);
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rt_idx),4);
        bufp->chgSData(oldp+1008,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__din),10);
        bufp->chgBit(oldp+1009,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__valid));
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__idx),4);
        bufp->chgIData(oldp+1011,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1012,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__din),10);
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__valid));
        bufp->chgCData(oldp+1014,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__idx),4);
        bufp->chgIData(oldp+1015,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+1016,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__din),10);
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__valid));
        bufp->chgCData(oldp+1018,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__idx),4);
        bufp->chgIData(oldp+1019,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+1020,(vlSelfRef.CLK));
    bufp->chgBit(oldp+1021,(vlSelfRef.nRST));
    bufp->chgCData(oldp+1022,(vlSelfRef.tb_count),8);
    bufp->chgBit(oldp+1023,(vlSelfRef.IP_valid));
    bufp->chgBit(oldp+1024,(vlSelfRef.IP_flush));
    bufp->chgSData(oldp+1025,(vlSelfRef.IP_pseuder),16);
    bufp->chgQData(oldp+1026,(vlSelfRef.IP_payload),64);
    bufp->chgSData(oldp+1028,(vlSelfRef.TCP_len),16);
    bufp->chgCData(oldp+1029,(vlSelfRef.IP_bytes_rcv),8);
    bufp->chgBit(oldp+1030,(vlSelfRef.TCP_send));
    bufp->chgQData(oldp+1031,(vlSelfRef.TCP_transmit),64);
    bufp->chgBit(oldp+1033,(vlSelfRef.TCP_last));
    bufp->chgBit(oldp+1034,(vlSelfRef.TX_en));
    bufp->chgBit(oldp+1035,(vlSelfRef.axis_last));
    bufp->chgBit(oldp+1036,(vlSelfRef.wr_FIFO_en));
    bufp->chgIData(oldp+1037,(vlSelfRef.len_seq),32);
    bufp->chgQData(oldp+1038,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->chgBit(oldp+1040,(vlSelfRef.axis_r_en));
    bufp->chgBit(oldp+1041,(vlSelfRef.axis_r_valid));
    bufp->chgQData(oldp+1042,(vlSelfRef.axis_rd_data),64);
    bufp->chgBit(oldp+1044,(vlSelfRef.TCP_stop_flag));
    bufp->chgIData(oldp+1045,(vlSelfRef.rcv_next),32);
    bufp->chgIData(oldp+1046,(vlSelfRef.seq_num),32);
    bufp->chgBit(oldp+1047,(vlSelfRef.wr_FIFO_full));
    bufp->chgBit(oldp+1048,(vlSymsp->TOP__top__u_tcp__inst.__PVT__up_send));
    bufp->chgIData(oldp+1049,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->chgIData(oldp+1050,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->chgIData(oldp+1051,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+1052,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+1053,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgIData(oldp+1054,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->chgBit(oldp+1055,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
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
