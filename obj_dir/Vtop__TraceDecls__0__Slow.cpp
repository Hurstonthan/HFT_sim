// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtop___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE_RD", "HAND_SHAKE_DONE", "IN_ORDER_DATA", 
                                "OUT_ORDER_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(1, "FIFO_TX.rd_state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_WR", "WRITING", "FLUSHING"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(2, "FIFO_TX.wr_state_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_SRC_DEST_SEQ", "SEND_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE", 
                                "SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD", 
                                "SEND_TCP_PAYLOAD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(3, "TCP_tx.TCP_state_t", 5, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "RCV_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE", 
                                "RCV_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD", 
                                "RCV_DATA", "TCP_CHECKSUM", 
                                "ERR_CASE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(4, "TCP_receiver.TCP_t", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"non_overlap", "left_trim", "right_trim", 
                                "overlap"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "TCP_flow_ctrl.case_debug_t", 4, 2, __VenumItemNames, __VenumItemValues);
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
        tracep->declDTypeEnum(6, "TCP_flow_ctrl.TCP_state_t", 8, 7, __VenumItemNames, __VenumItemValues);
    }
}

void Vtop___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtop___024root__traceDeclTypesSub0(tracep);
}
