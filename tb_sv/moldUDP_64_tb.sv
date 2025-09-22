`timescale 1ns/10ps
#include "moldUDP64.sv"

module moldUDP64_tb;
    // initialization
    parameter CLK_PERIOD = 10;
    logic clk;
    logic n_rst;
    logic UDP_flush, UDP_valid, done, mold_valid, mold_request_valid;
    logic [63:0] UDP_payload, mold_payload, mold_request_payload;
    logic [15:0] mold_length;
    // clock generation
    always_comb begin
        clk = 0;
        #(CLK_PERIOD / 2.0);
        clk = 1;
        #(CLK_PERIOD / 2.0);
    end

    // Declaration
    moldUDP dut (
        .clk(clk),
        .n_rst(n_rst),
        .UDP_flush(UDP_flush),
        .UDP_valid(UDP_valid),
        .UDP_payload(UDP_payload),
        .done(done),
        .mold_valid(mold_valid),
        .mold_length(mold_length),
        .mold_payload(mold_payload),
        .mold_request_valid(mold_request_valid),
        .mold_request_payload(mold_request_payload)
    );

    // task to reset the DUT
    task reset(); begin
        n_rst = 0;
        #(2*CLK_PERIOD);
        n_rst = 1;
        #(2*CLK_PERIOD);
        end
    endtask 

    task send_header(input logic [63:0][2:0] data) begin
        UDP_payload = data[0]; 
        UDP_valid = 1'b1;
        #(CLK_PERIOD);
        UDP_payload = data[1];
        #(CLK_PERIOD);
        UDP_payload = data[2];
        // #(CLK_PERIOD);
        #(CLK_PERIOD);
    end
    endtask

    task send_payload(input logic [63:0][4:0] data, input int length) begin
        for (int i = 0; i < length; i++) begin
            UDP_payload = data[i];
            #(CLK_PERIOD);
        end
        UDP_valid = 1'b0;
        UDP_payload = 64'b0;
        #(CLK_PERIOD);
    end
    endtask

    inital begin
        logic [63:0] sequence_number;
        logic [63:0] empty_data = '0;
        
        localparam [79:0] SESSION_ID = 80'h54455354534553533031; //"TESTSESS01"
        localparam [79:0] CHANGE_SES =  80'h54455354534553533032;
        logic [63:0] d1 = 64'hDEAD_BEEF_BEEF_DEAD;
        logic [63:0] d2 = 64'hABCD_EF12_3456_7890;
        logic [63:0] d3 = 64'h1234_5678_8765_4321;
        logic [63:0] d4 = 64'hAAAA_AAAA_BBBB_BBBB;
        logic [63:0] d5 = 64'hCCCC_CCCC_DDDD_DDDD;

        string test_name;
        logic [63:0][2:0] test_header;
        logic [63:0][4:0] test_payload;

        // Initialize signals
        UDP_flush = 0;
        UDP_valid = 0;
        UDP_payload = 0;
        done = 0;
        reset();
        
        // moldUDP64 order
        // CHKSUM (16) | SESSION_ID(48)
        // SESSION_ID (32) | sequence number (32)
        // sequence_number (32) | Message Count (16) | Message Length (16)

        // 1st normal packet 
        sequence_number = 1;
        test_name = "normal packet - 5 payload";
        #(CLK_PERIOD);
        test_header[0] = {16'h0, SESSION_ID[79:32]}; //checking the order of session id 
        test_header[1] = {SESSION_ID[31:0], sequence_number[63:32]}; //length = 5
        test_header[2] = {sequence_number[31:0], 16'd5, 16'd0};
        test_payload[0] = d1;
        test_payload[1] = d2;
        test_payload[2] = d3;
        test_payload[3] = d4;
        test_payload[4] = d5;
        send_header(test_header);
        send_payload(test_payload, 5);
        #(CLK_PERIOD);
        
        sequence_number = sequence_number + 5;
        // 2nd normal packet 
        test_name = "normal packet - 3 payload";
        #(CLK_PERIOD);
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[79:32], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd3, 16'h0};
        test_payload[0] = d5;
        test_payload[1] = d4;
        test_payload[2] = d3;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 3);
        #(CLK_PERIOD);
        
        // 3rd missing packet
        // jump number
        sequence_number = sequence_number + 4; // missing one 
        test_name = "missing packet";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[79:32], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd3, 16'h0};
        test_payload[0] = d1;
        test_payload[1] = d2;
        test_payload[2] = empty_data;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 2);
        #(CLK_PERIOD);

        // 4th backward
        test_name = "backward packet ";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[31:0], seq_num - 2}; 
        test_header[2] = {seq_num - 2, 16'd3, 16'd8};
        test_payload[0] = 64'hAAAA_0000_BBBB_1111;
        test_payload[1] = 64'hCCCC_2222_DDDD_3333;
        test_payload[2] = 64'hEEEE_4444_FFFF_5555;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 3);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);

        // 5th heartbeat packet
        test_name = "heartbeat packet";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[31:0], seq_num};
        test_header[2] = {seq_num, 16'd0, 16'd0}; // heartbeat
        send_header(test_header);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);       

        // changing session
        sequence_number = 1; // changing back to original 
        testname = "changing session"
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[79:32], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd2, 16'h0};
        test_payload[0] = d1;
        test_payload[1] = d2;
        test_payload[2] = empty_data;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 2);
        #(CLK_PERIOD);
        sequence_number = sequence_number + 2; 
        test_header[0] = {16'h0, CHANGE_SES[79:32]};
        test_header[1] = {CHANGE_SES[79:32], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd3, 16'h0};
        test_payload[0] = d1;
        test_payload[1] = d2;
        test_payload[2] = d3;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 3);
    end
endmodule