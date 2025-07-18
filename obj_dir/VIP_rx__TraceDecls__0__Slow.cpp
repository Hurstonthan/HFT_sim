// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VIP_rx___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "RCV_VER_IHL_DSCP_ECN", "RCV_LENGTH_IDEN_FLAGS_FRGOFF_TLL_PROTOCOL", 
                                "RCV_SUM_SRC_ADDR_DEST_ADDR", 
                                "RCV_PAYLOAD_DEST", 
                                "CHK_SUM", "RCV_PAYLOAD", 
                                "DONE", "ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(1, "rx_pkg::IP_t", 9, 4, __VenumItemNames, __VenumItemValues);
    }
}

void VIP_rx___024root__trace_decl_types(VerilatedFst* tracep) {
    VIP_rx___024root__traceDeclTypesSub0(tracep);
}
