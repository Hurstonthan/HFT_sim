// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VETHER_TX_H_
#define VERILATED_VETHER_TX_H_  // guard

#include "verilated.h"

class Vether_TX__Syms;
class Vether_TX___024root;
class VerilatedFstC;
class Vether_TX_TCP_flow_if;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vether_TX VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vether_TX__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&nRST,0,0);
    VL_IN8(&rcv_data,0,0);
    VL_IN8(&timeout_flag,0,0);
    VL_IN8(&TCP_control_rx,7,0);
    VL_IN8(&offset_rx,3,0);
    VL_IN8(&SYN_sent,0,0);
    VL_IN8(&ACK_sent,0,0);
    VL_IN8(&FIN_sent,0,0);
    VL_IN8(&end_ss,0,0);
    VL_IN8(&seq_up,0,0);
    VL_OUT8(&TCP_stop_flg,0,0);
    VL_OUT8(&TCP_control_tx,7,0);
    VL_OUT8(&offset_tx,3,0);
    VL_IN16(&window_size_rx,15,0);
    VL_IN16(&checksum_rx,15,0);
    VL_IN16(&urgent_pointer_rx,15,0);
    VL_OUT16(&window_size_tx,15,0);
    VL_OUT16(&checksum_tx,15,0);
    VL_OUT16(&urgent_pointer_tx,15,0);
    VL_IN(&seq_num_rx,31,0);
    VL_IN(&ACK_rx,31,0);
    VL_IN(&payload_len_rx,31,0);
    VL_IN(&ISN_num,31,0);
    VL_IN(&bytes_sent,31,0);
    VL_IN(&bytes_abt_sent,31,0);
    VL_OUT(&TCP_len_data,31,0);
    VL_OUT(&seq_num_tx,31,0);
    VL_OUT(&ACK_tx,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vether_TX_TCP_flow_if* const __PVT__ether_TX__DOT__my_TCP;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vether_TX___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vether_TX(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vether_TX(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vether_TX();
  private:
    VL_UNCOPYABLE(Vether_TX);  ///< Copying not allowed

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
