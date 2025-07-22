#include <verilated.h>
#include <verilated_fst_c.h>

#include "VTCP.h"
#include "VFIFO_TX.h"
#include "Vpayload_FIFO.h"

#include "TCP_input.hpp"
#include "FIFO_TX_input.hpp"
#include "payload_FIFO_input.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

/* -------------------------------------------------------------------------- */
/* Global simulation time                                                     */
/* -------------------------------------------------------------------------- */
static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

/* -------------------------------------------------------------------------- */
/* Verilated DUT instances                                                    */
/* -------------------------------------------------------------------------- */
VTCP          *TCP           = new VTCP;
VFIFO_TX      *FIFO_TX       = new VFIFO_TX;
Vpayload_FIFO *payload_FIFO  = new Vpayload_FIFO;

/* -------------------------------------------------------------------------- */
/* FST trace handles — needed in tick_all(), so keep them at file scope       */
/* -------------------------------------------------------------------------- */
static VerilatedFstC *tfp_TCP          = nullptr;
static VerilatedFstC *tfp_FIFO_TX      = nullptr;
static VerilatedFstC *tfp_payload_FIFO = nullptr;

/* -------------------------------------------------------------------------- */
/* One tick for **all** models — posedge + negedge                            */
/* -------------------------------------------------------------------------- */
static void tick_all() {
    /* posedge */
    TCP->eval();          tfp_TCP->dump(main_time);
    FIFO_TX->eval();      tfp_FIFO_TX->dump(main_time);
    payload_FIFO->eval(); tfp_payload_FIFO->dump(main_time);

    TCP->CLK ^= 1;
    FIFO_TX->CLK ^= 1;
    payload_FIFO->CLK ^= 1;

    /* negedge */
    TCP->eval();          tfp_TCP->dump(main_time);
    FIFO_TX->eval();      tfp_FIFO_TX->dump(main_time);
    payload_FIFO->eval(); tfp_payload_FIFO->dump(main_time);

    ++main_time;
}

/* -------------------------------------------------------------------------- */
/* Main test-bench                                                            */
/* -------------------------------------------------------------------------- */
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    /* --------------------- create & open FST traces ----------------------- */
    tfp_TCP          = new VerilatedFstC;
    tfp_FIFO_TX      = new VerilatedFstC;
    tfp_payload_FIFO = new VerilatedFstC;

    TCP->trace(         tfp_TCP,          99); tfp_TCP->open("TCP.fst");
    FIFO_TX->trace(     tfp_FIFO_TX,      99); tfp_FIFO_TX->open("FIFO_TX.fst");
    payload_FIFO->trace(tfp_payload_FIFO, 99); tfp_payload_FIFO->open("payload_FIFO.fst");

    /* --------------------- example header-building code ------------------- */
    const uint32_t ISN_seq_rx = 0x0000'0000;
    uint32_t seq_num_rx       = ISN_seq_rx;
    uint32_t ACK_num_rx       = 0;

    uint16_t seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    uint16_t seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    uint16_t window_size_rx   = 0x0000;
    uint16_t checksum_rx      = 0x0000;
    uint16_t urgent_pointer_rx= 0x0000;
    uint8_t  TCP_control_rx   = 0x00;

    struct IP_rx_in {
        const char              *name;
        std::vector<uint64_t>    payload;
    };

    std::vector<IP_rx_in> TCP_header = {
        { "48-bit src/dst ports + MSB seq",
            { 0x12345678ULL, seq_num_MSB } },

        { "64-bit LSB seq, ACK, hdrLen, ctrl",
            { seq_num_LSB, ACK_num_rx, 0x50ULL, TCP_control_rx } },

        { "64-bit window, checksum, urgPtr, padding",
            { window_size_rx, checksum_rx, urgent_pointer_rx, 0ULL } }
    };

    /* --------------------- reset phase ----------------------------------- */
    reset_input_TCP();
    reset_input_FIFO_TX();
    reset_input_payload_FIFO();
    tick_all();

    /* --------------------- trivial stimulus ------------------------------ */
    drive_input_TCP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    drive_input_FIFO_TX(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    drive_input_payload_FIFO(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    for (int i = 0; i < 20; ++i)
        tick_all();

    /* --------------------- clean-up -------------------------------------- */
    tfp_TCP->close();           delete tfp_TCP;           delete TCP;
    tfp_FIFO_TX->close();       delete tfp_FIFO_TX;       delete FIFO_TX;
    tfp_payload_FIFO->close();  delete tfp_payload_FIFO;  delete payload_FIFO;

    return 0;
}
