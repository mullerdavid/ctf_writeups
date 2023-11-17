typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef void (* __sighandler_t)(int);

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




void __DT_INIT(void)

{
  if (true) {
    __gmon_start__();
  }
  return;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int __status)

{
                    // WARNING: Subroutine does not return
  _exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = alarm(__seconds);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = strdup(__s);
  return pcVar1;
}



void FUN_004010d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  __libc_start_main(FUN_00401b70,unaff_retaddr,&stack0x00000008,0,0,param_3,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00401100(void)

{
  return;
}



void FUN_00401110(void)

{
  if ((false) && (false)) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)(&stdout);
    return;
  }
  return;
}



void FUN_00401140(void)

{
  if ((false) && (false)) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)(&stdout);
    return;
  }
  return;
}



void FUN_00401180(void)

{
  if (DAT_00404088 == '\0') {
    FUN_00401110();
    DAT_00404088 = 1;
    return;
  }
  return;
}



void thunk_FUN_00401140(void)

{
  FUN_00401140();
  return;
}



void FUN_004011b6(void)

{
  setvbuf(stdout,(char *)0x0,2,0);
  setvbuf(stdin,(char *)0x0,2,0);
  setvbuf(stderr,(char *)0x0,2,0);
  return;
}



void FUN_00401217(int param_1)

{
  if (param_1 == 0xe) {
    printf("[!] Anti DoS Signal. Patch me out for testing.");
                    // WARNING: Subroutine does not return
    _exit(0);
  }
  return;
}



void FUN_00401249(void)

{
  signal(0xe,FUN_00401217);
  alarm(0x3c);
  return;
}



void FUN_00401273(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  while ((ulong)(long)local_10 < param_2) {
    if ((ulong)(long)local_10 < param_2) {
      uVar2 = (uint)*(byte *)(param_1 + local_10);
      local_10 = local_10 + 1;
    }
    else {
      uVar2 = 0;
    }
    if ((ulong)(long)local_10 < param_2) {
      uVar3 = (uint)*(byte *)(param_1 + local_10);
      local_10 = local_10 + 1;
    }
    else {
      uVar3 = 0;
    }
    if ((ulong)(long)local_10 < param_2) {
      uVar4 = (uint)*(byte *)(param_1 + local_10);
      local_10 = local_10 + 1;
    }
    else {
      uVar4 = 0;
    }
    uVar4 = uVar4 + uVar2 * 0x10000 + uVar3 * 0x100;
    *(char *)(param_1 + local_c) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar4 >> 0x12 & 0x3f];
    *(char *)(param_1 + (local_c + 1)) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar4 >> 0xc & 0x3f];
    iVar1 = local_c + 3;
    *(char *)(param_1 + (local_c + 2)) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar4 >> 6 & 0x3f];
    local_c = local_c + 4;
    *(char *)(param_1 + iVar1) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar4 & 0x3f];
  }
  for (local_14 = 0; local_14 < *(int *)(&DAT_00402168 + (param_2 % 3) * 4); local_14 = local_14 + 1
      ) {
    *(undefined *)(param_1 + (((param_2 + 2) / 3) * 4 - (long)local_14) + -1) = 0x3d;
  }
  return;
}



long syscall(long __sysno,...)

{
  long unaff_RBP;
  
  syscall();
  return unaff_RBP;
}



void * FUN_0040148e(long param_1,ulong param_2,size_t *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int local_10;
  int local_c;
  
  if ((param_2 & 3) == 0) {
    *param_3 = (param_2 >> 2) * 3;
    if (*(char *)(param_1 + (param_2 - 1)) == '=') {
      *param_3 = *param_3 - 1;
    }
    if (*(char *)(param_1 + (param_2 - 2)) == '=') {
      *param_3 = *param_3 - 1;
    }
    pvVar6 = malloc(*param_3);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      local_c = 0;
      local_10 = 0;
      while (iVar5 = local_c, (ulong)(long)local_c < param_2) {
        if (*(char *)(param_1 + local_c) == '=') {
          uVar1 = 0;
        }
        else {
          uVar1 = (uint)(byte)(&DAT_00402020)[(int)*(char *)(param_1 + local_c)];
        }
        local_c = local_c + 1;
        if (*(char *)(param_1 + local_c) == '=') {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(byte)(&DAT_00402020)[(int)*(char *)(param_1 + local_c)];
        }
        local_c = iVar5 + 2;
        if (*(char *)(param_1 + local_c) == '=') {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)(byte)(&DAT_00402020)[(int)*(char *)(param_1 + local_c)];
        }
        local_c = iVar5 + 3;
        if (*(char *)(param_1 + local_c) == '=') {
          uVar4 = 0;
        }
        else {
          uVar4 = (uint)(byte)(&DAT_00402020)[(int)*(char *)(param_1 + local_c)];
        }
        local_c = iVar5 + 4;
        iVar5 = uVar4 + uVar1 * 0x40000 + uVar2 * 0x1000 + uVar3 * 0x40;
        if ((ulong)(long)local_10 < *param_3) {
          *(char *)((long)pvVar6 + (long)local_10) = (char)((uint)iVar5 >> 0x10);
          local_10 = local_10 + 1;
        }
        if ((ulong)(long)local_10 < *param_3) {
          *(char *)((long)pvVar6 + (long)local_10) = (char)((uint)iVar5 >> 8);
          local_10 = local_10 + 1;
        }
        if ((ulong)(long)local_10 < *param_3) {
          *(char *)((long)pvVar6 + (long)local_10) = (char)iVar5;
          local_10 = local_10 + 1;
        }
      }
    }
  }
  else {
    pvVar6 = (void *)0x0;
  }
  return pvVar6;
}



