`timescale 1ns/10ps
`include "rx_pkg.vh"

module UDP_rx (
    input logic CLK, nRST,
    input logic IP_valid,
    input logic IP_flush,
    input logic [63:0] IP_payload,

    output logic UDP_flush,
    output logic UDP_valid,
    output logic [63:0] UDP_payload 
);
    import rx_pkg::*;
    udp_state_t current_state, next_state;
    
    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            current_state <= UDP_IDLE;

        end else begin
            current_state <= next_state;
        
        end
    end

    always_comb begin
        next_state = current_state;
        case(current_state) 
            UDP_IDLE:

            UDP_
        endcase 
    end
