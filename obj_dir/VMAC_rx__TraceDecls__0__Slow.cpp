// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VMAC_rx___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "RCV_ETHER_HEAD1", "RCV_ETHER_HEAD2", 
                                "RCV_MAC_PAYLOAD", 
                                "CHECK_CRC", "ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(1, "MAC_rx.MAC_t", 6, 6, __VenumItemNames, __VenumItemValues);
    }
}

void VMAC_rx___024root__trace_decl_types(VerilatedFst* tracep) {
    VMAC_rx___024root__traceDeclTypesSub0(tracep);
}
