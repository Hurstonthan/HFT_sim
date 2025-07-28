`timescale 1ns/10ps
`include "rx_pkg.sv"
module moldudp64(
    input logic CLK, nRST,
    input logic UDP_flush,
    input logic UDP_valid,
    input logic [63:0] UDP_payload,
    output logic [15:0] UDP_len,
    output logic MAC_valid, // enbale MAC TX
    output logic [63:0] UDP_tx_payload
);
    import rx_pkg::*;
    
endmodule