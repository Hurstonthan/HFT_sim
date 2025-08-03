// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vchksum_tcp_pl__Syms.h"


VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_sub__TOP__chksum_tcp_pl__0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_sub__TOP__rx_pkg__0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_sub__TOP__0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_init_sub__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("chksum_tcp_pl", VerilatedTracePrefixType::SCOPE_MODULE);
    Vchksum_tcp_pl___024root__trace_init_sub__TOP__chksum_tcp_pl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+7,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+13,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vchksum_tcp_pl___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_sub__TOP__chksum_tcp_pl__0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_init_sub__TOP__chksum_tcp_pl__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+18,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+14,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+16,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+17,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_sub__TOP__rx_pkg__0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+19,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+21,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+23,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_top(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_init_top\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vchksum_tcp_pl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vchksum_tcp_pl___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vchksum_tcp_pl___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_register(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_register\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vchksum_tcp_pl___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vchksum_tcp_pl___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vchksum_tcp_pl___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vchksum_tcp_pl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_const_0\n"); );
    // Init
    Vchksum_tcp_pl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchksum_tcp_pl___024root*>(voidSelf);
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vchksum_tcp_pl___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_const_0_sub_0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(0x40U),32);
    bufp->fullQData(oldp+19,(0x123456ULL),48);
    bufp->fullQData(oldp+21,(0x65431ULL),48);
    bufp->fullSData(oldp+23,(0x800U),16);
    bufp->fullCData(oldp+24,(4U),4);
    bufp->fullCData(oldp+25,(5U),4);
    bufp->fullCData(oldp+26,(0x11U),8);
    bufp->fullCData(oldp+27,(6U),8);
    bufp->fullCData(oldp+28,(1U),8);
    bufp->fullCData(oldp+29,(0x40U),8);
    bufp->fullIData(oldp+30,(0xffffffffU),32);
    bufp->fullIData(oldp+31,(0xaaaaaaaaU),32);
    bufp->fullSData(oldp+32,(0x1234U),16);
    bufp->fullSData(oldp+33,(0x4321U),16);
    bufp->fullSData(oldp+34,(8U),16);
    bufp->fullSData(oldp+35,(0U),16);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_full_0\n"); );
    // Init
    Vchksum_tcp_pl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchksum_tcp_pl___024root*>(voidSelf);
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vchksum_tcp_pl___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_full_0_sub_0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSymsp->TOP__chksum_tcp_pl.CLK));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__chksum_tcp_pl.nRST));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__chksum_tcp_pl.FIFO_rd_en));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__chksum_tcp_pl.clear));
    bufp->fullQData(oldp+5,(vlSymsp->TOP__chksum_tcp_pl.TCP_payload_tx),64);
    bufp->fullBit(oldp+7,(vlSelfRef.CLK));
    bufp->fullBit(oldp+8,(vlSelfRef.nRST));
    bufp->fullBit(oldp+9,(vlSelfRef.FIFO_rd_en));
    bufp->fullBit(oldp+10,(vlSelfRef.clear));
    bufp->fullQData(oldp+11,(vlSelfRef.TCP_payload_tx),64);
    bufp->fullSData(oldp+13,(vlSelfRef.TCP_checksum_pl),16);
    bufp->fullSData(oldp+14,(vlSymsp->TOP__chksum_tcp_pl.TCP_checksum_pl),16);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__chksum_tcp_pl.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__chksum_tcp_pl.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__chksum_tcp_pl.__PVT__temp),20);
}
