// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl.h"
#include "Vchksum_tcp_pl___024root.h"
#include "Vchksum_tcp_pl_chksum_tcp_pl.h"
#include "Vchksum_tcp_pl_rx_pkg.h"
#include "Vchksum_tcp_pl_ether_pkg.h"

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
    , TOP__chksum_tcp_pl{this, Verilated::catName(namep, "chksum_tcp_pl")}
{
        // Check resources
        Verilated::stackCheck(64);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__chksum_tcp_pl = &TOP__chksum_tcp_pl;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__chksum_tcp_pl.__Vconfigure(true);
}
