// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_TCP__F10_CBZ1_H_
#define VERILATED_VETHER_SIMULATION_TCP__F10_CBZ1_H_  // guard

#include "verilated.h"
class Vether_simulation_TCP_ISN__Cz1;
class Vether_simulation_TCP_flow_ctrl;
class Vether_simulation_TCP_receiver;
class Vether_simulation_TCP_tx;
class Vether_simulation_checksum_TCP;
class Vether_simulation_flex_counter__S20;


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_TCP__F10_CBz1 final : public VerilatedModule {
  public:
    // CELLS
    Vether_simulation_TCP_flow_ctrl* __PVT__tcp_flow;
    Vether_simulation_TCP_receiver* __PVT__tcp_rcv;
    Vether_simulation_TCP_tx* __PVT__TCP_tx;
    Vether_simulation_TCP_ISN__Cz1* __PVT__ISN_gen;
    Vether_simulation_flex_counter__S20* __PVT__timeout_fl;
    Vether_simulation_checksum_TCP* __PVT__inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__CLK,0,0);
        VL_IN8(__PVT__nRST,0,0);
        VL_IN8(__PVT__out_order,0,0);
        VL_IN8(__PVT__TX_en,0,0);
        VL_IN8(__PVT__IP_valid,0,0);
        VL_IN8(__PVT__IP_flush,0,0);
        VL_IN8(__PVT__IP_data_flag,0,0);
        VL_IN8(__PVT__IP_last,0,0);
        VL_IN8(__PVT__IP_bytes_rcv,7,0);
        VL_OUT8(__PVT__nw_segment,0,0);
        VL_OUT8(__PVT__TCP_rx_last,0,0);
        VL_OUT8(__PVT__TCP_flush,0,0);
        VL_OUT8(__PVT__handshake_done,0,0);
        VL_OUT8(__PVT__wr_FIFO_en,0,0);
        VL_OUT8(__PVT__wr_FIFO_offset,7,0);
        VL_OUT8(__PVT__rd_FIFO_valid_rcv,0,0);
        VL_OUT8(__PVT__rd_FIFO_ptr,3,0);
        VL_OUT8(__PVT__rd_FIFO_len,3,0);
        VL_IN8(__PVT__wr_ptr_out,3,0);
        VL_IN8(__PVT__wr_FIFO_len,3,0);
        VL_IN8(__PVT__rd_FIFO_en_rcv,0,0);
        VL_IN8(__PVT__full,0,0);
        VL_OUT8(__PVT__ACK_rcv_flag,0,0);
        VL_OUT8(__PVT__out_order_req,0,0);
        VL_OUT8(__PVT__TCP_stop_flg,0,0);
        VL_IN8(__PVT__end_ss,0,0);
        VL_IN8(__PVT__rd_FIFO_valid_tx,0,0);
        VL_IN8(__PVT__rd_FIFO_last,0,0);
        VL_OUT8(__PVT__rd_FIFO_en_tx,0,0);
        VL_IN8(__PVT__TCP_send,0,0);
        VL_OUT8(__PVT__TCP_tx_last,0,0);
        VL_IN8(__PVT__re_trans,0,0);
        VL_IN8(__PVT__wr_FIFO_TX_en,0,0);
        VL_IN8(__PVT__wr_axis_last,0,0);
        CData/*0:0*/ __PVT__rcv_data;
        CData/*7:0*/ __PVT__TCP_control_rx;
        CData/*7:0*/ __PVT__bytes_rcv;
        CData/*3:0*/ __PVT__offset_rx;
        CData/*0:0*/ __PVT__seq_up;
        CData/*7:0*/ __PVT__TCP_control_tx;
        CData/*3:0*/ __PVT__offset_tx;
        CData/*0:0*/ __PVT__timeout_flag;
        CData/*0:0*/ __PVT__clear_timeout;
        CData/*0:0*/ __PVT__count_en_timeout;
        CData/*7:0*/ __Vcellout__tcp_flow__rd_FIFO_len;
        CData/*7:0*/ __Vcellinp__tcp_flow__wr_FIFO_len;
        CData/*0:0*/ __PVT__rd_FIFO_valid;
        VL_OUT16(__PVT__checksum_TX,15,0);
        VL_IN16(__PVT__IP_pseuder,15,0);
        VL_IN16(__PVT__bytes_abt_sent,15,0);
        VL_OUT16(__PVT__TCP_len_data,15,0);
        VL_IN16(__PVT__checksum_re_trans,15,0);
        SData/*15:0*/ __PVT__window_size_rx;
        SData/*15:0*/ __PVT__checksum_rx;
        SData/*15:0*/ __PVT__urgent_pointer_rx;
        SData/*15:0*/ __PVT__window_size_tx;
        SData/*15:0*/ __PVT__urgent_pointer_tx;
        SData/*15:0*/ __PVT__TCP_basesum_payload;
        SData/*15:0*/ __PVT__TCP_checksum_out;
        SData/*10:0*/ __Vcellout__tcp_flow__rd_FIFO_ptr;
        SData/*10:0*/ __Vcellinp__tcp_flow__wr_FIFO_ptr;
        VL_OUT(__PVT__seq_rcv_start,31,0);
        VL_IN(__PVT__seq_rx_FIFO_rd,31,0);
        VL_OUT(__PVT__ACK_num,31,0);
    };
    struct {
        VL_OUT(__PVT__seq_num_tx_out,31,0);
        VL_OUT(__PVT__rcv_next,31,0);
        VL_OUT(__PVT__seq_num,31,0);
        IData/*31:0*/ __PVT__seq_num_rx;
        IData/*31:0*/ __PVT__ACK_rx;
        IData/*31:0*/ __PVT__seq_num_tx;
        IData/*31:0*/ __PVT__ACK_tx;
        IData/*31:0*/ __PVT__ISN_num;
        IData/*31:0*/ __PVT__bytes_sent;
        IData/*31:0*/ __Vcellinp__tcp_flow__bytes_abt_sent;
        IData/*31:0*/ __Vcellinp__TCP_tx__bytes_abt_sent;
        VL_IN64(__PVT__IP_payload,63,0);
        VL_OUT64(__PVT__axis_data_rx,63,0);
        VL_IN64(__PVT__rd_FIFO_payload,63,0);
        VL_OUT64(__PVT__TCP_transmit,63,0);
        VL_IN64(__PVT__soupbin_TCP_payload,63,0);
    };

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_TCP__F10_CBz1(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_TCP__F10_CBz1();
    VL_UNCOPYABLE(Vether_simulation_TCP__F10_CBz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
