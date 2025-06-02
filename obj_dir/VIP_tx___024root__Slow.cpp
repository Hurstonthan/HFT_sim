// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_tx.h for the primary calling header

#include "VIP_tx__pch.h"
#include "VIP_tx__Syms.h"
#include "VIP_tx___024root.h"

void VIP_tx___024root___ctor_var_reset(VIP_tx___024root* vlSelf);

VIP_tx___024root::VIP_tx___024root(VIP_tx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VIP_tx___024root___ctor_var_reset(this);
}

void VIP_tx___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VIP_tx___024root::~VIP_tx___024root() {
}
