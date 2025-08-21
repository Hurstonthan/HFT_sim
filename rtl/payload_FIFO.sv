`timescale  10ns/1ps
`include "ether_pkg.vh"

module payload_FIFO #(
    parameter int FIFO_DEPTH  = 10000,               // words  (must be power‑of‑2)
    parameter int DATA_WIDTH  = 64,
    parameter int CTRL_WIDTH = 8,
    localparam int WORD_BYTES = DATA_WIDTH / 8,
    localparam int FIFO_WIDTH = $clog2(FIFO_DEPTH),
    localparam int WINDOW_BYTES = FIFO_DEPTH * WORD_BYTES
)(
    // Clock & reset
    input logic CLK,
    input logic nRST,

    //TCP_receiver interface
    input logic nw_segment, //Signal to indicate nw segment come and handle flush case
    input logic TCP_flush,
    input logic axis_t_last,
    input  logic [63:0] axis_data_rx,



    //TCP_flow_logic interface
    //Writing request
    input logic handshake_done,
    input logic [31:0] seq_rcv_start,
    input  logic wr_FIFO_en,
    input  logic [7:0] wr_FIFO_offset,
    output logic  [FIFO_WIDTH - 1:0] wr_ptr_out,
    output logic  [FIFO_WIDTH - 1:0] wr_FIFO_len,
    input logic rd_FIFO_valid,
    input logic [FIFO_WIDTH - 1:0] rd_FIFO_ptr,
    input logic [FIFO_WIDTH - 1:0] rd_FIFO_len,
    output logic rd_FIFO_en,
    output logic [31:0] seq_rx_FIFO_rd,
    output logic full,

    //Interface between Payload_rcv and APP readgin
    input logic axis_r_en,
    output logic axis_r_valid,
    output logic [DATA_WIDTH - 1 : 0] axis_rd_data
    
);

    import ether_pkg::*;

    
    typedef struct packed {
        logic [DATA_WIDTH - 1 : 0] payload;
        logic [CTRL_WIDTH - 1: 0] bytes_offset;
    } fifo_entry_t;
    
    (* ram_style = "block" *)
    fifo_entry_t TCP_FIFO [0:FIFO_DEPTH - 1];
    
    
    fifo_entry_t fifo_entry_rd;


    logic [FIFO_WIDTH - 1:0] flush_ptr, nflush_ptr;
    logic [FIFO_WIDTH - 1:0] len_TCP_flush, nlen_TCP_flush;
    logic [FIFO_WIDTH - 1: 0] rd_len_ptr, nrd_len_ptr;
    logic [31:0] seq_trk_rd, nseq_trk_rd;
    logic [3:0] bytes_len;
    logic rd_FIFO_valid_l, nrd_FIFO_valid_l;
    logic naxis_r_valid;
    logic TCP_flush_l, nTCP_flush_l;

    //signal that avoid receiving writing
    logic handshake, nhandshake;

    //debugging the FIFO
//    logic [DATA_WIDTH-1:0] payload      [FIFO_DEPTH];   // payload[0]..payload[4]
//    logic [CTRL_WIDTH-1:0] bytes_offset [FIFO_DEPTH];   // bytes_offset[0]..bytes_offset[4]


//    for (genvar i = 0; i < FIFO_DEPTH; i++) begin
//        assign payload[i] = TCP_FIFO[i].payload;
//        assign bytes_offset[i] = TCP_FIFO[i].bytes_offset;
//    end

    
    // assign bytes_len = wr_FIFO_offset[7] + wr_FIFO_offset[6] + wr_FIFO_offset[5] + wr_FIFO_offset[4] + wr_FIFO_offset[3] + wr_FIFO_offset[2] + wr_FIFO_offset[1] + wr_FIFO_offset[0]; 
    //assign bytes_len = TCP_FIFO[rd_ptr].bytes_offset[0] + TCP_FIFO[rd_ptr].bytes_offset[1] + TCP_FIFO[rd_ptr].bytes_offset[2] +TCP_FIFO[rd_ptr].bytes_offset[3] +TCP_FIFO[rd_ptr].bytes_offset[4] +TCP_FIFO[rd_ptr].bytes_offset[5] +TCP_FIFO[rd_ptr].bytes_offset[6] +TCP_FIFO[rd_ptr].bytes_offset[7];
    //assign bytes_len = TCP_FIFO[rd_ptr].bytes_offset[0] + TCP_FIFO[rd_ptr].bytes_offset[1] + TCP_FIFO[rd_ptr].bytes_offset[2] +TCP_FIFO[rd_ptr].bytes_offset[3] +TCP_FIFO[rd_ptr].bytes_offset[4] +TCP_FIFO[rd_ptr].bytes_offset[5] +TCP_FIFO[rd_ptr].bytes_offset[6] +TCP_FIFO[rd_ptr].bytes_offset[7]; 
    assign full = ((rd_ptr - 1) == wr_ptr_out);


    logic [FIFO_WIDTH - 1:0] wr_ptr, nwr_ptr, rd_ptr, nrd_ptr;
    //assign fifo_entry_rd = TCP_FIFO[rd_ptr];
    
    //BRAM friendly FIFO writing
    always_ff @(posedge CLK) begin
        if (wr_FIFO_en && handshake) begin
