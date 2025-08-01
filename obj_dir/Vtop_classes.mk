# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

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
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_top__DepSet_h0f993197__0 \
	Vtop_payload_FIFO__DepSet_h13d3c5d8__0 \
	Vtop_TCP__F10__DepSet_he170ba7a__0 \
	Vtop_FIFO_TX__F10__DepSet_h1ea2f4f0__0 \
	Vtop_TCP_ISN__DepSet_hdb9f5fb0__0 \
	Vtop_checksum_TCP__DepSet_hd35c62f6__0 \
	Vtop_TCP_tx__DepSet_h8703877c__0 \
	Vtop_TCP_receiver__DepSet_hf9e0ddc6__0 \
	Vtop_TCP_flow_ctrl__DepSet_h0482535a__0 \
	Vtop_TCP_flow_ctrl__DepSet_h38e16860__0 \
	Vtop_flex_counter__S20__DepSet_h87bf55f6__0 \
	Vtop_priority_encoder__Wa__DepSet_h71cc4d4c__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_top__Slow \
	Vtop_top__DepSet_h0f993197__0__Slow \
	Vtop_top__DepSet_h6315917a__0__Slow \
	Vtop_payload_FIFO__Slow \
	Vtop_payload_FIFO__DepSet_h13d3c5d8__0__Slow \
	Vtop_TCP__F10__Slow \
	Vtop_TCP__F10__DepSet_h5210b812__0__Slow \
	Vtop_TCP__F10__DepSet_he170ba7a__0__Slow \
	Vtop_FIFO_TX__F10__Slow \
	Vtop_FIFO_TX__F10__DepSet_h1ea2f4f0__0__Slow \
	Vtop_TCP_ISN__Slow \
	Vtop_TCP_ISN__DepSet_hdb9f5fb0__0__Slow \
	Vtop_checksum_TCP__Slow \
	Vtop_checksum_TCP__DepSet_hd35c62f6__0__Slow \
	Vtop_TCP_tx__Slow \
	Vtop_TCP_tx__DepSet_h8703877c__0__Slow \
	Vtop_TCP_receiver__Slow \
	Vtop_TCP_receiver__DepSet_hf9e0ddc6__0__Slow \
	Vtop_TCP_flow_ctrl__Slow \
	Vtop_TCP_flow_ctrl__DepSet_h0482535a__0__Slow \
	Vtop_TCP_flow_ctrl__DepSet_h38e16860__0__Slow \
	Vtop_flex_counter__S20__Slow \
	Vtop_flex_counter__S20__DepSet_h87bf55f6__0__Slow \
	Vtop_ether_pkg__Slow \
	Vtop_ether_pkg__DepSet_h3ac9415d__0__Slow \
	Vtop_priority_encoder__Wa__Slow \
	Vtop_priority_encoder__Wa__DepSet_h71cc4d4c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \
	Vtop__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
