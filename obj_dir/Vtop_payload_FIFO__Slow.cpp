// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_payload_FIFO.h"

void Vtop_payload_FIFO___ctor_var_reset(Vtop_payload_FIFO* vlSelf);

Vtop_payload_FIFO::Vtop_payload_FIFO(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_payload_FIFO___ctor_var_reset(this);
}

void Vtop_payload_FIFO::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_payload_FIFO::~Vtop_payload_FIFO() {
}
