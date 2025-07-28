// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VETHERNET_RX__SYMS_H_
#define VERILATED_VETHERNET_RX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vethernet_rx.h"

// INCLUDE MODULE CLASSES
#include "Vethernet_rx___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vethernet_rx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vethernet_rx* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vethernet_rx___024root         TOP;

    // CONSTRUCTORS
    Vethernet_rx__Syms(VerilatedContext* contextp, const char* namep, Vethernet_rx* modelp);
    ~Vethernet_rx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
