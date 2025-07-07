`include "ether_pkg.vh"

module payload_FIFO #(
    parameter int FIFO_DEPTH  = 2048,               // words  (must be power‑of‑2)
    parameter int DATA_WIDTH  = 64,
    localparam int WORD_BYTES = DATA_WIDTH / 8,
    localparam int FIFO_WIDTH = $clog2(FIFO_DEPTH),
    localparam int WINDOW_BYTES = FIFO_DEPTH * WORD_BYTES
)(
    // Clock & reset
    input  logic                             CLK,
    input  logic                             nRST,

    // Segment arrival side -------------------------------------------------
    input  logic [1:0]                       nw_segment,   // from ether_pkg  (IDLE, DONE, FLUSH, DATA)
    input  logic                             TCP_flush,    // async flush on MAC CRC or RST
    input  logic                             hand_shake_done,
    input  logic [DATA_WIDTH-1:0]            TCP_payload,  // 1 word / cycle
    input  logic [31:0]                      seq_rcv,      // sequence # of first byte of this word
    input  logic [31:0]                      payload_len,  // valid byte count in this word (1‑8)
    input  logic [31:0]                      seq_rcv_handshake,

    // Application / upper‑layer side ---------------------------------------
    input  logic                             rd_en,        // app requests next word
    input  logic [31:0]                      rcv_nxt,      // cumulative ACK pointer from TCP ctrl

    // Outputs ---------------------------------------------------------------
    output logic [DATA_WIDTH-1:0]            TCP_data_out,
    output logic                             valid_rd,     // asserted with TCP_data_out
    output logic [31:0]                      bytes_buff,
    output logic                             full
);

    import ether_pkg::*;

    typedef struct packed {
        logic [DATA_WIDTH - 1 : 0] payload;
        logic [7:0] vmask;
    } fifo_entry_t;

    fifo_entry_t TCP_FIFO_even[FIFO_DEPTH / 2];
    fifo_entry_t nTCP_FIFO_even[FIFO_DEPTH / 2];

    fifo_entry_t TCP_FIFO_odd[FIFO_DEPTH / 2];
    fifo_entry_t nTCP_FIFO_odd[FIFO_DEPTH / 2];

    logic [31:0] rcv_base, nrcv_base; //the start point of readind
    logic [31:0] n_bytes_buff;

    logic [(DATA_WIDTH * 8) - 1:0] rd_payload;
    logic [(FIFO_WIDTH - 1) : 0] rd_ptr;
    logic [31:0] payload_len_flsh, npayload_len_flsh;
    logic flush_flag, flush_done;
    logic in_window, flush_clear;
    logic signed [31:0] seq_delta;
    logic [31:0] wr_addr, nwr_addr;
    logic [31:0] wdow_rcv;
    logic [$clog2(FIFO_DEPTH)-1:0] wrt_ptr, nwr_ptr;
    logic [$clog2(FIFO_DEPTH)-1:0] flush_ptr,flush_ptr_str, flush_ptr_end, nflush_ptr_str, nflush_ptr_end;


    // merge unaligned bytes ----------------------------------
    logic [2:0] lane;
    logic [31 -3 :0] r_index, rd_mask, nrd_mask;
    logic [2:0] bytes_here;
    logic [15:0] mask_new;
    logic [15:0] mask_frame_curr; //This will store mask frame of seq_rcv and seq_rcv + 1
    logic [15:0] mask_store;

    
    assign lane = seq_rcv[2:0];
    assign r_index = seq_rcv[31:3];
    assign bytes_here = 15 - lane;
    assign mask_new = ((15'h1 << bytes_here) - 1) << lane;
    assign mask_frame_curr = rd_mask[0] ? {TCP_FIFO_odd[rd_mask].vmask, TCP_FIFO_even[rd_mask + 1].vmask} : {TCP_FIFO_even[rd_mask].vmask, TCP_FIFO_odd[rd_mask + 1].vmask};
    assign mask_store = mask_new & ~mask_frame_curr;


    assign full  = (bytes_buff >= WINDOW_BYTES);
    assign empty = (bytes_buff == 0);

    assign seq_delta = seq_rcv - rcv_base;
    assign wdow_rcv = rcv_base + WINDOW_BYTES - 1;
    assign in_window = (seq_rcv < wdow_rcv);
    assign rd_ptr = (rcv_base >> 3) & (FIFO_DEPTH-1);
    assign wrt_ptr = (wr_addr >> 3) & (FIFO_DEPTH-1);
    assign rd_payload = TCP_FIFO[rd_ptr].payload;


    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            rd_mask <= 0;
        end else begin
            rd_mask <= nrd_mask;
        end
    end

    always_comb begin
        nrd_mask = seq_rcv[2:0];
        if (nw_segment == DATA) begin
            nrd_mask = rd_mask + 1;
        end
    end





endmodule