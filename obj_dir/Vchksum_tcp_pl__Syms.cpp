// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl.h"
#include "Vchksum_tcp_pl___024root.h"

// FUNCTIONS
Vchksum_tcp_pl__Syms::~Vchksum_tcp_pl__Syms()
{
}

Vchksum_tcp_pl__Syms::Vchksum_tcp_pl__Syms(VerilatedContext* contextp, const char* namep, Vchksum_tcp_pl* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
