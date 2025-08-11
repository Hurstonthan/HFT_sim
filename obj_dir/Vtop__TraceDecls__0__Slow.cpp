// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtop___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
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
        = {"IDLE", "SEND_ETYPE_IPV4_MSB_LENGTH", "SEND_IP_HEADER1", 
                                "SEND_IP_HEADER2", 
                                "SEND_IP_HEADER3", 
                                "SEND_IP_PAYLOAD", 
                                "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(2, "IP_tx.IP_state_t", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "RCV_ETHER_HEAD1", "RCV_ETHER_HEAD2", 
                                "RCV_MAC_PAYLOAD", 
                                "CHECK_CRC", "ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(3, "MAC_rx.MAC_t", 6, 6, __VenumItemNames, __VenumItemValues);
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
        tracep->declDTypeEnum(4, "MAC_tx.ether_state_t", 8, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"UDP_IDLE", "UDP_HEADER", "UDP_CHK_SUM_PAYLOAD", 
                                "UDP_PAYLOAD", "UDP_DONE", 
                                "UDP_CHK_SUM", "UDP_ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(5, "rx_pkg::UDP_t", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "SEND_HEADER", "SEND_PAYLOAD", "DONE", 
                                "SEND_CHKSUM_PAYLOAD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(6, "UDP_tx.state_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vtop___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtop___024root__traceDeclTypesSub0(tracep);
}
