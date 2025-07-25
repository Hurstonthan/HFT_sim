// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_payload_FIFO__F5.h"

void Vtop_payload_FIFO__F5___ctor_var_reset(Vtop_payload_FIFO__F5* vlSelf);

Vtop_payload_FIFO__F5::Vtop_payload_FIFO__F5(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_payload_FIFO__F5___ctor_var_reset(this);
}

void Vtop_payload_FIFO__F5::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_payload_FIFO__F5::~Vtop_payload_FIFO__F5() {
}
