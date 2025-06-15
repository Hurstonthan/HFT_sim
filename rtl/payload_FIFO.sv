`include "ether_pkg.vh"
module payload_FIFO #(
    parameter FIFO_DEPTH = 16384,
    parameter FIFO_WIDTH = $clog2(FIFO_DEPTH),
    parameter DATA_WIDTH = 64
)  (
    input logic CLK,
    input logic nRST,
    input logic nw_segment,
    input logic hand_shake_done,
    input logic [DATA_WIDTH-1:0] TCP_payload,
    input logic [31:0] seq_rcv,
    input logic [31:0] ISN_num_rcv,
    input logic [FIFO_WIDTH - 1:0] len_rcv,
    input logic [31:0] payload_len,
    

    output logic [DATA_WIDTH -1 : 0] TCP_data_out,
    output logic [31:0] bytes_buff,
    output logic full,
    output logic valid_rd 
);

    import ether_pkg::*;
    logic [$clog2(FIFO_DEPTH)-1:0] in_order_ptr, rd_ptr, wrt_ptr, nwrt_ptr'
    // logic [$clog2(FIFO_DEPTH)-1:0]buffer_end, nbuffer_end;
    logic [31:0] end_ptr, nbytes_buff, rcv_base, nrcv_base, byte_off;
    TCP_FIFO_t [FIFO_DEPTH - 1:0] TCP_FIFO, nTCP_FIFO;

    logic order_flg, norder_flg, full, empty;

    
    assign byte_off = seq_rcv - rcv_base;
    assign empty = (bytes_buff == 0);
    


    flex_counter #(.SIZE(FIFO_WIDTH)) wr_counter (.CLK(CLK), .nRST(nRST), .clear(), .count_enable(order_flg && !full), .rollover_val(FIFO_DEPTH), .rollover_flag(FIFO_DEPTH), .count_out(in_order_ptr));
    flex_counter #(.SIZE(FIFO_WIDTH)) rd_counter (.CLK(CLK), .nRST(nRST), .clear(), .count_enable(rd_en && !empty), .rollover_val(FIFO_DEPTH), .rollover_flag(FIFO_DEPTH), .count_out(rd_ptr));


    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            TCP_FIFO <= 0;
            wrt_ptr <= 0;
            order_flg <= 0;
            bytes_buff <= 0;
            rcv_base <= 0;
            // buffer_end <= 0;
            
        end else begin
            TCP_FIFO <= nTCP_FIFO;
            order_flg <= norder_flg;
            bytes_buff <= nbytes_buff;
            rcv_base <= nrcv_base;
            if (hand_shake_done) begin
                rcv_base <= ISN_num_rcv;
            end
            if (nw_segment) begin
                wrt_ptr <= nwrt_ptr;
            end else begin
                wrt_ptr <= (byte_off >> 3) & (FIFO_DEPTH - 1);
            end
            // buffer_end <= nbuffer_end;
            
        end
    end


    always_comb begin
        nwrt_ptr = wrt_ptr;
        nTCP_FIFO = TCP_FIFO;
        norder_flg = order_flg;
        valid_rd = 1'b0;
        TCP_data_out = 0;
        // valid_rd = (rd_ptr < in_order_ptr);
        nbytes_buff = bytes_buff;

        // nbuffer_end = buffer_end;
        if ((wrt_ptr == in_order_ptr) && nw_segment) begin
            norder_flg = 1'b1;
        end else begin
            norder_flg = 1'b0;
        end

        if (nw_segment && !TCP_FIFO[wrt_ptr].valid && (seq_rcv >= rcv_base)) begin
            nTCP_FIFO[wrt_ptr].payload = TCP_payload;
            nTCP_FIFO[wrt_ptr].valid = 1'b1;
            nwrt_ptr = wrt_ptr + 1;
            nbytes_buff = bytes_buff + 8;
        end

        // if (nw_segment && end_ptr >= buffer_end) begin
        //     nbuffer_end = end_ptr;
        // end

        if (rd_en && !empty) begin
            TCP_data_out = TCP_FIFO[rd_ptr].payload;
            nbytes_buff = bytes_buff - 8;
            nrcv_base = rcv_base + 8;
            // if (rd_ptr <= in_order_ptr) begin
            //     valid_rd = 1'b1;
            //     TCP_data_out = TCP_FIFO[rd_ptr].payload;

            // end 
        end
    end
    

    

endmodule
