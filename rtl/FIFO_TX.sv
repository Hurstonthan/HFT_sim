`timescale 1ns / 10ps
module FIFO_TX #(
    parameter DATA_WIDRH = 64,
    parameter FIFO_DEPTH = 64, // Depth of the FIFO
    parameter FIFO_WIDTH = $clog2(FIFO_DEPTH) // Width of the FIFO address
)(
    input logic CLK,
    input logic nRST,

    //TCP TX interface
    input logic seq_up,
    input logic [31:0] seq_tx_num,
    input logic rd_FIFO_en,
    output logic rd_FIFO_valid,
    output logic [DATA_WIDRH - 1:0] rd_FIFO_payload,

    //TCP flow CTRL interface
    input logic [31:0] ACK_num,
    input logic ACK_rcv_flag,

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

    //variable that wait for updating TX_en sending
    logic [15:0] nbytes_abt_sent, bytes_msg_trk, nbytes_msg_trk;
    logic [FIFO_WIDTH - 1:0] ptr_str, nptr_str, ptr_end, nptr_end;

    //variable that wait for updating the wr_en writing
    logic [FIFO_WIDTH - 1:0] ptr_msg_end_str, nptr_msg_end_str, ptr_msg_trk, nptr_msg_trk; 


    logic [FIFO_WIDTH - 1:0]   
    typedef struct packed {
        logic valid;
        logic [31:0] seq_num;
        logic [31:0] len_seq;
        logic [FIFO_WIDTH - 1:0] ptr_str;
        logic [FIFO_WIDTH - 1:0] ptr_end;

    } FIFO_TX_t;

    typedef enum logic [1:0] { 
        IDLE,
        SEND_DATA 
    } rd_state_t;


    rd_state_t rd_state, nrd_state;


    FIFO_TX_t [15:0] dict_tx, ndict_tx;
    logic full, empty;
    logic [$clog2(16) -1 : 0] dict_wrt_ptr, ndict_wrt_ptr, dict_rd_ptr, ndict_rd_ptr;
    
    logic [FIFO_WIDTH - 1:0] rd_ptr, nrd_ptr, wrt_ptr, nwrt_ptr;
    logic [FIFO_WIDTH - 1:0] [FIFO_DEPTH - 1:0] TCP_tx_order, nTCP_tx_order;

    assign full = rd_ptr == (wrt_ptr - 1);
    assign emptur = wrt_ptr == rd_ptr;


    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            ptr_str <= 0;
            ptr_end <= 0;
            rd_ptr <= 0;
            rd_state <=0;
        end else begin
            ptr_str <= nptr_str;
            ptr_end <= nptr_end;
            rd_state <= nrd_state;
        end
    end 


    always_comb begin
        nrd_state = rd_state;
        nptr_str = ptr_str;
        nptr_end = ptr_end;
        nrd_ptr = rd_ptr;
        case (rd_state)
            IDLE: begin
                if (rd_FIFO_en) begin
                    nptr_str = rd_ptr;
                    nptr_end = ptr_end + 1;
                    nrd_ptr = rd_ptr + 1;
                end

            end

            SEND_DATA:
        endcase
    end

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            wrt_ptr <= 0;
            rd_ptr <= 0;
            
            TCP_tx_order <= 0;
            dict_tx <= 0;
            dict_wrt_ptr <= 0;
            dict_rd_ptr <= 0;
        end else begin
            wrt_ptr <= nwrt_ptr;
            rd_ptr <= nrd_ptr;
            
            TCP_tx_order <= nTCP_tx_order;
            dict_tx <= ndict_tx;
            dict_wrt_ptr <= 0;
            dict_rd_ptr <= 0;
        end    
    
    end

    

    always_comb begin 
        nwrt_ptr = wrt_ptr;
        nTCP_tx_order = TCP_tx_order;
        ndict_tx = dict_tx;
        ndict_rd_ptr = dict_rd_ptr;
        ndict_wrt_ptr = dict_wrt_ptr;

    if (wr_FIFO_en && !full) begin
        nptr_str = wrt_ptr;
        nwrt_ptr = wrt_ptr + 1;
        nTCP_tx_order[wrt_ptr] = soupbin_TCP_payload;

        
    end








        
    end
        
    
    



endmodule
