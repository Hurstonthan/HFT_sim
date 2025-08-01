// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VETHERNET_RX__SYMS_H_
#define VERILATED_VETHERNET_RX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vethernet_rx.h"

// INCLUDE MODULE CLASSES
#include "Vethernet_rx___024root.h"
#include "Vethernet_rx_ethernet_rx.h"
#include "Vethernet_rx_IP_rx.h"
#include "Vethernet_rx_MAC_rx.h"
#include "Vethernet_rx_xgmii_little_to_big.h"
#include "Vethernet_rx_crc32_parallel_64bit.h"
#include "Vethernet_rx_rx_pkg.h"
#include "Vethernet_rx_chksum_tcp_pl.h"
#include "Vethernet_rx_ether_pkg.h"
#include "Vethernet_rx_priority_encoder__W8_Mz1.h"
#include "Vethernet_rx_priority_encoder__W10_Mz1.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vethernet_rx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vethernet_rx* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vethernet_rx___024root         TOP;
    Vethernet_rx_ethernet_rx       TOP__ethernet_rx;
    Vethernet_rx_IP_rx             TOP__ethernet_rx__ip_inst;
    Vethernet_rx_chksum_tcp_pl     TOP__ethernet_rx__ip_inst__chksum_inst;
    Vethernet_rx_MAC_rx            TOP__ethernet_rx__mac_inst;
    Vethernet_rx_crc32_parallel_64bit TOP__ethernet_rx__mac_inst__CRC;
    Vethernet_rx_priority_encoder__W8_Mz1 TOP__ethernet_rx__mac_inst__crc_check_encoder;
    Vethernet_rx_xgmii_little_to_big TOP__ethernet_rx__mac_inst__crc_convert;
    Vethernet_rx_xgmii_little_to_big TOP__ethernet_rx__mac_inst__crc_frame_convert;
    Vethernet_rx_xgmii_little_to_big TOP__ethernet_rx__mac_inst__payload_cvrt;
    Vethernet_rx_xgmii_little_to_big TOP__ethernet_rx__mac_inst__xgmii_cvrt;
    Vethernet_rx_priority_encoder__W10_Mz1 TOP__ethernet_rx__mac_inst__xgmii_fcs;

    // CONSTRUCTORS
    Vethernet_rx__Syms(VerilatedContext* contextp, const char* namep, Vethernet_rx* modelp);
    ~Vethernet_rx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
