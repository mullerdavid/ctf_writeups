typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
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
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef void (*__sighandler_t)(int);

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = raise(__sig);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void funlockfile(FILE *__stream)

{
  funlockfile(__stream);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void flockfile(FILE *__stream)

{
  flockfile(__stream);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memchr(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void clearerr(FILE *__stream)

{
  clearerr(__stream);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = munmap(__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void prepareAdd_cold(void)

{
  code *pcVar1;
  long unaff_RBP;
  long unaff_R12;
  long *in_FS_OFFSET;
  
  if (unaff_R12 != 0) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
  }
  *(undefined8 *)(unaff_RBP + 8) = 0;
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void setLengthStrV2_cold(void)

{
  code *pcVar1;
  long unaff_RBP;
  long unaff_R12;
  long *in_FS_OFFSET;
  
  if (unaff_R12 != 0) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
  }
  *(undefined8 *)(unaff_RBP + 8) = 0;
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void newSeqPayloadUninit_cold(void)

{
  code *pcVar1;
  
  raiseRangeErrorI();
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_001011fc(void)

{
  code *pcVar1;
  
  raiseOverflow();
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void prepareSeqAddUninit_cold(void)

{
  code *pcVar1;
  long *in_FS_OFFSET;
  
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void add__system_u4495_cold(void)

{
  code *pcVar1;
  long *in_FS_OFFSET;
  
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void add__system_u3690_cold(void)

{
  code *pcVar1;
  long unaff_RBX;
  long unaff_RBP;
  long *in_FS_OFFSET;
  
  if (unaff_RBP != 0) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
  }
  *(undefined8 *)(unaff_RBX + 8) = 0;
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dollar___system_u4318_cold(void)

{
  code *pcVar1;
  long unaff_RBX;
  long *in_FS_OFFSET;
  
  if (unaff_RBX != 0) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
  }
  _DAT_00000000 = 0;
                    // WARNING: Does not return
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



undefined4 main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  gEnv = param_3;
  cmdLine = param_2;
  cmdCount = param_1;
  atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus2dot2dot4atslibatssystemdotnim_Init000
            ();
  main__pokerod_u195();
  nimTestErrorFlag();
  return nim_program_result;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101353)
// WARNING: Removing unreachable block (ram,0x0010135f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101394)
// WARNING: Removing unreachable block (ram,0x001013a0)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



void eqtrace___system_u5207(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 8);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 8;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x38);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 0x38;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
      return;
    }
    *param_2 = *param_2 + 1;
  }
  return;
}



void eqtrace___stdZsyncio_u112(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 8);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 8;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x38);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 0x38;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
      return;
    }
    *param_2 = *param_2 + 1;
  }
  return;
}



void eqtrace___system_u4734(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 8);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 8;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x38);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 0x38;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
      return;
    }
    *param_2 = *param_2 + 1;
  }
  return;
}



void rttiDestroy__systemZexceptions_u66(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void rttiDestroy__systemZexceptions_u56(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void rttiDestroy__systemZexceptions_u60(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void rttiDestroy__systemZexceptions_u62(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void rttiDestroy__systemZexceptions_u64(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void eqtrace___system_u4803(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 8);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 8;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x38);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 0x38;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
      return;
    }
    *param_2 = *param_2 + 1;
  }
  return;
}



void eqtrace___system_u8974(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 8);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 8;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x38);
    lVar2 = *param_2;
    if (param_2[1] <= lVar2) {
      resize__system_u3037(param_2);
      lVar2 = *param_2;
    }
    *(long *)(lVar2 * 0x10 + param_2[2]) = param_1 + 0x38;
    *(undefined8 *)(*param_2 * 0x10 + param_2[2] + 8) = uVar1;
    if (SCARRY8(*param_2,1)) {
      raiseOverflow();
      return;
    }
    *param_2 = *param_2 + 1;
  }
  return;
}



