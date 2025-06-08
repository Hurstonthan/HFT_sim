// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vether_TX___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_SYN_ACK", "SEND_ACK", "DATA_CONNECTED", 
                                "SEND_FIN", "WAIT_FIN_SERVER", 
                                "SEND_ACK_END"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(1, "TCP_flow_ctrl.TCP_state_t", 7, 7, __VenumItemNames, __VenumItemValues);
    }
}

void Vether_TX___024root__trace_decl_types(VerilatedFst* tracep) {
    Vether_TX___024root__traceDeclTypesSub0(tracep);
}
