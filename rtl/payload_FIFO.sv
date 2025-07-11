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
    // input  logic [31:0]                      seq_rcv_handshake,
    input logic [31:0] ISN_num_rcv,

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
    // assign rd_payload = TCP_FIFO[rd_ptr].payload;


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



// // tcp_payload_fifo.sv  – Out‑of‑order‑capable TCP payload buffer for FPGA
// // ---------------------------------------------------------------------
// //  *   64‑bit datapath (8‑byte granularity)
// //  *   Circular store covering one advertised window (FIFO_DEPTH words)
// //  *   Per‑word valid bit – duplicates filtered automatically
// //  *   Range guard protects against alias when masked
// //  *   Read pointer is derived from rcv_base (>> 3)
// //  *   Handles simultaneous RX‑write and APP‑read in one cycle
// //  *   Supports flush on CRC/RST and handshake reset to ISN
// //  *   Unaligned payloads merged with byte‑enable mask
// // ---------------------------------------------------------------------

// `include "ether_pkg.vh"

// module payload_FIFO #(
//     parameter int FIFO_DEPTH  = 16_384,               // words  (must be power‑of‑2)
//     parameter int DATA_WIDTH  = 64,
//     localparam int WORD_BYTES = DATA_WIDTH / 8,
//     localparam int FIFO_WIDTH = $clog2(FIFO_DEPTH),
//     localparam int WINDOW_BYTES = FIFO_DEPTH * WORD_BYTES
// )(
//     // Clock & reset
//     input  logic                             CLK,
//     input  logic                             nRST,

//     // Segment arrival side -------------------------------------------------
//     input  logic [1:0]                       nw_segment,   // from ether_pkg  (IDLE, DONE, FLUSH, DATA)
//     input  logic                             TCP_flush,    // async flush on MAC CRC or RST
//     input  logic                             hand_shake_done,
//     input  logic [DATA_WIDTH-1:0]            TCP_payload,  // 1 word / cycle
//     input  logic [31:0]                      seq_rcv,      // sequence # of first byte of this word
//     input  logic [31:0]                      payload_len,  // valid byte count in this word (1‑8)
//     input  logic [31:0]                      ISN_num_rcv,

//     // Application / upper‑layer side ---------------------------------------
//     input  logic                             rd_en,        // app requests next word
//     input  logic [31:0]                      rcv_nxt,      // cumulative ACK pointer from TCP ctrl

//     // Outputs ---------------------------------------------------------------
//     output logic [DATA_WIDTH-1:0]            TCP_data_out,
//     output logic                             valid_rd,     // asserted with TCP_data_out
//     output logic [31:0]                      bytes_buff,
//     output logic                             full
// );

//     import ether_pkg::*;                    // brings in nw_segment_t enum

//     // ------------------------------------------------------------------
//     // Internal types / memories
//     // ------------------------------------------------------------------
//     typedef struct packed {
//         logic [DATA_WIDTH-1:0] payload;
//         logic                  valid;
//     } fifo_entry_t;

//     fifo_entry_t TCP_FIFO [FIFO_DEPTH];     // dual‑port BRAM style
//     fifo_entry_t nTCP_FIFO [FIFO_DEPTH];

//     // ------------------------------------------------------------------
//     // State registers
//     // ------------------------------------------------------------------
//     logic [31:0]               rcv_base, n_rcv_base;         // first byte not yet exposed to app
    
//     logic [31:0]               n_bytes_buff;

//     // convenience wires
//     logic [DATA_WIDTH-1:0]     rd_payload;
//     logic [FIFO_WIDTH-1:0]     rd_ptr;

//     // merge unaligned bytes ----------------------------------
//     logic [DATA_WIDTH-1:0] merged;
//     logic [DATA_WIDTH-1:0] mask;
//     logic [2:0] byte_off, nbytes;
//     logic flush_flag, flush_done;

