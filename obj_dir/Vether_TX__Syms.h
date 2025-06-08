// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VETHER_TX__SYMS_H_
#define VERILATED_VETHER_TX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vether_TX.h"

// INCLUDE MODULE CLASSES
#include "Vether_TX___024root.h"
#include "Vether_TX_TCP_flow_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vether_TX__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vether_TX* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vether_TX___024root            TOP;
    Vether_TX_TCP_flow_if          TOP__ether_TX__DOT__my_TCP;

    // CONSTRUCTORS
    Vether_TX__Syms(VerilatedContext* contextp, const char* namep, Vether_TX* modelp);
    ~Vether_TX__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
