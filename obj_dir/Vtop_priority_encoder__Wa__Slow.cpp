// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_priority_encoder__Wa.h"

void Vtop_priority_encoder__Wa___ctor_var_reset(Vtop_priority_encoder__Wa* vlSelf);

Vtop_priority_encoder__Wa::Vtop_priority_encoder__Wa(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_priority_encoder__Wa___ctor_var_reset(this);
}

void Vtop_priority_encoder__Wa::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_priority_encoder__Wa::~Vtop_priority_encoder__Wa() {
}
