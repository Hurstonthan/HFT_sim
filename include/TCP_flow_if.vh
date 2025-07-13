`ifndef TCP_FLOW_IF_VH
`define TCP_FLOW_IF_VH

interface TCP_flow_if;

parameter int FIFO_DEPTH  = 2048;               // words  (must be power‑of‑2)
parameter int DATA_WIDTH  = 64;
parameter int CTRL_WIDTH = 8;
localparam int WORD_BYTES = DATA_WIDTH / 8;
localparam int FIFO_WIDTH = $clog2(FIFO_DEPTH);
localparam int WINDOW_BYTES = FIFO_DEPTH * WORD_BYTES;
//Interface of between the TCP receiver and the TCP_FLOW logic
logic [7:0] TCP_control_rx;
logic [31:0] seq_num_rx;
logic [31:0] ACK_rx;
logic [3:0] offset_rx;
logic [15:0] window_size_rx;
logic [15:0] checksum_rx;
logic [15:0] urgent_pointer_rx;
logic rcv_data;


//Interface of between the TCP sender and the TCP_FLOW logic
logic TCP_tx_en, seq_up;
logic [7:0] TCP_control_tx;
logic [31:0] seq_num_tx;
logic [31:0] ACK_tx;
logic [3:0] offset_tx;
logic [15:0] window_size_tx;
logic [15:0] checksum_tx;
logic [15:0] urgent_pointer_tx;
logic end_ss;
logic TCP_stop_flg;
logic full;

logic timeout_flag;
logic hand_shake_done;
logic [31:0] ISN_num;

//Number of bytes in flight
logic  [31:0] bytes_sent;
logic  [31:0] bytes_abt_sent;
logic  [31:0] payload_len_rx;


//debugging for the rx
logic TCP_last;
logic [31:0] rcv_next;
logic [31:0] seq_num;
logic [31:0] seq_rx_FIFO_rd;
logic [7:0]  TCP_bytes_trk;
logic [7:0] wr_FIFO_offset;
logic [7:0] wr_FIFO_len, rd_FIFO_len;
logic [FIFO_WIDTH - 1:0] wr_FIFO_ptr, rd_FIFO_ptr;
logic wr_FIFO_en, rd_FIFO_en, nw_segment;
logic TCP_flush, rd_FIFO_valid;

modport rx(
    input rcv_data, timeout_flag,
    input TCP_control_rx,
    input seq_num_rx,
    input ACK_rx,
    input offset_rx,
    input window_size_rx,
    input checksum_rx,
    input urgent_pointer_rx,
    input payload_len_rx,
    input TCP_flush,
    input TCP_bytes_trk,
    input nw_segment,
    input TCP_last,
    
    //Address of FIFO_pointers
    input wr_FIFO_ptr,
    input wr_FIFO_len,
    output wr_FIFO_en,
    output wr_FIFO_offset,

    input rd_FIFO_en,
    input seq_rx_FIFO_rd,
    output rd_FIFO_ptr,
    output rd_FIFO_len,
    output rd_FIFO_valid,
    
    output rcv_next,
    output seq_num
);

modport tx(
    input end_ss,
    input ISN_num,
    input bytes_sent,
    input bytes_abt_sent,
    input seq_up,
    input full, //the full signal should come out the payload_FIFO.sv
    output TCP_stop_flg,
    output TCP_control_tx,
    output seq_num_tx,
    output ACK_tx,
    output offset_tx,
    output window_size_tx,
    output checksum_tx,
    output urgent_pointer_tx,
    output hand_shake_done
    
);

endinterface
`endif
