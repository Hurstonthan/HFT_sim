// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VIP_UDP_tx___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_ETYPE_IPV4_MSB_LENGTH", "SEND_IP_HEADER1", 
                                "SEND_IP_HEADER2", 
                                "SEND_IP_HEADER3", 
                                "SEND_IP_PAYLOAD", 
                                "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(1, "IP_for_udp_tx.IP_state_t", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_HEADER", "SEND_PAYLOAD", "DONE", 
                                "SEND_CHKSUM_PAYLOAD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(2, "UDP_tx.state_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
}

void VIP_UDP_tx___024root__trace_decl_types(VerilatedFst* tracep) {
    VIP_UDP_tx___024root__traceDeclTypesSub0(tracep);
}
