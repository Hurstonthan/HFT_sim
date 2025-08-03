// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vethernet_rx.h for the primary calling header

#ifndef VERILATED_VETHERNET_RX_MAC_RX_H_
#define VERILATED_VETHERNET_RX_MAC_RX_H_  // guard

#include "verilated.h"
class Vethernet_rx_crc32_parallel_64bit;
class Vethernet_rx_priority_encoder__W10_Mz1;
class Vethernet_rx_priority_encoder__W8_Mz1;
class Vethernet_rx_xgmii_little_to_big;


class Vethernet_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vethernet_rx_MAC_rx final : public VerilatedModule {
  public:
    // CELLS
    Vethernet_rx_crc32_parallel_64bit* __PVT__CRC;
    Vethernet_rx_xgmii_little_to_big* __PVT__crc_convert;
    Vethernet_rx_xgmii_little_to_big* __PVT__crc_frame_convert;
    Vethernet_rx_xgmii_little_to_big* __PVT__payload_cvrt;
    Vethernet_rx_xgmii_little_to_big* __PVT__xgmii_cvrt;
    Vethernet_rx_priority_encoder__W8_Mz1* __PVT__crc_check_encoder;
    Vethernet_rx_priority_encoder__W10_Mz1* __PVT__xgmii_fcs;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__CLK,0,0);
        VL_IN8(__PVT__nRST,0,0);
        VL_IN8(__PVT__xgmii_rxc,7,0);
        VL_OUT8(__PVT__MAC_valid,0,0);
        VL_OUT8(__PVT__CRC_flush,0,0);
        VL_OUT8(__PVT__frame_ok,0,0);
        VL_OUT8(__PVT__bytes_rcv_len,7,0);
        CData/*0:0*/ __PVT__crc_init;
        CData/*0:0*/ __PVT__end_valid;
        CData/*2:0*/ __PVT__bytes_offset;
        CData/*2:0*/ __PVT__end_FCS;
        CData/*2:0*/ __PVT__str_FCS;
        CData/*0:0*/ __PVT__sof_found;
        CData/*0:0*/ __PVT__crc_valid;
        CData/*0:0*/ __PVT__nsof_found;
        CData/*2:0*/ __PVT__sof_lane;
        CData/*2:0*/ __PVT__nsof_lane;
        CData/*7:0*/ __PVT__xgmii_rxc_f;
        CData/*7:0*/ __PVT__nxgmii_rxc_f;
        CData/*7:0*/ __PVT__xgmii_rxc_MSB;
        CData/*3:0*/ __PVT__FCS_offset;
        CData/*5:0*/ __PVT__shift_bits;
        CData/*7:0*/ __PVT__byte_END;
        CData/*0:0*/ __PVT__crc_delay;
        CData/*0:0*/ __PVT__ncrc_delay;
        CData/*0:0*/ __PVT__soft_dl;
        CData/*0:0*/ __PVT__nsoft_dl;
        CData/*0:0*/ __PVT__case_debug;
        CData/*7:0*/ __PVT__bytes_rcv;
        CData/*7:0*/ __PVT__nbytes_rcv;
        CData/*7:0*/ __PVT__bytes_rcv_dl;
        CData/*7:0*/ __PVT__nbytes_rcv_dl;
        CData/*0:0*/ __PVT__nMAC_valid;
        CData/*5:0*/ __PVT__state;
        CData/*5:0*/ __PVT__next_state;
        CData/*0:0*/ __PVT__mac_dest_addr_valid;
        CData/*0:0*/ __PVT__mac_src_addr_first_valid;
        CData/*0:0*/ __PVT__mac_src_addr_second_valid;
        CData/*5:0*/ __Vdly__state;
        CData/*0:0*/ __Vdly__crc_delay;
        CData/*0:0*/ __Vdly__sof_found;
        CData/*2:0*/ __Vdly__sof_lane;
        CData/*0:0*/ __Vdly__soft_dl;
        CData/*0:0*/ __Vdly__MAC_valid;
        CData/*7:0*/ __Vdly__bytes_rcv;
        CData/*7:0*/ __Vdly__bytes_rcv_dl;
        SData/*15:0*/ __PVT__xgmii_rxc_frame;
        SData/*15:0*/ __PVT__nxgmii_rxc_frame;
        SData/*15:0*/ __PVT__FCS_rxc;
        SData/*15:0*/ __PVT__nFCS_rxc;
        SData/*15:0*/ __PVT__crc_ind;
        SData/*15:0*/ __PVT__ncrc_ind;
        SData/*15:0*/ __Vcellinp__xgmii_fcs__din;
        SData/*15:0*/ __Vdly__xgmii_rxc_frame;
        SData/*15:0*/ __Vdly__FCS_rxc;
        IData/*31:0*/ __PVT__crc_out;
        IData/*31:0*/ __PVT__crc_check;
        IData/*31:0*/ __PVT__ncrc_check;
        VlWide<4>/*127:0*/ __PVT__frame_store;
        VlWide<4>/*127:0*/ __PVT__nframe_store;
        VlWide<4>/*127:0*/ __PVT__FCS_grap;
        VlWide<4>/*127:0*/ __PVT__FCS_shifted;
        IData/*31:0*/ __PVT__FCS_frame;
        IData/*31:0*/ __PVT__nFCS_frame;
    };
    struct {
        IData/*31:0*/ __PVT__rg;
        IData/*31:0*/ __PVT__nrg;
        IData/*31:0*/ __PVT__i;
        VlWide<4>/*127:0*/ __PVT__temp;
        IData/*31:0*/ __Vdly__crc_check;
        VlWide<4>/*127:0*/ __Vdly__frame_store;
        IData/*31:0*/ __Vdly__rg;
        IData/*31:0*/ __Vdly__FCS_frame;
        VL_IN64(__PVT__xgmii_rxd,63,0);
        VL_OUT64(__PVT__MAC_payload_rcv,63,0);
        QData/*63:0*/ __PVT__crc_in;
        QData/*63:0*/ __PVT__crc_in_big;
        QData/*63:0*/ __PVT__xgmii_rxd_f;
        QData/*63:0*/ __PVT__nxgmii_rxd_f;
        QData/*63:0*/ __PVT__xgmii_rxd_MSB;
        QData/*63:0*/ __PVT__xgmii_rxd_f_cvt;
        QData/*63:0*/ __PVT__FCS_frame_cvt;
        QData/*63:0*/ __PVT__MAC_payload_rcv_cvrt;
        QData/*63:0*/ __PVT__nMAC_payload_rcv_cvrt;
        QData/*63:0*/ __Vcellinp__crc_frame_convert__xgmii_rxd;
        QData/*47:0*/ __PVT__mac_dest_addr;
        QData/*47:0*/ __PVT__mac_src_addr;
        QData/*63:0*/ __Vdly__MAC_payload_rcv_cvrt;
    };

    // INTERNAL VARIABLES
    Vethernet_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vethernet_rx_MAC_rx(Vethernet_rx__Syms* symsp, const char* v__name);
    ~Vethernet_rx_MAC_rx();
    VL_UNCOPYABLE(Vethernet_rx_MAC_rx);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
