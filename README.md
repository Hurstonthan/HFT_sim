# HFT_sim

## 1. Project Overview

This project is an implementation of a low-latency network stack designed for processing high-frequency financial market data. The primary goal is to handle the reception and transmission of data with minimal delay by implementing the core protocol logic, ultimately targeting the **ITCH** and **MoldUDP64** protocols.

The system is built from the ground up, starting with the physical layer framing and moving up to the application layer protocols.

## 2. Current Status

**Status:** `In Progress`

The foundational networking layers (L2 and L4) are complete and have been successfully integrated. The project can currently send and receive UDP datagrams over a standard Ethernet network.

### Completed Milestones

- **Ethernet Frame Controller (Layer 2):**
  
  - Full implementation of the Ethernet II framing logic.
  - Handles `Preamble` and `Start Frame Delimiter (SFD)` for frame synchronization.
  - Correctly processes source and destination `MAC` addresses.
  - Generates and verifies the `Frame Check Sequence (FCS)`.

- **UDP/IP Packet Handler (Layer 3 & 4):**
  
  - A lightweight IP header module (`IPv4`) has been implemented to support UDP.
  - The **UDP Transmitter (TX)** module is complete and can encapsulate payloads into valid UDP datagrams.
  - The **UDP Receiver (RX)** module is complete and can parse incoming UDP datagrams, validate their integrity, and extract the payload.
  - Features include correct handling of source/destination ports and calculation of the UDP `length` and `checksum` fields.

- **Full Integration:**
  
  - The UDP/IP handler has been successfully integrated with the Ethernet frame controller.
  - A complete end-to-end data path for transmitting and receiving raw UDP payloads is operational.

## 3. Technology Stack

- **Hardware Description Language:** `SystemVerilog`
- **Simulation & Verification:** `Verilator, GTKWave`
- **Target Protocols:** `IPv4`, `UDP`
- **Future Protocols:** `MoldUDP64`, `ITCH`

## 4. Project Structure

```
├── doc/                # Documentation and protocol specifications
├── rtl/                # All RTL source code (System Verilog)
│   ├── MAC/            # Ethernet MAC components (TX/RX)
│   ├── ip/             # IPv4 header components
│   ├── udp/            # UDP datagram components (TX/RX)
│   └── top.sv          # Top-level design file
├── tb/                 # All testbench code 
```

## 5. Next Steps & Roadmap

With the transport layer infrastructure now stable, the project will proceed to the application and session layers. The immediate focus is to build the logic for handling high-frequency trading data protocols.

1. **NASDAQ ITCH Protocol Module:**
   
   - **Goal:** Develop a module to parse and generate binary **ITCH 5.0** messages.
   - **Tasks:**
     - Implement a parser to decode the various ITCH message types (e.g., Add Order, Order Executed).
     - Create a generator to construct valid ITCH messages for transmission.

2. **MoldUDP64 Protocol Module:**
   
   - **Goal:** Implement the **MoldUDP64** session protocol for reliable, sequenced message delivery over UDP.
   - **Tasks:**
     - Manage MoldUDP64 message blocks and sequence numbers.
     - Implement the session management logic for handling message gaps and retransmission requests.

3. **Final Integration:**
   
   - Combine the ITCH and MoldUDP64 modules with the existing UDP/Ethernet stack to create a fully functional market data processing system.
   - Perform end-to-end system testing to validate correctness and measure latency.