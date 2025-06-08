// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vether_TX__pch.h"
#include "Vether_TX.h"
#include "Vether_TX___024root.h"
#include "Vether_TX_TCP_flow_if.h"

// FUNCTIONS
Vether_TX__Syms::~Vether_TX__Syms()
{
}

Vether_TX__Syms::Vether_TX__Syms(VerilatedContext* contextp, const char* namep, Vether_TX* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ether_TX__DOT__my_TCP{this, Verilated::catName(namep, "ether_TX.my_TCP")}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ether_TX__DOT__my_TCP = &TOP__ether_TX__DOT__my_TCP;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ether_TX__DOT__my_TCP.__Vconfigure(true);
}
