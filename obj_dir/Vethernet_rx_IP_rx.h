// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vethernet_rx.h for the primary calling header

#ifndef VERILATED_VETHERNET_RX_IP_RX_H_
#define VERILATED_VETHERNET_RX_IP_RX_H_  // guard

#include "verilated.h"
class Vethernet_rx_chksum_tcp_pl;


class Vethernet_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vethernet_rx_IP_rx final : public VerilatedModule {
  public:
    // CELLS
    Vethernet_rx_chksum_tcp_pl* __PVT__chksum_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__MAC_valid,0,0);
    VL_IN8(__PVT__MAC_flush,0,0);
    VL_IN8(__PVT__bytes_rcv_len,7,0);
    VL_OUT8(__PVT__IP_valid,0,0);
    VL_OUT8(__PVT__IP_flush,0,0);
    VL_OUT8(__PVT__is_udp,0,0);
    VL_OUT8(__PVT__is_tcp,0,0);
    CData/*3:0*/ __PVT__state;
    CData/*3:0*/ __PVT__nstate;
    CData/*0:0*/ __PVT__chksum_en;
    CData/*0:0*/ __PVT__chksum_clear;
    CData/*0:0*/ __PVT__nIP_valid;
    CData/*0:0*/ __PVT__next_is_udp;
    CData/*0:0*/ __PVT__next_is_tcp;
    CData/*7:0*/ __PVT__ttl;
    CData/*2:0*/ __PVT__flags;
    CData/*3:0*/ __PVT__test_valid;
    CData/*3:0*/ __PVT__ip_version;
    CData/*0:0*/ __PVT__is_src_addr;
    CData/*0:0*/ __PVT__is_ip_version_valid;
    CData/*3:0*/ __Vdly__state;
    CData/*0:0*/ __Vdly__IP_valid;
    CData/*0:0*/ __Vdly__is_tcp;
    CData/*0:0*/ __Vdly__is_udp;
    SData/*15:0*/ __PVT__IP_checksum;
    SData/*15:0*/ __PVT__nIP_checksum;
    SData/*15:0*/ __PVT__bytes_rcv;
    SData/*15:0*/ __PVT__nbytes_rcv;
    SData/*15:0*/ __PVT__chksum_pl;
    SData/*15:0*/ __PVT__dst_addr;
    SData/*15:0*/ __PVT__ndst_addr;
    SData/*15:0*/ __PVT__IP_len;
    SData/*15:0*/ __PVT__nIP_len;
    SData/*15:0*/ __PVT__total_len;
    SData/*15:0*/ __PVT__frags_flag;
    SData/*12:0*/ __PVT__fragoff;
    SData/*15:0*/ __Vdly__IP_checksum;
    SData/*15:0*/ __Vdly__bytes_rcv;
    SData/*15:0*/ __Vdly__dst_addr;
    SData/*15:0*/ __Vdly__IP_len;
    IData/*16:0*/ __PVT__chksum_final;
    VL_IN64(__PVT__MAC_payload_rcv,63,0);
    VL_OUT64(__PVT__IP_payload,63,0);
    QData/*63:0*/ __PVT__nIP_payload;
    QData/*63:0*/ __PVT__chksum_in;
    QData/*63:0*/ __Vdly__IP_payload;

    // INTERNAL VARIABLES
    Vethernet_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vethernet_rx_IP_rx(Vethernet_rx__Syms* symsp, const char* v__name);
    ~Vethernet_rx_IP_rx();
    VL_UNCOPYABLE(Vethernet_rx_IP_rx);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
