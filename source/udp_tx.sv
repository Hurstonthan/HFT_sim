`include "reciver_pkg.vh"
`include "udp_tx_if.vh"

module udp_tx(
    input logic clk, nRST,
    udp_mac_if_vh iumif
);

    import reciver_pkg::*;
    udp_state_t current_state, next_state;
    logic [DATA_SIZE-1:0] next_data;
    logic [BYTE_NUMBER-1:0] next_length;

    always_ff @(posedge clk, negedge nRST) begin 
        if (!nRST) begin
            current_state <= UDP_IDLE;
        end else begin
            
        end    
    end

    always_comb begin

        case(current_state)
    end



endmodule