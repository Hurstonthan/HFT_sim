// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vether_simulation___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
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
    {
        const char* __VenumItemNames[]
        = {"IDLE", "RCV_ETHER_HEAD1", "RCV_ETHER_HEAD2", 
                                "RCV_MAC_PAYLOAD", 
                                "CHECK_CRC", "ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(2, "MAC_rx.MAC_t", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_PREAMBLE_SFD", "SEND_ETHER_HEAD1", 
                                "SEND_ETHER_HEAD2", 
                                "SEND_IP_HEADER_PAYLOAD", 
                                "SEND_FCS_TERMINATE", 
                                "SEND_ZERO_PADDING", 
                                "SEND_IDLE_END1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(3, "MAC_tx.ether_state_t", 8, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_ETYPE_IPV4_MSB_LENGTH", "SEND_IP_HEADER1", 
                                "SEND_IP_HEADER2", 
                                "SEND_IP_HEADER3", 
                                "SEND_IP_PAYLOAD", 
                                "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(4, "IP_tx.IP_state_t", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_RD", "HAND_SHAKE_DONE", "IN_ORDER_DATA", 
                                "OUT_ORDER_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "FIFO_TX.rd_state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_WR", "WRITING", "FLUSHING"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(6, "FIFO_TX.wr_state_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_SRC_DEST_SEQ", "SEND_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE", 
                                "SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD", 
                                "SEND_TCP_PAYLOAD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(7, "TCP_tx.TCP_state_t", 5, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "RCV_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE", 
                                "RCV_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD", 
                                "RCV_DATA", "TCP_CHECKSUM", 
                                "ERR_CASE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(8, "TCP_receiver.TCP_t", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"non_overlap", "left_trim", "right_trim", 
                                "overlap"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(9, "TCP_flow_ctrl.case_debug_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_SYN_ACK", "WAIT_ACK", "WAIT_SYN_ACK", 
                                "SEND_ACK", "DATA_CONNECTED", 
                                "FLUSH_DATA", "FIN_WAIT1", 
                                "FIN_WAIT2", "TIME_WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(10, "TCP_flow_ctrl.TCP_state_t", 10, 7, __VenumItemNames, __VenumItemValues);
    }
}

void Vether_simulation___024root__trace_decl_types(VerilatedFst* tracep) {
    Vether_simulation___024root__traceDeclTypesSub0(tracep);
}
