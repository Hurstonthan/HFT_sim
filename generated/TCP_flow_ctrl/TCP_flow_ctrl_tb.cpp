
#include "VTCP_flow_ctrl.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "TCP_flow_ctrl_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }
VTCP_flow_ctrl *top = new VTCP_flow_ctrl;
VerilatedFstC *tfp = new VerilatedFstC;

static void tick (VTCP_flow_ctrl *top, VerilatedFstC *tfp) {
    top->eval(); tfp->dump(main_time++);
    top->CLK ^= 1;
    top->eval(); tfp->dump(main_time++);
}



static void sendTxPkt(VTCP_flow_ctrl* top,
                      const std::string& kind,
                      int& bytes_sent)
{
    if (kind == "SYN") {
        top->bytes_abt_sent = 1;
        top->seq_up         = 1;  tick(top, tfp);  top->seq_up = 0;
        bytes_sent         += 1;

    } else if (kind == "ACK") {
        top->seq_up = 1;  tick(top, tfp);  top->seq_up = 0;

    } else if (kind == "FIN") {
        top->seq_up = 1;  tick(top, tfp);  top->seq_up = 0;
        bytes_sent += 1;

    } else if (kind == "DATA") {
        top->bytes_sent     = bytes_sent;
        top->bytes_abt_sent = 16;
        top->seq_up         = 1;   tick(top, tfp);
        bytes_sent         += 16;
        top->seq_up         = 0;

    } else {
        throw std::runtime_error("Unknown TX kind: " + kind);
    }
}

// -----------------------------------------------------------------------------
//  RX-side helpers (drive_rx_data, drive_rx_data_new_segment, drive_rx_ack)
// -----------------------------------------------------------------------------
static void driveRxData(VTCP_flow_ctrl* top, int seq_num, int len)
{
    top->rcv_data       = 1;
    top->TCP_control_rx = 0x10;     // ACK flag
    top->seq_num_rx     = seq_num;
    top->ACK_rx         = 0;
    top->offset_rx      = 5;
    top->window_size_rx = 128;
    top->payload_len_rx = len;

    tick(top, tfp);
    top->rcv_data = 0;
    tick(top, tfp);
}

static void driveRxDataNewSegment(VTCP_flow_ctrl* top,
                                  uint32_t seq_num, int len, bool flush)
{
    top->rcv_data       = 0;
    top->TCP_last       = 0;
    top->TCP_control_rx = 0x10;
    top->seq_num_rx     = seq_num;
    top->ACK_rx         = 0;
    top->offset_rx      = 5;
    top->window_size_rx = 128;
    top->payload_len_rx = len;
    top->TCP_bytes_trk  = 8;

    tick(top, tfp);
    top->nw_segment = 1;
    for (int i = 0; i < len - 1; ++i) tick(top, tfp);

    top->TCP_last = 1;
    tick(top, tfp);

    if (flush) {
        top->TCP_flush  = 1;
        top->nw_segment = 0;
        top->TCP_last   = 0;
    } else {
        top->nw_segment = 0;
        top->TCP_last   = 0;
        top->rcv_data   = 1;
    }

    tick(top, tfp);
    top->TCP_flush = 0;
    top->rcv_data  = 0;
    tick(top, tfp);
}

static void driveRxAck(VTCP_flow_ctrl* top, int ack_num)
{
    top->rcv_data       = 1;
    top->TCP_control_rx = 0x10;
    top->seq_num_rx     = 1;
    top->ACK_rx         = ack_num;
    top->offset_rx      = 5;
    top->window_size_rx = 128;
    top->payload_len_rx = 0;

    tick(top, tfp);
    top->rcv_data = 0;
    tick(top, tfp);
}

// -----------------------------------------------------------------------------
//  Composite handshake sequence
// -----------------------------------------------------------------------------
static void threeWayHandshake(VTCP_flow_ctrl* top)
{
    static int bytes_sent = 0;

    sendTxPkt(top, "SYN", bytes_sent);
    tick(top, tfp);

    top->rcv_data       = 1;
    top->TCP_control_rx = 0x12;       // SYN | ACK
    top->seq_num_rx     = 99;
    top->ACK_rx         = 1;
    top->offset_rx      = 5;
    top->window_size_rx = 64;
    top->payload_len_rx = 0;

    tick(top, tfp);
    top->rcv_data = 0;
    tick(top, tfp);

    sendTxPkt(top, "ACK", bytes_sent);
    tick(top, tfp);
    tick(top, tfp);
}




int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);
    
    top->trace(tfp, 99);
    tfp->open("TCP_flow_ctrl.vcd");

    // Reset phase
    reset_input_TCP_flow_ctrl();
    tick(top, tfp);

    // Example stimulus
    drive_input_TCP_flow_ctrl(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    for (int i = 0; i < 20; ++i) {
        tick(top, tfp);
    }

    // threeWay

    tfp->close();
    delete top;
    return 0;
}