void eqdestroy___system_u4722(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void eqdestroy___system_u4791(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void eqdestroy___system_u5195(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void eqdestroy___system_u8962(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void eqdestroy___stdZsyncio_u100(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[-2];
    if (uVar2 < 0x10) {
      rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
      nimDestroyAndDispose(*(undefined8 *)(param_1 + 8));
    }
    else if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
    }
    else {
      puVar1[-2] = uVar2 - 0x10;
      rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 7) & 0x40) == 0))
  {
    deallocShared();
  }
  eqdestroy___stdZassertions_u74(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  if (uVar2 < 0x10) {
    rememberCycle__system_u3546(1,puVar1 + -2,*puVar1);
    nimDestroyAndDispose(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (!SBORROW8(uVar2,0x10)) {
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar1 + -2,*puVar1);
    return;
  }
  raiseOverflow();
  return;
}



void addInt__stdZprivateZdigitsutils_u184(long *param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uStack_50;
  char acStack_48 [4];
  char acStack_44 [2];
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  
  if (param_2 < 100) {
    if (9 < param_2) {
      lVar15 = param_2 * 2;
      uVar14 = 2;
      lVar17 = 0x16;
      local_32 = CONCAT11(digits100__stdZprivateZdigitsutils_u2[lVar15 + 1],(undefined1)local_32);
      goto LAB_00102591;
    }
    uVar14 = 1;
    lVar17 = 0x17;
  }
  else {
    uVar14 = (param_2 >> 2) / 0x19;
    local_32 = *(undefined2 *)
                (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                (long)(short)(((short)param_2 + (short)uVar14 * -100) * 2 + 1) + 0xf);
    if (param_2 < 10000) {
      lVar13 = 0x17;
      lVar17 = 0x15;
      uVar18 = uVar14;
    }
    else {
      uVar18 = (param_2 >> 2) / 100;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar18;
      uVar19 = param_2 / 10000;
      local_34 = *(undefined2 *)
                  (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                  (long)(short)(((short)uVar14 +
                                ((SUB162(auVar4 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                (short)(uVar18 / 0x19)) * -0x14) * 2 + 1) + 0xf);
      if (param_2 < 1000000) {
        lVar13 = 0x15;
        lVar17 = 0x13;
        uVar18 = uVar19;
        param_2 = uVar14;
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_2 / 40000;
        uVar14 = param_2 / 1000000;
        local_36 = *(undefined2 *)
                    (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                    (long)(short)(((short)uVar19 +
                                  ((SUB162(auVar5 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                  (short)((param_2 / 40000) / 0x19)) * -0x14) * 2 + 1) + 0xf);
        if (param_2 < 100000000) {
          lVar13 = 0x13;
          lVar17 = 0x11;
          uVar18 = uVar14;
          param_2 = uVar19;
        }
        else {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = param_2 / 4000000;
          uVar19 = param_2 / 100000000;
          local_38 = *(undefined2 *)
                      (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                      (long)(short)(((short)uVar14 +
                                    ((SUB162(auVar6 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                    (short)((param_2 / 4000000) / 0x19)) * -0x14) * 2 + 1) + 0xf);
          if (param_2 < 10000000000) {
            lVar17 = 0xf;
            lVar13 = 0x11;
            uVar18 = uVar19;
            param_2 = uVar14;
          }
          else {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = param_2 / 400000000;
            uVar14 = param_2 / 10000000000;
            local_3a = *(undefined2 *)
                        (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                        (long)(short)(((short)uVar19 +
                                      ((SUB162(auVar7 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                      (short)((param_2 / 400000000) / 0x19)) * -0x14) * 2 + 1) + 0xf
                        );
            if (param_2 < 1000000000000) {
              lVar13 = 0xf;
              lVar17 = 0xd;
              uVar18 = uVar14;
              param_2 = uVar19;
            }
            else {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = param_2 / 40000000000;
              uVar19 = param_2 / 1000000000000;
              uStack_3c = *(undefined2 *)
                           (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                           (long)(short)(((short)uVar14 +
                                         ((SUB162(auVar8 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc)
                                         + (short)((param_2 / 40000000000) / 0x19)) * -0x14) * 2 + 1
                                        ) + 0xf);
              if (param_2 < 100000000000000) {
                lVar17 = 0xb;
                lVar13 = 0xd;
                uVar18 = uVar19;
                param_2 = uVar14;
              }
              else {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = param_2 / 4000000000000;
                uVar14 = param_2 / 100000000000000;
                uStack_3e = *(undefined2 *)
                             (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                             (long)(short)(((short)uVar19 +
                                           ((SUB162(auVar9 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc
                                            ) + (short)((param_2 / 4000000000000) / 0x19)) * -0x14)
                                           * 2 + 1) + 0xf);
                if (param_2 < 10000000000000000) {
                  lVar13 = 0xb;
                  lVar17 = 9;
                  uVar18 = uVar14;
                  param_2 = uVar19;
                }
                else {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = param_2 / 400000000000000;
                  uVar19 = param_2 / 10000000000000000;
                  uStack_40 = *(undefined2 *)
                               (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                               (long)(short)(((short)uVar14 +
                                             ((SUB162(auVar10 * ZEXT816(0x28f5c28f5c28f5c3),8) &
                                              0xfffc) + (short)((param_2 / 400000000000000) / 0x19))
                                             * -0x14) * 2 + 1) + 0xf);
                  if (param_2 < 1000000000000000000) {
                    lVar17 = 7;
                    lVar13 = 9;
                    uVar18 = uVar19;
                    param_2 = uVar14;
                  }
                  else {
                    lVar17 = 5;
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = param_2 / 40000000000000000;
                    uStack_42 = *(undefined2 *)
                                 (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                                 (long)(short)(((short)uVar19 +
                                               ((SUB162(auVar11 * ZEXT816(0x28f5c28f5c28f5c3),8) &
                                                0xfffc) +
                                               (short)((param_2 / 40000000000000000) / 0x19)) *
                                               -0x14) * 2 + 1) + 0xf);
                    lVar13 = 7;
                    uVar18 = param_2 / 1000000000000000000;
                    param_2 = uVar19;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar14 = 0x18 - lVar17;
    bVar3 = 999 < param_2;
    param_2 = uVar18;
    if (bVar3) {
      lVar15 = uVar18 * 2;
      acStack_48[lVar17] = digits100__stdZprivateZdigitsutils_u2[lVar15 + 1];
      lVar17 = lVar13 + -3;
      uVar14 = 0x18 - lVar17;
LAB_00102591:
      acStack_48[lVar17] = digits100__stdZprivateZdigitsutils_u2[lVar15];
      goto LAB_00102502;
    }
  }
  acStack_48[lVar17] = (char)param_2 + '0';
LAB_00102502:
  lVar15 = *param_1;
  lVar13 = lVar15 + uVar14;
  if (SCARRY8(lVar15,uVar14)) {
    raiseOverflow();
    return;
  }
  if (lVar13 < 0) {
    raiseRangeErrorI(lVar13,0,0x7fffffffffffffff);
    return;
  }
  uStack_50 = 0x102525;
  setLengthStrV2(param_1,lVar13);
  if ((-1 < lVar15) && (lVar15 < *param_1)) {
    pcVar1 = acStack_48 + lVar17;
    uVar16 = (uint)uVar14;
    pcVar2 = (char *)(param_1[1] + 8 + lVar15);
    if (uVar16 < 8) {
      if ((uVar14 & 4) == 0) {
        if ((uVar16 != 0) && (*pcVar2 = *pcVar1, (uVar14 & 2) != 0)) {
          *(undefined2 *)(pcVar2 + ((uVar14 & 0xffffffff) - 2)) =
               *(undefined2 *)((long)&uStack_50 + (uVar14 & 0xffffffff) + lVar17 + 6);
        }
      }
      else {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar1;
        *(undefined4 *)(pcVar2 + ((uVar14 & 0xffffffff) - 4)) =
             *(undefined4 *)((long)&uStack_50 + (uVar14 & 0xffffffff) + lVar17 + 4);
      }
    }
    else {
      *(undefined8 *)pcVar2 = *(undefined8 *)pcVar1;
      *(undefined8 *)(pcVar2 + ((uVar14 & 0xffffffff) - 8)) =
           *(undefined8 *)((long)&uStack_50 + (uVar14 & 0xffffffff) + lVar17);
      lVar17 = (long)pcVar2 - ((ulong)(pcVar2 + 8) & 0xfffffffffffffff8);
      uVar16 = uVar16 + (int)lVar17 & 0xfffffff8;
      if (7 < uVar16) {
        uVar12 = 0;
        do {
          uVar14 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(pcVar2 + 8) & 0xfffffffffffffff8) + uVar14) =
               *(undefined8 *)(pcVar1 + (uVar14 - lVar17));
        } while (uVar12 < uVar16);
      }
    }
    return;
  }
  raiseIndexError2(lVar15,*param_1 + -1);
  return;
}



void addInt__stdZprivateZdigitsutils_u187(long *param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uStack_50;
  char acStack_48 [5];
  char local_43;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  
  if ((long)param_2 < 0) {
    if (param_2 != 0x8000000000000000) {
      param_2 = -param_2;
    }
    uStack_50 = 0x102ba9;
    prepareAdd(param_1,1);
    *(undefined1 *)(param_1[1] + 8 + *param_1) = 0x2d;
    lVar20 = *param_1 + 1;
    if (SCARRY8(*param_1,1)) {
      uStack_50 = 0x102dd8;
      raiseOverflow();
    }
    else {
      *param_1 = lVar20;
      *(undefined1 *)(param_1[1] + 8 + lVar20) = 0;
    }
  }
  if (param_2 < 100) {
    uVar13 = 1;
    lVar20 = 0x17;
    if (9 < param_2) {
      lVar18 = param_2 * 2;
      uVar13 = 2;
      lVar20 = 0x16;
      local_32 = CONCAT11(digits100__stdZprivateZdigitsutils_u2[lVar18 + 1],(undefined1)local_32);
LAB_00102cb0:
      acStack_48[lVar20] = digits100__stdZprivateZdigitsutils_u2[lVar18];
      goto LAB_00102b03;
    }
  }
  else {
    uVar13 = param_2 >> 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar13;
    uVar17 = uVar13 / 0x19;
    local_32 = *(undefined2 *)
                (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                (long)(short)(((short)param_2 +
                              ((SUB162(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                              (short)uVar17) * -0x14) * 2 + 1) + 0xf);
    if (param_2 < 10000) {
      lVar20 = 0x15;
      lVar16 = 0x17;
      uVar15 = uVar17;
LAB_00102cd0:
      if (999 < param_2) {
        lVar18 = uVar15 * 2;
        acStack_48[lVar20] = digits100__stdZprivateZdigitsutils_u2[lVar18 + 1];
        lVar20 = lVar16 + -3;
        uVar13 = 0x18 - lVar20;
        goto LAB_00102cb0;
      }
    }
    else {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar13 / 100;
      uVar19 = param_2 / 10000;
      local_34 = *(undefined2 *)
                  (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                  (long)(short)(((short)uVar17 +
                                ((SUB162(auVar4 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                (short)((uVar13 / 100) / 0x19)) * -0x14) * 2 + 1) + 0xf);
      if (param_2 < 1000000) {
        lVar20 = 0x13;
        lVar16 = 0x15;
        uVar15 = uVar19;
        param_2 = uVar17;
        goto LAB_00102cd0;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2 / 40000;
      uVar13 = param_2 / 1000000;
      local_36 = *(undefined2 *)
                  (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                  (long)(short)(((short)uVar19 +
                                ((SUB162(auVar5 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                (short)((param_2 / 40000) / 0x19)) * -0x14) * 2 + 1) + 0xf);
      if (param_2 < 100000000) {
        lVar20 = 0x11;
        lVar16 = 0x13;
        uVar15 = uVar13;
        param_2 = uVar19;
        goto LAB_00102cd0;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_2 / 4000000;
      uVar17 = param_2 / 100000000;
      local_38 = *(undefined2 *)
                  (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                  (long)(short)(((short)uVar13 +
                                ((SUB162(auVar6 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                (short)((param_2 / 4000000) / 0x19)) * -0x14) * 2 + 1) + 0xf);
      if (param_2 < 10000000000) {
        lVar20 = 0xf;
        lVar16 = 0x11;
        uVar15 = uVar17;
        param_2 = uVar13;
        goto LAB_00102cd0;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_2 / 400000000;
      uVar13 = param_2 / 10000000000;
      local_3a = *(undefined2 *)
                  (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                  (long)(short)(((short)uVar17 +
                                ((SUB162(auVar7 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                (short)((param_2 / 400000000) / 0x19)) * -0x14) * 2 + 1) + 0xf);
      if (param_2 < 1000000000000) {
        lVar20 = 0xd;
        lVar16 = 0xf;
        uVar15 = uVar13;
        param_2 = uVar17;
        goto LAB_00102cd0;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_2 / 40000000000;
      uVar17 = param_2 / 1000000000000;
      uStack_3c = *(undefined2 *)
                   (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                   (long)(short)(((short)uVar13 +
                                 ((SUB162(auVar8 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                 (short)((param_2 / 40000000000) / 0x19)) * -0x14) * 2 + 1) + 0xf);
      if (param_2 < 100000000000000) {
        lVar20 = 0xb;
        lVar16 = 0xd;
        uVar15 = uVar17;
        param_2 = uVar13;
        goto LAB_00102cd0;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_2 / 4000000000000;
      uVar13 = param_2 / 100000000000000;
      uStack_3e = *(undefined2 *)
                   (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                   (long)(short)(((short)uVar17 +
                                 ((SUB162(auVar9 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                 (short)((param_2 / 4000000000000) / 0x19)) * -0x14) * 2 + 1) + 0xf)
      ;
      if (param_2 < 10000000000000000) {
        lVar20 = 9;
        lVar16 = 0xb;
        uVar15 = uVar13;
        param_2 = uVar17;
        goto LAB_00102cd0;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_2 / 400000000000000;
      uStack_40 = *(undefined2 *)
                   (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                   (long)(short)(((short)uVar13 +
                                 ((SUB162(auVar10 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                 (short)((param_2 / 400000000000000) / 0x19)) * -0x14) * 2 + 1) +
                   0xf);
      if (param_2 < 1000000000000000000) {
        lVar20 = 7;
        lVar16 = 9;
        uVar15 = param_2 / 10000000000000000;
        param_2 = uVar13;
        goto LAB_00102cd0;
      }
      lVar20 = 5;
      uVar15 = param_2 / 1000000000000000000;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_2 / 40000000000000000;
      uStack_42 = *(undefined2 *)
                   (TM__TzI3paKQY09cLjc9cmCvur3A_3 +
                   (long)(short)(((short)(param_2 / 10000000000000000) +
                                 ((SUB162(auVar11 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffc) +
                                 (short)((param_2 / 40000000000000000) / 0x19)) * -0x14) * 2 + 1) +
                   0xf);
    }
    uVar13 = 0x18 - lVar20;
    param_2 = uVar15;
  }
  acStack_48[lVar20] = (char)param_2 + '0';
LAB_00102b03:
  lVar18 = *param_1;
  lVar16 = lVar18 + uVar13;
  if (SCARRY8(lVar18,uVar13)) {
    raiseOverflow();
    return;
  }
  if (lVar16 < 0) {
    raiseRangeErrorI(lVar16,0,0x7fffffffffffffff);
    return;
  }
  uStack_50 = 0x102b27;
  setLengthStrV2(param_1,lVar16);
  if ((-1 < lVar18) && (lVar18 < *param_1)) {
    pcVar1 = acStack_48 + lVar20;
    uVar14 = (uint)uVar13;
    pcVar2 = (char *)(param_1[1] + 8 + lVar18);
    if (uVar14 < 8) {
      if ((uVar13 & 4) == 0) {
        if ((uVar14 != 0) && (*pcVar2 = *pcVar1, (uVar13 & 2) != 0)) {
          *(undefined2 *)(pcVar2 + ((uVar13 & 0xffffffff) - 2)) =
               *(undefined2 *)((long)&uStack_50 + (uVar13 & 0xffffffff) + lVar20 + 6);
        }
      }
      else {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar1;
        *(undefined4 *)(pcVar2 + ((uVar13 & 0xffffffff) - 4)) =
             *(undefined4 *)((long)&uStack_50 + (uVar13 & 0xffffffff) + lVar20 + 4);
      }
    }
    else {
      *(undefined8 *)pcVar2 = *(undefined8 *)pcVar1;
      *(undefined8 *)(pcVar2 + ((uVar13 & 0xffffffff) - 8)) =
           *(undefined8 *)((long)&uStack_50 + (uVar13 & 0xffffffff) + lVar20);
      lVar20 = (long)pcVar2 - ((ulong)(pcVar2 + 8) & 0xfffffffffffffff8);
      uVar14 = uVar14 + (int)lVar20 & 0xfffffff8;
      if (7 < uVar14) {
        uVar12 = 0;
        do {
          uVar13 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(pcVar2 + 8) & 0xfffffffffffffff8) + uVar13) =
               *(undefined8 *)(pcVar1 + (uVar13 - lVar20));
        } while (uVar12 < uVar14);
      }
    }
    return;
  }
  raiseIndexError2(lVar18,*param_1 + -1);
  return;
}



undefined1  [16] dollar___systemZdollars_u14(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = TM__n49a9aYp5BrbXv9a6OCpJYm0g_2;
  local_18 = 0;
  addInt__stdZprivateZdigitsutils_u187(&local_18,param_1);
  auVar1._8_8_ = local_10;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined1  [16] dollar___systemZdollars_u34(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = TM__n49a9aYp5BrbXv9a6OCpJYm0g_2;
  local_18 = 0;
  addInt__stdZprivateZdigitsutils_u187(&local_18,param_1);
  auVar1._8_8_ = local_10;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined1  [16] dollar___systemZdollars_u29(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = TM__n49a9aYp5BrbXv9a6OCpJYm0g_2;
  local_18 = 0;
  addInt__stdZprivateZdigitsutils_u187(&local_18,(long)param_1);
  auVar1._8_8_ = local_10;
  auVar1._0_8_ = local_18;
  return auVar1;
}



void raiseEIO__stdZsyncio_u92(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)nimNewObj(0x40,8);
  puVar1[2] = "IOError";
  *puVar1 = NTIv2__5a9aamn6nGq9cP9bHdfdhqobw_;
  auVar2 = eqdup___system_u2711(param_1,param_2);
  puVar1[1] = 0;
  *(undefined1 (*) [16])(puVar1 + 3) = auVar2;
  raiseExceptionEx(puVar1,"IOError","raiseEIO","syncio.nim",0x9d);
  return;
}



void checkErr__stdZsyncio_u162(FILE *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  size_t __n;
  char *pcVar4;
  size_t __n_00;
  undefined4 *__dest;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  
  iVar2 = ferror(param_1);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    auVar10 = dollar___systemZdollars_u29(*piVar3);
    lVar6 = auVar10._8_8_;
    __n = auVar10._0_8_;
    if (*(char *)(in_FS_OFFSET + -0x60) == '\0') {
      pcVar4 = strerror(*piVar3);
      auVar10 = cstrToNimstr(pcVar4);
      lVar7 = auVar10._8_8_;
      __n_00 = auVar10._0_8_;
      auVar10 = rawNewString(__n + 10 + __n_00);
      lVar8 = auVar10._8_8_;
      lVar5 = auVar10._0_8_;
      __dest = (undefined4 *)(lVar5 + 8 + lVar8);
      *__dest = 0x6e727265;
      *(undefined4 *)((long)__dest + 3) = 0x203a6f6e;
      if (SCARRY8(lVar5,7)) {
        raiseOverflow();
      }
      else {
        *(undefined1 *)(lVar5 + 0xf + lVar8) = 0;
        __dest = (undefined4 *)(lVar5 + 0xf + lVar8);
        lVar5 = lVar5 + 7;
      }
      if (0 < (long)__n) {
        __dest = (undefined4 *)memcpy(__dest,(void *)(lVar6 + 8),__n);
        lVar9 = __n + lVar5;
        if (SCARRY8(__n,lVar5)) {
          raiseOverflow();
        }
        else {
          *(undefined1 *)(lVar9 + 8 + lVar8) = 0;
          __dest = (undefined4 *)(lVar9 + 8 + lVar8);
          lVar5 = lVar9;
        }
      }
      *(undefined2 *)__dest = 0x6020;
      if (SCARRY8(lVar5,2)) {
        raiseOverflow();
      }
      else {
        *(undefined1 *)(lVar5 + 10 + lVar8) = 0;
        lVar5 = lVar5 + 2;
      }
      if (0 < (long)__n_00) {
        memcpy((void *)(lVar5 + 8 + lVar8),(void *)(lVar7 + 8),__n_00);
        if (SCARRY8(__n_00,lVar5)) {
          raiseOverflow();
        }
        else {
          *(undefined1 *)(__n_00 + lVar5 + 8 + lVar8) = 0;
          lVar5 = __n_00 + lVar5;
        }
      }
      *(undefined1 *)(lVar5 + 8 + lVar8) = 0x60;
      if (SCARRY8(lVar5,1)) {
        raiseOverflow();
      }
      else {
        *(undefined1 *)(lVar5 + 9 + lVar8) = 0;
        lVar5 = lVar5 + 1;
      }
      clearerr(param_1);
      raiseEIO__stdZsyncio_u92(lVar5,lVar8);
      if ((lVar7 != 0) && ((*(byte *)(lVar7 + 7) & 0x40) == 0)) {
        deallocShared(lVar7);
      }
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 7) & 0x40) == 0)) {
        deallocShared(lVar6);
      }
      bVar1 = *(byte *)(lVar8 + 7);
    }
    else {
      if (lVar6 == 0) {
        return;
      }
      bVar1 = *(byte *)(lVar6 + 7);
      lVar8 = lVar6;
    }
    if ((bVar1 & 0x40) == 0) {
      deallocShared(lVar8);
      return;
    }
  }
  return;
}



byte readLine__stdZsyncio_u289(FILE *param_1,size_t *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  size_t __n;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte local_39;
  
  __n = *param_2;
  if ((long)__n < 0x50) {
    __n = 0x50;
  }
  lVar9 = 0;
  setLengthStrV2(param_2,__n);
  do {
    bVar10 = false;
    sVar7 = 0;
    lVar6 = lVar9;
    while( true ) {
      if (bVar10) goto LAB_001032e0;
      if ((lVar6 < 0) || ((long)*param_2 <= lVar6)) {
        raiseIndexError2(lVar6,*param_2 - 1);
        return 0;
      }
      sVar2 = param_2[1];
      if ((sVar2 != 0) && ((*(byte *)(sVar2 + 7) & 0x40) != 0)) {
        nimPrepareStrMutationImpl__system_u2459(param_2);
        sVar2 = param_2[1];
      }
      sVar7 = sVar7 + 1;
      *(undefined1 *)(sVar2 + 8 + lVar6) = 10;
      if (__n == sVar7) break;
      bVar10 = SCARRY8(lVar9,sVar7);
      lVar6 = lVar9 + sVar7;
    }
    sVar7 = *param_2;
    if ((lVar9 < 0) || ((long)sVar7 <= lVar9)) {
LAB_0010330f:
      raiseIndexError2(lVar9,sVar7 - 1);
      return 0;
    }
    if (__n + 0x80000000 >> 0x20 != 0) {
      raiseRangeErrorI(__n,0xffffffff80000000,0x7fffffff);
      return 0;
    }
    while (pcVar3 = fgets((char *)(param_2[1] + lVar9 + 8),(int)__n,param_1), pcVar3 == (char *)0x0)
    {
      piVar5 = __errno_location();
      if (*piVar5 != 4) {
        checkErr__stdZsyncio_u162(param_1);
        local_39 = *(byte *)(in_FS_OFFSET + -0x60);
        if (local_39 != 0) {
          return 0;
        }
        goto LAB_0010324f;
      }
      *piVar5 = 0;
      clearerr(param_1);
      sVar7 = *param_2;
      if ((long)sVar7 <= lVar9) goto LAB_0010330f;
    }
    local_39 = 1;
LAB_0010324f:
    sVar7 = *param_2;
    if ((long)sVar7 <= lVar9) {
      raiseIndexError2(lVar9,sVar7 - 1);
      return 0;
    }
    sVar2 = param_2[1];
    pvVar4 = memchr((void *)(sVar2 + lVar9 + 8),10,__n);
    if (pvVar4 != (void *)0x0) {
      lVar6 = (long)pvVar4 - (sVar2 + 8);
      if (SBORROW8((long)pvVar4,sVar2 + 8)) {
LAB_001032e0:
        raiseOverflow();
        return 0;
      }
      if (lVar6 < 1) {
        if (lVar6 != 0) {
          raiseRangeErrorI(lVar6,0,0x7fffffffffffffff);
          return 0;
        }
      }
      else {
        lVar8 = lVar6 + -1;
        if ((long)sVar7 <= lVar8) {
          raiseIndexError2(lVar8,sVar7 - 1);
          return 0;
        }
        cVar1 = *(char *)(sVar2 + 8 + lVar8);
        if (cVar1 == '\r') {
          if (-1 < lVar8) {
            setLengthStrV2(param_2,lVar8);
            return lVar6 != 1 | local_39;
          }
LAB_00103333:
          raiseRangeErrorI(lVar8,0,0x7fffffffffffffff);
          return 0;
        }
        if (cVar1 == '\0') {
          if ((SCARRY8(lVar9,__n)) || (SBORROW8(lVar9 + __n,1))) goto LAB_001032e0;
          if (lVar6 < (long)(lVar9 + __n + -1)) {
            lVar9 = lVar6 + 1;
            if ((long)sVar7 <= lVar9) {
              raiseIndexError2(lVar9,sVar7 - 1);
              return 0;
            }
            if (*(char *)(sVar2 + 8 + lVar9) == '\0') goto LAB_001033f9;
          }
          lVar6 = lVar8;
        }
      }
LAB_001033f9:
      setLengthStrV2(param_2,lVar6);
      return lVar6 != 0 | local_39;
    }
    bVar10 = SCARRY8(__n - 1,lVar9);
    lVar9 = (__n - 1) + lVar9;
    if ((bVar10) || (lVar8 = lVar9 + 0x80, SCARRY8(lVar9,0x80))) goto LAB_001032e0;
    if (lVar8 < 0) goto LAB_00103333;
    __n = 0x80;
    setLengthStrV2(param_2,lVar8);
  } while( true );
}



void raiseEOF__stdZsyncio_u95(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)nimNewObj(0x40,8);
  *puVar1 = NTIv2__ryhrCnopkHENo3GYsFOKvA_;
  puVar1[2] = "EOFError";
  puVar1[3] = 0xb;
  puVar1[4] = &TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_22;
  puVar1[1] = 0;
  raiseExceptionEx(puVar1,"EOFError","raiseEOF","syncio.nim",0xa0);
  return;
}



undefined1  [16] readLine__stdZsyncio_u318(undefined8 param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 local_18 [16];
  
  local_18 = rawNewString(0x50);
  cVar1 = readLine__stdZsyncio_u289(param_1,local_18);
  if ((*(char *)(in_FS_OFFSET + -0x60) == '\0') && (cVar1 == '\0')) {
    raiseEOF__stdZsyncio_u95();
  }
  return local_18;
}



void raiseOutOfMem__system_u5787(void)

{
  FILE *__stream;
  
  if (outOfMemHook__system_u3686 != (code *)0x0) {
    (*outOfMemHook__system_u3686)();
  }
  __stream = stderr;
  fwrite("out of memory\n",1,0xe,stderr);
  fflush(__stream);
                    // WARNING: Subroutine does not return
  exit(1);
}



void allocPages__system_u6121(undefined8 param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = mmap((void *)0x0,param_2,3,0x22,-1,0);
  if ((long)pvVar1 - 1U < 0xfffffffffffffffe) {
    return;
  }
                    // WARNING: Subroutine does not return
  raiseOutOfMem__system_u5787();
}



void * tryAllocPages__system_u6125(undefined8 param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = mmap((void *)0x0,param_2,3,0x22,-1,0);
  if (pvVar1 == (void *)0xffffffffffffffff) {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



void llAlloc__system_u6129(long param_1,size_t param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x2868);
  if ((plVar5 == (long *)0x0) || (lVar3 = *plVar5, lVar3 < (long)param_2)) {
    puVar4 = (undefined8 *)mmap((void *)0x0,0x1000,3,0x22,-1,0);
    if (0xfffffffffffffffd < (long)puVar4 - 1U) {
                    // WARNING: Subroutine does not return
      raiseOutOfMem__system_u5787();
    }
    *(undefined8 **)(param_1 + 0x2868) = puVar4;
    *(long *)(param_1 + 0x2870) = *(long *)(param_1 + 0x2870) + 0x1000;
    *puVar4 = 0xfe8;
    *(undefined8 *)(*(long *)(param_1 + 0x2868) + 8) = 0x18;
    *(long **)(*(long *)(param_1 + 0x2868) + 0x10) = plVar5;
    plVar5 = *(long **)(param_1 + 0x2868);
    lVar3 = *plVar5;
  }
  lVar2 = plVar5[1];
  *plVar5 = lVar3 - param_2;
  plVar1 = (long *)(*(long *)(param_1 + 0x2868) + 8);
  *plVar1 = *plVar1 + param_2;
  memset((void *)(lVar2 + (long)plVar5),0,param_2);
  return;
}



void addHeapLink__system_u6167(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)(param_1 + 0x30b0);
  do {
    if (*plVar2 < 0x1e) {
      lVar1 = *plVar2;
      plVar2[lVar1 * 2 + 1] = param_2;
      plVar2[lVar1 * 2 + 2] = param_3;
      *plVar2 = lVar1 + 1;
      return;
    }
    plVar2 = (long *)plVar2[0x3d];
  } while (plVar2 != (long *)0x0);
  puVar3 = (undefined8 *)llAlloc__system_u6129(param_1,0x1f0);
  puVar3[0x3d] = *(undefined8 *)(param_1 + 0x3298);
  *(undefined8 **)(param_1 + 0x3298) = puVar3;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  *puVar3 = 1;
  return;
}



void intSetGet__system_u6262(long param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (param_2 & 0xff) * 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  do {
    if (plVar1[1] == param_2) {
      return;
    }
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}



uint contains__system_u6311(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + (param_2 >> 9 & 0xffU) * 8);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    if (param_2 >> 9 == puVar1[1]) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  uVar2 = (uint)param_2 & 0x1ff;
  return (uint)((ulong)puVar1[((long)(ulong)uVar2 >> 6) + 2] >> ((byte)uVar2 & 0x3f)) & 1;
}



ulong * requestOsChunks__system_u6564(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  size_t __len;
  long lVar8;
  
  if (*(char *)(param_1 + 0x30a2) == '\0') {
    if (*(long *)(param_1 + 0x2888) < 0x10000) {
      *(undefined8 *)(param_1 + 0x30a8) = 0x4000;
      __len = 0x4000;
    }
    else {
      __len = (*(long *)(param_1 + 0x2888) >> 2) + 0xfffU & 0xfffffffffffff000;
      sVar5 = *(long *)(param_1 + 0x30a8) * 2;
      if (0x3f000000 < (long)sVar5) {
        sVar5 = 0x3f000000;
      }
      if ((long)sVar5 < (long)__len) {
        __len = sVar5;
      }
      *(size_t *)(param_1 + 0x30a8) = __len;
    }
  }
  else {
    __len = *(size_t *)(param_1 + 0x30a8);
  }
  if ((long)__len < (long)param_2) {
    puVar2 = (ulong *)mmap((void *)0x0,param_2,3,0x22,-1,0);
    if (0xfffffffffffffffd < (long)puVar2 - 1U) {
LAB_00103a73:
                    // WARNING: Subroutine does not return
      raiseOutOfMem__system_u5787();
    }
  }
  else {
    puVar2 = (ulong *)mmap((void *)0x0,__len,3,0x22,-1,0);
    if ((long)puVar2 - 1U < 0xfffffffffffffffe) {
      param_2 = *(ulong *)(param_1 + 0x30a8);
    }
    else {
      puVar2 = (ulong *)mmap((void *)0x0,param_2,3,0x22,-1,0);
      if (0xfffffffffffffffd < (long)puVar2 - 1U) goto LAB_00103a73;
      *(undefined1 *)(param_1 + 0x30a2) = 1;
    }
  }
  *(long *)(param_1 + 0x2870) = *(long *)(param_1 + 0x2870) + param_2;
  plVar3 = (long *)(param_1 + 0x30b0);
  *(long *)(param_1 + 0x2880) = *(long *)(param_1 + 0x2880) + param_2;
  do {
    if (*plVar3 < 0x1e) {
      lVar8 = *plVar3;
      plVar3[lVar8 * 2 + 1] = (long)puVar2;
      plVar3[lVar8 * 2 + 2] = param_2;
      *plVar3 = lVar8 + 1;
      goto LAB_0010394c;
    }
    plVar3 = (long *)plVar3[0x3d];
  } while (plVar3 != (long *)0x0);
  puVar4 = (undefined8 *)llAlloc__system_u6129(param_1,0x1f0);
  puVar4[0x3d] = *(undefined8 *)(param_1 + 0x3298);
  *(undefined8 **)(param_1 + 0x3298) = puVar4;
  puVar4[1] = puVar2;
  puVar4[2] = param_2;
  *puVar4 = 1;
LAB_0010394c:
  puVar1 = (ulong *)((long)puVar2 + param_2);
  puVar2[1] = param_2;
  *(undefined1 (*) [16])(puVar2 + 3) = (undefined1  [16])0x0;
  for (puVar4 = *(undefined8 **)(param_1 + 0x28a0 + ((long)puVar1 >> 0x15 & 0xffU) * 8);
      puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if ((long)puVar1 >> 0x15 == puVar4[1]) {
      uVar6 = (ulong)((uint)((long)puVar1 >> 0xc) & 0x1ff);
      if (((ulong)puVar4[((long)uVar6 >> 6) + 2] >> (uVar6 & 0x3f) & 1) != 0) {
        *puVar1 = (uint)*puVar1 & 1 | param_2;
      }
      break;
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x2890);
  if (uVar6 == 0) {
    uVar6 = 0x1000;
  }
  lVar8 = (long)puVar2 - uVar6;
  puVar4 = *(undefined8 **)(param_1 + 0x28a0 + (lVar8 >> 0x15 & 0xffU) * 8);
  do {
    if (puVar4 == (undefined8 *)0x0) {
LAB_00103a37:
      uVar6 = (ulong)((uint)*puVar2 & 1);
LAB_00103a3e:
      *puVar2 = uVar6;
      *(ulong *)(param_1 + 0x2890) = param_2;
      return puVar2;
    }
    if (lVar8 >> 0x15 == puVar4[1]) {
      uVar7 = (ulong)((uint)(lVar8 >> 0xc) & 0x1ff);
      if ((((ulong)puVar4[((long)uVar7 >> 6) + 2] >> (uVar7 & 0x3f) & 1) != 0) &&
         (*(ulong *)(lVar8 + 8) == uVar6)) {
        uVar6 = (uint)*puVar2 & 1 | uVar6;
        goto LAB_00103a3e;
      }
      goto LAB_00103a37;
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}



void intSetPut__system_u6294(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_2 + (param_3 & 0xff) * 8);
  puVar2 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)llAlloc__system_u6129(param_1,0x50);
      *puVar2 = *puVar1;
      *puVar1 = puVar2;
      puVar2[1] = param_3;
      return;
    }
    if (param_3 == puVar2[1]) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  return;
}



void incl__system_u6352(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_3 >> 9;
  puVar1 = (undefined8 *)(param_2 + (uVar3 & 0xff) * 8);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2)
  {
    if (uVar3 == puVar2[1]) goto LAB_00103b6e;
  }
  puVar2 = (undefined8 *)llAlloc__system_u6129(param_1,0x50);
  *puVar2 = *puVar1;
  *puVar1 = puVar2;
  puVar2[1] = uVar3;
LAB_00103b6e:
  uVar4 = (uint)param_3 & 0x1ff;
  puVar2[((long)(ulong)uVar4 >> 6) + 2] =
       puVar2[((long)(ulong)uVar4 >> 6) + 2] | 1L << ((byte)uVar4 & 0x3f);
  return;
}



long * splitChunk2__system_u6612(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  plVar1 = (long *)(param_3 + param_2);
  lVar2 = *(long *)(param_2 + 8);
  plVar1[3] = 0;
  plVar1[4] = 0;
  uVar6 = lVar2 - param_3;
  *plVar1 = param_3;
  plVar1[1] = uVar6;
  plVar1[2] = param_1;
  puVar7 = (ulong *)(*(long *)(param_2 + 8) + param_2);
  for (puVar3 = *(undefined8 **)(param_1 + 0x28a0 + ((long)puVar7 >> 0x15 & 0xffU) * 8);
      puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    if ((long)puVar7 >> 0x15 == puVar3[1]) {
      uVar5 = (ulong)((uint)((long)puVar7 >> 0xc) & 0x1ff);
      if (((ulong)puVar3[((long)uVar5 >> 6) + 2] >> (uVar5 & 0x3f) & 1) != 0) {
        *puVar7 = (uint)*puVar7 & 1 | uVar6;
      }
      break;
    }
  }
  *(long *)(param_2 + 8) = param_3;
  uVar6 = (long)plVar1 >> 0x15;
  lVar2 = param_1 + (uVar6 & 0xff) * 8;
  for (puVar3 = *(undefined8 **)(lVar2 + 0x28a0); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    if (uVar6 == puVar3[1]) goto LAB_00103c7e;
  }
  puVar3 = (undefined8 *)llAlloc__system_u6129(param_1,0x50);
  *puVar3 = *(undefined8 *)(lVar2 + 0x28a0);
  *(undefined8 **)(lVar2 + 0x28a0) = puVar3;
  puVar3[1] = uVar6;
LAB_00103c7e:
  uVar4 = (uint)((long)plVar1 >> 0xc) & 0x1ff;
  puVar3[((long)(ulong)uVar4 >> 6) + 2] =
       puVar3[((long)(ulong)uVar4 >> 6) + 2] | 1L << ((byte)uVar4 & 0x3f);
  return plVar1;
}



void addChunkToMatrix__system_u6091(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  sbyte sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = (uint)*(long *)(param_2 + 8);
  if (uVar4 < 0x10000) {
    lVar6 = (ulong)(0xff < uVar4) << 3;
    sVar3 = (sbyte)lVar6;
  }
  else if (uVar4 < 0x1000000) {
    sVar3 = 0x10;
    lVar6 = 0x10;
  }
  else {
    sVar3 = 0x18;
    lVar6 = 0x18;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  lVar2 = (char)fsLookupTable__system_u5926[uVar4 >> sVar3 & 0xff] + lVar6 + -6;
  lVar5 = *(long *)(param_2 + 8) >>
          ((char)((char)fsLookupTable__system_u5926[uVar4 >> sVar3 & 0xff] + lVar6) - 5U & 0x3f);
  lVar6 = *(long *)(param_1 + 8 + (lVar5 + 0x1ec + lVar2 * 0x20) * 8);
  *(long *)(param_2 + 0x18) = lVar6;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x20) = param_2;
  }
  *(long *)(param_1 + 8 + (lVar5 + 0x1ec + lVar2 * 0x20) * 8) = param_2;
  puVar1 = (uint *)(param_1 + 0x1004 + lVar2 * 4);
  *puVar1 = *puVar1 | (uint)(1L << ((char)lVar5 - 0x20U & 0x1f));
  *(uint *)(param_1 + 0x1000) = *(uint *)(param_1 + 0x1000) | (uint)(1L << ((byte)lVar2 & 0x1f));
  return;
}



void splitChunk__system_u6636(long param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  sbyte sVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = splitChunk2__system_u6612();
  uVar5 = (uint)*(long *)(lVar2 + 8);
  if (uVar5 < 0x10000) {
    lVar7 = (ulong)(0xff < uVar5) << 3;
    sVar4 = (sbyte)lVar7;
  }
  else if (uVar5 < 0x1000000) {
    sVar4 = 0x10;
    lVar7 = 0x10;
  }
  else {
    sVar4 = 0x18;
    lVar7 = 0x18;
  }
  *(undefined8 *)(lVar2 + 0x20) = 0;
  lVar3 = (char)fsLookupTable__system_u5926[uVar5 >> sVar4 & 0xff] + lVar7 + -6;
  lVar6 = *(long *)(lVar2 + 8) >>
          ((char)((char)fsLookupTable__system_u5926[uVar5 >> sVar4 & 0xff] + lVar7) - 5U & 0x3f);
  lVar7 = *(long *)(param_1 + 8 + (lVar6 + 0x1ec + lVar3 * 0x20) * 8);
  *(long *)(lVar2 + 0x18) = lVar7;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x20) = lVar2;
  }
  *(long *)(param_1 + 8 + (lVar6 + 0x1ec + lVar3 * 0x20) * 8) = lVar2;
  puVar1 = (uint *)(param_1 + 0x1004 + lVar3 * 4);
  *puVar1 = *puVar1 | (uint)(1L << ((char)lVar6 - 0x20U & 0x1f));
  *(uint *)(param_1 + 0x1000) = *(uint *)(param_1 + 0x1000) | (uint)(1L << ((byte)lVar3 & 0x1f));
  return;
}



void removeChunkFromMatrix2__system_u6082(long param_1,long param_2,long param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 8 + (param_4 + 0x20c + param_3 * 0x20) * 8) = lVar2;
  if (lVar2 == 0) {
    puVar1 = (uint *)(param_1 + 0x1004 + param_3 * 4);
    *puVar1 = *puVar1 & ~(uint)(1L << ((byte)param_4 & 0x1f));
    if (*puVar1 == 0) {
      *(uint *)(param_1 + 0x1000) =
           *(uint *)(param_1 + 0x1000) & ~(uint)(1L << ((byte)param_3 & 0x1f));
      *(undefined1 (*) [16])(param_2 + 0x18) = (undefined1  [16])0x0;
      return;
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x20) = 0;
  }
  *(undefined1 (*) [16])(param_2 + 0x18) = (undefined1  [16])0x0;
  return;
}



undefined8 * getBigChunk__system_u6665(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  sbyte sVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  uVar7 = (uint)param_2;
  if (uVar7 < 0x10000) {
    sVar8 = (0xff < uVar7) << 3;
  }
  else if (uVar7 < 0x1000000) {
    sVar8 = 0x10;
  }
  else {
    sVar8 = 0x18;
  }
  uVar3 = (1L << (fsLookupTable__system_u5926[uVar7 >> sVar8 & 0xff] + -5 + sVar8 & 0x3fU)) + 0xfffU
          & 0xfffffffffffff000;
  uVar10 = (uVar3 - 1) + param_2 & -uVar3;
  uVar3 = 0x3f000000;
  if ((long)uVar10 < 0x3f000001) {
    uVar3 = uVar10;
  }
  uVar7 = (uint)uVar3;
  if (uVar7 < 0x10000) {
    lVar9 = (ulong)(0xff < uVar7) << 3;
    sVar8 = (sbyte)lVar9;
  }
  else if (uVar7 < 0x1000000) {
    sVar8 = 0x10;
    lVar9 = 0x10;
  }
  else {
    sVar8 = 0x18;
    lVar9 = 0x18;
  }
  lVar9 = (char)fsLookupTable__system_u5926[uVar7 >> sVar8 & 0xff] + lVar9;
  lVar11 = lVar9 + -6;
  uVar7 = (uint)(0xffffffffL << ((char)((long)uVar3 >> ((char)lVar9 - 5U & 0x3f)) - 0x20U & 0x3f)) &
          *(uint *)(param_1 + 0xfec + lVar9 * 4);
  if (uVar7 == 0) {
    uVar7 = (uint)(0xffffffffL << ((char)lVar11 + 1U & 0x3f)) & *(uint *)(param_1 + 0x1000);
    uVar7 = -uVar7 & uVar7;
    if (uVar7 < 0x10000) {
      lVar11 = (ulong)(0xff < uVar7) << 3;
      sVar8 = (sbyte)lVar11;
    }
    else if (uVar7 < 0x1000000) {
      sVar8 = 0x10;
      lVar11 = 0x10;
    }
    else {
      sVar8 = 0x18;
      lVar11 = 0x18;
    }
    lVar11 = (char)fsLookupTable__system_u5926[uVar7 >> sVar8 & 0xff] + lVar11;
    if (0 < lVar11) {
      uVar7 = *(uint *)(param_1 + 0x1004 + lVar11 * 4);
      goto LAB_0010405e;
    }
  }
  else {
LAB_0010405e:
    uVar7 = -uVar7 & uVar7;
    if (uVar7 < 0x10000) {
      lVar9 = (ulong)(0xff < uVar7) << 3;
      sVar8 = (sbyte)lVar9;
    }
    else if (uVar7 < 0x1000000) {
      sVar8 = 0x10;
      lVar9 = 0x10;
    }
    else {
      sVar8 = 0x18;
      lVar9 = 0x18;
    }
    lVar9 = (char)fsLookupTable__system_u5926[uVar7 >> sVar8 & 0xff] + lVar9;
    puVar6 = *(undefined8 **)(param_1 + 8 + (lVar9 + 0x20c + lVar11 * 0x20) * 8);
    if (puVar6 != (undefined8 *)0x0) {
      lVar2 = puVar6[3];
      *(long *)(param_1 + 8 + (lVar9 + 0x20c + lVar11 * 0x20) * 8) = lVar2;
      if (lVar2 == 0) {
        puVar1 = (uint *)(param_1 + 0x1004 + lVar11 * 4);
        *puVar1 = *puVar1 & ~(uint)(1L << ((byte)lVar9 & 0x1f));
        if (*puVar1 == 0) {
          *(uint *)(param_1 + 0x1000) =
               *(uint *)(param_1 + 0x1000) & ~(uint)(1L << ((byte)lVar11 & 0x1f));
        }
      }
      else {
        *(undefined8 *)(lVar2 + 0x20) = 0;
      }
      *(undefined1 (*) [16])(puVar6 + 3) = (undefined1  [16])0x0;
      if ((long)(uVar3 + 0xfff) < (long)puVar6[1]) {
        uVar4 = splitChunk2__system_u6612(param_1,puVar6,uVar3);
        addChunkToMatrix__system_u6091(param_1,uVar4);
      }
      goto LAB_00104105;
    }
  }
  if ((long)uVar10 < 0x80000) {
    puVar6 = (undefined8 *)requestOsChunks__system_u6564(param_1,0x80000);
  }
  else {
    puVar6 = (undefined8 *)requestOsChunks__system_u6564(param_1,uVar3);
    if ((long)puVar6[1] <= (long)uVar3) {
      puVar6[2] = param_1;
      goto LAB_00104105;
    }
  }
  uVar4 = splitChunk2__system_u6612(param_1,puVar6,uVar3);
  addChunkToMatrix__system_u6091(param_1,uVar4);
  puVar6[2] = param_1;
LAB_00104105:
  *puVar6 = 1;
  uVar10 = (long)puVar6 >> 0x15;
  lVar9 = param_1 + (uVar10 & 0xff) * 8;
  for (puVar5 = *(undefined8 **)(lVar9 + 0x28a0); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    if (uVar10 == puVar5[1]) goto LAB_00104152;
  }
  puVar5 = (undefined8 *)llAlloc__system_u6129(param_1,0x50);
  *puVar5 = *(undefined8 *)(lVar9 + 0x28a0);
  *(undefined8 **)(lVar9 + 0x28a0) = puVar5;
  puVar5[1] = uVar10;
LAB_00104152:
  uVar7 = (uint)((long)puVar6 >> 0xc) & 0x1ff;
  puVar5[((long)(ulong)uVar7 >> 6) + 2] =
       puVar5[((long)(ulong)uVar7 >> 6) + 2] | 1L << ((byte)uVar7 & 0x3f);
  *(long *)(param_1 + 0x2880) = *(long *)(param_1 + 0x2880) - uVar3;
  return puVar6;
}



void getSmallChunk__system_u6693(undefined8 param_1)

{
  getBigChunk__system_u6665(param_1,0x1000);
  return;
}



void compensateCounters__system_u6787(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_2 + 0x28);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    do {
      while (uVar2 = uVar2 + param_3, param_2 == ((ulong)plVar1 & 0xfffffffffffff000)) {
        plVar1 = (long *)*plVar1;
        if (plVar1 == (long *)0x0) goto LAB_0010433f;
      }
      *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
LAB_0010433f:
    plVar1 = (long *)(uVar2 & 0xffffffff);
  }
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + (int)plVar1;
  *(long *)(param_1 + 0x2888) = *(long *)(param_1 + 0x2888) - uVar2;
  return;
}



void excl__system_u6374(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = *(long **)(param_1 + (param_2 >> 9 & 0xffU) * 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  do {
    if (param_2 >> 9 == plVar1[1]) {
      uVar2 = (uint)param_2 & 0x1ff;
      plVar1[((long)(ulong)uVar2 >> 6) + 2] =
           plVar1[((long)(ulong)uVar2 >> 6) + 2] & ~(1L << ((byte)uVar2 & 0x3f));
      return;
    }
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}



void freeHugeChunk__system_u6689(long param_1,void *param_2)

{
  size_t __len;
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  __len = *(size_t *)((long)param_2 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x28a0 + ((long)param_2 >> 0x15 & 0xffU) * 8);
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_00104412:
      lVar2 = *(long *)(param_1 + 0x2870);
      lVar4 = *(long *)(param_1 + 0x2878);
      if (*(long *)(param_1 + 0x2878) < lVar2) {
        lVar4 = lVar2;
      }
      *(size_t *)(param_1 + 0x2870) = lVar2 - __len;
      *(long *)(param_1 + 0x2878) = lVar4;
      munmap(param_2,__len);
      return;
    }
    if ((long)param_2 >> 0x15 == puVar1[1]) {
      uVar3 = (uint)((long)param_2 >> 0xc) & 0x1ff;
      puVar1[((long)(ulong)uVar3 >> 6) + 2] =
           puVar1[((long)(ulong)uVar3 >> 6) + 2] & ~(1L << ((byte)uVar3 & 0x3f));
      goto LAB_00104412;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



void removeChunkFromMatrix__system_u6040(long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  sbyte sVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = (uint)*(long *)(param_2 + 8);
  if (uVar5 < 0x10000) {
    lVar7 = (ulong)(0xff < uVar5) << 3;
    sVar4 = (sbyte)lVar7;
  }
  else if (uVar5 < 0x1000000) {
    sVar4 = 0x10;
    lVar7 = 0x10;
  }
  else {
    sVar4 = 0x18;
    lVar7 = 0x18;
  }
  lVar6 = (char)fsLookupTable__system_u5926[uVar5 >> sVar4 & 0xff] + lVar7 + -6;
  lVar7 = *(long *)(param_2 + 8) >>
          ((char)((char)fsLookupTable__system_u5926[uVar5 >> sVar4 & 0xff] + lVar7) - 5U & 0x3f);
  if (*(long *)(param_2 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  lVar1 = lVar7 + 0x1ec + lVar6 * 0x20;
  if ((*(long *)(param_1 + 8 + lVar1 * 8) == param_2) &&
     (lVar3 = *(long *)(param_2 + 0x18), *(long *)(param_1 + 8 + lVar1 * 8) = lVar3, lVar3 == 0)) {
    puVar2 = (uint *)(param_1 + 0x1004 + lVar6 * 4);
    *puVar2 = *puVar2 & ~(uint)(1L << ((char)lVar7 - 0x20U & 0x1f));
    if (*puVar2 == 0) {
      *(uint *)(param_1 + 0x1000) =
           *(uint *)(param_1 + 0x1000) & ~(uint)(1L << ((byte)lVar6 & 0x1f));
      *(undefined1 (*) [16])(param_2 + 0x18) = (undefined1  [16])0x0;
      return;
    }
  }
  *(undefined1 (*) [16])(param_2 + 0x18) = (undefined1  [16])0x0;
  return;
}



void freeBigChunk__system_u6641(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  
  *(long *)(param_1 + 0x2880) = *(long *)(param_1 + 0x2880) + param_2[1];
  uVar2 = *param_2 & 0xfffffffffffffffe;
  *param_2 = uVar2;
  if (uVar2 != 0) {
    puVar11 = (ulong *)((long)param_2 - uVar2);
    for (puVar1 = *(undefined8 **)(param_1 + 0x28a0 + ((long)puVar11 >> 0x15 & 0xffU) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == (long)puVar11 >> 0x15) {
        uVar2 = (ulong)((uint)((long)puVar11 >> 0xc) & 0x1ff);
        if (((((ulong)puVar1[((long)uVar2 >> 6) + 2] >> (uVar2 & 0x3f) & 1) != 0) &&
            ((*puVar11 & 1) == 0)) && (puVar11[1] - 0xfc1 < 0x3efff03f)) {
          removeChunkFromMatrix__system_u6040(param_1,puVar11);
          uVar2 = param_2[1] + puVar11[1];
          puVar11[1] = uVar2;
          puVar1 = *(undefined8 **)(param_1 + 0x28a0 + ((long)param_2 >> 0x15 & 0xffU) * 8);
          goto joined_r0x0010473e;
        }
        break;
      }
    }
  }
  uVar2 = param_2[1];
  puVar11 = param_2;
LAB_001045f4:
  pbVar9 = (byte *)((long)puVar11 + uVar2);
  uVar8 = (long)pbVar9 >> 0x15;
  uVar10 = uVar8 & 0xff;
  for (puVar1 = *(undefined8 **)(param_1 + 0x28a0 + uVar10 * 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (uVar8 == puVar1[1]) {
      uVar7 = (ulong)((uint)((long)pbVar9 >> 0xc) & 0x1ff);
      bVar5 = (byte)((long)pbVar9 >> 0xc) & 0x3f;
      lVar12 = ((long)uVar7 >> 6) + 2;
      if (((((ulong)puVar1[lVar12] >> (uVar7 & 0x3f) & 1) != 0) && ((*pbVar9 & 1) == 0)) &&
         ((0xfc0 < *(long *)(pbVar9 + 8) && ((long)uVar2 < 0x3f000000)))) {
        removeChunkFromMatrix__system_u6040(param_1,pbVar9);
        uVar2 = *(long *)(pbVar9 + 8) + puVar11[1];
        puVar11[1] = uVar2;
        puVar1 = *(undefined8 **)(param_1 + 0x28a0 + uVar10 * 8);
        goto joined_r0x001046a2;
      }
      break;
    }
  }
LAB_001046f7:
  addChunkToMatrix__system_u6091(param_1,puVar11);
  return;
joined_r0x0010473e:
  if (puVar1 == (undefined8 *)0x0) goto LAB_00104787;
  if ((long)param_2 >> 0x15 == puVar1[1]) {
    uVar6 = (uint)((long)param_2 >> 0xc) & 0x1ff;
    puVar1[((long)(ulong)uVar6 >> 6) + 2] =
         puVar1[((long)(ulong)uVar6 >> 6) + 2] & ~(1L << ((byte)uVar6 & 0x3f));
    uVar2 = puVar11[1];
    goto LAB_00104787;
  }
  puVar1 = (undefined8 *)*puVar1;
  goto joined_r0x0010473e;
LAB_00104787:
  if (0x3f000000 < (long)uVar2) {
    puVar4 = (ulong *)splitChunk2__system_u6612(param_1,puVar11,0x3f000000);
    addChunkToMatrix__system_u6091(param_1,puVar11);
    uVar2 = puVar4[1];
    puVar11 = puVar4;
  }
  goto LAB_001045f4;
joined_r0x001046a2:
  if (puVar1 == (undefined8 *)0x0) goto LAB_001046d3;
  if (uVar8 == puVar1[1]) {
    puVar1[lVar12] = puVar1[lVar12] & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
    uVar2 = puVar11[1];
    goto LAB_001046d3;
  }
  puVar1 = (undefined8 *)*puVar1;
  goto joined_r0x001046a2;
LAB_001046d3:
  if (0x3f000000 < (long)uVar2) {
    uVar3 = splitChunk2__system_u6612(param_1,puVar11,0x3f000000);
    addChunkToMatrix__system_u6091(param_1,uVar3);
  }
  goto LAB_001046f7;
}



void deallocBigChunk__system_u6711(long param_1,void *param_2)

{
  size_t __len;
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  *(long *)(param_1 + 0x2888) = *(long *)(param_1 + 0x2888) - *(long *)((long)param_2 + 8);
  __len = *(size_t *)((long)param_2 + 8);
  if ((long)__len < 0x3f000001) {
    freeBigChunk__system_u6641(param_1,param_2);
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28a0 + ((long)param_2 >> 0x15 & 0xffU) * 8);
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_0010480f:
      lVar2 = *(long *)(param_1 + 0x2870);
      lVar4 = *(long *)(param_1 + 0x2878);
      if (*(long *)(param_1 + 0x2878) < lVar2) {
        lVar4 = lVar2;
      }
      *(size_t *)(param_1 + 0x2870) = lVar2 - __len;
      *(long *)(param_1 + 0x2878) = lVar4;
      munmap(param_2,__len);
      return;
    }
    if ((long)param_2 >> 0x15 == puVar1[1]) {
      uVar3 = (uint)((long)param_2 >> 0xc) & 0x1ff;
      puVar1[((long)(ulong)uVar3 >> 6) + 2] =
           puVar1[((long)(ulong)uVar3 >> 6) + 2] & ~(1L << ((byte)uVar3 & 0x3f));
      goto LAB_0010480f;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



void freeDeferredObjects__system_u6822(long param_1,void *param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  size_t __len;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = 0x15;
  do {
    pvVar3 = *(void **)((long)param_2 + 0x18);
    *(undefined8 *)((long)param_2 + 0x18) = 0;
    *(long *)(param_1 + 0x2888) = *(long *)(param_1 + 0x2888) - *(long *)((long)param_2 + 8);
    __len = *(size_t *)((long)param_2 + 8);
    if ((long)__len < 0x3f000001) {
      freeBigChunk__system_u6641(param_1,param_2);
    }
    else {
      for (puVar4 = *(undefined8 **)(param_1 + 0x28a0 + ((long)param_2 >> 0x15 & 0xffU) * 8);
          puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
        if ((long)param_2 >> 0x15 == puVar4[1]) {
          uVar6 = (uint)((long)param_2 >> 0xc) & 0x1ff;
          puVar4[((long)(ulong)uVar6 >> 6) + 2] =
               puVar4[((long)(ulong)uVar6 >> 6) + 2] & ~(1L << ((byte)uVar6 & 0x3f));
          break;
        }
      }
      lVar5 = *(long *)(param_1 + 0x2870);
      lVar7 = *(long *)(param_1 + 0x2878);
      if (*(long *)(param_1 + 0x2878) < lVar5) {
        lVar7 = lVar5;
      }
      *(size_t *)(param_1 + 0x2870) = lVar5 - __len;
      *(long *)(param_1 + 0x2878) = lVar7;
      munmap(param_2,__len);
    }
    if (lVar8 == 1) {
      if (pvVar3 == (void *)0x0) {
        return;
      }
      plVar2 = (long *)(param_1 + 0x2898);
      plVar1 = (long *)((long)pvVar3 + 0x18);
      while( true ) {
        *plVar1 = *plVar2;
        lVar5 = *plVar1;
        LOCK();
        lVar8 = *plVar2;
        bVar9 = lVar5 == lVar8;
        if (bVar9) {
          *plVar2 = (long)pvVar3;
          lVar8 = lVar5;
        }
        UNLOCK();
        if (bVar9) break;
        *plVar1 = lVar8;
      }
      return;
    }
    lVar8 = lVar8 + -1;
    param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return;
    }
  } while( true );
}



undefined8 * getHugeChunk__system_u6685(long param_1,size_t param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  puVar2 = (undefined8 *)mmap((void *)0x0,param_2,3,0x22,-1,0);
  if (0xfffffffffffffffd < (long)puVar2 - 1U) {
                    // WARNING: Subroutine does not return
    raiseOutOfMem__system_u5787();
  }
  *(long *)(param_1 + 0x2870) = *(long *)(param_1 + 0x2870) + param_2;
  puVar2[1] = param_2;
  uVar5 = (long)puVar2 >> 0x15;
  puVar2[3] = 0;
  puVar2[4] = 0;
  lVar1 = param_1 + (uVar5 & 0xff) * 8;
  *puVar2 = 1;
  puVar2[2] = param_1;
  for (puVar3 = *(undefined8 **)(lVar1 + 0x28a0); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    if (uVar5 == puVar3[1]) goto LAB_00104a4e;
  }
  puVar3 = (undefined8 *)llAlloc__system_u6129(param_1,0x50);
  *puVar3 = *(undefined8 *)(lVar1 + 0x28a0);
  *(undefined8 **)(lVar1 + 0x28a0) = puVar3;
  puVar3[1] = uVar5;
LAB_00104a4e:
  uVar4 = (uint)((long)puVar2 >> 0xc) & 0x1ff;
  puVar3[((long)(ulong)uVar4 >> 6) + 2] =
       puVar3[((long)(ulong)uVar4 >> 6) + 2] | 1L << ((byte)uVar4 & 0x3f);
  return puVar2;
}



long * rawAlloc__system_u6854(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar10 = param_2 + 0xfU & 0xfffffffffffffff0;
  if ((long)uVar10 < 0xfc1) {
    lVar4 = (long)(param_2 + 0xfU) >> 4;
    puVar1 = (ulong *)(param_1 + lVar4 * 8);
    uVar6 = *puVar1;
    iVar3 = (int)uVar10;
    if (uVar6 == 0) {
      uVar6 = getBigChunk__system_u6665(param_1,0x1000);
      *(undefined8 *)(uVar6 + 0x28) = 0;
      *(undefined8 *)(uVar6 + 0x38) = 0;
      *(ulong *)(uVar6 + 8) = uVar10;
      *(int *)(uVar6 + 0x34) = iVar3;
      *(int *)(uVar6 + 0x30) = 0xfc0 - iVar3;
      *(undefined1 (*) [16])(uVar6 + 0x18) = (undefined1  [16])0x0;
      LOCK();
      plVar8 = (long *)(param_1 + (lVar4 + 0x100) * 8);
      plVar9 = (long *)*plVar8;
      *plVar8 = 0;
      UNLOCK();
      lVar4 = 0;
      *(long **)(uVar6 + 0x28) = plVar9;
      if (plVar9 == (long *)0x0) {
        iVar3 = 0;
      }
      else {
        do {
          while (lVar4 = lVar4 + uVar10, uVar6 == ((ulong)plVar9 & 0xfffffffffffff000)) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_00104cff;
          }
          *(long *)(uVar6 + 0x38) = *(long *)(uVar6 + 0x38) + 1;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
LAB_00104cff:
        iVar3 = (int)lVar4;
      }
      *(int *)(uVar6 + 0x30) = *(int *)(uVar6 + 0x30) + iVar3;
      lVar4 = *(long *)(param_1 + 0x2888) - lVar4;
      *(long *)(param_1 + 0x2888) = lVar4;
      if ((long)uVar10 <= (long)*(int *)(uVar6 + 0x30)) {
        uVar7 = *puVar1;
        *(ulong *)(uVar6 + 0x18) = uVar7;
        if (uVar7 != 0) {
          *(ulong *)(uVar7 + 0x20) = uVar6;
        }
        *puVar1 = uVar6;
        lVar4 = *(long *)(param_1 + 0x2888);
      }
      plVar8 = (long *)(uVar6 + 0x40);
    }
    else {
      plVar8 = *(long **)(uVar6 + 0x28);
      if (plVar8 == (long *)0x0) {
        *(int *)(uVar6 + 0x30) = *(int *)(uVar6 + 0x30) - iVar3;
        plVar8 = (long *)(uVar6 + 0x40 + (ulong)*(uint *)(uVar6 + 0x34));
        *(uint *)(uVar6 + 0x34) = *(uint *)(uVar6 + 0x34) + iVar3;
LAB_00104bd3:
        LOCK();
        plVar9 = (long *)(param_1 + (lVar4 + 0x100) * 8);
        plVar5 = (long *)*plVar9;
        *plVar9 = 0;
        UNLOCK();
        uVar7 = 0;
        *(long **)(uVar6 + 0x28) = plVar5;
        if (plVar5 != (long *)0x0) {
          do {
            while (uVar7 = uVar7 + uVar10, uVar6 == ((ulong)plVar5 & 0xfffffffffffff000)) {
              plVar5 = (long *)*plVar5;
              if (plVar5 == (long *)0x0) goto LAB_00104c1f;
            }
            *(long *)(uVar6 + 0x38) = *(long *)(uVar6 + 0x38) + 1;
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
LAB_00104c1f:
          plVar5 = (long *)(uVar7 & 0xffffffff);
        }
        *(int *)(uVar6 + 0x30) = *(int *)(uVar6 + 0x30) + (int)plVar5;
        *(long *)(param_1 + 0x2888) = *(long *)(param_1 + 0x2888) - uVar7;
        iVar3 = *(int *)(uVar6 + 0x30);
      }
      else {
        lVar2 = *plVar8;
        *(long *)(uVar6 + 0x28) = lVar2;
        if (uVar6 != ((ulong)plVar8 & 0xfffffffffffff000)) {
          *(long *)(uVar6 + 0x38) = *(long *)(uVar6 + 0x38) + -1;
        }
        iVar3 = *(int *)(uVar6 + 0x30) - iVar3;
        *(int *)(uVar6 + 0x30) = iVar3;
        if (lVar2 == 0) goto LAB_00104bd3;
      }
      if ((long)iVar3 < (long)uVar10) {
        uVar7 = *(ulong *)(uVar6 + 0x18);
        if (uVar6 == *puVar1) {
          *puVar1 = uVar7;
          if (uVar7 != 0) {
            *(undefined8 *)(uVar7 + 0x20) = 0;
          }
        }
        else {
          *(ulong *)(*(long *)(uVar6 + 0x20) + 0x18) = uVar7;
          if (uVar7 != 0) {
            *(undefined8 *)(uVar7 + 0x20) = *(undefined8 *)(uVar6 + 0x20);
          }
        }
        *(undefined1 (*) [16])(uVar6 + 0x18) = (undefined1  [16])0x0;
      }
      lVar4 = *(long *)(param_1 + 0x2888);
    }
    lVar4 = uVar10 + lVar4;
    goto LAB_00104b62;
  }
  LOCK();
  lVar4 = *(long *)(param_1 + 0x2898);
  *(long *)(param_1 + 0x2898) = 0;
  UNLOCK();
  if (lVar4 == 0) {
    if (param_2 + 0x30 < 0x3f000001) goto LAB_00104c38;
LAB_00104ba9:
    lVar4 = getHugeChunk__system_u6685();
  }
  else {
    freeDeferredObjects__system_u6822();
    if (0x3f000000 < param_2 + 0x30) goto LAB_00104ba9;
LAB_00104c38:
    lVar4 = getBigChunk__system_u6665(param_1);
  }
  plVar8 = (long *)(lVar4 + 0x30);
  lVar4 = *(long *)(lVar4 + 8) + *(long *)(param_1 + 0x2888);
LAB_00104b62:
  *(long *)(param_1 + 0x2888) = lVar4;
  return plVar8;
}



long * alloc__system_u7112(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar10 = param_2 + 0xfU & 0xfffffffffffffff0;
  if ((long)uVar10 < 0xfc1) {
    lVar4 = (long)(param_2 + 0xfU) >> 4;
    puVar1 = (ulong *)(param_1 + lVar4 * 8);
    uVar6 = *puVar1;
    iVar3 = (int)uVar10;
    if (uVar6 == 0) {
      uVar6 = getBigChunk__system_u6665(param_1,0x1000);
      *(undefined8 *)(uVar6 + 0x28) = 0;
      *(undefined8 *)(uVar6 + 0x38) = 0;
      *(ulong *)(uVar6 + 8) = uVar10;
      *(int *)(uVar6 + 0x34) = iVar3;
      *(int *)(uVar6 + 0x30) = 0xfc0 - iVar3;
      *(undefined1 (*) [16])(uVar6 + 0x18) = (undefined1  [16])0x0;
      LOCK();
      plVar8 = (long *)(param_1 + (lVar4 + 0x100) * 8);
      plVar9 = (long *)*plVar8;
      *plVar8 = 0;
      UNLOCK();
      lVar4 = 0;
      *(long **)(uVar6 + 0x28) = plVar9;
      if (plVar9 == (long *)0x0) {
        iVar3 = 0;
      }
      else {
        do {
          while (lVar4 = lVar4 + uVar10, uVar6 == ((ulong)plVar9 & 0xfffffffffffff000)) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_00104fdf;
          }
          *(long *)(uVar6 + 0x38) = *(long *)(uVar6 + 0x38) + 1;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
LAB_00104fdf:
        iVar3 = (int)lVar4;
      }
      *(int *)(uVar6 + 0x30) = *(int *)(uVar6 + 0x30) + iVar3;
      lVar4 = *(long *)(param_1 + 0x2888) - lVar4;
      *(long *)(param_1 + 0x2888) = lVar4;
      if ((long)uVar10 <= (long)*(int *)(uVar6 + 0x30)) {
        uVar7 = *puVar1;
        *(ulong *)(uVar6 + 0x18) = uVar7;
        if (uVar7 != 0) {
          *(ulong *)(uVar7 + 0x20) = uVar6;
        }
        *puVar1 = uVar6;
        lVar4 = *(long *)(param_1 + 0x2888);
      }
      plVar8 = (long *)(uVar6 + 0x40);
    }
    else {
      plVar8 = *(long **)(uVar6 + 0x28);
      if (plVar8 == (long *)0x0) {
        *(int *)(uVar6 + 0x30) = *(int *)(uVar6 + 0x30) - iVar3;
        plVar8 = (long *)(uVar6 + 0x40 + (ulong)*(uint *)(uVar6 + 0x34));
        *(uint *)(uVar6 + 0x34) = *(uint *)(uVar6 + 0x34) + iVar3;
LAB_00104eb3:
        LOCK();
        plVar9 = (long *)(param_1 + (lVar4 + 0x100) * 8);
        plVar5 = (long *)*plVar9;
        *plVar9 = 0;
        UNLOCK();
        uVar7 = 0;
        *(long **)(uVar6 + 0x28) = plVar5;
        if (plVar5 != (long *)0x0) {
          do {
            while (uVar7 = uVar7 + uVar10, uVar6 == ((ulong)plVar5 & 0xfffffffffffff000)) {
              plVar5 = (long *)*plVar5;
              if (plVar5 == (long *)0x0) goto LAB_00104eff;
            }
            *(long *)(uVar6 + 0x38) = *(long *)(uVar6 + 0x38) + 1;
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
LAB_00104eff:
          plVar5 = (long *)(uVar7 & 0xffffffff);
        }
        *(int *)(uVar6 + 0x30) = *(int *)(uVar6 + 0x30) + (int)plVar5;
        *(long *)(param_1 + 0x2888) = *(long *)(param_1 + 0x2888) - uVar7;
        iVar3 = *(int *)(uVar6 + 0x30);
      }
      else {
        lVar2 = *plVar8;
        *(long *)(uVar6 + 0x28) = lVar2;
        if (uVar6 != ((ulong)plVar8 & 0xfffffffffffff000)) {
          *(long *)(uVar6 + 0x38) = *(long *)(uVar6 + 0x38) + -1;
        }
        iVar3 = *(int *)(uVar6 + 0x30) - iVar3;
        *(int *)(uVar6 + 0x30) = iVar3;
        if (lVar2 == 0) goto LAB_00104eb3;
      }
      if ((long)iVar3 < (long)uVar10) {
        uVar7 = *(ulong *)(uVar6 + 0x18);
        if (uVar6 == *puVar1) {
          *puVar1 = uVar7;
          if (uVar7 != 0) {
            *(undefined8 *)(uVar7 + 0x20) = 0;
          }
        }
        else {
          *(ulong *)(*(long *)(uVar6 + 0x20) + 0x18) = uVar7;
          if (uVar7 != 0) {
            *(undefined8 *)(uVar7 + 0x20) = *(undefined8 *)(uVar6 + 0x20);
          }
        }
        *(undefined1 (*) [16])(uVar6 + 0x18) = (undefined1  [16])0x0;
      }
      lVar4 = *(long *)(param_1 + 0x2888);
    }
    lVar4 = uVar10 + lVar4;
    goto LAB_00104e42;
  }
  LOCK();
  lVar4 = *(long *)(param_1 + 0x2898);
  *(long *)(param_1 + 0x2898) = 0;
  UNLOCK();
  if (lVar4 == 0) {
    if (param_2 + 0x30 < 0x3f000001) goto LAB_00104f18;
LAB_00104e89:
    lVar4 = getHugeChunk__system_u6685();
  }
  else {
    freeDeferredObjects__system_u6822();
    if (0x3f000000 < param_2 + 0x30) goto LAB_00104e89;
LAB_00104f18:
    lVar4 = getBigChunk__system_u6665(param_1);
  }
  plVar8 = (long *)(lVar4 + 0x30);
  lVar4 = *(long *)(lVar4 + 8) + *(long *)(param_1 + 0x2888);
LAB_00104e42:
  *(long *)(param_1 + 0x2888) = lVar4;
  return plVar8;
}



long * allocImpl__system_u1747(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *in_FS_OFFSET;
  
  uVar9 = param_1 + 0xfU & 0xfffffffffffffff0;
  if (0xfc0 < (long)uVar9) {
    lVar2 = *in_FS_OFFSET;
    LOCK();
    plVar6 = (long *)(lVar2 + -0xa68);
    lVar7 = *plVar6;
    *plVar6 = 0;
    UNLOCK();
    if (lVar7 != 0) {
      freeDeferredObjects__system_u6822();
    }
    if (param_1 + 0x30 < 0x3f000001) {
      lVar7 = getBigChunk__system_u6665(lVar2 + -0x3300);
    }
    else {
      lVar7 = getHugeChunk__system_u6685();
    }
    plVar6 = (long *)(lVar7 + 0x30);
    lVar7 = *(long *)(lVar7 + 8) + in_FS_OFFSET[-0x14f];
    goto LAB_00105128;
  }
  lVar2 = (long)(param_1 + 0xfU) >> 4;
  uVar4 = in_FS_OFFSET[lVar2 + -0x660];
  iVar1 = (int)uVar9;
  if (uVar4 == 0) {
    lVar7 = *in_FS_OFFSET;
    uVar4 = getBigChunk__system_u6665(lVar7 + -0x3300,0x1000);
    *(undefined8 *)(uVar4 + 0x28) = 0;
    *(int *)(uVar4 + 0x30) = 0xfc0 - iVar1;
    *(undefined8 *)(uVar4 + 0x38) = 0;
    *(ulong *)(uVar4 + 8) = uVar9;
    *(int *)(uVar4 + 0x34) = iVar1;
    *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    LOCK();
    plVar6 = (long *)(lVar2 * 8 + 0x800 + lVar7 + -0x3300);
    plVar8 = (long *)*plVar6;
    *plVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    *(long **)(uVar4 + 0x28) = plVar8;
    if (plVar8 == (long *)0x0) {
      iVar1 = 0;
    }
    else {
      do {
        while (lVar7 = lVar7 + uVar9, uVar4 == ((ulong)plVar8 & 0xfffffffffffff000)) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_001052df;
        }
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
LAB_001052df:
      iVar1 = (int)lVar7;
    }
    *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + iVar1;
    lVar7 = in_FS_OFFSET[-0x14f] - lVar7;
    in_FS_OFFSET[-0x14f] = lVar7;
    if ((long)uVar9 <= (long)*(int *)(uVar4 + 0x30)) {
      lVar7 = in_FS_OFFSET[lVar2 + -0x660];
      *(long *)(uVar4 + 0x18) = lVar7;
      if (lVar7 != 0) {
        *(ulong *)(lVar7 + 0x20) = uVar4;
      }
      in_FS_OFFSET[lVar2 + -0x660] = uVar4;
      lVar7 = in_FS_OFFSET[-0x14f];
    }
    plVar6 = (long *)(uVar4 + 0x40);
  }
  else {
    plVar6 = *(long **)(uVar4 + 0x28);
    if (plVar6 == (long *)0x0) {
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) - iVar1;
      plVar6 = (long *)(uVar4 + 0x40 + (ulong)*(uint *)(uVar4 + 0x34));
      *(uint *)(uVar4 + 0x34) = *(uint *)(uVar4 + 0x34) + iVar1;
LAB_001051ab:
      LOCK();
      plVar8 = (long *)(lVar2 * 8 + *in_FS_OFFSET + -0x2b00);
      plVar3 = (long *)*plVar8;
      *plVar8 = 0;
      UNLOCK();
      uVar5 = 0;
      *(long **)(uVar4 + 0x28) = plVar3;
      if (plVar3 != (long *)0x0) {
        do {
          while (uVar5 = uVar5 + uVar9, uVar4 == ((ulong)plVar3 & 0xfffffffffffff000)) {
            plVar3 = (long *)*plVar3;
            if (plVar3 == (long *)0x0) goto LAB_001051ff;
          }
          *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
LAB_001051ff:
        plVar3 = (long *)(uVar5 & 0xffffffff);
      }
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + (int)plVar3;
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - uVar5;
      iVar1 = *(int *)(uVar4 + 0x30);
    }
    else {
      lVar7 = *plVar6;
      *(long *)(uVar4 + 0x28) = lVar7;
      if (uVar4 != ((ulong)plVar6 & 0xfffffffffffff000)) {
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + -1;
      }
      iVar1 = *(int *)(uVar4 + 0x30) - iVar1;
      *(int *)(uVar4 + 0x30) = iVar1;
      if (lVar7 == 0) goto LAB_001051ab;
    }
    if ((long)iVar1 < (long)uVar9) {
      lVar7 = *(long *)(uVar4 + 0x18);
      if (uVar4 == in_FS_OFFSET[lVar2 + -0x660]) {
        in_FS_OFFSET[lVar2 + -0x660] = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x20) = 0;
        }
      }
      else {
        *(long *)(*(long *)(uVar4 + 0x20) + 0x18) = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
        }
      }
      *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    }
    lVar7 = in_FS_OFFSET[-0x14f];
  }
  lVar7 = uVar9 + lVar7;
LAB_00105128:
  in_FS_OFFSET[-0x14f] = lVar7;
  return plVar6;
}



long * allocSharedImpl(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *in_FS_OFFSET;
  
  uVar9 = param_1 + 0xfU & 0xfffffffffffffff0;
  if (0xfc0 < (long)uVar9) {
    lVar2 = *in_FS_OFFSET;
    LOCK();
    plVar6 = (long *)(lVar2 + -0xa68);
    lVar7 = *plVar6;
    *plVar6 = 0;
    UNLOCK();
    if (lVar7 != 0) {
      freeDeferredObjects__system_u6822();
    }
    if (param_1 + 0x30 < 0x3f000001) {
      lVar7 = getBigChunk__system_u6665(lVar2 + -0x3300);
    }
    else {
      lVar7 = getHugeChunk__system_u6685();
    }
    plVar6 = (long *)(lVar7 + 0x30);
    lVar7 = *(long *)(lVar7 + 8) + in_FS_OFFSET[-0x14f];
    goto LAB_00105438;
  }
  lVar2 = (long)(param_1 + 0xfU) >> 4;
  uVar4 = in_FS_OFFSET[lVar2 + -0x660];
  iVar1 = (int)uVar9;
  if (uVar4 == 0) {
    lVar7 = *in_FS_OFFSET;
    uVar4 = getBigChunk__system_u6665(lVar7 + -0x3300,0x1000);
    *(undefined8 *)(uVar4 + 0x28) = 0;
    *(int *)(uVar4 + 0x30) = 0xfc0 - iVar1;
    *(undefined8 *)(uVar4 + 0x38) = 0;
    *(ulong *)(uVar4 + 8) = uVar9;
    *(int *)(uVar4 + 0x34) = iVar1;
    *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    LOCK();
    plVar6 = (long *)(lVar2 * 8 + 0x800 + lVar7 + -0x3300);
    plVar8 = (long *)*plVar6;
    *plVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    *(long **)(uVar4 + 0x28) = plVar8;
    if (plVar8 == (long *)0x0) {
      iVar1 = 0;
    }
    else {
      do {
        while (lVar7 = lVar7 + uVar9, uVar4 == ((ulong)plVar8 & 0xfffffffffffff000)) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_001055ff;
        }
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
LAB_001055ff:
      iVar1 = (int)lVar7;
    }
    *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + iVar1;
    lVar7 = in_FS_OFFSET[-0x14f] - lVar7;
    in_FS_OFFSET[-0x14f] = lVar7;
    if ((long)uVar9 <= (long)*(int *)(uVar4 + 0x30)) {
      lVar7 = in_FS_OFFSET[lVar2 + -0x660];
      *(long *)(uVar4 + 0x18) = lVar7;
      if (lVar7 != 0) {
        *(ulong *)(lVar7 + 0x20) = uVar4;
      }
      in_FS_OFFSET[lVar2 + -0x660] = uVar4;
      lVar7 = in_FS_OFFSET[-0x14f];
    }
    plVar6 = (long *)(uVar4 + 0x40);
  }
  else {
    plVar6 = *(long **)(uVar4 + 0x28);
    if (plVar6 == (long *)0x0) {
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) - iVar1;
      plVar6 = (long *)(uVar4 + 0x40 + (ulong)*(uint *)(uVar4 + 0x34));
      *(uint *)(uVar4 + 0x34) = *(uint *)(uVar4 + 0x34) + iVar1;
LAB_001054bb:
      LOCK();
      plVar8 = (long *)(lVar2 * 8 + *in_FS_OFFSET + -0x2b00);
      plVar3 = (long *)*plVar8;
      *plVar8 = 0;
      UNLOCK();
      uVar5 = 0;
      *(long **)(uVar4 + 0x28) = plVar3;
      if (plVar3 != (long *)0x0) {
        do {
          while (uVar5 = uVar5 + uVar9, uVar4 == ((ulong)plVar3 & 0xfffffffffffff000)) {
            plVar3 = (long *)*plVar3;
            if (plVar3 == (long *)0x0) goto LAB_0010551f;
          }
          *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
LAB_0010551f:
        plVar3 = (long *)(uVar5 & 0xffffffff);
      }
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + (int)plVar3;
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - uVar5;
      iVar1 = *(int *)(uVar4 + 0x30);
    }
    else {
      lVar7 = *plVar6;
      *(long *)(uVar4 + 0x28) = lVar7;
      if (uVar4 != ((ulong)plVar6 & 0xfffffffffffff000)) {
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + -1;
      }
      iVar1 = *(int *)(uVar4 + 0x30) - iVar1;
      *(int *)(uVar4 + 0x30) = iVar1;
      if (lVar7 == 0) goto LAB_001054bb;
    }
    if ((long)iVar1 < (long)uVar9) {
      lVar7 = *(long *)(uVar4 + 0x18);
      if (uVar4 == in_FS_OFFSET[lVar2 + -0x660]) {
        in_FS_OFFSET[lVar2 + -0x660] = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x20) = 0;
        }
      }
      else {
        *(long *)(*(long *)(uVar4 + 0x20) + 0x18) = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
        }
      }
      *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    }
    lVar7 = in_FS_OFFSET[-0x14f];
  }
  lVar7 = uVar9 + lVar7;
LAB_00105438:
  in_FS_OFFSET[-0x14f] = lVar7;
  return plVar6;
}



void allocShared0Impl__system_u1762(size_t param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *in_FS_OFFSET;
  
  uVar8 = param_1 + 0xf & 0xfffffffffffffff0;
  if (0xfc0 < (long)uVar8) {
    lVar9 = *in_FS_OFFSET;
    LOCK();
    plVar5 = (long *)(lVar9 + -0xa68);
    lVar4 = *plVar5;
    *plVar5 = 0;
    UNLOCK();
    if (lVar4 != 0) {
      freeDeferredObjects__system_u6822();
    }
    if ((long)(param_1 + 0x30) < 0x3f000001) {
      lVar4 = getBigChunk__system_u6665(lVar9 + -0x3300);
    }
    else {
      lVar4 = getHugeChunk__system_u6685();
    }
    plVar5 = (long *)(lVar4 + 0x30);
    lVar4 = *(long *)(lVar4 + 8) + in_FS_OFFSET[-0x14f];
    goto LAB_00105756;
  }
  lVar9 = (long)(param_1 + 0xf) >> 4;
  uVar3 = in_FS_OFFSET[lVar9 + -0x660];
  iVar1 = (int)uVar8;
  if (uVar3 == 0) {
    lVar4 = *in_FS_OFFSET;
    uVar3 = getBigChunk__system_u6665(lVar4 + -0x3300);
    *(undefined8 *)(uVar3 + 0x28) = 0;
    *(undefined8 *)(uVar3 + 0x38) = 0;
    *(ulong *)(uVar3 + 8) = uVar8;
    *(int *)(uVar3 + 0x34) = iVar1;
    *(undefined1 (*) [16])(uVar3 + 0x18) = (undefined1  [16])0x0;
    *(int *)(uVar3 + 0x30) = 0xfc0 - iVar1;
    LOCK();
    plVar5 = (long *)(lVar9 * 8 + 0x800 + lVar4 + -0x3300);
    plVar7 = (long *)*plVar5;
    *plVar5 = 0;
    UNLOCK();
    lVar4 = 0;
    *(long **)(uVar3 + 0x28) = plVar7;
    if (plVar7 == (long *)0x0) {
      iVar1 = 0;
    }
    else {
      do {
        while (lVar4 = lVar4 + uVar8, uVar3 == ((ulong)plVar7 & 0xfffffffffffff000)) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0010591f;
        }
        *(long *)(uVar3 + 0x38) = *(long *)(uVar3 + 0x38) + 1;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
LAB_0010591f:
      iVar1 = (int)lVar4;
    }
    *(int *)(uVar3 + 0x30) = *(int *)(uVar3 + 0x30) + iVar1;
    lVar4 = in_FS_OFFSET[-0x14f] - lVar4;
    in_FS_OFFSET[-0x14f] = lVar4;
    if ((long)uVar8 <= (long)*(int *)(uVar3 + 0x30)) {
      lVar4 = in_FS_OFFSET[lVar9 + -0x660];
      *(long *)(uVar3 + 0x18) = lVar4;
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0x20) = uVar3;
      }
      in_FS_OFFSET[lVar9 + -0x660] = uVar3;
      lVar4 = in_FS_OFFSET[-0x14f];
    }
    plVar5 = (long *)(uVar3 + 0x40);
  }
  else {
    plVar5 = *(long **)(uVar3 + 0x28);
    if (plVar5 == (long *)0x0) {
      *(int *)(uVar3 + 0x30) = *(int *)(uVar3 + 0x30) - iVar1;
      plVar5 = (long *)(uVar3 + 0x40 + (ulong)*(uint *)(uVar3 + 0x34));
      *(uint *)(uVar3 + 0x34) = *(uint *)(uVar3 + 0x34) + iVar1;
LAB_001057e3:
      LOCK();
      plVar7 = (long *)(lVar9 * 8 + *in_FS_OFFSET + -0x2b00);
      plVar2 = (long *)*plVar7;
      *plVar7 = 0;
      UNLOCK();
      uVar6 = 0;
      *(long **)(uVar3 + 0x28) = plVar2;
      if (plVar2 != (long *)0x0) {
        do {
          while (uVar6 = uVar6 + uVar8, uVar3 == ((ulong)plVar2 & 0xfffffffffffff000)) {
            plVar2 = (long *)*plVar2;
            if (plVar2 == (long *)0x0) goto LAB_0010583f;
          }
          *(long *)(uVar3 + 0x38) = *(long *)(uVar3 + 0x38) + 1;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
LAB_0010583f:
        plVar2 = (long *)(uVar6 & 0xffffffff);
      }
      *(int *)(uVar3 + 0x30) = *(int *)(uVar3 + 0x30) + (int)plVar2;
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - uVar6;
      iVar1 = *(int *)(uVar3 + 0x30);
    }
    else {
      lVar4 = *plVar5;
      *(long *)(uVar3 + 0x28) = lVar4;
      if (uVar3 != ((ulong)plVar5 & 0xfffffffffffff000)) {
        *(long *)(uVar3 + 0x38) = *(long *)(uVar3 + 0x38) + -1;
      }
      iVar1 = *(int *)(uVar3 + 0x30) - iVar1;
      *(int *)(uVar3 + 0x30) = iVar1;
      if (lVar4 == 0) goto LAB_001057e3;
    }
    if ((long)iVar1 < (long)uVar8) {
      lVar4 = *(long *)(uVar3 + 0x18);
      if (uVar3 == in_FS_OFFSET[lVar9 + -0x660]) {
        in_FS_OFFSET[lVar9 + -0x660] = lVar4;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x20) = 0;
        }
      }
      else {
        *(long *)(*(long *)(uVar3 + 0x20) + 0x18) = lVar4;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(uVar3 + 0x20);
        }
      }
      *(undefined1 (*) [16])(uVar3 + 0x18) = (undefined1  [16])0x0;
    }
    lVar4 = in_FS_OFFSET[-0x14f];
  }
  lVar4 = uVar8 + lVar4;
LAB_00105756:
  in_FS_OFFSET[-0x14f] = lVar4;
  memset(plVar5,0,param_1);
  return;
}



long ptrSize__system_u7100(ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)((param_1 & 0xfffffffffffff000) + 8);
  if (0xfc0 < lVar1) {
    lVar1 = lVar1 + -0x30;
  }
  return lVar1;
}



void rawDealloc__system_u7030(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  size_t __len;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  void *__addr;
  bool bVar10;
  
  __addr = (void *)((ulong)param_2 & 0xfffffffffffff000);
  lVar5 = *(long *)((long)__addr + 8);
  if (lVar5 < 0xfc1) {
    lVar6 = *(long *)((long)__addr + 0x10);
    lVar8 = lVar5 + 0xf;
    if (-1 < lVar5) {
      lVar8 = lVar5;
    }
    if (lVar6 == param_1) {
      *(long *)(lVar6 + 0x2888) = *(long *)(lVar6 + 0x2888) - lVar5;
      plVar1 = (long *)(lVar6 + (lVar8 >> 4) * 8);
      pvVar3 = (void *)*plVar1;
      iVar9 = (int)lVar5;
      if ((pvVar3 != __addr) && (pvVar3 != (void *)0x0)) {
        *param_2 = *(long *)((long)pvVar3 + 0x28);
        *(long **)((long)pvVar3 + 0x28) = param_2;
        *(int *)((long)pvVar3 + 0x30) = *(int *)((long)pvVar3 + 0x30) + iVar9;
        *(long *)((long)pvVar3 + 0x38) = *(long *)((long)pvVar3 + 0x38) + 1;
        return;
      }
      *param_2 = *(long *)((long)__addr + 0x28);
      *(long **)((long)__addr + 0x28) = param_2;
      if (*(int *)((long)__addr + 0x30) < lVar5) {
        lVar5 = *plVar1;
        *(long *)((long)__addr + 0x18) = lVar5;
        if (lVar5 != 0) {
          *(void **)(lVar5 + 0x20) = __addr;
        }
        *plVar1 = (long)__addr;
        *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar9;
        return;
      }
      iVar9 = *(int *)((long)__addr + 0x30) + iVar9;
      *(int *)((long)__addr + 0x30) = iVar9;
      if ((iVar9 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
        lVar5 = *(long *)((long)__addr + 0x18);
        if (__addr == (void *)*plVar1) {
          *plVar1 = lVar5;
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x20) = 0;
          }
        }
        else {
          *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar5;
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
          }
        }
        *(undefined8 *)((long)__addr + 8) = 0x1000;
        *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
        freeBigChunk__system_u6641(param_1,__addr);
        return;
      }
    }
    else {
      lVar5 = (lVar8 >> 4) * 8 + 0x800;
      while( true ) {
        *param_2 = *(long *)(lVar6 + lVar5);
        lVar8 = *param_2;
        plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar5);
        LOCK();
        lVar6 = *plVar1;
        bVar10 = lVar8 == lVar6;
        if (bVar10) {
          *plVar1 = (long)param_2;
          lVar6 = lVar8;
        }
        UNLOCK();
        if (bVar10) break;
        *param_2 = lVar6;
        lVar6 = *(long *)((long)__addr + 0x10);
      }
    }
  }
  else {
    lVar6 = *(long *)((long)__addr + 0x10);
    plVar1 = (long *)((long)__addr + 0x18);
    plVar2 = (long *)(lVar6 + 0x2898);
    if (lVar6 == param_1) {
      *(long *)(lVar6 + 0x2888) = *(long *)(lVar6 + 0x2888) - lVar5;
      __len = *(size_t *)((long)__addr + 8);
      if ((long)__len < 0x3f000001) {
        freeBigChunk__system_u6641(lVar6,__addr);
        return;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x28a0 + ((long)param_2 >> 0x15 & 0xffU) * 8);
      do {
        if (puVar4 == (undefined8 *)0x0) {
LAB_00105ba2:
          lVar5 = *(long *)(param_1 + 0x2870);
          lVar6 = *(long *)(param_1 + 0x2878);
          if (*(long *)(param_1 + 0x2878) < lVar5) {
            lVar6 = lVar5;
          }
          *(size_t *)(param_1 + 0x2870) = lVar5 - __len;
          *(long *)(param_1 + 0x2878) = lVar6;
          munmap(__addr,__len);
          return;
        }
        if ((long)param_2 >> 0x15 == puVar4[1]) {
          uVar7 = (uint)((long)param_2 >> 0xc) & 0x1ff;
          puVar4[((long)(ulong)uVar7 >> 6) + 2] =
               puVar4[((long)(ulong)uVar7 >> 6) + 2] & ~(1L << ((byte)uVar7 & 0x3f));
          goto LAB_00105ba2;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while( true );
    }
    while( true ) {
      *plVar1 = *plVar2;
      lVar6 = *plVar1;
      LOCK();
      lVar5 = *plVar2;
      bVar10 = lVar6 == lVar5;
      if (bVar10) {
        *plVar2 = (long)__addr;
        lVar5 = lVar6;
      }
      UNLOCK();
      if (bVar10) break;
      *plVar1 = lVar5;
    }
  }
  return;
}



void dealloc__system_u7120(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  size_t __len;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  void *__addr;
  bool bVar10;
  
  __addr = (void *)((ulong)param_2 & 0xfffffffffffff000);
  lVar5 = *(long *)((long)__addr + 8);
  if (lVar5 < 0xfc1) {
    lVar6 = *(long *)((long)__addr + 0x10);
    lVar9 = lVar5 + 0xf;
    if (-1 < lVar5) {
      lVar9 = lVar5;
    }
    if (param_1 == lVar6) {
      *(long *)(param_1 + 0x2888) = *(long *)(param_1 + 0x2888) - lVar5;
      plVar1 = (long *)(param_1 + (lVar9 >> 4) * 8);
      pvVar3 = (void *)*plVar1;
      iVar7 = (int)lVar5;
      if ((pvVar3 != (void *)0x0) && (pvVar3 != __addr)) {
        *param_2 = *(long *)((long)pvVar3 + 0x28);
        *(long **)((long)pvVar3 + 0x28) = param_2;
        *(int *)((long)pvVar3 + 0x30) = *(int *)((long)pvVar3 + 0x30) + iVar7;
        *(long *)((long)pvVar3 + 0x38) = *(long *)((long)pvVar3 + 0x38) + 1;
        return;
      }
      *param_2 = *(long *)((long)__addr + 0x28);
      *(long **)((long)__addr + 0x28) = param_2;
      if (*(int *)((long)__addr + 0x30) < lVar5) {
        lVar5 = *plVar1;
        *(long *)((long)__addr + 0x18) = lVar5;
        if (lVar5 != 0) {
          *(void **)(lVar5 + 0x20) = __addr;
        }
        *plVar1 = (long)__addr;
        *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar7;
        return;
      }
      iVar7 = *(int *)((long)__addr + 0x30) + iVar7;
      *(int *)((long)__addr + 0x30) = iVar7;
      if ((iVar7 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
        lVar5 = *(long *)((long)__addr + 0x18);
        if (__addr == (void *)*plVar1) {
          *plVar1 = lVar5;
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x20) = 0;
          }
        }
        else {
          *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar5;
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
          }
        }
        *(undefined8 *)((long)__addr + 8) = 0x1000;
        *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
        freeBigChunk__system_u6641(lVar6,__addr);
        return;
      }
    }
    else {
      lVar5 = (lVar9 >> 4) * 8 + 0x800;
      while( true ) {
        *param_2 = *(long *)(lVar6 + lVar5);
        lVar9 = *param_2;
        plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar5);
        LOCK();
        lVar6 = *plVar1;
        bVar10 = lVar9 == lVar6;
        if (bVar10) {
          *plVar1 = (long)param_2;
          lVar6 = lVar9;
        }
        UNLOCK();
        if (bVar10) break;
        *param_2 = lVar6;
        lVar6 = *(long *)((long)__addr + 0x10);
      }
    }
  }
  else {
    lVar6 = *(long *)((long)__addr + 0x10);
    plVar1 = (long *)((long)__addr + 0x18);
    plVar2 = (long *)(lVar6 + 0x2898);
    if (param_1 == lVar6) {
      *(long *)(param_1 + 0x2888) = *(long *)(param_1 + 0x2888) - lVar5;
      __len = *(size_t *)((long)__addr + 8);
      if ((long)__len < 0x3f000001) {
        freeBigChunk__system_u6641(param_1,__addr);
        return;
      }
      puVar4 = *(undefined8 **)(lVar6 + 0x28a0 + ((long)param_2 >> 0x15 & 0xffU) * 8);
      do {
        if (puVar4 == (undefined8 *)0x0) {
LAB_00105dd2:
          lVar5 = *(long *)(lVar6 + 0x2870);
          lVar9 = *(long *)(lVar6 + 0x2878);
          if (*(long *)(lVar6 + 0x2878) < lVar5) {
            lVar9 = lVar5;
          }
          *(size_t *)(lVar6 + 0x2870) = lVar5 - __len;
          *(long *)(lVar6 + 0x2878) = lVar9;
          munmap(__addr,__len);
          return;
        }
        if ((long)param_2 >> 0x15 == puVar4[1]) {
          uVar8 = (uint)((long)param_2 >> 0xc) & 0x1ff;
          puVar4[((long)(ulong)uVar8 >> 6) + 2] =
               puVar4[((long)(ulong)uVar8 >> 6) + 2] & ~(1L << ((byte)uVar8 & 0x3f));
          goto LAB_00105dd2;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while( true );
    }
    while( true ) {
      *plVar1 = *plVar2;
      lVar6 = *plVar1;
      LOCK();
      lVar5 = *plVar2;
      bVar10 = lVar6 == lVar5;
      if (bVar10) {
        *plVar2 = (long)__addr;
        lVar5 = lVar6;
      }
      UNLOCK();
      if (bVar10) break;
      *plVar1 = lVar5;
    }
  }
  return;
}



void * realloc__system_u7123(undefined8 param_1,void *param_2,size_t param_3)

{
  void *__dest;
  size_t __n;
  
  if (0 < (long)param_3) {
    __dest = (void *)rawAlloc__system_u6854(param_1,param_3);
    if (param_2 != (void *)0x0) {
      __n = *(size_t *)(((ulong)param_2 & 0xfffffffffffff000) + 8);
      if (0xfc0 < (long)__n) {
        __n = __n - 0x30;
      }
      if ((long)param_3 <= (long)__n) {
        __n = param_3;
      }
      memcpy(__dest,param_2,__n);
      rawDealloc__system_u7030(param_1,param_2);
    }
    return __dest;
  }
  if (param_2 != (void *)0x0) {
    rawDealloc__system_u7030();
  }
  return (void *)0x0;
}



void * reallocImpl__system_u1753(void *param_1,size_t param_2)

{
  long lVar1;
  void *__dest;
  size_t __n;
  long *in_FS_OFFSET;
  
  if (0 < (long)param_2) {
    lVar1 = *in_FS_OFFSET;
    __dest = (void *)rawAlloc__system_u6854(lVar1 + -0x3300);
    if (param_1 != (void *)0x0) {
      __n = *(size_t *)(((ulong)param_1 & 0xfffffffffffff000) + 8);
      if (0xfc0 < (long)__n) {
        __n = __n - 0x30;
      }
      if ((long)param_2 <= (long)__n) {
        __n = param_2;
      }
      memcpy(__dest,param_1,__n);
      rawDealloc__system_u7030(lVar1 + -0x3300,param_1);
    }
    return __dest;
  }
  if (param_1 != (void *)0x0) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,param_1);
  }
  return (void *)0x0;
}



void * reallocSharedImpl__system_u1766(void *param_1,size_t param_2)

{
  long lVar1;
  void *__dest;
  size_t __n;
  long *in_FS_OFFSET;
  
  if (0 < (long)param_2) {
    lVar1 = *in_FS_OFFSET;
    __dest = (void *)rawAlloc__system_u6854(lVar1 + -0x3300);
    if (param_1 != (void *)0x0) {
      __n = *(size_t *)(((ulong)param_1 & 0xfffffffffffff000) + 8);
      if (0xfc0 < (long)__n) {
        __n = __n - 0x30;
      }
      if ((long)param_2 <= (long)__n) {
        __n = param_2;
      }
      memcpy(__dest,param_1,__n);
      rawDealloc__system_u7030(lVar1 + -0x3300,param_1);
    }
    return __dest;
  }
  if (param_1 != (void *)0x0) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,param_1);
  }
  return (void *)0x0;
}



void deallocImpl__system_u1751(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  size_t __len;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  void *__addr;
  long *in_FS_OFFSET;
  bool bVar11;
  
  __addr = (void *)((ulong)param_1 & 0xfffffffffffff000);
  lVar6 = *(long *)((long)__addr + 8);
  if (lVar6 < 0xfc1) {
    lVar7 = *(long *)((long)__addr + 0x10);
    lVar3 = *in_FS_OFFSET;
    lVar9 = lVar6 + 0xf;
    if (-1 < lVar6) {
      lVar9 = lVar6;
    }
    lVar9 = lVar9 >> 4;
    if (lVar7 == lVar3 + -0x3300) {
      pvVar4 = (void *)in_FS_OFFSET[lVar9 + -0x660];
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      iVar10 = (int)lVar6;
      if ((pvVar4 != (void *)0x0) && (pvVar4 != __addr)) {
        *param_1 = *(long *)((long)pvVar4 + 0x28);
        *(long **)((long)pvVar4 + 0x28) = param_1;
        *(int *)((long)pvVar4 + 0x30) = *(int *)((long)pvVar4 + 0x30) + iVar10;
        *(long *)((long)pvVar4 + 0x38) = *(long *)((long)pvVar4 + 0x38) + 1;
        return;
      }
      *param_1 = *(long *)((long)__addr + 0x28);
      *(long **)((long)__addr + 0x28) = param_1;
      if (*(int *)((long)__addr + 0x30) < lVar6) {
        lVar6 = in_FS_OFFSET[lVar9 + -0x660];
        *(long *)((long)__addr + 0x18) = lVar6;
        if (lVar6 != 0) {
          *(void **)(lVar6 + 0x20) = __addr;
        }
        in_FS_OFFSET[lVar9 + -0x660] = (long)__addr;
        *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar10;
        return;
      }
      iVar10 = *(int *)((long)__addr + 0x30) + iVar10;
      *(int *)((long)__addr + 0x30) = iVar10;
      if ((iVar10 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
        lVar6 = *(long *)((long)__addr + 0x18);
        if (__addr == (void *)in_FS_OFFSET[lVar9 + -0x660]) {
          in_FS_OFFSET[lVar9 + -0x660] = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = 0;
          }
        }
        else {
          *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
          }
        }
        *(undefined8 *)((long)__addr + 8) = 0x1000;
        *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
        freeBigChunk__system_u6641(lVar3 + -0x3300,__addr);
        return;
      }
    }
    else {
      lVar6 = lVar9 * 8 + 0x800;
      while( true ) {
        *param_1 = *(long *)(lVar7 + lVar6);
        lVar3 = *param_1;
        plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar6);
        LOCK();
        lVar7 = *plVar1;
        bVar11 = lVar3 == lVar7;
        if (bVar11) {
          *plVar1 = (long)param_1;
          lVar7 = lVar3;
        }
        UNLOCK();
        if (bVar11) break;
        *param_1 = lVar7;
        lVar7 = *(long *)((long)__addr + 0x10);
      }
    }
  }
  else {
    lVar7 = *(long *)((long)__addr + 0x10);
    plVar1 = (long *)((long)__addr + 0x18);
    plVar2 = (long *)(lVar7 + 0x2898);
    if (lVar7 == *in_FS_OFFSET + -0x3300) {
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      __len = *(size_t *)((long)__addr + 8);
      if ((long)__len < 0x3f000001) {
        freeBigChunk__system_u6641(lVar7,__addr);
        return;
      }
      puVar5 = (undefined8 *)in_FS_OFFSET[((long)param_1 >> 0x15 & 0xffU) - 0x14c];
      do {
        if (puVar5 == (undefined8 *)0x0) {
LAB_00106222:
          lVar6 = in_FS_OFFSET[-0x152];
          lVar7 = in_FS_OFFSET[-0x151];
          if (in_FS_OFFSET[-0x151] < lVar6) {
            lVar7 = lVar6;
          }
          in_FS_OFFSET[-0x152] = lVar6 - __len;
          in_FS_OFFSET[-0x151] = lVar7;
          munmap(__addr,__len);
          return;
        }
        if ((long)param_1 >> 0x15 == puVar5[1]) {
          uVar8 = (uint)((long)param_1 >> 0xc) & 0x1ff;
          puVar5[((long)(ulong)uVar8 >> 6) + 2] =
               puVar5[((long)(ulong)uVar8 >> 6) + 2] & ~(1L << ((byte)uVar8 & 0x3f));
          goto LAB_00106222;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while( true );
    }
    while( true ) {
      *plVar1 = *plVar2;
      lVar7 = *plVar1;
      LOCK();
      lVar6 = *plVar2;
      bVar11 = lVar7 == lVar6;
      if (bVar11) {
        *plVar2 = (long)__addr;
        lVar6 = lVar7;
      }
      UNLOCK();
      if (bVar11) break;
      *plVar1 = lVar6;
    }
  }
  return;
}



void deallocSharedImpl__system_u1764(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  size_t __len;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  void *__addr;
  long *in_FS_OFFSET;
  bool bVar11;
  
  __addr = (void *)((ulong)param_1 & 0xfffffffffffff000);
  lVar6 = *(long *)((long)__addr + 8);
  if (lVar6 < 0xfc1) {
    lVar7 = *(long *)((long)__addr + 0x10);
    lVar3 = *in_FS_OFFSET;
    lVar9 = lVar6 + 0xf;
    if (-1 < lVar6) {
      lVar9 = lVar6;
    }
    lVar9 = lVar9 >> 4;
    if (lVar7 == lVar3 + -0x3300) {
      pvVar4 = (void *)in_FS_OFFSET[lVar9 + -0x660];
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      iVar10 = (int)lVar6;
      if ((pvVar4 != (void *)0x0) && (pvVar4 != __addr)) {
        *param_1 = *(long *)((long)pvVar4 + 0x28);
        *(long **)((long)pvVar4 + 0x28) = param_1;
        *(int *)((long)pvVar4 + 0x30) = *(int *)((long)pvVar4 + 0x30) + iVar10;
        *(long *)((long)pvVar4 + 0x38) = *(long *)((long)pvVar4 + 0x38) + 1;
        return;
      }
      *param_1 = *(long *)((long)__addr + 0x28);
      *(long **)((long)__addr + 0x28) = param_1;
      if (*(int *)((long)__addr + 0x30) < lVar6) {
        lVar6 = in_FS_OFFSET[lVar9 + -0x660];
        *(long *)((long)__addr + 0x18) = lVar6;
        if (lVar6 != 0) {
          *(void **)(lVar6 + 0x20) = __addr;
        }
        in_FS_OFFSET[lVar9 + -0x660] = (long)__addr;
        *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar10;
        return;
      }
      iVar10 = *(int *)((long)__addr + 0x30) + iVar10;
      *(int *)((long)__addr + 0x30) = iVar10;
      if ((iVar10 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
        lVar6 = *(long *)((long)__addr + 0x18);
        if (__addr == (void *)in_FS_OFFSET[lVar9 + -0x660]) {
          in_FS_OFFSET[lVar9 + -0x660] = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = 0;
          }
        }
        else {
          *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
          }
        }
        *(undefined8 *)((long)__addr + 8) = 0x1000;
        *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
        freeBigChunk__system_u6641(lVar3 + -0x3300,__addr);
        return;
      }
    }
    else {
      lVar6 = lVar9 * 8 + 0x800;
      while( true ) {
        *param_1 = *(long *)(lVar7 + lVar6);
        lVar3 = *param_1;
        plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar6);
        LOCK();
        lVar7 = *plVar1;
        bVar11 = lVar3 == lVar7;
        if (bVar11) {
          *plVar1 = (long)param_1;
          lVar7 = lVar3;
        }
        UNLOCK();
        if (bVar11) break;
        *param_1 = lVar7;
        lVar7 = *(long *)((long)__addr + 0x10);
      }
    }
  }
  else {
    lVar7 = *(long *)((long)__addr + 0x10);
    plVar1 = (long *)((long)__addr + 0x18);
    plVar2 = (long *)(lVar7 + 0x2898);
    if (lVar7 == *in_FS_OFFSET + -0x3300) {
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      __len = *(size_t *)((long)__addr + 8);
      if ((long)__len < 0x3f000001) {
        freeBigChunk__system_u6641(lVar7,__addr);
        return;
      }
      puVar5 = (undefined8 *)in_FS_OFFSET[((long)param_1 >> 0x15 & 0xffU) - 0x14c];
      do {
        if (puVar5 == (undefined8 *)0x0) {
LAB_00106492:
          lVar6 = in_FS_OFFSET[-0x152];
          lVar7 = in_FS_OFFSET[-0x151];
          if (in_FS_OFFSET[-0x151] < lVar6) {
            lVar7 = lVar6;
          }
          in_FS_OFFSET[-0x152] = lVar6 - __len;
          in_FS_OFFSET[-0x151] = lVar7;
          munmap(__addr,__len);
          return;
        }
        if ((long)param_1 >> 0x15 == puVar5[1]) {
          uVar8 = (uint)((long)param_1 >> 0xc) & 0x1ff;
          puVar5[((long)(ulong)uVar8 >> 6) + 2] =
               puVar5[((long)(ulong)uVar8 >> 6) + 2] & ~(1L << ((byte)uVar8 & 0x3f));
          goto LAB_00106492;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while( true );
    }
    while( true ) {
      *plVar1 = *plVar2;
      lVar7 = *plVar1;
      LOCK();
      lVar6 = *plVar2;
      bVar11 = lVar7 == lVar6;
      if (bVar11) {
        *plVar2 = (long)__addr;
        lVar6 = lVar7;
      }
      UNLOCK();
      if (bVar11) break;
      *plVar1 = lVar6;
    }
  }
  return;
}



void deallocShared(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  size_t __len;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  void *__addr;
  long *in_FS_OFFSET;
  bool bVar11;
  
  __addr = (void *)((ulong)param_1 & 0xfffffffffffff000);
  lVar6 = *(long *)((long)__addr + 8);
  if (lVar6 < 0xfc1) {
    lVar7 = *(long *)((long)__addr + 0x10);
    lVar3 = *in_FS_OFFSET;
    lVar9 = lVar6 + 0xf;
    if (-1 < lVar6) {
      lVar9 = lVar6;
    }
    lVar9 = lVar9 >> 4;
    if (lVar7 == lVar3 + -0x3300) {
      pvVar4 = (void *)in_FS_OFFSET[lVar9 + -0x660];
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      iVar10 = (int)lVar6;
      if ((pvVar4 != (void *)0x0) && (pvVar4 != __addr)) {
        *param_1 = *(long *)((long)pvVar4 + 0x28);
        *(long **)((long)pvVar4 + 0x28) = param_1;
        *(int *)((long)pvVar4 + 0x30) = *(int *)((long)pvVar4 + 0x30) + iVar10;
        *(long *)((long)pvVar4 + 0x38) = *(long *)((long)pvVar4 + 0x38) + 1;
        return;
      }
      *param_1 = *(long *)((long)__addr + 0x28);
      *(long **)((long)__addr + 0x28) = param_1;
      if (*(int *)((long)__addr + 0x30) < lVar6) {
        lVar6 = in_FS_OFFSET[lVar9 + -0x660];
        *(long *)((long)__addr + 0x18) = lVar6;
        if (lVar6 != 0) {
          *(void **)(lVar6 + 0x20) = __addr;
        }
        in_FS_OFFSET[lVar9 + -0x660] = (long)__addr;
        *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar10;
        return;
      }
      iVar10 = *(int *)((long)__addr + 0x30) + iVar10;
      *(int *)((long)__addr + 0x30) = iVar10;
      if ((iVar10 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
        lVar6 = *(long *)((long)__addr + 0x18);
        if (__addr == (void *)in_FS_OFFSET[lVar9 + -0x660]) {
          in_FS_OFFSET[lVar9 + -0x660] = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = 0;
          }
        }
        else {
          *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
          }
        }
        *(undefined8 *)((long)__addr + 8) = 0x1000;
        *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
        freeBigChunk__system_u6641(lVar3 + -0x3300,__addr);
        return;
      }
    }
    else {
      lVar6 = lVar9 * 8 + 0x800;
      while( true ) {
        *param_1 = *(long *)(lVar7 + lVar6);
        lVar3 = *param_1;
        plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar6);
        LOCK();
        lVar7 = *plVar1;
        bVar11 = lVar3 == lVar7;
        if (bVar11) {
          *plVar1 = (long)param_1;
          lVar7 = lVar3;
        }
        UNLOCK();
        if (bVar11) break;
        *param_1 = lVar7;
        lVar7 = *(long *)((long)__addr + 0x10);
      }
    }
  }
  else {
    lVar7 = *(long *)((long)__addr + 0x10);
    plVar1 = (long *)((long)__addr + 0x18);
    plVar2 = (long *)(lVar7 + 0x2898);
    if (lVar7 == *in_FS_OFFSET + -0x3300) {
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      __len = *(size_t *)((long)__addr + 8);
      if ((long)__len < 0x3f000001) {
        freeBigChunk__system_u6641(lVar7,__addr);
        return;
      }
      puVar5 = (undefined8 *)in_FS_OFFSET[((long)param_1 >> 0x15 & 0xffU) - 0x14c];
      do {
        if (puVar5 == (undefined8 *)0x0) {
LAB_00106702:
          lVar6 = in_FS_OFFSET[-0x152];
          lVar7 = in_FS_OFFSET[-0x151];
          if (in_FS_OFFSET[-0x151] < lVar6) {
            lVar7 = lVar6;
          }
          in_FS_OFFSET[-0x152] = lVar6 - __len;
          in_FS_OFFSET[-0x151] = lVar7;
          munmap(__addr,__len);
          return;
        }
        if ((long)param_1 >> 0x15 == puVar5[1]) {
          uVar8 = (uint)((long)param_1 >> 0xc) & 0x1ff;
          puVar5[((long)(ulong)uVar8 >> 6) + 2] =
               puVar5[((long)(ulong)uVar8 >> 6) + 2] & ~(1L << ((byte)uVar8 & 0x3f));
          goto LAB_00106702;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while( true );
    }
    while( true ) {
      *plVar1 = *plVar2;
      lVar7 = *plVar1;
      LOCK();
      lVar6 = *plVar2;
      bVar11 = lVar7 == lVar6;
      if (bVar11) {
        *plVar2 = (long)__addr;
        lVar6 = lVar7;
      }
      UNLOCK();
      if (bVar11) break;
      *plVar1 = lVar6;
    }
  }
  return;
}



void alignedDealloc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  size_t __len;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  void *__addr;
  long *in_FS_OFFSET;
  bool bVar11;
  
  if (0x10 < param_2) {
    rawDealloc__system_u7030
              (*in_FS_OFFSET + -0x3300,(long)param_1 - (ulong)*(ushort *)((long)param_1 + -2));
    return;
  }
  __addr = (void *)((ulong)param_1 & 0xfffffffffffff000);
  lVar6 = *(long *)((long)__addr + 8);
  if (lVar6 < 0xfc1) {
    lVar7 = *(long *)((long)__addr + 0x10);
    lVar3 = *in_FS_OFFSET;
    lVar9 = lVar6 + 0xf;
    if (-1 < lVar6) {
      lVar9 = lVar6;
    }
    lVar9 = lVar9 >> 4;
    if (lVar7 == lVar3 + -0x3300) {
      pvVar4 = (void *)in_FS_OFFSET[lVar9 + -0x660];
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      iVar10 = (int)lVar6;
      if ((pvVar4 != (void *)0x0) && (pvVar4 != __addr)) {
        *param_1 = *(long *)((long)pvVar4 + 0x28);
        *(long **)((long)pvVar4 + 0x28) = param_1;
        *(int *)((long)pvVar4 + 0x30) = *(int *)((long)pvVar4 + 0x30) + iVar10;
        *(long *)((long)pvVar4 + 0x38) = *(long *)((long)pvVar4 + 0x38) + 1;
        return;
      }
      *param_1 = *(long *)((long)__addr + 0x28);
      *(long **)((long)__addr + 0x28) = param_1;
      if (*(int *)((long)__addr + 0x30) < lVar6) {
        lVar6 = in_FS_OFFSET[lVar9 + -0x660];
        *(long *)((long)__addr + 0x18) = lVar6;
        if (lVar6 != 0) {
          *(void **)(lVar6 + 0x20) = __addr;
        }
        in_FS_OFFSET[lVar9 + -0x660] = (long)__addr;
        *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar10;
        return;
      }
      iVar10 = *(int *)((long)__addr + 0x30) + iVar10;
      *(int *)((long)__addr + 0x30) = iVar10;
      if ((iVar10 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
        lVar6 = *(long *)((long)__addr + 0x18);
        if (__addr == (void *)in_FS_OFFSET[lVar9 + -0x660]) {
          in_FS_OFFSET[lVar9 + -0x660] = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = 0;
          }
        }
        else {
          *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
          }
        }
        *(undefined8 *)((long)__addr + 8) = 0x1000;
        *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
        freeBigChunk__system_u6641(lVar3 + -0x3300,__addr);
        return;
      }
    }
    else {
      lVar6 = lVar9 * 8 + 0x800;
      while( true ) {
        *param_1 = *(long *)(lVar7 + lVar6);
        lVar3 = *param_1;
        plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar6);
        LOCK();
        lVar7 = *plVar1;
        bVar11 = lVar3 == lVar7;
        if (bVar11) {
          *plVar1 = (long)param_1;
          lVar7 = lVar3;
        }
        UNLOCK();
        if (bVar11) break;
        *param_1 = lVar7;
        lVar7 = *(long *)((long)__addr + 0x10);
      }
    }
  }
  else {
    lVar7 = *(long *)((long)__addr + 0x10);
    plVar1 = (long *)((long)__addr + 0x18);
    plVar2 = (long *)(lVar7 + 0x2898);
    if (lVar7 == *in_FS_OFFSET + -0x3300) {
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar6;
      __len = *(size_t *)((long)__addr + 8);
      if ((long)__len < 0x3f000001) {
        freeBigChunk__system_u6641(lVar7,__addr);
        return;
      }
      puVar5 = (undefined8 *)in_FS_OFFSET[((long)param_1 >> 0x15 & 0xffU) - 0x14c];
      do {
        if (puVar5 == (undefined8 *)0x0) {
LAB_00106912:
          lVar6 = in_FS_OFFSET[-0x152];
          lVar7 = in_FS_OFFSET[-0x151];
          if (in_FS_OFFSET[-0x151] < lVar6) {
            lVar7 = lVar6;
          }
          in_FS_OFFSET[-0x152] = lVar6 - __len;
          in_FS_OFFSET[-0x151] = lVar7;
          munmap(__addr,__len);
          return;
        }
        if ((long)param_1 >> 0x15 == puVar5[1]) {
          uVar8 = (uint)((long)param_1 >> 0xc) & 0x1ff;
          puVar5[((long)(ulong)uVar8 >> 6) + 2] =
               puVar5[((long)(ulong)uVar8 >> 6) + 2] & ~(1L << ((byte)uVar8 & 0x3f));
          goto LAB_00106912;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while( true );
    }
    while( true ) {
      *plVar1 = *plVar2;
      lVar7 = *plVar1;
      LOCK();
      lVar6 = *plVar2;
      bVar11 = lVar7 == lVar6;
      if (bVar11) {
        *plVar2 = (long)__addr;
        lVar6 = lVar7;
      }
      UNLOCK();
      if (bVar11) break;
      *plVar1 = lVar6;
    }
  }
  return;
}



void deinit__system_u3420(undefined1 (*param_1) [16])

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  size_t __len;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  void *__addr;
  long *in_FS_OFFSET;
  bool bVar12;
  
  plVar3 = *(long **)param_1[1];
  if (plVar3 != (long *)0x0) {
    __addr = (void *)((ulong)plVar3 & 0xfffffffffffff000);
    lVar7 = *(long *)((long)__addr + 8);
    if (lVar7 < 0xfc1) {
      lVar8 = *(long *)((long)__addr + 0x10);
      lVar4 = *in_FS_OFFSET;
      lVar10 = lVar7 + 0xf;
      if (-1 < lVar7) {
        lVar10 = lVar7;
      }
      lVar10 = lVar10 >> 4;
      if (lVar8 == lVar4 + -0x3300) {
        pvVar5 = (void *)in_FS_OFFSET[lVar10 + -0x660];
        in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar7;
        iVar11 = (int)lVar7;
        if ((pvVar5 == (void *)0x0) || (pvVar5 == __addr)) {
          *plVar3 = *(long *)((long)__addr + 0x28);
          *(long **)((long)__addr + 0x28) = plVar3;
          if (*(int *)((long)__addr + 0x30) < lVar7) {
            lVar7 = in_FS_OFFSET[lVar10 + -0x660];
            *(long *)((long)__addr + 0x18) = lVar7;
            if (lVar7 != 0) {
              *(void **)(lVar7 + 0x20) = __addr;
            }
            in_FS_OFFSET[lVar10 + -0x660] = (long)__addr;
            *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar11;
          }
          else {
            iVar11 = *(int *)((long)__addr + 0x30) + iVar11;
            *(int *)((long)__addr + 0x30) = iVar11;
            if ((iVar11 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
              lVar7 = *(long *)((long)__addr + 0x18);
              if (__addr == (void *)in_FS_OFFSET[lVar10 + -0x660]) {
                in_FS_OFFSET[lVar10 + -0x660] = lVar7;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = 0;
                }
              }
              else {
                *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar7;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
                }
              }
              *(undefined8 *)((long)__addr + 8) = 0x1000;
              *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
              freeBigChunk__system_u6641(lVar4 + -0x3300,__addr);
            }
          }
        }
        else {
          *plVar3 = *(long *)((long)pvVar5 + 0x28);
          *(long **)((long)pvVar5 + 0x28) = plVar3;
          *(int *)((long)pvVar5 + 0x30) = *(int *)((long)pvVar5 + 0x30) + iVar11;
          *(long *)((long)pvVar5 + 0x38) = *(long *)((long)pvVar5 + 0x38) + 1;
        }
      }
      else {
        lVar7 = lVar10 * 8 + 0x800;
        while( true ) {
          *plVar3 = *(long *)(lVar8 + lVar7);
          lVar4 = *plVar3;
          plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar7);
          LOCK();
          lVar8 = *plVar1;
          bVar12 = lVar4 == lVar8;
          if (bVar12) {
            *plVar1 = (long)plVar3;
            lVar8 = lVar4;
          }
          UNLOCK();
          if (bVar12) break;
          *plVar3 = lVar8;
          lVar8 = *(long *)((long)__addr + 0x10);
        }
      }
    }
    else {
      lVar8 = *(long *)((long)__addr + 0x10);
      plVar1 = (long *)((long)__addr + 0x18);
      plVar2 = (long *)(lVar8 + 0x2898);
      if (lVar8 == *in_FS_OFFSET + -0x3300) {
        in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar7;
        __len = *(size_t *)((long)__addr + 8);
        if ((long)__len < 0x3f000001) {
          freeBigChunk__system_u6641(lVar8,__addr);
        }
        else {
          for (puVar6 = (undefined8 *)in_FS_OFFSET[((long)plVar3 >> 0x15 & 0xffU) - 0x14c];
              puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
            if ((long)plVar3 >> 0x15 == puVar6[1]) {
              uVar9 = (uint)((long)plVar3 >> 0xc) & 0x1ff;
              puVar6[((long)(ulong)uVar9 >> 6) + 2] =
                   puVar6[((long)(ulong)uVar9 >> 6) + 2] & ~(1L << ((byte)uVar9 & 0x3f));
              break;
            }
          }
          lVar7 = in_FS_OFFSET[-0x152];
          lVar8 = in_FS_OFFSET[-0x151];
          if (in_FS_OFFSET[-0x151] < lVar7) {
            lVar8 = lVar7;
          }
          in_FS_OFFSET[-0x152] = lVar7 - __len;
          in_FS_OFFSET[-0x151] = lVar8;
          munmap(__addr,__len);
        }
      }
      else {
        while( true ) {
          *plVar1 = *plVar2;
          lVar8 = *plVar1;
          LOCK();
          lVar7 = *plVar2;
          bVar12 = lVar8 == lVar7;
          if (bVar12) {
            *plVar2 = (long)__addr;
            lVar7 = lVar8;
          }
          UNLOCK();
          if (bVar12) break;
          *plVar1 = lVar7;
        }
      }
    }
    *(undefined8 *)param_1[1] = 0;
  }
  *param_1 = (undefined1  [16])0x0;
  return;
}



void deinit__system_u3445(undefined1 (*param_1) [16])

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  size_t __len;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  void *__addr;
  long *in_FS_OFFSET;
  bool bVar12;
  
  plVar3 = *(long **)param_1[1];
  if (plVar3 != (long *)0x0) {
    __addr = (void *)((ulong)plVar3 & 0xfffffffffffff000);
    lVar7 = *(long *)((long)__addr + 8);
    if (lVar7 < 0xfc1) {
      lVar8 = *(long *)((long)__addr + 0x10);
      lVar4 = *in_FS_OFFSET;
      lVar10 = lVar7 + 0xf;
      if (-1 < lVar7) {
        lVar10 = lVar7;
      }
      lVar10 = lVar10 >> 4;
      if (lVar8 == lVar4 + -0x3300) {
        pvVar5 = (void *)in_FS_OFFSET[lVar10 + -0x660];
        in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar7;
        iVar11 = (int)lVar7;
        if ((pvVar5 == (void *)0x0) || (pvVar5 == __addr)) {
          *plVar3 = *(long *)((long)__addr + 0x28);
          *(long **)((long)__addr + 0x28) = plVar3;
          if (*(int *)((long)__addr + 0x30) < lVar7) {
            lVar7 = in_FS_OFFSET[lVar10 + -0x660];
            *(long *)((long)__addr + 0x18) = lVar7;
            if (lVar7 != 0) {
              *(void **)(lVar7 + 0x20) = __addr;
            }
            in_FS_OFFSET[lVar10 + -0x660] = (long)__addr;
            *(int *)((long)__addr + 0x30) = *(int *)((long)__addr + 0x30) + iVar11;
          }
          else {
            iVar11 = *(int *)((long)__addr + 0x30) + iVar11;
            *(int *)((long)__addr + 0x30) = iVar11;
            if ((iVar11 == 0xfc0) && (*(long *)((long)__addr + 0x38) == 0)) {
              lVar7 = *(long *)((long)__addr + 0x18);
              if (__addr == (void *)in_FS_OFFSET[lVar10 + -0x660]) {
                in_FS_OFFSET[lVar10 + -0x660] = lVar7;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = 0;
                }
              }
              else {
                *(long *)(*(long *)((long)__addr + 0x20) + 0x18) = lVar7;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)((long)__addr + 0x20);
                }
              }
              *(undefined8 *)((long)__addr + 8) = 0x1000;
              *(undefined1 (*) [16])((long)__addr + 0x18) = (undefined1  [16])0x0;
              freeBigChunk__system_u6641(lVar4 + -0x3300,__addr);
            }
          }
        }
        else {
          *plVar3 = *(long *)((long)pvVar5 + 0x28);
          *(long **)((long)pvVar5 + 0x28) = plVar3;
          *(int *)((long)pvVar5 + 0x30) = *(int *)((long)pvVar5 + 0x30) + iVar11;
          *(long *)((long)pvVar5 + 0x38) = *(long *)((long)pvVar5 + 0x38) + 1;
        }
      }
      else {
        lVar7 = lVar10 * 8 + 0x800;
        while( true ) {
          *plVar3 = *(long *)(lVar8 + lVar7);
          lVar4 = *plVar3;
          plVar1 = (long *)(*(long *)((long)__addr + 0x10) + lVar7);
          LOCK();
          lVar8 = *plVar1;
          bVar12 = lVar4 == lVar8;
          if (bVar12) {
            *plVar1 = (long)plVar3;
            lVar8 = lVar4;
          }
          UNLOCK();
          if (bVar12) break;
          *plVar3 = lVar8;
          lVar8 = *(long *)((long)__addr + 0x10);
        }
      }
    }
    else {
      lVar8 = *(long *)((long)__addr + 0x10);
      plVar1 = (long *)((long)__addr + 0x18);
      plVar2 = (long *)(lVar8 + 0x2898);
      if (lVar8 == *in_FS_OFFSET + -0x3300) {
        in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - lVar7;
        __len = *(size_t *)((long)__addr + 8);
        if ((long)__len < 0x3f000001) {
          freeBigChunk__system_u6641(lVar8,__addr);
        }
        else {
          for (puVar6 = (undefined8 *)in_FS_OFFSET[((long)plVar3 >> 0x15 & 0xffU) - 0x14c];
              puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
            if ((long)plVar3 >> 0x15 == puVar6[1]) {
              uVar9 = (uint)((long)plVar3 >> 0xc) & 0x1ff;
              puVar6[((long)(ulong)uVar9 >> 6) + 2] =
                   puVar6[((long)(ulong)uVar9 >> 6) + 2] & ~(1L << ((byte)uVar9 & 0x3f));
              break;
            }
          }
          lVar7 = in_FS_OFFSET[-0x152];
          lVar8 = in_FS_OFFSET[-0x151];
          if (in_FS_OFFSET[-0x151] < lVar7) {
            lVar8 = lVar7;
          }
          in_FS_OFFSET[-0x152] = lVar7 - __len;
          in_FS_OFFSET[-0x151] = lVar8;
          munmap(__addr,__len);
        }
      }
      else {
        while( true ) {
          *plVar1 = *plVar2;
          lVar8 = *plVar1;
          LOCK();
          lVar7 = *plVar2;
          bVar12 = lVar8 == lVar7;
          if (bVar12) {
            *plVar2 = (long)__addr;
            lVar7 = lVar8;
          }
          UNLOCK();
          if (bVar12) break;
          *plVar1 = lVar7;
        }
      }
    }
    *(undefined8 *)param_1[1] = 0;
  }
  *param_1 = (undefined1  [16])0x0;
  return;
}



void eqdestroy___stdZassertions_u74(undefined8 param_1,long param_2)

{
  long *in_FS_OFFSET;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 7) & 0x40) == 0)) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
    return;
  }
  return;
}



void * realloc0Impl__system_u1756(void *param_1,long param_2,size_t param_3)

{
  long lVar1;
  void *__dest;
  size_t __n;
  long *in_FS_OFFSET;
  
  if ((long)param_3 < 1) {
    if (param_1 != (void *)0x0) {
      rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
    }
    __dest = (void *)0x0;
  }
  else {
    lVar1 = *in_FS_OFFSET;
    __dest = (void *)rawAlloc__system_u6854(lVar1 + -0x3300);
    if (param_1 != (void *)0x0) {
      __n = *(size_t *)(((ulong)param_1 & 0xfffffffffffff000) + 8);
      if (0xfc0 < (long)__n) {
        __n = __n - 0x30;
      }
      if ((long)param_3 <= (long)__n) {
        __n = param_3;
      }
      memcpy(__dest,param_1,__n);
      rawDealloc__system_u7030(lVar1 + -0x3300);
    }
  }
  if (param_2 < (long)param_3) {
    memset((void *)((long)__dest + param_2),0,param_3 - param_2);
  }
  return __dest;
}



void * reallocShared0Impl__system_u1769(void *param_1,long param_2,size_t param_3)

{
  long lVar1;
  void *__dest;
  size_t __n;
  long *in_FS_OFFSET;
  
  if ((long)param_3 < 1) {
    if (param_1 != (void *)0x0) {
      rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
    }
    __dest = (void *)0x0;
  }
  else {
    lVar1 = *in_FS_OFFSET;
    __dest = (void *)rawAlloc__system_u6854(lVar1 + -0x3300);
    if (param_1 != (void *)0x0) {
      __n = *(size_t *)(((ulong)param_1 & 0xfffffffffffff000) + 8);
      if (0xfc0 < (long)__n) {
        __n = __n - 0x30;
      }
      if ((long)param_3 <= (long)__n) {
        __n = param_3;
      }
      memcpy(__dest,param_1,__n);
      rawDealloc__system_u7030(lVar1 + -0x3300);
    }
  }
  if (param_2 < (long)param_3) {
    memset((void *)((long)__dest + param_2),0,param_3 - param_2);
  }
  return __dest;
}



// WARNING: Removing unreachable block (ram,0x001071b6)

void raiseOverflow(void)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long *in_FS_OFFSET;
  
  pauVar1 = (undefined1 (*) [16])rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,0x50);
  pauVar1[1] = (undefined1  [16])0x0;
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined1 **)pauVar1[1] = NTIv2__DiQqKYu2t14eQ9cRhHPgScA_;
  pauVar1[3] = (undefined1  [16])0x0;
  pauVar1[4] = (undefined1  [16])0x0;
  *(char **)pauVar1[2] = "OverflowDefect";
  *(undefined8 *)(pauVar1[2] + 8) = 0x12;
  *(undefined **)pauVar1[3] = &TM__Q5wkpxktOdTGvlSRo9bzt9aw_105;
  lVar2 = prepareSeqAddUninit(0,0,1,0x18,8);
  *(long *)pauVar1[4] = lVar2;
  *(undefined8 *)(pauVar1[3] + 8) = 1;
  *(char **)(lVar2 + 8) = "sysFatal";
  *(undefined8 *)(lVar2 + 0x10) = 0x35;
  *(char **)(lVar2 + 0x18) = "fatal.nim";
  raiseExceptionAux__system_u4474(pauVar1 + 1);
  return;
}



ulong align__system_u1634(ulong param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = param_2 - 1;
  if ((!SBORROW8(param_2,1)) && (!SCARRY8(uVar1,param_1))) {
    return ~uVar1 & uVar1 + param_1;
  }
  raiseOverflow();
  return param_1;
}



void unregisterCycle__system_u3143(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((!SBORROW8(lVar3,1)) && (!SBORROW8(*(long *)(in_FS_OFFSET + -0x40),1))) {
    lVar5 = (lVar3 + -1) * 0x10;
    puVar1 = (undefined8 *)
             (*(long *)(in_FS_OFFSET + -0x30) + (*(long *)(in_FS_OFFSET + -0x40) + -1) * 0x10);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(*(long *)(in_FS_OFFSET + -0x30) + lVar5);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    if (!SCARRY8(lVar3 + -1,1)) {
      *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -0x30) + lVar5) + 8) = lVar3;
      if (!SBORROW8(*(long *)(in_FS_OFFSET + -0x40),1)) {
        *(long *)(in_FS_OFFSET + -0x40) = *(long *)(in_FS_OFFSET + -0x40) + -1;
        *(undefined8 *)(param_1 + 8) = 0;
        return;
      }
    }
  }
  raiseOverflow();
  return;
}



