`timescale 1ns / 10ps
module checksum_TCP #(
    parameter DATA_WIDTH = 64 // Width of the data bus
)
(
    input logic CLK,
    input logic nRST,
    input logic clear,
    input logic wr_FIFO_en,
    input logic axis_last,    
    input logic [DATA_WIDTH - 1:0] TCP_payload_tx, // Data to be processed

    input logic TX_en,
    input logic re_trans,

    output logic [15:0] TCP_checksum_out // Payload data to be sent   
    
);

    logic [15:0] nTCP_checksum_out;
    logic [16:0] TCP_checksum, nTCP_checksum, TCP_checksum_send, nTCP_checksum_send;
    logic [19:0] temp;
    logic [19:0] temp1;
    logic up_send;

    assign up_send = TX_en && !re_trans;
    assign TCP_checksum_out = (TCP_checksum[15:0] == 16'h0) ? 16'hFFFF : TCP_checksum;

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            TCP_checksum <= 0;
            TCP_checksum_send <= 0;
            TCP_checksum_out <= 0;
        end else begin
            TCP_checksum <= nTCP_checksum;
            TCP_checksum_send <= nTCP_checksum_send;
            TCP_checksum_out <= nTCP_checksum_out;

        end
    end


    always_comb begin
        nTCP_checksum = TCP_checksum;
        nTCP_checksum_send = TCP_checksum_send;
        nTCP_checksum_out = 0;

        
        if (up_send) begin
            nTCP_checksum_send = 0;
            nTCP_checksum_out = TCP_checksum_send;
        end
        if (clear) begin
            nTCP_checksum = 0;
        end else if (wr_FIFO_en) begin
            temp = {3'b0, TCP_checksum[15:0]} + TCP_payload_tx[15:0] + TCP_payload_tx[31:16] + TCP_payload_tx[47:32] + TCP_payload_tx[63:48];
            temp = temp[15:0] + temp[19:16];
            temp = temp[15:0] + temp[16];
            nTCP_checksum = temp[16:0];    
            if (axis_last) begin
                temp1 = {3'b0, TCP_checksum_send[15:0]} + nTCP_checksum[15:0];
                temp1 = temp1[15:0] + temp1[19:16];
                temp1 = temp1[15:0] + temp1[16];
                nTCP_checksum_send = up_send ? 0 : temp1[16:0];
                nTCP_checksum_out = up_send ? temp1[15:0] : TCP_checksum_send;
                nTCP_checksum = 0;
            end
        end
    end




endmodule
