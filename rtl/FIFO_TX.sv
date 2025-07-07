`timescale 1ns / 10ps
module data_buffer #(
    parameter FIFO_DEPTH = 64, // Depth of the FIFO
    parameter FIFO_WIDTH = $clog2(FIFO_DEPTH) // Width of the FIFO address
)(
    input logic clk,
    input logic n_rst,
    input logic rd_en,
    input logic wr_en,
    input logic [7:0] data_recv,
    output logic [7:0] data_send,



    input logic clear,
    input logic flush,

    output logic [6:0] buffer_occupancy,
    output logic bytes_abt_sent,
    output logic empty
);


    //Creating the FIFO RAM
    logic [7:0] [64:0]fifo_register [64:0];
    logic [7:0] [64:0] n_fifo_register [64:0];
    
    logic full;
    logic [6:0] wptr, rptr; //For
    logic [6:0] n_buffer_occupancy; 

    assign empty = (buffer_occupancy == '0) ? 1'b1 : 1'b0;
    assign full = (buffer_occupancy == 7'd 64) ? 1'b1 : 1'b0;

    flex_counter #(.SIZE(7)) u0 (.clk(clk), .n_rst(n_rst), .clear(clear | flush), .count_enable(wr_en & !full), .rollover_val(7'd64), .count_out(wptr), .rollover_flag());
    flex_counter #(.SIZE(7)) u1 (.clk(clk), .n_rst(n_rst), .clear(clear | flush), .count_enable(rd_en & !empty), .rollover_val(7'd64), .count_out(rptr), .rollover_flag());

    always_ff @(posedge clk, negedge n_rst) begin
        if (!n_rst) begin
            for (int i = 0; i < 65; i++) begin
                fifo_register[i] <= '0;
            end
            buffer_occupancy <= 7'b0;
            bytes_abt_sent <= '0;
        end else begin
            for (int i = 0; i < 65; i++) begin
                fifo_register[i] <= n_fifo_register[i];
            end
            buffer_occupancy <= n_buffer_occupancy;
            if (wr_en) begin
                bytes_abt_sent <= n_buffer_occupancy;
            end
 
        end
    end

    always_comb begin
        for (int i = 0; i < 65; i++) begin
            n_fifo_register[i] = fifo_register[i];
        end
        data_send = '0;
        n_buffer_occupancy = buffer_occupancy;
        

        if (!clear && !flush) begin
            //Handle RX part
            if (wr_en) begin
                if (!full) begin
                    n_fifo_register[wptr] = data_recv,;
                    n_buffer_occupancy = buffer_occupancy + 8'b1;
                end
            end
            else if (rd_en) begin
                if (!empty) begin
                    data_send = fifo_register[rptr];
                    n_fifo_register[rptr] = '0;
                    n_buffer_occupancy = buffer_occupancy - 8'b1;
                end
            end

            //Handle TX part
            if () begin
                if (!full) begin
                    n_fifo_register[wptr] = ;
                    n_buffer_occupancy = buffer_occupancy + 8'b1;
                end
            end
            else if () begin
                if (!empty) begin
                     = fifo_register[rptr];
                    n_fifo_register[rptr] = '0;
                    n_buffer_occupancy = buffer_occupancy - 8'b1;
                end
            end
        end 
        
        else begin
            for (int i = 0; i < 65; i++) begin
                n_fifo_register[i] = '0;
            end
            n_buffer_occupancy = '0;
        end
    end

endmodule