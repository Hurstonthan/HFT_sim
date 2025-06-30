#!/usr/bin/env python3
import sys
import threading
import time

# Shared config
from config import read_config_file, CONFIG_PATH

# Modules to orchestrate
import emulator_core
import sender
import receiver

def main():
    if len(sys.argv) != 2:
        print("Usage: python main.py <config.ini>")
        sys.exit(1)
    cfg_path = sys.argv[1]

    # 1) Load config once
    read_config_file(cfg_path)

    # 2) Start the emulator core (spawns its own thread)
    core = emulator_core.NetworkEmulator()

    # 3) Launch sender and receiver in daemon threads
    t_send = threading.Thread(target=sender.main, args=(cfg_path,), daemon=True)
    t_recv = threading.Thread(target=receiver.main, args=(cfg_path,), daemon=True)
    t_send.start()
    t_recv.start()

    # 4) Keep main alive, respond to Ctrl+C
    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        print("\n[MAIN] Keyboard interrupt received, shutting down...")
        # signal emulator to stop its loop
        core.terminate = True
        # give a moment for threads to notice
        time.sleep(0.1)
        sys.exit(0)


if __name__ == "__main__":
    main()
