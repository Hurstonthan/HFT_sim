`include "rx_pkg.vh"
`timescale 1ns/1ns
module ip_rx_tb;
    import rx_pkg::*;
    parameter PERIOD = 10; 
    parameter CKMSUM_CYCLES = 10;
    logic CLK = 0, nRST;

    // input for the IP_rx module
    logic MAC_valid;
    logic [63:0] MAC_payload_rcv;
    logic MAC_flush;
    logic [7:0] bytes_rcv_len;

    //output logic
    logic IP_valid;
    logic IP_flush;
    logic [63:0] IP_payload;
    logic is_udp;
    logic is_tcp;

    //
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars;
    end
    
    always begin
        clk = 0;
        #(CLK_PERIOD / 2.0);
        clk = 1;
        #(CLK_PERIOD / 2.0);
    end

    task reset_dut;
    begin
        nRST = 0;
        MAC_valid = 0;
        MAC_payload_rcv = 0;
        MAC_flush = 0;
        bytes_rcv_len = 0;
        @(posedge clk);
        @(posedge clk);
        @(negedge clk);
        nRST = 1;
        @(posedge clk);
        @(posedge clk);
    end
    endtask

    IP_rx ip_rx_inst(
        .CLK(CLK),
        .nRST(nRST),
        .MAC_valid(MAC_valid),
        .MAC_payload_rcv(MAC_payload_rcv),
        .MAC_flush(MAC_flush),
        .bytes_rcv_len(bytes_rcv_len),
        .IP_valid(IP_valid),
        .IP_flush(IP_flush),
        .IP_payload(IP_payload),
        .is_udp(is_udp),
        .is_tcp(is_tcp) 
    );

    task send_ip_packet(
        input [63:0] header0,  
        input [63:0] header1,
        input [63:0] header2,  
        input [63:0] header3,  
        input [63:0] payload[],
        input [7:0] last_bytes = 8
    );
    begin
        MAC_valid = 1;
        
        bytes_rcv_len = 8;
        MAC_payload_rcv = header0;
        @(posedge CLK);

        bytes_rcv_len = 8;
        MAC_payload_rcv = header1;
        @(posedge CLK);
        
        bytes_rcv_len = 8;
        MAC_payload_rcv = header2;
        @(posedge CLK);
        
        bytes_rcv_len = 8;
        MAC_payload_rcv = header3;
        @(posedge CLK);
        
        // Send payload
        foreach(payload[i]) begin
            bytes_rcv_len = (i == payload.size()-1) ? last_bytes : 8;
            MAC_payload_rcv = payload[i];
            @(posedge CLK);
        end
        
        MAC_valid = 0;
        bytes_rcv_len = 0;
    end
    endtask

    //calculate checksum
    function [15:0] calculate_checksum(
        input [63:0] header0, header1, header2, header3, 
    );
        // logic [255:0] sum = {header0, header1, header2, header3};
        logic [159:0] ip_header = {header0[15:0], header1[63:0], header2[31:0], header3[63:56]};
        integer i;
        logic [17:0] sum;
        logic [15:0] carry;
        begin
            sum = 0;
            for (i = 0; i < CKMSUM_CYCLES; i++) begin
                carry = ip_header[159-16*i -: 16];
                sum = sum + carry;
            end

            while (sum > 16'hFFFF) begin
                sum = sum[15:0] + sum[17:16];
            end
            calculate_checksum = ~sum[15:0];
        end
    endfunction

    task insert_checksum(
        input [63:0] header0,  
        input [63:0] header1,
        input [63:0] header2,  
        input [63:0] header3,  
        input [15:0] checksum
    );
        header2[63:48] = checksum;
    endtask

    inital begin
        logic [63:0] header0, header1, header2, header3;
        logic [63:0] payload[$] = {64'hA5A5A5A5A5A5A5A5, 64'h5A5A5A5A5A5A5A5A};
        word_t testcase = 0;
        // Initialize
        reset_dut();

        //Test case 1: Valid TCP packet
        testcase = 1;
        header0 = {48'h112233445566, 16'h0800, 4'h4, 4'h5, 8'h00};  // MAC src, IP type, Ver, IHL, TOS
        header1 = {16'h003C, 16'h1234, 3'b010, 13'h0, 8'h40, TCP_PROTOCOL}; //Total Length, Identification, Flags, Fragment Offset, TTL, Protocol
        header2 = {16'h0000, IP_SRC_ADDR, 16'h0000}; // Header Checksum, Source Address, first half Destination Address
        header3 = {16'h0000, 48'h0}; // second half Destination Address
        
        header2[15:0] = IP_DEST_ADDR[31:16];
        header3[63:48] = IP_DEST_ADDR[15:0];
        checksum = calculate_checksum(header0, header1, header2, header3);
        insert_checksum(header0, header1, header2, header3, checksum);
        
        send_ip_packet(header0, header1, header2, header3, payload);

        //Test case 2: Valid UDP packet
        testcase = 2;
        header0 = {32'h11223344, 16'h0800, 4'h4, 4'h5, 8'h00};  // MAC src, IP type, Ver, IHL, TOS
        header1 = {16'h003C, 16'h1234, 3'b010, 13'h0, 8'h40, TCP_PROTOCOL};
        header2 = {16'h0000, IP_SRC_ADDR, 16'h0000};
        header3 = {16'h0000, 48'h0};
        header2[15:0] = IP_DEST_ADDR[31:16];
        header3[63:48] = IP_DEST_ADDR[15:0];

        checksum = calculate_checksum(header0, header1, header2, header3);
        insert_checksum(header0, header1, header2, header3, checksum);
        send_ip_packet(header0, header1, header2, header3, payload);
        
        // Test case 3: Invalid packet (wrong checksum)
        testcase = 3;
        header0 = {32'h11223344, 16'h0800, 4'h4, 4'h5, 8'h00};  // MAC src, IP type, Ver, IHL, TOS
        header1 = {16'h003C, 16'h1234, 3'b010, 13'h0, 8'h40, TCP_PROTOCOL};
        header2 = {16'h0000, IP_SRC_ADDR, 16'h0000}; 
        header3 = {16'h0000, 48'h0};
        header2[15:0] = IP_DEST_ADDR[31:16];
        header3[63:48] = IP_DEST_ADDR[15:0];

        chcksum = calculate_checksum(header0, header1, header2, header3);
        insert_checksum(header0, header1, header2, header3, chcksum + 1); // Intentionally wrong checksum
        send_ip_packet(header0, header1, header2, header3, payload);

        //Test case 4: Ping
        testcase = 4;
        header0 = {48'h112233445566, 16'h0800, 4'h4, 4'h5, 8'h00}; 
        header1 = {16'h003C, 16'h1234, 3'b010, 13'h0, 8'h40, ICMP_PROTOCOL}; 
        header2 = {16'h0000, IP_SRC_ADDR, 16'h0000}; 
        header3 = {16'h0000, 48'h0}; //
        header2[15:0] = IP_DEST_ADDR[31:16];
        header3[63:48] = IP_DEST_ADDR[15:0];

        payload = {64'hCAFEBABECAFEBABE}; // ICMP payload
        checksum = calculate_checksum(header0, header1, header2, header3);
        insert_checksum(header0, header1, header2, header3, checksum);
        send_ip_packet(header0, header1, header2, header3, payload);

        
        $finish 
    end

endmodule