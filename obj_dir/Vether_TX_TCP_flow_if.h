// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_TX.h for the primary calling header

#ifndef VERILATED_VETHER_TX_TCP_FLOW_IF_H_
#define VERILATED_VETHER_TX_TCP_FLOW_IF_H_  // guard

#include "verilated.h"


class Vether_TX__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_TX_TCP_flow_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__TCP_tx_en;
    CData/*0:0*/ TCP_stop_flg;
    SData/*15:0*/ checksum_tx;
    IData/*31:0*/ seq_num_tx;
    IData/*31:0*/ ACK_tx;

    // INTERNAL VARIABLES
    Vether_TX__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_TX_TCP_flow_if(Vether_TX__Syms* symsp, const char* v__name);
    ~Vether_TX_TCP_flow_if();
    VL_UNCOPYABLE(Vether_TX_TCP_flow_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vether_TX_TCP_flow_if* obj);

#endif  // guard
