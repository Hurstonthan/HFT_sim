`timescale 1ns/10ps
`include "TCP_flow_if.vh"
`include "ether_pkg.vh"

module TCP_flow_ctrl_tb;

  //---------------------------------------------------------------------------
  // Clock / Reset
  //---------------------------------------------------------------------------
  logic CLK = 0;
  logic nRST = 0;

  // 100 MHz clock (10 ns period)
  always #5 CLK = ~CLK;

  initial begin
    #20  nRST = 1;           // release reset after 20 ns
  end

  //---------------------------------------------------------------------------
  // Interfaces & DUT
  //---------------------------------------------------------------------------
  TCP_flow_if RX();         // default (full-access) interface instance
  TCP_flow_if TX();

  TCP_flow_if tcp();

  // The DUT
  TCP_flow_ctrl #(.N(128)) dut (
    .CLK   (CLK),
    .nRST  (nRST),
    .myrx  (RX.rx),         // bind modports
    .mytx  (RX.tx)
  );

  //---------------------------------------------------------------------------
  // Program block – all test stimulus lives here
  //---------------------------------------------------------------------------
  program automatic testbench;

    //-------------------------------------------------------------------------
    // Simple “tick” helper (wait N rising edges)
    //-------------------------------------------------------------------------

    int bytes_sent = 0;
    int ACK_bytes = 1;
    task automatic tick (int cycles = 1);
      repeat (cycles) @(posedge CLK);
    endtask

    //-------------------------------------------------------------------------
    // Reset both interfaces to known values
    //-------------------------------------------------------------------------
    task automatic reset_drivers();
      // ---- RX side ---------------------------------------------------------
      RX.rcv_data          = 0;
      RX.timeout_flag      = 0;
      RX.TCP_control_rx    = '0;
      RX.seq_num_rx        = '0;
      RX.ACK_rx            = '0;
      RX.offset_rx         = 0;
      RX.window_size_rx    = 16'd64;
      RX.checksum_rx       = 0;
      RX.urgent_pointer_rx = 0;
      RX.payload_len_rx    = 0;

      // ---- TX side (inputs) ------------------------------------------------
      RX.SYN_sent          = 0;
      RX.FIN_sent          = 0;
      RX.ACK_sent          = 0;
      RX.end_ss            = 0;
      RX.seq_up            = 0;
      RX.ISN_num           = 32'h0;   // example ISN
      RX.bytes_sent        = 0;
      RX.bytes_abt_sent    = 5;               // default “about-to-send”
    endtask

    task automatic stop_tx();
      // ---- TX side (inputs) ------------------------------------------------
      RX.SYN_sent          = 0;
      RX.FIN_sent          = 0;
      RX.ACK_sent          = 0;
      RX.end_ss            = 0;
      RX.seq_up            = 0;
      RX.ISN_num           = 32'h0;   // example ISN
      RX.bytes_sent        = 0;
      RX.bytes_abt_sent    = 5;               // default “about-to-send”

    endtask

    task automatic stop_rx();
        RX.rcv_data          = 0;
    endtask

    //-------------------------------------------------------------------------
    // Drive a TX-side packet into the DUT
    //-------------------------------------------------------------------------
    task automatic send_tx_pkt(string kind);
      case (kind)
        "SYN"  : begin
                   RX.bytes_abt_sent = 1;
                   RX.SYN_sent = 1;   tick(1);  
                   RX.SYN_sent = 0;
                   bytes_sent = bytes_sent + 1;
                   
                 end
        "ACK"  : begin
                   RX.ACK_sent = 1;   tick(1);  RX.ACK_sent = 0;
                 end
        "FIN"  : begin
                   RX.FIN_sent = 1;   tick(1);  
                   RX.FIN_sent = 0;
                   bytes_sent = bytes_sent + 1;
                 end
        "DATA" : begin
                   RX.bytes_sent = bytes_sent;
                   RX.bytes_abt_sent = 16;   // 32-byte payload example
                   RX.seq_up         = 1;    
                   tick(1);
                   bytes_sent = bytes_sent + RX.bytes_abt_sent;
                   RX.seq_up         = 0;
                 end
        default: $error("[%0t] Unknown TX kind %s", $time, kind);
      endcase
    endtask

    //-------------------------------------------------------------------------
    // Drive an RX-side packet into the DUT
    //  *kind* = "SYN", "ACK", "FIN", or "DATA"
    //  *loss* = 1 to introduce out-of-order (seq_num_rx+16)
    //-------------------------------------------------------------------------
    task automatic drive_rx_pkt(bit loss, string kind);
      // generic fields
      RX.rcv_data          = 1;
      RX.timeout_flag      = 0;
      RX.offset_rx         = 5;        // TCP header = 20 bytes
      RX.window_size_rx    = 128;
      RX.checksum_rx       = 0;
      RX.urgent_pointer_rx = 0;
      RX.payload_len_rx    = (kind == "DATA") ? 32 : 0;

      // control flags
      unique case (kind)
        "SYN"  : RX.TCP_control_rx = 8'b0000_0010;       // SYN
        "ACK"  : RX.TCP_control_rx = 8'b0001_0000;       // ACK
        "FIN"  : RX.TCP_control_rx = 8'b0000_0001;       // FIN
        "SYN_ACK" : RX.TCP_control_rx = 8'b0001_0010;
        default: RX.TCP_control_rx = 8'b0001_0000;       // DATA → ACK-only
      endcase

      // very simple seq#/ack# model
      RX.seq_num_rx = (loss) ? (RX.rcv_next + 32) : RX.rcv_next;
      RX.ACK_rx     = RX.seq_num;

      tick(1);                       // present for 1 cycle
      RX.rcv_data   = 0;             // de-assert

      // wait a cycle for DUT to react
      tick(1);
    endtask



    task automatic in_order_case();
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");

      drive_rx_pkt(0, "DATA");

    endtask

    //-------------------------------------------------------------------------
    // Main stimulus sequence (similar to C++ template)
    //-------------------------------------------------------------------------
    initial begin
      // wait for reset
      reset_drivers();
      wait (nRST);
      tick(2);

      // ---- 1. 3-way handshake --------------------------------------------
      send_tx_pkt("SYN");                    // client → server (SYN)
      drive_rx_pkt(0, "SYN_ACK");                // server → client (SYN-ACK)
      send_tx_pkt("ACK");
      tick(1);
      tick(1);                    // client → server (ACK)
      //in_order_case();
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      send_tx_pkt("DATA");
      tick(1);
      tick(1);
      drive_rx_pkt(0, "DATA");
      drive_rx_pkt(1, "DATA");
      send_tx_pkt("DATA");
      drive_rx_pkt(0, "DATA");


      
      


    //   // ---- 2. Data phase ---------------------------------------------------
    //   repeat (6) begin
    //     send_tx_pkt("DATA");                 // client sends DATA
    //     drive_rx_pkt(0, "ACK");              // server ACKs
    //   end

    //   // inject one out-of-order packet / duplicate ACK scenario
    //   drive_rx_pkt(1, "ACK");                // duplicate ACK (loss scenario)

    //   // ---- 3. Connection close --------------------------------------------
    //   send_tx_pkt("FIN");                    // client FIN
    //   drive_rx_pkt(0, "ACK");                // server ACKs
    //   drive_rx_pkt(0, "FIN");                // server FIN
    //   send_tx_pkt("ACK");                    // client final ACK

      // ---- Finish ----------------------------------------------------------
      #100;
      $display("[%0t] TEST PASSED – simulation finished.", $time);
      $finish;
    end

  endprogram

  

endmodule
