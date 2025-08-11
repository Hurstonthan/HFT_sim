// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_MAC_TX_H_
#define VERILATED_VETHER_SIMULATION_MAC_TX_H_  // guard

#include "verilated.h"
class Vether_simulation_crc32_parallel_64bit;


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_MAC_tx final : public VerilatedModule {
  public:
    // CELLS
    Vether_simulation_crc32_parallel_64bit* __PVT__CRC;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__TX_en,0,0);
    VL_OUT8(__PVT__xgmii_txc,7,0);
    VL_IN8(__PVT__IP_last,0,0);
    VL_OUT8(__PVT__IP_send,0,0);
    VL_OUT8(__PVT__frame_end,0,0);
    CData/*7:0*/ __PVT__xgmii_txc_l;
    CData/*7:0*/ __PVT__nxgmii_txc_l;
    CData/*0:0*/ __PVT__IP_send_l;
    CData/*6:0*/ __PVT__state;
    CData/*6:0*/ __PVT__nstate;
    CData/*0:0*/ __PVT__crc_init;
    CData/*0:0*/ __PVT__valid;
    CData/*0:0*/ __PVT__nvalid;
    CData/*0:0*/ __PVT__IP_last_dl;
    CData/*6:0*/ __Vdly__state;
    CData/*7:0*/ __Vdly__xgmii_txc_l;
    CData/*0:0*/ __Vdly__IP_last_dl;
    CData/*0:0*/ __Vdly__IP_send;
    VL_IN16(__PVT__tt_len_data,15,0);
    SData/*15:0*/ __PVT__len_counter;
    SData/*15:0*/ __PVT__nlen_counter;
    SData/*15:0*/ __Vdly__len_counter;
    IData/*31:0*/ __PVT__crc_out;
    VL_OUT64(__PVT__xgmii_txd,63,0);
    VL_IN64(__PVT__IP_transmit,63,0);
    QData/*63:0*/ __PVT__xgmii_txd_l;
    QData/*63:0*/ __PVT__nxgmii_txd_l;
    QData/*63:0*/ __Vdly__xgmii_txd_l;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_MAC_tx(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_MAC_tx();
    VL_UNCOPYABLE(Vether_simulation_MAC_tx);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
