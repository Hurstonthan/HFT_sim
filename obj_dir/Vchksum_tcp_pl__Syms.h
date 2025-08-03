// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCHKSUM_TCP_PL__SYMS_H_
#define VERILATED_VCHKSUM_TCP_PL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vchksum_tcp_pl.h"

// INCLUDE MODULE CLASSES
#include "Vchksum_tcp_pl___024root.h"
#include "Vchksum_tcp_pl_chksum_tcp_pl.h"
#include "Vchksum_tcp_pl_rx_pkg.h"
#include "Vchksum_tcp_pl_ether_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vchksum_tcp_pl__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vchksum_tcp_pl* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vchksum_tcp_pl___024root       TOP;
    Vchksum_tcp_pl_chksum_tcp_pl   TOP__chksum_tcp_pl;

    // CONSTRUCTORS
    Vchksum_tcp_pl__Syms(VerilatedContext* contextp, const char* namep, Vchksum_tcp_pl* modelp);
    ~Vchksum_tcp_pl__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
