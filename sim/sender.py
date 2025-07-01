#!/usr/bin/env python3
import sys
import threading
import logging
import math
import os
import random
import configparser
import time

from monitor import Monitor
from scapy.all import rdpcap, sendp, get_if_list, getmacbyip, Ether
import simulation_hooks

# -------------------------------------------------------------------
# Globals for reliable‐send protocol
# -------------------------------------------------------------------
thread_lock       = threading.Lock()
ack_received      = threading.Event()
last_sent         = -1
last_ack          = -1
duplicate_ack_cnt = 0
window_size       = 0
timeout           = 0
packets           = []
mode              = None

# -------------------------------------------------------------------
# Helpers: splitting file into numbered payloads
# -------------------------------------------------------------------
def split_byte_string(text, chunk_size, id_size):
    data_size = chunk_size - id_size
    out = []
    for pid, i in enumerate(range(0, len(text), data_size)):
        header = pid.to_bytes(id_size, 'big')
        chunk  = text[i:i+data_size]
        out.append(header + chunk.encode())
    return out

def get_id_size(file_size, data_chunk_size):
    total = math.ceil(file_size / data_chunk_size)
    bits  = total.bit_length()
    return max(1, math.ceil(bits/8))

# -------------------------------------------------------------------
# Send‐through helper (hardware vs. simulation)
# -------------------------------------------------------------------
def send_data(sender_id, receiver_id, payload: bytes):
    if mode == "hardware":
        # real UDP via Monitor
        _send_monitor.send(receiver_id, payload)
    else:
        # simulation: inject into emulator core
        hdr = f"{sender_id} {receiver_id}\n".encode()
        simulation_hooks.inject_to_sender(hdr + payload)

# -------------------------------------------------------------------
# Core reliable‐send routine (handshake + sliding window)
# -------------------------------------------------------------------
def send_packet(sender_id, receiver_id, payloads, max_packet_size, id_size):
    global last_sent, last_ack, duplicate_ack_cnt

    num_pkts = len(payloads)
    first_hs = False

    # --- ACK‐receiver thread (only in hardware mode) ---
    def waiting_ACK():
        global last_ack, duplicate_ack_cnt
        while True:
            addr, data = _send_monitor.recv(max_packet_size)
            ack_id = int.from_bytes(data[2:], 'big')
            with thread_lock:
                if ack_id == last_ack:
                    duplicate_ack_cnt += 1
                else:
                    duplicate_ack_cnt = 0
                last_ack = ack_id
                ack_received.set()

    if mode == "hardware":
        threading.Thread(target=waiting_ACK, daemon=True).start()

    # --- 1) Handshake: tell receiver how many pkts to expect ---
    while not first_hs:
        max_id = (num_pkts - 1).to_bytes(id_size, 'big')
        sz_hdr = id_size.to_bytes(id_size, 'big')
        handshake = max_id + b":" + sz_hdr
        send_data(sender_id, receiver_id, handshake)

        if mode == "hardware":
            if ack_received.wait(timeout):
                with thread_lock:
                    first_hs = True
                    ack_received.clear()
        else:
            # in simulation assume immediate OK
            first_hs = True

    # --- 2) send initial window ---
    last_sent = -1
    with thread_lock:
        while last_sent < min(window_size-1, num_pkts-1):
            last_sent += 1
            send_data(sender_id, receiver_id, payloads[last_sent])

    # --- 3) sliding window with dup‐ACK & timeout ---
    while last_ack < num_pkts-1:
        if mode == "hardware":
            fired = ack_received.wait(timeout)
        else:
            # simulate perfect timing in sim
            time.sleep(0.01)
            fired = True

        with thread_lock:
            if fired and duplicate_ack_cnt >= 3:
                # fast‐retransmit
                pkt_id = last_ack + 1
                send_data(sender_id, receiver_id, payloads[pkt_id])
                duplicate_ack_cnt = 0

            elif not fired:
                # timeout retransmit all un‐acked in window
                for pid in range(last_ack+1, last_sent+1):
                    send_data(sender_id, receiver_id, payloads[pid])

            else:
                # new ACK received — advance window
                while last_sent < num_pkts-1 and (last_sent - last_ack) < window_size:
                    last_sent += 1
                    send_data(sender_id, receiver_id, payloads[last_sent])

            ack_received.clear()

    # --- 4) signal end of transmission ---
    send_data(sender_id, receiver_id, b"__END__")

# -------------------------------------------------------------------
# Main driver
# -------------------------------------------------------------------
def main(cfg_path):
    global _send_monitor, window_size, timeout, packets, mode

    logging.basicConfig(level=logging.INFO, format="%(asctime)s - %(message)s")

    # Load config file path
    # Parse rest of config
    cfg = configparser.RawConfigParser(allow_no_value=True)
    cfg.read(cfg_path)

    receiver_id       = int(cfg.get('receiver', 'id'))
    file_to_send      = cfg.get('nodes', 'file_to_send')
    max_pkt_size      = int(cfg.get('network', 'MAX_PACKET_SIZE'))
    prop_delay        = float(cfg.get('network', 'PROP_DELAY'))
    link_bw           = float(cfg.get('network', 'LINK_BANDWIDTH'))
    max_queued        = float(cfg.get('network', 'MAX_PACKETS_QUEUED'))
    mode              = str(cfg.get('emulator', 'mode'))
    # In hardware mode, bring up a Monitor

    if mode == "hardware":
        _send_monitor = Monitor(cfg_path, 'sender')
    else:
        _send_monitor = None

    # In simulation mode: launch one emulator and register our injection hook
    if mode == "simulation":
        from emulator_core import NetworkEmulator
        _sim_emulator = NetworkEmulator()
        simulation_hooks.inject_to_sender = _sim_emulator.receive_from_dut

    # Window & timeout heuristics
    window_size       = int(2 * prop_delay * (link_bw/max_pkt_size)) + 1
    transmission_time = max_pkt_size / link_bw
    rtt               = 2*(prop_delay + transmission_time)
    queue_time        = (max_queued * transmission_time)/2
    timeout           = math.ceil(rtt + queue_time*0.5)

    # Read and split file
    with open(file_to_send, "rb") as f:
        f.seek(0, os.SEEK_END)
        size = f.tell()
    id_size = get_id_size(size, max_pkt_size-128)

    with open(file_to_send, "r", encoding="utf-8") as f:
        txt = f.read()
    packets = split_byte_string(txt, max_pkt_size-128, id_size)

    # Launch the send protocol
    send_packet(
        sender_id   = int(cfg.get('sender', 'id')),
        receiver_id = receiver_id,
        payloads    = packets,
        max_packet_size = max_pkt_size,
        id_size     = id_size
    )

if __name__ == "__main__":
    cfg_path = sys.argv[1]
    main(cfg_path)
