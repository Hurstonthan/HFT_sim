`include "receiver_pkg.vh"
`include "phy_mac_if.vh"
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
    logic [DATA_SIZE-1:0] next_data, previous_data; //previous data is used to check the vlan tag
    logic [BYTE_NUMBER-1:0] next_length; 
    
    logic next_valid, next_start, next_end;

    crc32_parallel_64bit crc_inst (
        .clk(clk),
        .nRST(nRST && (state != IDLE)), // Reset the CRC when in IDLE state
        .data_in(pmif.data_phy),
        .valid_in(pmif.valid_phy && (current_state == PAYLOAD || current_state == VLAN)), // Only process valid data in PAYLOAD or VLAN state
        .crc_init(32'hFFFFFFFF), // default CRC initialization value
        .crc_out(pmif.crc_out), 
    );

    always_ff @(posedge clk, negedge nRST) begin
        if (!nRST) begin
            pmif.valid_mac <= 1'b0;
            pmif.data_mac <= '0;
            pmif.length_mac <= '0;
            pmif.start_mac <= 1'b0;
            pmif.end_mac <= 1'b0;
            current_state <= IDLE;
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
            IDLE: begin
                if (pmif.valid_phy) begin
                    next_state = HEADER;
                    next_start = 1'b1; // Start of a new packet
                    next_count = '0; // Reset count when a new packet starts
                end 
            end
            //check the vlan tag
            // it cannot be fully layouted 
            HEADER: begin
                if (pmif.valid_phy) begin
                    // Process header logic here
                    next_count = count + 1; // Increment count for each byte processed
                    case (count)
                        // check the source address 
                        '0: begin
                            // if (pmif.data_phy[47:0] != FPGA_MAC) begin
                            //     next_state = ERROR;
                            // end 
                            next_state = (pmif.data_phy[47:0] == FPGA_MAC)? HEADER : ERROR; // Check if the source address matches FPGA_MAC
                        end
                        1: begin
                            //set testbench to test the header 
                            // Check the destination address
                            if (({pmif.data_phy[31:0], previous_data[63:48]} == NASDAQ_MAC)) begin
                                if (pmif.data_phy[47:32] == TPIC) begin
                                    next_state = VLAN;
                                end else if (pmif.data_phy[47:32] == IP_TYPE) begin
                                    next_state = PAYLOAD;
                                    next_start = 1'b1; // Start of the payload
                                end else begin
                                    next_state = ERROR; 
                                end
                            end else begin
                                next_state = ERROR; // Otherwise, go to ERROR state
                            end    
                        end
                    endcase                     
                end else begin
                    next_state = ERROR; 
                end
            end
            VLAN: begin
                //todo finish what rest of vlan is doing
                // formate of VLAN
                /*
                    TCI include PCP, DEI and VID
                    |TPID (0x8100)| PCP   | DEI  | VID    |
                    | 16 bits     | 3 bits| 1 bit| 12 bits|
                */
                if (pmif.valid_phy) begin
                    // the first two bytes is IP TYPE, the rest is not
                    if (pmif.data_phy[15:0] == IP_TYPE) begin 
                        next_state = PAYLOAD; // If VLAN tag is correct, go to PAYLOAD state
                        next_start = 1'b1; // Start of the payload
                    end else begin
                        next_state = ERROR; // If VLAN tag is incorrect, go to ERROR state
                    end
                end else begin
                    next_state = ERROR; 
                end
            end
            PAYLOAD: begin
                if (pmif.valid_phy) begin
                    // Process data logic here
                    if (pmif.end_phy) begin
                        next_state = IDLE; // Go back to IDLE after processing data
                        next_end = 1'b1; // Mark the end of the packet
                    end else begin
                        next_state = PAYLOAD; // Stay in PAYLOAD state
                        next_valid = 1'b1;
                    end
                end else begin
                    next_state = ERROR; 
                end
            end
            ERROR: begin
                if (pmif.end_phy) begin
                    next_state = IDLE; // Reset to IDLE on error
                end 
            end
            default: begin
                next_state = IDLE; // Default case to handle unexpected states
            end
        endcase
    end

endmodule