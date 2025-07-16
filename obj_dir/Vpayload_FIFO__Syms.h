// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPAYLOAD_FIFO__SYMS_H_
#define VERILATED_VPAYLOAD_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpayload_FIFO.h"

// INCLUDE MODULE CLASSES
#include "Vpayload_FIFO___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpayload_FIFO__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpayload_FIFO* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpayload_FIFO___024root        TOP;

    // CONSTRUCTORS
    Vpayload_FIFO__Syms(VerilatedContext* contextp, const char* namep, Vpayload_FIFO* modelp);
    ~Vpayload_FIFO__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
