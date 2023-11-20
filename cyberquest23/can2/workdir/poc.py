import udsoncan
from udsoncan.connections import IsoTPSocketConnection
from udsoncan.client import Client
from udsoncan import MemoryLocation
from udsoncan.services import *
from udsoncan.exceptions import *
from time import sleep

udsoncan.setup_logging()

memory_address = 0xFF8100
# 3 bytes
memory_size = 300

# (1698660822.400366) can0 7EE#0667036D81400300
seed = "F2D1779E"
level = 3

# seed 062704C03E244A00

conn = IsoTPSocketConnection('can0', rxid=0x7EE, txid=0x700)
with Client(conn,  request_timeout=2) as client:
    memory_location = MemoryLocation(memorysize=memory_size, address=memory_address)
    successful = False
    counter = 0
    while not successful:
        try:
            client.request_seed(level)
            client.send_key(level, bytes.fromhex(seed))
            successful = True
        except NegativeResponseException:
            print("Negative response received")
            print("Trying again...", counter)
            counter += 1
            continue
    client.read_memory_by_address(memory_location)
    sleep(0.5)