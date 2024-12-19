from hashlib import sha1
from elftools.elf.elffile import ELFFile
from pwn import ELF
from io import BytesIO


def offsetof(struct, member):
    i = 0
    for con in struct.subcons:
        size = con.sizeof()
        if con.name == member:
            return i, size
        i += size
    raise ValueError("invalid member")
    
def zero(data, offset, size):
    for i in range(offset, offset+size):
        data[i] = 0x0

def get_build_id(elf_or_bytes):
    elf, data = None, None
    if isinstance(elf_or_bytes, ELF):
        elf = elf_or_bytes
        data = bytearray(elf_or_bytes.data)
    elif isinstance(elf_or_bytes, bytes):
        stream = BytesIO(elf_or_bytes)
        elf = ELFFile(stream, stream_loader=True )
        data = bytearray(elf_or_bytes)

    ehdr_size = elf.structs.Elf_Ehdr.sizeof()
    phdr_size = elf.header.e_phentsize
    shdr_size = elf.header.e_shentsize

    ehdr_e_phoff_offset, ehdr_e_phoff_size = offsetof(elf.structs.Elf_Ehdr, "e_phoff")
    ehdr_e_shoff_offset, ehdr_e_shoff_size = offsetof(elf.structs.Elf_Ehdr, "e_shoff")
    shdr_sh_offset_offset, shdr_sh_offset_size = offsetof(elf.structs.Elf_Shdr, "sh_offset")

    md = sha1()

    zero(data, ehdr_e_phoff_offset, ehdr_e_phoff_size)
    zero(data, ehdr_e_shoff_offset, ehdr_e_shoff_size)
    md.update(bytes(data[0:ehdr_size]))

    for i in range(elf.header.e_phnum):
        offset = elf.header.e_phoff + i*phdr_size
        md.update(bytes(data[offset:offset+phdr_size]))
        

    for i in range(elf.header.e_shnum):
        section = elf.get_section(i)
        offset = elf.header.e_shoff + i*shdr_size
        header_data = data[offset:offset+shdr_size]
        section_data = section.data()
        zero(header_data, shdr_sh_offset_offset, shdr_sh_offset_size)
        md.update(bytes(header_data))
        if section.name == ".note.gnu.build-id":
            section_data = [0x0] * len(section_data)

        if ( 0 < len(section_data) and section.name not in [".bss", ".symtab", ".strtab", ".shstrtab"]):
            md.update(bytes(section_data))

    return md.digest()