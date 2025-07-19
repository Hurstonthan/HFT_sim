`timescale  10ns/1ps
`include "ether_pkg.vh"

module payload_FIFO #(
    parameter int FIFO_DEPTH  = 5,               // words  (must be power‑of‑2)
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

    

    //Getting the rd_ptr and len for reading
    input logic rd_FIFO_valid,
    input logic [FIFO_WIDTH - 1:0] rd_FIFO_ptr,
    input logic [FIFO_WIDTH - 1:0] rd_FIFO_len,

    output logic rd_FIFO_en,
    output logic [31:0] seq_rx_FIFO_rd,
    
    input logic axis_r_en,
    output logic axis_r_valid,
    output logic [DATA_WIDTH - 1 : 0] axis_rd_data
    
);

    import ether_pkg::*;

    
    typedef struct packed {
        logic [DATA_WIDTH - 1 : 0] payload;
        logic [CTRL_WIDTH - 1: 0] bytes_offset;
    } fifo_entry_t;
    fifo_entry_t TCP_FIFO [FIFO_DEPTH - 1: 0];
    fifo_entry_t nTCP_FIFO [FIFO_DEPTH - 1: 0];
    fifo_entry_t fifo_entry_rd;


    logic [FIFO_WIDTH - 1:0] flush_ptr, nflush_ptr;
    logic [FIFO_WIDTH - 1:0] len_TCP_flush, nlen_TCP_flush;
    logic [FIFO_WIDTH - 1: 0] rd_len_ptr;
    logic [31:0] seq_trk_rd, nseq_trk_rd;
    logic [3:0] bytes_len;
    logic rd_FIFO_valid_l, nrd_FIFO_valid_l;
    logic naxis_r_valid;
    logic TCP_flush_l, nTCP_flush_l;

    //debugging the FIFO
    logic [DATA_WIDTH - 1: 0]payload1, payload2, payload3, payload4, payload5;
    logic [CTRL_WIDTH - 1: 0] bytes_offset1, bytes_offset2, bytes_offset3, bytes_offset4, bytes_offset5;

    assign payload1 = TCP_FIFO[0].payload;
    assign payload2 = TCP_FIFO[1].payload;
    assign payload3 = TCP_FIFO[2].payload;
    assign payload4 = TCP_FIFO[3].payload;
    assign payload5 = TCP_FIFO[4].payload;
    assign bytes_offset1 = TCP_FIFO[0].bytes_offset;
    assign bytes_offset2 = TCP_FIFO[1].bytes_offset;
    assign bytes_offset3 = TCP_FIFO[2].bytes_offset;
    assign bytes_offset4 = TCP_FIFO[3].bytes_offset;
    assign bytes_offset5 = TCP_FIFO[4].bytes_offset;

    
    assign bytes_len = wr_FIFO_offset[7] + wr_FIFO_offset[6] + wr_FIFO_offset[5] + wr_FIFO_offset[4] + wr_FIFO_offset[3] + wr_FIFO_offset[2] + wr_FIFO_offset[1] + wr_FIFO_offset[0]; 

    // priority_encoder bytes_convert (
    //     .din(),
    //     .valid(),
    //     .idx()
    // )

    logic [FIFO_WIDTH - 1:0] wr_ptr, nwr_ptr, rd_ptr, nrd_ptr;
    assign fifo_entry_rd = TCP_FIFO[rd_ptr];
    

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            flush_ptr <= 0;
            //rd_FIFO_en <= 0;
            seq_trk_rd <= 0;
            rd_len_ptr <= 0;
            len_TCP_flush <= 0;
            axis_r_valid <= 0;
            TCP_flush_l <= 0;
            axis_rd_data <= 0;
            for (int i = 0; i < FIFO_DEPTH; i++) begin
                TCP_FIFO[i]  <= 0;
            end
        end else begin
            wr_ptr <= nwr_ptr;
            rd_ptr <= nrd_ptr;
            //rd_FIFO_en <= axis_r_en;
            flush_ptr <= nflush_ptr;
            len_TCP_flush <= nlen_TCP_flush;
            axis_r_valid <= naxis_r_valid;
            TCP_flush_l <= nTCP_flush_l;
            TCP_FIFO <= nTCP_FIFO;
            if (handshake_done) begin
                seq_trk_rd <= seq_rcv_start;
            end else begin
                seq_trk_rd <= nseq_trk_rd;
            end

            if (!wr_FIFO_en) begin
                wr_ptr_out<= wr_ptr;
            end

            if (TCP_flush || TCP_flush_l) begin
                TCP_FIFO[flush_ptr] <= 0;
            end else if (axis_r_en && rd_FIFO_valid_l) begin
                axis_rd_data[63:56] <= fifo_entry_rd.bytes_offset[7] ? fifo_entry_rd.payload [63:56]: 0;
                axis_rd_data[55:48] <= fifo_entry_rd.bytes_offset[6] ? fifo_entry_rd.payload [55:48]: 0;
                axis_rd_data[47:40] <= fifo_entry_rd.bytes_offset[5] ? fifo_entry_rd.payload [47:40]: 0;
                axis_rd_data[39:32] <= fifo_entry_rd.bytes_offset[4] ? fifo_entry_rd.payload [39:32]: 0;
                axis_rd_data[31:24] <= fifo_entry_rd.bytes_offset[3] ? fifo_entry_rd.payload [31:24]: 0;
                axis_rd_data[23:16] <= fifo_entry_rd.bytes_offset[2] ? fifo_entry_rd.payload [23:16]: 0;
                axis_rd_data[15:8]  <= fifo_entry_rd.bytes_offset[1] ? fifo_entry_rd.payload [15:8]: 0;
                axis_rd_data[7:0]   <= fifo_entry_rd.bytes_offset[0] ? fifo_entry_rd.payload [7:0]: 0;
            end
        end
    end


    always_comb begin
        nwr_ptr = wr_ptr;
        nrd_ptr = rd_FIFO_ptr;
        nflush_ptr = wr_ptr;
        nTCP_flush_l = TCP_flush_l;
        nseq_trk_rd = seq_trk_rd;
        nrd_FIFO_valid_l = rd_FIFO_valid_l;
        naxis_r_valid = axis_r_valid;

        //Ouput
        wr_FIFO_len = wr_ptr;

        rd_FIFO_en = axis_r_en;
        seq_rx_FIFO_rd = seq_trk_rd;
        

        if (TCP_flush || TCP_flush_l) begin
            nflush_ptr = flush_ptr + 1;
        end else if(flush_ptr == len_TCP_flush) begin
            nTCP_flush_l = 1'b0;
        end else if (nw_segment || wr_FIFO_en) begin
           nflush_ptr = flush_ptr;
        end else if (TCP_flush) begin
            nTCP_flush_l = 1'b1;
            nlen_TCP_flush = wr_ptr;;
            nflush_ptr = flush_ptr + 1;           
        end

        if (wr_FIFO_en) begin
            nwr_ptr = wr_ptr + 1;
            nTCP_FIFO[wr_ptr].payload = axis_data_rx;
            nTCP_FIFO[wr_ptr].bytes_offset = wr_FIFO_offset;
        end
        

        if (rd_FIFO_valid) begin
            nrd_FIFO_valid_l = 1'b1;
        end else if (rd_ptr == rd_FIFO_len) begin
            nrd_FIFO_valid_l = 1'b0;
        end

        if (axis_r_en) begin
            if (rd_FIFO_valid_l && rd_ptr != flush_ptr) begin
                nseq_trk_rd = seq_trk_rd + bytes_len;
                nrd_ptr = rd_ptr + 1;
                naxis_r_valid = 1'b1;
            end else begin
                nseq_trk_rd = seq_trk_rd;
                nrd_ptr = rd_ptr;
                naxis_r_valid = 1'b0;
            end
        end

        
    end



endmodule
