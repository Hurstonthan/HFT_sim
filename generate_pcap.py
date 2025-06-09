# generate_pcap.py
from scapy.all import Ether, IP, UDP, wrpcap

eth = Ether(dst="ff:ff:ff:ff:ff:ff", src="12:34:56:78:9a:bc")
ip = IP(src="192.168.0.1", dst="239.255.0.1")
udp = UDP(sport=12345, dport=5000)
payload = b"MARKETDATA123"
pkt = eth / ip / udp / payload

wrpcap("pcap_samples/sample_market_data.pcap", [pkt])
print([pkt])
