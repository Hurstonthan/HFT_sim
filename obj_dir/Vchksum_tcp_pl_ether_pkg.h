// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchksum_tcp_pl.h for the primary calling header

#ifndef VERILATED_VCHKSUM_TCP_PL_ETHER_PKG_H_
#define VERILATED_VCHKSUM_TCP_PL_ETHER_PKG_H_  // guard

#include "verilated.h"


class Vchksum_tcp_pl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchksum_tcp_pl_ether_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vchksum_tcp_pl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchksum_tcp_pl_ether_pkg(Vchksum_tcp_pl__Syms* symsp, const char* v__name);
    ~Vchksum_tcp_pl_ether_pkg();
    VL_UNCOPYABLE(Vchksum_tcp_pl_ether_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
