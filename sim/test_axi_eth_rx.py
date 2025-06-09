import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock
from utils.pcap_loader import extract_frames, decode_frame

@cocotb.test()
async def test_axi_stream_with_pcap(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units='ns').start())

    dut.rst.value = 1
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0

    frames = extract_frames("../pcap_samples/sample_market_data.pcap")
    frame = frames[0]
    decode_frame(frame)
    print(frame)

    for i, byte in enumerate(frame):
        print(f"byte={byte}")
        dut.s_axis_tdata.value = byte
        dut.s_axis_tvalid.value = 1
        dut.s_axis_tlast.value = (i == len(frame) - 1)
        print(f"Sending byte {i:02d}: {hex(byte)}")
        await RisingEdge(dut.clk)
        if (dut.s_axis_tready.value):
            break

        print(f"dut.byte_cnt.value={int(dut.byte_cnt.value)}")
        print(f"dut.eth_type.value={dut.eth_type.value}")

    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0
    await Timer(100, units='ns')

    assert dut.eth_type.value == 0x0800, f"Expected 0x0800, got {hex(dut.eth_type.value)}"
