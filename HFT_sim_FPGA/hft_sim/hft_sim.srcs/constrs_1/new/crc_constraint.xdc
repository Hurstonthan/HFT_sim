# crc32.xdc — XCKU5P @ 10GbE user clock (156.25 MHz)

# 1) Primary fabric clock on top-level port CLK (period = 6.400 ns)
create_clock -name CLK156 -period 6.400 [get_ports CLK]

# 2) Asynchronous active-low reset: cut timing from reset to flops
set_false_path -from [get_ports nRST] -to [all_registers]

    
# (Optional) If these ports go off-chip, add board I/O delays relative to CLK
#set_input_delay  -clock [get_clocks CLK156] 0.0 [get_ports {xgmii_rxd[*], xgmii_rxc[*]}]
#set_output_delay -clock [get_clocks CLK156] 0.0 [get_ports {MAC_payload_rcv[*], MAC_valid, CRC_flush, frame_ok, bytes_rcv_len[*]}]

# (Optional) If mapping CLK/nRST to physical pins (e.g., test header), add LOC/IOSTANDARD
# set_property PACKAGE_PIN <PIN_NAME> [get_ports CLK]
# set_property IOSTANDARD  LVCMOS18   [get_ports CLK]
# set_property PACKAGE_PIN <PIN_NAME> [get_ports nRST]
# set_property IOSTANDARD  LVCMOS18   [get_ports nRST]
