import sys
import cocotb
import configparser
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# Pull in emulator core + config
import emulator_core, simulation_hooks, sender

CONFIG_PATH = "./config.ini"
SENDER_ID = 0
RECEIVER_ID = 1

@cocotb.test()
async def test_ethernet_emulator(dut):
    # 1) Load config and assert simulation mode
    cfg = configparser.RawConfigParser(allow_no_value=True)
    cfg.read(CONFIG_PATH)
    mode = str(cfg.get('emulator', 'mode'))
    prop_delay = float(cfg.get("network", "PROP_DELAY"))

    assert mode == "simulation"

    # 2) Start the DUT clock
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # 3) Instantiate emulator
    ne = emulator_core.NetworkEmulator()

    # 4) Hook DUT -> Emulator: watch DUT’s tx interface
    async def monitor_dut_tx():
        while True:
            await RisingEdge(dut.clk)
            if dut.s_axis_tready.value:
                byte = int(dut.eth_type.value)
                # wrap in emulator header: "<sender> <receiver>\n"
                hdr = f"{SENDER_ID} {RECEIVER_ID}\n".encode()
                ne.receive_from_dut(hdr + bytes([byte]))
    cocotb.start_soon(monitor_dut_tx())

    # 5) Hook Emulator -> DUT: feed emulator output into DUT’s rx interface
    async def inject_to_dut(raw_bytes):
        for b in raw_bytes:
            dut.s_axis_tdata.value  = b
            dut.s_axis_tvalid.value = 1
            # clock a cycle for each byte
            await RisingEdge(dut.clk)
        dut.s_axis_tvalid.value = 0

    simulation_hooks.inject_to_dut = inject_to_dut

    # 6) Kick off the Python sender in a background thread
    import threading
    threading.Thread(target=sender.main, args=(CONFIG_PATH,), daemon=True).start()

    # 7) Let the simulation run for enough time
    await Timer(prop_delay*1e9 + 5000, units="ns")

