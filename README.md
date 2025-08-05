# HFT_sim# 🚀 Project Name

> Implemented a low-latency High-Frequency simulation (HFT) with Alinx AX735 FPGA and 10G Ethernet, integrating custom TCP/IP stack and MAC controller, ITCH/OUCH parser for market data and order execution

<!-- ![GitHub license](https://img.shields.io/github/license/USERNAME/REPO)
![GitHub issues](https://img.shields.io/github/issues/USERNAME/REPO)
![GitHub stars](https://img.shields.io/github/stars/USERNAME/REPO)
![GitHub forks](https://img.shields.io/github/forks/USERNAME/REPO) -->

---

## 📖 Table of Contents
- [About](#-about)
- [Features](#-features)
- [Installation](#-installation)
- [Usage](#-usage)
- [Screenshots](#-screenshots)
- [API Reference](#-api-reference)
- [Contributing](#-contributing)
- [License](#-license)
- [Contact](#-contact)

---

## 📌 About
> This project is an implication of high-performance FPGA-based with customized TCP/IP stack optimized for high-frequency trading, designed to minimize latency and maximize throughput.

---

## ✨ Features
- ✅ Ethernet MAC controller for 10GBASE-R
- ✅ Ethernet IPv4 layer without VLAN supporting
- ✅ Ethernet UDP layer
- ✅ Ethernet UDP multi-casting feature
- ✅ Ethernet TCP layer
- ✅ TCP out of order message receive feature
- ✅ TCP out of order duplicate ACKs fast transmission


- 🔄 ITCH 5.0 decoder
- 🔄 MoldUDP64 AXI Stream receiver
- 🔄 Soupbin TCP 3.0 message packing
- 🔄 OUCH 5.0 encoder message
- 🔄 TCP Glimpse request handler
- 🔄 TCP Glimpse response handler
- 🔄 Monitor AXIS-4 stream
- 🔄 Updating runing-time config registers
- 🔄 TCP Glimpse response handler


---

## Contributing

## 🛠 Installation
**Requirement:**
- verilator 5.037
- gtkwave
- python3

**Clone the repository:**
```bash
git clone https://github.com/USERNAME/REPO.git










