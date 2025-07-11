module TCP_ISN #(
    parameter WIDTH = 32
)(
    input  wire CLK,
    input  wire nRST,
    input  logic gen_en,               // Pulse this to generate a new ISN_num
    output logic [WIDTH-1:0] ISN_num
);

    logic [WIDTH-1:0] counter;

    always_ff @(posedge CLK or negedge nRST) begin
        if (!nRST) begin
            counter <= 32'hABCDE123;   // Example non-zero reset value
        end else begin
            counter <= counter + 1;    // Free-running counter
        end
    end

    always_ff @(posedge CLK or negedge nRST) begin
        if (!nRST) begin
            ISN_num <= '0;
        end else if (gen_en) begin
            ISN_num <= counter;            // Capture the ISN_num on request
        end
    end

endmodule
