`timescale 1ns / 10ps
module FIFO_TX #(
    parameter DATA_WIDRH = 64,
    parameter FIFO_DEPTH = 64, // Depth of the FIFO
    parameter FIFO_WIDTH = $clog2(FIFO_DEPTH) // Width of the FIFO address
)(
    input logic CLK,
    input logic nRST,

    //TCP interface
    input logic rd_FIFO_en,
    output logic rd_FIFO_valid,
    output logic [DATA_WIDRH - 1:0] rd_FIFO_payload,

    //Soupbin TCP interface
    input logic axis_last,
    input logic wr_FIFO_en,
    input logic [31:0] len_seq,
    input logic [DATA_WIDRH - 1:0] soupbin_TCP_payload,
    output logic wr_FIFO_valid //FULL case
    
);

    // typedef enum logic [2:0] { 
    //     IDLE,
    //     FLUSH,
    //  } name;

    
    typedef struct packed {
        logic valid;
        logic [31:0] seq_num;
        logic [31:0] len_seq;
        logic [FIFO_WIDTH - 1:0] ptr_str;
        logic [FIFO_WIDTH - 1:0] ptr_end;

    } FIFO_TX_t;


    FIFO_TX_t [15:0] dict_tx, ndict_tx;
    logic full, empty;
    logic [$clog2(16) -1 : 0] dict_wrt_ptr, ndict_wrt_ptr, dict_rd_ptr, ndict_rd_ptr;
    logic [FIFO_WIDTH - 1:0] ptr_str, nptr_str, ptr_end, nptr_end
    logic [FIFO_WIDTH - 1:0] rd_ptr, nrd_ptr, wrt_ptr, nwrt_ptr;
    logic [FIFO_WIDTH - 1:0] [FIFO_DEPTH - 1:0] TCP_tx_order, nTCP_tx_order;

    assign full = rd_ptr == (wrt_ptr - 1);
    assign emptur = wrt_ptr == rd_ptr;

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            wrt_ptr <= 0;
            rd_ptr <= 0;
            ptr_str <= 0;
            ptr_end <= 0;
            TCP_tx_order <= 0;
            dict_tx <= 0;
            dict_wrt_ptr <= 0;
            dict_rd_ptr <= 0;
        end else begin
            wrt_ptr <= nwrt_ptr;
            rd_ptr <= nrd_ptr;
            ptr_str <= nptr_str;
            ptr_end <= nptr_end;
            TCP_tx_order <= nTCP_tx_order;
            dict_tx <= ndict_tx;
            dict_wrt_ptr <= 0;
            dict_rd_ptr <= 0;
        end    
    
    end

    

    always_comb begin 
        nrd_ptr = rd_ptr;
        nwrt_ptr = wrt_ptr;
        nptr_str = ptr_str;
        nptr_end = ptr_end;
        nTCP_tx_order = TCP_tx_order;
        ndict_tx = dict_tx;
        ndict_rd_ptr = dict_rd_ptr;
        ndict_wrt_ptr = dict_wrt_ptr;

    if (wr_FIFO_en && !full) begin
        nptr_str = wrt_ptr;
        nwrt_ptr = wrt_ptr + 1;
        nTCP_tx_order[wrt_ptr] = soupbin_TCP_payload;

        //last bytes_data
        if (axis_last) begin
            ndict_tx[dict_wrt_ptr].len_seq = len_seq;
            ndict_tx[dict_wrt_ptr].ptr_str = ptr_str;
            ndict_tx[dict_wrt_ptr].ptr_end = wrt_ptr + 1;
            ndict_tx[dict_wrt_ptr].valid = 1'b1;
            ndict_wrt_ptr = dict_wrt_ptr + 1;
        end
    end








        
    end
        
    
    



endmodule
