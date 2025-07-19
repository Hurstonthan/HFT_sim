// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VUDP_tx___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_HEADER", "SEND_PAYLOAD", "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(1, "UDP_tx.UDP_tx_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void VUDP_tx___024root__trace_decl_types(VerilatedFst* tracep) {
    VUDP_tx___024root__traceDeclTypesSub0(tracep);
}
