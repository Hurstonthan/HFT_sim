import configparser, time, sys
from typing import Tuple

# Node and configuration classes
class Node:
    def __init__(self, id: int, address: Tuple[str, int]):
        self.id = id
        self.address = address

class Config:
    def __init__(self):
        self.PROP_DELAY = 1.0        # ms
        self.MAX_PACKET_SIZE = 1024  # bytes
        self.LINK_BANDWIDTH = 1024   # bytes/sec
        self.DROP_MODEL = 1
        self.RANDOM_DROP_PROBABILITY = 0.0
        self.REORDER_PROBABILITY = 0.0
        self.MAX_PACKETS_QUEUED = 1000

nodes = {}
ConfigInst = None
LOG_FILE_PATH = ''
PORT = 0
HOST = ''


def read_config_file(path: str):
    global ConfigInst, nodes, LOG_FILE_PATH, PORT, HOST
    cfg = configparser.RawConfigParser()
    cfg.read(path)
    LOG_FILE_PATH = cfg.get('emulator', 'log_file')
    HOST = cfg.get('emulator', 'host', fallback='')
    PORT = cfg.getint('emulator', 'port')
    ConfigInst = Config()
    ConfigInst.PROP_DELAY = cfg.getfloat('network', 'PROP_DELAY')
    ConfigInst.MAX_PACKET_SIZE = cfg.getint('network', 'MAX_PACKET_SIZE')
    ConfigInst.LINK_BANDWIDTH = cfg.getint('network', 'LINK_BANDWIDTH')
    ConfigInst.DROP_MODEL = cfg.getint('network', 'DROP_MODEL')
    ConfigInst.RANDOM_DROP_PROBABILITY = cfg.getfloat('network', 'RANDOM_DROP_PROBABILITY')
    ConfigInst.REORDER_PROBABILITY = cfg.getfloat('network', 'REORDER_PROBABILITY')
    # compute bandwidth-delay product
    ConfigInst.MAX_PACKETS_QUEUED = int(2 * ConfigInst.PROP_DELAY * (ConfigInst.LINK_BANDWIDTH / ConfigInst.MAX_PACKET_SIZE)) + 1
    # Nodes
    headers = cfg.get('nodes', 'config_headers').split(',')
    for section in headers:
        nid = cfg.getint(section, 'id')
        host = cfg.get(section, 'host')
        port = cfg.getint(section, 'port')
        nodes[nid] = Node(nid, (host, port))
    # log startup
    with open(LOG_FILE_PATH, 'w+') as f:
        f.write(f"{time.time()}\nConfiguration loaded.\n")
import configparser, time, sys
from typing import Tuple

# Node and configuration classes
class Node:
    def __init__(self, id: int, address: Tuple[str, int]):
        self.id = id
        self.address = address

class Config:
    def __init__(self):
        self.PROP_DELAY = 1.0        # ms
        self.MAX_PACKET_SIZE = 1024  # bytes
        self.LINK_BANDWIDTH = 1024   # bytes/sec
        self.DROP_MODEL = 1
        self.RANDOM_DROP_PROBABILITY = 0.0
        self.REORDER_PROBABILITY = 0.0
        self.MAX_PACKETS_QUEUED = 1000

nodes = {}
ConfigInst = None
LOG_FILE_PATH = ''
PORT = 0
HOST = ''


def read_config_file(path: str):
    global ConfigInst, nodes, LOG_FILE_PATH, PORT, HOST
    cfg = configparser.RawConfigParser()
    cfg.read(path)
    LOG_FILE_PATH = cfg.get('emulator', 'log_file')
    HOST = cfg.get('emulator', 'host', fallback='')
    PORT = cfg.getint('emulator', 'port')
    ConfigInst = Config()
    ConfigInst.PROP_DELAY = cfg.getfloat('network', 'PROP_DELAY')
    ConfigInst.MAX_PACKET_SIZE = cfg.getint('network', 'MAX_PACKET_SIZE')
    ConfigInst.LINK_BANDWIDTH = cfg.getint('network', 'LINK_BANDWIDTH')
    ConfigInst.DROP_MODEL = cfg.getint('network', 'DROP_MODEL')
    ConfigInst.RANDOM_DROP_PROBABILITY = cfg.getfloat('network', 'RANDOM_DROP_PROBABILITY')
    ConfigInst.REORDER_PROBABILITY = cfg.getfloat('network', 'REORDER_PROBABILITY')
    # compute bandwidth-delay product
    ConfigInst.MAX_PACKETS_QUEUED = int(2 * ConfigInst.PROP_DELAY * (ConfigInst.LINK_BANDWIDTH / ConfigInst.MAX_PACKET_SIZE)) + 1
    # Nodes
    headers = cfg.get('nodes', 'config_headers').split(',')
    for section in headers:
        nid = cfg.getint(section, 'id')
        host = cfg.get(section, 'host')
        port = cfg.getint(section, 'port')
        nodes[nid] = Node(nid, (host, port))
    # log startup
    with open(LOG_FILE_PATH, 'w+') as f:
        f.write(f"{time.time()}\nConfiguration loaded.\n")
