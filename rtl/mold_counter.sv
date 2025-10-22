module mold_counter #(

    )(
        input logic clk,
        input logic n_rst,
        input logic [63:0] sequence_id,
        input logic [63:0] mold_payload,
        input logic [15:0] mold_length, //from the first segment
        input logic mold_valid,
        input logic [15:0] message_count,
        output logic counter_done, 
        // output logic mold_miss,
        output logic [63:0] counter_seq, //for sending
        output logic [63:0] counter_payload,
        output logic [7:0] segment_sel0, //MSB if 11110001 means the first section is high and second is low, so on
        output logic [7:0] segment_sel1 // determine which pin is or not on
    );
    logic [7:0] byte_count, next_byte_count;
    logic [1:0][7:0] next_segment_sel;
    logic sel, next_sel; // select the correct
    logic [63:0] next_sequence_num; 
    logic [15:0] expected_message_len, next_expected_message_len, difference; 
    logic byte_done, next_byte_done; //for the inner  
    
    // logic message_done, next_message_done;
    logic next_counter_done;
    logic [63:0] next_payload;
    // logic [7:0] last_byte;
    
    assign next_payload = mold_payload;
    assign difference = expected_message_len - byte_count;

    always_comb begin
        if (byte_done && mold_valid) begin
            next_sequence_num = counter_seq + 1;
        end else if (mold_valid) begin
            next_sequence_num = counter_seq;
        end else begin
            next_sequence_num = sequence_id;
        end
    end
    always_comb begin
        // next_counter_done = '0;
        counter_done = '0;
        if (counter_seq >= sequence_id + message_count) begin
            // next_counter_done = 1'b1;
            counter_done = 1'b1;
        end
    end

    always_comb begin
        next_expected_message_len = ~mold_valid? mold_length : expected_message_len;
        next_byte_count = '0;
        next_segment_sel = '0;
        next_sel = sel;
        byte_done = '0; 
        //todo to check whether there is a miss
        if (mold_valid) begin
            casez(difference)
                16'd0: begin
                    next_byte_count = 16'd6;
                    byte_done = 1'b1;
                    next_segment_sel[~sel] = 8'b00111111;
                    next_expected_message_len = mold_payload[63:48];
                end
                16'd1: begin
                    next_byte_count = 16'd5;
                    byte_done = 1'b1;
                    next_segment_sel[~sel] = 8'b00011111;
                    next_segment_sel[sel] = 8'b10000000;
                    next_expected_message_len = mold_payload[55:40];
                end
                16'd2: begin 
                    next_byte_count = 16'd4;
                    byte_done = 1'b1;
                    next_segment_sel[~sel] = 8'b00001111;
                    next_segment_sel[sel] = 8'b11000000;
                    next_expected_message_len = mold_payload[47:32];
                end
                16'd3: begin
                    next_byte_count = 16'd3;
                    byte_done = 1'b1;
                    next_segment_sel[~sel] = 8'b00000111;
                    next_segment_sel[sel] = 8'b11100000;
                    next_expected_message_len = mold_payload[39:24];
                end
                16'd4: begin
                    next_byte_count = 16'd2;
                    byte_done = 1'b1;
                    next_segment_sel[~sel] = 8'b00000011;
                    next_segment_sel[sel] = 8'b11110000;
                    next_expected_message_len = mold_payload[31:16];
                end
                16'd5: begin
                    next_byte_count = 16'd1;
                    byte_done = 1'b1;
                    next_segment_sel[~sel] = 8'b00000001;
                    next_segment_sel[sel] = 8'b11111000;
                    next_expected_message_len = mold_payload[23:8];
                end
                16'd6: begin
                    next_byte_count = '0;
                    byte_done = 1'b1;
                    next_segment_sel[sel] = 8'b11111100; 
                    next_expected_message_len = mold_payload[15:0];
                end
                16'd7: begin
                    next_byte_count = 16'd7;
                    byte_done = 1'b1;
                    next_segment_sel[sel] = 8'b11111110;
                    next_expected_message_len = {mold_payload[7:0], counter_payload[63:56]};
                end
                16'd8: begin
                    next_byte_count = 16'd8;
                    byte_done = 1'b1;
                    next_segment_sel[sel] = 8'b11111111;
                end
                default: begin //more than or equal to 10 
                    next_byte_count = byte_count + 16'd8;
                    next_segment_sel[sel] = 8'b11111111;
                end
            endcase
        end
    end

    always_ff @(posedge clk, negedge n_rst) begin
        if(~n_rst) begin
            // message_done <= '0;
            expected_message_len <= '0;
            byte_count <= '0;
            sel <= '0;
            counter_seq <= '0;
            segment_sel0 <= '0;
            segment_sel1 <= '0;
            // mold_miss <= '0;
            // byte_done <= '0;
            // counter_done <= '0;
            counter_payload <= '0;
        end else begin
            // message_done <= next_message_done;
            expected_message_len <= next_expected_message_len;
            byte_count <= next_byte_count;
            sel <= next_sel;
            counter_seq <= next_sequence_num;
            segment_sel0 <= next_segment_sel[0];
            segment_sel1 <= next_segment_sel[1];
            // mold_miss <= next_miss;
            // byte_done <= next_byte_done;/
            // counter_done <= next_counter_done;
            counter_payload <= next_payload;
        end
    end


endmodule