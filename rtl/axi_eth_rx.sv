module axi_eth_rx (
    input logic         clk,
    input logic         rst,
    input logic         s_axis_tvalid,
    input logic [7:0]   s_axis_tdata,
    input logic         s_axis_tlast,
    output logic        s_axis_tready,
    output logic [15:0] eth_type
);

    logic [4:0] byte_cnt;
    logic       in_frame;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            byte_cnt <= 0;
            eth_type <= 0;
            in_frame <= 0;
            s_axis_tready <= 0;
        end else if (s_axis_tvalid) begin
            if (!in_frame) begin
                byte_cnt <= 0;
                in_frame <= 1;
            end else begin
                byte_cnt <= byte_cnt + 1;
            end

            case (byte_cnt)
                11: eth_type[15:8] <= s_axis_tdata;
                12: eth_type[7:0]  <= s_axis_tdata;
                31: s_axis_tready <= 1;
            endcase

            if (s_axis_tlast)
                in_frame <= 0;
        end
    end
endmodule
