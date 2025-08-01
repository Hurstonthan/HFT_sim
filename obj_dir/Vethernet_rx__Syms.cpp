// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx.h"
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

// FUNCTIONS
Vethernet_rx__Syms::~Vethernet_rx__Syms()
{
}

Vethernet_rx__Syms::Vethernet_rx__Syms(VerilatedContext* contextp, const char* namep, Vethernet_rx* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ethernet_rx{this, Verilated::catName(namep, "ethernet_rx")}
    , TOP__ethernet_rx__ip_inst{this, Verilated::catName(namep, "ethernet_rx.ip_inst")}
    , TOP__ethernet_rx__ip_inst__chksum_inst{this, Verilated::catName(namep, "ethernet_rx.ip_inst.chksum_inst")}
    , TOP__ethernet_rx__mac_inst{this, Verilated::catName(namep, "ethernet_rx.mac_inst")}
    , TOP__ethernet_rx__mac_inst__CRC{this, Verilated::catName(namep, "ethernet_rx.mac_inst.CRC")}
    , TOP__ethernet_rx__mac_inst__crc_check_encoder{this, Verilated::catName(namep, "ethernet_rx.mac_inst.crc_check_encoder")}
    , TOP__ethernet_rx__mac_inst__crc_convert{this, Verilated::catName(namep, "ethernet_rx.mac_inst.crc_convert")}
    , TOP__ethernet_rx__mac_inst__crc_frame_convert{this, Verilated::catName(namep, "ethernet_rx.mac_inst.crc_frame_convert")}
    , TOP__ethernet_rx__mac_inst__payload_cvrt{this, Verilated::catName(namep, "ethernet_rx.mac_inst.payload_cvrt")}
    , TOP__ethernet_rx__mac_inst__xgmii_cvrt{this, Verilated::catName(namep, "ethernet_rx.mac_inst.xgmii_cvrt")}
    , TOP__ethernet_rx__mac_inst__xgmii_fcs{this, Verilated::catName(namep, "ethernet_rx.mac_inst.xgmii_fcs")}
{
        // Check resources
        Verilated::stackCheck(368);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ethernet_rx = &TOP__ethernet_rx;
    TOP__ethernet_rx.__PVT__ip_inst = &TOP__ethernet_rx__ip_inst;
    TOP__ethernet_rx__ip_inst.__PVT__chksum_inst = &TOP__ethernet_rx__ip_inst__chksum_inst;
    TOP__ethernet_rx.__PVT__mac_inst = &TOP__ethernet_rx__mac_inst;
    TOP__ethernet_rx__mac_inst.__PVT__CRC = &TOP__ethernet_rx__mac_inst__CRC;
    TOP__ethernet_rx__mac_inst.__PVT__crc_check_encoder = &TOP__ethernet_rx__mac_inst__crc_check_encoder;
    TOP__ethernet_rx__mac_inst.__PVT__crc_convert = &TOP__ethernet_rx__mac_inst__crc_convert;
    TOP__ethernet_rx__mac_inst.__PVT__crc_frame_convert = &TOP__ethernet_rx__mac_inst__crc_frame_convert;
    TOP__ethernet_rx__mac_inst.__PVT__payload_cvrt = &TOP__ethernet_rx__mac_inst__payload_cvrt;
    TOP__ethernet_rx__mac_inst.__PVT__xgmii_cvrt = &TOP__ethernet_rx__mac_inst__xgmii_cvrt;
    TOP__ethernet_rx__mac_inst.__PVT__xgmii_fcs = &TOP__ethernet_rx__mac_inst__xgmii_fcs;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ethernet_rx.__Vconfigure(true);
    TOP__ethernet_rx__ip_inst.__Vconfigure(true);
    TOP__ethernet_rx__ip_inst__chksum_inst.__Vconfigure(true);
    TOP__ethernet_rx__mac_inst.__Vconfigure(true);
    TOP__ethernet_rx__mac_inst__CRC.__Vconfigure(true);
    TOP__ethernet_rx__mac_inst__crc_check_encoder.__Vconfigure(true);
    TOP__ethernet_rx__mac_inst__crc_convert.__Vconfigure(true);
    TOP__ethernet_rx__mac_inst__crc_frame_convert.__Vconfigure(false);
    TOP__ethernet_rx__mac_inst__payload_cvrt.__Vconfigure(false);
    TOP__ethernet_rx__mac_inst__xgmii_cvrt.__Vconfigure(false);
    TOP__ethernet_rx__mac_inst__xgmii_fcs.__Vconfigure(true);
}
