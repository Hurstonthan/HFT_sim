// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vethernet_rx.h for the primary calling header

#ifndef VERILATED_VETHERNET_RX_ETHERNET_RX_H_
#define VERILATED_VETHERNET_RX_ETHERNET_RX_H_  // guard

#include "verilated.h"
class Vethernet_rx_IP_rx;
class Vethernet_rx_MAC_rx;


class Vethernet_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vethernet_rx_ethernet_rx final : public VerilatedModule {
  public:
    // CELLS
    Vethernet_rx_MAC_rx* __PVT__mac_inst;
    Vethernet_rx_IP_rx* __PVT__ip_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(xgmii_rxc,7,0);
    VL_OUT8(IP_valid,0,0);
    VL_OUT8(IP_flush,0,0);
    VL_OUT8(is_udp,0,0);
    VL_OUT8(is_tcp,0,0);
    CData/*0:0*/ __PVT__MAC_valid;
    CData/*0:0*/ __PVT__MAC_flush;
    CData/*7:0*/ __PVT__bytes_rcv_len;
    CData/*0:0*/ __PVT__frame_ok;
    VL_IN64(xgmii_rxd,63,0);
    VL_OUT64(IP_payload,63,0);
    QData/*63:0*/ __PVT__MAC_payload_rcv;

    // INTERNAL VARIABLES
    Vethernet_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vethernet_rx_ethernet_rx(Vethernet_rx__Syms* symsp, const char* v__name);
    ~Vethernet_rx_ethernet_rx();
    VL_UNCOPYABLE(Vethernet_rx_ethernet_rx);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
