// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VTCP_flow_ctrl___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"non_overlap", "left_trim", "right_trim", 
                                "overlap"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(1, "TCP_flow_ctrl.case_debug_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_SYN_ACK", "SEND_ACK", "DATA_CONNECTED", 
                                "FLUSH_DATA", "SEND_FIN", 
                                "WAIT_FIN_SERVER", 
                                "SEND_ACK_END"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(2, "TCP_flow_ctrl.TCP_state_t", 8, 7, __VenumItemNames, __VenumItemValues);
    }
}

void VTCP_flow_ctrl___024root__trace_decl_types(VerilatedFst* tracep) {
    VTCP_flow_ctrl___024root__traceDeclTypesSub0(tracep);
}
