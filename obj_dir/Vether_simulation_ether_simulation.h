// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_ETHER_SIMULATION_H_
#define VERILATED_VETHER_SIMULATION_ETHER_SIMULATION_H_  // guard

#include "verilated.h"
class Vether_simulation_top;
class Vether_simulation_top__CBz1;
class Vether_simulation_xgmii_little_to_big;


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_ether_simulation final : public VerilatedModule {
  public:
    // CELLS
    Vether_simulation_xgmii_little_to_big* __PVT__cvrt_clt;
    Vether_simulation_xgmii_little_to_big* __PVT__cvrt_svr;
    Vether_simulation_top__CBz1* __PVT__svr_inst;
    Vether_simulation_top* __PVT__clt_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(tb_count,7,0);
    VL_IN8(client_lost,0,0);
    VL_IN8(out_order,0,0);
    VL_IN8(err_flag,0,0);
    VL_IN8(TX_en_svr,0,0);
    VL_IN8(end_ss_svr,0,0);
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
    VL_IN8(end_ss_clt,0,0);
    VL_OUT8(xgmii_txc_clt,7,0);
    VL_OUT8(frame_end_clt,0,0);
    VL_IN8(xgmii_rxc_clt,7,0);
    VL_IN8(axis_last_clt,0,0);
    VL_IN8(wr_FIFO_en_clt,0,0);
    VL_OUT8(wr_FIFO_valid_clt,0,0);
    VL_IN8(axis_r_en_clt,0,0);
    VL_OUT8(axis_r_valid_clt,0,0);
    VL_OUT8(TCP_stop_flag_clt,0,0);
    CData/*7:0*/ __PVT__xgmii_rxc_clt_cvrt;
    CData/*7:0*/ __PVT__xgmii_rxc_svr_cvrt;
    CData/*0:0*/ __PVT__wr_FIFO_valid_svr;
    VL_IN(len_seq_svr,31,0);
    VL_OUT(seq_num_svr,31,0);
    VL_OUT(rcv_next_svr,31,0);
    VL_IN(len_seq_clt,31,0);
    VL_OUT(seq_num_clt,31,0);
    VL_OUT(rcv_next_clt,31,0);
    VL_OUT64(xgmii_txd_svr,63,0);
    VL_IN64(xgmii_rxd_svr,63,0);
    VL_IN64(soupbin_TCP_payload_svr,63,0);
    VL_OUT64(axis_rd_data_svr,63,0);
    VL_OUT64(xgmii_txd_clt,63,0);
    VL_IN64(xgmii_rxd_clt,63,0);
    VL_IN64(soupbin_TCP_payload_clt,63,0);
    VL_OUT64(axis_rd_data_clt,63,0);
    QData/*63:0*/ __PVT__xgmii_rxd_clt_cvrt;
    QData/*63:0*/ __PVT__xgmii_rxd_svr_cvrt;
    QData/*63:0*/ __Vcellinp__svr_inst__xgmii_rxc;
    QData/*63:0*/ __Vcellinp__svr_inst__xgmii_rxd;
    QData/*63:0*/ __Vcellinp__clt_inst__xgmii_rxc;
    QData/*63:0*/ __Vcellinp__clt_inst__xgmii_rxd;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_ether_simulation(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_ether_simulation();
    VL_UNCOPYABLE(Vether_simulation_ether_simulation);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
