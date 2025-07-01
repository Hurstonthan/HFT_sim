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
        self.MODE = "software"
        self.NODES = {}
        self.PORT = 0
        self.HOST = ''

LOG_FILE_PATH = ''


def read_config_file(path: str):
    global LOG_FILE_PATH
    cfg = configparser.RawConfigParser()
    cfg.read(path)
    LOG_FILE_PATH = cfg.get('emulator', 'log_file')

    CONFIG = Config()

    CONFIG.HOST         = str(cfg.get('emulator', 'host', fallback=''))
    CONFIG.PORT         = int(cfg.get('emulator', 'port'))
    CONFIG.MODE         = str(cfg.get('emulator', 'mode'))

    CONFIG.MAX_PACKET_SIZE          = int(cfg.get('network', 'MAX_PACKET_SIZE'))
    CONFIG.LINK_BANDWIDTH           = int(cfg.get('network', 'LINK_BANDWIDTH'))
    CONFIG.DROP_MODEL               = int(cfg.get('network', 'DROP_MODEL'))
    CONFIG.PROP_DELAY               = float(cfg.get('network', 'PROP_DELAY'))
    CONFIG.RANDOM_DROP_PROBABILITY  = float(cfg.get('network', 'RANDOM_DROP_PROBABILITY'))
    CONFIG.REORDER_PROBABILITY      = float(cfg.get('network', 'REORDER_PROBABILITY'))

    # compute bandwidth-delay product
    CONFIG.MAX_PACKETS_QUEUED = int(2 * CONFIG.PROP_DELAY * (CONFIG.LINK_BANDWIDTH / CONFIG.MAX_PACKET_SIZE)) + 1
    # Nodes
    headers = cfg.get('nodes', 'config_headers').split(',')
    for section in headers:
        nid = int(cfg.get(section, 'id'))
        host = str(cfg.get(section, 'host'))
        port = int(cfg.get(section, 'port'))
        CONFIG.NODES[nid] = Node(nid, (host, port))
    # log startup
    with open(LOG_FILE_PATH, 'w+') as f:
        f.write(f"{time.time()}\nConfiguration loaded.\n")
    
    return CONFIG