undefined1  [16] pop__system_u3179(long *param_1)

{
  undefined8 in_RAX;
  undefined8 *puVar1;
  long lVar2;
  undefined8 unaff_RBX;
  undefined1 auVar3 [16];
  
  lVar2 = *param_1 + -1;
  if (SBORROW8(*param_1,1)) {
    raiseOverflow();
  }
  else {
    puVar1 = (undefined8 *)(lVar2 * 0x10 + param_1[2]);
    unaff_RBX = *puVar1;
    in_RAX = puVar1[1];
    *param_1 = lVar2;
  }
  auVar3._8_8_ = in_RAX;
  auVar3._0_8_ = unaff_RBX;
  return auVar3;
}



void scanBlack__system_u3171(ulong *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  
  *param_1 = *param_1 & 0xfffffffffffffffc;
  pcVar6 = *(code **)(param_2 + 0x20);
  lVar1 = *param_3;
  if (pcVar6 == (code *)0x0) goto LAB_0010737e;
  param_1 = param_1 + 2;
  do {
    (*pcVar6)(param_1,param_3);
LAB_0010737e:
    if (*(char *)(in_FS_OFFSET + -0x60) != '\0') {
      return;
    }
    do {
      do {
        if (*param_3 <= lVar1) {
          return;
        }
        lVar4 = *param_3 + -1;
        puVar7 = (undefined8 *)(lVar4 * 0x10 + param_3[2]);
        puVar2 = (undefined8 *)*puVar7;
        lVar3 = puVar7[1];
        *param_3 = lVar4;
        param_1 = (ulong *)*puVar2;
        uVar5 = param_1[-2] + 0x10;
        if (SCARRY8(param_1[-2],0x10)) {
          raiseOverflow();
          return;
        }
        param_1[-2] = uVar5;
      } while ((uVar5 & 3) == 0);
      param_1[-2] = uVar5 & 0xfffffffffffffffc;
      pcVar6 = *(code **)(lVar3 + 0x20);
    } while (pcVar6 == (code *)0x0);
  } while( true );
}



