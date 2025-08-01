# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vethernet_rx.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vethernet_rx \
	Vethernet_rx___024root__DepSet_h79b7ff74__0 \
	Vethernet_rx___024root__DepSet_h7fb63c4b__0 \
	Vethernet_rx_ethernet_rx__DepSet_hc23e78d9__0 \
	Vethernet_rx_IP_rx__DepSet_hcd6bb8b2__0 \
	Vethernet_rx_IP_rx__DepSet_h8bf237c7__0 \
	Vethernet_rx_MAC_rx__DepSet_h9e5dbcda__0 \
	Vethernet_rx_xgmii_little_to_big__DepSet_h3240e8b3__0 \
	Vethernet_rx_crc32_parallel_64bit__DepSet_h19f18262__0 \
	Vethernet_rx_chksum_tcp_pl__DepSet_he9ae9b6b__0 \
	Vethernet_rx_priority_encoder__W8_Mz1__DepSet_h189badb5__0 \
	Vethernet_rx_priority_encoder__W10_Mz1__DepSet_hf72ee54f__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vethernet_rx___024root__Slow \
	Vethernet_rx___024root__DepSet_h79b7ff74__0__Slow \
	Vethernet_rx___024root__DepSet_h7fb63c4b__0__Slow \
	Vethernet_rx_ethernet_rx__Slow \
	Vethernet_rx_ethernet_rx__DepSet_hc23e78d9__0__Slow \
	Vethernet_rx_ethernet_rx__DepSet_h383cbc9e__0__Slow \
	Vethernet_rx_IP_rx__Slow \
	Vethernet_rx_IP_rx__DepSet_hcd6bb8b2__0__Slow \
	Vethernet_rx_IP_rx__DepSet_h8bf237c7__0__Slow \
	Vethernet_rx_MAC_rx__Slow \
	Vethernet_rx_MAC_rx__DepSet_h0b682c43__0__Slow \
	Vethernet_rx_MAC_rx__DepSet_h9e5dbcda__0__Slow \
	Vethernet_rx_xgmii_little_to_big__Slow \
	Vethernet_rx_xgmii_little_to_big__DepSet_h3240e8b3__0__Slow \
	Vethernet_rx_crc32_parallel_64bit__Slow \
	Vethernet_rx_crc32_parallel_64bit__DepSet_h19f18262__0__Slow \
	Vethernet_rx_rx_pkg__Slow \
	Vethernet_rx_rx_pkg__DepSet_h108e706f__0__Slow \
	Vethernet_rx_chksum_tcp_pl__Slow \
	Vethernet_rx_chksum_tcp_pl__DepSet_he9ae9b6b__0__Slow \
	Vethernet_rx_ether_pkg__Slow \
	Vethernet_rx_ether_pkg__DepSet_hc40b5917__0__Slow \
	Vethernet_rx_priority_encoder__W8_Mz1__Slow \
	Vethernet_rx_priority_encoder__W8_Mz1__DepSet_h189badb5__0__Slow \
	Vethernet_rx_priority_encoder__W10_Mz1__Slow \
	Vethernet_rx_priority_encoder__W10_Mz1__DepSet_hf72ee54f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vethernet_rx__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vethernet_rx__Syms \
	Vethernet_rx__Trace__0__Slow \
	Vethernet_rx__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
