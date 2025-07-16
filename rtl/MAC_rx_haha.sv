`timescale 1ns/10ps

module MAC_rx_haha #(
    parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter MAC_DEST_ADDR = 48'hFFFF_FFFF_FFFF,
    parameter MAC_SRC_ADDR = 48'hAACC_BBFF_FFFF,
    parameter CRC_MAGIC = 32'hC704_DD7B
) (
    input logic CLK,
    input logic nRST,

    // Interface connecting the Payload logic
    input logic [DATA_WIDTH - 1:0] xgmii_rxd,
    input logic [CTRL_WIDTH - 1:0] xgmii_rxc,
    
    output logic [DATA_WIDTH - 1:0] MAC_payload_rcv,
    output logic MAC_valid,
    output logic CRC_flush,
    output logic frame_ok,
    output logic [7:0] bytes_rcv_len
);

    logic crc_init, end_valid;
    logic [31:0] crc_out;
    logic [63:0] crc_in, crc_in_big;
    logic [15:0] xgmii_rxc_frame, nxgmii_rxc_frame;
    logic [$clog2(CTRL_WIDTH) - 1:0] bytes_offset;
    logic [$clog2(CTRL_WIDTH) - 1 : 0]  end_FCS, str_FCS;
    logic sof_found, crc_valid, nsof_found;
    logic [2:0] sof_lane, nsof_lane;
    logic [DATA_WIDTH - 1 : 0] xgmii_rxd_f, nxgmii_rxd_f;
    logic [CTRL_WIDTH - 1 : 0] xgmii_rxc_f, nxgmii_rxc_f; 
    logic [15:0] FCS_rxc;
    logic [3:0] FCS_offset;
    logic [31:0] crc_check, ncrc_check;
    logic [127:0] frame_store, nframe_store;
    logic [127:0] FCS_grap, FCS_shifted;
    
    logic [15:0] crc_ind, ncrc_ind;
    logic [5:0] shift_bits;
    logic [7:0] byte_END;
    logic [31:0] FCS_frame, nFCS_frame; 
    logic [63:0]FCS_frame_cvt;
    //logic [63:0] MAC_;
    logic crc_delay, ncrc_delay;
    int i;

    logic soft_dl, nsoft_dl;

    logic [63:0] nMAC_payload_rcv;
    logic [7:0] bytes_rcv, nbytes_rcv;
    logic [7:0] bytes_rcv_dl, nbytes_rcv_dl;
    logic nMAC_valid;
    
    
    typedef enum logic [5:0] {
        IDLE,
        RCV_ETHER_HEAD1,
        RCV_ETHER_HEAD2,
        RCV_MAC_PAYLOAD,
        CHECK_CRC,
        ERROR
    } MAC_t;

    crc32_parallel_64bit CRC (
        .CLK(CLK),
        .nRST(nRST),
        .rx(1'b0),
        .valid(crc_valid),
        .crc_init(crc_init),
        .data_in(crc_in_big),
        .crc_out(crc_out)
      );

      xgmii_little_to_big crc_convert (
        .xgmii_rxd(crc_in),
        .be_rxd(crc_in_big)
      );

      xgmii_little_to_big crc_frame_convert (
        .xgmii_rxd({FCS_frame,32'h0}),
        .be_rxd(FCS_frame_cvt)
      );

    priority_encoder #(
        .WIDTH(CTRL_WIDTH),
        .MSB(1'b0)
    ) crc_check_encoder (
        .din(xgmii_rxc),
        .valid(end_valid),
        .idx(bytes_offset)
    );

    priority_encoder #(
        .WIDTH(CTRL_WIDTH + CTRL_WIDTH),
        .MSB(1'b0)
    ) xgmii_fcs (
        .din(FCS_rxc),
        .valid(),
        .idx(FCS_offset)
    );

    MAC_t state, next_state;
    
    assign FCS_grap = {xgmii_rxd, frame_store[127:64]}; //prev xgmii_rxd, and xgmii_rxd
    assign shift_bits = bytes_offset << 3; //shift bits to get start of FCS
    assign byte_END = (xgmii_rxd >> shift_bits);
    assign FCS_rxc = {xgmii_rxc, xgmii_rxc_f};
    assign crc_in = xgmii_rxd_f;
    assign bytes_rcv_len = bytes_rcv;

    always_ff @(posedge CLK or negedge nRST) begin
        if (!nRST) begin
            state <= IDLE;
            crc_check <= '0;
            frame_store <= '0;
            // xgmii_rxd_f <= 0;
            crc_delay <= 0;
            FCS_frame <= 0;
            sof_found <= 0;
            sof_lane <= 0;
            xgmii_rxc_frame <= 0;
            soft_dl <= 0;
            MAC_valid <= 0;
            MAC_payload_rcv <= 0;
            bytes_rcv <= 0;
            bytes_rcv_dl <= 0;
            
        end else begin
            state <= next_state;
            crc_check <= ncrc_check;
            frame_store <= nframe_store;
            // xgmii_rxd_f <= nxgmii_rxd_f;
            FCS_frame <= nFCS_frame;
            crc_delay <= ncrc_delay;
            sof_found <= nsof_found;
            sof_lane <=  nsof_lane;
            xgmii_rxc_frame <= nxgmii_rxc_frame;
            soft_dl <= nsoft_dl;
            MAC_valid <= nMAC_valid;
            MAC_payload_rcv <= nMAC_payload_rcv;
            bytes_rcv <= nbytes_rcv;
            bytes_rcv_dl <= nbytes_rcv_dl;
        end
    end

    always_comb begin
        next_state = state;
        crc_init = 1'b0;
        crc_valid = 1'b1;
        frame_ok = 1'b0;
        CRC_flush = 1'b0;
        ncrc_check = crc_check;
        ncrc_delay = 1'b0;
        nMAC_valid = 1'b0;
        nsoft_dl = soft_dl;
        xgmii_rxd_f = '0;
        nFCS_frame = FCS_frame;
        nxgmii_rxc_frame = {xgmii_rxc, xgmii_rxc_frame[15:8]};
        nframe_store = {xgmii_rxd,frame_store[127:64]};
        nMAC_payload_rcv = MAC_payload_rcv;
        nMAC_valid = MAC_valid;
        nbytes_rcv = bytes_rcv;
        nbytes_rcv_dl = bytes_rcv_dl;
        if (sof_lane == 0) begin
            xgmii_rxd_f = frame_store[127:64];
            xgmii_rxc_f = xgmii_rxc_frame[15:8];
        end else if (sof_lane == 4) begin
            xgmii_rxd_f = frame_store[95:32];
            xgmii_rxc_f = xgmii_rxc_frame[11:4];
        end

        case (state)
            IDLE: begin
                crc_init = 1'b1;
                if (sof_found) begin
                    if (sof_lane == 4) begin
                        nsoft_dl = 1'b1;
                    end else begin
                        next_state = RCV_ETHER_HEAD1;
                    end
                end

                if (soft_dl) begin
                    next_state = RCV_ETHER_HEAD1;
                end
                
                
            end

            RCV_ETHER_HEAD1: begin
                crc_init = 1'b0;
                if (xgmii_rxd_f[47:0] == MAC_DEST_ADDR && xgmii_rxd_f[63:48] == MAC_SRC_ADDR[47:32]) begin
                    next_state = RCV_ETHER_HEAD2;
                    nMAC_valid = 1'b1;
                end else begin
                    next_state = ERROR;
                end
            end

            RCV_ETHER_HEAD2: begin
                if (xgmii_rxd_f[31:0] == MAC_SRC_ADDR[31:0] && xgmii_rxd_f[47:32] == 16'h0800) begin
                    next_state = RCV_MAC_PAYLOAD;
                    nMAC_payload_rcv = {xgmii_rxd_f[63:48],48'h0};
                    nbytes_rcv = 7'd2;
                    nMAC_valid = 1'b1;

                end else begin
                    nMAC_valid = 1'b0;
                    next_state = ERROR;
                end
            end

            RCV_MAC_PAYLOAD: begin
                nMAC_valid = 1'b1;
                nMAC_payload_rcv = xgmii_rxd_f;
                nbytes_rcv = 7'd8;
                if (end_valid && (byte_END == 8'hFD)) begin
                    nFCS_frame = FCS_grap >> ((FCS_offset - 4) << 3);
                    if (sof_lane == 0) begin
                        if (bytes_offset < 5) begin
                            nbytes_rcv = 8'd4 + bytes_offset; 
                            case (bytes_offset)
                                3'd0: begin
                                    nMAC_payload_rcv = frame_store[95:64];
                                    
                                end
                                3'd1: begin
                                    nMAC_payload_rcv = frame_store[103:64];
                                    
                                end
                                3'd2: begin
                                    nMAC_payload_rcv = frame_store[111:64];
                                    
                                end
                                3'd3: begin
                                    nMAC_payload_rcv = frame_store[119:64];
                                end
                            endcase
                            xgmii_rxd_f = nMAC_payload_rcv;
                            next_state = CHECK_CRC;
                            nMAC_valid = 1'b0;
                        end else begin
                            case (bytes_offset)
                                nbytes_rcv_dl = bytes_offset - 8'd4;
                                3'd5: begin
                                    nframe_store = {{0,xgmii_rxd[7:0]},frame_store[127:64]};
                                end
                                3'd6: begin
                                    nframe_store = {{0,xgmii_rxd[16:0]}, frame_store[127:64]};
                                end

                                3'd7: begin
                                    nframe_store = {{0,xgmii_rxd[23:0]}, frame_store[127:64]};
                                end
                            endcase
                            nMAC_payload_rcv = frame_store[127:64];
                            nbytes_rcv = 8'd8;
                            xgmii_rxd_f = frame_store[127:64];
                            ncrc_delay = 1'b1; 
                        end
                    end

                    //Switch at lane 4
                    else begin
                        ncrc_delay = 1'b1;
                        nbytes_rcv_dl = 7'd4 + (bytes_offset - 7'd4);
                        case(bytes_offset)
                            //CRC is still in xgmii_rxd_curr
                            //Data is still in xgmii_rxd_curr
                            
                            3'd7: begin

                                nframe_store = {{40'h0,xgmii_rxd[23:0]},frame_store[127:64]};
                            end

                            //CRC is still in xgmii_rxd_curr
                            //Data is still in xgmii_rxd_curr
                            3'd6: begin
                                nframe_store = {{48'h 0, xgmii_rxd[15:0], frame_store[127:64]}};
                            end

                            //CRC is still in xgmii_rxd_curr
                            //Data is still in xgmii_rxd_curr
                            3'd5: begin
                                nframe_store = {{56'h0, xgmii_rxd[7:0], frame_store[127:64]}};
                            end
                            
                            //CRC is still in xgmii_rxd_curr
                            //Data is not still in xgmii_rxd_curr
                            3'd4: begin
                                nbytes_rcv_dl = bytes_offset + 8'd4;
                                nframe_store ={64'h0, frame_store[127:64]};
                            end

                            //CRC is in xgmii_previous but not progress
                            //Data is in xgmii_previous but not progress
                            3'd3: begin
                                nbytes_rcv_dl = bytes_offset + 8'd4;
                                nframe_store ={8'h0,{frame_store[119:64]}};
                            end

                            //CRC is in xgmii_previous but not progress
                            //Data is in xgmii_previous but not progress
                            3'd2: begin
                                nbytes_rcv_dl = bytes_offset + 8'd4;
                                nframe_store = {16'h0,frame_store[111:64]};
                            end

                            //CRC is in xgmii_previous but not progress
                            //Data is in xgmii_previous but not progress
                            3'd1: begin
                                nbytes_rcv_dl = bytes_offset + 8'd4;
                                nframe_store = {24'h0, frame_store[103:64]};
                            end
                            //CRC is in xgmii_previous but not progress
                            //Data is in xgmii_previous and progressed
                            3'd0: begin
                                nbytes_rcv = 8'd8;
                                next_state = CHECK_CRC;
                            end
                        endcase
                    end
                end
                if (crc_delay) begin
                    next_state = CHECK_CRC;
                    nbytes_rcv = bytes_rcv_dl;
                    nMAC_valid = 1'b0;
                end
            end

            CHECK_CRC: begin
                crc_valid = 1'b0;
                nMAC_valid = 1'b0;
                if (crc_out == FCS_frame_cvt[31:0]) begin
                    frame_ok = 1'b1;
                    next_state = IDLE;
                end else begin
                    CRC_flush = 1'b1;
                    next_state = ERROR;
                end
            end

        endcase
    end

    always_comb begin
        nsof_found = sof_found;
        nsof_lane = sof_lane;
        for (i = 0; i < 8; i++) begin
            if (state == IDLE && xgmii_rxc[i] && xgmii_rxd[i*8+: 8] == 8'hFB) begin
                nsof_found = 1'b1;
                nsof_lane = i[2:0];
            end
        end
    end

endmodule


