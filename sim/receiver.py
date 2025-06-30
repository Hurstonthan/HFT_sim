#!/usr/bin/env python3
import sys
import time
import math
import logging
import configparser

# bring in shared config (must call read_config_file first)
from config import read_config_file, MODE, SENDER_ID, RECEIVER_ID

CONFIG_PATH = sys.argv[1]
read_config_file(CONFIG_PATH)

# Common parameters
cfg = configparser.RawConfigParser(allow_no_value=True)
cfg.read(CONFIG_PATH)

WRITE_LOCATION    = cfg.get('receiver', 'write_location')
MAX_PACKET_SIZE   = int(cfg.get('network', 'MAX_PACKET_SIZE'))
PROP_DELAY        = float(cfg.get('network', 'PROP_DELAY'))
LINK_BANDWIDTH    = float(cfg.get('network', 'LINK_BANDWIDTH'))
MAX_PKTS_QUEUED   = float(cfg.get('network', 'MAX_PACKETS_QUEUED'))
WINDOW_SIZE       = 5  # or compute dynamically as before
TRANSM_DELAY      = MAX_PACKET_SIZE / LINK_BANDWIDTH
RTT               = 2.0*(PROP_DELAY + TRANSM_DELAY)
QUEUE_DELAY       = (MAX_PKTS_QUEUED * TRANSM_DELAY) / 2.0
TIMEOUT           = math.ceil(RTT + QUEUE_DELAY*0.5)

# ------------------------------------------------------------------------------
# Hardware mode: use Monitor (UDP) exactly as before
# ------------------------------------------------------------------------------
if MODE == "hardware":
    from monitor import Monitor

    def send_ACK(recv_monitor, packet_id: int, sender_id: int, id_size: int, isAck=True):
        """Send an ACK back over UDP to the sender."""
        if isAck:
            ack_msg = b'\x01:' + packet_id.to_bytes(id_size, 'big')
        else:
            ack_msg = b'\x00:' + packet_id.to_bytes(id_size, 'big')
        recv_monitor.send(sender_id, ack_msg)

    def wait_packet(recv_monitor):
        """Blocking receive loop, writes out the file when done."""
        first_hs = False
        expected_id = 0
        max_id = 0
        id_size = 1
        buffer = {}
        out_of_order = {}

        # --- Handshake ---
        while not first_hs:
            sender_id, packet = recv_monitor.recv(MAX_PACKET_SIZE)
            try:
                parts = packet.split(b':')
                max_id   = int.from_bytes(parts[0], 'big')
                id_size  = int.from_bytes(parts[1], 'big')
                send_ACK(recv_monitor, 0, sender_id, id_size, True)
                first_hs = True
            except:
                send_ACK(recv_monitor, 0, sender_id, id_size, False)

        # --- Data transfer ---
        while True:
            sender_id, packet = recv_monitor.recv(MAX_PACKET_SIZE)
            pkt_id = int.from_bytes(packet[:id_size], 'big')
            data   = packet[id_size:]

            if pkt_id < expected_id:
                # duplicate → re-ACK last in‐order
                send_ACK(recv_monitor, expected_id-1, sender_id, id_size)
                continue

            if pkt_id == expected_id:
                buffer[pkt_id] = data.decode('utf-8')
                expected_id += 1
                # drain any buffered in‐order
                while expected_id in out_of_order:
                    buffer[expected_id] = out_of_order.pop(expected_id).decode('utf-8')
                    expected_id += 1
            else:
                # future packet → store
                if pkt_id not in out_of_order:
                    out_of_order[pkt_id] = data

            # cumulative ACK
            send_ACK(recv_monitor, expected_id-1, sender_id, id_size)

            # check for completion
            if expected_id > max_id:
                with open(WRITE_LOCATION, 'w', encoding='utf-8') as f:
                    for i in range(expected_id):
                        f.write(buffer[i])
                recv_monitor.recv_end(WRITE_LOCATION, sender_id)
                break

    def main():
        logging.basicConfig(level=logging.INFO,
                            format="%(asctime)s %(message)s")
        recv_monitor = Monitor(CONFIG_PATH, 'receiver')
        wait_packet(recv_monitor)

# ------------------------------------------------------------------------------
# Simulation mode: register a callback with the emulator core
# ------------------------------------------------------------------------------
else:
    from emulator_core import NetworkEmulator
    import simulation_hooks

    # State for the reliability protocol
    first_hs       = False
    expected_id    = 0
    max_id         = 0
    id_size        = 1
    buffer         = {}
    out_of_order   = {}
    finished       = False

    # Instantiate the emulator (it will run in its own thread)
    ne = NetworkEmulator()

    def send_ACK_sim(packet_id: int, sender_id: int, isAck=True):
        """Inject an ACK back into the emulator."""
        flag = b'\x01:' if isAck else b'\x00:'
        ack_msg = flag + packet_id.to_bytes(id_size, 'big')
        # prepend "receiver_id sender_id\n" as the emulator core expects
        header = f"{RECEIVER_ID} {sender_id}\n".encode()
        ne.receive_from_dut(header + ack_msg)

    def inject_to_receiver(raw_bytes: bytes):
        """
        Called by emulator_core whenever a packet
        destined for this receiver completes its journey.
        """
        global first_hs, expected_id, max_id, id_size, finished

        # Split off the emulation‐header
        hdr, payload = raw_bytes.split(b'\n', 1)
        sender_id = int(hdr.split()[0])
        # --- Handshake phase ---
        if not first_hs:
            parts = payload.split(b':', 1)
            max_id  = int.from_bytes(parts[0], 'big')
            id_size = int.from_bytes(parts[1], 'big')
            send_ACK_sim(0, sender_id, True)
            first_hs = True
            return

        # --- Data packets ---
        pkt_id = int.from_bytes(payload[:id_size], 'big')
        data   = payload[id_size:]

        if pkt_id < expected_id:
            send_ACK_sim(expected_id-1, sender_id, True)
            return

        if pkt_id == expected_id:
            buffer[pkt_id] = data.decode('utf-8')
            expected_id += 1
            while expected_id in out_of_order:
                buffer[expected_id] = out_of_order.pop(expected_id).decode('utf-8')
                expected_id += 1
        else:
            out_of_order[pkt_id] = data

        # cumulative ACK
        send_ACK_sim(expected_id-1, sender_id, True)

        # on completion, write file once
        if expected_id > max_id and not finished:
            with open(WRITE_LOCATION, 'w', encoding='utf-8') as f:
                for i in range(expected_id):
                    f.write(buffer[i])
            finished = True
            print(f"[SIM] All packets received; wrote to {WRITE_LOCATION}")

    # register the callback with the emulator core
    simulation_hooks.inject_to_receiver = inject_to_receiver

    def main():
        print("[SIM] Receiver running in simulation mode; waiting for packets …")
        # simply block until done
        while not finished:
            time.sleep(0.1)

if __name__ == "__main__":
    main()
