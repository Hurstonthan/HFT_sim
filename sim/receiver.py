#!/usr/bin/env python3
from monitor import Monitor
import sys
import logging
import math

# Config File
import configparser

# The performance of the above protocols depend on the choice of the timeout value,
# and the choice of window size, which itself needs to be chosen in a
# configuration-specific way. Please make sure to set the timeout and window size
# automatically to values that are reasonable for different configurations using
# good rules of thumb.

# We must limit the window size to 50 in all cases. Additionally, if you're using a 
# NACK scheme, your buffer can't be larger than the maximum window size (50), and
# you aren't allowed to send the entire file at once.

# ==================================================================================
# GLOBAL VARIABLE
# ==================================================================================


# ==================================================================================
# HELPER FUNCTIONS
# ==================================================================================


# ==================================================================================
# PROTOCOL FUNCTIONS
# ==================================================================================

def wait_packet(recv_monitor: Monitor, max_packet_size, write_location, window_size, timeout):
    id_size = 1
    first_handshake_received = False
    packets_to_write = {}
    expected_packet_id = 0
    max_packet_id = 0
    temp = {}
    expected_end_window_packet_id = expected_packet_id + window_size

    while not first_handshake_received:
        sender_id, packet = recv_monitor.recv(max_packet_size)
        # logging.info(f"handshake got packet={packet}")
        # logging.info(f"packet.split(b\":\")[0]={int.from_bytes(packet.split(b':')[0], 'big')}")
        # logging.info(f"packet.split(b\":\")[1]={int.from_bytes(packet.split(b':')[1], 'big')}")
        try:
            max_packet_id = int.from_bytes(packet.split(b':')[0], 'big')
            id_size = int.from_bytes(packet.split(b':')[1], 'big')
            send_ACK(recv_monitor, 0, sender_id, id_size, True)
            first_handshake_received = True
        except:
            send_ACK(recv_monitor, 0, sender_id, id_size, False)
            first_handshake_received = False

	# logging.info(f"FINISHED HANDSHAKING")

    finished = False

    # while expected_packet_id <= max_packet_id:
    while True:
        # logging.info(f"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv")
        # logging.info(f"Waiting for new packet")
        sender_id, packet = recv_monitor.recv(max_packet_size)

        packet_id = int.from_bytes(packet[:id_size], 'big')
        data = packet[id_size:]
        # logging.info(f"max_packet_id={max_packet_id}")
        # logging.info(f"packet_id={packet_id}")
        # logging.info(f"expected_packet_id={expected_packet_id}")

        if packet_id < expected_packet_id:
            # packet_id received is smaller than expected_packet_id -> duplicates triggered
            # -> Resending the packet_id ack before the expected one
            # logging.info(f"--> packet_id={expected_packet_id} < expected_packet_id={expected_packet_id} <--")
            send_ACK(recv_monitor, expected_packet_id - 1, sender_id, id_size)
            continue

        elif packet_id == expected_packet_id: # correct packet received
            # logging.info(f"--> Updating expected_packet_id <--")
            expected_packet_id += 1
			# logging.info(f"--> Updated expected_packet_id={expected_packet_id} <--")
            packets_to_write[packet_id] = data.decode("utf-8")

            # Check if values in temp are now in-order
            while expected_packet_id in temp:
                packet = temp.pop(expected_packet_id)
                packets_to_write[expected_packet_id] = packet.decode("utf-8")
                expected_packet_id += 1
        else:
            # Packet isnt what it expected, but is still be useful
            # store it in a temp
            if packet_id not in temp:
                temp[packet_id] = data

        # Send cumulative ACK indicating the highest in-order packet received
        send_ACK(recv_monitor, expected_packet_id - 1, sender_id, id_size)
        # If all packets have been received, write the file and finish

        if expected_packet_id > max_packet_id or packet_id == max_packet_id:
            finished = True
            with open(write_location, "w", encoding="utf-8") as file:
                for i in range(expected_packet_id):
                    file.write(packets_to_write[i])
            recv_monitor.recv_end(write_location, sender_id)

		# logging.info(f"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")

def send_ACK(recv_monitor: Monitor, packet_id: int, sender_id, id_size, isAck=True):
    if isAck:
        ack_msg = b'\x01:' + packet_id.to_bytes(id_size, 'big')
    else:
        ack_msg = b'\x00:' + packet_id.to_bytes(id_size, 'big')
    # logging.info(f"Sending new ack_msg={ack_msg}")
    recv_monitor.send(sender_id, ack_msg)

# ==================================================================================
# MAIN
# ==================================================================================

def main():
    logging.basicConfig(level=logging.INFO, format="%(asctime)s - %(message)s")
    config_path = sys.argv[1]

    # Initialize receiver monitor
    recv_monitor = Monitor(config_path, 'receiver')
    
    # Parse config file
    cfg = configparser.RawConfigParser(allow_no_value=True)
    cfg.read(config_path)

    write_location = cfg.get('receiver', 'write_location')

    max_packet_size =   int(cfg.get('network', 'MAX_PACKET_SIZE'))
    prop_delay =        float(cfg.get('network', 'PROP_DELAY'))
    link_bandwidth =    float(cfg.get('network', 'LINK_BANDWIDTH'))
    max_packet_queued = float(cfg.get('network', 'MAX_PACKETS_QUEUED'))

    # window_size  = int(2*prop_delay*(link_bandwidth/float(max_packet_size))) + 1
    window_size  = 5

    transmission_delay = float(max_packet_size) / link_bandwidth
    rtt = 2.0*(prop_delay + transmission_delay)
    queue_delay = (max_packet_queued * transmission_delay) / 2.0
    timeout = math.ceil(int(rtt+queue_delay*0.5))

    wait_packet(recv_monitor, max_packet_size, write_location, window_size, timeout)

if __name__ == '__main__':
    main()
