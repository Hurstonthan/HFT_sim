// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAC_RX__SYMS_H_
#define VERILATED_VMAC_RX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMAC_rx.h"

// INCLUDE MODULE CLASSES
#include "VMAC_rx___024root.h"
#include "VMAC_rx_MAC_rx.h"
#include "VMAC_rx_xgmii_little_to_big.h"
#include "VMAC_rx_crc32_parallel_64bit.h"
#include "VMAC_rx_ether_pkg.h"
#include "VMAC_rx_priority_encoder__W8_Mz1.h"
#include "VMAC_rx_priority_encoder__W10_Mz1.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMAC_rx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMAC_rx* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMAC_rx___024root              TOP;
    VMAC_rx_MAC_rx                 TOP__MAC_rx;
    VMAC_rx_crc32_parallel_64bit   TOP__MAC_rx__CRC;
    VMAC_rx_priority_encoder__W8_Mz1 TOP__MAC_rx__crc_check_encoder;
    VMAC_rx_xgmii_little_to_big    TOP__MAC_rx__crc_convert;
    VMAC_rx_xgmii_little_to_big    TOP__MAC_rx__crc_frame_convert;
    VMAC_rx_priority_encoder__W10_Mz1 TOP__MAC_rx__xgmii_fcs;

    // CONSTRUCTORS
    VMAC_rx__Syms(VerilatedContext* contextp, const char* namep, VMAC_rx* modelp);
    ~VMAC_rx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