void nimRawDispose(long param_1,long param_2)

{
  ulong unaff_R12;
  long *in_FS_OFFSET;
  
  if (param_2 == 0) {
    param_1 = param_1 + -0x10;
  }
  else {
    if ((SBORROW8(param_2,1)) || (SCARRY8(param_2 - 1U,0x10))) {
      raiseOverflow();
    }
    else {
      unaff_R12 = ~(param_2 - 1U) & param_2 + 0xfU;
    }
    param_1 = param_1 - unaff_R12;
    if (0x10 < param_2) {
      param_1 = param_1 - (ulong)*(ushort *)(param_1 + -2);
    }
  }
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,param_1);
  return;
}



void scan__system_u3256(ulong *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  
  uVar1 = *param_1;
  if (((uint)uVar1 & 3) == 1) {
    if (-1 < (long)uVar1) {
      scanBlack__system_u3171(param_1,param_2,param_3);
      return;
    }
    *param_1 = uVar1 & 0xfffffffffffffffc | 2;
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      (**(code **)(param_2 + 0x20))(param_1 + 2,param_3);
    }
    while (*(char *)(in_FS_OFFSET + -0x60) == '\0') {
      while( true ) {
        lVar6 = *param_3;
        do {
          if (lVar6 < 1) {
            return;
          }
          lVar6 = lVar6 + -1;
          puVar7 = (undefined8 *)(lVar6 * 0x10 + param_3[2]);
          plVar2 = (long *)*puVar7;
          lVar3 = puVar7[1];
          *param_3 = lVar6;
          lVar4 = *plVar2;
          uVar1 = *(ulong *)(lVar4 + -0x10);
        } while (((uint)uVar1 & 3) != 1);
        if ((long)uVar1 < 0) break;
        scanBlack__system_u3171(lVar4 + -0x10,lVar3,param_3);
        if (*(char *)(in_FS_OFFSET + -0x60) != '\0') {
          return;
        }
      }
      *(ulong *)(lVar4 + -0x10) = uVar1 & 0xfffffffffffffffc | 2;
      pcVar5 = *(code **)(lVar3 + 0x20);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(lVar4,param_3);
      }
    }
  }
  return;
}



