// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(nRST,0,0);
        VL_IN8(TX_en,0,0);
        VL_OUT8(xgmii_txc,7,0);
        VL_OUT8(frame_end,0,0);
        VL_IN8(xgmii_rxc,7,0);
        VL_IN8(protocol_last,0,0);
        CData/*0:0*/ top__DOT__IP_send;
        CData/*0:0*/ top__DOT__IP_tx_last;
        CData/*0:0*/ top__DOT__TCP_send;
        CData/*0:0*/ top__DOT__TCP_tx_valid;
        CData/*0:0*/ top__DOT__TCP_tx_last;
        CData/*0:0*/ top__DOT__IP_valid;
        CData/*0:0*/ top__DOT__IP_flush;
        CData/*0:0*/ top__DOT__IP_rx_last;
        CData/*7:0*/ top__DOT__IP_bytes_rcv_len;
        CData/*0:0*/ top__DOT__protocol_data_flag;
        CData/*0:0*/ top__DOT__MAC_valid;
        CData/*0:0*/ top__DOT__CRC_flush;
        CData/*0:0*/ top__DOT__frame_ok;
        CData/*0:0*/ top__DOT__is_udp_rx;
        CData/*0:0*/ top__DOT__is_tcp_rx;
        CData/*0:0*/ top__DOT__nw_segment;
        CData/*0:0*/ top__DOT__TCP_rx_last;
        CData/*0:0*/ top__DOT__TCP_flush_int;
        CData/*0:0*/ top__DOT__handshake_done_int;
        CData/*0:0*/ top__DOT__wr_pfifo_en_int;
        CData/*7:0*/ top__DOT__wr_pfifo_offset_int;
        CData/*3:0*/ top__DOT__wr_ptr_out_int;
        CData/*3:0*/ top__DOT__wr_pfifo_len_int;
        CData/*0:0*/ top__DOT__rd_pfifo_valid_int;
        CData/*3:0*/ top__DOT__rd_pfifo_ptr_int;
        CData/*3:0*/ top__DOT__rd_pfifo_len_int;
        CData/*0:0*/ top__DOT__rd_pfifo_en_int;
        CData/*0:0*/ top__DOT__rd_ftx_en_int;
        CData/*0:0*/ top__DOT__rd_ftx_valid_int;
        CData/*0:0*/ top__DOT__rd_ftx_last_int;
        CData/*0:0*/ top__DOT__ACK_rcv_flag_int;
        CData/*0:0*/ top__DOT__out_order_req_int;
        CData/*0:0*/ top__DOT__TCP_stop_flg_int;
        CData/*0:0*/ top__DOT__end_ss_int;
        CData/*0:0*/ top__DOT__re_trans_int;
        CData/*0:0*/ top__DOT__seq_up;
        CData/*0:0*/ top__DOT__full;
        CData/*0:0*/ top__DOT__UDP_tx_last;
        CData/*0:0*/ top__DOT__UDP_tx_send;
        CData/*0:0*/ top__DOT__UDP_flush;
        CData/*0:0*/ top__DOT__UDP_valid;
        CData/*0:0*/ top__DOT__UDP_send;
        CData/*0:0*/ top__DOT__mac_rx__DOT__crc_init;
        CData/*0:0*/ top__DOT__mac_rx__DOT__end_valid;
        CData/*2:0*/ top__DOT__mac_rx__DOT__bytes_offset;
        CData/*2:0*/ top__DOT__mac_rx__DOT__end_FCS;
        CData/*2:0*/ top__DOT__mac_rx__DOT__str_FCS;
        CData/*0:0*/ top__DOT__mac_rx__DOT__sof_found;
        CData/*0:0*/ top__DOT__mac_rx__DOT__crc_valid;
        CData/*0:0*/ top__DOT__mac_rx__DOT__nsof_found;
        CData/*2:0*/ top__DOT__mac_rx__DOT__sof_lane;
        CData/*2:0*/ top__DOT__mac_rx__DOT__nsof_lane;
        CData/*7:0*/ top__DOT__mac_rx__DOT__xgmii_rxc_f;
        CData/*7:0*/ top__DOT__mac_rx__DOT__nxgmii_rxc_f;
        CData/*7:0*/ top__DOT__mac_rx__DOT__xgmii_rxc_MSB;
        CData/*3:0*/ top__DOT__mac_rx__DOT__FCS_offset;
        CData/*7:0*/ top__DOT__mac_rx__DOT__byte_END;
    };
    struct {
        CData/*0:0*/ top__DOT__mac_rx__DOT__crc_delay;
        CData/*0:0*/ top__DOT__mac_rx__DOT__ncrc_delay;
        CData/*0:0*/ top__DOT__mac_rx__DOT__ncrc_valid;
        CData/*0:0*/ top__DOT__mac_rx__DOT__soft_dl;
        CData/*0:0*/ top__DOT__mac_rx__DOT__nsoft_dl;
        CData/*0:0*/ top__DOT__mac_rx__DOT__case_debug;
        CData/*7:0*/ top__DOT__mac_rx__DOT__bytes_rcv;
        CData/*7:0*/ top__DOT__mac_rx__DOT__nbytes_rcv;
        CData/*7:0*/ top__DOT__mac_rx__DOT__bytes_rcv_dl;
        CData/*7:0*/ top__DOT__mac_rx__DOT__nbytes_rcv_dl;
        CData/*0:0*/ top__DOT__mac_rx__DOT__nMAC_valid;
        CData/*5:0*/ top__DOT__mac_rx__DOT__state;
        CData/*5:0*/ top__DOT__mac_rx__DOT__next_state;
        CData/*7:0*/ top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc;
        CData/*7:0*/ top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc;
        CData/*7:0*/ top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc;
        CData/*7:0*/ top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc;
        CData/*0:0*/ top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid;
        CData/*3:0*/ top__DOT__ip_rx__DOT__state;
        CData/*3:0*/ top__DOT__ip_rx__DOT__nstate;
        CData/*0:0*/ top__DOT__ip_rx__DOT__chksum_en;
        CData/*0:0*/ top__DOT__ip_rx__DOT__chksum_clear;
        CData/*7:0*/ top__DOT__ip_rx__DOT__nIP_bytes_rcv_len;
        CData/*0:0*/ top__DOT__ip_rx__DOT__nIP_valid;
        CData/*0:0*/ top__DOT__ip_rx__DOT__nIP_last;
        CData/*0:0*/ top__DOT__ip_rx__DOT__next_is_udp;
        CData/*0:0*/ top__DOT__ip_rx__DOT__next_is_tcp;
        CData/*3:0*/ top__DOT__ip_rx__DOT__test_valid;
        CData/*3:0*/ top__DOT__ip_rx__DOT__ip_version;
        CData/*0:0*/ top__DOT__ip_rx__DOT__is_src_addr;
        CData/*0:0*/ top__DOT__ip_rx__DOT__is_ip_version_valid;
        CData/*2:0*/ top__DOT__udp_rx__DOT__current_state;
        CData/*2:0*/ top__DOT__udp_rx__DOT__nstate;
        CData/*0:0*/ top__DOT__udp_rx__DOT__next_UDP_valid;
        CData/*7:0*/ top__DOT__mac_tx__DOT__xgmii_txc_l;
        CData/*7:0*/ top__DOT__mac_tx__DOT__nxgmii_txc_l;
        CData/*0:0*/ top__DOT__mac_tx__DOT__IP_send_l;
        CData/*6:0*/ top__DOT__mac_tx__DOT__state;
        CData/*6:0*/ top__DOT__mac_tx__DOT__nstate;
        CData/*0:0*/ top__DOT__mac_tx__DOT__crc_init;
        CData/*0:0*/ top__DOT__mac_tx__DOT__valid;
        CData/*0:0*/ top__DOT__mac_tx__DOT__nvalid;
        CData/*0:0*/ top__DOT__mac_tx__DOT__IP_last_dl;
        CData/*0:0*/ top__DOT__mac_tx__DOT__CRC__DOT__rx;
        CData/*2:0*/ top__DOT__ip_tx__DOT__IP_state;
        CData/*2:0*/ top__DOT__ip_tx__DOT__nxIP_state;
        CData/*0:0*/ top__DOT__ip_tx__DOT__chk_sum_valid;
        CData/*2:0*/ top__DOT__udp_tx__DOT__current_state;
        CData/*2:0*/ top__DOT__udp_tx__DOT__nstate;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN16(UDP_len,15,0);
        SData/*15:0*/ top__DOT__tt_len_data;
        SData/*15:0*/ top__DOT__TCP_len_data;
        SData/*15:0*/ top__DOT__IP_pseuder;
        SData/*15:0*/ top__DOT__TCP_len;
        SData/*15:0*/ top__DOT__bytes_abt_sent_int;
        SData/*15:0*/ top__DOT__checksum_re_trans_int;
    };
    struct {
        SData/*15:0*/ top__DOT__checksum_TX;
        SData/*15:0*/ top__DOT__mac_rx__DOT__xgmii_rxc_frame;
        SData/*15:0*/ top__DOT__mac_rx__DOT__nxgmii_rxc_frame;
        SData/*15:0*/ top__DOT__mac_rx__DOT__FCS_rxc;
        SData/*15:0*/ top__DOT__mac_rx__DOT__crc_ind;
        SData/*15:0*/ top__DOT__mac_rx__DOT__ncrc_ind;
        SData/*15:0*/ top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din;
        SData/*15:0*/ top__DOT__ip_rx__DOT__IP_checksum;
        SData/*15:0*/ top__DOT__ip_rx__DOT__nIP_checksum;
        SData/*15:0*/ top__DOT__ip_rx__DOT__bytes_rcv;
        SData/*15:0*/ top__DOT__ip_rx__DOT__nbytes_rcv;
        SData/*15:0*/ top__DOT__ip_rx__DOT__dst_addr;
        SData/*15:0*/ top__DOT__ip_rx__DOT__ndst_addr;
        SData/*15:0*/ top__DOT__ip_rx__DOT__IP_len;
        SData/*15:0*/ top__DOT__ip_rx__DOT__nIP_len;
        SData/*15:0*/ top__DOT__ip_rx__DOT__nIP_pseuder;
        SData/*15:0*/ top__DOT__udp_rx__DOT__cnt;
        SData/*15:0*/ top__DOT__udp_rx__DOT__next_cnt;
        SData/*15:0*/ top__DOT__udp_rx__DOT__UDP_len;
        SData/*15:0*/ top__DOT__udp_rx__DOT__next_UDP_len;
        SData/*15:0*/ top__DOT__mac_tx__DOT__len_counter;
        SData/*15:0*/ top__DOT__mac_tx__DOT__nlen_counter;
        SData/*15:0*/ top__DOT__ip_tx__DOT__ntt_len_data;
        SData/*15:0*/ top__DOT__ip_tx__DOT__chksum_rslt;
        SData/*15:0*/ top__DOT__udp_tx__DOT__computed_len;
        IData/*31:0*/ top__DOT__seq_rcv_start_int;
        IData/*31:0*/ top__DOT__seq_rx_FIFO_rd_int;
        IData/*31:0*/ top__DOT__ACK_num_int;
        IData/*31:0*/ top__DOT__seq_num_tx;
        IData/*31:0*/ top__DOT__mac_rx__DOT__crc_check;
        IData/*31:0*/ top__DOT__mac_rx__DOT__ncrc_check;
        VlWide<4>/*127:0*/ top__DOT__mac_rx__DOT__frame_store;
        VlWide<4>/*127:0*/ top__DOT__mac_rx__DOT__nframe_store;
        IData/*31:0*/ top__DOT__mac_rx__DOT__FCS_frame;
        IData/*31:0*/ top__DOT__mac_rx__DOT__nFCS_frame;
        IData/*31:0*/ top__DOT__mac_rx__DOT__rg;
        IData/*31:0*/ top__DOT__mac_rx__DOT__nrg;
        VlWide<4>/*127:0*/ top__DOT__mac_rx__DOT__temp;
        IData/*31:0*/ top__DOT__mac_rx__DOT__CRC__DOT__crc_reg;
        IData/*31:0*/ top__DOT__mac_rx__DOT__CRC__DOT__next_crc;
        IData/*19:0*/ top__DOT__ip_rx__DOT__temp;
        IData/*16:0*/ top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum;
        IData/*16:0*/ top__DOT__ip_rx__DOT__chksum_inst__DOT__nTCP_checksum;
        IData/*19:0*/ top__DOT__ip_rx__DOT__chksum_inst__DOT__temp;
        IData/*19:0*/ top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1;
        IData/*19:0*/ top__DOT__ip_rx__DOT__chksum_inst__DOT__temp2;
        IData/*31:0*/ top__DOT__mac_tx__DOT__crc_out;
        IData/*31:0*/ top__DOT__mac_tx__DOT__CRC__DOT__crc_reg;
        IData/*31:0*/ top__DOT__mac_tx__DOT__CRC__DOT__next_crc;
        IData/*19:0*/ top__DOT__ip_tx__DOT__temp;
        IData/*19:0*/ top__DOT__ip_tx__DOT__temp1;
        IData/*19:0*/ top__DOT__ip_tx__DOT__temp2;
        IData/*16:0*/ top__DOT__ip_tx__DOT__IPv4_chk_sum;
        IData/*16:0*/ top__DOT__ip_tx__DOT__nIPv4_chk_sum;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(xgmii_txd,63,0);
        VL_IN64(xgmii_rxd,63,0);
        QData/*63:0*/ top__DOT__IP_transmit;
        QData/*63:0*/ top__DOT__TCP_transmit;
        QData/*63:0*/ top__DOT__IP_payload;
        QData/*63:0*/ top__DOT__MAC_payload_rcv;
        QData/*63:0*/ top__DOT__UDP_payload;
        QData/*63:0*/ top__DOT__axis_data_rx_int;
        QData/*63:0*/ top__DOT__rd_ftx_payload_int;
    };
    struct {
        QData/*63:0*/ top__DOT____Vcellout__udp_tx__IP_payload;
        QData/*63:0*/ top__DOT__mac_rx__DOT__crc_in_big;
        QData/*63:0*/ top__DOT__mac_rx__DOT__xgmii_rxd_f;
        QData/*63:0*/ top__DOT__mac_rx__DOT__nxgmii_rxd_f;
        QData/*63:0*/ top__DOT__mac_rx__DOT__xgmii_rxd_MSB;
        QData/*63:0*/ top__DOT__mac_rx__DOT__FCS_frame_cvt;
        QData/*63:0*/ top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt;
        QData/*63:0*/ top__DOT__mac_rx__DOT__nMAC_payload_rcv_cvrt;
        QData/*47:0*/ top__DOT__mac_rx__DOT__mac_dest_addr;
        QData/*63:0*/ top__DOT__ip_rx__DOT__nIP_payload;
        QData/*63:0*/ top__DOT__ip_rx__DOT__chksum_in;
        QData/*63:0*/ top__DOT__udp_rx__DOT__next_UDP_payload;
        QData/*63:0*/ top__DOT__mac_tx__DOT__xgmii_txd_l;
        QData/*63:0*/ top__DOT__mac_tx__DOT__nxgmii_txd_l;
        QData/*63:0*/ top__DOT__ip_tx__DOT__nxIP_transmit_l;
        QData/*63:0*/ top__DOT__udp_tx__DOT__next_IP_payload;
        QData/*63:0*/ top__DOT__udp_tx__DOT__header_reg;
        QData/*47:0*/ __Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__0;
        QData/*47:0*/ __Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__1;
        QData/*47:0*/ __Vtrigprevexpr___TOP__top__DOT__mac_rx__DOT__mac_dest_addr__2;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
