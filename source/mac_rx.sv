`include "phy_mac_if.vh"
`include "receiver_pkg.vh"
// require the PHY interface as the input of this module
// understanding the vtag

module mac_rx(
    input logic clk, nRST,
    phy_mac_if pmif
);
    //todo include crc logic
    // input data is MSB first, so reverse the byte order while connecting 
    import receiver_pkg::*;
    mac_state_t current_state, next_state;
    count_t count, next_count;
    logic [DATA_SIZE-1:0] next_data, previous_data; //previous data is used to check the MAC_VLAN tag
    logic [BYTE_NUMBER-1:0] next_length; 
    
    logic next_valid, next_start, next_end;

    crc32_parallel_64bit crc_inst (
        .clk(clk),
        .nRST(nRST && (current_state != MAC_IDLE)), // Reset the CRC when in MAC_IDLE state
        .data_in(pmif.data_phy),
        .valid_in(pmif.valid_phy && (current_state == MAC_PAYLOAD || current_state == MAC_VLAN)), // Only process valid data in PAYLOAD or VLAN state
        .crc_init(32'hFFFFFFFF), // default CRC initialization value
        .crc_out(pmif.crc_out)
    );

    always_ff @(posedge clk, negedge nRST) begin
        if (!nRST) begin
            pmif.valid_mac <= 1'b0;
            pmif.data_mac <= '0;
            pmif.length_mac <= '0;
            pmif.start_mac <= 1'b0;
            pmif.end_mac <= 1'b0;
            current_state <= MAC_IDLE;
            count <= '0;
            previous_data <= '0;
        end else begin
            pmif.valid_mac <= next_valid;
            pmif.data_mac <= next_data;
            pmif.length_mac <= next_length;
            pmif.start_mac <= next_start;
            pmif.end_mac <= next_end;
            current_state <= next_state;
            count <= next_count;
            previous_data <= current_data;
        end
    end

    always_comb begin
        next_data = pmif.data_phy; 
        next_length = pmif.length_phy; 
        next_valid = 1'b0;
        next_start = 1'b0;
        next_end = 1'b0; 

        next_state = current_state; 
        next_count = count;
        case (current_state)
            MAC_IDLE: begin
                if (pmif.valid_phy) begin
                    next_state = MAC_HEADER;
                    next_start = 1'b1; // Start of a new packet
                    next_count = '0; // Reset count when a new packet starts
                end 
            end
            //check the vlan tag
            // it cannot be fully layouted 
            MAC_HEADER: begin
                if (pmif.valid_phy) begin
                    // Process MAC_HEADER logic here
                    next_count = count + 1; // Increment count for each byte processed
                    case (count)
                        // check the source address 
                        '0: begin
                            // if (pmif.data_phy[47:0] != FPGA_MAC) begin
                            //     next_state = MAC_ERROR;
                            // end 
                            next_state = (pmif.data_phy[47:0] == FPGA_MAC)? MAC_HEADER : MAC_ERROR; // Check if the source address matches FPGA_MAC
                        end
                        1: begin
                            //set testbench to test the MAC_HEADER 
                            // Check the destination address
                            if (({pmif.data_phy[31:0], previous_data[63:48]} == NASDAQ_MAC)) begin
                                if (pmif.data_phy[47:32] == TPIC) begin
                                    next_state = MAC_VLAN;
                                end else if (pmif.data_phy[47:32] == IP_TYPE) begin
                                    next_state = MAC_PAYLOAD;
                                    next_start = 1'b1; // Start of the payload
                                end else begin
                                    next_state = MAC_ERROR; 
                                end
                            end else begin
                                next_state = MAC_ERROR; // Otherwise, go to MAC_ERROR state
                            end    
                        end
                    endcase                     
                end else begin
                    next_state = MAC_ERROR; 
                end
            end
            MAC_VLAN: begin
                //todo finish what rest of MAC_VLAN is doing
                // formate of MAC_VLAN
                /*
                    TCI include PCP, DEI and VID
                    |TPID (0x8100)| PCP   | DEI  | VID    |
                    | 16 bits     | 3 bits| 1 bit| 12 bits|
                */
                if (pmif.valid_phy) begin
                    // the first two bytes is IP TYPE, the rest is not
                    if (pmif.data_phy[15:0] == IP_TYPE) begin 
                        next_state = MAC_PAYLOAD; // If MAC_VLAN tag is correct, go to PAYLOAD state
                        next_start = 1'b1; // Start of the payload
                    end else begin
                        next_state = MAC_ERROR; // If MAC_VLAN tag is incorrect, go to MAC_ERROR state
                    end
                end else begin
                    next_state = MAC_ERROR; 
                end
            end
            MAC_PAYLOAD: begin
                if (pmif.valid_phy) begin
                    // Process data logic here
                    if (pmif.end_phy) begin
                        next_state = MAC_IDLE; // Go back to MAC_IDLE after processing data
                        next_end = 1'b1; // Mark the end of the packet
                    end else begin
                        next_state = MAC_PAYLOAD; // Stay in PAYLOAD state
                        next_valid = 1'b1;
                    end
                end else begin
                    next_state = MAC_ERROR; 
                end
            end
            MAC_ERROR: begin
                if (pmif.end_phy) begin
                    next_state = MAC_IDLE; // Reset to MAC_IDLE on error
                end 
            end
            default: begin
                next_state = MAC_IDLE; // Default case to handle unexpected states
            end
        endcase
    end

endmodule