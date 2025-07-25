// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_ether_pkg.h"

void Vtop_ether_pkg___ctor_var_reset(Vtop_ether_pkg* vlSelf);

Vtop_ether_pkg::Vtop_ether_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ether_pkg___ctor_var_reset(this);
}

void Vtop_ether_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_ether_pkg::~Vtop_ether_pkg() {
}