void nimDestroyAndDispose(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *in_FS_OFFSET;
  
  puVar2 = (undefined8 *)*param_1;
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)();
    puVar2 = (undefined8 *)*param_1;
  }
  lVar1 = (long)*(short *)(puVar2 + 2);
  puVar2 = param_1 + -2;
  if ((lVar1 != 0) &&
     (puVar2 = (undefined8 *)((long)param_1 - (-lVar1 & lVar1 + 0xfU)), 0x10 < lVar1)) {
    rawDealloc__system_u7030
              (*in_FS_OFFSET + -0x3300,(long)puVar2 - (ulong)*(ushort *)((long)puVar2 + -2));
    return;
  }
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,puVar2);
  return;
}



void markGray__system_u3200(ulong *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  
  if (((uint)*param_1 & 3) == 1) {
    return;
  }
  *param_1 = *param_1 & 0xfffffffffffffffc | 1;
  if (!SCARRY8(param_3[7],1)) {
    param_3[7] = param_3[7] + 1;
    lVar2 = ((long)*param_1 >> 4) + 1;
    if (!SCARRY8(lVar2,param_3[9])) {
      param_3[9] = lVar2 + param_3[9];
      pcVar4 = *(code **)(param_2 + 0x20);
      if (pcVar4 == (code *)0x0) goto LAB_0010766a;
      param_1 = param_1 + 2;
      do {
        (*pcVar4)(param_1,param_3);
LAB_0010766a:
        do {
          if (*(char *)(in_FS_OFFSET + -0x60) != '\0') {
            return;
          }
          do {
            if (*param_3 < 1) {
              return;
            }
            lVar3 = *param_3 + -1;
            puVar5 = (undefined8 *)(lVar3 * 0x10 + param_3[2]);
            puVar1 = (undefined8 *)*puVar5;
            lVar2 = puVar5[1];
            *param_3 = lVar3;
            param_1 = (ulong *)*puVar1;
            if (SBORROW8(param_1[-2],0x10)) goto LAB_0010767b;
            param_1[-2] = param_1[-2] - 0x10;
            if (SCARRY8(param_3[8],1)) goto LAB_0010767b;
            param_3[8] = param_3[8] + 1;
          } while (((uint)param_1[-2] & 3) == 1);
          param_1[-2] = param_1[-2] & 0xfffffffffffffffc | 1;
          if (SCARRY8(param_3[7],1)) goto LAB_0010767b;
          param_3[7] = param_3[7] + 1;
          lVar3 = ((long)param_1[-2] >> 4) + 2;
          if (SCARRY8(lVar3,param_3[9])) goto LAB_0010767b;
          param_3[9] = lVar3 + param_3[9];
          pcVar4 = *(code **)(lVar2 + 0x20);
        } while (pcVar4 == (code *)0x0);
      } while( true );
    }
  }
LAB_0010767b:
  raiseOverflow();
  return;
}



// WARNING: Removing unreachable block (ram,0x00107716)

void raiseRangeErrorNoArgs(void)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long *in_FS_OFFSET;
  
  pauVar1 = (undefined1 (*) [16])rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,0x50);
  pauVar1[1] = (undefined1  [16])0x0;
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined1 **)pauVar1[1] = NTIv2__9c4PFdzSb6f6iS8eaDhvLZA_;
  pauVar1[3] = (undefined1  [16])0x0;
  pauVar1[4] = (undefined1  [16])0x0;
  *(char **)pauVar1[2] = "RangeDefect";
  *(undefined8 *)(pauVar1[2] + 8) = 0x12;
  *(undefined **)pauVar1[3] = &TM__Q5wkpxktOdTGvlSRo9bzt9aw_16;
  lVar2 = prepareSeqAddUninit(0,0,1,0x18,8);
  *(long *)pauVar1[4] = lVar2;
  *(undefined8 *)(pauVar1[3] + 8) = 1;
  *(char **)(lVar2 + 8) = "sysFatal";
  *(undefined8 *)(lVar2 + 0x10) = 0x35;
  *(char **)(lVar2 + 0x18) = "fatal.nim";
  raiseExceptionAux__system_u4474(pauVar1 + 1);
  return;
}



void init__system_u3381(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *in_FS_OFFSET;
  bool bVar11;
  
  lVar9 = param_2 * 0x10;
  bVar11 = SEXT816(lVar9) != SEXT816(param_2) * SEXT816(0x10);
  *param_1 = 0;
  param_1[1] = param_2;
  if (bVar11) {
    raiseOverflow();
    return;
  }
  if (lVar9 < 0) {
    raiseRangeErrorNoArgs();
    return;
  }
  uVar10 = (ulong)bVar11;
  if (0xfc0 < lVar9) {
    lVar3 = *in_FS_OFFSET;
    LOCK();
    uVar4 = *(ulong *)(lVar3 + -0xa68);
    *(ulong *)(lVar3 + -0xa68) = uVar10;
    UNLOCK();
    if (uVar4 != 0) {
      freeDeferredObjects__system_u6822(lVar3 + -0x3300,uVar4);
    }
    if (lVar9 + 0x30 < 0x3f000001) {
      lVar9 = getBigChunk__system_u6665();
    }
    else {
      lVar9 = getHugeChunk__system_u6685(lVar3 + -0x3300);
    }
    plVar8 = (long *)(lVar9 + 0x30);
    lVar9 = *(long *)(lVar9 + 8) + in_FS_OFFSET[-0x14f];
    goto LAB_0010784c;
  }
  lVar3 = lVar9 + 0xf >> 4;
  uVar4 = in_FS_OFFSET[lVar3 + -0x660];
  iVar6 = (int)lVar9;
  if (uVar4 == 0) {
    lVar5 = *in_FS_OFFSET;
    uVar4 = getBigChunk__system_u6665(lVar5 + -0x3300,0x1000);
    *(undefined8 *)(uVar4 + 0x28) = 0;
    *(undefined8 *)(uVar4 + 0x38) = 0;
    *(long *)(uVar4 + 8) = lVar9;
    *(int *)(uVar4 + 0x34) = iVar6;
    *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    *(int *)(uVar4 + 0x30) = 0xfc0 - iVar6;
    LOCK();
    puVar2 = (ulong *)(lVar3 * 8 + 0x800 + lVar5 + -0x3300);
    plVar8 = (long *)*puVar2;
    *puVar2 = uVar10;
    UNLOCK();
    *(long **)(uVar4 + 0x28) = plVar8;
    if (plVar8 != (long *)0x0) {
      do {
        while (uVar10 = uVar10 + lVar9, uVar4 == ((ulong)plVar8 & 0xfffffffffffff000)) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_00107a5f;
        }
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
LAB_00107a5f:
      plVar8 = (long *)(uVar10 & 0xffffffff);
    }
    *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + (int)plVar8;
    lVar5 = in_FS_OFFSET[-0x14f] - uVar10;
    in_FS_OFFSET[-0x14f] = lVar5;
    if (lVar9 - *(int *)(uVar4 + 0x30) == 0 || lVar9 < *(int *)(uVar4 + 0x30)) {
      lVar5 = in_FS_OFFSET[lVar3 + -0x660];
      *(long *)(uVar4 + 0x18) = lVar5;
      if (lVar5 != 0) {
        *(ulong *)(lVar5 + 0x20) = uVar4;
      }
      in_FS_OFFSET[lVar3 + -0x660] = uVar4;
      lVar5 = in_FS_OFFSET[-0x14f];
    }
    plVar8 = (long *)(uVar4 + 0x40);
  }
  else {
    plVar8 = *(long **)(uVar4 + 0x28);
    if (plVar8 == (long *)0x0) {
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) - iVar6;
      plVar8 = (long *)(uVar4 + 0x40 + (ulong)*(uint *)(uVar4 + 0x34));
      *(uint *)(uVar4 + 0x34) = *(uint *)(uVar4 + 0x34) + iVar6;
LAB_00107925:
      LOCK();
      plVar1 = (long *)(lVar3 * 8 + *in_FS_OFFSET + -0x2b00);
      plVar7 = (long *)*plVar1;
      *plVar1 = 0;
      UNLOCK();
      *(long **)(uVar4 + 0x28) = plVar7;
      if (plVar7 != (long *)0x0) {
        do {
          while (uVar10 = uVar10 + lVar9, uVar4 == ((ulong)plVar7 & 0xfffffffffffff000)) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_0010797f;
          }
          *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
LAB_0010797f:
        plVar7 = (long *)(uVar10 & 0xffffffff);
      }
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + (int)plVar7;
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - uVar10;
      iVar6 = *(int *)(uVar4 + 0x30);
    }
    else {
      lVar5 = *plVar8;
      *(long *)(uVar4 + 0x28) = lVar5;
      if (uVar4 != ((ulong)plVar8 & 0xfffffffffffff000)) {
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + -1;
      }
      iVar6 = *(int *)(uVar4 + 0x30) - iVar6;
      *(int *)(uVar4 + 0x30) = iVar6;
      if (lVar5 == 0) goto LAB_00107925;
    }
    if (lVar9 - iVar6 != 0 && iVar6 <= lVar9) {
      lVar5 = *(long *)(uVar4 + 0x18);
      if (uVar4 == in_FS_OFFSET[lVar3 + -0x660]) {
        in_FS_OFFSET[lVar3 + -0x660] = lVar5;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x20) = 0;
        }
      }
      else {
        *(long *)(*(long *)(uVar4 + 0x20) + 0x18) = lVar5;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
        }
      }
      *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    }
    lVar5 = in_FS_OFFSET[-0x14f];
  }
  lVar9 = lVar9 + lVar5;
LAB_0010784c:
  in_FS_OFFSET[-0x14f] = lVar9;
  param_1[2] = plVar8;
  return;
}



void init__system_u3433(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *in_FS_OFFSET;
  bool bVar11;
  
  lVar9 = param_2 * 0x10;
  bVar11 = SEXT816(lVar9) != SEXT816(param_2) * SEXT816(0x10);
  *param_1 = 0;
  param_1[1] = param_2;
  if (bVar11) {
    raiseOverflow();
    return;
  }
  if (lVar9 < 0) {
    raiseRangeErrorNoArgs();
    return;
  }
  uVar10 = (ulong)bVar11;
  if (0xfc0 < lVar9) {
    lVar3 = *in_FS_OFFSET;
    LOCK();
    uVar4 = *(ulong *)(lVar3 + -0xa68);
    *(ulong *)(lVar3 + -0xa68) = uVar10;
    UNLOCK();
    if (uVar4 != 0) {
      freeDeferredObjects__system_u6822(lVar3 + -0x3300,uVar4);
    }
    if (lVar9 + 0x30 < 0x3f000001) {
      lVar9 = getBigChunk__system_u6665();
    }
    else {
      lVar9 = getHugeChunk__system_u6685(lVar3 + -0x3300);
    }
    plVar8 = (long *)(lVar9 + 0x30);
    lVar9 = *(long *)(lVar9 + 8) + in_FS_OFFSET[-0x14f];
    goto LAB_00107bac;
  }
  lVar3 = lVar9 + 0xf >> 4;
  uVar4 = in_FS_OFFSET[lVar3 + -0x660];
  iVar6 = (int)lVar9;
  if (uVar4 == 0) {
    lVar5 = *in_FS_OFFSET;
    uVar4 = getBigChunk__system_u6665(lVar5 + -0x3300,0x1000);
    *(undefined8 *)(uVar4 + 0x28) = 0;
    *(undefined8 *)(uVar4 + 0x38) = 0;
    *(long *)(uVar4 + 8) = lVar9;
    *(int *)(uVar4 + 0x34) = iVar6;
    *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    *(int *)(uVar4 + 0x30) = 0xfc0 - iVar6;
    LOCK();
    puVar2 = (ulong *)(lVar3 * 8 + 0x800 + lVar5 + -0x3300);
    plVar8 = (long *)*puVar2;
    *puVar2 = uVar10;
    UNLOCK();
    *(long **)(uVar4 + 0x28) = plVar8;
    if (plVar8 != (long *)0x0) {
      do {
        while (uVar10 = uVar10 + lVar9, uVar4 == ((ulong)plVar8 & 0xfffffffffffff000)) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_00107dbf;
        }
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
LAB_00107dbf:
      plVar8 = (long *)(uVar10 & 0xffffffff);
    }
    *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + (int)plVar8;
    lVar5 = in_FS_OFFSET[-0x14f] - uVar10;
    in_FS_OFFSET[-0x14f] = lVar5;
    if (lVar9 - *(int *)(uVar4 + 0x30) == 0 || lVar9 < *(int *)(uVar4 + 0x30)) {
      lVar5 = in_FS_OFFSET[lVar3 + -0x660];
      *(long *)(uVar4 + 0x18) = lVar5;
      if (lVar5 != 0) {
        *(ulong *)(lVar5 + 0x20) = uVar4;
      }
      in_FS_OFFSET[lVar3 + -0x660] = uVar4;
      lVar5 = in_FS_OFFSET[-0x14f];
    }
    plVar8 = (long *)(uVar4 + 0x40);
  }
  else {
    plVar8 = *(long **)(uVar4 + 0x28);
    if (plVar8 == (long *)0x0) {
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) - iVar6;
      plVar8 = (long *)(uVar4 + 0x40 + (ulong)*(uint *)(uVar4 + 0x34));
      *(uint *)(uVar4 + 0x34) = *(uint *)(uVar4 + 0x34) + iVar6;
LAB_00107c85:
      LOCK();
      plVar1 = (long *)(lVar3 * 8 + *in_FS_OFFSET + -0x2b00);
      plVar7 = (long *)*plVar1;
      *plVar1 = 0;
      UNLOCK();
      *(long **)(uVar4 + 0x28) = plVar7;
      if (plVar7 != (long *)0x0) {
        do {
          while (uVar10 = uVar10 + lVar9, uVar4 == ((ulong)plVar7 & 0xfffffffffffff000)) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_00107cdf;
          }
          *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + 1;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
LAB_00107cdf:
        plVar7 = (long *)(uVar10 & 0xffffffff);
      }
      *(int *)(uVar4 + 0x30) = *(int *)(uVar4 + 0x30) + (int)plVar7;
      in_FS_OFFSET[-0x14f] = in_FS_OFFSET[-0x14f] - uVar10;
      iVar6 = *(int *)(uVar4 + 0x30);
    }
    else {
      lVar5 = *plVar8;
      *(long *)(uVar4 + 0x28) = lVar5;
      if (uVar4 != ((ulong)plVar8 & 0xfffffffffffff000)) {
        *(long *)(uVar4 + 0x38) = *(long *)(uVar4 + 0x38) + -1;
      }
      iVar6 = *(int *)(uVar4 + 0x30) - iVar6;
      *(int *)(uVar4 + 0x30) = iVar6;
      if (lVar5 == 0) goto LAB_00107c85;
    }
    if (lVar9 - iVar6 != 0 && iVar6 <= lVar9) {
      lVar5 = *(long *)(uVar4 + 0x18);
      if (uVar4 == in_FS_OFFSET[lVar3 + -0x660]) {
        in_FS_OFFSET[lVar3 + -0x660] = lVar5;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x20) = 0;
        }
      }
      else {
        *(long *)(*(long *)(uVar4 + 0x20) + 0x18) = lVar5;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
        }
      }
      *(undefined1 (*) [16])(uVar4 + 0x18) = (undefined1  [16])0x0;
    }
    lVar5 = in_FS_OFFSET[-0x14f];
  }
  lVar9 = lVar9 + lVar5;
LAB_00107bac:
  in_FS_OFFSET[-0x14f] = lVar9;
  param_1[2] = plVar8;
  return;
}



void collectCyclesBacon__system_u3353(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *in_FS_OFFSET;
  
  lVar7 = in_FS_OFFSET[-8] + -1;
  lVar9 = lVar7;
  lVar1 = in_FS_OFFSET[-8];
  while( true ) {
    lVar10 = lVar9;
    if (SBORROW8(lVar1,1)) goto LAB_00107eb0;
    if (lVar10 < param_2) break;
    puVar3 = (undefined8 *)(lVar10 * 0x10 + in_FS_OFFSET[-6]);
    markGray__system_u3200(*puVar3,puVar3[1],param_1);
    if ((char)in_FS_OFFSET[-0xc] != '\0') {
      return;
    }
    lVar9 = lVar10 + -1;
    lVar1 = lVar10;
  }
  if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x40)) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar8 = 1;
  }
  else {
    if (param_2 <= lVar7) {
      do {
        puVar3 = (undefined8 *)(lVar7 * 0x10 + in_FS_OFFSET[-6]);
        scan__system_u3256(*puVar3,puVar3[1],param_1);
        if ((char)in_FS_OFFSET[-0xc] != '\0') {
          return;
        }
        lVar7 = lVar7 + -1;
      } while (lVar7 != param_2 + -1);
    }
    uVar8 = 2;
  }
  lVar9 = 0;
  lVar1 = *in_FS_OFFSET;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x400;
  uVar4 = rawAlloc__system_u6854(lVar1 + -0x3300,0x4000);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (0 < in_FS_OFFSET[-8]) {
    do {
      lVar1 = *(long *)(in_FS_OFFSET[-6] + lVar9 * 0x10);
      *(undefined8 *)(lVar1 + 8) = 0;
      collectColor__system_u3281
                (lVar1,*(undefined8 *)(in_FS_OFFSET[-6] + 8 + lVar9 * 0x10),uVar8,param_1);
      if ((char)in_FS_OFFSET[-0xc] != '\0') {
        return;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < in_FS_OFFSET[-8]);
  }
  lVar1 = in_FS_OFFSET[-10];
  in_FS_OFFSET[-10] = 0x7fffffffffffffff;
  in_FS_OFFSET[-8] = 0;
  lVar9 = *(long *)(param_1 + 0x18);
  if (0 < lVar9) {
    lVar7 = *in_FS_OFFSET;
    lVar10 = 0;
    do {
      plVar5 = (long *)(lVar10 * 0x10 + *(long *)(param_1 + 0x28));
      puVar3 = (undefined8 *)plVar5[1];
      lVar9 = *plVar5;
      pcVar2 = (code *)*puVar3;
      if ((pcVar2 == (code *)0x0) || ((*pcVar2)(lVar9 + 0x10), (char)in_FS_OFFSET[-0xc] == '\0')) {
        lVar6 = (long)*(short *)(puVar3 + 2);
        if ((lVar6 == 0) || (lVar9 = (lVar9 + 0x10) - (lVar6 + 0xfU & -lVar6), lVar6 < 0x11)) {
          rawDealloc__system_u7030(lVar7 + -0x3300,lVar9);
        }
        else {
          rawDealloc__system_u7030(lVar7 + -0x3300,lVar9 - (ulong)*(ushort *)(lVar9 + -2));
        }
      }
      lVar9 = *(long *)(param_1 + 0x18);
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar9);
  }
  in_FS_OFFSET[-10] = lVar1;
  if (!SCARRY8(lVar9,*(long *)(param_1 + 0x30))) {
    *(long *)(param_1 + 0x30) = lVar9 + *(long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x28) != 0) {
      rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
    return;
  }
LAB_00107eb0:
  raiseOverflow();
  return;
}



void collectCycles__system_u3481(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *in_FS_OFFSET;
  undefined1 local_78 [16];
  long local_68;
  long local_48;
  long local_40;
  char local_28;
  
  lVar2 = *in_FS_OFFSET;
  puVar3 = (undefined8 *)local_78;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar1 = lVar2 + -0x3300;
  local_78._8_8_ = 0x400;
  local_68 = rawAlloc__system_u6854(lVar1,0x4000);
  collectCyclesBacon__system_u3353(local_78,0);
  if ((char)in_FS_OFFSET[-0xc] == '\0') {
    if (local_68 != 0) {
      rawDealloc__system_u7030(lVar1);
      local_68 = 0;
    }
    local_78 = (undefined1  [16])0x0;
    if (in_FS_OFFSET[-8] == 0) {
      if (in_FS_OFFSET[-6] != 0) {
        rawDealloc__system_u7030(lVar2 + -0x3300);
        in_FS_OFFSET[-6] = 0;
      }
      *(undefined1 (*) [16])(in_FS_OFFSET + -8) = (undefined1  [16])0x0;
    }
    if (local_28 == '\0') {
      if (SEXT816(local_48 * 2) == SEXT816(local_48) * SEXT816(2)) {
        lVar2 = in_FS_OFFSET[-10];
        if (local_48 * 2 < local_40) {
          if (lVar2 < 0x1fffffffffffffff) {
            lVar1 = (lVar2 >> 1) + lVar2;
            if (lVar2 < 1) {
              lVar1 = 0xc0;
            }
            in_FS_OFFSET[-10] = lVar1;
          }
        }
        else {
          lVar2 = (lVar2 / 3) * 2;
          if (lVar2 < 0x10) {
            lVar2 = 0x10;
          }
          in_FS_OFFSET[-10] = lVar2;
        }
      }
      else {
        raiseOverflow();
      }
    }
  }
  return;
}



void registerCycle__system_u3506(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *__dest;
  void *__src;
  size_t __n;
  long lVar3;
  size_t sVar4;
  long *in_FS_OFFSET;
  
  lVar3 = in_FS_OFFSET[-8];
  if (SCARRY8(lVar3,1)) {
    raiseOverflow();
    return;
  }
  *(long *)(param_1 + 8) = lVar3 + 1;
  __src = (void *)in_FS_OFFSET[-6];
  if (__src == (void *)0x0) {
    in_FS_OFFSET[-8] = 0;
    in_FS_OFFSET[-7] = 0x400;
    __src = (void *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,0x4000);
    lVar3 = in_FS_OFFSET[-8];
    in_FS_OFFSET[-6] = (long)__src;
  }
  lVar1 = in_FS_OFFSET[-7];
  __dest = __src;
  if (lVar1 <= lVar3) {
    lVar2 = lVar1 + lVar1 / 2;
    if (!SCARRY8(lVar1,lVar1 / 2)) {
      in_FS_OFFSET[-7] = lVar2;
      sVar4 = lVar2 * 0x10;
      if (SEXT816((long)sVar4) == SEXT816(lVar2) * SEXT816(0x10)) {
        if ((long)sVar4 < 0) {
          raiseRangeErrorI(sVar4,0,0x7fffffffffffffff);
          __dest = (void *)in_FS_OFFSET[-6];
          lVar3 = in_FS_OFFSET[-8];
        }
        else {
          if (sVar4 == 0) {
            if (__src != (void *)0x0) {
              __dest = (void *)0x0;
              rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,__src);
              lVar3 = in_FS_OFFSET[-8];
            }
          }
          else {
            lVar3 = *in_FS_OFFSET;
            __dest = (void *)rawAlloc__system_u6854(lVar3 + -0x3300,sVar4);
            if (__src != (void *)0x0) {
              __n = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
              if (0xfc0 < (long)__n) {
                __n = __n - 0x30;
              }
              if (sVar4 - __n == 0 || (long)sVar4 < (long)__n) {
                __n = sVar4;
              }
              memcpy(__dest,__src,__n);
              rawDealloc__system_u7030(lVar3 + -0x3300,__src);
            }
            lVar3 = in_FS_OFFSET[-8];
          }
          in_FS_OFFSET[-6] = (long)__dest;
        }
        goto LAB_001082ae;
      }
    }
    raiseOverflow();
    __dest = (void *)in_FS_OFFSET[-6];
    lVar3 = in_FS_OFFSET[-8];
  }
LAB_001082ae:
  *(long *)((long)__dest + lVar3 * 0x10) = param_1;
  lVar3 = in_FS_OFFSET[-8];
  lVar1 = lVar3 + 1;
  *(undefined8 *)(lVar3 * 0x10 + in_FS_OFFSET[-6] + 8) = param_2;
  if (SCARRY8(lVar3,1)) {
    raiseOverflow();
    lVar1 = in_FS_OFFSET[-8];
  }
  else {
    in_FS_OFFSET[-8] = lVar1;
  }
  if (!SBORROW8(lVar1,0x80)) {
    if (lVar1 + -0x80 < in_FS_OFFSET[-10]) {
      return;
    }
    collectCycles__system_u3481();
    return;
  }
  raiseOverflow();
  return;
}



void rememberCycle__system_u3546(char param_1,ulong *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  uVar3 = param_2[1];
  if (param_1 == '\0') {
    if (uVar3 != 0) {
      return;
    }
    if ((*(byte *)(param_3 + 0x30) & 1) == 0) {
      *param_2 = *param_2 & 0xfffffffffffffffc;
      registerCycle__system_u3506(param_2,param_3);
      return;
    }
  }
  else if (0 < (long)uVar3) {
    if (!SBORROW8(*(long *)(in_FS_OFFSET + -0x40),1)) {
      lVar5 = (uVar3 - 1) * 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(in_FS_OFFSET + -0x30) + (*(long *)(in_FS_OFFSET + -0x40) + -1) * 0x10);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(long *)(in_FS_OFFSET + -0x30) + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      *(ulong *)(*(long *)(*(long *)(in_FS_OFFSET + -0x30) + lVar5) + 8) = uVar3;
      if (!SBORROW8(*(long *)(in_FS_OFFSET + -0x40),1)) {
        *(long *)(in_FS_OFFSET + -0x40) = *(long *)(in_FS_OFFSET + -0x40) + -1;
        param_2[1] = 0;
        return;
      }
    }
    raiseOverflow();
    return;
  }
  return;
}



void eqcopy___stdZtypedthreads_u223(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar5;
  long *in_FS_OFFSET;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (param_2 != 0) {
    if (SCARRY8(*(long *)(param_2 + -0x10),0x10)) {
      raiseOverflow();
    }
    else {
      *(long *)(param_2 + -0x10) = *(long *)(param_2 + -0x10) + 0x10;
    }
  }
  *param_1 = param_2;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  puVar5 = puVar1 + -2;
  if (0xf < uVar2) {
    if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
      return;
    }
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar5,*puVar1);
    return;
  }
  rememberCycle__system_u3546(1,puVar5,*puVar1);
  puVar4 = (undefined8 *)*puVar1;
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(puVar1);
    puVar4 = (undefined8 *)*puVar1;
  }
  lVar3 = (long)*(short *)(puVar4 + 2);
  if ((lVar3 != 0) &&
     (puVar5 = (undefined8 *)((long)puVar1 - (-lVar3 & lVar3 + 0xfU)), 0x10 < lVar3)) {
    rawDealloc__system_u7030
              (*in_FS_OFFSET + -0x3300,(long)puVar5 - (ulong)*(ushort *)((long)puVar5 + -2));
    return;
  }
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,puVar5);
  return;
}



