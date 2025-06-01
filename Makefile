########################################################################
#  Verilator runner — supports:
#     make <top>.sim    → build & run C++ test-bench
#     make <top>.wav    → build w/ VCD tracing, run, open gtkwave
########################################################################

### -------- directories ------------------------------------------------
INCDIR     := include
SRCDIR     := rtl
TBDIR      := tb
BUILDDIR   := build
########################################################################

### All RTL sources
VFILES     = $(SRCDIR)/$*.sv
### Common Verilator flags
VERI_FLAGS := -Wall -I$(INCDIR)

########################################################################
# PATTERN 1 —  “make foo.sim”
########################################################################
%.sim:
	@echo "==> Building + running sim for top '$*'"
	@mkdir -p $(BUILDDIR)
	verilator $(VERI_FLAGS)                          \
	          --cc $(VFILES)                         \
	          --top-module $*                        \
	          --exe $(TBDIR)/$*_tb.cpp               \
	          --build                                \
	          
	@$(OUT)

########################################################################
# PATTERN 2 —  “make foo.wav”
#   • adds --trace  so Verilator emits VCD support
#   • assumes  $*_tb.cpp  enables VCD dump (see note below)
########################################################################
%.wav:
	@echo "==> Building + tracing '$*' (VCD)"
	@mkdir -p $(BUILDDIR)
	verilator $(VERI_FLAGS) --trace                   \
	          --cc $(VFILES)                          \
	          --top-module $*                         \
	          --exe $(TBDIR)/$*_tb.cpp                \
	          --build                                 \
	          -o $(BUILDDIR)/$*_sim
	@echo "==> Running simulation (produces $(BUILDDIR)/$*.vcd)"
	@$(BUILDDIR)/$*_sim
	@echo "==> Launching GTKWave ..."
	@gtkwave $(BUILDDIR)/$*.vcd &

########################################################################
# House-keeping
########################################################################
.PHONY: clean help
clean:
	rm -rf obj_dir $(BUILDDIR)

help:
	@echo "Usage:"
	@echo "  make <top>.sim   – build & run test-bench"
	@echo "  make <top>.wav   – build w/ trace, run, open gtkwave"
