// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_receiver.h"
#include "Vtop__Syms.h"

void Vtop_TCP_receiver___ctor_var_reset(Vtop_TCP_receiver* vlSelf);

Vtop_TCP_receiver::Vtop_TCP_receiver(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_TCP_receiver___ctor_var_reset(this);
}

void Vtop_TCP_receiver::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_TCP_receiver::~Vtop_TCP_receiver() {
}
