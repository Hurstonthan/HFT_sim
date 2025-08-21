// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
// Date        : Sun Aug 17 01:56:12 2025
// Host        : LAPTOP-SP40EN8K running 64-bit major release  (build 9200)
// Command     : write_verilog -mode funcsim -nolib -force -file
//               C:/Users/trith/HFT_sim/HFT_sim_FPGA/hft_sim/hft_sim.sim/sim_1/synth/func/xsim/crc32_parallel_64bit_tb_func_synth.v
// Design      : crc32_parallel_64bit
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xcku5p-ffvb676-2-e
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* NotValidForBitStream *)
module crc32_parallel_64bit
   (CLK,
    nRST,
    valid,
    crc_init,
    rx,
    data_in,
    crc_out);
  input CLK;
  input nRST;
  input valid;
  input crc_init;
  input rx;
  input [63:0]data_in;
  output [31:0]crc_out;

  wire CLK;
  wire CLK_IBUF;
  wire CLK_IBUF_BUFG;
  wire crc_init;
  wire crc_init_IBUF;
  wire [31:0]crc_out;
  wire [31:0]crc_out_OBUF;
  wire \crc_reg[0]_i_2_n_0 ;
  wire \crc_reg[0]_i_3_n_0 ;
  wire \crc_reg[0]_i_4_n_0 ;
  wire \crc_reg[0]_i_5_n_0 ;
  wire \crc_reg[0]_i_6_n_0 ;
  wire \crc_reg[0]_i_7_n_0 ;
  wire \crc_reg[10]_i_2_n_0 ;
  wire \crc_reg[10]_i_3_n_0 ;
  wire \crc_reg[10]_i_4_n_0 ;
  wire \crc_reg[10]_i_5_n_0 ;
  wire \crc_reg[10]_i_6_n_0 ;
  wire \crc_reg[11]_i_2_n_0 ;
  wire \crc_reg[11]_i_3_n_0 ;
  wire \crc_reg[12]_i_2_n_0 ;
  wire \crc_reg[12]_i_3_n_0 ;
  wire \crc_reg[12]_i_4_n_0 ;
  wire \crc_reg[13]_i_2_n_0 ;
  wire \crc_reg[13]_i_3_n_0 ;
  wire \crc_reg[13]_i_4_n_0 ;
  wire \crc_reg[13]_i_5_n_0 ;
  wire \crc_reg[13]_i_6_n_0 ;
  wire \crc_reg[14]_i_2_n_0 ;
  wire \crc_reg[14]_i_3_n_0 ;
  wire \crc_reg[15]_i_2_n_0 ;
  wire \crc_reg[15]_i_3_n_0 ;
  wire \crc_reg[15]_i_4_n_0 ;
  wire \crc_reg[15]_i_5_n_0 ;
  wire \crc_reg[15]_i_6_n_0 ;
  wire \crc_reg[16]_i_2_n_0 ;
  wire \crc_reg[16]_i_3_n_0 ;
  wire \crc_reg[16]_i_4_n_0 ;
  wire \crc_reg[16]_i_5_n_0 ;
  wire \crc_reg[16]_i_6_n_0 ;
  wire \crc_reg[16]_i_7_n_0 ;
  wire \crc_reg[16]_i_8_n_0 ;
  wire \crc_reg[17]_i_2_n_0 ;
  wire \crc_reg[17]_i_3_n_0 ;
  wire \crc_reg[17]_i_4_n_0 ;
  wire \crc_reg[17]_i_5_n_0 ;
  wire \crc_reg[17]_i_6_n_0 ;
  wire \crc_reg[17]_i_7_n_0 ;
  wire \crc_reg[18]_i_2_n_0 ;
  wire \crc_reg[18]_i_3_n_0 ;
  wire \crc_reg[18]_i_4_n_0 ;
  wire \crc_reg[18]_i_5_n_0 ;
  wire \crc_reg[18]_i_6_n_0 ;
  wire \crc_reg[18]_i_7_n_0 ;
  wire \crc_reg[18]_i_8_n_0 ;
  wire \crc_reg[19]_i_2_n_0 ;
  wire \crc_reg[19]_i_3_n_0 ;
  wire \crc_reg[19]_i_4_n_0 ;
  wire \crc_reg[19]_i_5_n_0 ;
  wire \crc_reg[19]_i_6_n_0 ;
  wire \crc_reg[1]_i_2_n_0 ;
  wire \crc_reg[1]_i_3_n_0 ;
  wire \crc_reg[1]_i_4_n_0 ;
  wire \crc_reg[20]_i_2_n_0 ;
  wire \crc_reg[20]_i_3_n_0 ;
  wire \crc_reg[20]_i_4_n_0 ;
  wire \crc_reg[20]_i_5_n_0 ;
  wire \crc_reg[21]_i_2_n_0 ;
  wire \crc_reg[21]_i_3_n_0 ;
  wire \crc_reg[21]_i_4_n_0 ;
  wire \crc_reg[21]_i_5_n_0 ;
  wire \crc_reg[21]_i_6_n_0 ;
  wire \crc_reg[21]_i_7_n_0 ;
  wire \crc_reg[21]_i_8_n_0 ;
  wire \crc_reg[22]_i_2_n_0 ;
  wire \crc_reg[22]_i_3_n_0 ;
  wire \crc_reg[22]_i_4_n_0 ;
  wire \crc_reg[22]_i_5_n_0 ;
  wire \crc_reg[22]_i_6_n_0 ;
  wire \crc_reg[22]_i_7_n_0 ;
  wire \crc_reg[22]_i_8_n_0 ;
  wire \crc_reg[22]_i_9_n_0 ;
  wire \crc_reg[23]_i_2_n_0 ;
  wire \crc_reg[23]_i_3_n_0 ;
  wire \crc_reg[23]_i_4_n_0 ;
  wire \crc_reg[23]_i_5_n_0 ;
  wire \crc_reg[23]_i_6_n_0 ;
  wire \crc_reg[23]_i_7_n_0 ;
  wire \crc_reg[24]_i_2_n_0 ;
  wire \crc_reg[24]_i_3_n_0 ;
  wire \crc_reg[24]_i_4_n_0 ;
  wire \crc_reg[24]_i_5_n_0 ;
  wire \crc_reg[25]_i_10_n_0 ;
  wire \crc_reg[25]_i_11_n_0 ;
  wire \crc_reg[25]_i_12_n_0 ;
  wire \crc_reg[25]_i_13_n_0 ;
  wire \crc_reg[25]_i_14_n_0 ;
  wire \crc_reg[25]_i_15_n_0 ;
  wire \crc_reg[25]_i_16_n_0 ;
  wire \crc_reg[25]_i_2_n_0 ;
  wire \crc_reg[25]_i_3_n_0 ;
  wire \crc_reg[25]_i_4_n_0 ;
  wire \crc_reg[25]_i_5_n_0 ;
  wire \crc_reg[25]_i_6_n_0 ;
  wire \crc_reg[25]_i_7_n_0 ;
  wire \crc_reg[25]_i_8_n_0 ;
  wire \crc_reg[25]_i_9_n_0 ;
  wire \crc_reg[26]_i_10_n_0 ;
  wire \crc_reg[26]_i_11_n_0 ;
  wire \crc_reg[26]_i_2_n_0 ;
  wire \crc_reg[26]_i_3_n_0 ;
  wire \crc_reg[26]_i_4_n_0 ;
  wire \crc_reg[26]_i_5_n_0 ;
  wire \crc_reg[26]_i_6_n_0 ;
  wire \crc_reg[26]_i_7_n_0 ;
  wire \crc_reg[26]_i_8_n_0 ;
  wire \crc_reg[26]_i_9_n_0 ;
  wire \crc_reg[27]_i_2_n_0 ;
  wire \crc_reg[27]_i_3_n_0 ;
  wire \crc_reg[27]_i_4_n_0 ;
  wire \crc_reg[27]_i_5_n_0 ;
  wire \crc_reg[27]_i_6_n_0 ;
  wire \crc_reg[27]_i_7_n_0 ;
  wire \crc_reg[28]_i_10_n_0 ;
  wire \crc_reg[28]_i_11_n_0 ;
  wire \crc_reg[28]_i_2_n_0 ;
  wire \crc_reg[28]_i_3_n_0 ;
  wire \crc_reg[28]_i_4_n_0 ;
  wire \crc_reg[28]_i_5_n_0 ;
  wire \crc_reg[28]_i_6_n_0 ;
  wire \crc_reg[28]_i_7_n_0 ;
  wire \crc_reg[28]_i_8_n_0 ;
  wire \crc_reg[28]_i_9_n_0 ;
  wire \crc_reg[29]_i_2_n_0 ;
  wire \crc_reg[29]_i_3_n_0 ;
  wire \crc_reg[29]_i_4_n_0 ;
  wire \crc_reg[29]_i_5_n_0 ;
  wire \crc_reg[29]_i_6_n_0 ;
  wire \crc_reg[29]_i_7_n_0 ;
  wire \crc_reg[2]_i_2_n_0 ;
  wire \crc_reg[2]_i_3_n_0 ;
  wire \crc_reg[2]_i_4_n_0 ;
  wire \crc_reg[2]_i_5_n_0 ;
  wire \crc_reg[2]_i_6_n_0 ;
  wire \crc_reg[2]_i_7_n_0 ;
  wire \crc_reg[30]_i_10_n_0 ;
  wire \crc_reg[30]_i_11_n_0 ;
  wire \crc_reg[30]_i_12_n_0 ;
  wire \crc_reg[30]_i_13_n_0 ;
  wire \crc_reg[30]_i_14_n_0 ;
  wire \crc_reg[30]_i_15_n_0 ;
  wire \crc_reg[30]_i_2_n_0 ;
  wire \crc_reg[30]_i_3_n_0 ;
  wire \crc_reg[30]_i_4_n_0 ;
  wire \crc_reg[30]_i_5_n_0 ;
  wire \crc_reg[30]_i_6_n_0 ;
  wire \crc_reg[30]_i_7_n_0 ;
  wire \crc_reg[30]_i_8_n_0 ;
  wire \crc_reg[30]_i_9_n_0 ;
  wire \crc_reg[31]_i_10_n_0 ;
  wire \crc_reg[31]_i_11_n_0 ;
  wire \crc_reg[31]_i_12_n_0 ;
  wire \crc_reg[31]_i_13_n_0 ;
  wire \crc_reg[31]_i_14_n_0 ;
  wire \crc_reg[31]_i_1_n_0 ;
  wire \crc_reg[31]_i_3_n_0 ;
  wire \crc_reg[31]_i_4_n_0 ;
  wire \crc_reg[31]_i_5_n_0 ;
  wire \crc_reg[31]_i_6_n_0 ;
  wire \crc_reg[31]_i_7_n_0 ;
  wire \crc_reg[31]_i_8_n_0 ;
  wire \crc_reg[31]_i_9_n_0 ;
  wire \crc_reg[3]_i_2_n_0 ;
  wire \crc_reg[3]_i_3_n_0 ;
  wire \crc_reg[3]_i_4_n_0 ;
  wire \crc_reg[3]_i_5_n_0 ;
  wire \crc_reg[3]_i_6_n_0 ;
  wire \crc_reg[4]_i_2_n_0 ;
  wire \crc_reg[4]_i_3_n_0 ;
  wire \crc_reg[4]_i_4_n_0 ;
  wire \crc_reg[4]_i_5_n_0 ;
  wire \crc_reg[5]_i_2_n_0 ;
  wire \crc_reg[5]_i_3_n_0 ;
  wire \crc_reg[5]_i_4_n_0 ;
  wire \crc_reg[5]_i_5_n_0 ;
  wire \crc_reg[5]_i_6_n_0 ;
  wire \crc_reg[5]_i_7_n_0 ;
  wire \crc_reg[5]_i_8_n_0 ;
  wire \crc_reg[5]_i_9_n_0 ;
  wire \crc_reg[6]_i_2_n_0 ;
  wire \crc_reg[6]_i_3_n_0 ;
  wire \crc_reg[6]_i_4_n_0 ;
  wire \crc_reg[6]_i_5_n_0 ;
  wire \crc_reg[7]_i_2_n_0 ;
  wire \crc_reg[7]_i_3_n_0 ;
  wire \crc_reg[7]_i_4_n_0 ;
  wire \crc_reg[7]_i_5_n_0 ;
  wire \crc_reg[8]_i_2_n_0 ;
  wire \crc_reg[8]_i_3_n_0 ;
  wire \crc_reg[8]_i_4_n_0 ;
  wire \crc_reg[9]_i_2_n_0 ;
  wire \crc_reg[9]_i_3_n_0 ;
  wire \crc_reg[9]_i_4_n_0 ;
  wire \crc_reg[9]_i_5_n_0 ;
  wire \crc_reg_reg_n_0_[0] ;
  wire [63:0]data_in;
  wire [63:0]data_in_IBUF;
  wire nRST;
  wire nRST_IBUF;
  wire p_0_in;
  wire p_0_in22_in;
  wire p_0_in2_in;
  wire p_0_in4_in;
  wire p_0_in7_in;
  wire p_10_in;
  wire p_10_in41_in;
  wire p_11_in60_in;
  wire p_12_in61_in;
  wire p_12_in72_in;
  wire p_12_in77_in;
  wire p_12_in89_in;
  wire p_13_in83_in;
  wire p_1_in;
  wire [31:0]p_1_in__0;
  wire p_2_in;
  wire p_2_in23_in;
  wire p_3_in24_in;
  wire p_3_in36_in;
  wire p_3_in58_in;
  wire p_3_in8_in;
  wire p_4_in;
  wire p_4_in37_in;
  wire p_5_in25_in;
  wire p_6_in26_in;
  wire p_6_in38_in;
  wire p_6_in59_in;
  wire p_7_in;
  wire p_8_in;
  wire p_8_in39_in;
  wire p_9_in27_in;
  wire p_9_in40_in;
  wire rx;
  wire rx_IBUF;
  wire valid;
  wire valid_IBUF;

  (* XILINX_LEGACY_PRIM = "BUFG" *) 
  BUFGCE #(
    .CE_TYPE("ASYNC"),
    .SIM_DEVICE("ULTRASCALE_PLUS"),
    .STARTUP_SYNC("FALSE")) 
    CLK_IBUF_BUFG_inst
       (.CE(1'b1),
        .I(CLK_IBUF),
        .O(CLK_IBUF_BUFG));
  IBUF CLK_IBUF_inst
       (.I(CLK),
        .O(CLK_IBUF));
  IBUF crc_init_IBUF_inst
       (.I(crc_init),
        .O(crc_init_IBUF));
  OBUF \crc_out_OBUF[0]_inst 
       (.I(crc_out_OBUF[0]),
        .O(crc_out[0]));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[0]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(\crc_reg_reg_n_0_[0] ),
        .O(crc_out_OBUF[0]));
  OBUF \crc_out_OBUF[10]_inst 
       (.I(crc_out_OBUF[10]),
        .O(crc_out[10]));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[10]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_2_in23_in),
        .O(crc_out_OBUF[10]));
  OBUF \crc_out_OBUF[11]_inst 
       (.I(crc_out_OBUF[11]),
        .O(crc_out[11]));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[11]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_3_in24_in),
        .O(crc_out_OBUF[11]));
  OBUF \crc_out_OBUF[12]_inst 
       (.I(crc_out_OBUF[12]),
        .O(crc_out[12]));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[12]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_3_in36_in),
        .O(crc_out_OBUF[12]));
  OBUF \crc_out_OBUF[13]_inst 
       (.I(crc_out_OBUF[13]),
        .O(crc_out[13]));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[13]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_6_in59_in),
        .O(crc_out_OBUF[13]));
  OBUF \crc_out_OBUF[14]_inst 
       (.I(crc_out_OBUF[14]),
        .O(crc_out[14]));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[14]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_4_in),
        .O(crc_out_OBUF[14]));
  OBUF \crc_out_OBUF[15]_inst 
       (.I(crc_out_OBUF[15]),
        .O(crc_out[15]));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[15]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_4_in37_in),
        .O(crc_out_OBUF[15]));
  OBUF \crc_out_OBUF[16]_inst 
       (.I(crc_out_OBUF[16]),
        .O(crc_out[16]));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[16]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_5_in25_in),
        .O(crc_out_OBUF[16]));
  OBUF \crc_out_OBUF[17]_inst 
       (.I(crc_out_OBUF[17]),
        .O(crc_out[17]));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[17]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_6_in26_in),
        .O(crc_out_OBUF[17]));
  OBUF \crc_out_OBUF[18]_inst 
       (.I(crc_out_OBUF[18]),
        .O(crc_out[18]));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[18]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_6_in38_in),
        .O(crc_out_OBUF[18]));
  OBUF \crc_out_OBUF[19]_inst 
       (.I(crc_out_OBUF[19]),
        .O(crc_out[19]));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[19]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_7_in),
        .O(crc_out_OBUF[19]));
  OBUF \crc_out_OBUF[1]_inst 
       (.I(crc_out_OBUF[1]),
        .O(crc_out[1]));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[1]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_1_in),
        .O(crc_out_OBUF[1]));
  OBUF \crc_out_OBUF[20]_inst 
       (.I(crc_out_OBUF[20]),
        .O(crc_out[20]));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[20]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_8_in),
        .O(crc_out_OBUF[20]));
  OBUF \crc_out_OBUF[21]_inst 
       (.I(crc_out_OBUF[21]),
        .O(crc_out[21]));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[21]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_8_in39_in),
        .O(crc_out_OBUF[21]));
  OBUF \crc_out_OBUF[22]_inst 
       (.I(crc_out_OBUF[22]),
        .O(crc_out[22]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[22]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_11_in60_in),
        .O(crc_out_OBUF[22]));
  OBUF \crc_out_OBUF[23]_inst 
       (.I(crc_out_OBUF[23]),
        .O(crc_out[23]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[23]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_12_in72_in),
        .O(crc_out_OBUF[23]));
  OBUF \crc_out_OBUF[24]_inst 
       (.I(crc_out_OBUF[24]),
        .O(crc_out[24]));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[24]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_12_in77_in),
        .O(crc_out_OBUF[24]));
  OBUF \crc_out_OBUF[25]_inst 
       (.I(crc_out_OBUF[25]),
        .O(crc_out[25]));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[25]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_13_in83_in),
        .O(crc_out_OBUF[25]));
  OBUF \crc_out_OBUF[26]_inst 
       (.I(crc_out_OBUF[26]),
        .O(crc_out[26]));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[26]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_12_in89_in),
        .O(crc_out_OBUF[26]));
  OBUF \crc_out_OBUF[27]_inst 
       (.I(crc_out_OBUF[27]),
        .O(crc_out[27]));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[27]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_9_in27_in),
        .O(crc_out_OBUF[27]));
  OBUF \crc_out_OBUF[28]_inst 
       (.I(crc_out_OBUF[28]),
        .O(crc_out[28]));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[28]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_9_in40_in),
        .O(crc_out_OBUF[28]));
  OBUF \crc_out_OBUF[29]_inst 
       (.I(crc_out_OBUF[29]),
        .O(crc_out[29]));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[29]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_12_in61_in),
        .O(crc_out_OBUF[29]));
  OBUF \crc_out_OBUF[2]_inst 
       (.I(crc_out_OBUF[2]),
        .O(crc_out[2]));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[2]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_0_in),
        .O(crc_out_OBUF[2]));
  OBUF \crc_out_OBUF[30]_inst 
       (.I(crc_out_OBUF[30]),
        .O(crc_out[30]));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[30]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_10_in),
        .O(crc_out_OBUF[30]));
  OBUF \crc_out_OBUF[31]_inst 
       (.I(crc_out_OBUF[31]),
        .O(crc_out[31]));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[31]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_10_in41_in),
        .O(crc_out_OBUF[31]));
  OBUF \crc_out_OBUF[3]_inst 
       (.I(crc_out_OBUF[3]),
        .O(crc_out[3]));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[3]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_0_in2_in),
        .O(crc_out_OBUF[3]));
  OBUF \crc_out_OBUF[4]_inst 
       (.I(crc_out_OBUF[4]),
        .O(crc_out[4]));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[4]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_0_in4_in),
        .O(crc_out_OBUF[4]));
  OBUF \crc_out_OBUF[5]_inst 
       (.I(crc_out_OBUF[5]),
        .O(crc_out[5]));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[5]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_0_in7_in),
        .O(crc_out_OBUF[5]));
  OBUF \crc_out_OBUF[6]_inst 
       (.I(crc_out_OBUF[6]),
        .O(crc_out[6]));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[6]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_2_in),
        .O(crc_out_OBUF[6]));
  OBUF \crc_out_OBUF[7]_inst 
       (.I(crc_out_OBUF[7]),
        .O(crc_out[7]));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[7]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_3_in8_in),
        .O(crc_out_OBUF[7]));
  OBUF \crc_out_OBUF[8]_inst 
       (.I(crc_out_OBUF[8]),
        .O(crc_out[8]));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[8]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_3_in58_in),
        .O(crc_out_OBUF[8]));
  OBUF \crc_out_OBUF[9]_inst 
       (.I(crc_out_OBUF[9]),
        .O(crc_out[9]));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \crc_out_OBUF[9]_inst_i_1 
       (.I0(rx_IBUF),
        .I1(p_0_in22_in),
        .O(crc_out_OBUF[9]));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[0]_i_1 
       (.I0(\crc_reg[5]_i_6_n_0 ),
        .I1(\crc_reg[0]_i_2_n_0 ),
        .I2(\crc_reg[0]_i_3_n_0 ),
        .I3(\crc_reg[0]_i_4_n_0 ),
        .I4(\crc_reg[0]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[0]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[0]_i_2 
       (.I0(data_in_IBUF[55]),
        .I1(\crc_reg[30]_i_8_n_0 ),
        .I2(data_in_IBUF[4]),
        .I3(p_0_in4_in),
        .I4(p_0_in22_in),
        .I5(data_in_IBUF[9]),
        .O(\crc_reg[0]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[0]_i_3 
       (.I0(\crc_reg[0]_i_6_n_0 ),
        .I1(\crc_reg[26]_i_6_n_0 ),
        .I2(\crc_reg[18]_i_7_n_0 ),
        .I3(\crc_reg[22]_i_8_n_0 ),
        .I4(\crc_reg[0]_i_7_n_0 ),
        .I5(\crc_reg[5]_i_8_n_0 ),
        .O(\crc_reg[0]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[0]_i_4 
       (.I0(data_in_IBUF[32]),
        .I1(data_in_IBUF[54]),
        .I2(data_in_IBUF[27]),
        .I3(p_9_in27_in),
        .O(\crc_reg[0]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[0]_i_5 
       (.I0(data_in_IBUF[20]),
        .I1(p_8_in),
        .I2(data_in_IBUF[40]),
        .O(\crc_reg[0]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[0]_i_6 
       (.I0(data_in_IBUF[52]),
        .I1(data_in_IBUF[33]),
        .I2(data_in_IBUF[58]),
        .I3(data_in_IBUF[34]),
        .I4(data_in_IBUF[36]),
        .I5(data_in_IBUF[48]),
        .O(\crc_reg[0]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[0]_i_7 
       (.I0(p_6_in26_in),
        .I1(data_in_IBUF[17]),
        .O(\crc_reg[0]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[10]_i_1 
       (.I0(\crc_reg[10]_i_2_n_0 ),
        .I1(\crc_reg[10]_i_3_n_0 ),
        .I2(\crc_reg[10]_i_4_n_0 ),
        .I3(\crc_reg[10]_i_5_n_0 ),
        .I4(\crc_reg[10]_i_6_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[10]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[10]_i_2 
       (.I0(data_in_IBUF[10]),
        .I1(p_2_in23_in),
        .I2(data_in_IBUF[54]),
        .I3(data_in_IBUF[32]),
        .I4(data_in_IBUF[58]),
        .I5(data_in_IBUF[50]),
        .O(\crc_reg[10]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[10]_i_3 
       (.I0(\crc_reg[25]_i_7_n_0 ),
        .I1(data_in_IBUF[21]),
        .I2(p_8_in39_in),
        .I3(data_in_IBUF[41]),
        .I4(data_in_IBUF[34]),
        .O(\crc_reg[10]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[10]_i_4 
       (.I0(data_in_IBUF[29]),
        .I1(p_12_in61_in),
        .I2(data_in_IBUF[28]),
        .I3(p_9_in40_in),
        .O(\crc_reg[10]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[10]_i_5 
       (.I0(data_in_IBUF[39]),
        .I1(data_in_IBUF[37]),
        .I2(data_in_IBUF[7]),
        .I3(p_3_in8_in),
        .I4(data_in_IBUF[36]),
        .I5(\crc_reg[30]_i_13_n_0 ),
        .O(\crc_reg[10]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[10]_i_6 
       (.I0(\crc_reg[25]_i_9_n_0 ),
        .I1(\crc_reg[30]_i_6_n_0 ),
        .I2(data_in_IBUF[46]),
        .I3(data_in_IBUF[53]),
        .I4(\crc_reg[22]_i_7_n_0 ),
        .I5(data_in_IBUF[45]),
        .O(\crc_reg[10]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[11]_i_1 
       (.I0(data_in_IBUF[42]),
        .I1(data_in_IBUF[40]),
        .I2(\crc_reg[22]_i_2_n_0 ),
        .I3(\crc_reg[11]_i_2_n_0 ),
        .I4(\crc_reg[11]_i_3_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[11]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[11]_i_2 
       (.I0(\crc_reg[2]_i_5_n_0 ),
        .I1(data_in_IBUF[33]),
        .I2(data_in_IBUF[59]),
        .I3(\crc_reg[31]_i_9_n_0 ),
        .I4(\crc_reg[31]_i_14_n_0 ),
        .I5(\crc_reg[29]_i_6_n_0 ),
        .O(\crc_reg[11]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[11]_i_3 
       (.I0(\crc_reg[25]_i_7_n_0 ),
        .I1(\crc_reg[28]_i_7_n_0 ),
        .I2(data_in_IBUF[46]),
        .I3(data_in_IBUF[54]),
        .I4(\crc_reg[21]_i_6_n_0 ),
        .I5(data_in_IBUF[51]),
        .O(\crc_reg[11]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[12]_i_1 
       (.I0(\crc_reg[31]_i_6_n_0 ),
        .I1(\crc_reg[12]_i_2_n_0 ),
        .I2(\crc_reg[12]_i_3_n_0 ),
        .I3(\crc_reg[15]_i_2_n_0 ),
        .I4(\crc_reg[12]_i_4_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[12]));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[12]_i_2 
       (.I0(data_in_IBUF[43]),
        .I1(data_in_IBUF[41]),
        .O(\crc_reg[12]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[12]_i_3 
       (.I0(\crc_reg[30]_i_14_n_0 ),
        .I1(\crc_reg[28]_i_7_n_0 ),
        .I2(\crc_reg[28]_i_8_n_0 ),
        .I3(\crc_reg[25]_i_9_n_0 ),
        .I4(data_in_IBUF[48]),
        .I5(data_in_IBUF[60]),
        .O(\crc_reg[12]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[12]_i_4 
       (.I0(data_in_IBUF[36]),
        .I1(\crc_reg[26]_i_5_n_0 ),
        .I2(data_in_IBUF[39]),
        .I3(data_in_IBUF[34]),
        .I4(data_in_IBUF[56]),
        .I5(data_in_IBUF[38]),
        .O(\crc_reg[12]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[13]_i_1 
       (.I0(\crc_reg[13]_i_2_n_0 ),
        .I1(\crc_reg[13]_i_3_n_0 ),
        .I2(\crc_reg[13]_i_4_n_0 ),
        .I3(\crc_reg[13]_i_5_n_0 ),
        .I4(\crc_reg[13]_i_6_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[13]));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[13]_i_2 
       (.I0(data_in_IBUF[37]),
        .I1(data_in_IBUF[39]),
        .O(\crc_reg[13]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[13]_i_3 
       (.I0(data_in_IBUF[42]),
        .I1(data_in_IBUF[40]),
        .O(\crc_reg[13]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[13]_i_4 
       (.I0(\crc_reg[27]_i_7_n_0 ),
        .I1(\crc_reg[30]_i_6_n_0 ),
        .I2(\crc_reg[20]_i_5_n_0 ),
        .I3(data_in_IBUF[48]),
        .I4(\crc_reg[26]_i_5_n_0 ),
        .I5(\crc_reg[30]_i_9_n_0 ),
        .O(\crc_reg[13]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[13]_i_5 
       (.I0(data_in_IBUF[57]),
        .I1(data_in_IBUF[61]),
        .I2(\crc_reg[24]_i_5_n_0 ),
        .I3(p_12_in61_in),
        .I4(data_in_IBUF[29]),
        .I5(\crc_reg[1]_i_4_n_0 ),
        .O(\crc_reg[13]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[13]_i_6 
       (.I0(data_in_IBUF[32]),
        .I1(data_in_IBUF[44]),
        .I2(data_in_IBUF[49]),
        .I3(\crc_reg[30]_i_12_n_0 ),
        .I4(\crc_reg[31]_i_13_n_0 ),
        .O(\crc_reg[13]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[14]_i_1 
       (.I0(\crc_reg[15]_i_3_n_0 ),
        .I1(data_in_IBUF[38]),
        .I2(\crc_reg[16]_i_2_n_0 ),
        .I3(\crc_reg[14]_i_2_n_0 ),
        .I4(\crc_reg[14]_i_3_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[14]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[14]_i_2 
       (.I0(data_in_IBUF[45]),
        .I1(\crc_reg[21]_i_8_n_0 ),
        .I2(data_in_IBUF[40]),
        .I3(data_in_IBUF[58]),
        .I4(data_in_IBUF[62]),
        .I5(data_in_IBUF[36]),
        .O(\crc_reg[14]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[14]_i_3 
       (.I0(\crc_reg[12]_i_2_n_0 ),
        .I1(\crc_reg[8]_i_2_n_0 ),
        .I2(\crc_reg[26]_i_5_n_0 ),
        .I3(\crc_reg[30]_i_7_n_0 ),
        .I4(\crc_reg[28]_i_6_n_0 ),
        .I5(\crc_reg[30]_i_8_n_0 ),
        .O(\crc_reg[14]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[15]_i_1 
       (.I0(\crc_reg[15]_i_2_n_0 ),
        .I1(\crc_reg[15]_i_3_n_0 ),
        .I2(\crc_reg[15]_i_4_n_0 ),
        .I3(\crc_reg[30]_i_2_n_0 ),
        .I4(\crc_reg[15]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[15]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[15]_i_2 
       (.I0(data_in_IBUF[31]),
        .I1(p_10_in41_in),
        .I2(p_9_in40_in),
        .I3(data_in_IBUF[28]),
        .I4(data_in_IBUF[12]),
        .I5(p_3_in36_in),
        .O(\crc_reg[15]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[15]_i_3 
       (.I0(data_in_IBUF[16]),
        .I1(p_5_in25_in),
        .I2(data_in_IBUF[6]),
        .I3(p_2_in),
        .I4(p_4_in37_in),
        .I5(data_in_IBUF[15]),
        .O(\crc_reg[15]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[15]_i_4 
       (.I0(\crc_reg[17]_i_4_n_0 ),
        .I1(\crc_reg[15]_i_6_n_0 ),
        .I2(data_in_IBUF[58]),
        .I3(data_in_IBUF[42]),
        .I4(data_in_IBUF[17]),
        .I5(p_6_in26_in),
        .O(\crc_reg[15]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[15]_i_5 
       (.I0(data_in_IBUF[33]),
        .I1(data_in_IBUF[59]),
        .O(\crc_reg[15]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[15]_i_6 
       (.I0(data_in_IBUF[37]),
        .I1(data_in_IBUF[50]),
        .I2(data_in_IBUF[41]),
        .I3(data_in_IBUF[55]),
        .O(\crc_reg[15]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[16]_i_1 
       (.I0(\crc_reg[16]_i_2_n_0 ),
        .I1(\crc_reg[16]_i_3_n_0 ),
        .I2(\crc_reg[16]_i_4_n_0 ),
        .I3(\crc_reg[27]_i_3_n_0 ),
        .I4(\crc_reg[16]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[16]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[16]_i_2 
       (.I0(data_in_IBUF[18]),
        .I1(p_6_in38_in),
        .I2(data_in_IBUF[33]),
        .O(\crc_reg[16]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[16]_i_3 
       (.I0(\crc_reg[26]_i_5_n_0 ),
        .I1(data_in_IBUF[1]),
        .I2(p_1_in),
        .I3(data_in_IBUF[36]),
        .I4(p_3_in8_in),
        .I5(data_in_IBUF[7]),
        .O(\crc_reg[16]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[16]_i_4 
       (.I0(data_in_IBUF[42]),
        .I1(data_in_IBUF[58]),
        .I2(\crc_reg[28]_i_7_n_0 ),
        .I3(\crc_reg[28]_i_8_n_0 ),
        .I4(\crc_reg[30]_i_12_n_0 ),
        .I5(\crc_reg[31]_i_9_n_0 ),
        .O(\crc_reg[16]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[16]_i_5 
       (.I0(\crc_reg[16]_i_6_n_0 ),
        .I1(\crc_reg[16]_i_7_n_0 ),
        .I2(data_in_IBUF[45]),
        .I3(data_in_IBUF[54]),
        .I4(\crc_reg[16]_i_8_n_0 ),
        .I5(\crc_reg[21]_i_8_n_0 ),
        .O(\crc_reg[16]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[16]_i_6 
       (.I0(data_in_IBUF[6]),
        .I1(p_2_in),
        .O(\crc_reg[16]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[16]_i_7 
       (.I0(p_12_in61_in),
        .I1(data_in_IBUF[29]),
        .O(\crc_reg[16]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[16]_i_8 
       (.I0(p_3_in58_in),
        .I1(data_in_IBUF[8]),
        .O(\crc_reg[16]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[17]_i_1 
       (.I0(\crc_reg[31]_i_8_n_0 ),
        .I1(\crc_reg[17]_i_2_n_0 ),
        .I2(\crc_reg[17]_i_3_n_0 ),
        .I3(\crc_reg[17]_i_4_n_0 ),
        .I4(\crc_reg[17]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[17]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[17]_i_2 
       (.I0(\crc_reg[31]_i_13_n_0 ),
        .I1(p_2_in23_in),
        .I2(data_in_IBUF[10]),
        .I3(data_in_IBUF[56]),
        .I4(data_in_IBUF[49]),
        .O(\crc_reg[17]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[17]_i_3 
       (.I0(\crc_reg[0]_i_5_n_0 ),
        .I1(\crc_reg[28]_i_7_n_0 ),
        .I2(\crc_reg[28]_i_8_n_0 ),
        .I3(\crc_reg[17]_i_6_n_0 ),
        .I4(data_in_IBUF[52]),
        .I5(\crc_reg[17]_i_7_n_0 ),
        .O(\crc_reg[17]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[17]_i_4 
       (.I0(p_3_in8_in),
        .I1(data_in_IBUF[7]),
        .I2(data_in_IBUF[44]),
        .I3(data_in_IBUF[34]),
        .I4(data_in_IBUF[46]),
        .O(\crc_reg[17]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[17]_i_5 
       (.I0(data_in_IBUF[61]),
        .I1(data_in_IBUF[57]),
        .I2(data_in_IBUF[43]),
        .I3(data_in_IBUF[59]),
        .I4(data_in_IBUF[48]),
        .I5(data_in_IBUF[60]),
        .O(\crc_reg[17]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[17]_i_6 
       (.I0(p_7_in),
        .I1(data_in_IBUF[19]),
        .O(\crc_reg[17]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[17]_i_7 
       (.I0(data_in_IBUF[11]),
        .I1(p_3_in24_in),
        .I2(p_3_in36_in),
        .I3(data_in_IBUF[12]),
        .I4(p_4_in),
        .I5(data_in_IBUF[14]),
        .O(\crc_reg[17]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[18]_i_1 
       (.I0(\crc_reg[18]_i_2_n_0 ),
        .I1(\crc_reg[18]_i_3_n_0 ),
        .I2(\crc_reg[18]_i_4_n_0 ),
        .I3(\crc_reg[18]_i_5_n_0 ),
        .I4(\crc_reg[18]_i_6_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[18]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[18]_i_2 
       (.I0(data_in_IBUF[15]),
        .I1(p_4_in37_in),
        .I2(\crc_reg[18]_i_7_n_0 ),
        .I3(data_in_IBUF[60]),
        .I4(data_in_IBUF[57]),
        .I5(data_in_IBUF[50]),
        .O(\crc_reg[18]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[18]_i_3 
       (.I0(\crc_reg[3]_i_2_n_0 ),
        .I1(\crc_reg[31]_i_5_n_0 ),
        .I2(\crc_reg[31]_i_13_n_0 ),
        .I3(\crc_reg[30]_i_12_n_0 ),
        .I4(data_in_IBUF[49]),
        .I5(\crc_reg[18]_i_8_n_0 ),
        .O(\crc_reg[18]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[18]_i_4 
       (.I0(data_in_IBUF[41]),
        .I1(p_8_in39_in),
        .I2(data_in_IBUF[21]),
        .I3(data_in_IBUF[11]),
        .I4(p_3_in24_in),
        .I5(\crc_reg[30]_i_10_n_0 ),
        .O(\crc_reg[18]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[18]_i_5 
       (.I0(data_in_IBUF[8]),
        .I1(p_3_in58_in),
        .I2(data_in_IBUF[62]),
        .O(\crc_reg[18]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[18]_i_6 
       (.I0(\crc_reg[31]_i_9_n_0 ),
        .I1(data_in_IBUF[45]),
        .I2(data_in_IBUF[61]),
        .I3(data_in_IBUF[58]),
        .I4(data_in_IBUF[1]),
        .I5(p_1_in),
        .O(\crc_reg[18]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[18]_i_7 
       (.I0(p_2_in),
        .I1(data_in_IBUF[6]),
        .I2(p_5_in25_in),
        .I3(data_in_IBUF[16]),
        .O(\crc_reg[18]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[18]_i_8 
       (.I0(data_in_IBUF[44]),
        .I1(data_in_IBUF[32]),
        .O(\crc_reg[18]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[19]_i_1 
       (.I0(\crc_reg[31]_i_4_n_0 ),
        .I1(\crc_reg[19]_i_2_n_0 ),
        .I2(\crc_reg[19]_i_3_n_0 ),
        .I3(\crc_reg[26]_i_3_n_0 ),
        .I4(\crc_reg[19]_i_4_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[19]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[19]_i_2 
       (.I0(data_in_IBUF[63]),
        .I1(data_in_IBUF[9]),
        .I2(p_0_in22_in),
        .I3(p_0_in4_in),
        .I4(data_in_IBUF[4]),
        .I5(\crc_reg[30]_i_15_n_0 ),
        .O(\crc_reg[19]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[19]_i_3 
       (.I0(\crc_reg[6]_i_5_n_0 ),
        .I1(data_in_IBUF[33]),
        .I2(data_in_IBUF[59]),
        .I3(data_in_IBUF[42]),
        .I4(data_in_IBUF[58]),
        .I5(\crc_reg[5]_i_5_n_0 ),
        .O(\crc_reg[19]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[19]_i_4 
       (.I0(\crc_reg[19]_i_5_n_0 ),
        .I1(\crc_reg[19]_i_6_n_0 ),
        .I2(data_in_IBUF[39]),
        .I3(data_in_IBUF[48]),
        .I4(\crc_reg[26]_i_5_n_0 ),
        .I5(data_in_IBUF[51]),
        .O(\crc_reg[19]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[19]_i_5 
       (.I0(p_8_in39_in),
        .I1(data_in_IBUF[21]),
        .O(\crc_reg[19]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[19]_i_6 
       (.I0(data_in_IBUF[57]),
        .I1(data_in_IBUF[50]),
        .O(\crc_reg[19]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[1]_i_1 
       (.I0(\crc_reg[1]_i_2_n_0 ),
        .I1(\crc_reg[1]_i_3_n_0 ),
        .I2(\crc_reg[25]_i_2_n_0 ),
        .I3(\crc_reg[1]_i_4_n_0 ),
        .I4(\crc_reg[17]_i_2_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[1]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[1]_i_2 
       (.I0(data_in_IBUF[39]),
        .I1(data_in_IBUF[37]),
        .I2(data_in_IBUF[4]),
        .I3(p_0_in4_in),
        .I4(p_9_in40_in),
        .I5(data_in_IBUF[28]),
        .O(\crc_reg[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[1]_i_3 
       (.I0(\crc_reg[30]_i_11_n_0 ),
        .I1(\crc_reg[16]_i_2_n_0 ),
        .I2(\crc_reg[3]_i_6_n_0 ),
        .I3(data_in_IBUF[59]),
        .I4(\crc_reg[0]_i_5_n_0 ),
        .I5(\crc_reg[31]_i_14_n_0 ),
        .O(\crc_reg[1]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[1]_i_4 
       (.I0(data_in_IBUF[35]),
        .I1(data_in_IBUF[53]),
        .O(\crc_reg[1]_i_4_n_0 ));
  LUT5 #(
    .INIT(32'hFFFF6996)) 
    \crc_reg[20]_i_1 
       (.I0(\crc_reg[27]_i_3_n_0 ),
        .I1(\crc_reg[29]_i_3_n_0 ),
        .I2(\crc_reg[20]_i_2_n_0 ),
        .I3(\crc_reg[20]_i_3_n_0 ),
        .I4(crc_init_IBUF),
        .O(p_1_in__0[20]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[20]_i_2 
       (.I0(\crc_reg[3]_i_2_n_0 ),
        .I1(\crc_reg[20]_i_4_n_0 ),
        .I2(\crc_reg[30]_i_15_n_0 ),
        .I3(\crc_reg[28]_i_10_n_0 ),
        .I4(\crc_reg[5]_i_5_n_0 ),
        .I5(\crc_reg[30]_i_7_n_0 ),
        .O(\crc_reg[20]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[20]_i_3 
       (.I0(\crc_reg[27]_i_7_n_0 ),
        .I1(\crc_reg[25]_i_9_n_0 ),
        .I2(\crc_reg[20]_i_5_n_0 ),
        .I3(data_in_IBUF[47]),
        .I4(\crc_reg[30]_i_8_n_0 ),
        .I5(\crc_reg[30]_i_10_n_0 ),
        .O(\crc_reg[20]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[20]_i_4 
       (.I0(data_in_IBUF[4]),
        .I1(p_0_in4_in),
        .I2(p_0_in22_in),
        .I3(data_in_IBUF[9]),
        .I4(data_in_IBUF[63]),
        .O(\crc_reg[20]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[20]_i_5 
       (.I0(data_in_IBUF[13]),
        .I1(p_6_in59_in),
        .O(\crc_reg[20]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[21]_i_1 
       (.I0(\crc_reg[21]_i_2_n_0 ),
        .I1(\crc_reg[29]_i_3_n_0 ),
        .I2(\crc_reg[21]_i_3_n_0 ),
        .I3(\crc_reg[21]_i_4_n_0 ),
        .I4(\crc_reg[21]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[21]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[21]_i_2 
       (.I0(p_8_in39_in),
        .I1(data_in_IBUF[21]),
        .I2(data_in_IBUF[44]),
        .I3(data_in_IBUF[34]),
        .I4(\crc_reg[25]_i_9_n_0 ),
        .I5(\crc_reg[21]_i_6_n_0 ),
        .O(\crc_reg[21]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[21]_i_3 
       (.I0(data_in_IBUF[28]),
        .I1(p_9_in40_in),
        .I2(p_0_in4_in),
        .I3(data_in_IBUF[4]),
        .O(\crc_reg[21]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[21]_i_4 
       (.I0(\crc_reg[31]_i_9_n_0 ),
        .I1(\crc_reg[22]_i_3_n_0 ),
        .I2(\crc_reg[25]_i_13_n_0 ),
        .I3(\crc_reg[30]_i_8_n_0 ),
        .I4(\crc_reg[31]_i_13_n_0 ),
        .I5(\crc_reg[21]_i_7_n_0 ),
        .O(\crc_reg[21]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[21]_i_5 
       (.I0(\crc_reg[21]_i_8_n_0 ),
        .I1(\crc_reg[25]_i_14_n_0 ),
        .I2(data_in_IBUF[63]),
        .I3(data_in_IBUF[60]),
        .I4(data_in_IBUF[35]),
        .I5(data_in_IBUF[61]),
        .O(\crc_reg[21]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[21]_i_6 
       (.I0(p_12_in77_in),
        .I1(data_in_IBUF[24]),
        .O(\crc_reg[21]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[21]_i_7 
       (.I0(data_in_IBUF[0]),
        .I1(\crc_reg_reg_n_0_[0] ),
        .O(\crc_reg[21]_i_7_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[21]_i_8 
       (.I0(data_in_IBUF[11]),
        .I1(p_3_in24_in),
        .O(\crc_reg[21]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[22]_i_1 
       (.I0(\crc_reg[22]_i_2_n_0 ),
        .I1(\crc_reg[22]_i_3_n_0 ),
        .I2(\crc_reg[22]_i_4_n_0 ),
        .I3(\crc_reg[22]_i_5_n_0 ),
        .I4(\crc_reg[22]_i_6_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[22]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[22]_i_2 
       (.I0(data_in_IBUF[27]),
        .I1(p_9_in27_in),
        .I2(data_in_IBUF[22]),
        .I3(p_11_in60_in),
        .O(\crc_reg[22]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[22]_i_3 
       (.I0(data_in_IBUF[50]),
        .I1(data_in_IBUF[58]),
        .O(\crc_reg[22]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[22]_i_4 
       (.I0(\crc_reg[0]_i_5_n_0 ),
        .I1(\crc_reg[24]_i_5_n_0 ),
        .I2(\crc_reg[22]_i_7_n_0 ),
        .I3(\crc_reg[30]_i_8_n_0 ),
        .I4(\crc_reg[31]_i_11_n_0 ),
        .I5(\crc_reg[31]_i_13_n_0 ),
        .O(\crc_reg[22]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[22]_i_5 
       (.I0(\crc_reg[25]_i_15_n_0 ),
        .I1(\crc_reg[22]_i_8_n_0 ),
        .I2(data_in_IBUF[59]),
        .I3(data_in_IBUF[34]),
        .I4(\crc_reg[22]_i_9_n_0 ),
        .I5(data_in_IBUF[54]),
        .O(\crc_reg[22]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[22]_i_6 
       (.I0(\crc_reg[10]_i_4_n_0 ),
        .I1(\crc_reg[30]_i_14_n_0 ),
        .I2(data_in_IBUF[8]),
        .I3(p_3_in58_in),
        .I4(data_in_IBUF[62]),
        .I5(\crc_reg[6]_i_5_n_0 ),
        .O(\crc_reg[22]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[22]_i_7 
       (.I0(data_in_IBUF[2]),
        .I1(p_0_in),
        .O(\crc_reg[22]_i_7_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[22]_i_8 
       (.I0(data_in_IBUF[10]),
        .I1(p_2_in23_in),
        .O(\crc_reg[22]_i_8_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[22]_i_9 
       (.I0(data_in_IBUF[3]),
        .I1(p_0_in2_in),
        .O(\crc_reg[22]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[23]_i_1 
       (.I0(\crc_reg[23]_i_2_n_0 ),
        .I1(\crc_reg[23]_i_3_n_0 ),
        .I2(\crc_reg[23]_i_4_n_0 ),
        .I3(\crc_reg[23]_i_5_n_0 ),
        .I4(\crc_reg[23]_i_6_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[23]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[23]_i_2 
       (.I0(\crc_reg[24]_i_2_n_0 ),
        .I1(data_in_IBUF[6]),
        .I2(p_2_in),
        .I3(p_12_in72_in),
        .I4(data_in_IBUF[23]),
        .O(\crc_reg[23]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[23]_i_3 
       (.I0(p_9_in40_in),
        .I1(data_in_IBUF[28]),
        .I2(p_12_in61_in),
        .I3(data_in_IBUF[29]),
        .I4(\crc_reg[30]_i_14_n_0 ),
        .O(\crc_reg[23]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[23]_i_4 
       (.I0(data_in_IBUF[53]),
        .I1(data_in_IBUF[35]),
        .I2(\crc_reg[25]_i_7_n_0 ),
        .I3(data_in_IBUF[21]),
        .I4(p_8_in39_in),
        .I5(data_in_IBUF[41]),
        .O(\crc_reg[23]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[23]_i_5 
       (.I0(\crc_reg[30]_i_11_n_0 ),
        .I1(data_in_IBUF[55]),
        .I2(data_in_IBUF[30]),
        .I3(p_10_in),
        .I4(\crc_reg[28]_i_8_n_0 ),
        .I5(\crc_reg[29]_i_5_n_0 ),
        .O(\crc_reg[23]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[23]_i_6 
       (.I0(\crc_reg[23]_i_7_n_0 ),
        .I1(\crc_reg[25]_i_10_n_0 ),
        .I2(data_in_IBUF[59]),
        .I3(data_in_IBUF[60]),
        .I4(data_in_IBUF[51]),
        .I5(data_in_IBUF[32]),
        .O(\crc_reg[23]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[23]_i_7 
       (.I0(data_in_IBUF[31]),
        .I1(p_10_in41_in),
        .O(\crc_reg[23]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[24]_i_1 
       (.I0(\crc_reg[31]_i_5_n_0 ),
        .I1(\crc_reg[25]_i_2_n_0 ),
        .I2(\crc_reg[24]_i_2_n_0 ),
        .I3(\crc_reg[24]_i_3_n_0 ),
        .I4(\crc_reg[24]_i_4_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[24]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[24]_i_2 
       (.I0(data_in_IBUF[40]),
        .I1(p_8_in),
        .I2(data_in_IBUF[20]),
        .I3(data_in_IBUF[18]),
        .I4(p_6_in38_in),
        .O(\crc_reg[24]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[24]_i_3 
       (.I0(\crc_reg[2]_i_5_n_0 ),
        .I1(\crc_reg[24]_i_5_n_0 ),
        .I2(\crc_reg[28]_i_9_n_0 ),
        .I3(\crc_reg[25]_i_16_n_0 ),
        .I4(\crc_reg[5]_i_5_n_0 ),
        .I5(\crc_reg[31]_i_10_n_0 ),
        .O(\crc_reg[24]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[24]_i_4 
       (.I0(\crc_reg[31]_i_13_n_0 ),
        .I1(\crc_reg[31]_i_9_n_0 ),
        .I2(data_in_IBUF[61]),
        .I3(data_in_IBUF[39]),
        .I4(\crc_reg[25]_i_14_n_0 ),
        .I5(data_in_IBUF[56]),
        .O(\crc_reg[24]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[24]_i_5 
       (.I0(data_in_IBUF[17]),
        .I1(p_6_in26_in),
        .I2(data_in_IBUF[24]),
        .I3(p_12_in77_in),
        .O(\crc_reg[24]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[25]_i_1 
       (.I0(\crc_reg[25]_i_2_n_0 ),
        .I1(\crc_reg[25]_i_3_n_0 ),
        .I2(\crc_reg[25]_i_4_n_0 ),
        .I3(\crc_reg[25]_i_5_n_0 ),
        .I4(\crc_reg[25]_i_6_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[25]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[25]_i_10 
       (.I0(p_0_in2_in),
        .I1(data_in_IBUF[3]),
        .I2(p_6_in59_in),
        .I3(data_in_IBUF[13]),
        .O(\crc_reg[25]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_11 
       (.I0(p_8_in),
        .I1(data_in_IBUF[20]),
        .O(\crc_reg[25]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_12 
       (.I0(p_0_in22_in),
        .I1(data_in_IBUF[9]),
        .O(\crc_reg[25]_i_12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_13 
       (.I0(data_in_IBUF[1]),
        .I1(p_1_in),
        .O(\crc_reg[25]_i_13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_14 
       (.I0(p_3_in8_in),
        .I1(data_in_IBUF[7]),
        .O(\crc_reg[25]_i_14_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_15 
       (.I0(data_in_IBUF[16]),
        .I1(p_5_in25_in),
        .O(\crc_reg[25]_i_15_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_16 
       (.I0(data_in_IBUF[42]),
        .I1(data_in_IBUF[58]),
        .O(\crc_reg[25]_i_16_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[25]_i_2 
       (.I0(data_in_IBUF[34]),
        .I1(data_in_IBUF[41]),
        .I2(p_8_in39_in),
        .I3(data_in_IBUF[21]),
        .I4(\crc_reg[25]_i_7_n_0 ),
        .I5(data_in_IBUF[55]),
        .O(\crc_reg[25]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[25]_i_3 
       (.I0(data_in_IBUF[33]),
        .I1(p_6_in38_in),
        .I2(data_in_IBUF[18]),
        .I3(data_in_IBUF[38]),
        .O(\crc_reg[25]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[25]_i_4 
       (.I0(\crc_reg[30]_i_14_n_0 ),
        .I1(\crc_reg[25]_i_8_n_0 ),
        .I2(\crc_reg[25]_i_9_n_0 ),
        .I3(\crc_reg[25]_i_10_n_0 ),
        .I4(\crc_reg[25]_i_11_n_0 ),
        .I5(\crc_reg[26]_i_7_n_0 ),
        .O(\crc_reg[25]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[25]_i_5 
       (.I0(\crc_reg[25]_i_12_n_0 ),
        .I1(\crc_reg[25]_i_13_n_0 ),
        .I2(data_in_IBUF[49]),
        .I3(data_in_IBUF[56]),
        .I4(\crc_reg[25]_i_14_n_0 ),
        .I5(\crc_reg[25]_i_15_n_0 ),
        .O(\crc_reg[25]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[25]_i_6 
       (.I0(data_in_IBUF[62]),
        .I1(p_3_in58_in),
        .I2(data_in_IBUF[8]),
        .I3(data_in_IBUF[43]),
        .I4(data_in_IBUF[59]),
        .I5(\crc_reg[25]_i_16_n_0 ),
        .O(\crc_reg[25]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[25]_i_7 
       (.I0(data_in_IBUF[12]),
        .I1(p_3_in36_in),
        .I2(p_3_in24_in),
        .I3(data_in_IBUF[11]),
        .O(\crc_reg[25]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_8 
       (.I0(data_in_IBUF[57]),
        .I1(data_in_IBUF[61]),
        .O(\crc_reg[25]_i_8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[25]_i_9 
       (.I0(p_12_in72_in),
        .I1(data_in_IBUF[23]),
        .O(\crc_reg[25]_i_9_n_0 ));
  LUT4 #(
    .INIT(16'hFF96)) 
    \crc_reg[26]_i_1 
       (.I0(\crc_reg[26]_i_2_n_0 ),
        .I1(\crc_reg[26]_i_3_n_0 ),
        .I2(\crc_reg[26]_i_4_n_0 ),
        .I3(crc_init_IBUF),
        .O(p_1_in__0[26]));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[26]_i_10 
       (.I0(data_in_IBUF[24]),
        .I1(p_12_in77_in),
        .I2(data_in_IBUF[23]),
        .I3(p_12_in72_in),
        .O(\crc_reg[26]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[26]_i_11 
       (.I0(data_in_IBUF[53]),
        .I1(data_in_IBUF[35]),
        .I2(data_in_IBUF[63]),
        .I3(p_12_in89_in),
        .I4(data_in_IBUF[26]),
        .O(\crc_reg[26]_i_11_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[26]_i_2 
       (.I0(\crc_reg[28]_i_8_n_0 ),
        .I1(\crc_reg[30]_i_12_n_0 ),
        .I2(\crc_reg[26]_i_5_n_0 ),
        .I3(\crc_reg[30]_i_10_n_0 ),
        .I4(\crc_reg[26]_i_6_n_0 ),
        .I5(\crc_reg[26]_i_7_n_0 ),
        .O(\crc_reg[26]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[26]_i_3 
       (.I0(data_in_IBUF[13]),
        .I1(p_6_in59_in),
        .I2(\crc_reg[30]_i_11_n_0 ),
        .I3(p_0_in),
        .I4(data_in_IBUF[2]),
        .O(\crc_reg[26]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[26]_i_4 
       (.I0(\crc_reg[26]_i_8_n_0 ),
        .I1(\crc_reg[26]_i_9_n_0 ),
        .I2(\crc_reg[26]_i_10_n_0 ),
        .I3(\crc_reg[26]_i_11_n_0 ),
        .I4(\crc_reg[4]_i_2_n_0 ),
        .I5(\crc_reg[18]_i_5_n_0 ),
        .O(\crc_reg[26]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[26]_i_5 
       (.I0(data_in_IBUF[14]),
        .I1(p_4_in),
        .O(\crc_reg[26]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[26]_i_6 
       (.I0(data_in_IBUF[19]),
        .I1(p_7_in),
        .I2(data_in_IBUF[39]),
        .O(\crc_reg[26]_i_6_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[26]_i_7 
       (.I0(p_11_in60_in),
        .I1(data_in_IBUF[22]),
        .O(\crc_reg[26]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[26]_i_8 
       (.I0(data_in_IBUF[50]),
        .I1(data_in_IBUF[57]),
        .I2(data_in_IBUF[60]),
        .O(\crc_reg[26]_i_8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[26]_i_9 
       (.I0(data_in_IBUF[34]),
        .I1(data_in_IBUF[44]),
        .I2(data_in_IBUF[21]),
        .I3(p_8_in39_in),
        .O(\crc_reg[26]_i_9_n_0 ));
  LUT4 #(
    .INIT(16'hFF96)) 
    \crc_reg[27]_i_1 
       (.I0(\crc_reg[27]_i_2_n_0 ),
        .I1(\crc_reg[27]_i_3_n_0 ),
        .I2(\crc_reg[27]_i_4_n_0 ),
        .I3(crc_init_IBUF),
        .O(p_1_in__0[27]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[27]_i_2 
       (.I0(\crc_reg[28]_i_4_n_0 ),
        .I1(\crc_reg[25]_i_3_n_0 ),
        .I2(\crc_reg[27]_i_5_n_0 ),
        .I3(\crc_reg[30]_i_7_n_0 ),
        .I4(\crc_reg[5]_i_5_n_0 ),
        .I5(\crc_reg[27]_i_6_n_0 ),
        .O(\crc_reg[27]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[27]_i_3 
       (.I0(data_in_IBUF[43]),
        .I1(data_in_IBUF[59]),
        .I2(data_in_IBUF[48]),
        .I3(data_in_IBUF[60]),
        .I4(\crc_reg[31]_i_11_n_0 ),
        .O(\crc_reg[27]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[27]_i_4 
       (.I0(\crc_reg[27]_i_7_n_0 ),
        .I1(\crc_reg[28]_i_7_n_0 ),
        .I2(data_in_IBUF[32]),
        .I3(data_in_IBUF[63]),
        .I4(\crc_reg[30]_i_9_n_0 ),
        .I5(data_in_IBUF[57]),
        .O(\crc_reg[27]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[27]_i_5 
       (.I0(data_in_IBUF[52]),
        .I1(p_13_in83_in),
        .I2(data_in_IBUF[25]),
        .I3(data_in_IBUF[34]),
        .I4(data_in_IBUF[44]),
        .O(\crc_reg[27]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[27]_i_6 
       (.I0(data_in_IBUF[0]),
        .I1(\crc_reg_reg_n_0_[0] ),
        .I2(p_6_in26_in),
        .I3(data_in_IBUF[17]),
        .I4(p_6_in59_in),
        .I5(data_in_IBUF[13]),
        .O(\crc_reg[27]_i_6_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[27]_i_7 
       (.I0(data_in_IBUF[15]),
        .I1(p_4_in37_in),
        .O(\crc_reg[27]_i_7_n_0 ));
  LUT5 #(
    .INIT(32'hFFFF6996)) 
    \crc_reg[28]_i_1 
       (.I0(\crc_reg[28]_i_2_n_0 ),
        .I1(\crc_reg[28]_i_3_n_0 ),
        .I2(\crc_reg[28]_i_4_n_0 ),
        .I3(\crc_reg[28]_i_5_n_0 ),
        .I4(crc_init_IBUF),
        .O(p_1_in__0[28]));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[28]_i_10 
       (.I0(p_6_in38_in),
        .I1(data_in_IBUF[18]),
        .O(\crc_reg[28]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[28]_i_11 
       (.I0(p_13_in83_in),
        .I1(data_in_IBUF[25]),
        .O(\crc_reg[28]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[28]_i_2 
       (.I0(data_in_IBUF[11]),
        .I1(p_3_in24_in),
        .I2(data_in_IBUF[3]),
        .I3(p_0_in2_in),
        .I4(\crc_reg[28]_i_6_n_0 ),
        .O(\crc_reg[28]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[28]_i_3 
       (.I0(\crc_reg[28]_i_7_n_0 ),
        .I1(\crc_reg[28]_i_8_n_0 ),
        .I2(\crc_reg[30]_i_15_n_0 ),
        .I3(\crc_reg[28]_i_9_n_0 ),
        .I4(\crc_reg[30]_i_12_n_0 ),
        .I5(\crc_reg[31]_i_13_n_0 ),
        .O(\crc_reg[28]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[28]_i_4 
       (.I0(p_12_in72_in),
        .I1(data_in_IBUF[23]),
        .I2(p_12_in77_in),
        .I3(data_in_IBUF[24]),
        .I4(data_in_IBUF[61]),
        .I5(data_in_IBUF[45]),
        .O(\crc_reg[28]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[28]_i_5 
       (.I0(\crc_reg[28]_i_10_n_0 ),
        .I1(\crc_reg[30]_i_6_n_0 ),
        .I2(data_in_IBUF[38]),
        .I3(data_in_IBUF[53]),
        .I4(\crc_reg[28]_i_11_n_0 ),
        .I5(data_in_IBUF[44]),
        .O(\crc_reg[28]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[28]_i_6 
       (.I0(p_9_in27_in),
        .I1(data_in_IBUF[27]),
        .I2(data_in_IBUF[54]),
        .I3(data_in_IBUF[32]),
        .I4(data_in_IBUF[49]),
        .O(\crc_reg[28]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[28]_i_7 
       (.I0(p_10_in),
        .I1(data_in_IBUF[30]),
        .I2(data_in_IBUF[55]),
        .O(\crc_reg[28]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[28]_i_8 
       (.I0(data_in_IBUF[9]),
        .I1(p_0_in22_in),
        .I2(p_0_in4_in),
        .I3(data_in_IBUF[4]),
        .O(\crc_reg[28]_i_8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[28]_i_9 
       (.I0(data_in_IBUF[48]),
        .I1(data_in_IBUF[60]),
        .O(\crc_reg[28]_i_9_n_0 ));
  LUT4 #(
    .INIT(16'hFF96)) 
    \crc_reg[29]_i_1 
       (.I0(\crc_reg[29]_i_2_n_0 ),
        .I1(\crc_reg[29]_i_3_n_0 ),
        .I2(\crc_reg[29]_i_4_n_0 ),
        .I3(crc_init_IBUF),
        .O(p_1_in__0[29]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[29]_i_2 
       (.I0(\crc_reg[8]_i_2_n_0 ),
        .I1(\crc_reg[21]_i_3_n_0 ),
        .I2(\crc_reg[29]_i_5_n_0 ),
        .I3(\crc_reg[6]_i_5_n_0 ),
        .I4(\crc_reg[31]_i_13_n_0 ),
        .I5(\crc_reg[30]_i_12_n_0 ),
        .O(\crc_reg[29]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[29]_i_3 
       (.I0(data_in_IBUF[49]),
        .I1(data_in_IBUF[32]),
        .I2(data_in_IBUF[54]),
        .I3(data_in_IBUF[27]),
        .I4(p_9_in27_in),
        .I5(\crc_reg[29]_i_6_n_0 ),
        .O(\crc_reg[29]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[29]_i_4 
       (.I0(\crc_reg[29]_i_7_n_0 ),
        .I1(data_in_IBUF[47]),
        .I2(data_in_IBUF[55]),
        .I3(p_2_in),
        .I4(data_in_IBUF[6]),
        .I5(data_in_IBUF[33]),
        .O(\crc_reg[29]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[29]_i_5 
       (.I0(data_in_IBUF[63]),
        .I1(p_12_in89_in),
        .I2(data_in_IBUF[26]),
        .I3(data_in_IBUF[46]),
        .I4(data_in_IBUF[62]),
        .O(\crc_reg[29]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[29]_i_6 
       (.I0(data_in_IBUF[8]),
        .I1(p_3_in58_in),
        .I2(data_in_IBUF[37]),
        .O(\crc_reg[29]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[29]_i_7 
       (.I0(data_in_IBUF[39]),
        .I1(p_7_in),
        .I2(data_in_IBUF[19]),
        .I3(data_in_IBUF[24]),
        .I4(p_12_in77_in),
        .O(\crc_reg[29]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[2]_i_1 
       (.I0(\crc_reg[2]_i_2_n_0 ),
        .I1(\crc_reg[2]_i_3_n_0 ),
        .I2(\crc_reg[2]_i_4_n_0 ),
        .I3(\crc_reg[9]_i_2_n_0 ),
        .I4(\crc_reg[2]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[2]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[2]_i_2 
       (.I0(data_in_IBUF[40]),
        .I1(data_in_IBUF[42]),
        .I2(data_in_IBUF[60]),
        .I3(data_in_IBUF[57]),
        .I4(data_in_IBUF[50]),
        .O(\crc_reg[2]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[2]_i_3 
       (.I0(\crc_reg[25]_i_10_n_0 ),
        .I1(\crc_reg[21]_i_7_n_0 ),
        .I2(data_in_IBUF[36]),
        .I3(data_in_IBUF[56]),
        .I4(\crc_reg[25]_i_13_n_0 ),
        .I5(\crc_reg[17]_i_6_n_0 ),
        .O(\crc_reg[2]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[2]_i_4 
       (.I0(\crc_reg[29]_i_6_n_0 ),
        .I1(\crc_reg[25]_i_7_n_0 ),
        .I2(\crc_reg[2]_i_6_n_0 ),
        .I3(data_in_IBUF[34]),
        .I4(\crc_reg[28]_i_10_n_0 ),
        .I5(\crc_reg[2]_i_7_n_0 ),
        .O(\crc_reg[2]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[2]_i_5 
       (.I0(data_in_IBUF[38]),
        .I1(data_in_IBUF[35]),
        .I2(data_in_IBUF[29]),
        .I3(p_12_in61_in),
        .O(\crc_reg[2]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[2]_i_6 
       (.I0(data_in_IBUF[21]),
        .I1(p_8_in39_in),
        .I2(data_in_IBUF[41]),
        .O(\crc_reg[2]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[2]_i_7 
       (.I0(data_in_IBUF[54]),
        .I1(data_in_IBUF[32]),
        .O(\crc_reg[2]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[30]_i_1 
       (.I0(\crc_reg[30]_i_2_n_0 ),
        .I1(\crc_reg[31]_i_6_n_0 ),
        .I2(\crc_reg[30]_i_3_n_0 ),
        .I3(\crc_reg[30]_i_4_n_0 ),
        .I4(\crc_reg[30]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[30]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[30]_i_10 
       (.I0(p_3_in36_in),
        .I1(data_in_IBUF[12]),
        .O(\crc_reg[30]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[30]_i_11 
       (.I0(data_in_IBUF[17]),
        .I1(p_6_in26_in),
        .I2(\crc_reg_reg_n_0_[0] ),
        .I3(data_in_IBUF[0]),
        .O(\crc_reg[30]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[30]_i_12 
       (.I0(p_2_in23_in),
        .I1(data_in_IBUF[10]),
        .I2(data_in_IBUF[56]),
        .O(\crc_reg[30]_i_12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[30]_i_13 
       (.I0(p_1_in),
        .I1(data_in_IBUF[1]),
        .I2(p_4_in),
        .I3(data_in_IBUF[14]),
        .O(\crc_reg[30]_i_13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[30]_i_14 
       (.I0(data_in_IBUF[25]),
        .I1(p_13_in83_in),
        .I2(data_in_IBUF[52]),
        .O(\crc_reg[30]_i_14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[30]_i_15 
       (.I0(data_in_IBUF[46]),
        .I1(data_in_IBUF[62]),
        .I2(data_in_IBUF[36]),
        .I3(p_3_in8_in),
        .I4(data_in_IBUF[7]),
        .O(\crc_reg[30]_i_15_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[30]_i_2 
       (.I0(data_in_IBUF[63]),
        .I1(\crc_reg[30]_i_6_n_0 ),
        .I2(data_in_IBUF[51]),
        .I3(data_in_IBUF[19]),
        .I4(p_7_in),
        .I5(data_in_IBUF[39]),
        .O(\crc_reg[30]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[30]_i_3 
       (.I0(\crc_reg[30]_i_7_n_0 ),
        .I1(\crc_reg[30]_i_8_n_0 ),
        .I2(data_in_IBUF[54]),
        .I3(data_in_IBUF[35]),
        .I4(\crc_reg[30]_i_9_n_0 ),
        .I5(\crc_reg[30]_i_10_n_0 ),
        .O(\crc_reg[30]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[30]_i_4 
       (.I0(data_in_IBUF[57]),
        .I1(data_in_IBUF[50]),
        .I2(\crc_reg[30]_i_11_n_0 ),
        .I3(\crc_reg[30]_i_12_n_0 ),
        .I4(\crc_reg[30]_i_13_n_0 ),
        .O(\crc_reg[30]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[30]_i_5 
       (.I0(\crc_reg[30]_i_14_n_0 ),
        .I1(data_in_IBUF[29]),
        .I2(p_12_in61_in),
        .I3(data_in_IBUF[28]),
        .I4(p_9_in40_in),
        .I5(\crc_reg[30]_i_15_n_0 ),
        .O(\crc_reg[30]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[30]_i_6 
       (.I0(p_12_in89_in),
        .I1(data_in_IBUF[26]),
        .O(\crc_reg[30]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[30]_i_7 
       (.I0(data_in_IBUF[5]),
        .I1(p_0_in7_in),
        .O(\crc_reg[30]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[30]_i_8 
       (.I0(data_in_IBUF[30]),
        .I1(p_10_in),
        .O(\crc_reg[30]_i_8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[30]_i_9 
       (.I0(data_in_IBUF[4]),
        .I1(p_0_in4_in),
        .O(\crc_reg[30]_i_9_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \crc_reg[31]_i_1 
       (.I0(valid_IBUF),
        .I1(crc_init_IBUF),
        .O(\crc_reg[31]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[31]_i_10 
       (.I0(data_in_IBUF[26]),
        .I1(p_12_in89_in),
        .I2(data_in_IBUF[63]),
        .O(\crc_reg[31]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[31]_i_11 
       (.I0(data_in_IBUF[39]),
        .I1(p_7_in),
        .I2(data_in_IBUF[19]),
        .I3(data_in_IBUF[51]),
        .O(\crc_reg[31]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[31]_i_12 
       (.I0(data_in_IBUF[57]),
        .I1(data_in_IBUF[34]),
        .O(\crc_reg[31]_i_12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[31]_i_13 
       (.I0(p_10_in41_in),
        .I1(data_in_IBUF[31]),
        .I2(p_0_in7_in),
        .I3(data_in_IBUF[5]),
        .O(\crc_reg[31]_i_13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[31]_i_14 
       (.I0(p_0_in),
        .I1(data_in_IBUF[2]),
        .I2(p_4_in37_in),
        .I3(data_in_IBUF[15]),
        .O(\crc_reg[31]_i_14_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[31]_i_2 
       (.I0(\crc_reg[31]_i_4_n_0 ),
        .I1(\crc_reg[31]_i_5_n_0 ),
        .I2(\crc_reg[31]_i_6_n_0 ),
        .I3(\crc_reg[31]_i_7_n_0 ),
        .I4(\crc_reg[31]_i_8_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[31]));
  LUT1 #(
    .INIT(2'h1)) 
    \crc_reg[31]_i_3 
       (.I0(nRST_IBUF),
        .O(\crc_reg[31]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[31]_i_4 
       (.I0(data_in_IBUF[32]),
        .I1(data_in_IBUF[54]),
        .I2(p_2_in23_in),
        .I3(data_in_IBUF[10]),
        .O(\crc_reg[31]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[31]_i_5 
       (.I0(data_in_IBUF[9]),
        .I1(p_0_in22_in),
        .I2(data_in_IBUF[53]),
        .O(\crc_reg[31]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[31]_i_6 
       (.I0(\crc_reg[31]_i_9_n_0 ),
        .I1(p_5_in25_in),
        .I2(data_in_IBUF[16]),
        .O(\crc_reg[31]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[31]_i_7 
       (.I0(\crc_reg[2]_i_5_n_0 ),
        .I1(\crc_reg[31]_i_10_n_0 ),
        .I2(\crc_reg[31]_i_11_n_0 ),
        .I3(\crc_reg[31]_i_12_n_0 ),
        .I4(\crc_reg[16]_i_2_n_0 ),
        .I5(\crc_reg[31]_i_13_n_0 ),
        .O(\crc_reg[31]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[31]_i_8 
       (.I0(data_in_IBUF[8]),
        .I1(p_3_in58_in),
        .I2(data_in_IBUF[37]),
        .I3(\crc_reg[31]_i_14_n_0 ),
        .I4(\crc_reg_reg_n_0_[0] ),
        .I5(data_in_IBUF[0]),
        .O(\crc_reg[31]_i_8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[31]_i_9 
       (.I0(data_in_IBUF[13]),
        .I1(p_6_in59_in),
        .I2(data_in_IBUF[3]),
        .I3(p_0_in2_in),
        .I4(data_in_IBUF[47]),
        .O(\crc_reg[31]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[3]_i_1 
       (.I0(\crc_reg[3]_i_2_n_0 ),
        .I1(\crc_reg[3]_i_3_n_0 ),
        .I2(\crc_reg[3]_i_4_n_0 ),
        .I3(\crc_reg[26]_i_3_n_0 ),
        .I4(\crc_reg[3]_i_5_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[3]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[3]_i_2 
       (.I0(data_in_IBUF[38]),
        .I1(data_in_IBUF[35]),
        .I2(data_in_IBUF[20]),
        .I3(p_8_in),
        .O(\crc_reg[3]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[3]_i_3 
       (.I0(data_in_IBUF[23]),
        .I1(p_12_in72_in),
        .I2(p_2_in),
        .I3(data_in_IBUF[6]),
        .O(\crc_reg[3]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[3]_i_4 
       (.I0(\crc_reg[30]_i_13_n_0 ),
        .I1(\crc_reg[3]_i_6_n_0 ),
        .I2(\crc_reg[12]_i_2_n_0 ),
        .I3(\crc_reg[28]_i_7_n_0 ),
        .I4(\crc_reg[28]_i_8_n_0 ),
        .I5(\crc_reg[25]_i_8_n_0 ),
        .O(\crc_reg[3]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[3]_i_5 
       (.I0(\crc_reg[31]_i_11_n_0 ),
        .I1(\crc_reg[25]_i_16_n_0 ),
        .I2(data_in_IBUF[33]),
        .I3(data_in_IBUF[37]),
        .I4(\crc_reg[26]_i_7_n_0 ),
        .I5(\crc_reg[30]_i_10_n_0 ),
        .O(\crc_reg[3]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[3]_i_6 
       (.I0(data_in_IBUF[7]),
        .I1(p_3_in8_in),
        .I2(data_in_IBUF[36]),
        .O(\crc_reg[3]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[4]_i_1 
       (.I0(\crc_reg[21]_i_2_n_0 ),
        .I1(\crc_reg[4]_i_2_n_0 ),
        .I2(\crc_reg[4]_i_3_n_0 ),
        .I3(\crc_reg[31]_i_8_n_0 ),
        .I4(\crc_reg[4]_i_4_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[4]));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[4]_i_2 
       (.I0(data_in_IBUF[58]),
        .I1(data_in_IBUF[42]),
        .I2(data_in_IBUF[59]),
        .I3(data_in_IBUF[43]),
        .O(\crc_reg[4]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[4]_i_3 
       (.I0(\crc_reg[25]_i_10_n_0 ),
        .I1(data_in_IBUF[56]),
        .I2(data_in_IBUF[10]),
        .I3(p_2_in23_in),
        .I4(\crc_reg[31]_i_13_n_0 ),
        .I5(\crc_reg[4]_i_5_n_0 ),
        .O(\crc_reg[4]_i_3_n_0 ));
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[4]_i_4 
       (.I0(data_in_IBUF[7]),
        .I1(p_3_in8_in),
        .I2(data_in_IBUF[36]),
        .I3(\crc_reg[30]_i_13_n_0 ),
        .I4(\crc_reg[24]_i_2_n_0 ),
        .O(\crc_reg[4]_i_4_n_0 ));
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[4]_i_5 
       (.I0(data_in_IBUF[62]),
        .I1(data_in_IBUF[52]),
        .I2(data_in_IBUF[39]),
        .I3(data_in_IBUF[38]),
        .O(\crc_reg[4]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[5]_i_1 
       (.I0(\crc_reg[5]_i_2_n_0 ),
        .I1(\crc_reg[5]_i_3_n_0 ),
        .I2(\crc_reg[5]_i_4_n_0 ),
        .I3(\crc_reg[5]_i_5_n_0 ),
        .I4(\crc_reg[5]_i_6_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[5]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[5]_i_2 
       (.I0(data_in_IBUF[63]),
        .I1(data_in_IBUF[9]),
        .I2(p_0_in22_in),
        .I3(\crc_reg[30]_i_9_n_0 ),
        .I4(data_in_IBUF[32]),
        .I5(data_in_IBUF[44]),
        .O(\crc_reg[5]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[5]_i_3 
       (.I0(\crc_reg[5]_i_7_n_0 ),
        .I1(\crc_reg[28]_i_11_n_0 ),
        .I2(data_in_IBUF[57]),
        .I3(\crc_reg[5]_i_8_n_0 ),
        .I4(\crc_reg[29]_i_7_n_0 ),
        .I5(\crc_reg[5]_i_9_n_0 ),
        .O(\crc_reg[5]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[5]_i_4 
       (.I0(\crc_reg[27]_i_7_n_0 ),
        .I1(data_in_IBUF[2]),
        .I2(p_0_in),
        .I3(data_in_IBUF[37]),
        .I4(p_3_in58_in),
        .I5(data_in_IBUF[8]),
        .O(\crc_reg[5]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[5]_i_5 
       (.I0(data_in_IBUF[16]),
        .I1(p_5_in25_in),
        .I2(data_in_IBUF[6]),
        .I3(p_2_in),
        .I4(data_in_IBUF[22]),
        .I5(p_11_in60_in),
        .O(\crc_reg[5]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[5]_i_6 
       (.I0(p_0_in2_in),
        .I1(data_in_IBUF[3]),
        .I2(p_3_in24_in),
        .I3(data_in_IBUF[11]),
        .O(\crc_reg[5]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[5]_i_7 
       (.I0(data_in_IBUF[40]),
        .I1(data_in_IBUF[45]),
        .I2(data_in_IBUF[60]),
        .I3(data_in_IBUF[53]),
        .O(\crc_reg[5]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[5]_i_8 
       (.I0(data_in_IBUF[14]),
        .I1(p_4_in),
        .I2(data_in_IBUF[1]),
        .I3(p_1_in),
        .I4(data_in_IBUF[38]),
        .I5(data_in_IBUF[35]),
        .O(\crc_reg[5]_i_8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[5]_i_9 
       (.I0(data_in_IBUF[41]),
        .I1(p_8_in39_in),
        .I2(data_in_IBUF[21]),
        .I3(data_in_IBUF[59]),
        .I4(data_in_IBUF[43]),
        .O(\crc_reg[5]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[6]_i_1 
       (.I0(\crc_reg[6]_i_2_n_0 ),
        .I1(\crc_reg[6]_i_3_n_0 ),
        .I2(\crc_reg[6]_i_4_n_0 ),
        .I3(\crc_reg[6]_i_5_n_0 ),
        .I4(\crc_reg[22]_i_2_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[6]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[6]_i_2 
       (.I0(data_in_IBUF[6]),
        .I1(p_2_in),
        .I2(p_12_in72_in),
        .I3(data_in_IBUF[23]),
        .I4(\crc_reg[17]_i_4_n_0 ),
        .O(\crc_reg[6]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[6]_i_3 
       (.I0(\crc_reg[28]_i_9_n_0 ),
        .I1(\crc_reg[30]_i_14_n_0 ),
        .I2(\crc_reg[28]_i_7_n_0 ),
        .I3(\crc_reg[30]_i_6_n_0 ),
        .I4(\crc_reg[30]_i_13_n_0 ),
        .I5(\crc_reg[31]_i_14_n_0 ),
        .O(\crc_reg[6]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[6]_i_4 
       (.I0(\crc_reg[30]_i_7_n_0 ),
        .I1(\crc_reg[17]_i_6_n_0 ),
        .I2(data_in_IBUF[41]),
        .I3(data_in_IBUF[42]),
        .I4(data_in_IBUF[32]),
        .I5(data_in_IBUF[35]),
        .O(\crc_reg[6]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[6]_i_5 
       (.I0(data_in_IBUF[61]),
        .I1(data_in_IBUF[45]),
        .I2(data_in_IBUF[11]),
        .I3(p_3_in24_in),
        .I4(p_3_in36_in),
        .I5(data_in_IBUF[12]),
        .O(\crc_reg[6]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[7]_i_1 
       (.I0(\crc_reg[15]_i_2_n_0 ),
        .I1(\crc_reg[28]_i_4_n_0 ),
        .I2(\crc_reg[7]_i_2_n_0 ),
        .I3(\crc_reg[7]_i_3_n_0 ),
        .I4(\crc_reg[7]_i_4_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[7]));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[7]_i_2 
       (.I0(\crc_reg[18]_i_7_n_0 ),
        .I1(\crc_reg[31]_i_9_n_0 ),
        .I2(\crc_reg[25]_i_11_n_0 ),
        .I3(\crc_reg[21]_i_7_n_0 ),
        .I4(\crc_reg[7]_i_5_n_0 ),
        .I5(\crc_reg[30]_i_6_n_0 ),
        .O(\crc_reg[7]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[7]_i_3 
       (.I0(data_in_IBUF[33]),
        .I1(\crc_reg[16]_i_8_n_0 ),
        .I2(data_in_IBUF[56]),
        .I3(data_in_IBUF[42]),
        .I4(data_in_IBUF[43]),
        .I5(data_in_IBUF[49]),
        .O(\crc_reg[7]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[7]_i_4 
       (.I0(\crc_reg[30]_i_15_n_0 ),
        .I1(p_0_in),
        .I2(data_in_IBUF[2]),
        .I3(p_4_in37_in),
        .I4(data_in_IBUF[15]),
        .I5(\crc_reg[1]_i_4_n_0 ),
        .O(\crc_reg[7]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \crc_reg[7]_i_5 
       (.I0(p_9_in27_in),
        .I1(data_in_IBUF[27]),
        .O(\crc_reg[7]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[8]_i_1 
       (.I0(\crc_reg[8]_i_2_n_0 ),
        .I1(\crc_reg[31]_i_6_n_0 ),
        .I2(\crc_reg[8]_i_3_n_0 ),
        .I3(\crc_reg[19]_i_2_n_0 ),
        .I4(\crc_reg[8]_i_4_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[8]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \crc_reg[8]_i_2 
       (.I0(data_in_IBUF[50]),
        .I1(data_in_IBUF[57]),
        .I2(data_in_IBUF[25]),
        .I3(p_13_in83_in),
        .O(\crc_reg[8]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[8]_i_3 
       (.I0(\crc_reg[0]_i_4_n_0 ),
        .I1(\crc_reg[10]_i_4_n_0 ),
        .I2(data_in_IBUF[43]),
        .I3(data_in_IBUF[48]),
        .I4(\crc_reg[30]_i_13_n_0 ),
        .I5(\crc_reg[29]_i_6_n_0 ),
        .O(\crc_reg[8]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[8]_i_4 
       (.I0(\crc_reg[24]_i_5_n_0 ),
        .I1(p_8_in39_in),
        .I2(data_in_IBUF[21]),
        .I3(data_in_IBUF[44]),
        .I4(data_in_IBUF[34]),
        .O(\crc_reg[8]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF96696996)) 
    \crc_reg[9]_i_1 
       (.I0(\crc_reg[30]_i_2_n_0 ),
        .I1(\crc_reg[9]_i_2_n_0 ),
        .I2(\crc_reg[28]_i_2_n_0 ),
        .I3(\crc_reg[9]_i_3_n_0 ),
        .I4(\crc_reg[9]_i_4_n_0 ),
        .I5(crc_init_IBUF),
        .O(p_1_in__0[9]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \crc_reg[9]_i_2 
       (.I0(\crc_reg[5]_i_5_n_0 ),
        .I1(p_0_in7_in),
        .I2(data_in_IBUF[5]),
        .O(\crc_reg[9]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    \crc_reg[9]_i_3 
       (.I0(\crc_reg[24]_i_2_n_0 ),
        .I1(\crc_reg[30]_i_14_n_0 ),
        .I2(data_in_IBUF[29]),
        .I3(p_12_in61_in),
        .I4(data_in_IBUF[28]),
        .I5(p_9_in40_in),
        .O(\crc_reg[9]_i_3_n_0 ));
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[9]_i_4 
       (.I0(data_in_IBUF[44]),
        .I1(data_in_IBUF[34]),
        .I2(\crc_reg[31]_i_14_n_0 ),
        .I3(\crc_reg[29]_i_6_n_0 ),
        .I4(\crc_reg[9]_i_5_n_0 ),
        .O(\crc_reg[9]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT5 #(
    .INIT(32'h96696996)) 
    \crc_reg[9]_i_5 
       (.I0(data_in_IBUF[45]),
        .I1(data_in_IBUF[1]),
        .I2(p_1_in),
        .I3(data_in_IBUF[47]),
        .I4(data_in_IBUF[36]),
        .O(\crc_reg[9]_i_5_n_0 ));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[0] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[0]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(\crc_reg_reg_n_0_[0] ));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[10] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[10]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_2_in23_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[11] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[11]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_3_in24_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[12] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[12]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_3_in36_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[13] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[13]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_6_in59_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[14] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[14]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_4_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[15] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[15]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_4_in37_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[16] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[16]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_5_in25_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[17] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[17]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_6_in26_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[18] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[18]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_6_in38_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[19] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[19]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_7_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[1] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[1]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_1_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[20] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[20]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_8_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[21] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[21]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_8_in39_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[22] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[22]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_11_in60_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[23] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[23]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_12_in72_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[24] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[24]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_12_in77_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[25] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[25]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_13_in83_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[26] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[26]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_12_in89_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[27] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[27]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_9_in27_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[28] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[28]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_9_in40_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[29] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[29]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_12_in61_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[2] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[2]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_0_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[30] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[30]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_10_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[31] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[31]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_10_in41_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[3] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[3]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_0_in2_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[4] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[4]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_0_in4_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[5] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[5]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_0_in7_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[6] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[6]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_2_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[7] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[7]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_3_in8_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[8] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[8]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_3_in58_in));
  FDPE #(
    .INIT(1'b1)) 
    \crc_reg_reg[9] 
       (.C(CLK_IBUF_BUFG),
        .CE(\crc_reg[31]_i_1_n_0 ),
        .D(p_1_in__0[9]),
        .PRE(\crc_reg[31]_i_3_n_0 ),
        .Q(p_0_in22_in));
  IBUF \data_in_IBUF[0]_inst 
       (.I(data_in[0]),
        .O(data_in_IBUF[0]));
  IBUF \data_in_IBUF[10]_inst 
       (.I(data_in[10]),
        .O(data_in_IBUF[10]));
  IBUF \data_in_IBUF[11]_inst 
       (.I(data_in[11]),
        .O(data_in_IBUF[11]));
  IBUF \data_in_IBUF[12]_inst 
       (.I(data_in[12]),
        .O(data_in_IBUF[12]));
  IBUF \data_in_IBUF[13]_inst 
       (.I(data_in[13]),
        .O(data_in_IBUF[13]));
  IBUF \data_in_IBUF[14]_inst 
       (.I(data_in[14]),
        .O(data_in_IBUF[14]));
  IBUF \data_in_IBUF[15]_inst 
       (.I(data_in[15]),
        .O(data_in_IBUF[15]));
  IBUF \data_in_IBUF[16]_inst 
       (.I(data_in[16]),
        .O(data_in_IBUF[16]));
  IBUF \data_in_IBUF[17]_inst 
       (.I(data_in[17]),
        .O(data_in_IBUF[17]));
  IBUF \data_in_IBUF[18]_inst 
       (.I(data_in[18]),
        .O(data_in_IBUF[18]));
  IBUF \data_in_IBUF[19]_inst 
       (.I(data_in[19]),
        .O(data_in_IBUF[19]));
  IBUF \data_in_IBUF[1]_inst 
       (.I(data_in[1]),
        .O(data_in_IBUF[1]));
  IBUF \data_in_IBUF[20]_inst 
       (.I(data_in[20]),
        .O(data_in_IBUF[20]));
  IBUF \data_in_IBUF[21]_inst 
       (.I(data_in[21]),
        .O(data_in_IBUF[21]));
  IBUF \data_in_IBUF[22]_inst 
       (.I(data_in[22]),
        .O(data_in_IBUF[22]));
  IBUF \data_in_IBUF[23]_inst 
       (.I(data_in[23]),
        .O(data_in_IBUF[23]));
  IBUF \data_in_IBUF[24]_inst 
       (.I(data_in[24]),
        .O(data_in_IBUF[24]));
  IBUF \data_in_IBUF[25]_inst 
       (.I(data_in[25]),
        .O(data_in_IBUF[25]));
  IBUF \data_in_IBUF[26]_inst 
       (.I(data_in[26]),
        .O(data_in_IBUF[26]));
  IBUF \data_in_IBUF[27]_inst 
       (.I(data_in[27]),
        .O(data_in_IBUF[27]));
  IBUF \data_in_IBUF[28]_inst 
       (.I(data_in[28]),
        .O(data_in_IBUF[28]));
  IBUF \data_in_IBUF[29]_inst 
       (.I(data_in[29]),
        .O(data_in_IBUF[29]));
  IBUF \data_in_IBUF[2]_inst 
       (.I(data_in[2]),
        .O(data_in_IBUF[2]));
  IBUF \data_in_IBUF[30]_inst 
       (.I(data_in[30]),
        .O(data_in_IBUF[30]));
  IBUF \data_in_IBUF[31]_inst 
       (.I(data_in[31]),
        .O(data_in_IBUF[31]));
  IBUF \data_in_IBUF[32]_inst 
       (.I(data_in[32]),
        .O(data_in_IBUF[32]));
  IBUF \data_in_IBUF[33]_inst 
       (.I(data_in[33]),
        .O(data_in_IBUF[33]));
  IBUF \data_in_IBUF[34]_inst 
       (.I(data_in[34]),
        .O(data_in_IBUF[34]));
  IBUF \data_in_IBUF[35]_inst 
       (.I(data_in[35]),
        .O(data_in_IBUF[35]));
  IBUF \data_in_IBUF[36]_inst 
       (.I(data_in[36]),
        .O(data_in_IBUF[36]));
  IBUF \data_in_IBUF[37]_inst 
       (.I(data_in[37]),
        .O(data_in_IBUF[37]));
  IBUF \data_in_IBUF[38]_inst 
       (.I(data_in[38]),
        .O(data_in_IBUF[38]));
  IBUF \data_in_IBUF[39]_inst 
       (.I(data_in[39]),
        .O(data_in_IBUF[39]));
  IBUF \data_in_IBUF[3]_inst 
       (.I(data_in[3]),
        .O(data_in_IBUF[3]));
  IBUF \data_in_IBUF[40]_inst 
       (.I(data_in[40]),
        .O(data_in_IBUF[40]));
  IBUF \data_in_IBUF[41]_inst 
       (.I(data_in[41]),
        .O(data_in_IBUF[41]));
  IBUF \data_in_IBUF[42]_inst 
       (.I(data_in[42]),
        .O(data_in_IBUF[42]));
  IBUF \data_in_IBUF[43]_inst 
       (.I(data_in[43]),
        .O(data_in_IBUF[43]));
  IBUF \data_in_IBUF[44]_inst 
       (.I(data_in[44]),
        .O(data_in_IBUF[44]));
  IBUF \data_in_IBUF[45]_inst 
       (.I(data_in[45]),
        .O(data_in_IBUF[45]));
  IBUF \data_in_IBUF[46]_inst 
       (.I(data_in[46]),
        .O(data_in_IBUF[46]));
  IBUF \data_in_IBUF[47]_inst 
       (.I(data_in[47]),
        .O(data_in_IBUF[47]));
  IBUF \data_in_IBUF[48]_inst 
       (.I(data_in[48]),
        .O(data_in_IBUF[48]));
  IBUF \data_in_IBUF[49]_inst 
       (.I(data_in[49]),
        .O(data_in_IBUF[49]));
  IBUF \data_in_IBUF[4]_inst 
       (.I(data_in[4]),
        .O(data_in_IBUF[4]));
  IBUF \data_in_IBUF[50]_inst 
       (.I(data_in[50]),
        .O(data_in_IBUF[50]));
  IBUF \data_in_IBUF[51]_inst 
       (.I(data_in[51]),
        .O(data_in_IBUF[51]));
  IBUF \data_in_IBUF[52]_inst 
       (.I(data_in[52]),
        .O(data_in_IBUF[52]));
  IBUF \data_in_IBUF[53]_inst 
       (.I(data_in[53]),
        .O(data_in_IBUF[53]));
  IBUF \data_in_IBUF[54]_inst 
       (.I(data_in[54]),
        .O(data_in_IBUF[54]));
  IBUF \data_in_IBUF[55]_inst 
       (.I(data_in[55]),
        .O(data_in_IBUF[55]));
  IBUF \data_in_IBUF[56]_inst 
       (.I(data_in[56]),
        .O(data_in_IBUF[56]));
  IBUF \data_in_IBUF[57]_inst 
       (.I(data_in[57]),
        .O(data_in_IBUF[57]));
  IBUF \data_in_IBUF[58]_inst 
       (.I(data_in[58]),
        .O(data_in_IBUF[58]));
  IBUF \data_in_IBUF[59]_inst 
       (.I(data_in[59]),
        .O(data_in_IBUF[59]));
  IBUF \data_in_IBUF[5]_inst 
       (.I(data_in[5]),
        .O(data_in_IBUF[5]));
  IBUF \data_in_IBUF[60]_inst 
       (.I(data_in[60]),
        .O(data_in_IBUF[60]));
  IBUF \data_in_IBUF[61]_inst 
       (.I(data_in[61]),
        .O(data_in_IBUF[61]));
  IBUF \data_in_IBUF[62]_inst 
       (.I(data_in[62]),
        .O(data_in_IBUF[62]));
  IBUF \data_in_IBUF[63]_inst 
       (.I(data_in[63]),
        .O(data_in_IBUF[63]));
  IBUF \data_in_IBUF[6]_inst 
       (.I(data_in[6]),
        .O(data_in_IBUF[6]));
  IBUF \data_in_IBUF[7]_inst 
       (.I(data_in[7]),
        .O(data_in_IBUF[7]));
  IBUF \data_in_IBUF[8]_inst 
       (.I(data_in[8]),
        .O(data_in_IBUF[8]));
  IBUF \data_in_IBUF[9]_inst 
       (.I(data_in[9]),
        .O(data_in_IBUF[9]));
  IBUF nRST_IBUF_inst
       (.I(nRST),
        .O(nRST_IBUF));
  IBUF rx_IBUF_inst
       (.I(rx),
        .O(rx_IBUF));
  IBUF valid_IBUF_inst
       (.I(valid),
        .O(valid_IBUF));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