//     assign byte_off = seq_rcv[2:0]; // byte offset in word (0..7)
//     assign nbytes  = (payload_len==0) ? 3'd8 : payload_len[2:0];

//     // ------------------------------------------------------------------
//     // Combinational helpers
//     // ------------------------------------------------------------------
//     // Signed distance from window base (handles wrap‑around)
//     logic signed [31:0]        seq_delta;
//     logic [31:0] wr_addr, nwr_addr;
//     logic [31:0] wdow_rcv;
//     logic [$clog2(FIFO_DEPTH)-1:0] wrt_ptr, nwr_ptr;
//     logic [$clog2(FIFO_DEPTH)-1:0] flush_ptr,flush_ptr_str, flush_ptr_end, nflush_ptr_str, nflush_ptr_end;
//     logic [31:0] payload_len_flsh, npayload_len_flsh;
//     logic in_window;
//     logic flush_clear;



//     assign seq_delta = wr_addr - rcv_base; // signed distance from window base
//     assign wdow_rcv = rcv_base + WINDOW_BYTES - 1; // inclusive end of window
//     assign in_window = (wr_addr < wdow_rcv);
//     // Read pointer is pure function of rcv_base (>> 3)
//     // assign rd_ptr = (rcv_base >> 3) & (FIFO_DEPTH-1);
//     // assign wrt_ptr = (wr_addr >> 3) & (FIFO_DEPTH-1);

//     assign rd_ptr = (rcv_base >> 3) & (FIFO_DEPTH-1);
//     assign wrt_ptr = (wr_addr >> 3) & (FIFO_DEPTH-1);
//     assign rd_payload = TCP_FIFO[rd_ptr].payload;



//     // Empty / full flags *after* this cycle’s updates
//     logic empty;
//     assign full  = (bytes_buff >= WINDOW_BYTES);
//     assign empty = (bytes_buff == 0);

//     flex_counter  #(.SIZE(FIFO_WIDTH)) flush_counter (
//         .CLK(CLK),
//         .nRST(nRST),
//         .clear(flush_clear),
//         .initial_val(flush_ptr_str),

//         //.initial_val(((seq_rcv - rcv_base) >> 3) & (FIFO_DEPTH-1)),
//         .count_enable(flush_flag),
//         .rollover_val(flush_ptr_end),
//         .count_out(flush_ptr),
//         .rollover_flag(flush_done)
//     );

//     // ------------------------------------------------------------------
//     // Sequential block – update state
//     // ------------------------------------------------------------------
//     always_ff @(posedge CLK or negedge nRST) begin
//         if (!nRST) begin
//             // async reset ------------------------------------------------
//             for (int i=0; i<FIFO_DEPTH; i++) begin
//                 TCP_FIFO[i].valid <= 1'b0;
//                 TCP_FIFO[i].payload <= '0;
//             end
//             rcv_base    <= '0;
//             bytes_buff  <= '0;
//             wr_addr   <= '0;
//             flush_flag <= 1'b0;
//             flush_ptr_str <= '0;
//             flush_ptr_end <= '0;
//             valid_rd <= 1'b0;
//             TCP_data_out <= '0;
//             payload_len_flsh <= '0;
//             flush_clear <= 0;
//         end else begin
//             // defaults (may be overwritten below)
//             rcv_base   <= n_rcv_base;
//             bytes_buff <= n_bytes_buff;
//             wr_addr    <= nwr_addr;
//             payload_len_flsh <= npayload_len_flsh;
//             flush_clear <= TCP_flush || nw_segment_t'(nw_segment)==FLUSH;
            
//             //-----------------------------------------------------------------
//             // Segment write path
//             //-----------------------------------------------------------------

//             if (nw_segment_t'(nw_segment) == DATA && in_window && !TCP_FIFO[wrt_ptr].valid && !full) begin
//                 TCP_FIFO[wrt_ptr].payload <= TCP_payload;
//                 TCP_FIFO[wrt_ptr].valid   <= 1'b1;
//             end else begin

//             end

