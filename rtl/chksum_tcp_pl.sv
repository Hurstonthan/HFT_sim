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
    logic [19:0] temp, temp1, temp2;

    assign TCP_checksum_pl = (TCP_checksum[15:0] == 16'h0) ? 16'hFFFF : TCP_checksum[15:0];

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            TCP_checksum <= '0;
        end else begin
            TCP_checksum <= nTCP_checksum;
        end
    end
    
    // verifvy with google
    always_comb begin
        nTCP_checksum = TCP_checksum;
        temp = '0;
        temp1 = '0;
        temp2 = '0;
        if (clear) begin
            nTCP_checksum = 0;
        end else if (FIFO_rd_en) begin
            temp = {4'b0, TCP_checksum[15:0]} + {4'b0, TCP_payload_tx[15:0]} + {4'b0, TCP_payload_tx[31:16]} + {4'b0, TCP_payload_tx[47:32]} + {4'b0, TCP_payload_tx[63:48]};
            temp1 = temp[15:0] + temp[19:16];
            temp2 = temp1[15:0] + temp1[16];
            nTCP_checksum = temp2[16:0];
            
        end
    end

endmodule