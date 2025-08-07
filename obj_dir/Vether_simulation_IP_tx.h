// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_IP_TX_H_
#define VERILATED_VETHER_SIMULATION_IP_TX_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_IP_tx final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__IP_send,0,0);
    VL_IN8(__PVT__protocol_last,0,0);
    VL_OUT8(__PVT__IP_last,0,0);
    VL_OUT8(__PVT__protocol_send,0,0);
    CData/*2:0*/ __PVT__IP_state;
    CData/*2:0*/ __PVT__nxIP_state;
    CData/*0:0*/ __PVT__chk_sum_valid;
    CData/*2:0*/ __Vdly__IP_state;
    CData/*0:0*/ __Vdly__IP_last;
    VL_IN16(__PVT__len_data,15,0);
    VL_OUT16(__PVT__tt_len_data,15,0);
    SData/*15:0*/ __PVT__ntt_len_data;
    SData/*15:0*/ __PVT__chksum_rslt;
    SData/*15:0*/ __Vdly__tt_len_data;
    IData/*19:0*/ __PVT__temp;
    IData/*16:0*/ __PVT__IPv4_chk_sum;
    IData/*16:0*/ __PVT__nIPv4_chk_sum;
    IData/*16:0*/ __Vdly__IPv4_chk_sum;
    VL_IN64(__PVT__protocol_transmit,63,0);
    VL_OUT64(__PVT__IP_transmit,63,0);
    QData/*63:0*/ __PVT__nxIP_transmit_l;
    QData/*63:0*/ __Vdly__IP_transmit;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_IP_tx(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_IP_tx();
    VL_UNCOPYABLE(Vether_simulation_IP_tx);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
