// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_TOP_H_
#define VERILATED_VETHER_SIMULATION_TOP_H_  // guard

#include "verilated.h"
class Vether_simulation_FIFO_TX__F10;
class Vether_simulation_IP_rx;
class Vether_simulation_IP_tx;
class Vether_simulation_MAC_rx;
class Vether_simulation_MAC_tx;
class Vether_simulation_TCP__F10;
class Vether_simulation_payload_FIFO;


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_top final : public VerilatedModule {
  public:
    // CELLS
    Vether_simulation_MAC_rx* __PVT__mac_rx;
    Vether_simulation_IP_rx* __PVT__ip_rx;
    Vether_simulation_MAC_tx* __PVT__mac_tx;
    Vether_simulation_IP_tx* __PVT__ip_tx;
    Vether_simulation_TCP__F10* __PVT__u_tcp;
    Vether_simulation_payload_FIFO* __PVT__u_payload_fifo;
    Vether_simulation_FIFO_TX__F10* __PVT__u_fifo_tx;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__CLK,0,0);
        VL_IN8(__PVT__nRST,0,0);
        VL_IN8(__PVT__TX_en,0,0);
        VL_OUT8(__PVT__xgmii_txc,7,0);
        VL_OUT8(__PVT__frame_end,0,0);
        VL_IN8(__PVT__axis_last,0,0);
        VL_IN8(__PVT__wr_FIFO_en,0,0);
        VL_OUT8(__PVT__wr_FIFO_valid,0,0);
        VL_IN8(__PVT__axis_r_en,0,0);
        VL_OUT8(__PVT__axis_r_valid,0,0);
        VL_OUT8(__PVT__TCP_stop_flag,0,0);
        CData/*0:0*/ __PVT__IP_send;
        CData/*0:0*/ __PVT__IP_tx_last;
        CData/*0:0*/ __PVT__TCP_send;
        CData/*0:0*/ __PVT__TCP_tx_valid;
        CData/*0:0*/ __PVT__TCP_tx_last;
        CData/*0:0*/ __PVT__IP_valid;
        CData/*0:0*/ __PVT__IP_flush;
        CData/*0:0*/ __PVT__IP_rx_last;
        CData/*7:0*/ __PVT__IP_bytes_rcv_len;
        CData/*0:0*/ __PVT__MAC_valid;
        CData/*0:0*/ __PVT__CRC_flush;
        CData/*0:0*/ __PVT__frame_ok;
        CData/*7:0*/ __PVT__bytes_rcv_len;
        CData/*7:0*/ __Vcellinp__mac_rx__xgmii_rxc;
        CData/*0:0*/ __PVT__nw_segment;
        CData/*0:0*/ __PVT__TCP_rx_last;
        CData/*0:0*/ __PVT__TCP_flush_int;
        CData/*0:0*/ __PVT__handshake_done_int;
        CData/*0:0*/ __PVT__wr_pfifo_en_int;
        CData/*7:0*/ __PVT__wr_pfifo_offset_int;
        CData/*3:0*/ __PVT__wr_ptr_out_int;
        CData/*3:0*/ __PVT__wr_pfifo_len_int;
        CData/*0:0*/ __PVT__rd_pfifo_valid_int;
        CData/*3:0*/ __PVT__rd_pfifo_ptr_int;
        CData/*3:0*/ __PVT__rd_pfifo_len_int;
        CData/*0:0*/ __PVT__rd_pfifo_en_int;
        CData/*0:0*/ __PVT__rd_ftx_en_int;
        CData/*0:0*/ __PVT__rd_ftx_valid_int;
        CData/*0:0*/ __PVT__rd_ftx_last_int;
        CData/*0:0*/ __PVT__ACK_rcv_flag_int;
        CData/*0:0*/ __PVT__out_order_req_int;
        CData/*0:0*/ __PVT__TCP_stop_flg_int;
        CData/*0:0*/ __PVT__end_ss_int;
        CData/*0:0*/ __PVT__re_trans_int;
        CData/*0:0*/ __PVT__seq_up;
        CData/*0:0*/ __PVT__full;
        CData/*0:0*/ __PVT__rd_FIFO_valid_tx;
        CData/*0:0*/ __PVT__rd_FIFO_last;
        CData/*7:0*/ __Vcellinp__u_tcp__IP_bytes_rcv;
        CData/*0:0*/ __PVT__IP_bytes_rcv;
        SData/*15:0*/ __PVT__tt_len_data;
        SData/*15:0*/ __PVT__TCP_len_data;
        SData/*15:0*/ __PVT__IP_pseuder;
        SData/*15:0*/ __PVT__TCP_len;
        SData/*15:0*/ __PVT__bytes_abt_sent_int;
        SData/*15:0*/ __PVT__checksum_re_trans_int;
        SData/*15:0*/ __PVT__checksum_TX;
        SData/*15:0*/ __PVT__bytes_abt_sent;
        VL_IN(__PVT__len_seq,31,0);
        VL_OUT(__PVT__rcv_next,31,0);
        VL_OUT(__PVT__seq_num,31,0);
        IData/*31:0*/ __PVT__seq_rcv_start_int;
        IData/*31:0*/ __PVT__seq_rx_FIFO_rd_int;
    };
    struct {
        IData/*31:0*/ __PVT__ACK_num_int;
        IData/*31:0*/ __PVT__seq_num_tx;
        VL_OUT64(__PVT__xgmii_txd,63,0);
        VL_IN64(__PVT__xgmii_rxd,63,0);
        VL_IN64(__PVT__xgmii_rxc,63,0);
        VL_IN64(__PVT__soupbin_TCP_payload,63,0);
        VL_OUT64(__PVT__axis_rd_data,63,0);
        QData/*63:0*/ __PVT__IP_transmit;
        QData/*63:0*/ __PVT__TCP_transmit;
        QData/*63:0*/ __PVT__IP_payload;
        QData/*63:0*/ __PVT__MAC_payload_rcv;
        QData/*63:0*/ __PVT__axis_data_rx_int;
        QData/*63:0*/ __PVT__rd_ftx_payload_int;
        QData/*63:0*/ __PVT__rd_FIFO_payload;
    };

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_top(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_top();
    VL_UNCOPYABLE(Vether_simulation_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
