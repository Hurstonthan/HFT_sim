// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_CRC32_PARALLEL_64BIT_H_
#define VERILATED_VETHER_SIMULATION_CRC32_PARALLEL_64BIT_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_crc32_parallel_64bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__valid,0,0);
    VL_IN8(__PVT__crc_init,0,0);
    VL_IN8(__PVT__rx,0,0);
    VL_OUT(__PVT__crc_out,31,0);
    IData/*31:0*/ __PVT__crc_reg;
    IData/*31:0*/ __PVT__next_crc;
    IData/*31:0*/ __Vdly__crc_reg;
    VL_IN64(__PVT__data_in,63,0);

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_crc32_parallel_64bit(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_crc32_parallel_64bit();
    VL_UNCOPYABLE(Vether_simulation_crc32_parallel_64bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
