`include "rx_pkg.vh"
`timescale 1ns/1ns
module ip_rx_tb;
import rx_pkg::*;
    parameter PERIOD = 10; 
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
    inital begin
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
        n_rst = 0;
        MAC_valid = 0;
        MAC_payload_rcv = 0;
        MAC_flush = 0;
        bytes_rcv_len = 0;
        @(posedge clk);
        @(posedge clk);
        @(negedge clk);
        n_rst = 1;
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
    endtask

    //todo calculate checksum
    function [15:0] calculate_checksum(
        input [63:0] header0, header1, header2, header3, 
    );


    endfunction

    inital begin
        word_t testcase = 0;
        // Initialize
        reset_dut();

        //Test case 1: Valid IP packet
        word_t testcase = 1;
        
         
    end

endmodule