void eqsink___stdZtypedthreads_u231(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar5;
  long *in_FS_OFFSET;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = puVar1[-2];
  puVar5 = puVar1 + -2;
  if (0xf < uVar2) {
    if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
      return;
    }
    puVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,puVar5,*puVar1);
    return;
  }
  rememberCycle__system_u3546(1,puVar5,*puVar1);
  puVar4 = (undefined8 *)*puVar1;
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(puVar1);
    puVar4 = (undefined8 *)*puVar1;
  }
  lVar3 = (long)*(short *)(puVar4 + 2);
  if ((lVar3 != 0) &&
     (puVar5 = (undefined8 *)((long)puVar1 - (-lVar3 & lVar3 + 0xfU)), 0x10 < lVar3)) {
    rawDealloc__system_u7030
              (*in_FS_OFFSET + -0x3300,(long)puVar5 - (ulong)*(ushort *)((long)puVar5 + -2));
    return;
  }
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,puVar5);
  return;
}



void raiseExceptionAux__system_u4474(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar6;
  long *in_FS_OFFSET;
  undefined8 *puVar5;
  
  if ((((code *)in_FS_OFFSET[-0xb] == (code *)0x0) ||
      (cVar3 = (*(code *)in_FS_OFFSET[-0xb])(), cVar3 != '\0')) &&
     ((globalRaiseHook__system_u3681 == (code *)0x0 ||
      (cVar3 = (*globalRaiseHook__system_u3681)(param_1), cVar3 != '\0')))) {
    eqcopy___stdZtypedthreads_u223(param_1 + 0x38,in_FS_OFFSET[-3],1);
    puVar1 = (undefined8 *)in_FS_OFFSET[-3];
    in_FS_OFFSET[-3] = param_1;
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = puVar1[-2];
      puVar6 = puVar1 + -2;
      if (uVar2 < 0x10) {
        rememberCycle__system_u3546(1,puVar6,*puVar1);
        puVar5 = (undefined8 *)*puVar1;
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(puVar1);
          puVar5 = (undefined8 *)*puVar1;
        }
        lVar4 = (long)*(short *)(puVar5 + 2);
        if ((lVar4 == 0) ||
           (puVar6 = (undefined8 *)((long)puVar1 - (-lVar4 & lVar4 + 0xfU)), lVar4 < 0x11)) {
          rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,puVar6);
        }
        else {
          rawDealloc__system_u7030
                    (*in_FS_OFFSET + -0x3300,(long)puVar6 - (ulong)*(ushort *)((long)puVar6 + -2));
        }
      }
      else {
        if (!SBORROW8(uVar2,0x10)) {
          puVar1[-2] = uVar2 - 0x10;
          rememberCycle__system_u3546(0,puVar6,*puVar1);
          *(undefined1 *)(in_FS_OFFSET + -0xc) = 1;
          return;
        }
        raiseOverflow();
      }
    }
    *(undefined1 *)(in_FS_OFFSET + -0xc) = 1;
  }
  return;
}



void raiseRangeErrorI(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  long lVar2;
  long *plVar3;
  void *__dest;
  undefined1 (*pauVar4) [16];
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *__dest_00;
  long *in_FS_OFFSET;
  undefined1 auVar10 [16];
  long local_58;
  undefined1 local_48 [16];
  
  auVar10 = dollar___systemZdollars_u34();
  lVar7 = auVar10._8_8_;
  __n = auVar10._0_8_;
  if ((char)in_FS_OFFSET[-0xc] != '\0') {
    return;
  }
  auVar10 = dollar___systemZdollars_u34(param_2);
  lVar8 = auVar10._8_8_;
  __n_00 = auVar10._0_8_;
  if ((char)in_FS_OFFSET[-0xc] != '\0') {
    return;
  }
  auVar10 = dollar___systemZdollars_u34(param_3);
  lVar9 = auVar10._8_8_;
  __n_01 = auVar10._0_8_;
  if ((char)in_FS_OFFSET[-0xc] != '\0') {
    return;
  }
  lVar6 = __n + __n_00 + 0x1f + __n_01;
  local_48 = (undefined1  [16])0x0;
  if (lVar6 < 1) {
LAB_00108bf1:
    local_58 = *in_FS_OFFSET;
    plVar3 = (long *)0x0;
  }
  else {
    if ((SCARRY8(lVar6,1)) || (lVar2 = lVar6 + 9, SCARRY8(lVar6 + 1,8))) {
      raiseOverflow();
      goto LAB_00108bf1;
    }
    if (lVar2 < 0) {
      raiseRangeErrorI(lVar2,0,0x7fffffffffffffff);
      goto LAB_00108bf1;
    }
    local_58 = *in_FS_OFFSET;
    plVar3 = (long *)rawAlloc__system_u6854(local_58 + -0x3300,lVar2);
    *(undefined1 *)(plVar3 + 1) = 0;
    *plVar3 = lVar6;
  }
  *(undefined4 *)(plVar3 + 3) = 0x203a6567;
  __dest = (void *)((long)plVar3 + 0x1c);
  *(undefined1 *)((long)plVar3 + 0x1c) = 0;
  plVar3[1] = 0x756f2065756c6176;
  plVar3[2] = 0x6e617220666f2074;
  if ((long)__n < 1) {
LAB_00108c1f:
    *(undefined4 *)((long)plVar3 + 0x1c) = 0x746f6e20;
    lVar2 = 0x23;
    lVar6 = 0x1b;
    *(undefined4 *)((long)__dest + 3) = 0x206e6974;
LAB_00108a26:
    *(undefined1 *)((long)plVar3 + lVar6 + 8) = 0;
    __dest_00 = (undefined4 *)(lVar2 + (long)plVar3);
  }
  else {
    __dest = memcpy(__dest,(void *)(lVar7 + 8),__n);
    lVar6 = __n + 0x14;
    if (SCARRY8(__n,0x14)) {
      raiseOverflow();
      goto LAB_00108c1f;
    }
    __dest_00 = (undefined4 *)((long)plVar3 + __n + 0x1c);
    *(undefined1 *)((long)plVar3 + __n + 0x1c) = 0;
    *__dest_00 = 0x746f6e20;
    *(undefined4 *)((long)__dest_00 + 3) = 0x206e6974;
    if (!SCARRY8(lVar6,7)) {
      lVar2 = __n + 0x23;
      lVar6 = __n + 0x1b;
      goto LAB_00108a26;
    }
    raiseOverflow();
  }
  if (0 < (long)__n_00) {
    memcpy(__dest_00,(void *)(lVar8 + 8),__n_00);
    lVar2 = __n_00 + lVar6;
    if (SCARRY8(__n_00,lVar6)) {
      raiseOverflow();
    }
    else {
      *(undefined1 *)((long)plVar3 + lVar2 + 8) = 0;
      __dest_00 = (undefined4 *)((long)plVar3 + lVar2 + 8);
      lVar6 = lVar2;
    }
  }
  *__dest_00 = 0x202e2e20;
  if (SCARRY8(lVar6,4)) {
    raiseOverflow();
  }
  else {
    *(undefined1 *)((long)plVar3 + lVar6 + 0xc) = 0;
    lVar6 = lVar6 + 4;
  }
  if (0 < (long)__n_01) {
    memcpy((void *)((long)plVar3 + lVar6 + 8),(void *)(lVar9 + 8),__n_01);
    if (SCARRY8(__n_01,lVar6)) {
      raiseOverflow();
    }
    else {
      *(undefined1 *)((long)plVar3 + __n_01 + lVar6 + 8) = 0;
      lVar6 = __n_01 + lVar6;
    }
  }
  pauVar4 = (undefined1 (*) [16])rawAlloc__system_u6854(local_58 + -0x3300,0x50);
  pauVar4[1] = (undefined1  [16])0x0;
  *pauVar4 = (undefined1  [16])0x0;
  *(undefined1 **)pauVar4[1] = NTIv2__9c4PFdzSb6f6iS8eaDhvLZA_;
  pauVar4[2] = (undefined1  [16])0x0;
  pauVar4[3] = (undefined1  [16])0x0;
  pauVar4[4] = (undefined1  [16])0x0;
  *(char **)pauVar4[2] = "RangeDefect";
  local_48 = ZEXT816(0);
  nimAsgnStrV2(local_48,lVar6,plVar3);
  lVar6 = *(long *)pauVar4[2];
  *(undefined8 *)(pauVar4[2] + 8) = local_48._0_8_;
  *(undefined8 *)pauVar4[3] = local_48._8_8_;
  if (lVar6 == 0) {
    *(char **)pauVar4[2] = "RangeDefect";
  }
  puVar5 = *(ulong **)pauVar4[4];
  lVar6 = *(long *)(pauVar4[3] + 8);
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)prepareSeqAddUninit(lVar6,0,1,0x18,8);
    *(ulong **)pauVar4[4] = puVar5;
    if (!SCARRY8(lVar6,1)) goto LAB_00108b6b;
  }
  else if (!SCARRY8(lVar6,1)) {
    if ((long)(*puVar5 & 0xbfffffffffffffff) < lVar6 + 1) {
      puVar5 = (ulong *)prepareSeqAddUninit(lVar6,puVar5,1,0x18,8);
      *(ulong **)pauVar4[4] = puVar5;
    }
LAB_00108b6b:
    *(long *)(pauVar4[3] + 8) = lVar6 + 1;
    puVar5 = puVar5 + lVar6 * 3 + 1;
    *puVar5 = (ulong)"sysFatal";
    puVar5[1] = 0x35;
    puVar5[2] = (ulong)"fatal.nim";
    raiseExceptionAux__system_u4474(pauVar4 + 1);
    bVar1 = *(byte *)((long)plVar3 + 7);
    goto joined_r0x00108c80;
  }
  raiseOverflow();
  raiseExceptionAux__system_u4474(pauVar4 + 1);
  bVar1 = *(byte *)((long)plVar3 + 7);
joined_r0x00108c80:
  if ((bVar1 & 0x40) == 0) {
    rawDealloc__system_u7030(local_58 + -0x3300,plVar3);
  }
  if ((lVar9 != 0) && ((*(byte *)(lVar9 + 7) & 0x40) == 0)) {
    rawDealloc__system_u7030(local_58 + -0x3300,lVar9);
  }
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 7) & 0x40) == 0)) {
    rawDealloc__system_u7030(local_58 + -0x3300,lVar8);
  }
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 7) & 0x40) == 0)) {
    rawDealloc__system_u7030(local_58 + -0x3300,lVar7);
    return;
  }
  return;
}



void * alignedAlloc0__system_u1958(size_t param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  size_t __n;
  long *in_FS_OFFSET;
  
  if (param_2 < 0x11) {
    pvVar1 = (void *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300);
    memset(pvVar1,0,param_1);
    return pvVar1;
  }
  lVar2 = param_1 + param_2;
  if (((SCARRY8(param_1,param_2)) || (SBORROW8(lVar2,1))) ||
     (__n = lVar2 + 1, SCARRY8(lVar2 + -1,2))) {
    raiseOverflow();
  }
  else {
    if (-1 < (long)__n) {
      pvVar1 = (void *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300);
      pvVar1 = memset(pvVar1,0,__n);
      param_2 = param_2 - (param_2 - 1U & (ulong)pvVar1);
      *(short *)((long)pvVar1 + param_2 + -2) = (short)param_2;
      return (void *)(param_2 + (long)pvVar1);
    }
    raiseRangeErrorI(__n,0,0x7fffffffffffffff);
  }
  return (void *)0x0;
}



void resize__system_u3297(long param_1)

{
  long lVar1;
  void *__src;
  void *__dest;
  long lVar2;
  size_t __n;
  size_t sVar3;
  long *in_FS_OFFSET;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = lVar1 + lVar1 / 2;
  if (SCARRY8(lVar1,lVar1 / 2)) {
    raiseOverflow();
    return;
  }
  sVar3 = lVar2 * 0x10;
  *(long *)(param_1 + 8) = lVar2;
  if (SEXT816((long)sVar3) == SEXT816(lVar2) * SEXT816(0x10)) {
    if (-1 < (long)sVar3) {
      __src = *(void **)(param_1 + 0x10);
      if (sVar3 == 0) {
        if (__src != (void *)0x0) {
          rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,__src);
        }
        __dest = (void *)0x0;
      }
      else {
        lVar1 = *in_FS_OFFSET;
        __dest = (void *)rawAlloc__system_u6854(lVar1 + -0x3300,sVar3);
        if (__src != (void *)0x0) {
          __n = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
          if (0xfc0 < (long)__n) {
            __n = __n - 0x30;
          }
          if (sVar3 - __n == 0 || (long)sVar3 < (long)__n) {
            __n = sVar3;
          }
          memcpy(__dest,__src,__n);
          rawDealloc__system_u7030(lVar1 + -0x3300,__src);
        }
      }
      *(void **)(param_1 + 0x10) = __dest;
      return;
    }
    raiseRangeErrorI(sVar3,0,0x7fffffffffffffff);
    return;
  }
  raiseOverflow();
  return;
}



void resize__system_u3037(long param_1)

{
  long lVar1;
  void *__src;
  void *__dest;
  long lVar2;
  size_t __n;
  size_t sVar3;
  long *in_FS_OFFSET;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = lVar1 + lVar1 / 2;
  if (SCARRY8(lVar1,lVar1 / 2)) {
    raiseOverflow();
    return;
  }
  sVar3 = lVar2 * 0x10;
  *(long *)(param_1 + 8) = lVar2;
  if (SEXT816((long)sVar3) == SEXT816(lVar2) * SEXT816(0x10)) {
    if (-1 < (long)sVar3) {
      __src = *(void **)(param_1 + 0x10);
      if (sVar3 == 0) {
        if (__src != (void *)0x0) {
          rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,__src);
        }
        __dest = (void *)0x0;
      }
      else {
        lVar1 = *in_FS_OFFSET;
        __dest = (void *)rawAlloc__system_u6854(lVar1 + -0x3300,sVar3);
        if (__src != (void *)0x0) {
          __n = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
          if (0xfc0 < (long)__n) {
            __n = __n - 0x30;
          }
          if (sVar3 - __n == 0 || (long)sVar3 < (long)__n) {
            __n = sVar3;
          }
          memcpy(__dest,__src,__n);
          rawDealloc__system_u7030(lVar1 + -0x3300,__src);
        }
      }
      *(void **)(param_1 + 0x10) = __dest;
      return;
    }
    raiseRangeErrorI(sVar3,0,0x7fffffffffffffff);
    return;
  }
  raiseOverflow();
  return;
}



void nimAsgnStrV2(long *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long *plVar2;
  size_t __n;
  long *in_FS_OFFSET;
  
  puVar1 = (ulong *)param_1[1];
  if ((puVar1 == param_3) && (*param_1 == param_2)) {
    return;
  }
  if ((param_3 == (ulong *)0x0) || ((*param_3 & 0x4000000000000000) != 0)) {
    if ((puVar1 != (ulong *)0x0) && ((*puVar1 & 0x4000000000000000) == 0)) {
      rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
    }
    *param_1 = param_2;
    param_1[1] = (long)param_3;
    return;
  }
  if ((puVar1 == (ulong *)0x0) || ((*puVar1 & 0x4000000000000000) != 0)) {
LAB_001090fd:
    if ((SCARRY8(param_2,1)) || (__n = param_2 + 9, SCARRY8(param_2 + 1,8))) {
      raiseOverflow();
      return;
    }
    if ((long)__n < 0) goto LAB_001091df;
    plVar2 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,__n,0x7fffffffffffffff);
    param_1[1] = (long)plVar2;
    *plVar2 = param_2;
  }
  else if ((long)(*puVar1 & 0xbfffffffffffffff) < param_2) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
    goto LAB_001090fd;
  }
  __n = param_2 + 1;
  *param_1 = param_2;
  if (-1 < (long)__n) {
    memcpy((void *)(param_1[1] + 8),param_3 + 1,__n);
    return;
  }
LAB_001091df:
  raiseRangeErrorI(__n,0,0x7fffffffffffffff);
  return;
}



long alignedAlloc__system_u1912(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *in_FS_OFFSET;
  
  if (param_2 < 0x11) {
    lVar2 = rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,param_1);
    return lVar2;
  }
  lVar2 = param_1 + param_2;
  if (((SCARRY8(param_1,param_2)) || (SBORROW8(lVar2,1))) ||
     (lVar3 = lVar2 + 1, SCARRY8(lVar2 + -1,2))) {
    raiseOverflow();
  }
  else {
    if (-1 < lVar3) {
      uVar1 = rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar3);
      param_2 = param_2 - (param_2 - 1U & uVar1);
      *(short *)(param_2 + -2 + uVar1) = (short)param_2;
      return uVar1 + param_2;
    }
    raiseRangeErrorI(lVar3,0,0x7fffffffffffffff);
  }
  return 0;
}



void * alignedRealloc__system_u1972(void *param_1,size_t param_2,size_t param_3,long param_4)

{
  long lVar1;
  void *__dest;
  size_t __n;
  long *in_FS_OFFSET;
  
  if (param_4 < 0x11) {
    if ((long)param_3 < 1) {
      if (param_1 != (void *)0x0) {
        rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,param_1);
      }
      __dest = (void *)0x0;
    }
    else {
      lVar1 = *in_FS_OFFSET;
      __dest = (void *)rawAlloc__system_u6854(lVar1 + -0x3300,param_3);
      if (param_1 != (void *)0x0) {
        __n = *(size_t *)(((ulong)param_1 & 0xfffffffffffff000) + 8);
        if (0xfc0 < (long)__n) {
          __n = __n - 0x30;
        }
        if ((long)param_3 <= (long)__n) {
          __n = param_3;
        }
        memcpy(__dest,param_1,__n);
        rawDealloc__system_u7030(lVar1 + -0x3300,param_1);
        return __dest;
      }
    }
  }
  else {
    __dest = (void *)alignedAlloc__system_u1912(param_3,param_4);
    memcpy(__dest,param_1,param_2);
    rawDealloc__system_u7030
              (*in_FS_OFFSET + -0x3300,(long)param_1 - (ulong)*(ushort *)((long)param_1 + -2));
  }
  return __dest;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void prepareAdd(size_t *param_1,long param_2)

{
  ulong *__src;
  long lVar1;
  code *pcVar2;
  size_t __n;
  size_t *psVar3;
  ulong uVar4;
  size_t __n_00;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  long *in_FS_OFFSET;
  
  sVar5 = param_2 + *param_1;
  if (!SCARRY8(param_2,*param_1)) {
    __src = (ulong *)param_1[1];
    if ((__src == (ulong *)0x0) || ((*__src >> 0x3e & 1) != 0)) {
      if ((!SCARRY8(sVar5,1)) && (__n = sVar5 + 9, !SCARRY8(sVar5 + 1,8))) {
        if (-1 < (long)__n) {
          psVar3 = (size_t *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,__n,0x7fffffffffffffff);
          param_1[1] = (size_t)psVar3;
          *psVar3 = sVar5;
          __n = *param_1;
          if ((long)__n < 1) {
            if (__src != (ulong *)0x0) {
              return;
            }
            *(undefined1 *)(param_1[1] + 8) = 0;
            return;
          }
          if ((long)sVar5 <= (long)__n) {
            __n = sVar5;
          }
          if (-1 < (long)__n) {
            memcpy((void *)(param_1[1] + 8),__src + 1,__n);
            return;
          }
        }
        goto LAB_001095bc;
      }
    }
    else {
      uVar4 = *__src & 0xbfffffffffffffff;
      if ((long)sVar5 <= (long)uVar4) {
        return;
      }
      sVar6 = 4;
      if (0 < (long)uVar4) {
        sVar6 = ((long)uVar4 >> 1) + uVar4;
        if ((long)uVar4 < 0x8000) {
          sVar6 = uVar4 * 2;
        }
      }
      sVar7 = sVar6;
      if ((long)sVar6 <= (long)sVar5) {
        sVar7 = sVar5;
      }
      if ((!SCARRY8(sVar7,1)) && (__n = sVar7 + 9, !SCARRY8(sVar7 + 1,8))) {
        if (-1 < (long)__n) {
          if (__n == 0) {
            if (__src != (ulong *)0x0) {
              rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,__src);
            }
            param_1[1] = 0;
            _DAT_00000000 = 0;
                    // WARNING: Does not return
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar1 = *in_FS_OFFSET;
          psVar3 = (size_t *)rawAlloc__system_u6854(lVar1 + -0x3300);
          if (__src != (ulong *)0x0) {
            __n_00 = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
            if (0xfc0 < (long)__n_00) {
              __n_00 = __n_00 - 0x30;
            }
            if ((long)__n <= (long)__n_00) {
              __n_00 = __n;
            }
            memcpy(psVar3,__src,__n_00);
            rawDealloc__system_u7030(lVar1 + -0x3300);
          }
          param_1[1] = (size_t)psVar3;
          *psVar3 = sVar7;
          if ((long)sVar6 <= (long)sVar5) {
            return;
          }
          __n = sVar7 - sVar5;
          if (SBORROW8(sVar7,sVar5)) goto LAB_00109489;
          if (-1 < (long)__n) {
            memset((void *)(param_1[1] + 9 + sVar5),0,__n);
            return;
          }
        }
LAB_001095bc:
        raiseRangeErrorI(__n,0,0x7fffffffffffffff);
        return;
      }
    }
  }
LAB_00109489:
  raiseOverflow();
  return;
}



undefined1  [16] rawNewString(long param_1)

{
  long lVar1;
  long *plVar2;
  long *in_FS_OFFSET;
  undefined1 local_18 [16];
  
  if (0 < param_1) {
    if ((SCARRY8(param_1,1)) || (lVar1 = param_1 + 9, SCARRY8(param_1 + 1,8))) {
      raiseOverflow();
    }
    else {
      if (-1 < lVar1) {
        plVar2 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar1);
        *plVar2 = param_1;
        *(undefined1 *)(plVar2 + 1) = 0;
        goto LAB_00109661;
      }
      raiseRangeErrorI(lVar1,0,0x7fffffffffffffff);
    }
  }
  plVar2 = (long *)0x0;
LAB_00109661:
  local_18._8_8_ = 0;
  local_18._0_8_ = plVar2;
  local_18 = local_18 << 0x40;
  return local_18;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void setLengthStrV2(size_t *param_1,size_t param_2)

{
  long lVar1;
  code *pcVar2;
  size_t *psVar3;
  ulong uVar4;
  size_t sVar5;
  size_t __n;
  ulong *__src;
  size_t __n_00;
  size_t sVar6;
  long *in_FS_OFFSET;
  
  if (param_2 != 0) {
    __src = (ulong *)param_1[1];
    if ((__src == (ulong *)0x0) || ((*__src >> 0x3e & 1) != 0)) {
      sVar6 = param_2 + 1;
      if ((SCARRY8(param_2,1)) || (__n_00 = param_2 + 9, SCARRY8(sVar6,8))) {
LAB_001098e0:
        raiseOverflow();
        return;
      }
      if ((long)__n_00 < 0) {
LAB_001097bc:
        raiseRangeErrorI(__n_00,0,0x7fffffffffffffff);
        return;
      }
      psVar3 = (size_t *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300);
      param_1[1] = (size_t)psVar3;
      *psVar3 = param_2;
      __n_00 = *param_1;
      if ((long)__n_00 < 1) {
        __n_00 = sVar6;
        if ((long)sVar6 < 0) goto LAB_001097bc;
        memset((void *)(param_1[1] + 8),0,sVar6);
        __src = (ulong *)param_1[1];
      }
      else {
        if ((long)param_2 < (long)__n_00) {
          __n_00 = param_2;
        }
        if ((long)__n_00 < 0) goto LAB_001097bc;
        memcpy((void *)(param_1[1] + 8),__src + 1,__n_00);
        sVar6 = *param_1;
        if ((long)sVar6 < (long)param_2) {
          if ((SBORROW8(param_2,sVar6)) ||
             (__n_00 = (param_2 - sVar6) + 1, SCARRY8(param_2 - sVar6,1))) goto LAB_001098e0;
          if ((long)__n_00 < 0) goto LAB_001097bc;
          memset((void *)(param_1[1] + 8 + sVar6),0,__n_00);
          __src = (ulong *)param_1[1];
        }
        else {
          *(undefined1 *)(param_1[1] + 8 + param_2) = 0;
          __src = (ulong *)param_1[1];
        }
      }
    }
    else if (((long)*param_1 < (long)param_2) &&
            (uVar4 = *__src & 0xbfffffffffffffff, (long)uVar4 < (long)param_2)) {
      sVar6 = 4;
      if (0 < (long)uVar4) {
        sVar6 = uVar4 * 2;
        if (0x7fff < (long)uVar4) {
          sVar6 = ((long)uVar4 >> 1) + uVar4;
        }
      }
      sVar5 = uVar4 + 9;
      __n_00 = sVar5;
      if ((long)sVar5 < 0) goto LAB_001097bc;
      if ((long)sVar6 <= (long)param_2) {
        sVar6 = param_2;
      }
      if ((SCARRY8(sVar6,1)) || (__n_00 = sVar6 + 9, SCARRY8(sVar6 + 1,8))) goto LAB_001098e0;
      if ((long)__n_00 < 0) goto LAB_001097bc;
      if (__n_00 == 0) {
        if (__src != (ulong *)0x0) {
          rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,__src);
        }
        param_1[1] = 0;
        _DAT_00000000 = 0;
                    // WARNING: Does not return
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *in_FS_OFFSET;
      psVar3 = (size_t *)rawAlloc__system_u6854(lVar1 + -0x3300);
      if (__src != (ulong *)0x0) {
        __n = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
        if (0xfc0 < (long)__n) {
          __n = __n - 0x30;
        }
        if ((long)__n_00 <= (long)__n) {
          __n = __n_00;
        }
        memcpy(psVar3,__src,__n);
        rawDealloc__system_u7030(lVar1 + -0x3300);
      }
      if ((long)sVar5 < (long)__n_00) {
        memset((void *)((long)psVar3 + sVar5),0,__n_00 - sVar5);
      }
      param_1[1] = (size_t)psVar3;
      *psVar3 = sVar6;
      __src = (ulong *)param_1[1];
    }
    *(undefined1 *)((long)__src + param_2 + 8) = 0;
  }
  *param_1 = param_2;
  return;
}



ulong nimNewObj(long param_1,long param_2)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  ulong unaff_R12;
  long *in_FS_OFFSET;
  
  if (param_2 == 0) {
    sVar2 = param_1 + 0x10;
    if (SCARRY8(param_1,0x10)) {
LAB_00109aa0:
      raiseOverflow();
      return 0;
    }
    if ((long)sVar2 < 0) {
LAB_00109ae0:
      raiseRangeErrorI(sVar2,0,0x7fffffffffffffff);
      return 0;
    }
    unaff_R12 = 0x10;
  }
  else {
    if ((SBORROW8(param_2,1)) || (SCARRY8(param_2 - 1U,0x10))) {
      raiseOverflow();
    }
    else {
      unaff_R12 = ~(param_2 - 1U) & param_2 + 0xfU;
    }
    sVar2 = param_1 + unaff_R12;
    if (SCARRY8(param_1,unaff_R12)) goto LAB_00109aa0;
    if ((long)sVar2 < 0) goto LAB_00109ae0;
    if (param_2 < 0) {
      raiseRangeErrorI(param_2,0,0x7fffffffffffffff);
      return 0;
    }
    if (0x10 < param_2) {
      lVar3 = sVar2 + param_2;
      if (((!SCARRY8(sVar2,param_2)) && (!SBORROW8(lVar3,1))) &&
         (sVar2 = lVar3 + 1, !SCARRY8(lVar3 + -1,2))) {
        if (-1 < (long)sVar2) {
          pvVar1 = (void *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300);
          pvVar1 = memset(pvVar1,0,sVar2);
          param_2 = param_2 - (param_2 - 1U & (ulong)pvVar1);
          *(short *)(param_2 + -2 + (long)pvVar1) = (short)param_2;
          return (long)pvVar1 + param_2 + unaff_R12;
        }
        raiseRangeErrorI(sVar2,0,0x7fffffffffffffff);
        return unaff_R12;
      }
      raiseOverflow();
      return unaff_R12;
    }
  }
  pvVar1 = (void *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300);
  pvVar1 = memset(pvVar1,0,sVar2);
  return unaff_R12 + (long)pvVar1;
}



