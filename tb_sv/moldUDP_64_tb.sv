`timescale 1ns/10ps
// include "moldUDP64.sv"

module moldUDP64_top_tb;
    // initialization
    parameter CLK_PERIOD = 10;
    logic clk = 1;
    logic n_rst = 1;
    logic UDP_flush, UDP_valid, done;
    logic [63:0] UDP_payload, moldUDP_payload, rerequest_payload;
    logic rerequest_valid;
    logic [7:0] segment_sel0, segment_sel1;
    logic moldUDP_done;
    
    // logic [15:0] mold_length;
    
    logic [63:0] sequence_number;
    logic [63:0] empty_data = '0;
    
    localparam [79:0] SESSION_ID = 80'h54455354534553533031; //"TESTSESS01"
    localparam [79:0] CHANGE_SES =  80'h54455354534553533032;
    logic [63:0] d1 = 64'hDEADBEEFBEEFDEAD;
    logic [63:0] d2 = 64'hABCDEF1234567890;
    logic [63:0] d3 = 64'h0006567887654321;
    logic [63:0] d4 = 64'h0006AAAABBBBBBBB;
    logic [63:0] d5 = 64'hCCCCCCCCDDDDDDDD;
    string test_name;
    logic [2:0][63:0] test_header;
    logic [4:0][63:0] test_payload;

    // clock generation
    always #(CLK_PERIOD/2) clk++;

    // Declaration
    moldUDP64_top dut (
        .clk(clk),
        .n_rst(n_rst),
        .UDP_flush(UDP_flush),
        .UDP_valid(UDP_valid),
        .UDP_payload(UDP_payload),
        .done(done),
        .rerequest_valid(rerequest_valid),
        .moldUDP_payload(moldUDP_payload),
        .rerequest_payload(rerequest_payload),
        .segment_sel0(segment_sel0),
        .segment_sel1(segment_sel1),
        .moldUDP_done(moldUDP_done)
    );

    // task to reset the DUT
    task reset;
    begin
        n_rst = 0;
        #(2*CLK_PERIOD);
        n_rst = 1;
        #(2*CLK_PERIOD);

    end
    endtask 

    task send_header;
        input logic [2:0][63:0] data;
    begin
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

    task send_payload;
        input logic [4:0][63:0] data;
        input int length;
    begin
        for (int i = 0; i < length; i++) begin
            UDP_payload = data[i];
            #(CLK_PERIOD);
        end
        UDP_valid = 1'b0;
        UDP_payload = 64'b0;
        #(CLK_PERIOD);
    end
    endtask

    initial begin
        // Initialize signals
        UDP_flush = 0;
        UDP_valid = 0;
        UDP_payload = 0;
        done = 0;
        reset();
        
        // moldUDP64 orderin
        // CHKSUM (16) | SESSION_ID(48)
        // SESSION_ID (32) | sequence number (32)
        // sequence_number (32) | Message Count (16) | Message Length (16)

        // 1st normal packet 
        sequence_number = 1;
        test_name = "normal packet - one packet - 40 bytes";
        #(CLK_PERIOD);
        test_header[0] = {16'h0, SESSION_ID[79:32]}; //checking the order of session id 
        test_header[1] = {SESSION_ID[31:0], sequence_number[63:32]}; //length = 5
        test_header[2] = {sequence_number[31:0], 16'd1, 16'd40};
        test_payload[0] = d1;
        test_payload[1] = d2;
        test_payload[2] = d3;
        test_payload[3] = d4;
        test_payload[4] = d5;
        send_header(test_header);
        send_payload(test_payload, 5);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);
        done = 1'b0;
        #(CLK_PERIOD);
        
        sequence_number = sequence_number + 1;
        // 2nd normal packet 
        test_name = "normal packet - 3 payload";
        #(CLK_PERIOD);
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[31:0], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd3, 16'd8};
        test_payload[0] = d5;
        test_payload[1] = 64'h0007AAAABBBBBBBB;
        test_payload[2] = 64'hAA0005AAAABBBBBB;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 3);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);
        done = 1'b0;
        #(CLK_PERIOD);


        sequence_number = sequence_number + 6; // should give miss  
        test_name = "missing packet";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[31:0], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd2, 16'd8};
        test_payload[0] = d5;
        test_payload[1] = 64'h0004AAAABBBB0008;
        test_payload[2] = 64'hDEADBEEFBEEFDEAD;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 3);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);
        done = 1'b0;
        #(CLK_PERIOD);
        
        sequence_number = sequence_number + 2; // valid data, pending miss packet 
        test_name = "valid data, pending miss";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[31:0], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd2, 16'd8};
        test_payload[0] = d5;
        test_payload[1] = d4;
        test_payload[2] = empty_data;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 2);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);
        done = 1'b0;
        #(CLK_PERIOD);


        // 4th backward
        sequence_number = sequence_number - 5;
        test_name = "backward packet ";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[31:0], sequence_number[63:32]}; 
        test_header[2] = {sequence_number[31:0], 16'd3, 16'd8};
        test_payload[0] = d5;
        test_payload[1] = d4;
        test_payload[2] = d3;
        test_payload[3] = empty_data;
        test_payload[4] = empty_data;
        send_header(test_header);
        send_payload(test_payload, 3);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);
        done = 1'b0;
        #(CLK_PERIOD);

        // 5th heartbeat packet
        sequence_number = 0;
        test_name = "heartbeat packet";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[31:0], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd0, 16'd0}; // heartbeat
        send_header(test_header);
        #(CLK_PERIOD);
        done = 1'b1;
        #(CLK_PERIOD);       
        done = 1'b0;
        #(CLK_PERIOD);
        // changing session$finish;

        reset();
        sequence_number = 1; // changing back to original 
        test_name = "changing session";
        test_header[0] = {16'h0, SESSION_ID[79:32]};
        test_header[1] = {SESSION_ID[79:32], sequence_number[63:32]};
        test_header[2] = {sequence_number[31:0], 16'd2, 16'hffff};
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
        $finish;
    end
endmodule