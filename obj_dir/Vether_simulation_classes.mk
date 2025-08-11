# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vether_simulation.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
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
	Vether_simulation \
	Vether_simulation___024root__DepSet_hd74ae6e3__0 \
	Vether_simulation___024root__DepSet_h5d670bf5__0 \
	Vether_simulation_ether_simulation__DepSet_haa43c7ae__0 \
	Vether_simulation_top__DepSet_h57302abe__0 \
	Vether_simulation_top__CBz1__DepSet_h68691775__0 \
	Vether_simulation_payload_FIFO__DepSet_h3bdc1b8d__0 \
	Vether_simulation_IP_rx__DepSet_h2f6024e8__0 \
	Vether_simulation_IP_rx__DepSet_h1410990e__0 \
	Vether_simulation_MAC_rx__DepSet_ha45d6eab__0 \
	Vether_simulation_MAC_rx__DepSet_h6676c913__0 \
	Vether_simulation_MAC_rx__DepSet_h8003d5d7__0 \
	Vether_simulation_MAC_rx__DepSet_h8b4a7593__0 \
	Vether_simulation_MAC_rx__DepSet_hc2174341__0 \
	Vether_simulation_MAC_rx__DepSet_hd2402f3b__0 \
	Vether_simulation_MAC_rx__DepSet_h4246af9f__0 \
	Vether_simulation_MAC_tx__DepSet_hf8dbeba5__0 \
	Vether_simulation_MAC_tx__DepSet_hc3f9b1e2__0 \
	Vether_simulation_IP_tx__DepSet_h7a3f6df1__0 \
	Vether_simulation_TCP__F10_CBz1__DepSet_h9289ac79__0 \
	Vether_simulation_FIFO_TX__F10__DepSet_h59efce85__0 \
	Vether_simulation_TCP__F10_CBz2__DepSet_h6f0e110e__0 \
	Vether_simulation_checksum_TCP__DepSet_ha9be9047__0 \
	Vether_simulation_TCP_tx__DepSet_h721fcaf8__0 \
	Vether_simulation_TCP_receiver__DepSet_h3c07625d__0 \
	Vether_simulation_TCP_flow_ctrl__DepSet_h2581a038__0 \
	Vether_simulation_TCP_flow_ctrl__DepSet_h30639c55__0 \
	Vether_simulation_TCP_flow_ctrl__DepSet_hc1e4f6f7__0 \
	Vether_simulation_xgmii_little_to_big__DepSet_he3ebb512__0 \
	Vether_simulation_crc32_parallel_64bit__DepSet_hc5f0761e__0 \
	Vether_simulation_crc32_parallel_64bit__DepSet_hc5f0761e__1 \
	Vether_simulation_crc32_parallel_64bit__DepSet_hc5f0761e__2 \
	Vether_simulation_crc32_parallel_64bit__DepSet_hc5f0761e__3 \
	Vether_simulation_chksum_tcp_pl__DepSet_h578f7aac__0 \
	Vether_simulation_TCP_ISN__Cz1__DepSet_hc0c464f5__0 \
	Vether_simulation_TCP_ISN__Cz2__DepSet_hf1581b50__0 \
	Vether_simulation_priority_encoder__W8_Mz2__DepSet_h53ed34ae__0 \
	Vether_simulation_priority_encoder__W10_Mz2__DepSet_haae75f16__0 \
	Vether_simulation_flex_counter__S20__DepSet_h5dc93be7__0 \
	Vether_simulation_flex_counter__S9__DepSet_hac19c65f__0 \
	Vether_simulation_priority_encoder__Wa__DepSet_h7a9ce0c1__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vether_simulation__ConstPool_0 \
	Vether_simulation___024root__Slow \
	Vether_simulation___024root__DepSet_hd74ae6e3__0__Slow \
	Vether_simulation___024root__DepSet_h5d670bf5__0__Slow \
	Vether_simulation_ether_simulation__Slow \
	Vether_simulation_ether_simulation__DepSet_haa43c7ae__0__Slow \
	Vether_simulation_ether_simulation__DepSet_hd85fecb0__0__Slow \
	Vether_simulation_top__Slow \
	Vether_simulation_top__DepSet_h57302abe__0__Slow \
	Vether_simulation_top__DepSet_hddd0d7a0__0__Slow \
	Vether_simulation_top__CBz1__Slow \
	Vether_simulation_top__CBz1__DepSet_h68691775__0__Slow \
	Vether_simulation_top__CBz1__DepSet_h1689bc67__0__Slow \
	Vether_simulation_payload_FIFO__Slow \
	Vether_simulation_payload_FIFO__DepSet_h3bdc1b8d__0__Slow \
	Vether_simulation_IP_rx__Slow \
	Vether_simulation_IP_rx__DepSet_h2f6024e8__0__Slow \
	Vether_simulation_IP_rx__DepSet_h1410990e__0__Slow \
	Vether_simulation_MAC_rx__Slow \
	Vether_simulation_MAC_rx__DepSet_hd1ed130b__0__Slow \
	Vether_simulation_MAC_rx__DepSet_ha45d6eab__0__Slow \
	Vether_simulation_MAC_rx__DepSet_h8003d5d7__0__Slow \
	Vether_simulation_MAC_rx__DepSet_hc2174341__0__Slow \
	Vether_simulation_MAC_tx__Slow \
	Vether_simulation_MAC_tx__DepSet_hf8dbeba5__0__Slow \
	Vether_simulation_MAC_tx__DepSet_hc3f9b1e2__0__Slow \
	Vether_simulation_IP_tx__Slow \
	Vether_simulation_IP_tx__DepSet_h7a3f6df1__0__Slow \
	Vether_simulation_TCP__F10_CBz1__Slow \
	Vether_simulation_TCP__F10_CBz1__DepSet_h10a70a81__0__Slow \
	Vether_simulation_TCP__F10_CBz1__DepSet_h9289ac79__0__Slow \
	Vether_simulation_FIFO_TX__F10__Slow \
	Vether_simulation_FIFO_TX__F10__DepSet_h59efce85__0__Slow \
	Vether_simulation_TCP__F10_CBz2__Slow \
	Vether_simulation_TCP__F10_CBz2__DepSet_hb94eab2d__0__Slow \
	Vether_simulation_TCP__F10_CBz2__DepSet_h6f0e110e__0__Slow \
	Vether_simulation_checksum_TCP__Slow \
	Vether_simulation_checksum_TCP__DepSet_ha9be9047__0__Slow \
	Vether_simulation_TCP_tx__Slow \
	Vether_simulation_TCP_tx__DepSet_h721fcaf8__0__Slow \
	Vether_simulation_TCP_receiver__Slow \
	Vether_simulation_TCP_receiver__DepSet_h3c07625d__0__Slow \
	Vether_simulation_TCP_flow_ctrl__Slow \
	Vether_simulation_TCP_flow_ctrl__DepSet_h2581a038__0__Slow \
	Vether_simulation_TCP_flow_ctrl__DepSet_h30639c55__0__Slow \
	Vether_simulation_TCP_flow_ctrl__DepSet_hafff4143__0__Slow \
	Vether_simulation_xgmii_little_to_big__Slow \
	Vether_simulation_xgmii_little_to_big__DepSet_he3ebb512__0__Slow \
	Vether_simulation_crc32_parallel_64bit__Slow \
	Vether_simulation_crc32_parallel_64bit__DepSet_hc5f0761e__0__Slow \
	Vether_simulation_crc32_parallel_64bit__DepSet_hc5f0761e__1__Slow \
	Vether_simulation_rx_pkg__Slow \
	Vether_simulation_rx_pkg__DepSet_h776a6d10__0__Slow \
	Vether_simulation_chksum_tcp_pl__Slow \
	Vether_simulation_chksum_tcp_pl__DepSet_h578f7aac__0__Slow \
	Vether_simulation_TCP_ISN__Cz1__Slow \
	Vether_simulation_TCP_ISN__Cz1__DepSet_hc0c464f5__0__Slow \
	Vether_simulation_TCP_ISN__Cz2__Slow \
	Vether_simulation_TCP_ISN__Cz2__DepSet_hf1581b50__0__Slow \
	Vether_simulation_ether_pkg__Slow \
	Vether_simulation_ether_pkg__DepSet_hf72b3c04__0__Slow \
	Vether_simulation_priority_encoder__W8_Mz2__Slow \
	Vether_simulation_priority_encoder__W8_Mz2__DepSet_h53ed34ae__0__Slow \
	Vether_simulation_priority_encoder__W10_Mz2__Slow \
	Vether_simulation_priority_encoder__W10_Mz2__DepSet_haae75f16__0__Slow \
	Vether_simulation_flex_counter__S20__Slow \
	Vether_simulation_flex_counter__S20__DepSet_h5dc93be7__0__Slow \
	Vether_simulation_flex_counter__S9__Slow \
	Vether_simulation_flex_counter__S9__DepSet_hac19c65f__0__Slow \
	Vether_simulation_priority_encoder__Wa__Slow \
	Vether_simulation_priority_encoder__Wa__DepSet_h7a9ce0c1__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vether_simulation__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vether_simulation__Syms \
	Vether_simulation__Trace__0__Slow \
	Vether_simulation__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