void collectColor__system_u3281(ulong *param_1,long param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  void *__src;
  long lVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  undefined8 *puVar7;
  size_t __n;
  long lVar8;
  size_t sVar9;
  long *in_FS_OFFSET;
  
  if ((((uint)*param_1 & 3) == param_3) && (param_1[1] == 0)) {
    *param_1 = *param_1 & 0xfffffffffffffffc;
    lVar4 = param_4[3];
    if (param_4[4] <= lVar4) {
      resize__system_u3297(param_4 + 3);
      lVar4 = param_4[3];
    }
    *(ulong **)(lVar4 * 0x10 + param_4[5]) = param_1;
    *(long *)(param_4[3] * 0x10 + param_4[5] + 8) = param_2;
    if (SCARRY8(param_4[3],1)) {
      raiseOverflow();
    }
    else {
      param_4[3] = param_4[3] + 1;
    }
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      (**(code **)(param_2 + 0x20))(param_1 + 2,param_4);
    }
    while ((char)in_FS_OFFSET[-0xc] == '\0') {
LAB_00109c00:
      do {
        if (*param_4 < 1) {
          return;
        }
        lVar5 = *param_4 + -1;
        puVar7 = (undefined8 *)(lVar5 * 0x10 + param_4[2]);
        plVar1 = (long *)*puVar7;
        lVar4 = puVar7[1];
        *param_4 = lVar5;
        lVar5 = *plVar1;
        *plVar1 = 0;
      } while ((((uint)*(undefined8 *)(lVar5 + -0x10) & 3) != param_3) ||
              (*(long *)(lVar5 + -8) != 0));
      lVar2 = param_4[4];
      lVar8 = param_4[3];
      if (lVar8 < lVar2) {
        __dest = (void *)param_4[5];
      }
      else {
        lVar6 = lVar2 + lVar2 / 2;
        if (!SCARRY8(lVar2,lVar2 / 2)) {
          sVar9 = lVar6 * 0x10;
          param_4[4] = lVar6;
          if (SEXT816((long)sVar9) == SEXT816(lVar6) * SEXT816(0x10)) {
            if ((long)sVar9 < 0) {
              raiseRangeErrorI(sVar9,0,0x7fffffffffffffff);
              __dest = (void *)param_4[5];
              lVar8 = param_4[3];
            }
            else {
              __src = (void *)param_4[5];
              if (sVar9 == 0) {
                __dest = (void *)0x0;
                if (__src != (void *)0x0) {
                  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
                  lVar8 = param_4[3];
                }
              }
              else {
                lVar2 = *in_FS_OFFSET;
                __dest = (void *)rawAlloc__system_u6854(lVar2 + -0x3300);
                if (__src == (void *)0x0) {
                  lVar8 = param_4[3];
                }
                else {
                  __n = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
                  if (0xfc0 < (long)__n) {
                    __n = __n - 0x30;
                  }
                  if (__n != sVar9 && SBORROW8(__n,sVar9) == (long)(__n + lVar6 * -0x10) < 0) {
                    __n = sVar9;
                  }
                  memcpy(__dest,__src,__n);
                  rawDealloc__system_u7030(lVar2 + -0x3300);
                  lVar8 = param_4[3];
                }
              }
              param_4[5] = (long)__dest;
            }
            goto LAB_00109c59;
          }
        }
        raiseOverflow();
        __dest = (void *)param_4[5];
        lVar8 = param_4[3];
      }
LAB_00109c59:
      *(long *)((long)__dest + lVar8 * 0x10) = lVar5 + -0x10;
      *(long *)(param_4[3] * 0x10 + param_4[5] + 8) = lVar4;
      if (SCARRY8(param_4[3],1)) {
        raiseOverflow();
      }
      else {
        param_4[3] = param_4[3] + 1;
      }
      *(ulong *)(lVar5 + -0x10) = *(ulong *)(lVar5 + -0x10) & 0xfffffffffffffffc;
      pcVar3 = *(code **)(lVar4 + 0x20);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(lVar5);
        if ((char)in_FS_OFFSET[-0xc] != '\0') {
          return;
        }
        goto LAB_00109c00;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long * newSeqPayloadUninit(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong unaff_R13;
  long *in_FS_OFFSET;
  
  if (param_1 < 1) {
    return (long *)0x0;
  }
  if (param_3 == 0) {
    lVar5 = param_2 * param_1;
    if ((SEXT816(lVar5) != SEXT816(param_2) * SEXT816(param_1)) ||
       (lVar2 = lVar5 + 8, SCARRY8(lVar5,8))) goto LAB_00109f70;
    if (lVar2 < 0) goto LAB_00109f88;
  }
  else {
    if ((SBORROW8(param_3,1)) || (SCARRY8(param_3 - 1U,8))) {
      raiseOverflow();
    }
    else {
      unaff_R13 = ~(param_3 - 1U) & param_3 + 7U;
    }
    lVar5 = param_2 * param_1;
    if ((SEXT816(lVar5) != SEXT816(param_2) * SEXT816(param_1)) ||
       (lVar2 = unaff_R13 + lVar5, SCARRY8(unaff_R13,lVar5))) {
LAB_00109f70:
      raiseOverflow();
      return (long *)0x0;
    }
    if (lVar2 < 0) {
LAB_00109f88:
      raiseRangeErrorI(lVar2,0,0x7fffffffffffffff);
      return (long *)0x0;
    }
    if (param_3 < 0) {
      raiseRangeErrorI(param_3,0,0x7fffffffffffffff);
      return (long *)0x0;
    }
    if (0x10 < param_3) {
      lVar5 = lVar2 + param_3;
      if (!SCARRY8(lVar2,param_3)) {
        if (SBORROW8(lVar5,1)) {
          plVar4 = (long *)FUN_001011fc();
          return plVar4;
        }
        lVar2 = lVar5 + 1;
        if (!SCARRY8(lVar5 + -1,2)) {
          if (lVar2 < 0) {
            raiseRangeErrorI(lVar2,0,0x7fffffffffffffff);
            goto LAB_001011f0;
          }
          uVar3 = rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar2);
          param_3 = param_3 - (param_3 - 1U & uVar3);
          *(short *)((uVar3 - 2) + param_3) = (short)param_3;
          plVar4 = (long *)(uVar3 + param_3);
          goto LAB_00109f29;
        }
      }
      raiseOverflow();
LAB_001011f0:
      _DAT_00000000 = 0;
                    // WARNING: Does not return
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  plVar4 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar2);
LAB_00109f29:
  *plVar4 = param_1;
  return plVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong * prepareSeqAddUninit(long param_1,ulong *param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  size_t sVar8;
  long *in_FS_OFFSET;
  ulong local_48;
  
  local_48 = 8;
  if (param_5 != 0) {
    if ((SBORROW8(param_5,1)) || (SCARRY8(param_5 - 1U,8))) {
      local_48 = 8;
      raiseOverflow();
    }
    else {
      local_48 = ~(param_5 - 1U) & param_5 + 7U;
    }
  }
  if (param_3 < 1) {
    return param_2;
  }
  if (param_2 == (ulong *)0x0) {
    if (!SCARRY8(param_3,param_1)) {
      puVar2 = (ulong *)newSeqPayloadUninit(param_3 + param_1,param_4,param_5);
      return puVar2;
    }
  }
  else {
    uVar4 = 4;
    uVar3 = *param_2 & 0xbfffffffffffffff;
    if (((0 < (long)uVar3) && (uVar4 = uVar3 * 2, 0x7fff < (long)uVar3)) &&
       (uVar4 = ((long)uVar3 >> 1) + uVar3, SCARRY8((long)uVar3 >> 1,uVar3))) {
      raiseOverflow();
    }
    if (!SCARRY8(param_3,param_1)) {
      if ((long)uVar4 <= param_3 + param_1) {
        uVar4 = param_3 + param_1;
      }
      if ((*param_2 & 0x4000000000000000) == 0) {
        lVar5 = uVar3 * param_4;
        if (((SEXT816(lVar5) == SEXT816((long)uVar3) * SEXT816(param_4)) &&
            (sVar7 = lVar5 + local_48, !SCARRY8(lVar5,local_48))) &&
           ((lVar5 = param_4 * uVar4, SEXT816(lVar5) == SEXT816(param_4) * SEXT816((long)uVar4) &&
            (sVar8 = lVar5 + local_48, !SCARRY8(lVar5,local_48))))) {
          if ((long)sVar7 < 0) {
            raiseRangeErrorI(sVar7,0,0x7fffffffffffffff);
            return (ulong *)0x0;
          }
          if ((long)sVar8 < 0) {
            raiseRangeErrorI(sVar8,0,0x7fffffffffffffff);
            return (ulong *)0x0;
          }
          if (-1 < param_5) {
            if (param_5 < 0x11) {
              if (sVar8 == 0) {
                rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,param_2);
                _DAT_00000000 = 0;
                    // WARNING: Does not return
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              lVar5 = *in_FS_OFFSET;
              puVar2 = (ulong *)rawAlloc__system_u6854(lVar5 + -0x3300,sVar8);
              sVar7 = *(size_t *)(((ulong)param_2 & 0xfffffffffffff000) + 8);
              if (0xfc0 < (long)sVar7) {
                sVar7 = sVar7 - 0x30;
              }
              if ((long)sVar8 <= (long)sVar7) {
                sVar7 = sVar8;
              }
              memcpy(puVar2,param_2,sVar7);
              rawDealloc__system_u7030(lVar5 + -0x3300,param_2);
            }
            else {
              puVar2 = (ulong *)alignedAlloc__system_u1912(sVar8,param_5);
              memcpy(puVar2,param_2,sVar7);
              rawDealloc__system_u7030
                        (*in_FS_OFFSET + -0x3300,
                         (long)param_2 - (ulong)*(ushort *)((long)param_2 + -2));
            }
            *puVar2 = uVar4;
            return puVar2;
          }
LAB_0010a1e8:
          raiseRangeErrorI(param_5,0,0x7fffffffffffffff);
          return (ulong *)0x0;
        }
      }
      else {
        lVar5 = param_4 * uVar4;
        if ((SEXT816(lVar5) == SEXT816(param_4) * SEXT816((long)uVar4)) &&
           (lVar6 = lVar5 + local_48, !SCARRY8(lVar5,local_48))) {
          if (lVar6 < 0) {
            raiseRangeErrorI(lVar6,0,0x7fffffffffffffff);
            return (ulong *)0x0;
          }
          if (param_5 < 0) goto LAB_0010a1e8;
          puVar2 = (ulong *)alignedAlloc__system_u1912(lVar6,param_5);
          sVar7 = param_1 * param_4;
          if (SEXT816((long)sVar7) == SEXT816(param_1) * SEXT816(param_4)) {
            if ((long)sVar7 < 0) {
              raiseRangeErrorI(sVar7,0,0x7fffffffffffffff);
              return (ulong *)0x0;
            }
            memcpy((void *)((long)puVar2 + local_48),(void *)((long)param_2 + local_48),sVar7);
            *puVar2 = uVar4;
            return puVar2;
          }
        }
      }
    }
  }
  raiseOverflow();
  return (ulong *)0x0;
}



void raiseIndexError2(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  ulong *puVar3;
  size_t __n;
  size_t __n_00;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long *in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 local_48 [16];
  
  if (param_2 < 0) {
    lVar8 = 0x2b;
    plVar5 = (long *)0x0;
    lVar9 = *in_FS_OFFSET;
    puVar10 = &TM__Q5wkpxktOdTGvlSRo9bzt9aw_81;
    plVar11 = (long *)&TM__Q5wkpxktOdTGvlSRo9bzt9aw_81;
  }
  else {
    auVar12 = dollar___systemZdollars_u14();
    lVar6 = auVar12._8_8_;
    __n = auVar12._0_8_;
    if ((char)in_FS_OFFSET[-0xc] != '\0') {
      return;
    }
    auVar12 = dollar___systemZdollars_u14(param_2);
    lVar7 = auVar12._8_8_;
    __n_00 = auVar12._0_8_;
    if ((char)in_FS_OFFSET[-0xc] != '\0') {
      return;
    }
    lVar8 = __n + 0x13 + __n_00;
    local_48 = (undefined1  [16])0x0;
    if (lVar8 < 1) {
LAB_0010a61d:
      lVar9 = *in_FS_OFFSET;
      plVar5 = (long *)0x0;
    }
    else {
      if ((SCARRY8(lVar8,1)) || (lVar4 = lVar8 + 9, SCARRY8(lVar8 + 1,8))) {
        raiseOverflow();
        goto LAB_0010a61d;
      }
      if (lVar4 < 0) {
        raiseRangeErrorI(lVar4,0,0x7fffffffffffffff);
        goto LAB_0010a61d;
      }
      lVar9 = *in_FS_OFFSET;
      plVar5 = (long *)rawAlloc__system_u6854(lVar9 + -0x3300,lVar4);
      *(undefined1 *)(plVar5 + 1) = 0;
      *plVar5 = lVar8;
    }
    *(undefined4 *)(plVar5 + 1) = 0x65646e69;
    puVar10 = (undefined *)((long)plVar5 + 0xe);
    *(undefined2 *)((long)plVar5 + 0xc) = 0x2078;
    *(undefined1 *)((long)plVar5 + 0xe) = 0;
    if ((long)__n < 1) {
LAB_0010a63f:
      *(undefined8 *)((long)plVar5 + 0xe) = 0x206e6920746f6e20;
      *(undefined8 *)(puVar10 + 5) = 0x202e2e2030206e69;
      lVar4 = 0x13;
LAB_0010a575:
      lVar8 = lVar4;
      *(undefined1 *)((long)plVar5 + lVar8 + 8) = 0;
    }
    else {
      puVar10 = (undefined *)memcpy(puVar10,(void *)(lVar6 + 8),__n);
      lVar8 = __n + 6;
      if (SCARRY8(__n,6)) {
        raiseOverflow();
        goto LAB_0010a63f;
      }
      puVar1 = (undefined8 *)((long)plVar5 + __n + 0xe);
      *(undefined1 *)((long)plVar5 + __n + 0xe) = 0;
      *puVar1 = 0x206e6920746f6e20;
      *(undefined8 *)((long)puVar1 + 5) = 0x202e2e2030206e69;
      lVar4 = __n + 0x13;
      if (!SCARRY8(lVar8,0xd)) goto LAB_0010a575;
      raiseOverflow();
    }
    if (0 < (long)__n_00) {
      memcpy((undefined *)((long)plVar5 + lVar8 + 8),(void *)(lVar7 + 8),__n_00);
      if (SCARRY8(__n_00,lVar8)) {
        raiseOverflow();
      }
      else {
        *(undefined1 *)((long)plVar5 + __n_00 + lVar8 + 8) = 0;
        lVar8 = __n_00 + lVar8;
      }
    }
    if ((lVar7 != 0) && ((*(byte *)(lVar7 + 7) & 0x40) == 0)) {
      rawDealloc__system_u7030(lVar9 + -0x3300,lVar7);
    }
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 7) & 0x40) == 0)) {
      rawDealloc__system_u7030(lVar9 + -0x3300,lVar6);
    }
    puVar10 = (undefined *)0x0;
    plVar11 = plVar5;
  }
  pauVar2 = (undefined1 (*) [16])rawAlloc__system_u6854(lVar9 + -0x3300,0x50);
  pauVar2[1] = (undefined1  [16])0x0;
  *(undefined1 **)pauVar2[1] = NTIv2__AZEPCycOV30yR2LweMemkg_;
  *pauVar2 = (undefined1  [16])0x0;
  pauVar2[2] = (undefined1  [16])0x0;
  pauVar2[3] = (undefined1  [16])0x0;
  pauVar2[4] = (undefined1  [16])0x0;
  *(char **)pauVar2[2] = "IndexDefect";
  local_48 = ZEXT816(0);
  nimAsgnStrV2(local_48,lVar8,plVar11);
  lVar6 = *(long *)pauVar2[2];
  *(undefined8 *)(pauVar2[2] + 8) = local_48._0_8_;
  *(undefined8 *)pauVar2[3] = local_48._8_8_;
  if (lVar6 == 0) {
    *(char **)pauVar2[2] = "IndexDefect";
  }
  puVar3 = *(ulong **)pauVar2[4];
  lVar6 = *(long *)(pauVar2[3] + 8);
  if (puVar3 == (ulong *)0x0) {
    puVar3 = (ulong *)prepareSeqAddUninit(lVar6,0,1,0x18,8);
    *(ulong **)pauVar2[4] = puVar3;
    if (SCARRY8(lVar6,1)) goto LAB_0010a60e;
  }
  else {
    if (SCARRY8(lVar6,1)) {
LAB_0010a60e:
      raiseOverflow();
      goto LAB_0010a3d5;
    }
    if ((long)(*puVar3 & 0xbfffffffffffffff) < lVar6 + 1) {
      puVar3 = (ulong *)prepareSeqAddUninit(lVar6,puVar3,1,0x18,8);
      *(ulong **)pauVar2[4] = puVar3;
    }
  }
  *(long *)(pauVar2[3] + 8) = lVar6 + 1;
  puVar3 = puVar3 + lVar6 * 3 + 1;
  *puVar3 = (ulong)"sysFatal";
  puVar3[1] = 0x35;
  puVar3[2] = (ulong)"fatal.nim";
LAB_0010a3d5:
  raiseExceptionAux__system_u4474(pauVar2 + 1);
  if ((plVar5 != (long *)0x0) && ((*plVar5 & 0x4000000000000000) == 0)) {
    rawDealloc__system_u7030(lVar9 + -0x3300,plVar5);
  }
  if ((puVar10 != (undefined *)0x0) && ((puVar10[7] & 0x40) == 0)) {
    rawDealloc__system_u7030(lVar9 + -0x3300,puVar10);
    return;
  }
  return;
}



void raiseExceptionEx(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  ulong *puVar6;
  undefined8 *puVar7;
  long *in_FS_OFFSET;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  if ((param_4 == 0) || (param_3 == 0)) goto LAB_0010a75b;
  puVar6 = *(ulong **)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x28);
  if (puVar6 == (ulong *)0x0) {
    puVar6 = (ulong *)prepareSeqAddUninit(lVar4,0,1,0x18,8);
    *(ulong **)(param_1 + 0x30) = puVar6;
    if (SCARRY8(lVar4,1)) goto LAB_0010a8ae;
  }
  else {
    if (SCARRY8(lVar4,1)) {
LAB_0010a8ae:
      raiseOverflow();
      goto LAB_0010a75b;
    }
    if ((long)(*puVar6 & 0xbfffffffffffffff) < lVar4 + 1) {
      puVar6 = (ulong *)prepareSeqAddUninit(lVar4,puVar6,1,0x18,8);
      *(ulong **)(param_1 + 0x30) = puVar6;
    }
  }
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  puVar6 = puVar6 + lVar4 * 3 + 1;
  *puVar6 = param_3;
  puVar6[1] = param_5;
  puVar6[2] = param_4;
LAB_0010a75b:
  if ((((code *)in_FS_OFFSET[-0xb] == (code *)0x0) ||
      (cVar3 = (*(code *)in_FS_OFFSET[-0xb])(param_1), cVar3 != '\0')) &&
     ((globalRaiseHook__system_u3681 == (code *)0x0 ||
      (cVar3 = (*globalRaiseHook__system_u3681)(param_1), cVar3 != '\0')))) {
    eqcopy___stdZtypedthreads_u223(param_1 + 0x38,in_FS_OFFSET[-3],1);
    puVar1 = (undefined8 *)in_FS_OFFSET[-3];
    in_FS_OFFSET[-3] = param_1;
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = puVar1[-2];
      puVar7 = puVar1 + -2;
      if (uVar2 < 0x10) {
        rememberCycle__system_u3546(1,puVar7,*puVar1);
        puVar5 = (undefined8 *)*puVar1;
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(puVar1);
          puVar5 = (undefined8 *)*puVar1;
        }
        lVar4 = (long)*(short *)(puVar5 + 2);
        if ((lVar4 == 0) ||
           (puVar7 = (undefined8 *)((long)puVar1 - (lVar4 + 0xfU & -lVar4)), lVar4 < 0x11)) {
          rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,puVar7);
        }
        else {
          rawDealloc__system_u7030
                    (*in_FS_OFFSET + -0x3300,(long)puVar7 - (ulong)*(ushort *)((long)puVar7 + -2));
        }
      }
      else {
        if (!SBORROW8(uVar2,0x10)) {
          puVar1[-2] = uVar2 - 0x10;
          rememberCycle__system_u3546(0,puVar7,*puVar1);
          *(undefined1 *)(in_FS_OFFSET + -0xc) = 1;
          return;
        }
        raiseOverflow();
      }
    }
    *(undefined1 *)(in_FS_OFFSET + -0xc) = 1;
  }
  return;
}



undefined1  [16] eqdup___system_u2711(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  size_t __n;
  long *in_FS_OFFSET;
  undefined1 auVar3 [16];
  
  plVar2 = param_2;
  if ((param_2 != (long *)0x0) && ((*param_2 & 0x4000000000000000) == 0)) {
    __n = param_1 + 1;
    if ((SCARRY8(param_1,1)) || (lVar1 = param_1 + 9, SCARRY8(__n,8))) {
      raiseOverflow();
    }
    else {
      if (-1 < lVar1) {
        plVar2 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar1);
        *plVar2 = param_1;
        if ((long)__n < 0) {
          raiseRangeErrorI(__n,0,0x7fffffffffffffff);
        }
        else {
          memcpy(plVar2 + 1,param_2 + 1,__n);
        }
        goto LAB_0010a98b;
      }
      raiseRangeErrorI(lVar1,0,0x7fffffffffffffff);
    }
    param_1 = 0;
    plVar2 = (long *)0x0;
  }
LAB_0010a98b:
  auVar3._8_8_ = plVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void add__system_u4495(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *__dest;
  size_t sVar6;
  ulong *__src;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *in_FS_OFFSET;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  uVar1 = *param_1;
  __src = (ulong *)param_1[1];
  uVar9 = uVar1 + 1;
  if (__src == (ulong *)0x0) {
    if (SCARRY8(uVar1,1)) {
      raiseOverflow();
      param_1[1] = 0;
      goto LAB_0010ab1a;
    }
    if ((long)uVar9 < 1) goto LAB_0010aa37;
    lVar4 = uVar9 * 0x18;
    if (SEXT816(lVar4) != SEXT816((long)uVar9) * SEXT816(0x18)) {
      raiseOverflow();
      param_1[1] = 0;
      goto LAB_0010aa37;
    }
    lVar5 = lVar4 + 8;
    if (!SCARRY8(lVar4,8)) {
      if (lVar5 < 0) goto LAB_0010ac80;
      __dest = (ulong *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar5);
      *__dest = uVar9;
      goto LAB_0010ab74;
    }
    goto LAB_0010acb6;
  }
  if (SCARRY8(uVar1,1)) {
LAB_0010ab1a:
    raiseOverflow();
    return;
  }
  uVar3 = *__src;
  uVar8 = uVar3 & 0xbfffffffffffffff;
  if ((long)uVar9 <= (long)uVar8) goto LAB_0010aa37;
  uVar10 = 4;
  if (((0 < (long)uVar8) && (uVar10 = uVar8 * 2, 0x7fff < (long)uVar8)) &&
     (uVar10 = ((long)uVar8 >> 1) + uVar8, SCARRY8((long)uVar8 >> 1,uVar8))) {
    raiseOverflow();
    uVar3 = *__src;
  }
  if ((long)uVar10 <= (long)uVar9) {
    uVar10 = uVar9;
  }
  if ((uVar3 >> 0x3e & 1) == 0) {
    lVar4 = uVar8 * 0x18;
    if (((SEXT816(lVar4) == SEXT816((long)uVar8) * SEXT816(0x18)) &&
        (sVar7 = lVar4 + 8, !SCARRY8(lVar4,8))) &&
       ((lVar4 = uVar10 * 0x18, SEXT816(lVar4) == SEXT816((long)uVar10) * SEXT816(0x18) &&
        (sVar6 = lVar4 + 8, !SCARRY8(lVar4,8))))) {
      if ((long)sVar7 < 0) {
LAB_0010ac60:
        __dest = (ulong *)0x0;
        raiseRangeErrorI(sVar7,0,0x7fffffffffffffff);
      }
      else if ((long)sVar6 < 0) {
        __dest = (ulong *)0x0;
        raiseRangeErrorI(sVar6,0,0x7fffffffffffffff);
      }
      else {
        if (sVar6 == 0) {
          rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,__src);
          _DAT_00000000 = 0;
                    // WARNING: Does not return
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = *in_FS_OFFSET;
        __dest = (ulong *)rawAlloc__system_u6854(lVar4 + -0x3300,sVar6);
        sVar7 = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
        if (0xfc0 < (long)sVar7) {
          sVar7 = sVar7 - 0x30;
        }
        if ((long)sVar6 <= (long)sVar7) {
          sVar7 = sVar6;
        }
        memcpy(__dest,__src,sVar7);
        rawDealloc__system_u7030(lVar4 + -0x3300,__src);
        *__dest = uVar10;
      }
      goto LAB_0010ab74;
    }
  }
  else {
    lVar4 = uVar10 * 0x18;
    if ((SEXT816(lVar4) == SEXT816((long)uVar10) * SEXT816(0x18)) &&
       (lVar5 = lVar4 + 8, !SCARRY8(lVar4,8))) {
      if (lVar5 < 0) {
LAB_0010ac80:
        __dest = (ulong *)0x0;
        raiseRangeErrorI(lVar5,0,0x7fffffffffffffff);
      }
      else {
        __dest = (ulong *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar5);
        sVar7 = uVar1 * 0x18;
        if (SEXT816((long)sVar7) != SEXT816((long)uVar1) * SEXT816(0x18)) goto LAB_0010acb6;
        if ((long)sVar7 < 0) goto LAB_0010ac60;
        memcpy(__dest + 1,__src + 1,sVar7);
        *__dest = uVar10;
      }
LAB_0010ab74:
      param_1[1] = (ulong)__dest;
      __src = __dest;
      goto LAB_0010aa37;
    }
  }
LAB_0010acb6:
  raiseOverflow();
  __src = (ulong *)0x0;
  param_1[1] = 0;
LAB_0010aa37:
  *param_1 = uVar9;
  __src[uVar1 * 3 + 3] = in_stack_00000018;
  __src[uVar1 * 3 + 1] = in_stack_00000008;
  __src[uVar1 * 3 + 2] = in_stack_00000010;
  return;
}



undefined1  [16] toNimStr(void *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  size_t __n;
  long *in_FS_OFFSET;
  undefined1 auVar3 [16];
  
  if (0 < param_2) {
    __n = param_2 + 1;
    if ((SCARRY8(param_2,1)) || (lVar2 = param_2 + 9, SCARRY8(__n,8))) {
      raiseOverflow();
    }
    else if (lVar2 < 0) {
      raiseRangeErrorI(lVar2,0,0x7fffffffffffffff);
    }
    else {
      plVar1 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar2);
      *plVar1 = param_2;
      if (-1 < (long)__n) {
        memcpy(plVar1 + 1,param_1,__n);
        goto LAB_0010ad53;
      }
      raiseRangeErrorI(__n,0,0x7fffffffffffffff);
    }
  }
  plVar1 = (long *)0x0;
  param_2 = 0;
LAB_0010ad53:
  auVar3._8_8_ = plVar1;
  auVar3._0_8_ = param_2;
  return auVar3;
}



undefined1  [16] cstrToNimstr(size_t *param_1)

{
  size_t sVar1;
  size_t *psVar2;
  ulong uVar3;
  long *in_FS_OFFSET;
  undefined1 auVar4 [16];
  
  sVar1 = 0;
  psVar2 = param_1;
  if (param_1 != (size_t *)0x0) {
    sVar1 = strlen((char *)param_1);
    if (sVar1 != 0) {
      uVar3 = sVar1 + 9;
      if (((long)uVar3 < 0) || (uVar3 < sVar1 + 1)) {
        raiseOverflow();
      }
      else {
        if (-1 < (long)uVar3) {
          psVar2 = (size_t *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,uVar3);
          *psVar2 = sVar1;
          memcpy(psVar2 + 1,param_1,sVar1 + 1);
          goto LAB_0010ae12;
        }
        raiseRangeErrorI(uVar3,0,0x7fffffffffffffff);
      }
    }
    psVar2 = (size_t *)0x0;
    sVar1 = 0;
  }
LAB_0010ae12:
  auVar4._8_8_ = psVar2;
  auVar4._0_8_ = sVar1;
  return auVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void add__system_u3690(size_t *param_1,char *param_2)

{
  ulong *__src;
  long lVar1;
  code *pcVar2;
  size_t *psVar3;
  size_t __n;
  ulong *puVar4;
  ulong uVar5;
  size_t sVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  size_t sVar10;
  char cVar11;
  long *in_FS_OFFSET;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  cVar11 = *param_2;
  if (cVar11 == '\0') {
    return;
  }
  pcVar9 = param_2 + 1;
  do {
    sVar8 = *param_1;
    sVar10 = sVar8 + 1;
    if (SCARRY8(sVar8,1)) {
LAB_0010b0b0:
      raiseOverflow();
      puVar4 = (ulong *)param_1[1];
      sVar8 = *param_1;
    }
    else {
      __src = (ulong *)param_1[1];
      if ((__src == (ulong *)0x0) || ((*__src & 0x4000000000000000) != 0)) {
        if ((SCARRY8(sVar10,1)) || (SCARRY8(sVar8 + 2,8))) goto LAB_0010b0b0;
        if ((long)(sVar8 + 10) < 0) {
          raiseRangeErrorI(sVar8 + 10,0,0x7fffffffffffffff);
          puVar4 = (ulong *)param_1[1];
          sVar8 = *param_1;
        }
        else {
          psVar3 = (size_t *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300);
          param_1[1] = (size_t)psVar3;
          *psVar3 = sVar10;
          sVar8 = *param_1;
          if ((long)sVar8 < 1) {
            puVar4 = (ulong *)param_1[1];
            if (__src == (ulong *)0x0) {
              *(undefined1 *)(puVar4 + 1) = 0;
              puVar4 = (ulong *)param_1[1];
              sVar8 = *param_1;
            }
          }
          else {
            if ((long)sVar10 <= (long)sVar8) {
              sVar8 = sVar10;
            }
            if ((long)sVar8 < 0) {
              raiseRangeErrorI(sVar8,0,0x7fffffffffffffff);
              puVar4 = (ulong *)param_1[1];
              sVar8 = *param_1;
            }
            else {
              memcpy((void *)(param_1[1] + 8),__src + 1,sVar8);
              puVar4 = (ulong *)param_1[1];
              sVar8 = *param_1;
            }
          }
        }
      }
      else {
        uVar5 = *__src & 0xbfffffffffffffff;
        puVar4 = __src;
        if ((long)uVar5 < (long)sVar10) {
          sVar8 = 4;
          if (0 < (long)uVar5) {
            sVar8 = uVar5 * 2;
            if (0x7fff < (long)uVar5) {
              sVar8 = ((long)uVar5 >> 1) + uVar5;
            }
          }
          sVar7 = sVar8;
          if ((long)sVar8 <= (long)sVar10) {
            sVar7 = sVar10;
          }
          if ((SCARRY8(sVar7,1)) || (sVar6 = sVar7 + 9, SCARRY8(sVar7 + 1,8))) goto LAB_0010b0b0;
          if ((long)sVar6 < 0) {
            raiseRangeErrorI(sVar6,0,0x7fffffffffffffff);
            puVar4 = (ulong *)param_1[1];
            sVar8 = *param_1;
          }
          else {
            if (sVar6 == 0) {
              if (__src != (ulong *)0x0) {
                rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,__src);
              }
              param_1[1] = 0;
              _DAT_00000000 = 0;
                    // WARNING: Does not return
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar1 = *in_FS_OFFSET;
            psVar3 = (size_t *)rawAlloc__system_u6854(lVar1 + -0x3300);
            if (__src != (ulong *)0x0) {
              __n = *(size_t *)(((ulong)__src & 0xfffffffffffff000) + 8);
              if (0xfc0 < (long)__n) {
                __n = __n - 0x30;
              }
              if ((long)sVar6 <= (long)__n) {
                __n = sVar6;
              }
              memcpy(psVar3,__src,__n);
              rawDealloc__system_u7030(lVar1 + -0x3300);
            }
            param_1[1] = (size_t)psVar3;
            *psVar3 = sVar7;
            if ((long)sVar10 < (long)sVar8) {
              sVar8 = sVar7 - sVar10;
              if (SBORROW8(sVar7,sVar10)) goto LAB_0010b0b0;
              if ((long)sVar8 < 0) {
                raiseRangeErrorI(sVar8,0,0x7fffffffffffffff);
                puVar4 = (ulong *)param_1[1];
                sVar8 = *param_1;
                goto LAB_0010af10;
              }
              memset((void *)(param_1[1] + 9 + sVar10),0,sVar8);
            }
            puVar4 = (ulong *)param_1[1];
            sVar8 = *param_1;
          }
        }
      }
    }
LAB_0010af10:
    *(char *)((long)puVar4 + sVar8 + 8) = cVar11;
    sVar8 = *param_1 + 1;
    if (SCARRY8(*param_1,1)) {
      raiseOverflow();
      cVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      if (cVar11 == '\0') {
        return;
      }
    }
    else {
      *param_1 = sVar8;
      *(undefined1 *)(param_1[1] + 8 + sVar8) = 0;
      cVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      if (cVar11 == '\0') {
        return;
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1  [16] dollar___system_u4318(long param_1,long param_2)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  size_t sVar9;
  ulong uVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  char cVar20;
  long *in_FS_OFFSET;
  ulong local_48;
  ulong *local_40;
  
  puVar16 = (undefined8 *)(param_2 + 8);
  local_40 = (ulong *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,0x7d9);
  *local_40 = 2000;
  *(undefined1 *)(local_40 + 1) = 0;
  local_48 = 0;
  if (param_1 < 1) {
LAB_0010b6e2:
    auVar5._8_8_ = local_40;
    auVar5._0_8_ = local_48;
    return auVar5;
  }
  lVar19 = 0;
LAB_0010b200:
  uVar11 = local_48;
  lVar14 = puVar16[1];
  if (lVar14 != -10) {
    if (lVar14 != -100) {
      pcVar18 = (char *)puVar16[2];
      if ((pcVar18 != (char *)0x0) && (cVar20 = *pcVar18, cVar20 != '\0')) {
        pcVar18 = pcVar18 + 1;
        do {
          while( true ) {
            prepareAdd(&local_48,1);
            *(char *)((long)local_40 + local_48 + 8) = cVar20;
            uVar7 = local_48 + 1;
            if (SCARRY8(local_48,1)) break;
            *(undefined1 *)((long)local_40 + local_48 + 9) = 0;
            cVar20 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            local_48 = uVar7;
            if (cVar20 == '\0') goto LAB_0010b284;
          }
          raiseOverflow();
          cVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        } while (cVar20 != '\0');
LAB_0010b284:
        lVar14 = puVar16[1];
      }
      if (0 < lVar14) {
        prepareAdd(&local_48,1);
        *(undefined1 *)((long)local_40 + local_48 + 8) = 0x28;
        if (SCARRY8(local_48,1)) {
          raiseOverflow();
        }
        else {
          *(undefined1 *)((long)local_40 + local_48 + 9) = 0;
          local_48 = local_48 + 1;
        }
        addInt__stdZprivateZdigitsutils_u187(&local_48,puVar16[1]);
        prepareAdd(&local_48,1);
        *(undefined1 *)((long)local_40 + local_48 + 8) = 0x29;
        if (SCARRY8(local_48,1)) {
          raiseOverflow();
        }
        else {
          *(undefined1 *)((long)local_40 + local_48 + 9) = 0;
          local_48 = local_48 + 1;
        }
      }
      lVar2 = *in_FS_OFFSET;
      lVar14 = (uVar11 - local_48) + 0x19;
      lVar17 = 1;
      if (lVar14 < 1) {
        lVar14 = 1;
      }
      do {
        puVar6 = local_40;
        uVar11 = local_48;
        uVar7 = local_48 + 1;
        if (SCARRY8(local_48,1)) {
LAB_0010b3cc:
          raiseOverflow();
          uVar10 = local_48;
LAB_0010b350:
          *(undefined1 *)((long)local_40 + uVar10 + 8) = 0x20;
          uVar7 = uVar10 + 1;
          if (!SCARRY8(uVar10,1)) goto LAB_0010b361;
          raiseOverflow();
        }
        else {
          if ((local_40 == (ulong *)0x0) || ((*local_40 & 0x4000000000000000) != 0)) {
            if ((!SCARRY8(uVar7,1)) && (!SCARRY8(local_48 + 2,8))) {
              if ((long)(local_48 + 10) < 0) {
                raiseRangeErrorI(local_48 + 10,0,0x7fffffffffffffff);
                uVar10 = local_48;
              }
              else {
                local_40 = (ulong *)rawAlloc__system_u6854(lVar2 + -0x3300);
                uVar10 = local_48;
                *local_40 = uVar7;
                if ((long)local_48 < 1) {
                  if (puVar6 == (ulong *)0x0) {
                    *(undefined1 *)(local_40 + 1) = 0;
                  }
                }
                else {
                  if ((long)local_48 < (long)uVar7) {
                    uVar7 = local_48;
                  }
                  if ((long)uVar7 < 0) {
                    raiseRangeErrorI(uVar7,0,0x7fffffffffffffff);
                    uVar10 = local_48;
                  }
                  else {
                    memcpy(local_40 + 1,puVar6 + 1,uVar7);
                  }
                }
              }
              goto LAB_0010b350;
            }
            goto LAB_0010b3cc;
          }
          uVar10 = *local_40 & 0xbfffffffffffffff;
          if ((long)uVar10 < (long)uVar7) {
            uVar13 = 4;
            if (0 < (long)uVar10) {
              uVar13 = uVar10 * 2;
              if (0x7fff < (long)uVar10) {
                uVar13 = ((long)uVar10 >> 1) + uVar10;
              }
            }
            uVar15 = uVar13;
            if ((long)uVar13 <= (long)uVar7) {
              uVar15 = uVar7;
            }
            if ((SCARRY8(uVar15,1)) || (sVar12 = uVar15 + 9, SCARRY8(uVar15 + 1,8)))
            goto LAB_0010b3cc;
            if ((long)sVar12 < 0) {
              raiseRangeErrorI(sVar12,0,0x7fffffffffffffff);
              uVar10 = local_48;
            }
            else {
              if (sVar12 == 0) {
                if (local_40 != (ulong *)0x0) {
                  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,local_40);
                }
                _DAT_00000000 = 0;
                    // WARNING: Does not return
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              lVar3 = *in_FS_OFFSET;
              puVar8 = (ulong *)rawAlloc__system_u6854(lVar3 + -0x3300);
              if (puVar6 != (ulong *)0x0) {
                sVar9 = *(size_t *)(((ulong)puVar6 & 0xfffffffffffff000) + 8);
                if (0xfc0 < (long)sVar9) {
                  sVar9 = sVar9 - 0x30;
                }
                if ((long)sVar12 <= (long)sVar9) {
                  sVar9 = sVar12;
                }
                memcpy(puVar8,puVar6,sVar9);
                rawDealloc__system_u7030(lVar3 + -0x3300);
              }
              *puVar8 = uVar15;
              uVar10 = local_48;
              local_40 = puVar8;
              if ((long)uVar7 < (long)uVar13) {
                sVar12 = uVar15 - uVar7;
                if (SBORROW8(uVar15,uVar7)) goto LAB_0010b3cc;
                if ((long)sVar12 < 0) {
                  raiseRangeErrorI(sVar12,0,0x7fffffffffffffff);
                  uVar10 = local_48;
                }
                else {
                  memset((void *)((long)puVar8 + uVar11 + 10),0,sVar12);
                  uVar10 = local_48;
                }
              }
            }
            goto LAB_0010b350;
          }
          *(undefined1 *)((long)local_40 + local_48 + 8) = 0x20;
LAB_0010b361:
          *(undefined1 *)((long)local_40 + uVar7 + 8) = 0;
          local_48 = uVar7;
        }
        if (lVar14 < lVar17 + 1) goto LAB_0010b3ee;
        lVar17 = lVar17 + 1;
      } while( true );
    }
    prepareAdd(&local_48,3);
    puVar1 = (undefined2 *)((long)local_40 + local_48 + 8);
    *puVar1 = 0x5d5d;
    *(undefined1 *)(puVar1 + 1) = 10;
    uVar11 = local_48 + 3;
    if (!SCARRY8(local_48,3)) goto LAB_0010b6bd;
    goto LAB_0010b87c;
  }
  prepareAdd(&local_48,0x11);
  builtin_strncpy((char *)((long)local_40 + local_48 + 8),"[[reraised from:\n",0x11);
  uVar11 = local_48 + 0x11;
  if (SCARRY8(local_48,0x11)) goto LAB_0010b87c;
  goto LAB_0010b6bd;
LAB_0010b3ee:
  pcVar18 = (char *)*puVar16;
  if ((pcVar18 != (char *)0x0) && (cVar20 = *pcVar18, cVar20 != '\0')) {
    lVar14 = *in_FS_OFFSET;
    pcVar18 = pcVar18 + 1;
LAB_0010b4dc:
    do {
      puVar6 = local_40;
      uVar7 = local_48;
      uVar11 = local_48 + 1;
      if (SCARRY8(local_48,1)) {
LAB_0010b658:
        raiseOverflow();
        *(char *)((long)local_40 + local_48 + 8) = cVar20;
        uVar10 = local_48;
joined_r0x0010b670:
        uVar11 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
          raiseOverflow();
          cVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          if (cVar20 == '\0') break;
          goto LAB_0010b4dc;
        }
      }
      else {
        if ((local_40 == (ulong *)0x0) || ((*local_40 & 0x4000000000000000) != 0)) {
          if ((!SCARRY8(uVar11,1)) && (!SCARRY8(local_48 + 2,8))) {
            if ((long)(local_48 + 10) < 0) {
              raiseRangeErrorI(local_48 + 10,0,0x7fffffffffffffff);
              uVar10 = local_48;
            }
            else {
              local_40 = (ulong *)rawAlloc__system_u6854(lVar14 + -0x3300);
              uVar10 = local_48;
              *local_40 = uVar11;
              if ((long)local_48 < 1) {
                if (puVar6 == (ulong *)0x0) {
                  *(undefined1 *)(local_40 + 1) = 0;
                }
              }
              else {
                if ((long)local_48 < (long)uVar11) {
                  uVar11 = local_48;
                }
                if ((long)uVar11 < 0) {
                  raiseRangeErrorI(uVar11,0,0x7fffffffffffffff);
                  uVar10 = local_48;
                }
                else {
                  memcpy(local_40 + 1,puVar6 + 1,uVar11);
                }
              }
            }
            goto LAB_0010b4a6;
          }
          goto LAB_0010b658;
        }
        uVar10 = *local_40 & 0xbfffffffffffffff;
        if ((long)uVar10 < (long)uVar11) {
          uVar13 = 4;
          if (0 < (long)uVar10) {
            uVar13 = uVar10 * 2;
            if (0x7fff < (long)uVar10) {
              uVar13 = ((long)uVar10 >> 1) + uVar10;
            }
          }
          uVar15 = uVar13;
          if ((long)uVar13 <= (long)uVar11) {
            uVar15 = uVar11;
          }
          if ((SCARRY8(uVar15,1)) || (sVar12 = uVar15 + 9, SCARRY8(uVar15 + 1,8)))
          goto LAB_0010b658;
          if ((long)sVar12 < 0) {
            raiseRangeErrorI(sVar12,0,0x7fffffffffffffff);
            uVar10 = local_48;
          }
          else {
            if (sVar12 == 0) {
              if (local_40 != (ulong *)0x0) {
                rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,local_40);
              }
              _DAT_00000000 = 0;
                    // WARNING: Does not return
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            lVar2 = *in_FS_OFFSET;
            puVar8 = (ulong *)rawAlloc__system_u6854(lVar2 + -0x3300);
            if (puVar6 != (ulong *)0x0) {
              sVar9 = *(size_t *)(((ulong)puVar6 & 0xfffffffffffff000) + 8);
              if (0xfc0 < (long)sVar9) {
                sVar9 = sVar9 - 0x30;
              }
              if ((long)sVar12 <= (long)sVar9) {
                sVar9 = sVar12;
              }
              memcpy(puVar8,puVar6,sVar9);
              rawDealloc__system_u7030(lVar2 + -0x3300);
            }
            *puVar8 = uVar15;
            uVar10 = local_48;
            local_40 = puVar8;
            if ((long)uVar11 < (long)uVar13) {
              sVar12 = uVar15 - uVar11;
              if (SBORROW8(uVar15,uVar11)) goto LAB_0010b658;
              if ((long)sVar12 < 0) {
                raiseRangeErrorI(sVar12,0,0x7fffffffffffffff);
                uVar10 = local_48;
              }
              else {
                memset((void *)((long)puVar8 + uVar7 + 10),0,sVar12);
                uVar10 = local_48;
              }
            }
          }
LAB_0010b4a6:
          *(char *)((long)local_40 + uVar10 + 8) = cVar20;
          goto joined_r0x0010b670;
        }
        *(char *)((long)local_40 + local_48 + 8) = cVar20;
      }
      *(undefined1 *)((long)local_40 + uVar11 + 8) = 0;
      cVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      local_48 = uVar11;
    } while (cVar20 != '\0');
  }
  prepareAdd(&local_48,1);
  *(undefined1 *)((long)local_40 + local_48 + 8) = 10;
  uVar11 = local_48 + 1;
  if (SCARRY8(local_48,1)) {
LAB_0010b87c:
    raiseOverflow();
  }
  else {
LAB_0010b6bd:
    *(undefined1 *)((long)local_40 + uVar11 + 8) = 0;
    local_48 = uVar11;
  }
  lVar19 = lVar19 + 1;
  puVar16 = puVar16 + 3;
  if (lVar19 == param_1) goto LAB_0010b6e2;
  goto LAB_0010b200;
}



void eqdestroy___stdZtypedthreads_u220(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar4;
  long *in_FS_OFFSET;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = param_1 + -2;
  uVar1 = param_1[-2];
  if (0xf < uVar1) {
    if (SBORROW8(uVar1,0x10)) {
      raiseOverflow();
      return;
    }
    param_1[-2] = uVar1 - 0x10;
    rememberCycle__system_u3546(0,puVar4,*param_1);
    return;
  }
  rememberCycle__system_u3546(1,puVar4,*param_1);
  puVar3 = (undefined8 *)*param_1;
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(param_1);
    puVar3 = (undefined8 *)*param_1;
  }
  lVar2 = (long)*(short *)(puVar3 + 2);
  if ((lVar2 != 0) &&
     (puVar4 = (undefined8 *)((long)param_1 - (-lVar2 & lVar2 + 0xfU)), 0x10 < lVar2)) {
    rawDealloc__system_u7030
              (*in_FS_OFFSET + -0x3300,(long)puVar4 - (ulong)*(ushort *)((long)puVar4 + -2));
    return;
  }
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,puVar4);
  return;
}



void writeToStdErr__system_u4121(void *param_1,size_t param_2)

{
  FILE *__stream;
  
  __stream = stderr;
  fwrite(param_1,1,param_2,stderr);
  fflush(__stream);
  return;
}



void showErrorMessage__system_u4126(char *param_1,size_t param_2)

{
  FILE *__stream;
  size_t sVar1;
  long lVar2;
  long *in_FS_OFFSET;
  undefined1 auVar3 [16];
  
  __stream = stderr;
  if (errorMessageWriter__system_u4118 == (code *)0x0) {
    fwrite(param_1,1,param_2,stderr);
    fflush(__stream);
    return;
  }
  if (param_1 == (char *)0x0) {
    (*errorMessageWriter__system_u4118)(0,0);
  }
  else {
    sVar1 = strlen(param_1);
    auVar3 = toNimStr(param_1,sVar1);
    lVar2 = auVar3._8_8_;
    (*errorMessageWriter__system_u4118)(auVar3._0_8_,lVar2);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 7) & 0x40) == 0)) {
      rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,lVar2);
    }
  }
  if ((char)in_FS_OFFSET[-0xc] == '\0') {
    return;
  }
  *(undefined1 *)(in_FS_OFFSET + -0xc) = 0;
  raiseDefect();
  eqcopy___stdZtypedthreads_u223(*in_FS_OFFSET + -0x18,*(undefined8 *)(in_FS_OFFSET[-3] + 0x38),0);
  return;
}



