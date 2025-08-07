// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION___024ROOT_H_
#define VERILATED_VETHER_SIMULATION___024ROOT_H_  // guard

#include "verilated.h"
class Vether_simulation_ether_pkg;
class Vether_simulation_ether_simulation;
class Vether_simulation_rx_pkg;


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation___024root final : public VerilatedModule {
  public:
    // CELLS
    Vether_simulation_ether_simulation* __PVT__ether_simulation;
    Vether_simulation_rx_pkg* __PVT__rx_pkg;
    Vether_simulation_ether_pkg* __PVT__ether_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(nRST,0,0);
        VL_IN8(tb_count,7,0);
        VL_IN8(TX_en_svr,0,0);
        VL_OUT8(xgmii_txc_svr,7,0);
        VL_OUT8(frame_end_svr,0,0);
        VL_IN8(xgmii_rxc_svr,7,0);
        VL_IN8(axis_last_svr,0,0);
        VL_IN8(wr_FIFO_en_svr,0,0);
        VL_OUT8(wr_FIFO_validing_svr,0,0);
        VL_IN8(axis_r_en_svr,0,0);
        VL_OUT8(axis_r_valid_svr,0,0);
        VL_OUT8(TCP_stop_flag_svr,0,0);
        VL_IN8(TX_en_clt,0,0);
        VL_OUT8(xgmii_txc_clt,7,0);
        VL_OUT8(frame_end_clt,0,0);
        VL_IN8(xgmii_rxc_clt,7,0);
        VL_IN8(axis_last_clt,0,0);
        VL_IN8(wr_FIFO_en_clt,0,0);
        VL_OUT8(wr_FIFO_valid_clt,0,0);
        VL_IN8(axis_r_en_clt,0,0);
        VL_OUT8(axis_r_valid_clt,0,0);
        VL_OUT8(TCP_stop_flag_clt,0,0);
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlExecute;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlContinue;
        CData/*0:0*/ __VicoExecute;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoContinue;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_payload_fifo____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_payload_fifo____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_tx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_tx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_fifo_tx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_fifo_tx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__ISN_gen____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__ISN_gen____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__inst____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__inst____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__TCP_tx____PVT__nRST__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__TCP_tx____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__tcp_flow____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__tcp_flow____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx__CRC____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_tx__CRC____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx__CRC____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_tx__CRC____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__ip_rx__chksum_inst____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__ip_rx__chksum_inst____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__u_tcp__timeout_fl____PVT__nRST__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__u_tcp__timeout_fl____PVT__nRST__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactExecute;
        CData/*0:0*/ __VactFirstIteration;
        CData/*0:0*/ __VactContinue;
        CData/*0:0*/ __VnbaExecute;
        CData/*0:0*/ __VnbaFirstIteration;
        CData/*0:0*/ __VnbaContinue;
        VL_IN(len_seq_svr,31,0);
        VL_OUT(seq_num_svr,31,0);
        VL_OUT(rcv_next_svr,31,0);
        VL_IN(len_seq_clt,31,0);
        VL_OUT(seq_num_clt,31,0);
        VL_OUT(rcv_next_clt,31,0);
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VnbaIterCount;
        VL_OUT64(xgmii_txd_svr,63,0);
        VL_IN64(xgmii_rxd_svr,63,0);
        VL_IN64(soupbin_TCP_payload_svr,63,0);
        VL_OUT64(axis_rd_data_svr,63,0);
        VL_OUT64(xgmii_txd_clt,63,0);
        VL_IN64(xgmii_rxd_clt,63,0);
        VL_IN64(soupbin_TCP_payload_clt,63,0);
        VL_OUT64(axis_rd_data_clt,63,0);
        QData/*47:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__0;
        QData/*47:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__0;
        QData/*47:0*/ __Vtrigprevexpr___TOP__ether_simulation__svr_inst__mac_rx____PVT__mac_dest_addr__1;
        QData/*47:0*/ __Vtrigprevexpr___TOP__ether_simulation__clt_inst__mac_rx____PVT__mac_dest_addr__1;
        VlUnpacked<CData/*0:0*/, 58> __Vm_traceActivity;
    };
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<62> __VactTriggered;
    VlTriggerVec<62> __VpreTriggered;
    VlTriggerVec<62> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation___024root(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation___024root();
    VL_UNCOPYABLE(Vether_simulation___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
