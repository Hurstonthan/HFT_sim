// ------------------------------------------------------------
// Little-endian (lane-0-first)  →  Big-endian (MSB-first)
// ------------------------------------------------------------
module xgmii_little_to_big (
    input  logic [63:0] xgmii_rxd ,   // raw XGMII data
    input  logic [7:0]  xgmii_rxc ,   // raw XGMII control
    output logic [63:0] be_rxd   ,    // bytes reversed
    output logic [7:0]  be_rxc        // control bits reversed
);

    // --- byte-swap the 64-bit data word ---
    assign be_rxd = { xgmii_rxd[ 7: 0],  // lane 0 → MS byte
                      xgmii_rxd[15: 8],
                      xgmii_rxd[23:16],
                      xgmii_rxd[31:24],
                      xgmii_rxd[39:32],
                      xgmii_rxd[47:40],
                      xgmii_rxd[55:48],
                      xgmii_rxd[63:56]}; // lane 7 → LS byte

    // --- reverse the 8 control bits in the same way ---
    assign be_rxc = { xgmii_rxc[0],      // lane 0’s control → MS bit
                      xgmii_rxc[1],
                      xgmii_rxc[2],
                      xgmii_rxc[3],
                      xgmii_rxc[4],
                      xgmii_rxc[5],
                      xgmii_rxc[6],
                      xgmii_rxc[7] };    // lane 7’s control → LS bit
endmodule