// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TCP_RECEIVER_H_
#define VERILATED_VTOP_TCP_RECEIVER_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_TCP_receiver final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__CLK,0,0);
        VL_IN8(__PVT__nRST,0,0);
        VL_IN8(__PVT__valid_IP_header_rx,0,0);
        VL_IN8(__PVT__IP_flush,0,0);
        VL_OUT8(__PVT__rcv_data,0,0);
        VL_OUT8(__PVT__TCP_control_rx,7,0);
        VL_OUT8(__PVT__offset_rx,3,0);
        VL_OUT8(__PVT__bytes_rcv,7,0);
        VL_OUT8(__PVT__TCP_valid,0,0);
        VL_OUT8(__PVT__TCP_flush,0,0);
        VL_OUT8(__PVT__nw_segment,0,0);
        VL_OUT8(__PVT__TCP_last,0,0);
        CData/*7:0*/ __PVT__nTCP_control_rx;
        CData/*3:0*/ __PVT__noffset_rx;
        CData/*7:0*/ __PVT__TCP_data_dl;
        CData/*7:0*/ __PVT__nTCP_data_dl;
        CData/*0:0*/ __PVT__nTCP_valid;
        CData/*0:0*/ __PVT__nrcv_data;
        CData/*0:0*/ __PVT__checksum_en;
        CData/*0:0*/ __PVT__nchecksum_en;
        CData/*0:0*/ __PVT__n_nw_segment;
        CData/*0:0*/ __PVT__nTCP_last;
        CData/*7:0*/ __PVT__nbytes_rcv;
        CData/*2:0*/ __PVT__state;
        CData/*2:0*/ __PVT__nstate;
        CData/*2:0*/ __Vdly__state;
        CData/*7:0*/ __Vdly__TCP_control_rx;
        CData/*3:0*/ __Vdly__offset_rx;
        CData/*0:0*/ __Vdly__TCP_valid;
        CData/*0:0*/ __Vdly__rcv_data;
        CData/*0:0*/ __Vdly__nw_segment;
        CData/*0:0*/ __Vdly__TCP_last;
        CData/*7:0*/ __Vdly__bytes_rcv;
        VL_IN16(__PVT__TCP_len,15,0);
        VL_IN16(__PVT__IP_pseuder,15,0);
        VL_OUT16(__PVT__window_size_rx,15,0);
        VL_OUT16(__PVT__checksum_rx,15,0);
        VL_OUT16(__PVT__urgent_pointer_rx,15,0);
        VL_OUT16(__PVT__TCP_len_data,15,0);
        SData/*15:0*/ __PVT__nwindow_size_rx;
        SData/*15:0*/ __PVT__nchecksum_rx;
        SData/*15:0*/ __PVT__nurgent_pointer_rx;
        SData/*15:0*/ __PVT__bytes_trk;
        SData/*15:0*/ __PVT__nbytes_trk;
        SData/*15:0*/ __PVT__checksum_in;
        SData/*15:0*/ __PVT__nTCP_len_data;
        SData/*15:0*/ __PVT__TCP_checksum_comp;
        SData/*15:0*/ __Vdly__window_size_rx;
        SData/*15:0*/ __Vdly__checksum_rx;
        SData/*15:0*/ __Vdly__urgent_pointer_rx;
        SData/*15:0*/ __Vdly__TCP_len_data;
        SData/*15:0*/ __Vdly__bytes_trk;
        VL_OUT(__PVT__seq_num_rx,31,0);
        VL_OUT(__PVT__ACK_rx,31,0);
        IData/*31:0*/ __PVT__nseq_num_rx;
        IData/*31:0*/ __PVT__nACK_rx;
        IData/*16:0*/ __PVT__TCP_checksum;
        IData/*16:0*/ __PVT__nTCP_checksum;
        IData/*19:0*/ __PVT__temp;
        IData/*31:0*/ __Vdly__seq_num_rx;
        IData/*31:0*/ __Vdly__ACK_rx;
        IData/*16:0*/ __Vdly__TCP_checksum;
        VL_IN64(__PVT__IP_payload_rx,63,0);
        VL_OUT64(__PVT__TCP_payload_rx,63,0);
    };
    struct {
        QData/*63:0*/ __PVT__nTCP_payload_rx;
        QData/*63:0*/ __Vdly__TCP_payload_rx;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_TCP_receiver(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_TCP_receiver();
    VL_UNCOPYABLE(Vtop_TCP_receiver);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