//            TCP_FIFO[wr_ptr].payload <= axis_data_rx;
//            TCP_FIFO[wr_ptr].bytes_offset <= wr_FIFO_offset;
              TCP_FIFO[wr_ptr] <= 1;
               
        end
    end

    //BRAM friendly FIFO reading
    always_ff @(posedge CLK) begin
        if (axis_r_en && rd_FIFO_valid_l) begin
            fifo_entry_rd <= TCP_FIFO[rd_ptr];
    //                bytes_len <= TCP_FIFO[rd_ptr].bytes_offset[0] + TCP_FIFO[rd_ptr].bytes_offset[1] + TCP_FIFO[rd_ptr].bytes_offset[2] +TCP_FIFO[rd_ptr].bytes_offset[3] +TCP_FIFO[rd_ptr].bytes_offset[4] +TCP_FIFO[rd_ptr].bytes_offset[5] +TCP_FIFO[rd_ptr].bytes_offset[6] +TCP_FIFO[rd_ptr].bytes_offset[7];
            //bytes_len <= 0;
        end
    end

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            flush_ptr <= 0;
            rd_FIFO_en <= 0;
            rd_FIFO_valid_l <= 0;
            seq_trk_rd <= 0;
            rd_len_ptr <= 0;
            len_TCP_flush <= 0;
            axis_r_valid <= 0;
            TCP_flush_l <= 0;
            axis_rd_data <= 0;
            wr_FIFO_len <= 0;
            seq_rx_FIFO_rd <= 0;
            handshake <= 0;
            // //Doing this consider as array
            // for (int i = 0; i < FIFO_DEPTH; i++) begin
            //     TCP_FIFO[i]  <= 0;
            // end
        end else begin
            wr_ptr <= nwr_ptr;
            rd_ptr <= nrd_ptr;
            rd_FIFO_en <= axis_r_en;
            rd_FIFO_valid_l <= nrd_FIFO_valid_l;
            rd_len_ptr <= nrd_len_ptr;
            seq_rx_FIFO_rd <= seq_trk_rd;
            handshake <= nhandshake;
            flush_ptr <= nflush_ptr;
            len_TCP_flush <= nlen_TCP_flush;
            axis_r_valid <= naxis_r_valid;
            TCP_flush_l <= nTCP_flush_l;
            //TCP_FIFO <= nTCP_FIFO;

            if (handshake_done) begin
                seq_trk_rd <= seq_rcv_start;
                handshake <= handshake_done;
            end else begin
                seq_trk_rd <= nseq_trk_rd;
            end

            //Ouput
            wr_FIFO_len <= wr_ptr;
            if (!wr_FIFO_en) begin
                wr_ptr_out<= wr_ptr;
            end
        end
    end


    always_comb begin
        nwr_ptr = wr_ptr;
        nrd_ptr = rd_ptr;
        nflush_ptr = wr_ptr;
        nTCP_flush_l = TCP_flush_l;
        nseq_trk_rd = seq_trk_rd;
        nrd_FIFO_valid_l = rd_FIFO_valid_l;
        nrd_len_ptr = rd_len_ptr;
        naxis_r_valid = axis_r_valid;
        nhandshake = handshake;

        //Reading 
        if (TCP_flush) begin
            nwr_ptr = flush_ptr;           
        end else if (nw_segment || wr_FIFO_en) begin
           nflush_ptr = flush_ptr;
        end

        if (wr_FIFO_en && handshake) begin
            nwr_ptr = wr_ptr + 1;
            // nTCP_FIFO[wr_ptr].payload = axis_data_rx;
            // nTCP_FIFO[wr_ptr].bytes_offset = wr_FIFO_offset;
        end
        

        if (rd_FIFO_valid) begin
            nrd_FIFO_valid_l = 1'b1;
            nrd_len_ptr = rd_FIFO_len;
            nrd_ptr = rd_FIFO_ptr;
        end else if (rd_ptr == rd_len_ptr) begin
            nrd_FIFO_valid_l = 1'b0;
        end

        if (axis_r_en) begin
            if (rd_FIFO_valid_l && rd_ptr != flush_ptr) begin
                nseq_trk_rd = seq_trk_rd + bytes_len;
                nrd_ptr = rd_ptr + 1;
                naxis_r_valid = 1'b1;
            end else begin
                nseq_trk_rd = seq_trk_rd;
                naxis_r_valid = 1'b0;
            end
        end
    end


