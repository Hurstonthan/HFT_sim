`include "ip_udp_if.vh"
`include "receiver_pkg.vh"

`timescale 1ns / 1ns

module udp_rx_tb;
import receiver_pkg::*;
    parameter PERIOD = 10; // Clock period in ns
    logic clk = 0, nRST;

    // interface
    ip_udp_if ipuif();
    
    // test program
    test PROG (clk, nRST, ipuif);

    // clock generation
    always #(PERIOD/2) clk = ~clk;
    
    // DUT instantiation
    udp_rx DUT (clk, nRST, ipuif);
endmodule

// test program
program test(
    input logic clk,
    output logic nRST,
    ip_udp_if.tb ipuif
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
        ipuif.valid_ip = 1'b0;
        ipuif.data_ip = '0;
        ipuif.start_ip = 1'b0;
        ipuif.length_ip = '0;
        ipuif.end_ip = 1'b0;
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
        ipuif.valid_ip = 1'b1;
        ipuif.start_ip = 1'b1;
        ipuif.length_ip = length;
        
        // first packet data
        ipuif.data_ip = (insert_error && (error_position == 0)) ? 
                       (data[0] ^ error_pattern) : data[0];
        ipuif.end_ip = (length == 1) ? 1'b1 : 1'b0;
        @(posedge clk);
        ipuif.start_ip = 1'b0;
        
        // internal data transfer
        for (int i = 1; i < length-1; i++) begin
            ipuif.data_ip = (insert_error && (error_position == i)) ? 
                          (data[i] ^ error_pattern) : data[i];
            ipuif.end_ip = 1'b0;
            @(posedge clk);
        end
        
        // last packet data
        if (length > 1) begin
            ipuif.data_ip = (insert_error && (error_position == length-1)) ? 
                          (data[length-1] ^ error_pattern) : data[length-1];
            ipuif.end_ip = 1'b1;
            @(posedge clk);
        end
        
        // done sending
        ipuif.valid_ip = 1'b0;
        ipuif.end_ip = 1'b0;
        @(posedge clk);
    endtask
    
    // Generate valid UDP header
    function void generate_udp_header(ref logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data);
        // Source Port (16 bits) + Destination Port (16 bits)
        packet_data[0][31:0] = {SOURCE_PORT, DESTINATION_PORT};
        
        // Length (16 bits) + Checksum (16 bits)
        packet_data[0][63:32] = {16'h0018, 16'h0000}; // Length = 24 bytes (8 header + 16 data)
        
        // Data starts at packet_data[1][31:0]
    endfunction
    
    // correct transmission 
    task test_correct_udp();
        test_case = "Correct UDP Transmission";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid UDP header
        generate_udp_header(packet_data);
        
        // send correct packet 
        send_packet(packet_data, MAX_PACKET_SIZE);
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // UDP port error testing 
    task test_port_error();
        test_case = "UDP Port Error";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid UDP header
        generate_udp_header(packet_data);
        
        // Corrupt the destination port
        packet_data[0][15:0] = 16'h1234; // Invalid destination port
        
        // send packet with port error
        send_packet(packet_data, MAX_PACKET_SIZE);
        error_count++;
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // UDP length error testing
    task test_length_error();
        test_case = "UDP Length Error";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid UDP header
        generate_udp_header(packet_data);
        
        // Change length to invalid value
        packet_data[0][47:32] = 16'h0004; // Too small (less than header size)
        
        // send packet with length error
        send_packet(packet_data, MAX_PACKET_SIZE);
        error_count++;
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // UDP checksum error testing
    task test_checksum_error();
        test_case = "UDP Checksum Error";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid UDP header
        generate_udp_header(packet_data);
        
        // Set non-zero checksum (assuming your implementation validates checksums)
        packet_data[0][63:48] = 16'hABCD; // Non-zero checksum
        
        // send packet with checksum error
        send_packet(packet_data, MAX_PACKET_SIZE);
        error_count++;
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // Test with minimum-sized UDP packet
    task test_minimum_packet();
        test_case = "Minimum UDP Packet Size";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation - minimum UDP packet is 8 bytes header + 0 bytes data
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid UDP header
        generate_udp_header(packet_data);
        
        // Set length to minimum (8 bytes)
        packet_data[0][47:32] = 16'h0008;
        
        // send minimum packet
        send_packet(packet_data, 1); // Only need 1 word for header
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask

    // Test with maximum-sized UDP packet
    task test_maximum_packet();
        test_case = "Maximum UDP Packet Size";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate valid UDP header
        generate_udp_header(packet_data);
        
        // Set length to maximum for our test (MAX_PACKET_SIZE * 8 bytes)
        packet_data[0][47:32] = 16'h0008 + (MAX_PACKET_SIZE-1) * 8; // Header + data
        
        // send maximum packet
        send_packet(packet_data, MAX_PACKET_SIZE);
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask

    initial begin
        int seed = 12345; // Set a seed for reproducibility
        $urandom(seed); 
        $display("Using random seed: %0d", seed);

        reset();    
        
        test_correct_udp();        
        test_port_error();   
        test_length_error();    
        test_checksum_error();  
        test_minimum_packet(); 
        test_maximum_packet();    
        
        // final report
        test_case = "Test Complete";
        $display("\n[%0t] TEST: %s", $time, test_case);
        $display("Packets sent: %0d", packet_count);
        $display("Error packets: %0d", error_count);
        
        #100ns;
        $finish;
    end

endprogram
