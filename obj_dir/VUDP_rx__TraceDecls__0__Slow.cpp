// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VUDP_rx___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"UDP_IDLE", "UDP_HEADER", "UDP_CHK_SUM_PAYLOAD", 
                                "UDP_PAYLOAD", "UDP_DONE", 
                                "UDP_CHK_SUM", "UDP_ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(1, "rx_pkg::UDP_t", 7, 3, __VenumItemNames, __VenumItemValues);
    }
}

void VUDP_rx___024root__trace_decl_types(VerilatedFst* tracep) {
    VUDP_rx___024root__traceDeclTypesSub0(tracep);
}
