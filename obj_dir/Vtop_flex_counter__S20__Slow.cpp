// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_flex_counter__S20.h"

void Vtop_flex_counter__S20___ctor_var_reset(Vtop_flex_counter__S20* vlSelf);

Vtop_flex_counter__S20::Vtop_flex_counter__S20(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_flex_counter__S20___ctor_var_reset(this);
}

void Vtop_flex_counter__S20::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_flex_counter__S20::~Vtop_flex_counter__S20() {
}
