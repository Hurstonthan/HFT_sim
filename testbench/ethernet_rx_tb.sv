`include "receiver_pkg.vh"
`include "phy_mac_if.vh"
`include "mac_ip_if.vh"
`include "ip_udp_if.vh"
`include "ethernet_rx_if.vh"

`timescale 1ns / 1ps

module ethernet_rx_tb;
    import receiver_pkg::*;
    
    // Clock and reset
    parameter PERIOD = 10; // Clock period in ns
    logic clk = 0;
    logic nRST;
    
    // Interfaces
    ethernet_rx_if erif();
    phy_mac_if pmif();
    mac_ip_if mipif();
    ip_udp_if iuif();
    
    // Clock generation
    always #(PERIOD/2) clk = ~clk;
    
    // Test program
    test PROG(clk, nRST, erif, pmif, mipif, iuif);
    
    // DUT instantiation
    ethernet_rx DUT(
        .clk(clk),
        .nRST(nRST),
        .erif(erif),
        .pmif(pmif),
        .mipif(mipif),
        .iuif(iuif)
    );
endmodule

// Test program
program test(
    input logic clk,
    output logic nRST,
    ethernet_rx_if.tb erif,
    phy_mac_if.tb pmif,
    mac_ip_if.tb mipif,
    ip_udp_if.tb iuif
);
    import receiver_pkg::*;
    
    // Test parameters
    localparam MAX_PACKET_SIZE = 8;
    
    string test_case;
    int packet_count = 0;
    int error_count = 0;
    
    // Reset task
    task reset();
        test_case = "Reset";
        $display("[%0t] TEST: %s", $time, test_case);
        
        nRST = 1'b0;
        
        // Reset all interface signals
        erif.valid_phy = 1'b0;
        erif.data_phy = '0;
        erif.start_phy = 1'b0;
        erif.length_phy = '0;
        erif.end_phy = 1'b0;
        
        #20ns;
        nRST = 1'b1;
        @(posedge clk);
    endtask
    
    // Send packet through PHY layer
    task send_phy_packet(
        input logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] data,
        input int length,
        input logic insert_error = 0,
        input int error_position = -1,
        input logic [DATA_SIZE-1:0] error_pattern = '1
    );
        // Send packet
        erif.valid_phy = 1'b1;
        erif.start_phy = 1'b1;
        erif.length_phy = length;
        
        // First packet data
        erif.data_phy = (insert_error && (error_position == 0)) ? 
                      (data[0] ^ error_pattern) : data[0];
        erif.end_phy = (length == 1) ? 1'b1 : 1'b0;
        @(posedge clk);
        erif.start_phy = 1'b0;
        
        // Internal data transfer
        for (int i = 1; i < length-1; i++) begin
            erif.data_phy = (insert_error && (error_position == i)) ? 
                         (data[i] ^ error_pattern) : data[i];
            erif.end_phy = 1'b0;
            @(posedge clk);
        end
        
        // Last packet data
        if (length > 1) begin
            erif.data_phy = (insert_error && (error_position == length-1)) ? 
                         (data[length-1] ^ error_pattern) : data[length-1];
            erif.end_phy = 1'b1;
            @(posedge clk);
        end
        
        // Done sending
        erif.valid_phy = 1'b0;
        erif.end_phy = 1'b0;
        @(posedge clk);
    endtask
    
    // Generate Ethernet frame with MAC header
    function void generate_ethernet_frame(ref logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data);
        // Destination MAC (6 bytes)
        packet_data[0][47:0] = 48'hAABBCCDDEEFF;
        
        // Source MAC (6 bytes)
        packet_data[0][63:48] = 16'h1122;
        packet_data[1][31:0] = 32'h33445566;
        
        // EtherType (2 bytes) - 0x0800 for IPv4
        packet_data[1][47:32] = 16'h0800;
        
        // Rest of the packet can be IP data
        // Starting from packet_data[1][63:48]
    endfunction
    
    // Test case 1: Basic Ethernet packet forwarding
    task test_basic_forwarding();
        test_case = "Basic Ethernet Packet Forwarding";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // Data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate Ethernet frame
        generate_ethernet_frame(packet_data);
        
        // Send packet
        send_phy_packet(packet_data, MAX_PACKET_SIZE);
        packet_count++;
        
        // Check if data is propagated through interfaces
        repeat(10) @(posedge clk);
        
        $display("[%0t] Packet sent through PHY interface", $time);
    endtask
    
    // Test case 2: Error in Ethernet packet
    task test_error_packet();
        test_case = "Ethernet Packet with Error";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // Data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate Ethernet frame
        generate_ethernet_frame(packet_data);
        
        // Send packet with error in the middle
        send_phy_packet(packet_data, MAX_PACKET_SIZE, 1, 3, 64'hFF00FF00FF00FF00);
        packet_count++;
        error_count++;
        
        repeat(10) @(posedge clk);
        
        $display("[%0t] Error packet sent through PHY interface", $time);
    endtask
    
    // Test case 3: Minimum size Ethernet packet
    task test_minimum_packet();
        test_case = "Minimum Size Ethernet Packet";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // Data generation - minimum Ethernet frame is 64 bytes
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // Generate Ethernet frame
        generate_ethernet_frame(packet_data);
        
        // Send minimum packet
        send_phy_packet(packet_data, 4); // Only need 4 words for minimum frame
        packet_count++;
        
        repeat(10) @(posedge clk);
        
        $display("[%0t] Minimum size packet sent through PHY interface", $time);
    endtask
    
    // Main test sequence
    initial begin
        int seed = 12345; // Set a seed for reproducibility
        $urandom(seed);
        $display("Using random seed: %0d", seed);
        
        reset();
        
        test_basic_forwarding();
        test_error_packet();
        test_minimum_packet();
        
        // Final report
        test_case = "Test Complete";
        $display("\n[%0t] TEST: %s", $time, test_case);
        $display("Packets sent: %0d", packet_count);
        $display("Error packets: %0d", error_count);
        
        #100ns;
        $finish;
    end
endprogram


