# emulator_core.py

import sys
import time
import socket
import threading
from queue import Queue
from config import MODE, HOST, PORT, NODES, NET_CONFIG, IFACE
from utils.pcap_loader import extract_frames, decode_frame

# In simulation mode, your cocotb test harness must provide this:
# a function that takes raw bytes and drives them into the DUT.
# In hardware mode, this is unused.
try:
    from simulation_hooks import inject_to_dut
except ImportError:
    def inject_to_dut(_data: bytes):
        raise RuntimeError("inject_to_dut() not implemented for simulation mode")

# ------------------------------------------------------------------------------
# Shared Queues
# ------------------------------------------------------------------------------
# Packets enqueued here by sender.py (or cocotb harness)
TX_QUEUE = Queue()

# ------------------------------------------------------------------------------
# Packet, LatencyQueue, SendingQueue
# ------------------------------------------------------------------------------
class Packet:
    def __init__(self, data: bytes, addr):
        self.data = data
        self.addr = addr
        self.timestamp = time.time()
        self.latency_complete_time = self.timestamp + NET_CONFIG.PROP_DELAY

    def receiver_id(self):
        try:
            return int(self.data.split(b'\n')[0].split(b' ')[1])
        except:
            return -1

class LatencyQueue:
    def __init__(self, socketfd):
        self._queue = []
        self._sockfd = socketfd
        self.terminate = False
        if MODE == "hardware":
            # spawn UDP receive thread
            t = threading.Thread(target=self._recv_thread, daemon=True)
            t.start()

    def _recv_thread(self):
        while True:
            data, addr = self._sockfd.recvfrom(NET_CONFIG.MAX_PACKET_SIZE)
            pkt = Packet(data, addr)
            self._queue.append(pkt)

    def get_ready_packets(self):
        ready = []
        now = time.time()
        i = 0
        while i < len(self._queue):
            if self._queue[i].latency_complete_time <= now:
                ready.append(self._queue.pop(i))
            else:
                i += 1
        return ready

class SendingQueue:
    def __init__(self, socketfd):
        self._queue = []
        self._sockfd = socketfd
        self._bandwidth_counter = 0.0
        self._last_time = time.time()

    def check_bandwidth(self):
        delta = time.time() - self._last_time
        self._bandwidth_counter -= NET_CONFIG.LINK_BANDWIDTH * delta
        self._last_time = time.time()
        return self._bandwidth_counter <= 0

    def add(self, pkt: Packet):
        self._queue.append(pkt)

    def get_next_packet(self):
        if not self._queue or not self.check_bandwidth():
            return None
        pkt = self._queue.pop(0)
        self._bandwidth_counter += len(pkt.data)
        return pkt

# ------------------------------------------------------------------------------
# NetworkEmulator
# ------------------------------------------------------------------------------
class NetworkEmulator:
    def __init__(self):
        self.terminate = False

        if MODE == "hardware":
            # bind UDP socket
            self.socketfd = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
            self.socketfd.bind((HOST, PORT))
        else:
            self.socketfd = None

        self.latency_queue = LatencyQueue(self.socketfd)
        self.sending_buffers = {}
        # start main loop
        t = threading.Thread(target=self.run, daemon=True)
        t.start()

    def get_dest_address(self, pkt: Packet):
        dst = pkt.receiver_id()
        if dst in NODES:
            return NODES[dst].address
        return None

    def enqueue_sending(self, pkt: Packet):
        dst = pkt.receiver_id()
        if dst < 0:
            return
        if dst not in self.sending_buffers:
            self.sending_buffers[dst] = SendingQueue(self.socketfd)
        self.sending_buffers[dst].add(pkt)

    def run(self):
        while not self.terminate:
            # 1) Move packets through latency
            for pkt in self.latency_queue.get_ready_packets():
                self.enqueue_sending(pkt)

            # 2) Dequeue from sending buffers and emit
            for dst, buf in self.sending_buffers.items():
                pkt = buf.get_next_packet()
                if not pkt:
                    continue

                if MODE == "hardware":
                    addr = self.get_dest_address(pkt)
                    if addr:
                        self.socketfd.sendto(pkt.data, addr)
                else:
                    # simulation -> push into DUT
                    inject_to_dut(pkt.data)

            time.sleep(0.001)  # small sleep to avoid busy spin

    # --------------------------------------------------------------------------
    # Simulation‐only API: cocotb driver calls this when DUT emits a frame
    # --------------------------------------------------------------------------
    def receive_from_dut(self, raw_bytes: bytes, addr=None):
        """Inject incoming bytes from DUT into the latency queue."""
        pkt = Packet(raw_bytes, addr)
        self.latency_queue._queue.append(pkt)

# ------------------------------------------------------------------------------
# Module‐level bootstrap
# ------------------------------------------------------------------------------
if __name__ == "__main__":
    from config import read_config_file
    read_config_file(sys.argv[1])
    ne = NetworkEmulator()
    # Block forever
    try:
        while True:
            print("emulator running")
            time.sleep(1)
    except KeyboardInterrupt:
        ne.terminate = True
        sys.exit(0)
