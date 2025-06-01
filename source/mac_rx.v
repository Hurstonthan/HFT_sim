`include "reciver_pkg.vh"
`include "phy_mac_if.vh"
// require the PHY interface as the input of this module
// understanding the vtag
module mac_rx(
    input logic clk, nRST,
    phy_mac_if pmif
);
    //todo include crc logic
    import reciever_pkg::*;
    state_t current_state, next_state;
    count_t count, next_count;
    logic [DATA_SIZE-1:0] next_data;
    logic [BYTE_NUMBER-1:0] next_length; 
    
    always_ff @(posedge clk, negedge nRST) begin
        if (!nRST) begin
            pmif.valid_mac <= 1'b0;
            pmif.data_mac <= '0;
            pmif.length_mac <= '0;
            pmif.start_mac <= 1'b0;
            pmif.end_mac <= 1'b0;
            current_state <= IDLE;
            count <= '0;
        end else begin
            pmif.valid_mac <= next_valid;
            pmif.data_mac <= next_data;
            pmif.length_mac <= next_length;
            pmif.start_mac <= next_start;
            pmif.end_mac <= next_end;
            current_state <= next_state;
            count <= next_count;
        end
    end

    always_comb begin
        next_data = pmif.data_phy; 
        next_length = pmif.length_phy; 
        next_valid = pmif.valid_phy;
        next_start = pmif.start_phy;
        next_end = pmif.end_phy;

        next_state = current_state; 
        next_count = count;
        case (current_state)
            IDLE: begin
                if (pmif.valid_phy) begin
                    next_state = HEADER;
                    next_start = 1'b1; // Start of a new packet
                end 
            end
            HEADER: begin
                if (pmif.valid_phy) begin
                    // Process header logic here
                    case (count)

                    endcase                     
                end else begin
                    next_state = ERROR; 
                end
            end
            PAYLOAD: begin
                if (pmif.valid_phy) begin
                    // Process data logic here
                    if (pmif.end_phy) begin
                        next_state = IDLE; // Go back to IDLE after processing data
                    end
                end else begin
                    next_state = ERROR; 
                end
            end
            ERROR: begin
                // Handle error state, if necessary
                next_state = IDLE; // Reset to IDLE on error
            end
            default: begin
                next_state = IDLE; // Default case to handle unexpected states
            end
        endcase
    end

endmodule