endmodule


//`timescale 1ns/1ps

//module payload_FIFO #(
//  parameter int WIDTH  = 64,
//  parameter int DEPTH  = 15000,                      // "ridiculous" depth ? forces BRAM
//  localparam int ADDR_W = $clog2(DEPTH)
//)(
//  input  logic                clk,
//  input  logic                rst_n,

//  // write side
//  input  logic                wr_en,
//  input  logic [WIDTH-1:0]    wr_data,
//  output logic                full,

//  // read side
//  input  logic                rd_en,
//  output logic [WIDTH-1:0]    rd_data,
//  output logic                rd_valid,
//  output logic                empty,
  
//  input logic debug,

//  // optional: occupancy
//  output logic [ADDR_W:0]     count
//);
//    typedef struct packed {
//        logic [WIDTH  -1 :0] payload;
//        //logic [7:0] offset;
//    }fifo_entry_t;
//  // --- Storage: block RAM inference target ---
//  (* ram_style = "block" *)
//  fifo_entry_t mem [0:DEPTH-1];

//  logic [ADDR_W-1:0] wptr, rptr, nwptr, nrptr;
//  logic [WIDTH-1:0]  mem_dout;

//  // handshake helpers
//  logic wr_fire, rd_fire, rd_fire_q;

//  assign empty  = (count == 0);
//  assign full   = (count == DEPTH);

//  assign wr_fire = wr_en && !full;
//  assign rd_fire = rd_en && !empty;

//  // WRITE port (synchronous)
//  always_ff @(posedge clk) begin
//    if (wr_fire)
//      mem[wptr].payload <= wr_data;
//  end

//  // READ port (synchronous read ? 1-cycle latency)
//  always_ff @(posedge clk) begin
//    mem_dout <= mem[rptr].payload;              // BRAM-style sync read
//  end

//  // Pointers, count, and output pipeline
//  always_ff @(posedge clk or negedge rst_n) begin
//    if (!rst_n) begin
//      wptr      <= '0;
//      rptr      <= '0;
//      count     <= '0;
//      rd_fire_q <= 1'b0;
//      rd_valid  <= 1'b0;
//      rd_data   <= '0;
//    end else begin
//      // advance pointers
//      if (debug) begin
//        wptr <= 3;
//        rptr <= 3;
//     end else begin
//        wptr <= nwptr;
//        rptr <= nrptr;
//     end
      
////      if (wr_fire) wptr <= wptr + 1'b1;
////      if (rd_fire) rptr <= rptr + 1'b1;

//      // occupancy
//      unique case ({wr_fire, rd_fire})
//        2'b10: count <= count + 1'b1;   // write only
//        2'b01: count <= count - 1'b1;   // read only
//        default: /* no change */ ;
//      endcase

//      // pipeline the read handshake to align with BRAM latency
//      rd_fire_q <= rd_fire;
//      rd_valid  <= rd_fire_q;
//      rd_data   <= mem_dout;            // data valid when rd_valid==1
//    end
    
//  end
  
//  always_comb begin
//    nwptr = 1;
//    nrptr = 1; 
    
////    if (debug) begin
////        nwptr  = 3;    
    
////    end
  
//  end 

//endmodule
