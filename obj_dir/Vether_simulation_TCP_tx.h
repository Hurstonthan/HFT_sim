// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_TCP_TX_H_
#define VERILATED_VETHER_SIMULATION_TCP_TX_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_TCP_tx final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__TCP_control_tx,7,0);
    VL_IN8(__PVT__offset_tx,3,0);
    VL_OUT8(__PVT__rd_FIFO_en,0,0);
    VL_IN8(__PVT__rd_FIFO_valid,0,0);
    VL_IN8(__PVT__rd_FIFO_last,0,0);
    VL_OUT8(__PVT__seq_up,0,0);
    VL_IN8(__PVT__TCP_send,0,0);
    VL_OUT8(__PVT__TCP_tx_valid,0,0);
    VL_OUT8(__PVT__TCP_tx_last,0,0);
    CData/*0:0*/ __PVT__valid_checksum;
    CData/*6:0*/ __PVT__state;
    CData/*6:0*/ __PVT__nstate;
    CData/*0:0*/ __PVT__nTCP_tx_valid;
    CData/*0:0*/ __PVT__nTCP_tx_last;
    CData/*0:0*/ __PVT__nseq_up;
    CData/*6:0*/ __Vdly__state;
    CData/*0:0*/ __Vdly__TCP_tx_valid;
    CData/*0:0*/ __Vdly__TCP_tx_last;
    CData/*0:0*/ __Vdly__seq_up;
    VL_IN16(__PVT__window_size_tx,15,0);
    VL_IN16(__PVT__urgent_pointer_tx,15,0);
    VL_OUT16(__PVT__TCP_len_data,15,0);
    VL_IN16(__PVT__TCP_basesum_payload,15,0);
    SData/*15:0*/ __PVT__src_port;
    SData/*15:0*/ __PVT__dest_port;
    SData/*15:0*/ __PVT__chksum_debug;
    SData/*15:0*/ __PVT__IP_pseuder_debug;
    SData/*15:0*/ __Vdly__TCP_len_data;
    VL_IN(__PVT__seq_num_tx,31,0);
    VL_IN(__PVT__ACK_tx,31,0);
    VL_IN(__PVT__bytes_abt_sent,31,0);
    VL_OUT(__PVT__bytes_sent,31,0);
    IData/*31:0*/ __PVT__nbytes_sent;
    IData/*16:0*/ __PVT__TCP_checksum;
    IData/*16:0*/ __PVT__nTCP_checksum;
    IData/*19:0*/ __PVT__temp;
    IData/*19:0*/ __PVT__IP_pseuder_temp;
    IData/*31:0*/ __Vdly__bytes_sent;
    IData/*16:0*/ __Vdly__TCP_checksum;
    VL_IN64(__PVT__rd_FIFO_payload,63,0);
    VL_OUT64(__PVT__TCP_transmit,63,0);
    QData/*63:0*/ __PVT__nTCP_transmit;
    QData/*47:0*/ __PVT__frame_hold;
    QData/*47:0*/ __PVT__nframe_hold;
    QData/*63:0*/ __Vdly__TCP_transmit;
    QData/*47:0*/ __Vdly__frame_hold;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_TCP_tx(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_TCP_tx();
    VL_UNCOPYABLE(Vether_simulation_TCP_tx);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
