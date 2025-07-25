// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_checksum_TCP.h"

void Vtop_checksum_TCP___ctor_var_reset(Vtop_checksum_TCP* vlSelf);

Vtop_checksum_TCP::Vtop_checksum_TCP(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_checksum_TCP___ctor_var_reset(this);
}

void Vtop_checksum_TCP::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_checksum_TCP::~Vtop_checksum_TCP() {
}
