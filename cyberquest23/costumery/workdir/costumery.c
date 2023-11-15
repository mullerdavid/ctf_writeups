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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int in_EAX;
  
  return in_EAX;
}



void FUN_00401010(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
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

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
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

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int __status)

{
                    // WARNING: Subroutine does not return
  _exit(__status);
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void FUN_00401110(void)

{
  undefined4 unaff_retaddr;
  
  __libc_start_main(FUN_00401553,unaff_retaddr,&stack0x00000008,_init,_fini,0);
  return;
}



void FUN_00401150(void)

{
  if ((false) && (false)) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)(0x404008);
    return;
  }
  return;
}



void FUN_00401180(void)

{
  if ((false) && (false)) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x0)(0x404008);
    return;
  }
  return;
}



void FUN_004011c0(void)

{
  if (DAT_00404020 == '\0') {
    FUN_00401150();
    if (false) {
      func_0x00000000(&fde_00402480);
    }
    DAT_00404020 = 1;
    return;
  }
  return;
}



void FUN_00401200(void)

{
  if (false) {
    func_0x00000000(&fde_00402480,&DAT_00404040);
    FUN_00401180();
    return;
  }
  FUN_00401180();
  return;
}



void FUN_00401235(void)

{
  setvbuf((FILE *)0x0,(char *)0x0,2,0);
  setvbuf((FILE *)0x0,(char *)0x0,2,0);
  setvbuf((FILE *)0x0,(char *)0x0,2,0);
  return;
}



void FUN_00401296(int param_1)

{
  if (param_1 == 0xe) {
    printf("[!] Anti DoS Signal. Patch me out for testing.");
                    // WARNING: Subroutine does not return
    _exit(0);
  }
  return;
}



void FUN_004012c8(void)

{
  signal(0xe,FUN_00401296);
  alarm(0x3c);
  return;
}



void FUN_004012f2(void)

{
  size_t sVar1;
  double dVar2;
  char *local_68 [4];
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  int local_c;
  
  puts("\n==== Costumery Shop Main Menu ====\n");
  puts("Available Costumes to Buy:");
  local_68[0] = "Hacktoplasma Jacket";
  local_68[1] = "High heels for skeletons";
  local_68[2] = "Zombie Tuxedo";
  local_68[3] = "Witch\'s Hat";
  local_48 = "Pirate Costume";
  local_40 = "Vampire Cape";
  local_38 = "Ghost Sheet";
  local_30 = "Frankenstein\'s Monster Outfit";
  local_28 = "Mummy Wrappings";
  local_20 = "Werewolf Costume";
  printf("%-4s %-30s %-10s\n",&DAT_0040212c,"Costume","Price");
  for (local_c = 0; local_c < 10; local_c = local_c + 1) {
    sVar1 = strlen(local_68[local_c]);
    if ((long)sVar1 < 0) {
      dVar2 = (double)(sVar1 >> 1 | (ulong)((uint)sVar1 & 1));
      dVar2 = dVar2 + dVar2;
    }
    else {
      dVar2 = (double)sVar1;
    }
    printf("%-4d %-30s $%8.2f\n",dVar2 * 10.5,(ulong)(local_c + 1),local_68[local_c]);
  }
  puts("\nActions:");
  puts("1. Buy Costume");
  puts("2. View Basket");
  puts("3. Exit");
  puts("===================================");
  return;
}



void FUN_00401497(void)

{
  int iVar1;
  char *pcVar2;
  char local_d [5];
  
  while( true ) {
    printf("Do you have a CreepyChain:tm: discount card? (yes/no): ");
    pcVar2 = fgets(local_d,5,(FILE *)0x0);
    if (pcVar2 == (char *)0x0) {
      return;
    }
    iVar1 = strcmp(local_d,"yes\n");
    if (iVar1 == 0) break;
    iVar1 = strcmp(local_d,"no\n");
    if (iVar1 == 0) {
      return;
    }
  }
  return;
}



void FUN_0040150a(void)

{
  undefined local_78 [112];
  
  printf("Enter your IBAN number: ");
  fflush((FILE *)0x0);
  read(0,local_78,0x100);
  return;
}



void FUN_00401553(void)

