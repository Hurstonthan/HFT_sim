// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIP_UDP_rx.h for the primary calling header

#ifndef VERILATED_VIP_UDP_RX___024ROOT_H_
#define VERILATED_VIP_UDP_RX___024ROOT_H_  // guard

#include "verilated.h"


class VIP_UDP_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VIP_UDP_rx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(MAC_valid,0,0);
    VL_IN8(MAC_flush,0,0);
    VL_IN8(bytes_rcv_len,7,0);
    VL_OUT8(UDP_valid,0,0);
    VL_OUT8(UDP_flush,0,0);
    CData/*0:0*/ IP_UDP_rx__DOT__IP_valid;
    CData/*0:0*/ IP_UDP_rx__DOT__IP_flush;
    CData/*0:0*/ IP_UDP_rx__DOT__is_udp;
    CData/*0:0*/ IP_UDP_rx__DOT__is_tcp;
    CData/*3:0*/ IP_UDP_rx__DOT__ip_inst__DOT__state;
    CData/*3:0*/ IP_UDP_rx__DOT__ip_inst__DOT__nstate;
    CData/*0:0*/ IP_UDP_rx__DOT__ip_inst__DOT__chksum_en;
    CData/*0:0*/ IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear;
    CData/*0:0*/ IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid;
    CData/*0:0*/ IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp;
    CData/*0:0*/ IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp;
    CData/*3:0*/ IP_UDP_rx__DOT__ip_inst__DOT__test_valid;
    CData/*3:0*/ IP_UDP_rx__DOT__ip_inst__DOT__ip_version;
    CData/*0:0*/ IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr;
    CData/*0:0*/ IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid;
    CData/*2:0*/ IP_UDP_rx__DOT__udp_inst__DOT__current_state;
    CData/*2:0*/ IP_UDP_rx__DOT__udp_inst__DOT__nstate;
    CData/*0:0*/ IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__dst_addr;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__IP_len;
    SData/*15:0*/ IP_UDP_rx__DOT__ip_inst__DOT__nIP_len;
    SData/*15:0*/ IP_UDP_rx__DOT__udp_inst__DOT__cnt;
    SData/*15:0*/ IP_UDP_rx__DOT__udp_inst__DOT__next_cnt;
    SData/*15:0*/ IP_UDP_rx__DOT__udp_inst__DOT__UDP_len;
    SData/*15:0*/ IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len;
    IData/*16:0*/ IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum;
    IData/*16:0*/ IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(MAC_payload_rcv,63,0);
    VL_OUT64(UDP_payload,63,0);
    QData/*63:0*/ IP_UDP_rx__DOT__IP_payload;
    QData/*63:0*/ IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload;
    QData/*63:0*/ IP_UDP_rx__DOT__ip_inst__DOT__chksum_in;
    QData/*63:0*/ IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VIP_UDP_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VIP_UDP_rx___024root(VIP_UDP_rx__Syms* symsp, const char* v__name);
    ~VIP_UDP_rx___024root();
    VL_UNCOPYABLE(VIP_UDP_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