void reportUnhandledErrorAux__system_u4347(long param_1)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  long *in_FS_OFFSET;
  undefined1 auVar7 [16];
  char local_808 [2016];
  
  pcVar5 = local_808;
  lVar3 = *(long *)(param_1 + 0x28);
  pcVar6 = local_808;
  for (lVar2 = 0xfa; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pcVar6 = 0;
    pcVar6 = (char *)((long)pcVar6 + 8);
  }
  *pcVar6 = 0;
  if (lVar3 == 0) {
LAB_0010bce0:
    sVar4 = 0x1c;
LAB_0010bce8:
    builtin_strncpy(pcVar5,"Error: unhandled exception: ",0x1c);
  }
  else {
    auVar7 = dollar___system_u4318(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    lVar3 = auVar7._8_8_;
    sVar4 = auVar7._0_8_;
    if ((1999 < (long)sVar4) || (sVar4 == 0)) {
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 7) & 0x40) == 0)) {
        rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,lVar3);
      }
      goto LAB_0010bce0;
    }
    memcpy(local_808,(void *)(lVar3 + 8),sVar4);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 7) & 0x40) == 0)) {
      rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,lVar3);
    }
    if ((long)sVar4 < 0x7b4) {
      pcVar5 = local_808 + sVar4;
      sVar4 = sVar4 + 0x1c;
      goto LAB_0010bce8;
    }
  }
  sVar1 = *(size_t *)(param_1 + 0x18);
  if ((long)(sVar1 + sVar4) < 2000) {
    pcVar5 = "";
    if (sVar1 != 0) {
      pcVar5 = (char *)(*(long *)(param_1 + 0x20) + 8);
    }
    memcpy(local_808 + sVar4,pcVar5,sVar1);
    sVar4 = sVar1 + sVar4;
  }
  if ((long)sVar4 < 0x7ce) {
    (local_808 + sVar4)[0] = ' ';
    (local_808 + sVar4)[1] = '[';
    sVar4 = sVar4 + 2;
  }
  pcVar5 = *(char **)(param_1 + 0x10);
  if (pcVar5 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(pcVar5);
    if (1999 < (long)(sVar1 + sVar4)) goto LAB_0010bd6b;
  }
  memcpy(local_808 + sVar4,pcVar5,sVar1);
  sVar1 = strlen(pcVar5);
  sVar4 = sVar4 + sVar1;
LAB_0010bd6b:
  if ((long)sVar4 < 0x7ce) {
    (local_808 + sVar4)[0] = ']';
    (local_808 + sVar4)[1] = '\n';
    sVar4 = sVar4 + 2;
  }
  if (onUnhandledException__system_u4346 != (code *)0x0) {
    sVar4 = strlen(local_808);
    auVar7 = toNimStr(local_808,sVar4);
    (*onUnhandledException__system_u4346)(auVar7._0_8_,auVar7._8_8_);
    return;
  }
  showErrorMessage__system_u4126(local_808,sVar4);
  return;
}



void reportUnhandledError__system_u4441(undefined8 param_1)

{
  if (unhandledExceptionHook__system_u3689 != (code *)0x0) {
    (*unhandledExceptionHook__system_u3689)();
  }
  reportUnhandledErrorAux__system_u4347(param_1);
  return;
}



void raiseDefect(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar5;
  long *in_FS_OFFSET;
  undefined8 *puVar4;
  
  plVar1 = (long *)in_FS_OFFSET[-3];
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar5 = plVar1 + -2;
  if (SCARRY8(plVar1[-2],0x10)) {
    raiseOverflow();
  }
  else {
    plVar1[-2] = plVar1[-2] + 0x10;
  }
  if ((1 < *(short *)(*plVar1 + 0x12)) && (*(int *)(*(long *)(*plVar1 + 0x18) + 8) == -0x49fa4800))
  {
    if (unhandledExceptionHook__system_u3689 != (code *)0x0) {
      (*unhandledExceptionHook__system_u3689)(plVar1);
    }
    reportUnhandledErrorAux__system_u4347(plVar1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  uVar2 = plVar1[-2];
  if (0xf < uVar2) {
    if (SBORROW8(uVar2,0x10)) {
      raiseOverflow();
      return;
    }
    plVar1[-2] = uVar2 - 0x10;
    rememberCycle__system_u3546(0,plVar5,*plVar1);
    return;
  }
  rememberCycle__system_u3546(1,plVar5);
  puVar4 = (undefined8 *)*plVar1;
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(plVar1);
    puVar4 = (undefined8 *)*plVar1;
  }
  lVar3 = (long)*(short *)(puVar4 + 2);
  if ((lVar3 != 0) && (plVar5 = (long *)((long)plVar1 - (-lVar3 & lVar3 + 0xfU)), 0x10 < lVar3)) {
    rawDealloc__system_u7030
              (*in_FS_OFFSET + -0x3300,(long)plVar5 - (ulong)*(ushort *)((long)plVar5 + -2));
    return;
  }
  rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300,plVar5);
  return;
}



void signalHandler(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "SIGINT: Interrupted by Ctrl-C.\n";
  if (param_1 != 2) {
    pcVar1 = "SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n";
    if (param_1 != 0xb) {
      pcVar1 = "SIGABRT: Abnormal termination.\n";
      if (param_1 != 6) {
        pcVar1 = "SIGFPE: Arithmetic error.\n";
        if (param_1 != 8) {
          pcVar1 = "SIGILL: Illegal operation.\n";
          if (param_1 != 4) {
            pcVar1 = "SIGPIPE: Pipe closed.\n";
            if (param_1 != 0xd) {
              pcVar1 = "unknown signal\n";
            }
          }
        }
      }
    }
  }
  showErrorMessage__system_u4126(pcVar1);
  signal(param_1,(__sighandler_t)0x0);
  raise(param_1);
  return;
}



void registerSignalHandler__system_u4695(void)

{
  signal(2,signalHandler);
  signal(0xb,signalHandler);
  signal(6,signalHandler);
  signal(8,signalHandler);
  signal(4,signalHandler);
  signal(0xd,(__sighandler_t)0x1);
  return;
}



void echoBinSafe(size_t *param_1,long param_2)

{
  size_t *psVar1;
  size_t __size;
  long lVar2;
  
  lVar2 = 0;
  flockfile(stdout);
  if (0 < param_2) {
    do {
      while (__size = *param_1, __size != 0) {
        psVar1 = param_1 + 1;
        lVar2 = lVar2 + 1;
        param_1 = param_1 + 2;
        fwrite((void *)(*psVar1 + 8),__size,1,stdout);
        if (lVar2 == param_2) goto LAB_0010c17e;
      }
      lVar2 = lVar2 + 1;
      fwrite("",0,1,stdout);
      param_1 = param_1 + 2;
    } while (param_2 != lVar2);
  }
LAB_0010c17e:
  fwrite("\n",1,1,stdout);
  fflush(stdout);
  funlockfile(stdout);
  return;
}



undefined1  [16] newStringUninit__system_u2701(long param_1)

{
  long lVar1;
  long *plVar2;
  long *in_FS_OFFSET;
  undefined1 auVar3 [16];
  
  plVar2 = (long *)0x0;
  lVar1 = 0;
  if (0 < param_1) {
    if ((SCARRY8(param_1,1)) || (lVar1 = param_1 + 9, SCARRY8(param_1 + 1,8))) {
      raiseOverflow();
      plVar2 = (long *)0x0;
    }
    else if (lVar1 < 0) {
      raiseRangeErrorI(lVar1,0,0x7fffffffffffffff);
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar1);
      *plVar2 = param_1;
      *(undefined1 *)(plVar2 + 1) = 0;
    }
    *(undefined1 *)((long)plVar2 + param_1 + 8) = 0;
    lVar1 = param_1;
  }
  auVar3._8_8_ = plVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



void nimPrepareStrMutationImpl__system_u2459(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  size_t __n;
  long *in_FS_OFFSET;
  
  lVar1 = *param_1;
  if ((SCARRY8(lVar1,1)) || (lVar2 = lVar1 + 9, SCARRY8(lVar1 + 1,8))) {
    raiseOverflow();
    return;
  }
  if (lVar2 < 0) {
    raiseRangeErrorI(lVar2,0,0x7fffffffffffffff);
    return;
  }
  lVar1 = param_1[1];
  plVar3 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar2);
  lVar2 = *param_1;
  param_1[1] = (long)plVar3;
  *plVar3 = lVar2;
  __n = lVar2 + 1;
  if (!SCARRY8(lVar2,1)) {
    if (-1 < (long)__n) {
      memcpy((void *)(param_1[1] + 8),(void *)(lVar1 + 8),__n);
      return;
    }
    raiseRangeErrorI(__n,0,0x7fffffffffffffff);
    return;
  }
  raiseOverflow(__n);
  return;
}



undefined1  [16] substr__system_u8888(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  size_t __n;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *in_FS_OFFSET;
  undefined1 auVar11 [16];
  long local_70;
  
  lVar3 = 0;
  if (-1 < param_3) {
    lVar3 = param_3;
  }
  if (param_1 <= param_4) {
    param_4 = param_1 + -1;
  }
  lVar8 = param_4 - lVar3;
  if (SBORROW8(param_4,lVar3)) {
LAB_0010c4f0:
    raiseOverflow();
  }
  else {
    local_70 = lVar8 + 1;
    uVar10 = (ulong)SCARRY8(lVar8,1);
    if (SCARRY8(lVar8,1)) goto LAB_0010c4f0;
    if (0 < local_70) {
      __n = lVar8 + 2;
      uVar7 = (ulong)SCARRY8(local_70,1);
      if (SCARRY8(local_70,1)) {
        raiseOverflow();
        *(undefined1 *)(lVar8 + 9) = 0;
LAB_0010c670:
        uVar6 = lVar3 + uVar10;
        if ((long)uVar6 < 0) goto LAB_0010c6c8;
        do {
          bVar2 = false;
          uVar7 = uVar10;
          if (uVar6 < uVar10) goto LAB_0010c6c8;
          while( true ) {
            if (bVar2) {
              plVar4 = (long *)0x0;
              goto LAB_0010c63c;
            }
            if (((long)uVar6 < 0) || (param_1 <= (long)uVar6)) {
              plVar4 = (long *)0x0;
              goto LAB_0010c62b;
            }
            uVar10 = uVar7 + 1;
            *(undefined1 *)(uVar7 + 8) = *(undefined1 *)(param_2 + 8 + uVar6);
            if (local_70 <= (long)uVar10) {
              plVar4 = (long *)0x0;
              goto LAB_0010c501;
            }
            if ((DAT_00000007 & 0x40) == 0) goto LAB_0010c670;
            raiseOverflow(uVar6);
            uVar6 = lVar3 + uVar10;
            if (-1 < (long)uVar6) break;
LAB_0010c6c8:
            bVar2 = true;
            uVar7 = uVar10;
          }
        } while( true );
      }
      bVar2 = false;
      lVar9 = lVar8 + 10;
      if (SCARRY8(__n,8)) {
        plVar4 = (long *)0x0;
        bVar2 = true;
        raiseOverflow();
        *(undefined1 *)(lVar8 + 9) = 0;
        if (-1 < (long)__n) goto LAB_0010c461;
        goto LAB_0010c589;
      }
      if (lVar9 < 0) {
        plVar4 = (long *)0x0;
        raiseRangeErrorI(lVar9,0,0x7fffffffffffffff);
      }
      else {
        plVar4 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar9);
        *plVar4 = local_70;
        *(undefined1 *)(plVar4 + 1) = 0;
      }
      uVar7 = 0;
      *(undefined1 *)((long)plVar4 + lVar8 + 9) = 0;
      if ((long)__n < 0) {
        do {
          if ((*plVar4 & 0x4000000000000000) != 0) {
            if (bVar2) {
              raiseOverflow();
            }
            else if (lVar9 < 0) {
              raiseRangeErrorI(lVar9,0,0x7fffffffffffffff);
            }
            else {
              plVar4 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar9);
              *plVar4 = local_70;
              raiseRangeErrorI(__n,0,0x7fffffffffffffff);
            }
          }
LAB_0010c589:
          bVar1 = false;
          uVar6 = lVar3 + uVar7;
          if (((long)uVar6 < 0) || (uVar6 < uVar7)) {
            bVar1 = true;
          }
          if (bVar1) goto LAB_0010c63c;
          if (((long)uVar6 < 0) || (param_1 <= (long)uVar6)) goto LAB_0010c62b;
          *(undefined1 *)((long)plVar4 + uVar7 + 8) = *(undefined1 *)(param_2 + 8 + uVar6);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < local_70);
      }
      else {
        do {
          if ((*plVar4 & 0x4000000000000000) != 0) {
            if (bVar2) {
              raiseOverflow();
            }
            else if (lVar9 < 0) {
              raiseRangeErrorI(lVar9,0,0x7fffffffffffffff);
            }
            else {
              plVar5 = (long *)rawAlloc__system_u6854(*in_FS_OFFSET + -0x3300,lVar9);
              *plVar5 = local_70;
              memcpy(plVar5 + 1,plVar4 + 1,__n);
              plVar4 = plVar5;
            }
          }
LAB_0010c461:
          bVar1 = false;
          uVar6 = lVar3 + uVar7;
          if (((long)uVar6 < 0) || (uVar6 < uVar7)) {
            bVar1 = true;
          }
          if (bVar1) goto LAB_0010c63c;
          if ((param_1 <= (long)uVar6) || ((long)uVar6 < 0)) goto LAB_0010c62b;
          *(undefined1 *)((long)plVar4 + uVar7 + 8) = *(undefined1 *)(param_2 + 8 + uVar6);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < local_70);
      }
      goto LAB_0010c501;
    }
  }
  local_70 = 0;
  plVar4 = (long *)0x0;
LAB_0010c501:
  auVar11._8_8_ = plVar4;
  auVar11._0_8_ = local_70;
  return auVar11;
LAB_0010c63c:
  raiseOverflow(uVar6);
  goto LAB_0010c501;
LAB_0010c62b:
  raiseIndexError2(uVar6,param_1 + -1);
  goto LAB_0010c501;
}



void shrink__pokerod_u41(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



void setLen__pokerod_u45(long *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (param_2 < lVar1) {
    *param_1 = param_2;
    return;
  }
  if (lVar1 < param_2) {
    puVar2 = (ulong *)param_1[1];
    if ((puVar2 == (ulong *)0x0) || ((long)(*puVar2 & 0xbfffffffffffffff) < param_2)) {
      if (SBORROW8(param_2,lVar1)) {
        raiseOverflow(param_1,puVar2,param_2 - lVar1);
        return;
      }
      puVar2 = (ulong *)prepareSeqAddUninit(lVar1,puVar2,param_2 - lVar1,1,1);
      param_1[1] = (long)puVar2;
    }
    lVar3 = lVar1 + 1;
    *param_1 = param_2;
    *(undefined1 *)((long)puVar2 + lVar1 + 8) = 0;
    if (lVar3 < param_2) {
      do {
        *(undefined1 *)(param_1[1] + 8 + lVar3) = 0;
        lVar3 = lVar3 + 1;
      } while (param_2 != lVar3);
    }
  }
  return;
}



void newSeq__pokerod_u37(long *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  
  *param_1 = 0;
  if (-1 < param_2) {
    if (param_2 != 0) {
      puVar1 = (ulong *)param_1[1];
      if ((puVar1 == (ulong *)0x0) || ((long)(*puVar1 & 0xbfffffffffffffff) < param_2)) {
        puVar1 = (ulong *)prepareSeqAddUninit(0,puVar1,param_2,1,1);
        param_1[1] = (long)puVar1;
      }
      *param_1 = param_2;
      *(undefined1 *)(puVar1 + 1) = 0;
      if (param_2 != 1) {
        lVar2 = 1;
        do {
          *(undefined1 *)(param_1[1] + 8 + lVar2) = 0;
          lVar2 = lVar2 + 1;
        } while (param_2 != lVar2);
      }
    }
    return;
  }
  *param_1 = param_2;
  return;
}



undefined1  [16] newSeq__pokerod_u32(size_t param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  if (0 < (long)param_1) {
    lVar1 = prepareSeqAddUninit(0,0,param_1,1,1);
    memset((void *)(lVar1 + 8),0,param_1);
  }
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



void eqdestroy___pokerod_u117(undefined8 param_1,long param_2)

{
  long *in_FS_OFFSET;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 7) & 0x40) == 0)) {
    rawDealloc__system_u7030(*in_FS_OFFSET + -0x3300);
    return;
  }
  return;
}



undefined8 eqeq___pokerod_u198(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  if (param_4 != param_2) {
    if (param_1 == param_3) {
      lVar2 = param_1 + -1;
      if (SCARRY8(param_1,-1)) {
        raiseOverflow();
LAB_0010c996:
        uVar3 = 0;
      }
      else {
        lVar1 = 0;
        if (-1 < lVar2) {
          do {
            if (param_1 <= lVar1) {
              raiseIndexError2(lVar1,lVar2);
              goto LAB_0010c996;
            }
            if (*(char *)(lVar1 + 8 + param_2) != *(char *)(lVar1 + 8 + param_4)) goto LAB_0010c996;
            lVar1 = lVar1 + 1;
          } while (lVar1 <= lVar2);
          uVar3 = 1;
        }
      }
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



void nimTestErrorFlag(void)

{
  long lVar1;
  long *in_FS_OFFSET;
  
  if (((char)in_FS_OFFSET[-0xc] != '\0') && (lVar1 = in_FS_OFFSET[-3], lVar1 != 0)) {
    if (unhandledExceptionHook__system_u3689 != (code *)0x0) {
      (*unhandledExceptionHook__system_u3689)();
    }
    reportUnhandledErrorAux__system_u4347(lVar1);
    eqsink___stdZtypedthreads_u231(*in_FS_OFFSET + -0x18,0);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  return;
}



void atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus2dot2dot4atslibatssystemdotnim_Init000
               (void)

{
  long lVar1;
  long *in_FS_OFFSET;
  
  signal(2,signalHandler);
  signal(0xb,signalHandler);
  signal(6,signalHandler);
  signal(8,signalHandler);
  signal(4,signalHandler);
  signal(0xd,(__sighandler_t)0x1);
  if (((char)in_FS_OFFSET[-0xc] != '\0') && (lVar1 = in_FS_OFFSET[-3], lVar1 != 0)) {
    if (unhandledExceptionHook__system_u3689 != (code *)0x0) {
      (*unhandledExceptionHook__system_u3689)(lVar1);
    }
    reportUnhandledErrorAux__system_u4347(lVar1);
    eqsink___stdZtypedthreads_u231(*in_FS_OFFSET + -0x18,0);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  return;
}



undefined8 nsuStrip(long param_1,long param_2,char param_3,char param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1 + -1;
  if (SCARRY8(param_1,-1)) {
    raiseOverflow();
    return 0;
  }
  lVar4 = 0;
  if (param_3 != '\0') {
    for (; lVar4 <= lVar5; lVar4 = lVar4 + 1) {
      if ((lVar4 < 0) || (param_1 <= lVar4)) {
        raiseIndexError2(lVar4,lVar5);
        return 0;
      }
      bVar1 = *(byte *)(param_2 + 8 + lVar4);
      if ((*(byte *)(param_5 + (ulong)(bVar1 >> 3)) >> (bVar1 & 7) & 1) == 0) break;
    }
  }
  lVar3 = lVar5;
  if (param_4 != '\0') {
    for (; lVar4 <= lVar3; lVar3 = lVar3 + -1) {
      if ((param_1 <= lVar3) || (lVar3 < 0)) {
        raiseIndexError2(lVar3,lVar5);
        return 0;
      }
      bVar1 = *(byte *)(param_2 + 8 + lVar3);
      if ((*(byte *)(param_5 + (ulong)(bVar1 >> 3)) >> (bVar1 & 7) & 1) == 0) break;
    }
  }
  uVar2 = substr__system_u8888(param_1,param_2,lVar4);
  return uVar2;
}



undefined1  [16] keystream__pokerod_u11(int param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 < 0) {
    auVar2 = ZEXT816(0);
    raiseRangeErrorI(param_2,0,0x7fffffffffffffff);
  }
  else {
    auVar2 = newSeq__pokerod_u32();
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        param_1 = param_1 * 0x19660d + 0x3c6ef35f;
        if (auVar2._0_8_ <= lVar1) {
          raiseIndexError2(lVar1,auVar2._0_8_ + -1);
          return auVar2;
        }
        *(char *)(auVar2._8_8_ + 8 + lVar1) = (char)((uint)param_1 >> 0x10);
        lVar1 = lVar1 + 1;
      } while (lVar1 < param_2);
    }
  }
  return auVar2;
}



undefined1  [16] xorEncrypt__pokerod_u162(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  
  if (param_1 < 0) {
    raiseRangeErrorI(param_1,0,0x7fffffffffffffff);
    if (*(char *)(in_FS_OFFSET + -0x60) == '\0') {
      raiseRangeErrorI(param_1,0,0x7fffffffffffffff);
    }
LAB_0010cd96:
    auVar4 = ZEXT816(0);
  }
  else {
    auVar4 = newSeq__pokerod_u32();
    lVar2 = auVar4._8_8_;
    lVar1 = auVar4._0_8_;
    if (param_1 == 0) {
      if (*(char *)(in_FS_OFFSET + -0x60) != '\0') goto LAB_0010cd96;
      auVar4 = newSeq__pokerod_u32(0);
    }
    else {
      lVar3 = 0;
      do {
        param_3 = param_3 * 0x19660d + 0x3c6ef35f;
        if (lVar1 <= lVar3) {
          raiseIndexError2(lVar3,lVar1 + -1);
          break;
        }
        *(char *)(lVar2 + 8 + lVar3) = (char)((uint)param_3 >> 0x10);
        lVar3 = lVar3 + 1;
      } while (lVar3 < param_1);
      if (*(char *)(in_FS_OFFSET + -0x60) != '\0') goto LAB_0010cd96;
      auVar4 = newSeq__pokerod_u32();
      lVar3 = 0;
      do {
        if (auVar4._0_8_ <= lVar3) {
          raiseIndexError2(lVar3,auVar4._0_8_ + -1);
          return auVar4;
        }
        if (lVar1 <= lVar3) {
          raiseIndexError2(lVar3,lVar1 + -1);
          return auVar4;
        }
        *(byte *)(auVar4._8_8_ + 8 + lVar3) =
             *(byte *)(param_2 + 8 + lVar3) ^ *(byte *)(lVar2 + 8 + lVar3);
        lVar3 = lVar3 + 1;
      } while (lVar3 < param_1);
    }
    eqdestroy___pokerod_u117(lVar1,lVar2);
  }
  return auVar4;
}



void main__pokerod_u195(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  
  echoBinSafe(TM__xrbkmOY9b1OBM0sYlMZSA0g_2,1);
  uVar2 = readLine__stdZsyncio_u318(stdin);
  if (*(char *)(in_FS_OFFSET + -0x60) == '\0') {
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = nsuStrip(uVar2,extraout_RDX,1,1,TM__xrbkmOY9b1OBM0sYlMZSA0g_4);
    if ((*(char *)(in_FS_OFFSET + -0x60) == '\0') &&
       (uVar6 = xorEncrypt__pokerod_u162(uVar2,extraout_RDX_00,0x14471187), uVar5 = extraout_RDX_01,
       *(char *)(in_FS_OFFSET + -0x60) == '\0')) {
      cVar4 = eqeq___pokerod_u198(uVar6,extraout_RDX_01,0x20,TM__xrbkmOY9b1OBM0sYlMZSA0g_7);
      if (cVar4 == '\0') {
        echoBinSafe(TM__xrbkmOY9b1OBM0sYlMZSA0g_10,1);
      }
      else {
        echoBinSafe(TM__xrbkmOY9b1OBM0sYlMZSA0g_8,1);
      }
    }
    eqdestroy___pokerod_u117(uVar6,uVar5);
    if ((extraout_RDX != 0) && ((*(byte *)(extraout_RDX + 7) & 0x40) == 0)) {
      deallocShared(extraout_RDX);
    }
    if (extraout_RDX_00 == 0) {
      return;
    }
    bVar1 = *(byte *)(extraout_RDX_00 + 7);
    lVar3 = extraout_RDX_00;
  }
  else {
    eqdestroy___pokerod_u117(0,0);
    if (extraout_RDX == 0) {
      return;
    }
    bVar1 = *(byte *)(extraout_RDX + 7);
    lVar3 = extraout_RDX;
  }
  if ((bVar1 & 0x40) != 0) {
    return;
  }
  deallocShared(lVar3);
  return;
}



void PreMainInner(void)

{
  return;
}



void PreMain(void)

{
  long lVar1;
  long *in_FS_OFFSET;
  
  signal(2,signalHandler);
  signal(0xb,signalHandler);
  signal(6,signalHandler);
  signal(8,signalHandler);
  signal(4,signalHandler);
  signal(0xd,(__sighandler_t)0x1);
  if (((char)in_FS_OFFSET[-0xc] != '\0') && (lVar1 = in_FS_OFFSET[-3], lVar1 != 0)) {
    if (unhandledExceptionHook__system_u3689 != (code *)0x0) {
      (*unhandledExceptionHook__system_u3689)(lVar1);
    }
    reportUnhandledErrorAux__system_u4347(lVar1);
    eqsink___stdZtypedthreads_u231(*in_FS_OFFSET + -0x18,0);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  return;
}



void NimMainInner(void)

{
  main__pokerod_u195();
  nimTestErrorFlag();
  return;
}



void NimMain(void)

{
  atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus2dot2dot4atslibatssystemdotnim_Init000
            ();
  main__pokerod_u195();
  nimTestErrorFlag();
  return;
}



void NimMainModule(void)

{
  main__pokerod_u195();
  nimTestErrorFlag();
  return;
}



void _fini(void)

{
  return;
}


