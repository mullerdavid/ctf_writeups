import can
from time import sleep

with can.Bus(interface='socketcan', channel='can0', bitrate=500000) as bus:
    while True:
        message = can.Message(arbitration_id=0x479, data=[0x00, 0x00, 0x00, 0x00, 0x00], is_extended_id=False)
        bus.send(message)
        sleep(1)