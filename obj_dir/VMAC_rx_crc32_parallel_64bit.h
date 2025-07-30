// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_rx.h for the primary calling header

#ifndef VERILATED_VMAC_RX_CRC32_PARALLEL_64BIT_H_
#define VERILATED_VMAC_RX_CRC32_PARALLEL_64BIT_H_  // guard

#include "verilated.h"


class VMAC_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_rx_crc32_parallel_64bit final : public VerilatedModule {
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
    VMAC_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_rx_crc32_parallel_64bit(VMAC_rx__Syms* symsp, const char* v__name);
    ~VMAC_rx_crc32_parallel_64bit();
    VL_UNCOPYABLE(VMAC_rx_crc32_parallel_64bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
