from scapy.all import rdpcap, Ether, IP, UDP, send

def extract_frames(pcap_path):
    packets = rdpcap(pcap_path)
    frames = []
    for pkt in packets:
        if Ether in pkt:
            raw = bytes(pkt[Ether])
            frames.append(list(raw))
    return frames

def decode_frame(frame):
    pkt = Ether(bytes(frame))
    print("--- Decoded Ethernet Frame ---")
    print(f"Src MAC: {pkt.src}, Dst MAC: {pkt.dst}, Type: {hex(pkt.type)}")
    if IP in pkt:
        ip = pkt[IP]
        print(f"IP: {ip.src} -> {ip.dst}")
        if UDP in pkt:
            udp = pkt[UDP]
            print(f"UDP: {udp.sport} -> {udp.dport}")