void * FUN_00401747(char *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uStack_d0;
  char acStack_c8 [8];
  char *local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  int local_84;
  char *local_80;
  undefined *local_70;
  long local_68;
  long local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  local_c0 = acStack_c8;
  uStack_d0 = 0x401778;
  local_84 = param_2;
  local_80 = param_1;
  sVar4 = strlen(param_1);
  iVar3 = (int)sVar4;
  local_54 = iVar3;
  local_44 = -1;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_60 = (long)iVar3 + -1;
  local_b8 = (long)iVar3;
  local_b0 = 0;
  lVar6 = (long)iVar3;
  local_68 = (long)local_84 + -1;
  local_98 = (long)iVar3;
  local_90 = 0;
  local_a8 = (long)local_84;
  local_a0 = 0;
  lVar1 = (((long)local_84 * (long)iVar3 + 0xfU) / 0x10) * -0x10;
  local_70 = acStack_c8 + lVar1;
  for (local_3c = 0; local_3c < local_84; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < iVar3; local_40 = local_40 + 1) {
      acStack_c8[local_3c * lVar6 + local_40 + lVar1] = '\n';
    }
  }
  for (local_3c = 0; local_3c < iVar3; local_3c = local_3c + 1) {
    acStack_c8[local_48 * lVar6 + local_4c + lVar1] = '*';
    if ((local_48 == 0) || (local_48 == local_84 + -1)) {
      local_44 = -local_44;
    }
    local_48 = local_48 + local_44;
    local_4c = local_4c + 1;
  }
  for (local_3c = 0; local_3c < local_84; local_3c = local_3c + 1) {
    for (local_40 = 0; iVar2 = local_50, local_40 < iVar3; local_40 = local_40 + 1) {
      if (acStack_c8[local_3c * lVar6 + local_40 + lVar1] == '*') {
        local_50 = local_50 + 1;
        acStack_c8[local_3c * lVar6 + local_40 + lVar1] = local_80[iVar2];
      }
    }
  }
  local_4c = 0;
  local_48 = 0;
  local_44 = -1;
  *(undefined8 *)(acStack_c8 + lVar1 + -8) = 0x4019d4;
  pvVar5 = malloc((long)iVar3);
  for (local_3c = 0; local_3c < local_54; local_3c = local_3c + 1) {
    *(undefined *)((long)pvVar5 + (long)local_3c) = local_70[local_48 * lVar6 + (long)local_4c];
    if ((local_48 == 0) || (local_48 == local_84 + -1)) {
      local_44 = -local_44;
    }
    local_48 = local_48 + local_44;
    local_4c = local_4c + 1;
  }
  *(undefined *)((long)pvVar5 + (long)local_54) = 0;
  return pvVar5;
}



undefined8 FUN_00401a62(void)

{
  undefined8 uVar1;
  size_t sVar2;
  ulong uVar3;
  undefined local_38 [16];
  char *local_28;
  int local_1c;
  
  local_28 = strdup("S3hxd4RhJHK2d4SmVopL");
  if (local_28 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    local_1c = 0;
    while( true ) {
      uVar3 = (ulong)local_1c;
      sVar2 = strlen(local_28);
      if (sVar2 <= uVar3) break;
      local_28[local_1c] = local_28[local_1c] + -1;
      local_1c = local_1c + 1;
    }
    sVar2 = strlen(local_28);
    uVar1 = FUN_0040148e(local_28,sVar2,local_38);
  }
  return uVar1;
}



void FUN_00401b04(char *param_1)

{
  size_t sVar1;
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    sVar1 = strlen(param_1);
    if (sVar1 <= (ulong)(long)local_1c) break;
    param_1[local_1c] = param_1[local_1c] ^ 0x2a;
    local_1c = local_1c + 1;
  }
  return;
}



void FUN_00401b5f(void)

{
  FUN_00401b70();
  return;
}



undefined8 FUN_00401b70(void)

{
  int iVar1;
  char *local_80;
  char local_78 [112];
  
  FUN_00401249();
  FUN_004011b6();
  printf("Who you gonna call?\n",local_78);
  read(0,local_78,0x29a);
  local_80 = (char *)FUN_00401a62();
  iVar1 = strcmp(local_78,local_80);
  if (iVar1 == 0) {
    printf("Peter is calling the Ghostbusters... Their number is: %llx\n",&local_80);
    FUN_00401b5f();
  }
  FUN_00401b04(local_78);
  return 0;
}



void __DT_FINI(void)

{
  return;
}


