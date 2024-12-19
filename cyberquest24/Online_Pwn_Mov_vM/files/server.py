import base64
import ctypes
import mmap
from hashlib import sha256

from capstone import CS_ARCH_X86, CS_MODE_64, Cs

md = Cs(CS_ARCH_X86, CS_MODE_64)


def sha256_hash(data: str) -> str:
    return sha256(data.encode()).hexdigest()


def is_only_mov_instructions(shellcode: bytes) -> bool:
    try:
        for i in md.disasm(shellcode, 0x1000):
            print(f"0x{i.address:x}:\t{i.mnemonic}\t{i.op_str}")
            if not (
                i.mnemonic.startswith("mov")
                or sha256_hash(i.mnemonic)
                == "44b1bb13ee5a5d92ee3823110f16031c246a8f9c84c96abc3d9237de2532d18c"
            ):
                print(f"Invalid instruction: {i.mnemonic}")
                return False
        return True
    except Exception as e:
        print(f"Disassembly error: {e}")
        return False


def main():
    print("Welcome to the shellcode checker!")
    print("Please enter your base64-encoded shellcode:")

    base64_shellcode = input().strip()[:8192]

    try:
        shellcode = base64.b64decode(base64_shellcode)[:4096]
    except base64.binascii.Error:
        print("Invalid base64 encoding.")
        return

    if is_only_mov_instructions(shellcode):
        print("Shellcode validated. Contains only 'mov' instructions.")

        mem = mmap.mmap(
            -1, len(shellcode), prot=mmap.PROT_READ | mmap.PROT_WRITE | mmap.PROT_EXEC
        )
        mem.write(shellcode)

        shellcode_func = ctypes.CFUNCTYPE(None)(
            ctypes.addressof(ctypes.c_int.from_buffer(mem))
        )

        shellcode_func()
    else:
        print("Shellcode validation failed. Contains non-'mov' instructions.")


if __name__ == "__main__":
    main()
