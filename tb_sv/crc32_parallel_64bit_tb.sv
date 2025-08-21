`timescale 1ns/1ps

module crc32_parallel_64bit_tb;

  // clock
  logic CLK = 0;
  always #5 CLK = ~CLK;  // 100 MHz

  // dut inputs
  logic        nRST;
  logic        valid   = 1'b0;
  logic        crc_init= 1'b0;
  logic        rx      = 1'b1;
  logic [63:0] data_in = '0;

  // dut output
  wire  [31:0] crc_out;

  // instantiate DUT
  crc32_parallel_64bit dut (
    .CLK     (CLK),
    .nRST    (nRST),
    .valid   (valid),
    .crc_init(crc_init),
    .rx      (rx),
    .data_in (data_in),
    .crc_out (crc_out)
  );

  // just toggle reset high and end
  initial begin
    nRST = 1'b0;
    #20;
    nRST = 1'b1;
    @(posedge CLK);
    valid = 1'b1;
    data_in = 64'hABCD_DEAD;
    @(posedge CLK);
    @(posedge CLK);
    @(posedge CLK);
    $finish;
  end

endmodule
