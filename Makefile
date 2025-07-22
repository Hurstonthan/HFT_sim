########################################################################
# Verilator runner
#   make <top>.sim   → build & run
#   make <top>.wav   → build, run, open gtkwave (.fst)
########################################################################

# ---------- directories -------------------------------------------------
RTL_DIR       := $(strip rtl)
GEN_DIR_BASE  := $(strip generated)
INC_DIR       := $(strip include)

# ---------- extra RTL ---------------------------------------------------
SUR_FILES     := priority_encoder TCP_ISN checksum_TCP TCP_tx TCP_receiver TCP_flow_ctrl FIFO_TX payload_FIFO TCP  # add more, space-separated

# ---------- verilator flags --------------------------------------------
#-Wall -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL
VERI_FLAGS := \
	-Wno-lint --error-limit 0 \
	--trace \
	--trace-fst \
	--trace-structs \
	-I$(INC_DIR) \
	-CFLAGS "-I$(RTL_DIR)"

# ---------- derived file lists -----------------------------------------
#   $* is the target stem (e.g. priority_encoder)
VFILES = $(RTL_DIR)/$*.sv $(addprefix $(RTL_DIR)/,$(SUR_FILES:=.sv))
# VFILES = $(RTL_DIR)/$*.sv
TB_CPP = $(GEN_DIR_BASE)/$*/$*_tb.cpp
DRIVE_CPP = $(GEN_DIR_BASE)/$*/$*_input.cpp

# ---------- build & run (no waveform) ----------------------------------
%.sim:
	@echo "==> Building + running sim for '$*'"
	verilator $(VERI_FLAGS)                       \
	          --cc $(VFILES)                      \
	          --top-module $*  \
	          --exe $(TB_CPP) $(DRIVE_CPP)        \
	          --build
	@./obj_dir/V$*

# ---------- build, run, then gtkwave -----------------------------------
%.wav: %.sim
	@echo "==> Opening GTKWave ..."
	@gtkwave $*.vcd $*.gtkw

# ---------- housekeeping ------------------------------------------------
.PHONY: clean
clean:
	rm -rf obj_dir *.vcd *.fst

.PHONY: help
help:
	@echo "make <top>.sim  – build & run test-bench"
	@echo "make <top>.wav  – build, run, open gtkwave"


# ########################################################################
# #  Verilator runner — supports:
# #     make <top>.sim    → build & run C++ test-bench
# #     make <top>.wav    → build w/ VCD tracing, run, open gtkwave
# ########################################################################

# ### -------- directories ------------------------------------------------
# INCDIR     := include
# SRCDIR     := rtl
# TBDIR      := tb
# BUILDDIR   := build
# SUBFOLD	   := sub_mod
# SUR_FILES  := TCP_flow_ctrl

# ########################################################################


# ### All RTL sources
# VFILES     = $(SRCDIR)/$*.sv $(SRCDIR)/$(SUR_FILES).sv $(SRCDIR)/priority_encoder.sv
# #VSUBs = $(wildcard $(SRCDIR)/$(SUBFOLD)/*.sv)
# ### Common Verilator flags
# VERI_FLAGS := -Wall -I$(INCDIR) -CFLAGS "-Irtl" -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL 


# %.sim:
# 	@echo "==> Building + running sim for top '$*'"
# 	@mkdir -p $(BUILDDIR)
# 	verilator $(VERI_FLAGS) --trace-fst                  \
# 	          --cc $(VFILES)                         \
# 	          --top-module $*                        \
# 	          --exe $(TBDIR)/$*_tb.cpp               \
# 	          --build
# 	@./obj_dir/V$*        


# %.wav:
# 	@echo "==> Building + tracing '$*' (VCD)"
# 	@mkdir -p $(BUILDDIR)
# 	verilator $(VERI_FLAGS) --trace-fst                  \
# 	          --cc $(VFILES)                         \
# 	          --top-module $*                        \
# 	          --exe $(TBDIR)/$*_tb.cpp               \
# 	          --build
			  
			  
# 	@./obj_dir/V$*          # <-- actually *run* it
# 	@echo "==> Launching GTKWave ..."
# 	@gtkwave $*.vcd $*.gtkw &


# .PHONY: clean help
# clean:
# 	rm -rf obj_dir $(BUILDDIR)
# 	rm -f *.vcd

# help:
# 	@echo "Usage:"
# 	@echo "  make <top>.sim   – build & run test-bench"
# 	@echo "  make <top>.wav   – build w/ trace, run, open gtkwave"
