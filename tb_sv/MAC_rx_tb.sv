// mac_rx_tb.sv
`timescale 1ns/10ps


module MAC_rx_tb;
// -----------------------------------------------------------------------------
// DUT parameters – keep in sync with your RTL
// -----------------------------------------------------------------------------
parameter DATA_W = 64;
parameter CTRL_W = 8;
parameter [47:0] MAC_DEST = 48'hAA_BB_CC_DD_EE_FF;
parameter [47:0] MAC_SRC = 48'h11_22_33_44_55_66;
parameter PRE_IDLE = 4; // idle columns before each frame

// -----------------------------------------------------------------------------
// Clock / Reset
// -----------------------------------------------------------------------------
logic clk = 0, nRST = 0;
always #5 clk = ~clk; // 100 MHz

// -----------------------------------------------------------------------------
// DUT I/O
// -----------------------------------------------------------------------------
logic [DATA_W-1:0] xgmii_rxd, xgmii_rxd_rv, xgmii_rxd_dl;
logic [CTRL_W-1:0] xgmii_rxc;
logic [32:0] crc_out;


logic [DATA_W-1:0] mac_payload;
logic mac_valid;
logic crc_flush;
logic frame_ok;

logic crc_valid, crc_init;

// -----------------------------------------------------------------------------
// Device Under Test
// -----------------------------------------------------------------------------
MAC_rx dut (
    .CLK (clk),
    .nRST (nRST),
    .xgmii_rxd (xgmii_rxd),
    .xgmii_rxc (xgmii_rxc),
    .MAC_payload_rcv(mac_payload),
    .MAC_valid (mac_valid),
    .CRC_flush (crc_flush),
    .frame_ok (frame_ok)
);

parameter CRC_OUT = 32'h74369723;



// -----------------------------------------------------------------------------
// Helpers
// -----------------------------------------------------------------------------
task automatic drive_idle (int cycles = 1);
    repeat (cycles) begin
        @(posedge clk);
        xgmii_rxc <= '1; // 0xFF → /I/ in every lane
        xgmii_rxd <= 64'h0707_0707_0707_0707;
    end
endtask

typedef struct packed {logic [7:0] ctl; logic [63:0] dat;} column_t;

// feed one 64-bit XGMII column
task automatic drive_col (column_t c);
    @(posedge clk);
    xgmii_rxc <= c.ctl;
    xgmii_rxd <= c.dat;
endtask

// -----------------------------------------------------------------------------
// Pre-computed test vectors
// –– frame bytes : DestMAC | SrcMAC | 0x0800 | 46×00 | FCS
// –– FCS : 0xB876_3139 (correct for polynomial 0x04C11DB7)
// -----------------------------------------------------------------------------

// helper to build a column_t literal quickly
function automatic column_t col8 (byte ctl, longint unsigned dat);
    col8.ctl = ctl;
    col8.dat = dat;
endfunction

// --------------- frame 1 : GOOD, /S/ in lane-0 -------------------------------
localparam column_t GOOD_L0 [] = '{
    // idle before SOF
    col8(8'hFF, 64'h0707_0707_0707_0707),

    // /S/ lane-0 + six 0x55 + 0xD5
    col8(8'h01, 64'hD555_5555_5555_55FB),

    // eight 64-bit data columns (60-byte header+payload+FCS)
    col8(8'h00, 64'hAACC_FFFF_FFFF_FFFF), // bytes 0- 7
    col8(8'h00, 64'hFFFF_0800_BBFF_FFFF), // bytes 8-15
    col8(8'h00, 64'h0000_0000_0000_0000), // 16-23
    col8(8'h00, 64'h0000_0000_0000_0000), // 24-31
    col8(8'h00, 64'h0000_0000_0000_0000), // 32-39
    col8(8'h00, 64'h0000_0000_0000_0000), // 40-47
    col8(8'h00, 64'h3931_76B8_0000_0000), // 48-55
    col8(8'h00, 64'h0000_0000_0000_0000), // 56-63

    // /T/ in lane-0, rest /I/
    //The CRC after checking is 0x713DCB25
    // col8(8'h01, {24'h00AB,crc_out,8'hFD}),,

    // /T/ in lane-1, lane-2, rest /I/ 
    //GOOD
    col8 (8'b1110_0000, {16'h0707,8'hFD,{CRC_OUT[7:0],CRC_OUT[15:8],CRC_OUT[23:16],CRC_OUT[31:24]},8'hAB}),

    // /T/ in lane-3, lane-4, lane ....
    // col8(8'b0000_0000, {{CRC_OUT[15:8],CRC_OUT[23:16],CRC_OUT[31:24]},40'hAB}), 
    // col8(8'b0000_0010, {48'h0707_0707_0707, 8'hFD,CRC_OUT[7:0]}),

    // col8(8'b0000_0000, {32'hAB,CRC_OUT[31:8]}), 
    // col8(8'b0100_0000, {CRC_OUT[7:0],8'hFD,48'h0707_0707_0707}), 


    //TESTING 

    // trailing idle
    col8(8'hFF, 64'h0707_0707_0707_0707),
    col8(8'hFF, 64'h0707_0707_0707_0707)
};

// --------------- frame 2 : GOOD, /S/ in lane-4 -------------------------------
localparam column_t GOOD_L4 [] = '{
    col8(8'hFF, 64'h0707_0707_0707_0707), // idle
    col8(8'h1F, 64'h5555_55FB_0707_0707), // /S/ in L4
    col8(8'h00, 64'hFFFF_FFFF_D555_5555), // pre + hdr
    col8(8'h00, 64'hBBFF_FFFF_AACC_FFFF),
    col8(8'h00, 64'h0000_0000_FFFF_0800),
    col8(8'h00, 64'h0000_0000_0000_0000),
    col8(8'h00, 64'h0000_0000_0000_0000),
    col8(8'h00, 64'h0000_0000_0000_0000),
    col8(8'h00, 64'h0000_0000_0000_0000),
    col8(8'h00, 64'h0000_0000_3931_76B8),
    // col8(8'h00, 64'h0000_00AB_0000_0000), // /T/ in L4
    col8(8'h00, {{{CRC_OUT[23:16],CRC_OUT[31:24]},16'hAB}, 32'h0}), // /T/ in L4
    col8(8'b1111_1100, {40'h0707_0707_07,8'hFD,{CRC_OUT[7:0],CRC_OUT[15:8]}}),
    // col8(8'b1111_0000, {24'h0707_07,8'hFD,{CRC_OUT[7:0],CRC_OUT[15:8],CRC_OUT[23:16],CRC_OUT[31:24]}}),
    //col8(8'h11, 64'h0707_07FD_0707_0707), // /T/ in L4
    col8(8'hFF, 64'h0707_0707_0707_0707)
};

// --------------- frame 3 : BAD CRC (flip one bit in FCS) ----------------------
localparam column_t BAD_CRC [] = '{
    GOOD_L0[0], // idle
    GOOD_L0[1], // /S/ & pre-amble
    // columns identical to GOOD_L0 except last data word
    GOOD_L0[2], GOOD_L0[3], GOOD_L0[4], GOOD_L0[5],
    GOOD_L0[6], GOOD_L0[7],
    col8(8'h00, 64'h3931_76B9_0000_0000), // FCS bit-flip!
    GOOD_L0[9], // /T/
    GOOD_L0[10] // idle
};

// -----------------------------------------------------------------------------
// Test sequence
// -----------------------------------------------------------------------------
initial begin
    // hold reset 20 ns
    drive_idle(2); // two cycles of idle
    nRST = 1;

    // ---- GOOD frame, /S/ in lane-0 ----
    // foreach (GOOD_L0[i])
    // drive_col(GOOD_L0[i]);
    // @(posedge clk);
    // @(posedge clk);
    // @(posedge clk);
    // @(posedge clk);
    // drive_idle(PRE_IDLE);
    // assert (frame_ok) else $error("GOOD_L0 failed");

    // // ---- GOOD frame, /S/ in lane-4 ----
    foreach (GOOD_L4[i])
        drive_col(GOOD_L4[i]);
    @(posedge clk);
    @(posedge clk);
    // drive_idle(PRE_IDLE);
    // assert (frame_ok) else $error("GOOD_L4 failed");

    // // ---- BAD CRC frame ----
    // foreach (BAD_CRC[i])
    // drive_col(BAD_CRC[i]);
    // drive_idle(PRE_IDLE);
    // assert (!frame_ok && crc_flush) else $error("BAD_CRC test did not flag error");

    // $display("\nAll MAC-RX tests **PASSED**");
    $finish;
end

endmodule