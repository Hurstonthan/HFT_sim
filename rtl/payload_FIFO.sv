`include "ether_pkg.vh"

module payload_FIFO #(
    parameter int FIFO_DEPTH  = 2048,               // words  (must be power‑of‑2)
    parameter int DATA_WIDTH  = 64,
    parameter int CTRL_WIDTH = 8,
    localparam int WORD_BYTES = DATA_WIDTH / 8,
    localparam int FIFO_WIDTH = $clog2(FIFO_DEPTH),
    localparam int WINDOW_BYTES = FIFO_DEPTH * WORD_BYTES
)(
    // Clock & reset
    input logic CLK,
    input logic nRST,

    //Writing request
    input logic nw_segment, //Signal to indicate nw segment come and handle flush case
    input logic TCP_flush,
    input logic [63:0] axis_data_rx,
    input logic axis_w_en,
    input logic axis_t_last,

    input logic [7:0] wr_FIFO_offset,
    output logic [FIFO_WIDTH - 1:0] wr_ptr_out,


    input logic [FIFO_WIDTH - 1 : 0] rd_ptr_in,
    input logic axis_r_en,
    output logic [DATA_WIDTH - 1 : 0] axis_rd_data
    
);

    import ether_pkg::*;

    typedef struct packed {
        logic [DATA_WIDTH - 1 : 0] payload;
        logic [CTRL_WIDTH - 1: 0] bytes_offset;
    } fifo_entry_t;

    fifo_entry_t TCP_FIFO [FIFO_DEPTH - 1: 0];
    fifo_entry_t fifo_entry_rd;
    logic [FIFO_WIDTH - 1:0] flush_ptr, nflush_ptr;

    assign fifo_entry.payload = axis_data_rx;
    assign fifo_entry.bytes_offset = wr_FIFO_offset;

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
        end else begin
            wr_ptr <= nwr_ptr;
            rd_ptr <= nrd_ptr;
            flush_ptr <= nflush_ptr;
            if (!axis_w_en) begin
                wr_ptr_out<= wr_ptr;
            end

            if (axis_w_en) begin
                TCP_FIFO[wr_ptr] <= fifo_entry;
            end

            if (TCP_flush) begin
                TCP_FIFO[flush_ptr] <= 0;
            end else if (axis_r_en) begin
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
        nrd_ptr = rd_ptr_in;
        nflush_ptr = flush_ptr;
        if (nw_segment) begin
           nflush_ptr = wr_ptr; //new segment is  
        end else if (TCP_flush) begin
           nflush_ptr = flush_ptr + 1;
        end
        if (axis_w_en) begin
            nwr_ptr = wr_ptr + 1;
        end 

        
    end



endmodule
