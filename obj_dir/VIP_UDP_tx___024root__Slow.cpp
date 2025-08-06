// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_UDP_tx.h for the primary calling header

#include "VIP_UDP_tx__pch.h"
#include "VIP_UDP_tx__Syms.h"
#include "VIP_UDP_tx___024root.h"

void VIP_UDP_tx___024root___ctor_var_reset(VIP_UDP_tx___024root* vlSelf);

VIP_UDP_tx___024root::VIP_UDP_tx___024root(VIP_UDP_tx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VIP_UDP_tx___024root___ctor_var_reset(this);
}

void VIP_UDP_tx___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VIP_UDP_tx___024root::~VIP_UDP_tx___024root() {
}
