// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VETHER_SIMULATION__SYMS_H_
#define VERILATED_VETHER_SIMULATION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vether_simulation.h"

// INCLUDE MODULE CLASSES
#include "Vether_simulation___024root.h"
#include "Vether_simulation_ether_simulation.h"
#include "Vether_simulation_top.h"
#include "Vether_simulation_payload_FIFO.h"
#include "Vether_simulation_IP_rx.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_MAC_tx.h"
#include "Vether_simulation_IP_tx.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_FIFO_TX__F10.h"
#include "Vether_simulation_TCP_ISN.h"
#include "Vether_simulation_checksum_TCP.h"
#include "Vether_simulation_TCP_tx.h"
#include "Vether_simulation_TCP_receiver.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_xgmii_little_to_big.h"
#include "Vether_simulation_crc32_parallel_64bit.h"
#include "Vether_simulation_rx_pkg.h"
#include "Vether_simulation_chksum_tcp_pl.h"
#include "Vether_simulation_flex_counter__S20.h"
#include "Vether_simulation_ether_pkg.h"
#include "Vether_simulation_priority_encoder__W8_Mz1.h"
#include "Vether_simulation_priority_encoder__W10_Mz1.h"
#include "Vether_simulation_priority_encoder__Wa.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vether_simulation__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vether_simulation* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vether_simulation___024root    TOP;
    Vether_simulation_ether_simulation TOP__ether_simulation;
    Vether_simulation_top          TOP__ether_simulation__clt_inst;
    Vether_simulation_IP_rx        TOP__ether_simulation__clt_inst__ip_rx;
    Vether_simulation_chksum_tcp_pl TOP__ether_simulation__clt_inst__ip_rx__chksum_inst;
    Vether_simulation_IP_tx        TOP__ether_simulation__clt_inst__ip_tx;
    Vether_simulation_MAC_rx       TOP__ether_simulation__clt_inst__mac_rx;
    Vether_simulation_crc32_parallel_64bit TOP__ether_simulation__clt_inst__mac_rx__CRC;
    Vether_simulation_priority_encoder__W8_Mz1 TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__clt_inst__mac_rx__crc_convert;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__clt_inst__mac_rx__crc_frame_convert;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__clt_inst__mac_rx__payload_cvrt;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__clt_inst__mac_rx__xgmii_cvrt;
    Vether_simulation_priority_encoder__W10_Mz1 TOP__ether_simulation__clt_inst__mac_rx__xgmii_fcs;
    Vether_simulation_MAC_tx       TOP__ether_simulation__clt_inst__mac_tx;
    Vether_simulation_crc32_parallel_64bit TOP__ether_simulation__clt_inst__mac_tx__CRC;
    Vether_simulation_FIFO_TX__F10 TOP__ether_simulation__clt_inst__u_fifo_tx;
    Vether_simulation_payload_FIFO TOP__ether_simulation__clt_inst__u_payload_fifo;
    Vether_simulation_TCP__F10     TOP__ether_simulation__clt_inst__u_tcp;
    Vether_simulation_TCP_ISN      TOP__ether_simulation__clt_inst__u_tcp__ISN_gen;
    Vether_simulation_TCP_tx       TOP__ether_simulation__clt_inst__u_tcp__TCP_tx;
    Vether_simulation_checksum_TCP TOP__ether_simulation__clt_inst__u_tcp__inst;
    Vether_simulation_TCP_flow_ctrl TOP__ether_simulation__clt_inst__u_tcp__tcp_flow;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__lt;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__me;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__ov;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__pe;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__rt;
    Vether_simulation_TCP_receiver TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv;
    Vether_simulation_flex_counter__S20 TOP__ether_simulation__clt_inst__u_tcp__timeout_fl;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__cvrt_clt;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__cvrt_svr;
    Vether_simulation_top          TOP__ether_simulation__svr_inst;
    Vether_simulation_IP_rx        TOP__ether_simulation__svr_inst__ip_rx;
    Vether_simulation_chksum_tcp_pl TOP__ether_simulation__svr_inst__ip_rx__chksum_inst;
    Vether_simulation_IP_tx        TOP__ether_simulation__svr_inst__ip_tx;
    Vether_simulation_MAC_rx       TOP__ether_simulation__svr_inst__mac_rx;
    Vether_simulation_crc32_parallel_64bit TOP__ether_simulation__svr_inst__mac_rx__CRC;
    Vether_simulation_priority_encoder__W8_Mz1 TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__svr_inst__mac_rx__crc_convert;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__svr_inst__mac_rx__crc_frame_convert;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__svr_inst__mac_rx__payload_cvrt;
    Vether_simulation_xgmii_little_to_big TOP__ether_simulation__svr_inst__mac_rx__xgmii_cvrt;
    Vether_simulation_priority_encoder__W10_Mz1 TOP__ether_simulation__svr_inst__mac_rx__xgmii_fcs;
    Vether_simulation_MAC_tx       TOP__ether_simulation__svr_inst__mac_tx;
    Vether_simulation_crc32_parallel_64bit TOP__ether_simulation__svr_inst__mac_tx__CRC;
    Vether_simulation_FIFO_TX__F10 TOP__ether_simulation__svr_inst__u_fifo_tx;
    Vether_simulation_payload_FIFO TOP__ether_simulation__svr_inst__u_payload_fifo;
    Vether_simulation_TCP__F10     TOP__ether_simulation__svr_inst__u_tcp;
    Vether_simulation_TCP_ISN      TOP__ether_simulation__svr_inst__u_tcp__ISN_gen;
    Vether_simulation_TCP_tx       TOP__ether_simulation__svr_inst__u_tcp__TCP_tx;
    Vether_simulation_checksum_TCP TOP__ether_simulation__svr_inst__u_tcp__inst;
    Vether_simulation_TCP_flow_ctrl TOP__ether_simulation__svr_inst__u_tcp__tcp_flow;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__lt;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__me;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__ov;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__pe;
    Vether_simulation_priority_encoder__Wa TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__rt;
    Vether_simulation_TCP_receiver TOP__ether_simulation__svr_inst__u_tcp__tcp_rcv;
    Vether_simulation_flex_counter__S20 TOP__ether_simulation__svr_inst__u_tcp__timeout_fl;

    // CONSTRUCTORS
    Vether_simulation__Syms(VerilatedContext* contextp, const char* namep, Vether_simulation* modelp);
    ~Vether_simulation__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
