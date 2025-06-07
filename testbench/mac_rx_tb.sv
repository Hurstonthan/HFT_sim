`include "phy_mac_if.vh"
`include "receiver_pkg.vh"

`timescale 1ns / 1ns

module mac_rx_tb;
import receiver_pkg::*;
    parameter PERIOD = 10; // Clock period in ns
    logic clk = 0, nRST;

    // interface
    phy_mac_if mipif();
    
    //test program
    test PROG (clk, nRST, mipif);

    // clock generation
    mac_rx (clk, nRST, mipif);
endmodule

// test program
program test(
    input logic clk,
    output logic nRST,
    phy_mac_if.tb mipif
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
        mipif.valid_phy = 1'b0;
        mipif.data_phy = '0;
        mipif.start_phy = 1'b0;
        mipif.length_phy = '0;
        mipif.end_phy = 1'b0;
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
        mipif.valid_phy = 1'b1;
        mipif.start_phy = 1'b1;
        mipif.length_phy = length;
        
        // first packet data
        mipif.data_phy = (insert_error && (error_position == 0)) ? 
                         (data[0] ^ error_pattern) : data[0];
        mipif.end_phy = (length == 1) ? 1'b1 : 1'b0;
        @(posedge clk);
        mipif.start_phy = 1'b0;
        
        // internal data transfer
        for (int i = 1; i < length-1; i++) begin
            mipif.data_phy = (insert_error && (error_position == i)) ? 
                            (data[i] ^ error_pattern) : data[i];
            mipif.end_phy = 1'b0;
            @(posedge clk);
        end
        
        // last packet data
        if (length > 1) begin
            mipif.data_phy = (insert_error && (error_position == length-1)) ? 
                            (data[length-1] ^ error_pattern) : data[length-1];
            mipif.end_phy = 1'b1;
            @(posedge clk);
        end
        
        // done sedning
        mipif.valid_phy = 1'b0;
        mipif.end_phy = 1'b0;
        @(posedge clk);
    endtask
    
    // correct transimssion 
    task test_correct();
        test_case = "Correct Transmission";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // send correct packet 
        send_packet(packet_data, MAX_PACKET_SIZE);
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask
    
    // middle error testing 
    task test_middle_error();
        test_case = "Middle Error Transmission";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // data generation
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // send error packet
        int error_pos = $urandom_range(1, MAX_PACKET_SIZE-2);
        $display("Inserting error at position %0d", error_pos);
        
        // send wrong packet
        send_packet(
            packet_data, 
            MAX_PACKET_SIZE, 
            1,          // insert_error
            error_pos   // error_position
        );
        error_count++;
        packet_count++;
        
        // 
        repeat(10) @(posedge clk);
    endtask
    
    // fully error testing
    task test_total_error();
        test_case = "Total Error Transmission";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // generate test data
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        
        send_packet(
            packet_data, 
            MAX_PACKET_SIZE, 
            1,          
            -1,         
            '1          
        );
        error_count++;
        packet_count++;
        
        // waiting for MAC to process
        repeat(10) @(posedge clk);
    endtask
    
    // random error testing
    task test_random_error();
        test_case = "Random Error Transmission";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // generate random data
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = $random;
        end
        
        // random error insertion
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            if ($urandom_range(0, 100) < 30) begin // 30% chance to insert error
                logic [DATA_SIZE-1:0] error_mask = 1 << $urandom_range(0, DATA_SIZE-1);
                packet_data[i] ^= error_mask;
                $display("Inserted error at position %0d with mask %h", i, error_mask);
            end
        end
        
        // send packet with random errors
        send_packet(packet_data, MAX_PACKET_SIZE);
        error_count++;
        packet_count++;
        
        // waiting for MAC to process
        repeat(10) @(posedge clk);
    endtask

    task test_alternative();
        test_case = "Alternative Test Case";
        $display("\n[%0t] TEST: %s", $time, test_case);
        
        // generate alternative data
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data[i] = (i % 2 == 0) ? 'hAA : 'h55;
        end
        
        // send alternative packet
        send_packet(packet_data, MAX_PACKET_SIZE);
        packet_count++;
        
        repeat(10) @(posedge clk);
    endtask

    task test_back_to_back();
        test_case = "Back-to-Back Packets";
        $display("\n[%0t] TEST: %s", $time, test_case);
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data1;
        logic [MAX_PACKET_SIZE-1:0][DATA_SIZE-1:0] packet_data2;
        for (int i = 0; i < MAX_PACKET_SIZE; i++) begin
            packet_data1[i] = $random;
            packet_data2[i] = $random;
        end
        
        send_packet(packet_data1, MAX_PACKET_SIZE);
        send_packet(packet_data2, MAX_PACKET_SIZE);
        
        packet_count += 2;
        repeat(10) @(posedge clk);
    endtask


    initial begin
        int seed = 12345; // Set a seed for reproducibility
        $urandom(seed); 
        $display("Using random seed: %0d", seed);

        reset();    
        
        test_correct(); // test correct transmission       
        test_middle_error();  
        test_total_error();   
        test_random_error();  
        test_alternative(); // test alternative case
        // It does not support back-to-back packets in this version
        // test_back_to_back(); // test back-to-back packets
        // final report
        test_case = "Test Complete";
        $display("\n[%0t] TEST: %s", $time, test_case);
        $display("Packets sent: %0d", packet_count);
        $display("Error packets: %0d", error_count);
        
        #100ns;
        $finish;
    end

endprogram