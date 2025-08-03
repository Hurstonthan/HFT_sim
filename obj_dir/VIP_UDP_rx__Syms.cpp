// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VIP_UDP_rx__pch.h"
#include "VIP_UDP_rx.h"
#include "VIP_UDP_rx___024root.h"

// FUNCTIONS
VIP_UDP_rx__Syms::~VIP_UDP_rx__Syms()
{
}

VIP_UDP_rx__Syms::VIP_UDP_rx__Syms(VerilatedContext* contextp, const char* namep, VIP_UDP_rx* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
