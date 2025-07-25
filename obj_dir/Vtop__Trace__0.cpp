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
        bufp->chgIData(oldp+0,(vlSymsp->TOP__top.__PVT__seq_rcv_start_int),32);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__top.__PVT__end_ss_int));
        bufp->chgSData(oldp+2,(vlSymsp->TOP__top.__PVT__checksum_re_trans_int),16);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_up));
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx),32);
        bufp->chgSData(oldp+5,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX),16);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start),32);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__top__u_tcp.__PVT__end_ss));
        bufp->chgSData(oldp+8,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_re_trans),16);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__gen_en));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__top__u_tcp__inst.__PVT__clear));
        bufp->chgSData(oldp+11,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__src_port),16);
        bufp->chgSData(oldp+12,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__dest_port),16);
        bufp->chgBit(oldp+13,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__end_ss));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__timeout_flag));
        bufp->chgSData(oldp+15,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+16,(vlSymsp->TOP__top.CLK));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__top.nRST));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__top.IP_valid));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__top.IP_flush));
        bufp->chgSData(oldp+20,(vlSymsp->TOP__top.IP_pseuder),16);
        bufp->chgQData(oldp+21,(vlSymsp->TOP__top.IP_payload),64);
        bufp->chgSData(oldp+23,(vlSymsp->TOP__top.TCP_len),16);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__top.IP_bytes_rcv),8);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__top.TCP_send));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__top.TX_en));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__top.axis_last));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__top.wr_FIFO_en));
        bufp->chgIData(oldp+29,(vlSymsp->TOP__top.len_seq),32);
        bufp->chgQData(oldp+30,(vlSymsp->TOP__top.soupbin_TCP_payload),64);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__top.axis_r_en));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__top__u_fifo_tx.__PVT__CLK));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nRST));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__top__u_fifo_tx.__PVT__TX_en));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__top__u_fifo_tx.__PVT__axis_last));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_en));
        bufp->chgIData(oldp+38,(vlSymsp->TOP__top__u_fifo_tx.__PVT__len_seq),32);
        bufp->chgQData(oldp+39,(vlSymsp->TOP__top__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__top__u_payload_fifo.__PVT__CLK));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nRST));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_en));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__top__u_tcp.__PVT__CLK));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__top__u_tcp.__PVT__nRST));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__top__u_tcp.__PVT__TX_en));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__top__u_tcp.__PVT__IP_valid));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__top__u_tcp.__PVT__IP_flush));
        bufp->chgSData(oldp+49,(vlSymsp->TOP__top__u_tcp.__PVT__IP_pseuder),16);
        bufp->chgQData(oldp+50,(vlSymsp->TOP__top__u_tcp.__PVT__IP_payload),64);
        bufp->chgSData(oldp+52,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_len),16);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__top__u_tcp.__PVT__IP_bytes_rcv),8);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_send));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_TX_en));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__top__u_tcp.__PVT__wr_axis_last));
        bufp->chgQData(oldp+57,(vlSymsp->TOP__top__u_tcp.__PVT__soupbin_TCP_payload),64);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__CLK));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__nRST));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__top__u_tcp__inst.__PVT__CLK));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nRST));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__top__u_tcp__inst.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__top__u_tcp__inst.__PVT__axis_last));
        bufp->chgQData(oldp+65,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_payload_tx),64);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TX_en));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__CLK));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nRST));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_send));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__CLK));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nRST));
        bufp->chgQData(oldp+73,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_flush));
        bufp->chgSData(oldp+77,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len),16);
        bufp->chgSData(oldp+78,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__CLK));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nRST));
        bufp->chgCData(oldp+81,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgBit(oldp+82,(vlSymsp->TOP__top.__PVT__TCP_flush_int));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_flush));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush));
        bufp->chgCData(oldp+86,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
        bufp->chgSData(oldp+91,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
        bufp->chgSData(oldp+92,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
        bufp->chgSData(oldp+93,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_trk),16);
        bufp->chgSData(oldp+94,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_len_data),16);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
        bufp->chgSData(oldp+96,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
        bufp->chgQData(oldp+97,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__temp),20);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_valid));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nrcv_data));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__n_nw_segment));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_last));
        bufp->chgCData(oldp+104,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nstate),3);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgSData(oldp+106,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum),17);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp),20);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp1),20);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xbU])))) {
        bufp->chgBit(oldp+111,(vlSymsp->TOP__top.__PVT__rd_ftx_en_int));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_en));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_tx));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__valid_checksum));
        bufp->chgCData(oldp+117,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nstate),7);
        bufp->chgQData(oldp+118,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nseq_up));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xcU])))) {
        bufp->chgBit(oldp+123,(vlSymsp->TOP__top.TCP_stop_flag));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__top.__PVT__wr_pfifo_en_int));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__top.__PVT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__top.__PVT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+127,(vlSymsp->TOP__top.__PVT__rd_pfifo_ptr_int),4);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__top.__PVT__rd_pfifo_len_int),4);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__top.__PVT__out_order_req_int));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__top.__PVT__TCP_stop_flg_int));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req));
        bufp->chgSData(oldp+132,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent),16);
        bufp->chgSData(oldp+133,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_msg_trk),16);
        bufp->chgQData(oldp+134,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_str),4);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_end),4);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nflush_ptr),4);
        bufp->chgSData(oldp+139,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nmsg_end_ptr),4);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_state),2);
        bufp->chgCData(oldp+142,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_state),2);
        bufp->chgBit(oldp+143,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
        bufp->chgIData(oldp+144,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+145,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+146,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+147,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+148,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+149,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
        bufp->chgIData(oldp+150,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+151,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+152,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+153,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+154,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+155,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
        bufp->chgIData(oldp+156,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+157,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+158,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+159,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+160,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+161,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
        bufp->chgIData(oldp+162,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+163,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+164,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+165,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+166,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+167,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
        bufp->chgIData(oldp+168,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+169,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+170,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+171,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+172,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+173,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
        bufp->chgIData(oldp+174,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+175,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+176,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+177,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+178,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+179,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
        bufp->chgIData(oldp+180,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+181,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+182,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+183,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+184,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+185,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
        bufp->chgIData(oldp+186,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+187,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+188,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+189,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+190,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+191,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
        bufp->chgIData(oldp+192,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+193,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+194,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+195,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+196,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+197,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
        bufp->chgIData(oldp+198,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+199,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+200,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+201,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+202,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+203,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
        bufp->chgIData(oldp+204,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+205,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+206,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+207,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+208,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+209,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
        bufp->chgIData(oldp+210,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+211,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+212,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+213,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+214,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+215,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
        bufp->chgIData(oldp+216,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+217,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+218,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+219,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+220,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+221,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
        bufp->chgIData(oldp+222,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+223,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+224,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+225,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+226,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+227,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
        bufp->chgIData(oldp+228,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+229,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+230,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+231,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+232,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+233,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
        bufp->chgIData(oldp+234,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+235,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+236,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+237,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+238,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_last));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_valid));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_FIFO_valid));
        bufp->chgCData(oldp+242,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+244,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_ptr),4);
        bufp->chgCData(oldp+245,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwrt_ptr),4);
        bufp->chgQData(oldp+246,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+248,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+250,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+252,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+254,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+256,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+258,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+260,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+262,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+264,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nout_order_req_l));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+268,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_num_l),32);
        bufp->chgBit(oldp+269,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_1));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_2));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_upd));
        bufp->chgSData(oldp+272,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+273,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nchecksum_l),16);
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+275,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+276,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid));
        bufp->chgCData(oldp+277,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+278,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len),4);
        bufp->chgQData(oldp+279,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+281,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+282,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+284,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+285,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+287,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+288,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+290,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+291,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+293,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+294,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+296,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+297,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+299,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+300,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+302,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+303,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+305,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+306,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+308,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgCData(oldp+309,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+310,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nlen_TCP_flush),4);
        bufp->chgIData(oldp+311,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nseq_trk_rd),32);
        bufp->chgCData(oldp+312,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_len),4);
        bufp->chgBit(oldp+313,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__top__u_payload_fifo.__PVT__naxis_r_valid));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_flush_l));
        bufp->chgCData(oldp+316,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nwr_ptr),4);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_ptr),4);
        bufp->chgBit(oldp+318,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_en));
        bufp->chgCData(oldp+319,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_offset),8);
        bufp->chgBit(oldp+320,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_rcv));
        bufp->chgCData(oldp+321,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_ptr),4);
        bufp->chgCData(oldp+322,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_len),4);
        bufp->chgBit(oldp+323,(vlSymsp->TOP__top__u_tcp.__PVT__out_order_req));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
        bufp->chgCData(oldp+326,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
        bufp->chgCData(oldp+327,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
        bufp->chgSData(oldp+328,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
        bufp->chgBit(oldp+329,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
        bufp->chgBit(oldp+330,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req));
        bufp->chgCData(oldp+332,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug),2);
        bufp->chgBit(oldp+333,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug_0));
        bufp->chgCData(oldp+334,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nstate),7);
        bufp->chgCData(oldp+335,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+336,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+337,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
        bufp->chgIData(oldp+338,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+339,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nwindow_size),16);
        bufp->chgIData(oldp+340,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
        bufp->chgBit(oldp+341,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [0U], 0x50U))));
        bufp->chgIData(oldp+342,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [0U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+343,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+344,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+345,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+346,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [1U], 0x50U))));
        bufp->chgIData(oldp+347,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [1U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+348,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+349,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+350,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+351,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [2U], 0x50U))));
        bufp->chgIData(oldp+352,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [2U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+353,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+354,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+355,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+356,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [3U], 0x50U))));
        bufp->chgIData(oldp+357,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [3U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+358,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+359,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+360,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+361,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [4U], 0x50U))));
        bufp->chgIData(oldp+362,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [4U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+363,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+364,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+365,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+366,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [5U], 0x50U))));
        bufp->chgIData(oldp+367,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [5U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+368,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+369,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+370,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+371,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [6U], 0x50U))));
        bufp->chgIData(oldp+372,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [6U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+373,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+374,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+375,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+376,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [7U], 0x50U))));
        bufp->chgIData(oldp+377,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [7U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+378,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+379,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+380,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+381,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [8U], 0x50U))));
        bufp->chgIData(oldp+382,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [8U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+383,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+384,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+385,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+386,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                    [9U], 0x50U))));
        bufp->chgIData(oldp+387,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                             [9U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+388,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+389,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+390,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+391,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nrcv_next),32);
        bufp->chgBit(oldp+392,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_of_order_flg));
        bufp->chgCData(oldp+393,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
        bufp->chgCData(oldp+394,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+395,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_drop),8);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_left),8);
        bufp->chgCData(oldp+398,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+399,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+400,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+401,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+402,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+403,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+404,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+405,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+406,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+407,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+408,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+409,(vlSymsp->TOP__top__u_tcp.__PVT__ISN_num),32);
        bufp->chgIData(oldp+410,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num),32);
        bufp->chgIData(oldp+411,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+412,(vlSymsp->TOP__top.axis_r_valid));
        bufp->chgQData(oldp+413,(vlSymsp->TOP__top.axis_rd_data),64);
        bufp->chgCData(oldp+415,(vlSymsp->TOP__top.__PVT__wr_ptr_out_int),4);
        bufp->chgCData(oldp+416,(vlSymsp->TOP__top.__PVT__wr_pfifo_len_int),4);
        bufp->chgBit(oldp+417,(vlSymsp->TOP__top.__PVT__rd_pfifo_en_int));
        bufp->chgIData(oldp+418,(vlSymsp->TOP__top.__PVT__seq_rx_FIFO_rd_int),32);
        bufp->chgBit(oldp+419,(vlSymsp->TOP__top.__PVT__full));
        bufp->chgCData(oldp+420,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+422,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en));
        bufp->chgIData(oldp+423,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+424,(vlSymsp->TOP__top__u_payload_fifo.__PVT__full));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid));
        bufp->chgQData(oldp+426,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data),64);
        bufp->chgQData(oldp+428,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [0U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+430,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [0U], 0U, 8U))),8);
        bufp->chgQData(oldp+431,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [1U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+433,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [1U], 0U, 8U))),8);
        bufp->chgQData(oldp+434,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [2U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+436,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [2U], 0U, 8U))),8);
        bufp->chgQData(oldp+437,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [3U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+439,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [3U], 0U, 8U))),8);
        bufp->chgQData(oldp+440,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [4U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+442,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [4U], 0U, 8U))),8);
        bufp->chgQData(oldp+443,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [5U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+445,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [5U], 0U, 8U))),8);
        bufp->chgQData(oldp+446,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [6U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+448,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [6U], 0U, 8U))),8);
        bufp->chgQData(oldp+449,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [7U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+451,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [7U], 0U, 8U))),8);
        bufp->chgQData(oldp+452,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [8U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+454,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [8U], 0U, 8U))),8);
        bufp->chgQData(oldp+455,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                             [9U], 8U, 0x40U)),64);
        bufp->chgCData(oldp+457,((0xffU & VL_SEL_IWII(72, 
                                                      vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                      [9U], 0U, 8U))),8);
        bufp->chgQData(oldp+458,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
        bufp->chgCData(oldp+460,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
        bufp->chgCData(oldp+461,(vlSymsp->TOP__top__u_payload_fifo.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+462,(vlSymsp->TOP__top__u_payload_fifo.__PVT__len_TCP_flush),4);
        bufp->chgCData(oldp+463,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_len_ptr),4);
        bufp->chgIData(oldp+464,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_trk_rd),32);
        bufp->chgBit(oldp+465,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush_l));
        bufp->chgQData(oldp+466,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload1),64);
        bufp->chgQData(oldp+468,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload2),64);
        bufp->chgQData(oldp+470,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload3),64);
        bufp->chgQData(oldp+472,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload4),64);
        bufp->chgQData(oldp+474,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload5),64);
        bufp->chgCData(oldp+476,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset1),8);
        bufp->chgCData(oldp+477,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset2),8);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset3),8);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset4),8);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset5),8);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr),4);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_ptr),4);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__top__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out),4);
        bufp->chgCData(oldp+485,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len),4);
        bufp->chgBit(oldp+486,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv));
        bufp->chgIData(oldp+487,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgBit(oldp+488,(vlSymsp->TOP__top__u_tcp.__PVT__full));
        bufp->chgBit(oldp+489,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full));
        bufp->chgIData(oldp+490,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
        bufp->chgCData(oldp+491,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
        bufp->chgBit(oldp+492,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+493,(vlSymsp->TOP__top.rcv_next),32);
        bufp->chgIData(oldp+494,(vlSymsp->TOP__top.seq_num),32);
        bufp->chgBit(oldp+495,(vlSymsp->TOP__top.__PVT__handshake_done_int));
        bufp->chgBit(oldp+496,(vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__top__u_tcp.__PVT__handshake_done));
        bufp->chgIData(oldp+499,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_next),32);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num),32);
        bufp->chgBit(oldp+501,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_str));
        bufp->chgBit(oldp+502,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done));
        bufp->chgIData(oldp+503,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
        bufp->chgIData(oldp+504,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
        bufp->chgIData(oldp+505,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out),32);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__state),7);
        bufp->chgCData(oldp+507,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
        bufp->chgIData(oldp+508,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
        bufp->chgBit(oldp+509,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
        bufp->chgIData(oldp+510,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
        bufp->chgSData(oldp+511,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size),16);
        bufp->chgBit(oldp+512,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [0U], 0x50U))));
        bufp->chgIData(oldp+513,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [0U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+514,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+515,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+516,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [0U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+517,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [1U], 0x50U))));
        bufp->chgIData(oldp+518,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [1U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+519,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+520,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+521,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [1U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+522,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [2U], 0x50U))));
        bufp->chgIData(oldp+523,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [2U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+524,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+525,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+526,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [2U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+527,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [3U], 0x50U))));
        bufp->chgIData(oldp+528,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [3U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+529,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+530,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+531,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [3U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+532,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [4U], 0x50U))));
        bufp->chgIData(oldp+533,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [4U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+534,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+535,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+536,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [4U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+537,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [5U], 0x50U))));
        bufp->chgIData(oldp+538,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [5U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+539,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+540,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+541,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [5U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+542,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [6U], 0x50U))));
        bufp->chgIData(oldp+543,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [6U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+544,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+545,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+546,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [6U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+547,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [7U], 0x50U))));
        bufp->chgIData(oldp+548,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [7U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+549,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+550,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+551,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [7U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+552,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [8U], 0x50U))));
        bufp->chgIData(oldp+553,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [8U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+554,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+555,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+556,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [8U], 0U, 0x10U))),16);
        bufp->chgBit(oldp+557,((1U & VL_BITSEL_IWII(81, 
                                                    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                    [9U], 0x50U))));
        bufp->chgIData(oldp+558,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                             [9U], 0x30U, 0x20U)),32);
        bufp->chgSData(oldp+559,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0x20U, 0x10U))),16);
        bufp->chgSData(oldp+560,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0x10U, 0x10U))),16);
        bufp->chgSData(oldp+561,((0xffffU & VL_SEL_IWII(81, 
                                                        vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                        [9U], 0U, 0x10U))),16);
        bufp->chgIData(oldp+562,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next),32);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_idx),4);
        bufp->chgCData(oldp+564,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_idx),4);
        bufp->chgSData(oldp+565,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__v_vec),10);
        bufp->chgSData(oldp+566,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_vec),10);
        bufp->chgBit(oldp+567,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_mask));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_found));
        bufp->chgSData(oldp+569,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_mask),10);
        bufp->chgCData(oldp+570,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_ptr),4);
        bufp->chgCData(oldp+571,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
        bufp->chgIData(oldp+572,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
        bufp->chgCData(oldp+573,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
        bufp->chgCData(oldp+574,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
        bufp->chgCData(oldp+575,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
        bufp->chgCData(oldp+576,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
        bufp->chgCData(oldp+577,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
        bufp->chgCData(oldp+578,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
        bufp->chgCData(oldp+579,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
        bufp->chgCData(oldp+580,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
        bufp->chgCData(oldp+581,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
        bufp->chgCData(oldp+582,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
        bufp->chgIData(oldp+583,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+584,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgSData(oldp+585,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din),10);
        bufp->chgBit(oldp+586,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid));
        bufp->chgCData(oldp+587,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx),4);
        bufp->chgIData(oldp+588,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+589,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din),10);
        bufp->chgBit(oldp+590,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid));
        bufp->chgCData(oldp+591,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx),4);
        bufp->chgIData(oldp+592,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+593,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_checksum_out),16);
        bufp->chgSData(oldp+594,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out),16);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum),17);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_send),17);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgQData(oldp+597,(vlSymsp->TOP__top.__PVT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+599,(vlSymsp->TOP__top.__PVT__rd_ftx_valid_int));
        bufp->chgBit(oldp+600,(vlSymsp->TOP__top.__PVT__rd_ftx_last_int));
        bufp->chgSData(oldp+601,(vlSymsp->TOP__top.__PVT__bytes_abt_sent_int),16);
        bufp->chgBit(oldp+602,(vlSymsp->TOP__top.__PVT__re_trans_int));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__top.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__top.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+605,(vlSymsp->TOP__top.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+607,(vlSymsp->TOP__top.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+608,(vlSymsp->TOP__top.__PVT__wr_TX_full));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+611,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgSData(oldp+613,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+614,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid));
        bufp->chgBit(oldp+615,(vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans));
        bufp->chgSData(oldp+616,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_msg_trk),16);
        bufp->chgCData(oldp+617,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_str),4);
        bufp->chgCData(oldp+618,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_end),4);
        bufp->chgCData(oldp+619,(vlSymsp->TOP__top__u_fifo_tx.__PVT__flush_ptr),4);
        bufp->chgSData(oldp+620,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+621,(vlSymsp->TOP__top__u_fifo_tx.__PVT__msg_end_ptr),4);
        bufp->chgCData(oldp+622,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_state),2);
        bufp->chgCData(oldp+623,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_state),2);
        bufp->chgBit(oldp+624,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58U))));
        bufp->chgIData(oldp+625,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
        bufp->chgIData(oldp+626,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
        bufp->chgSData(oldp+627,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
        bufp->chgCData(oldp+628,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
        bufp->chgCData(oldp+629,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
        bufp->chgBit(oldp+630,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
        bufp->chgIData(oldp+631,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
        bufp->chgIData(oldp+632,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
        bufp->chgSData(oldp+633,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
        bufp->chgCData(oldp+634,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
        bufp->chgCData(oldp+635,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
        bufp->chgBit(oldp+636,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
        bufp->chgIData(oldp+637,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
        bufp->chgIData(oldp+638,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
        bufp->chgSData(oldp+639,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
        bufp->chgCData(oldp+640,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
        bufp->chgCData(oldp+641,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
        bufp->chgBit(oldp+642,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x163U))));
        bufp->chgIData(oldp+643,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
        bufp->chgIData(oldp+644,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
        bufp->chgSData(oldp+645,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
        bufp->chgCData(oldp+646,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
        bufp->chgCData(oldp+647,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
        bufp->chgBit(oldp+648,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
        bufp->chgIData(oldp+649,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
        bufp->chgIData(oldp+650,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
        bufp->chgSData(oldp+651,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
        bufp->chgCData(oldp+652,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
        bufp->chgCData(oldp+653,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
        bufp->chgBit(oldp+654,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x215U))));
        bufp->chgIData(oldp+655,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
        bufp->chgIData(oldp+656,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
        bufp->chgSData(oldp+657,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
        bufp->chgCData(oldp+658,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
        bufp->chgCData(oldp+659,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
        bufp->chgBit(oldp+660,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
        bufp->chgIData(oldp+661,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
        bufp->chgIData(oldp+662,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
        bufp->chgSData(oldp+663,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
        bufp->chgCData(oldp+664,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
        bufp->chgCData(oldp+665,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
        bufp->chgBit(oldp+666,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
        bufp->chgIData(oldp+667,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
        bufp->chgIData(oldp+668,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
        bufp->chgSData(oldp+669,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
        bufp->chgCData(oldp+670,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
        bufp->chgCData(oldp+671,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
        bufp->chgBit(oldp+672,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x320U))));
        bufp->chgIData(oldp+673,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
        bufp->chgIData(oldp+674,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
        bufp->chgSData(oldp+675,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
        bufp->chgCData(oldp+676,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
        bufp->chgCData(oldp+677,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
        bufp->chgBit(oldp+678,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x379U))));
        bufp->chgIData(oldp+679,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
        bufp->chgIData(oldp+680,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
        bufp->chgSData(oldp+681,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
        bufp->chgCData(oldp+682,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
        bufp->chgCData(oldp+683,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
        bufp->chgBit(oldp+684,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
        bufp->chgIData(oldp+685,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
        bufp->chgIData(oldp+686,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
        bufp->chgSData(oldp+687,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
        bufp->chgCData(oldp+688,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
        bufp->chgCData(oldp+689,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
        bufp->chgBit(oldp+690,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
        bufp->chgIData(oldp+691,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
        bufp->chgIData(oldp+692,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
        bufp->chgSData(oldp+693,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
        bufp->chgCData(oldp+694,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
        bufp->chgCData(oldp+695,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
        bufp->chgBit(oldp+696,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x484U))));
        bufp->chgIData(oldp+697,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
        bufp->chgIData(oldp+698,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
        bufp->chgSData(oldp+699,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
        bufp->chgCData(oldp+700,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
        bufp->chgCData(oldp+701,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
        bufp->chgBit(oldp+702,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
        bufp->chgIData(oldp+703,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
        bufp->chgIData(oldp+704,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
        bufp->chgSData(oldp+705,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
        bufp->chgCData(oldp+706,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
        bufp->chgCData(oldp+707,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
        bufp->chgBit(oldp+708,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x536U))));
        bufp->chgIData(oldp+709,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
        bufp->chgIData(oldp+710,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
        bufp->chgSData(oldp+711,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
        bufp->chgCData(oldp+712,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
        bufp->chgCData(oldp+713,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
        bufp->chgBit(oldp+714,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
        bufp->chgIData(oldp+715,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
        bufp->chgIData(oldp+716,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
        bufp->chgSData(oldp+717,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
        bufp->chgCData(oldp+718,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
        bufp->chgCData(oldp+719,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
        bufp->chgBit(oldp+720,(vlSymsp->TOP__top__u_fifo_tx.__PVT__full));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__top__u_fifo_tx.__PVT__empty));
        bufp->chgCData(oldp+722,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+723,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_rd_ptr),4);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_ptr),4);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wrt_ptr),4);
        bufp->chgQData(oldp+726,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
        bufp->chgQData(oldp+728,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
        bufp->chgQData(oldp+730,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
        bufp->chgQData(oldp+732,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
        bufp->chgQData(oldp+734,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
        bufp->chgQData(oldp+736,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
        bufp->chgQData(oldp+738,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
        bufp->chgQData(oldp+740,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
        bufp->chgQData(oldp+742,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
        bufp->chgQData(oldp+744,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
        bufp->chgBit(oldp+746,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req_l));
        bufp->chgBit(oldp+747,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+748,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num_l),32);
        bufp->chgBit(oldp+749,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_upd));
        bufp->chgSData(oldp+750,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+751,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_l),16);
        bufp->chgQData(oldp+752,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload),64);
        bufp->chgBit(oldp+754,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last));
        bufp->chgSData(oldp+756,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent),16);
        bufp->chgBit(oldp+757,(vlSymsp->TOP__top__u_tcp.__PVT__re_trans));
        bufp->chgBit(oldp+758,(vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans));
        bufp->chgBit(oldp+759,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+760,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
        bufp->chgQData(oldp+761,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
        bufp->chgIData(oldp+764,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+765,(vlSymsp->TOP__top.TCP_transmit),64);
        bufp->chgBit(oldp+767,(vlSymsp->TOP__top.TCP_last));
        bufp->chgBit(oldp+768,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_last));
        bufp->chgQData(oldp+769,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit),64);
        bufp->chgBit(oldp+771,(vlSymsp->TOP__top__u_tcp.__PVT__seq_up));
        bufp->chgIData(oldp+772,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+773,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up));
        bufp->chgIData(oldp+774,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent),32);
        bufp->chgBit(oldp+775,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last));
        bufp->chgQData(oldp+777,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
        bufp->chgIData(oldp+779,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__state),7);
        bufp->chgBit(oldp+781,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up));
        bufp->chgIData(oldp+782,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+783,(vlSymsp->TOP__top.__PVT__nw_segment));
        bufp->chgBit(oldp+784,(vlSymsp->TOP__top.__PVT__axis_t_last_int));
        bufp->chgQData(oldp+785,(vlSymsp->TOP__top.__PVT__axis_data_rx_int),64);
        bufp->chgIData(oldp+787,(vlSymsp->TOP__top.__PVT__ACK_num_int),32);
        bufp->chgBit(oldp+788,(vlSymsp->TOP__top.__PVT__ACK_rcv_flag_int));
        bufp->chgIData(oldp+789,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num),32);
        bufp->chgBit(oldp+790,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last));
        bufp->chgQData(oldp+793,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx),64);
        bufp->chgBit(oldp+795,(vlSymsp->TOP__top__u_tcp.__PVT__nw_segment));
        bufp->chgBit(oldp+796,(vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last));
        bufp->chgQData(oldp+797,(vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx),64);
        bufp->chgIData(oldp+799,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_num),32);
        bufp->chgBit(oldp+800,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_data));
        bufp->chgCData(oldp+802,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+803,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+804,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+805,(vlSymsp->TOP__top__u_tcp.__PVT__offset_rx),4);
        bufp->chgSData(oldp+806,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+807,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+808,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_rx),16);
        bufp->chgSData(oldp+809,(vlSymsp->TOP__top__u_tcp.__PVT__payload_len_rx),16);
        bufp->chgBit(oldp+810,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data));
        bufp->chgCData(oldp+812,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+813,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+814,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx),4);
        bufp->chgSData(oldp+816,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+817,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+818,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
        bufp->chgSData(oldp+819,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data),16);
        bufp->chgQData(oldp+820,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
        bufp->chgBit(oldp+822,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last));
        bufp->chgSData(oldp+825,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_trk),16);
        bufp->chgIData(oldp+826,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__state),3);
        bufp->chgBit(oldp+828,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data));
        bufp->chgCData(oldp+829,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
        bufp->chgIData(oldp+830,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
        bufp->chgIData(oldp+831,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx),32);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx),4);
        bufp->chgSData(oldp+833,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx),16);
        bufp->chgSData(oldp+834,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx),16);
        bufp->chgSData(oldp+835,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
        bufp->chgIData(oldp+836,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx),32);
        bufp->chgBit(oldp+837,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment));
        bufp->chgIData(oldp+839,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num),32);
        bufp->chgBit(oldp+840,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
        bufp->chgBit(oldp+841,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
        bufp->chgBit(oldp+842,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
        bufp->chgBit(oldp+843,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
        bufp->chgBit(oldp+844,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
        bufp->chgBit(oldp+845,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
        bufp->chgBit(oldp+846,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
        bufp->chgBit(oldp+847,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
        bufp->chgBit(oldp+848,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgCData(oldp+849,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+850,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+851,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+852,(vlSymsp->TOP__top__u_tcp.__PVT__offset_tx),4);
        bufp->chgSData(oldp+853,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+854,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+856,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+857,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx),4);
        bufp->chgSData(oldp+859,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+860,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
        bufp->chgIData(oldp+862,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
        bufp->chgIData(oldp+863,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx),32);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx),4);
        bufp->chgSData(oldp+865,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx),16);
        bufp->chgSData(oldp+866,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
        bufp->chgBit(oldp+867,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
        bufp->chgBit(oldp+868,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
        bufp->chgBit(oldp+869,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
        bufp->chgBit(oldp+870,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
        bufp->chgBit(oldp+871,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
        bufp->chgBit(oldp+872,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
        bufp->chgBit(oldp+873,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
        bufp->chgBit(oldp+874,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    }
    bufp->chgBit(oldp+876,(vlSelfRef.CLK));
    bufp->chgBit(oldp+877,(vlSelfRef.nRST));
    bufp->chgBit(oldp+878,(vlSelfRef.IP_valid));
    bufp->chgBit(oldp+879,(vlSelfRef.IP_flush));
    bufp->chgSData(oldp+880,(vlSelfRef.IP_pseuder),16);
    bufp->chgQData(oldp+881,(vlSelfRef.IP_payload),64);
    bufp->chgSData(oldp+883,(vlSelfRef.TCP_len),16);
    bufp->chgCData(oldp+884,(vlSelfRef.IP_bytes_rcv),8);
    bufp->chgBit(oldp+885,(vlSelfRef.TCP_send));
    bufp->chgQData(oldp+886,(vlSelfRef.TCP_transmit),64);
    bufp->chgBit(oldp+888,(vlSelfRef.TCP_last));
    bufp->chgBit(oldp+889,(vlSelfRef.TX_en));
    bufp->chgBit(oldp+890,(vlSelfRef.axis_last));
    bufp->chgBit(oldp+891,(vlSelfRef.wr_FIFO_en));
    bufp->chgIData(oldp+892,(vlSelfRef.len_seq),32);
    bufp->chgQData(oldp+893,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->chgBit(oldp+895,(vlSelfRef.axis_r_en));
    bufp->chgBit(oldp+896,(vlSelfRef.axis_r_valid));
    bufp->chgQData(oldp+897,(vlSelfRef.axis_rd_data),64);
    bufp->chgBit(oldp+899,(vlSelfRef.TCP_stop_flag));
    bufp->chgIData(oldp+900,(vlSelfRef.rcv_next),32);
    bufp->chgIData(oldp+901,(vlSelfRef.seq_num),32);
    bufp->chgBit(oldp+902,(vlSelfRef.wr_FIFO_full));
    bufp->chgSData(oldp+903,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->chgBit(oldp+904,(vlSymsp->TOP__top__u_tcp__inst.__PVT__up_send));
    bufp->chgSData(oldp+905,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->chgIData(oldp+906,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->chgIData(oldp+907,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->chgIData(oldp+908,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->chgIData(oldp+909,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->chgSData(oldp+910,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->chgBit(oldp+911,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__debug));
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
