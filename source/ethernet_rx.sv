`include "receiver_pkg.vh"
`include "phy_mac_if.vh"
`include "mac_ip_if.vh"
`include "ip_udp_if.vh"

module ethernet_rx(
    input logic clk, nRST,
    ethernet_rx_if erif, // ethernet from PHY to alogroithm 
    phy_mac_if pmif,
    mac_ip_if_vh mipif,
    ip_udp_if_vh iuif
);
    import reciever_pkg::*;
    //todo create a interface only include those elements
    always_ff @(posedge clk, negedge nRST) begin
        if (!nRST) begin
            // Reset the output interfaces
            pmif.valid_phy <= '0;
            pmif.data_phy <= '0;
            pmif.length_phu <= '0;
            pmif.start_phy <= '0;
            pmif.end_phy <= '0;

            mipif.valid_mac <= 1'b0;
            mipif.data_mac <= '0;
            mipif.length_mac <= '0;
            mipif.start_mac <= 1'b0;
            mipif.end_mac <= 1'b0;

            iuif.valid_ip <= 1'b0;
            iuif.data_ip <= '0;
            iuif.length_ip <= '0;
            iuif.start_ip <= 1'b0;
        end else begin
            //PHY
            pmif.valid_phy <= erif.valid_phy;
            pmif.data_phy <= erif.data_phy;
            pmif.length_phy <=  erif.length_phy;
            pmif.start_phy <=  erif.start_phy;
            pmif.end_phy <=  erif.end_phy;
            // mac layer 
            mipif.valid_mac <= pmif.valid_mac;
            mipif.data_mac <= pmif.data_mac;
            mipif.length_mac <= pmif.length_mac;
            mipif.start_mac <= pmif.start_mac;
            mipif.end_mac <= pmif.end_mac;

            // ip layer
            iuif.valid_ip <= mipif.valid_ip;
            iuif.data_ip <= mipif.data_ip;
            iuif.length_ip <= mipif.length_ip;
            iuif.start_ip <= mipif.start_ip;

            // udp layer

        end
    end
endmodule