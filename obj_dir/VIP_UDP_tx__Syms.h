// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIP_UDP_TX__SYMS_H_
#define VERILATED_VIP_UDP_TX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VIP_UDP_tx.h"

// INCLUDE MODULE CLASSES
#include "VIP_UDP_tx___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VIP_UDP_tx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VIP_UDP_tx* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VIP_UDP_tx___024root           TOP;

    // CONSTRUCTORS
    VIP_UDP_tx__Syms(VerilatedContext* contextp, const char* namep, VIP_UDP_tx* modelp);
    ~VIP_UDP_tx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
