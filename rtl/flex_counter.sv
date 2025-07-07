`timescale 1ns / 10ps

module flex_counter #(parameter SIZE = 4) (
    input logic CLK, nRST, clear, count_enable,
    input logic [SIZE-1:0] rollover_val,
    input logic [SIZE-1:0] initial_val,
    output logic [SIZE-1:0] count_out,
    output logic rollover_flag
);

    logic [SIZE-1:0] nxt_count_out;
    logic nxt_rollover_flag;

    always_ff @ (posedge CLK, negedge nRST) begin
        if (!nRST) begin
            count_out <= 0;
            rollover_flag <= 1'b0;
        end
        else begin
            count_out <= nxt_count_out;
            rollover_flag <= nxt_rollover_flag;
        end
    end

    always_comb begin
        if (clear) begin    // if clear, reset to 0s
            nxt_count_out = initial_val;
            nxt_rollover_flag = 1'b0;
        end
        else if (count_enable) begin    // if count_enable, check whether counter is at rollover val or not
            nxt_count_out = count_out + 1;
            nxt_rollover_flag = 1'b0;
            
            if (count_out + 1 == rollover_val) begin    // if counter at rollover_val, reset counter and rollover_flag to 1s
                nxt_rollover_flag = 1'b1;
            end
            // else if (count_out >= rollover_val) begin
            //     nxt_count_out = 1;
            //     nxt_rollover_flag = 1'b0;
            // end
            else begin  // if counter not at rollover_val, increment counter and set rollover_flag to 0
                nxt_rollover_flag = 1'b0;
            end
        end
        else begin  // if not clear or count_enable, do nothing
            nxt_count_out = count_out;
            nxt_rollover_flag = rollover_flag;
        end
    end

endmodule