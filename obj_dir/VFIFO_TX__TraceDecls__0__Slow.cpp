// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void VFIFO_TX___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE_RD", "IN_ORDER_DATA", "OUT_ORDER_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "FIFO_TX.rd_state_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_WR", "WRITING", "FLUSHING"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(2, "FIFO_TX.wr_state_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
}

void VFIFO_TX___024root__trace_decl_types(VerilatedFst* tracep) {
    VFIFO_TX___024root__traceDeclTypesSub0(tracep);
}
