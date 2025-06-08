`include "mac_ip_if.vh"
`include "receiver_pkg.vh"

`timescale 1ns / 1ns

module ip_rx_tb;
import receiver_pkg::*;
    parameter PERIOD = 10; // Clock period in ns
    logic clk = 0, nRST;

    // interface
    mac_ip_if mipif();
    
    // test program
    test PROG (clk, nRST, mipif);

    // clock generation
    always #(PERIOD/2) clk = ~clk;
    
    // DUT instantiation
    ip_rx DUT (clk, nRST, mipif);
endmodule

// test program
program test(
    input logic clk,
    output logic nRST,
    mac_ip_if.tb mipif
);
    import receiver_pkg::*; 
    parameter BYTE_NUMBER = 12;  
    localparam MAX_PACKET_SIZE = 8;     
    localparam MAX_PACKET_SIZE_BITS = $clog2(MAX_PACKET_SIZE);

    string test_case;
    int packet_count = 0;
    int error_count = 0;
    
    task reset();
        test_case = "Reset";
        $display("[%0t] TEST: %s", $time, test_case);
        nRST = 1'b0;
        mipif.valid_mac = 1'b0;
        mipif.data_mac = '0;
        mipif.start_mac = 1'b0;
        mipif.length_mac = '0;
        mipif.end_mac = 1'b0;
        #20ns;
        nRST = 1'b1;
        @(posedge clk);
    endtask
    
    task send_packet(
        input logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] data,
        input int length,
        input logic insert_error = 0,    
        input int error_position = -1,   
        input logic [DATA_SIZE-1:0] error_pattern = '1 
    );
        // send packet
        mipif.valid_mac = 1'b1;
        mipif.start_mac = 1'b1;
        mipif.length_mac = length;
        
        // first packet data
        mipif.data_mac = (insert_error && (error_position == 0)) ? 
                       (data[0] ^ error_pattern) : data[0];
        mipif.end_mac = (length == 1) ? 1'b1 : 1'b0;
        @(posedge clk);
        mipif.start_mac = 1'b0;
        
        // internal data transfer
        for (int i = 1; i < length-1; i++) begin
            mipif.data_mac = (insert_error && (error_position == i)) ? 
                          (data[i] ^ error_pattern) : data[i];
            mipif.end_mac = 1'b0;
            @(posedge clk);
        end
        
        // last packet data
        if (length > 1) begin
            mipif.data_mac = (insert_error && (error_position == length-1)) ? 
                          (data[length-1] ^ error_pattern) : data[length-1];
            mipif.end_mac = 1'b1;
            @(posedge clk);
        end
        
        // done sending
        mipif.valid_mac = 1'b0;
        mipif.end_mac = 1'b0;
        @(posedge clk);
    endtask
    
    // Generate valid IP header
    // todo the ip header is different from my idea
    function void generate_ip_header(ref logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data);
        // Version (4 bits) + IHL (4 bits) + DSCP (6 bits) + ECN (2 bits) + Total Length (16 bits)
        packet_data[0][31:0] = {IP_VERSION, IP_HEADER_LENGTH, 8'h00, 16'h0028}; // Total length = 40 bytes
        
        // Identification (16 bits) + Flags (3 bits) + Fragment Offset (13 bits)
        packet_data[0][63:32] = {16'h1234, 3'b010, 13'h0000}; // Don't fragment
        
        // TTL (8 bits) + Protocol (8 bits) + Header Checksum (16 bits)
        packet_data[1][31:0] = {IP_TTL, UDP_PROTOCOL, 16'h0000}; // Checksum will be calculated later
        
        // Source IP Address (32 bits)
        packet_data[1][63:32] = NASDAQ_IP;
        
        // Destination IP Address (32 bits)
        packet_data[2][31:0] = FPGA_IP;
        
        // Options + Padding (if any) - None in this case
        // Data starts at packet_data[2][63:32]
    endfunction
    
    // correct transmission 
    task test_correct_ip();
        test_case = "Correct IP Transmission";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid IP header
        generate_ip_header(packet_data);
        
        // send correct packet 
        send_packet(packet_data, MAX_PACKET_SIZE);
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // IP header error testing 
    task test_ip_header_error();
        test_case = "IP Header Error";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid IP header
        generate_ip_header(packet_data);
        
        // Corrupt the IP version field
        packet_data[0][63:60] = 4'h6; // Invalid IP version for our implementation
        
        // send packet with header error
        send_packet(packet_data, MAX_PACKET_SIZE);
        error_count++;
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // IP protocol error testing
    task test_protocol_error();
        test_case = "Protocol Error";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid IP header
        generate_ip_header(packet_data);
        
        // Change protocol to something other than UDP
        packet_data[1][23:16] = 8'h01; // ICMP protocol instead of UDP
        
        // send packet with protocol error
        send_packet(packet_data, MAX_PACKET_SIZE);
        error_count++;
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // IP address error testing
    task test_ip_address_error();
        test_case = "IP Address Error";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid IP header
        generate_ip_header(packet_data);
        
        // Change destination IP address to incorrect value
        packet_data[2][31:0] = 32'hC0A80102; // Some other IP address
        
        // send packet with address error
        send_packet(packet_data, MAX_PACKET_SIZE);
        error_count++;
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // Fragmented IP packet testing
    task test_fragmented_packet();
        test_case = "Fragmented IP Packet";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid IP header
        generate_ip_header(packet_data);
        
        // Set fragmentation flags and offset
        packet_data[0][45:32] = {3'b001, 13'h0008}; // More fragments, offset = 8
        
        // send fragmented packet
        send_packet(packet_data, MAX_PACKET_SIZE);
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask

    // Test with minimum-sized IP packet
    task test_minimum_packet();
        test_case = "Minimum IP Packet Size";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation - minimum IP packet is 20 bytes header + 0 bytes data
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid IP header
        generate_ip_header(packet_data);
        
        // Set total length to minimum (20 bytes)
        packet_data[0][15:0] = 16'h0014;
        
        // send minimum packet
        send_packet(packet_data, 3); // Only need 3 words for header
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask

    initial begin
        int seed = 12345; // Set a seed for reproducibility
        $urandom(seed); 
        $display("Using random seed: %0d", seed);

        reset();    
        
        test_correct_ip();        
        test_ip_header_error();   
        test_protocol_error();    
        test_ip_address_error();  
        test_fragmented_packet(); 
        test_minimum_packet();    
        
        // final report
        test_case = "Test Complete";
        $display("\n[%0t] TEST: %s", $time, test_case);
        $display("Packets sent: %0d", packet_count);
        $display("Error packets: %0d", error_count);
        
        #100ns;
        $finish;
    end

endprogram
