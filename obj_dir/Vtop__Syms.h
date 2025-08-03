// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop_payload_FIFO.h"
#include "Vtop_TCP__F10.h"
#include "Vtop_FIFO_TX__F10.h"
#include "Vtop_TCP_ISN.h"
#include "Vtop_checksum_TCP.h"
#include "Vtop_TCP_tx.h"
#include "Vtop_TCP_receiver.h"
#include "Vtop_TCP_flow_ctrl.h"
#include "Vtop_rx_pkg.h"
#include "Vtop_flex_counter__S20.h"
#include "Vtop_ether_pkg.h"
#include "Vtop_priority_encoder__Wa.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_top                       TOP__top;
    Vtop_FIFO_TX__F10              TOP__top__u_fifo_tx;
    Vtop_payload_FIFO              TOP__top__u_payload_fifo;
    Vtop_TCP__F10                  TOP__top__u_tcp;
    Vtop_TCP_ISN                   TOP__top__u_tcp__ISN_gen;
    Vtop_TCP_tx                    TOP__top__u_tcp__TCP_tx;
    Vtop_checksum_TCP              TOP__top__u_tcp__inst;
    Vtop_TCP_flow_ctrl             TOP__top__u_tcp__tcp_flow;
    Vtop_priority_encoder__Wa      TOP__top__u_tcp__tcp_flow__lt;
    Vtop_priority_encoder__Wa      TOP__top__u_tcp__tcp_flow__me;
    Vtop_priority_encoder__Wa      TOP__top__u_tcp__tcp_flow__ov;
    Vtop_priority_encoder__Wa      TOP__top__u_tcp__tcp_flow__pe;
    Vtop_priority_encoder__Wa      TOP__top__u_tcp__tcp_flow__rt;
    Vtop_TCP_receiver              TOP__top__u_tcp__tcp_rcv;
    Vtop_flex_counter__S20         TOP__top__u_tcp__timeout_fl;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
