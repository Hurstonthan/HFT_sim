// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPAYLOAD_FIFO_H_
#define VERILATED_VPAYLOAD_FIFO_H_  // guard

#include "verilated.h"

class Vpayload_FIFO__Syms;
class Vpayload_FIFO___024root;
class VerilatedFstC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vpayload_FIFO VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vpayload_FIFO__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&nRST,0,0);
    VL_IN8(&nw_segment,0,0);
    VL_IN8(&TCP_flush,0,0);
    VL_IN8(&axis_t_last,0,0);
    VL_IN8(&handshake_done,0,0);
    VL_IN8(&wr_FIFO_en,0,0);
    VL_IN8(&wr_FIFO_offset,7,0);
    VL_OUT8(&wr_ptr_out,2,0);
    VL_OUT8(&wr_FIFO_len,2,0);
    VL_IN8(&rd_FIFO_valid,0,0);
    VL_IN8(&rd_FIFO_ptr,2,0);
    VL_IN8(&rd_FIFO_len,2,0);
    VL_OUT8(&rd_FIFO_en,0,0);
    VL_OUT8(&full,0,0);
    VL_IN8(&axis_r_en,0,0);
    VL_OUT8(&axis_r_valid,0,0);
    VL_IN(&seq_rcv_start,31,0);
    VL_OUT(&seq_rx_FIFO_rd,31,0);
    VL_IN64(&axis_data_rx,63,0);
    VL_OUT64(&axis_rd_data,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vpayload_FIFO___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vpayload_FIFO(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vpayload_FIFO(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vpayload_FIFO();
  private:
    VL_UNCOPYABLE(Vpayload_FIFO);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
