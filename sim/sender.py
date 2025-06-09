#!/usr/bin/env python3
from monitor import Monitor
import sys
import threading
import logging
import math
import os

# Config File   
import configparser

# ==================================================================================
# GLOBAL VARIABLES
# ==================================================================================
thread_lock = threading.Lock()
ack_received = threading.Event()
last_sent = -1
last_ack = -1
duplicate_ack_count = 0
window_size = 0
timeout = 0
is_ack = False
packets = []

# ==================================================================================
# HELPER FUNCTIONS
# ==================================================================================
def split_byte_string(text, chunk_size, id_size):
    data_size = chunk_size - id_size
    packets = []

    for packet_id, i in enumerate(range(0, len(text), data_size)):
        packet_id_bytes = packet_id.to_bytes(id_size, 'big')
        text_chunk = text[i:i+data_size]
        packets.append(packet_id_bytes + text_chunk.encode())

    return packets

def get_id_size(file_size, data_chunk_size):
    total_packets = math.ceil(file_size / data_chunk_size)
    bit_length = total_packets.bit_length()

    # Calculate the required bytes dynamically
    return max(1, math.ceil(bit_length / 8))

# ==================================================================================
# PROTOCOL FUNCTIONS
# ==================================================================================

def send_packet(send_monitor: Monitor, receiver_id, packets, max_packet_size, id_size):
    global thread_lock, last_sent, is_ack, last_ack, window_size, duplicate_ack_count
    packet_id = 0
    num_packets = len(packets)
    first_handshake_sent = False

    ack_thread = threading.Thread(target=waiting_ACK, 
                                  args=(send_monitor, max_packet_size,),
                                  daemon=True)
    ack_thread.start()

    while not first_handshake_sent:
        # Send handshake packet
        max_packet_id = len(packets) - 1
        handshake_packet = max_packet_id.to_bytes(id_size, 'big') + b":" + id_size.to_bytes(id_size, 'big')
        # logging.info(f"Handshake handshake_packet={handshake_packet}")
        send_monitor.send(receiver_id, handshake_packet)
        # Wait for handshake
        event_triggered = ack_received.wait(timeout)
        if not event_triggered:
            # if timed out
            continue

        with thread_lock:
            if is_ack:
                first_handshake_sent = True
            ack_received.clear()

    # logging.info(f"FINISHED HANDSHAKING")

    # Send initial window of packets
    with thread_lock:
        while last_sent < window_size - 1 and last_sent < num_packets - 1:
            last_sent += 1
            send_monitor.send(receiver_id, packets[last_sent])
    

    while last_ack < num_packets - 1:
        # logging.info(f"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv")
        event_triggered = ack_received.wait(timeout)
        with thread_lock:
            # Retransmit on duplicate ACKs
            if duplicate_ack_count >= 3: # Use 3 for now, not sure why
                packet_id = last_ack + 1
                if packet_id < num_packets:
                    # logging.info(f"Retransmitting packet_id={packet_id}")
                    send_monitor.send(receiver_id, packets[packet_id])
                duplicate_ack_count = 0
                ack_received.clear()
                continue

            if not event_triggered:
                # if timed out
                # logging.info("------------- TIMED OUT --------------")
                # logging.info(f"Resending packet id from {last_ack + 1} to {last_sent + 1}")
                # logging.info("------------- TIMED OUT --------------")
                packet_id = last_ack + 1
                while packet_id <= last_sent and packet_id < num_packets:
                    # logging.info(f"Sending packet_id={packet_id}")
                    send_monitor.send(receiver_id, packets[packet_id])
                    packet_id += 1
            else:
                # logging.info("************* ACK RCVED *************")
                # logging.info(f"Sending packet id from {last_sent}")
                # logging.info("************* ACK RCVED *************")
                while last_sent < num_packets - 1 and (last_sent - last_ack) < window_size:
                    last_sent += 1
                    # logging.info(f"num_packets - 1={num_packets - 1}")
                    # logging.info(f"Sending packet_id={last_sent}")
                    send_monitor.send(receiver_id, packets[last_sent])
            ack_received.clear()
    
        # logging.info(f"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")

    send_monitor.send_end(receiver_id)

def waiting_ACK(send_monitor: Monitor, max_packet_size):
    global thread_lock, last_ack, is_ack, duplicate_ack_count

    while True:
        # logging.info("**************************************")
        # logging.info("waiting for ACK")

        addr, data = send_monitor.recv(max_packet_size)
        ack_id = int.from_bytes(data[2:], 'big')
        # logging.info(f"got ACK with ack_id={ack_id}")

        with thread_lock:
            is_ack = data[0]
            # if is_ack
            if ack_id == last_ack: # count duplicates
                duplicate_ack_count += 1
            else:
                duplicate_ack_count = 0
            last_ack = ack_id
            ack_received.set()
            # logging.info(f"Event ACK set with {is_ack}:{last_ack}")
        # logging.info("**************************************")

# ==================================================================================
# MAIN
# ==================================================================================
def main():
    global thread_lock, timeout, window_size
    logging.basicConfig(level=logging.INFO, format="%(asctime)s - %(message)s")

    config_path = sys.argv[1]

    # Initialize sender monitor
    send_monitor = Monitor(config_path, 'sender')

    # Parse config file
    cfg = configparser.RawConfigParser(allow_no_value=True)
    cfg.read(config_path)

    file_to_send = cfg.get('nodes', 'file_to_send')

    receiver_id         = int(cfg.get('receiver', 'id'))
    max_packet_size     = int(cfg.get('network', 'MAX_PACKET_SIZE'))
    prop_delay          = float(cfg.get('network', 'PROP_DELAY'))
    link_bandwidth      = float(cfg.get('network', 'LINK_BANDWIDTH'))
    max_packet_queued   = float(cfg.get('network', 'MAX_PACKETS_QUEUED'))

    # window_size  = int(2*prop_delay*(link_bandwidth/float(max_packet_size))) + 1
    window_size  = 5

    transmission_delay = float(max_packet_size) / link_bandwidth
    rtt = 2.0 * (prop_delay + transmission_delay)
    queue_delay = (max_packet_queued * transmission_delay) / 2.0
    timeout = math.ceil(int(rtt + queue_delay * 0.5))
    # timeout = 3

    max_packet_size_allowed = max_packet_size - 128

    with open(file_to_send, "rb") as f:
        f.seek(0, os.SEEK_END)
        file_size = f.tell()

    id_size = get_id_size(file_size, max_packet_size_allowed)

    with open(file_to_send, "r", encoding="utf-8") as file:
        text_file = file.read()

    packets = split_byte_string(text_file, max_packet_size_allowed, id_size)
    print(window_size)
    print(window_size * max_packet_size_allowed)
    print(timeout)
    # print(max_packet_id)
    # handshake_packet = max_packet_id.to_bytes(id_size, 'big') + b":" + id_size.to_bytes(id_size, 'big')
    # print(handshake_packet)
    send_packet(send_monitor, receiver_id, packets, max_packet_size, id_size)

if __name__ == '__main__':
    main()
