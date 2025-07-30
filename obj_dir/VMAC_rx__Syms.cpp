// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMAC_rx__pch.h"
#include "VMAC_rx.h"
#include "VMAC_rx___024root.h"
#include "VMAC_rx_MAC_rx.h"
#include "VMAC_rx_xgmii_little_to_big.h"
#include "VMAC_rx_crc32_parallel_64bit.h"
#include "VMAC_rx_ether_pkg.h"
#include "VMAC_rx_priority_encoder__W8_Mz1.h"
#include "VMAC_rx_priority_encoder__W10_Mz1.h"

// FUNCTIONS
VMAC_rx__Syms::~VMAC_rx__Syms()
{
}

VMAC_rx__Syms::VMAC_rx__Syms(VerilatedContext* contextp, const char* namep, VMAC_rx* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__MAC_rx{this, Verilated::catName(namep, "MAC_rx")}
    , TOP__MAC_rx__CRC{this, Verilated::catName(namep, "MAC_rx.CRC")}
    , TOP__MAC_rx__crc_check_encoder{this, Verilated::catName(namep, "MAC_rx.crc_check_encoder")}
    , TOP__MAC_rx__crc_convert{this, Verilated::catName(namep, "MAC_rx.crc_convert")}
    , TOP__MAC_rx__crc_frame_convert{this, Verilated::catName(namep, "MAC_rx.crc_frame_convert")}
    , TOP__MAC_rx__payload_cvrt{this, Verilated::catName(namep, "MAC_rx.payload_cvrt")}
    , TOP__MAC_rx__xgmii_fcs{this, Verilated::catName(namep, "MAC_rx.xgmii_fcs")}
{
        // Check resources
        Verilated::stackCheck(336);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__MAC_rx = &TOP__MAC_rx;
    TOP__MAC_rx.__PVT__CRC = &TOP__MAC_rx__CRC;
    TOP__MAC_rx.__PVT__crc_check_encoder = &TOP__MAC_rx__crc_check_encoder;
    TOP__MAC_rx.__PVT__crc_convert = &TOP__MAC_rx__crc_convert;
    TOP__MAC_rx.__PVT__crc_frame_convert = &TOP__MAC_rx__crc_frame_convert;
    TOP__MAC_rx.__PVT__payload_cvrt = &TOP__MAC_rx__payload_cvrt;
    TOP__MAC_rx.__PVT__xgmii_fcs = &TOP__MAC_rx__xgmii_fcs;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__MAC_rx.__Vconfigure(true);
    TOP__MAC_rx__CRC.__Vconfigure(true);
    TOP__MAC_rx__crc_check_encoder.__Vconfigure(true);
    TOP__MAC_rx__crc_convert.__Vconfigure(true);
    TOP__MAC_rx__crc_frame_convert.__Vconfigure(false);
    TOP__MAC_rx__payload_cvrt.__Vconfigure(false);
    TOP__MAC_rx__xgmii_fcs.__Vconfigure(true);
}
