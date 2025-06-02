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


%.sim:
	@echo "==> Building + running sim for top '$*'"
	@mkdir -p $(BUILDDIR)
	verilator $(VERI_FLAGS)                          \
	          --cc $(VFILES)                         \
	          --top-module $*                        \
	          --exe $(TBDIR)/$*_tb.cpp               \
	          --build
	@./obj_dir/V$*        


%.wav:
	@echo "==> Building + tracing '$*' (VCD)"
	@mkdir -p $(BUILDDIR)
	verilator $(VERI_FLAGS) --trace                  \
	          --cc $(VFILES)                         \
	          --top-module $*                        \
	          --exe $(TBDIR)/$*_tb.cpp               \
	          --build
	@./obj_dir/V$*          # <-- actually *run* it
	@echo "==> Launching GTKWave ..."
	@gtkwave $*.vcd &


.PHONY: clean help
clean:
	rm -rf obj_dir $(BUILDDIR)
	rm -f *.vcd

help:
	@echo "Usage:"
	@echo "  make <top>.sim   – build & run test-bench"
	@echo "  make <top>.wav   – build w/ trace, run, open gtkwave"
