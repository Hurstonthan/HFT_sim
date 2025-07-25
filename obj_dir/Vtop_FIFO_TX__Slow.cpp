// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_FIFO_TX.h"
#include "Vtop__Syms.h"

void Vtop_FIFO_TX___ctor_var_reset(Vtop_FIFO_TX* vlSelf);

Vtop_FIFO_TX::Vtop_FIFO_TX(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_FIFO_TX___ctor_var_reset(this);
}

void Vtop_FIFO_TX::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_FIFO_TX::~Vtop_FIFO_TX() {
}