{
  double dVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  char local_328 [112];
  undefined local_2b8 [8];
  double adStack_2b0 [79];
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_38 = 0;
  FUN_004012c8();
  FUN_00401235();
  do {
    while( true ) {
      do {
        FUN_004012f2();
        printf("Enter your choice (1-3): ");
        pcVar2 = fgets(local_328,100,(FILE *)0x0);
      } while (pcVar2 == (char *)0x0);
      local_24 = atoi(local_328);
      if (local_24 == 3) {
        puts("Goodbye!");
                    // WARNING: Subroutine does not return
        exit(0);
      }
      if (local_24 < 4) break;
LAB_00401934:
      puts("Invalid choice. Please enter a valid option.");
    }
    if (local_24 == 1) {
      if (local_38 < 10) {
        printf("Enter the number of the costume you want to buy (1-%d): ",10);
        pcVar2 = fgets(local_328,100,(FILE *)0x0);
        if (pcVar2 != (char *)0x0) {
          local_2c = atoi(local_328);
          if ((local_2c < 1) || (10 < local_2c)) {
            puts("Invalid costume number.");
          }
          else {
            FUN_00401497();
            FUN_0040150a();
            lVar3 = (long)local_38;
            *(undefined8 *)(local_2b8 + lVar3 * 0x40) = 0x20656d7574736f43;
            *(undefined8 *)(local_2b8 + lVar3 * 0x40 + 5) = 0x656d614e20656d;
            adStack_2b0[(long)local_38 * 8 + 6] = (double)local_2c * 10.0;
            local_38 = local_38 + 1;
            puts("Costume added to your basket.");
          }
        }
      }
      else {
        puts("Your basket is full. You can\'t buy more costumes.");
      }
    }
    else {
      if (local_24 != 2) goto LAB_00401934;
      puts("\n==== Your Basket ====");
      for (local_1c = 0; local_1c < local_38; local_1c = local_1c + 1) {
        printf("%d. %s - $%.2f\n",adStack_2b0[(long)local_1c * 8 + 6],(ulong)(local_1c + 1),
               local_2b8 + (long)local_1c * 0x40);
      }
      puts("\nActions:");
      puts("1. Delete Costume");
      puts("2. Back to Main Menu");
      printf("Enter your choice (1-2): ");
      pcVar2 = fgets(local_328,100,(FILE *)0x0);
      if ((pcVar2 != (char *)0x0) && (local_24 = atoi(local_328), local_24 == 1)) {
        printf("Enter the number of the costume you want to delete: ");
        pcVar2 = fgets(local_328,100,(FILE *)0x0);
        if (pcVar2 != (char *)0x0) {
          local_28 = atoi(local_328);
          if ((local_28 < 1) || (local_38 < local_28)) {
            puts("Invalid costume number.");
          }
          else {
            for (local_20 = local_28 + -1; local_20 < local_38 + -1; local_20 = local_20 + 1) {
              lVar3 = (long)local_20;
              lVar4 = (long)(local_20 + 1);
              dVar1 = adStack_2b0[lVar4 * 8];
              *(undefined8 *)(local_2b8 + lVar3 * 0x40) = *(undefined8 *)(local_2b8 + lVar4 * 0x40);
              adStack_2b0[lVar3 * 8] = dVar1;
              dVar1 = adStack_2b0[lVar4 * 8 + 2];
              adStack_2b0[lVar3 * 8 + 1] = adStack_2b0[lVar4 * 8 + 1];
              adStack_2b0[lVar3 * 8 + 2] = dVar1;
              dVar1 = adStack_2b0[lVar4 * 8 + 4];
              adStack_2b0[lVar3 * 8 + 3] = adStack_2b0[lVar4 * 8 + 3];
              adStack_2b0[lVar3 * 8 + 4] = dVar1;
              dVar1 = adStack_2b0[lVar4 * 8 + 6];
              adStack_2b0[lVar3 * 8 + 5] = adStack_2b0[lVar4 * 8 + 5];
              adStack_2b0[lVar3 * 8 + 6] = dVar1;
            }
            local_38 = local_38 + -1;
            puts("Costume deleted from your basket.");
          }
        }
      }
    }
  } while( true );
}



void FUN_00401951(void)

{
  system("/bin/sh");
  return;
}



undefined8 _fini(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}


