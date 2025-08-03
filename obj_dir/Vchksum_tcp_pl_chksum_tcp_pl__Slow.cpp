// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl__Syms.h"
#include "Vchksum_tcp_pl_chksum_tcp_pl.h"

void Vchksum_tcp_pl_chksum_tcp_pl___ctor_var_reset(Vchksum_tcp_pl_chksum_tcp_pl* vlSelf);

Vchksum_tcp_pl_chksum_tcp_pl::Vchksum_tcp_pl_chksum_tcp_pl(Vchksum_tcp_pl__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchksum_tcp_pl_chksum_tcp_pl___ctor_var_reset(this);
}

void Vchksum_tcp_pl_chksum_tcp_pl::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vchksum_tcp_pl_chksum_tcp_pl::~Vchksum_tcp_pl_chksum_tcp_pl() {
}
