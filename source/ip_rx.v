`include "reciever_pkg.vh"
`include "mac_ip_if.vh"

module ip_rx(
    input logic clk, nRST,
    mac_ip_if mipif
);   
    import reciever_pkg::*;
    state_t current_state, next_state;

    logic [DATA_SIZE-1:0] next_data;
    logic [DATA_LENGTH-1:0] next_length;
    logic next_valid, next_start, next_end;
    logic head_complete; // Flag to indicate if the header is complete 

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            mipif.valid_udp <= 1'b0;
            mipif.data_udp <= '0;
            mipif.length_udp <= '0;
            mipif.start_udp <= 1'b0;
            mipif.end_udp <= 1'b0;
            next_state <= IDLE;
        end else begin
            mipif.valid_udp <= next_valid;
            mipif.data_udp <= next_data;
            mipif.length_udp <= next_length;
            mipif.start_udp <= next_start;
            mipif.end_udp <= next_end;
            current_state <= next_state;
        end
    end
    //todo fixed everything
    // implemnent the state machine logic
    always_comb begin
        next_data = '0;
        next_length = '0;
        next_valid = 1'b0;
        next_start = 1'b0;
        next_end = 1'b0;

        case (current_state)
            IDLE: begin
                if (mipif.valid_ip) begin
                    next_state = HEADER;
                    next_start = 1'b1; // Start of a new packet
                end else begin
                    next_state = IDLE; // Stay in IDLE if no valid packet
                end
            end
            HEADER: //if the head is complete, then we goes to payload
            PAYLOAD: 
            ERROR: begin
                if (mipif.valid_ip) begin
                    next_state = HEADER; // Go back to HEADER if a new packet is detected
                    next_start = 1'b1; // Start of a new packet
                end else begin
                    next_state = ERROR; // Stay in ERROR if no valid packet
                end   
            end   
            default: begin
                next_state = IDLE; // Fallback state
            end
        endcase
    end
endmodule