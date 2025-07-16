// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTCP_FLOW_CTRL_H_
#define VERILATED_VTCP_FLOW_CTRL_H_  // guard

#include "verilated.h"

class VTCP_flow_ctrl__Syms;
class VTCP_flow_ctrl___024root;
class VerilatedFstC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VTCP_flow_ctrl VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTCP_flow_ctrl__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&nRST,0,0);
    VL_IN8(&TCP_control_rx,7,0);
    VL_IN8(&offset_rx,3,0);
    VL_IN8(&rcv_data,0,0);
    VL_OUT8(&TCP_tx_en,0,0);
    VL_OUT8(&seq_up,0,0);
    VL_OUT8(&TCP_control_tx,7,0);
    VL_OUT8(&offset_tx,3,0);
    VL_OUT8(&end_ss,0,0);
    VL_OUT8(&TCP_stop_flg,0,0);
    VL_OUT8(&full,0,0);
    VL_IN8(&timeout_flag,0,0);
    VL_OUT8(&hand_shake_done,0,0);
    VL_IN8(&TCP_last,0,0);
    VL_IN8(&TCP_bytes_trk,7,0);
    VL_OUT8(&wr_FIFO_offset,7,0);
    VL_IN8(&wr_FIFO_len,7,0);
    VL_OUT8(&rd_FIFO_len,7,0);
    VL_OUT8(&wr_FIFO_en,0,0);
    VL_OUT8(&rd_FIFO_en,0,0);
    VL_IN8(&nw_segment,0,0);
    VL_IN8(&TCP_flush,0,0);
    VL_OUT8(&rd_FIFO_valid,0,0);
    VL_IN16(&window_size_rx,15,0);
    VL_IN16(&checksum_rx,15,0);
    VL_IN16(&urgent_pointer_rx,15,0);
    VL_OUT16(&window_size_tx,15,0);
    VL_OUT16(&checksum_tx,15,0);
    VL_OUT16(&urgent_pointer_tx,15,0);
    VL_IN16(&wr_FIFO_ptr,10,0);
    VL_OUT16(&rd_FIFO_ptr,10,0);
    VL_IN(&seq_num_rx,31,0);
    VL_IN(&ACK_rx,31,0);
    VL_OUT(&seq_num_tx,31,0);
    VL_OUT(&ACK_tx,31,0);
    VL_IN(&ISN_num,31,0);
    VL_IN(&bytes_sent,31,0);
    VL_IN(&bytes_abt_sent,31,0);
    VL_IN(&payload_len_rx,31,0);
    VL_OUT(&rcv_next_out,31,0);
    VL_OUT(&seq_num_out,31,0);
    VL_IN(&seq_rx_FIFO_rd,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTCP_flow_ctrl___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTCP_flow_ctrl(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTCP_flow_ctrl(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTCP_flow_ctrl();
  private:
    VL_UNCOPYABLE(VTCP_flow_ctrl);  ///< Copying not allowed

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
