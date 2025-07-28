// ------------------------------------------------------------
`timescale 1ns / 10ps
module priority_encoder #(
    parameter int WIDTH = 128,
    parameter logic MSB = 0,
    parameter int IDW   = $clog2(WIDTH)
) (
    input  logic [WIDTH-1:0] din,
    output logic             valid,
    output logic [IDW-1:0]   idx
);
    always_comb begin
        valid = 1'b0;
        idx   = '0;
        // lowest-index-first priority
        if (MSB) begin
            for (int i = 0; i < WIDTH; i++) begin
                if (din[(WIDTH - 1) - i] && !valid) begin
                    valid = 1'b1;
                    idx   = (WIDTH - 1)- i[IDW-1:0];
                end
            end

        end else begin
            for (int i = 0; i < WIDTH; i++) begin
                if (din[i] && !valid) begin
                    valid = 1'b1;
                    idx   = i[IDW-1:0];
                end
            end
        end

    end
endmodule
