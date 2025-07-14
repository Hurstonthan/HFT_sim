`timescale 1ns/10ps
module chksum_tcp_pl #(
    parameter DATA_WIDTH = 64 // Width of the data bus
)
(
    input logic CLK,
    input logic nRST,
    input logic FIFO_rd_en,
    input logic clear,
    input logic [DATA_WIDTH - 1:0] TCP_payload_tx, // Data to be processed

    output logic [15:0] TCP_checksum_pl // Payload data to be sent   
);

    logic [16:0] TCP_checksum, nTCP_checksum;

    assign TCP_checksum_pl = TCP_checksum[15:0];

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            TCP_checksum <= 0;
        end else begin
            TCP_checksum <= (nTCP_checksum[15:0] + nTCP_checksum[16]);
        end
    end

    // verifvy with google
    always_comb begin
        nTCP_checksum = 0;
        if (clear) begin
            nTCP_checksum = 0;
        end else if (FIFO_rd_en) begin
            nTCP_checksum = TCP_checksum + TCP_payload_tx[15:0] + TCP_payload_tx[31:16] + TCP_payload_tx[47:32] + TCP_payload_tx[63:48];
        end
    end

endmodule