//             //-----------------------------------------------------------------
//             // Read path – give data to application when rd_en & word valid
//             //-----------------------------------------------------------------

//             if (rd_en && TCP_FIFO[rd_ptr].valid) begin
//                 valid_rd <= 1'b1;
//                 TCP_data_out <= rd_payload;
//                 TCP_FIFO[rd_ptr].valid <= 1'b0;          // free the slot
//             end else begin
//                 valid_rd <= 1'b0;
//                 TCP_data_out <= '0;
//             end

//             //-----------------------------------------------------------------
//             // Handshake reset (ISN) – one‑shot when SYN/ACK completes
//             //-----------------------------------------------------------------
//             if (hand_shake_done) begin
//                 for (int i=0;i<FIFO_DEPTH;i++) begin
//                     TCP_FIFO[i].valid <= 1'b0;
//                 end
//             end

//             //-----------------------------------------------------------------
//             // Flush on MAC CRC error or TCP RST
//             //-----------------------------------------------------------------
//             flush_ptr_str <= nflush_ptr_str; // start of flush range
//             flush_ptr_end <= nflush_ptr_end; // end of flush range (inclusive)
//             if (TCP_flush || nw_segment_t'(nw_segment)== FLUSH) begin
//                 flush_flag <= 1'b1; // set flush flag
//             end else if (flush_done) begin
//                 flush_flag <= 1'b0;
//             end
//             if (flush_flag) begin
//                 TCP_FIFO[flush_ptr].valid <= 1'b0; // clear the flushed word
//             end
//         end
//     end


//     always_comb begin
//         n_rcv_base  = rcv_base;
//         nwr_addr = seq_rcv; // default write address is seq_rcv
        
//         npayload_len_flsh = payload_len;
//         nflush_ptr_str = flush_ptr_str; // keep flush pointer same as before
//         nflush_ptr_end = flush_ptr_end; // keep flush end same as before

//         if (nw_segment_t'(nw_segment) == DATA && in_window && !TCP_FIFO[wrt_ptr].valid && !full) begin    
//             mask = ({DATA_WIDTH{1'b1}} >> (DATA_WIDTH-WORD_BYTES*8)); // 64'hFFFF... but flexible
//             mask = mask >> ((WORD_BYTES-nbytes)*8);
//             mask = mask << (byte_off*8);
//             merged = (TCP_payload & mask) | (TCP_FIFO[wr_addr].payload & ~mask);

//             n_bytes_buff = bytes_buff + WORD_BYTES; // 8
//             nwr_addr = wr_addr + WORD_BYTES; // next word address
//         end else begin
//             n_bytes_buff = bytes_buff;
//         end


//         if (rd_en && TCP_FIFO[rd_ptr].valid && (((rcv_base >= seq_rcv) && nw_segment == DONE) || (rcv_base < seq_rcv))) begin
//             n_rcv_base <= rcv_base + WORD_BYTES;
//             n_bytes_buff <= bytes_buff - WORD_BYTES;
//         end

//         //-----------------------------------------------------------------
//         // Handshake reset (ISN) – one‑shot when SYN/ACK completes
//         //-----------------------------------------------------------------
//         if (hand_shake_done) begin
//             n_rcv_base  <= ISN_num_rcv;
//             n_bytes_buff<= '0;
//         end

//         //-----------------------------------------------------------------
//         // Flush on MAC CRC error or TCP RST
//         //-----------------------------------------------------------------
//         if (TCP_flush || nw_segment_t'(nw_segment)==FLUSH) begin
//             n_bytes_buff = bytes_buff - payload_len;
//             nflush_ptr_str = (seq_rcv >> 3) & (FIFO_DEPTH-1);
//             nflush_ptr_end = (seq_rcv + payload_len_flsh - 1) >> 3 & (FIFO_DEPTH-1); // inclusive end of flush range
//         end

//         if (flush_flag) begin
//             npayload_len_flsh = payload_len_flsh;
//         end

        

//     end

// endmodule
