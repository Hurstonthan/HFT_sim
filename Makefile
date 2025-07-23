########################################################################
# Verilator runner
#   make <top>.sim   → build & run
#   make <top>.wav   → build, run, open gtkwave (.fst)
########################################################################

# ---------- directories -------------------------------------------------
RTL_DIR       := $(strip rtl)
GEN_DIR_BASE  := $(strip generated)
INC_DIR       := $(strip include)
WAVE_CONFIGS_DIR    := $(strip wave_configs)
# ---------- extra RTL ---------------------------------------------------
SUR_FILES     := 

# ---------- verilator flags --------------------------------------------
VERI_FLAGS := \
	-Wno-lint \
	--error-limit 0 \
	--trace \
	--trace-fst \
	--debug \
	-I$(INC_DIR) \
	-I$(RTL_DIR) \
	-CFLAGS "-I$(RTL_DIR) -I$(INC_DIR) -O0 -g"

# ---------- derived file lists -----------------------------------------
VFILES = $(RTL_DIR)/$*.sv
TB_CPP = $(GEN_DIR_BASE)/$*/$*_tb.cpp
DRIVE_CPP = $(GEN_DIR_BASE)/$*/$*_input.cpp
MODULE_NAME := V$(subst -,_,$*) 

# ---------- build & run (no waveform) ----------------------------------
%.sim:
	@echo "==> Building + running sim for '$*'"
	verilator $(VERI_FLAGS) \
	          --cc $(VFILES) \
	          --top-module $* \
	          --exe $(TB_CPP) $(DRIVE_CPP) \
	          --build
	
	@echo "==> Generated files in obj_dir:"
	@ls -l obj_dir
	
	@echo "==> Simulation output:"
	@if [ -f ./obj_dir/$(MODULE_NAME) ]; then \
	    ./obj_dir/$(MODULE_NAME) 2>&1 | tee simulation.log; \
	else \
	    echo "Error: Executable not found! Trying alternative names..."; \
	    if [ -f ./obj_dir/V$* ]; then \
	        ./obj_dir/V$* 2>&1 | tee simulation.log; \
	    elif [ -f ./obj_dir/V$(subst -,_,$*) ]; then \
	        ./obj_dir/V$(subst -,_,$*) 2>&1 | tee simulation.log; \
	    else \
	        echo "No executable found in obj_dir:"; \
	        ls -l obj_dir; \
	        exit 1; \
	    fi \
	fi

# ---------- build, run, then gtkwave -----------------------------------
%.wav: %.sim
	@echo "==> Opening GTKWave ..."
	@if [ -f "$(WAVE_CONFIGS_DIR)/$*.gtkw" ]; then \
		gtkwave $*.fst $(WAVE_CONFIGS_DIR)/$*.gtkw & \
	elif [ -f "$*.gtkw" ]; then \
		gtkwave $*.fst $*.gtkw & \
	else \
		echo "No saved configuration found"; \
		gtkwave $*.fst & \
	fi
# ---------- housekeeping ------------------------------------------------
.PHONY: clean
clean:
	rm -rf obj_dir *.vcd *.fst *.log

.PHONY: help
help:
	@echo "make <top>.sim  – build & run test-bench"
	@echo "make <top>.wav  – build, run, open gtkwave"
	@echo "make view-log   – view simulation log"

view-log:
	@less simulation.log

