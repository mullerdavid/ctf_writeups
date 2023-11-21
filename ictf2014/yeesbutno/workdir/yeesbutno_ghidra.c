typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
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

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ushort sa_family_t;

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

typedef struct aes_key_st aes_key_st, *Paes_key_st;

struct aes_key_st {
    uint rd_key[60];
    int rounds;
};

typedef struct aes_key_st AES_KEY;

typedef struct _IO_FILE FILE;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef long __time_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef ulong pthread_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef __time_t time_t;

typedef void (* __sighandler_t)(int);

typedef dword thread_arg;

typedef struct dbentry dbentry, *Pdbentry;

struct dbentry { // PlaceHolder Structure
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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

typedef uint uint32_t;

typedef ushort uint16_t;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00400e80(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int AES_set_encrypt_key(uchar *userKey,int bits,AES_KEY *key)

{
  int iVar1;
  
  iVar1 = AES_set_encrypt_key(userKey,bits,key);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = htons(__hostshort);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void AES_cbc_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int enc)

{
  AES_cbc_encrypt(in,out,length,key,ivec,enc);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = recv(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = strnlen(__string,__maxlen);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = listen(__fd,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uchar * SHA1(uchar *d,size_t n,uchar *md)

{
  uchar *puVar1;
  
  puVar1 = SHA1(d,n,md);
  return puVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
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

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = send(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_detach(pthread_t __th)

{
  int iVar1;
  
  iVar1 = pthread_detach(__th);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = htonl(__hostlong);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = accept(__fd,__addr,__addr_len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  __libc_start_main(main,unaff_retaddr,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00401167)
// WARNING: Removing unreachable block (ram,0x00401171)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004011a4)
// WARNING: Removing unreachable block (ram,0x004011ae)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6972 == '\0') {
    deregister_tm_clones();
    completed_6972 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004011ea)
// WARNING: Removing unreachable block (ram,0x004011f4)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// kill_handler(int)

void kill_handler(int param_1)

{
  close(listensd);
                    // WARNING: Subroutine does not return
  exit(0);
}



// execute_service(void*)

undefined8 execute_service(void *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_13c;
  uint local_138;
  int local_134;
  thread_arg *local_130;
  int local_128 [32];
  uchar local_a8 [136];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = (thread_arg *)param_1;
  iVar3 = get_current_epoch();
  local_130[2] = iVar3 + 1;
  iVar3 = cred_screen(local_130);
  if (iVar3 == 0) {
    local_134 = menu_screen(local_130);
    if (local_134 == 1) {
      fwrite("\nCHOOSEN 0\n",1,0xb,stderr);
      cVar2 = read_moves((thread_arg)local_128,(char *)&local_13c,local_128);
      if ((cVar2 == '\0') || ((local_13c & 3) != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        convert_moves_to_buffer((char *)local_128,local_13c,local_a8,&local_138);
        iVar3 = is_it_valid(master_hash,0x10,local_a8,local_138,local_130[2]);
        if (iVar3 != 0) {
          entry_screen(local_130);
        }
      }
    }
    else {
      if (local_134 != 0) {
        close(local_130[1]);
        if (*(long *)(local_130 + 4) != 0) {
          free(*(void **)(local_130 + 4));
        }
        free(local_130);
        fwrite("Client has disconnected\n",1,0x18,stderr);
        goto LAB_004014a5;
      }
      fwrite("\nCHOOSEN 0\n",1,0xb,stderr);
      send_secret(local_130);
    }
  }
  close(local_130[1]);
  if (*(long *)(local_130 + 4) != 0) {
    free(*(void **)(local_130 + 4));
  }
  free(local_130);
  fwrite("Client has disconnected\n",1,0x18,stderr);
LAB_004014a5:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



// execute_cleaner(void*)

void execute_cleaner(void *param_1)

{
  do {
    sleep(0x4b0);
    remove_older_than(600);
  } while( true );
}



void main(int param_1,undefined8 *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined local_74 [4];
  socklen_t local_70;
  int local_6c;
  int local_68;
  int local_64;
  pthread_t local_60;
  pthread_t local_58;
  int *local_50;
  undefined8 local_48;
  undefined8 local_40;
  sockaddr local_38;
  sockaddr local_28;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 < 2) {
    fprintf(stderr,"Usage: %s [port]\n",*param_2);
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  local_78 = 1;
  local_6c = 0;
  init_db();
  set_init_epoch();
  signal(9,kill_handler);
  signal(2,kill_handler);
  signal(3,kill_handler);
  iVar1 = pthread_create(&local_58,(pthread_attr_t *)0x0,execute_cleaner,local_74);
  if (iVar1 != 0) {
    perror("Cannot create another thread\n");
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  local_68 = socket(2,1,0);
  if (local_68 < 0) {
    perror("Error in creating a new socket");
                    // WARNING: Subroutine does not return
    exit(2);
  }
  iVar1 = setsockopt(local_68,1,2,&local_78,4);
  if (iVar1 != -1) {
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = htonl(0);
    iVar1 = atoi((char *)param_2[1]);
    local_38.sa_data._0_2_ = htons((uint16_t)iVar1);
    iVar1 = bind(local_68,&local_38,0x10);
    if (iVar1 < 0) {
      perror("Error in binding a new socket");
                    // WARNING: Subroutine does not return
      exit(-1);
    }
    iVar1 = listen(local_68,0x32);
    if (iVar1 == 0) {
      local_48 = 10;
      local_40 = 0;
      do {
        while( true ) {
          local_70 = 0x10;
          local_64 = accept(local_68,&local_28,&local_70);
          if (local_64 != -1) break;
          perror("Fork has failed, connection has been dropped\n");
          sleep(1);
        }
        iVar1 = setsockopt(local_64,1,0x14,&local_48,0x10);
        if (iVar1 < 0) {
          perror("setsockopt failed\n");
        }
        local_50 = (int *)malloc(0x18);
        local_50[1] = local_64;
        local_6c = local_6c + 1;
        *local_50 = local_6c;
        *(undefined8 *)(local_50 + 4) = 0;
        iVar1 = pthread_create(&local_60,(pthread_attr_t *)0x0,execute_service,local_50);
        if (iVar1 == 0) {
          pthread_detach(local_60);
        }
        else {
          perror("Cannot create another thread\n");
          sleep(1);
        }
      } while( true );
    }
    perror("Error on listen");
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  perror("setsockopt error");
                    // WARNING: Subroutine does not return
  exit(1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// joke_the_user()

void joke_the_user(void)

{
  return;
}



// parse_attack(char*, int, char*, int)

undefined8 parse_attack(char *param_1,int param_2,char *param_3,int param_4)

{
  undefined8 uVar1;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_10 = -1;
  local_c = -1;
  *param_3 = '\0';
  for (; local_14 < param_2; local_14 = local_14 + 1) {
    if ((param_1[local_14] == '\'') || (param_1[local_14] == '\"')) {
      local_10 = local_14;
      break;
    }
  }
  if (local_10 != -1) {
    for (local_14 = local_10; local_14 < param_2; local_14 = local_14 + 1) {
      if (param_1[local_14] == ';') {
        local_c = local_14;
        break;
      }
    }
  }
  if ((local_10 == -1) || (local_c == -1)) {
    uVar1 = 0;
  }
  else {
    strncpy(param_3,param_1 + local_c,(long)param_4);
    uVar1 = 1;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00401b39)
// read_moves(thread_arg, char*, int*)

undefined8 read_moves(thread_arg param_1,char *param_2,int *param_3)

{
  char cVar1;
  size_t sVar2;
  ssize_t sVar3;
  undefined8 uVar4;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int in_stack_0000000c;
  int local_484;
  int local_47c;
  int local_478;
  uint local_474;
  int local_468;
  int local_464;
  code *local_460;
  char *local_458;
  char *local_450;
  uint local_448 [8];
  char local_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_484 = 0;
  local_47c = 0;
  local_478 = 0;
  local_450 = (char *)0x0;
  *(undefined4 *)param_2 = 0;
  *(undefined *)CONCAT44(in_register_0000003c,param_1) = 0;
LAB_00401e79:
  while( true ) {
    if (0x7f < local_484) {
      *(int *)param_2 = local_484;
      if (local_450 != (char *)0x0) {
        free(local_450);
      }
      uVar4 = 1;
      goto LAB_00401eb3;
    }
    sVar2 = strlen("\nNext move? [w,n,e,s]");
    sVar3 = send(in_stack_0000000c,"\nNext move? [w,n,e,s]",sVar2,0x4000);
    if (sVar3 < 1) {
      perror("Error on send.");
      uVar4 = 0;
      goto LAB_00401eb3;
    }
    local_460 = (code *)0x0;
    if (local_450 != (char *)0x0) {
      free(local_450);
    }
    local_450 = (char *)recv_str((thread_arg *)&stack0x00000008);
    if (local_450 == (char *)0x0) {
      *(undefined4 *)param_2 = 0;
      uVar4 = 0;
      goto LAB_00401eb3;
    }
    sVar2 = strlen(local_450);
    if ((int)sVar2 == 1) break;
    if ((int)sVar2 < 2) {
      *(int *)param_2 = local_484;
      fwrite("\nReceive has failed.\n",1,0x15,stdout);
      if (local_450 != (char *)0x0) {
        free(local_450);
      }
      uVar4 = 0;
      goto LAB_00401eb3;
    }
    cVar1 = parse_attack(local_450,0x400,local_428,0x400);
    if (cVar1 != '\0') {
      sVar2 = strlen(
                    "There seems to be an error in your SQL query. The MySQL server error output below, if there is any, may also help you in diagnosing the problem\nERROR: Unclosed quote @ 1\nSTR: \"\nSQL: \""
                    );
      sVar3 = send(in_stack_0000000c,
                   "There seems to be an error in your SQL query. The MySQL server error output below, if there is any, may also help you in diagnosing the problem\nERROR: Unclosed quote @ 1\nSTR: \"\nSQL: \""
                   ,sVar2,0x4000);
      if (sVar3 < 1) {
        perror("Error on send.");
        if (local_450 != (char *)0x0) {
          free(local_450);
        }
        uVar4 = 0;
      }
      else {
        sVar2 = strnlen(local_428,0x400);
        sVar3 = send(in_stack_0000000c,local_428,sVar2,0x4000);
        if (sVar3 < 1) {
          perror("Error on send.");
          if (local_450 != (char *)0x0) {
            free(local_450);
          }
          uVar4 = 0;
        }
        else {
          *(int *)param_2 = local_484;
          if (local_450 != (char *)0x0) {
            free(local_450);
          }
          uVar4 = 0;
        }
      }
      goto LAB_00401eb3;
    }
    sVar2 = strlen("\nNot a valid choise!");
    sVar3 = send(in_stack_0000000c,"\nNot a valid choise!",sVar2,0x4000);
    if (sVar3 < 1) {
      perror("Error on send.");
      if (local_450 != (char *)0x0) {
        free(local_450);
      }
      uVar4 = 0;
LAB_00401eb3:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return uVar4;
    }
  }
  cVar1 = *local_450;
  if (cVar1 == 'n') {
    local_478 = local_478 + 1;
  }
  else if (cVar1 < 'o') {
    if (cVar1 != 'e') {
LAB_00401a4a:
      sVar2 = strlen("\nNot a valid choise!");
      sVar3 = send(in_stack_0000000c,"\nNot a valid choise!",sVar2,0x4000);
      if (sVar3 < 1) {
        perror("Error on send.");
        if (local_450 != (char *)0x0) {
          free(local_450);
        }
        uVar4 = 0;
        goto LAB_00401eb3;
      }
      goto LAB_00401e79;
    }
    local_47c = local_47c + 1;
  }
  else if (cVar1 == 's') {
    local_478 = local_478 + -1;
  }
  else {
    if (cVar1 != 'w') goto LAB_00401a4a;
    local_47c = local_47c + -1;
  }
  time((time_t *)0x0);
  local_468 = local_478;
  local_464 = local_47c;
  SHA1((uchar *)&local_468,8,(uchar *)local_448);
  for (local_474 = 0; local_474 < 0x12; local_474 = local_474 + 1) {
    if (local_474 == 0x11) {
      local_460 = (code *)0x0;
      local_458 = 
      "There seems to be an error in your SQL query. The MySQL server error output below, if there is any, may also help you in diagnosing the problem\nERROR: Unclosed quote @ 1\nSTR: \"\nSQL: \""
      ;
      break;
    }
    if ((*(int *)(PROBABILITIES + (ulong)local_474 * 4) <= (int)(local_448[0] % 100)) &&
       ((int)(local_448[0] % 100) <= *(int *)(PROBABILITIES + (ulong)(local_474 + 1) * 4))) {
      local_460 = *(code **)(DISCOVER_FUNCTIONS + (ulong)local_474 * 8);
      local_458 = *(char **)(DISCOVER_MESSAGES + (ulong)local_474 * 8);
      break;
    }
  }
  if (local_460 != (code *)0x0) {
    (*local_460)();
  }
  sVar2 = strlen(local_458);
  sVar3 = send(in_stack_0000000c,local_458,sVar2,0x4000);
  if (sVar3 < 1) {
    perror("Error on send.");
    if (local_450 != (char *)0x0) {
      free(local_450);
    }
    uVar4 = 0;
    goto LAB_00401eb3;
  }
  ((undefined *)CONCAT44(in_register_0000003c,param_1))[local_484] = *local_450;
  local_484 = local_484 + 1;
  goto LAB_00401e79;
}



// cred_screen(thread_arg*)

int cred_screen(thread_arg *param_1)

{
  size_t sVar1;
  ssize_t sVar2;
  char *__ptr;
  char *__ptr_00;
  char *__string;
  long in_FS_OFFSET;
  int local_4a4;
  undefined8 local_488;
  undefined8 local_480;
  undefined2 local_478;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined2 local_430;
  undefined local_42e;
  char local_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_488 = 0x5020747265736e49;
  local_480 = 0x3a64726f77737361;
  local_478 = 0x20;
  local_468 = 0x2072657375206f4e;
  local_460 = 0x20746e6573657270;
  local_458 = 0x6f66204244206e69;
  local_450 = 0x736e49202e646e75;
  local_448 = 0x6573206120747265;
  local_440 = 0x206f742074657263;
  local_438 = 0x7265747369676572;
  local_430 = 0x203a;
  local_42e = 0;
  sprintf(local_428,"Your epoch is: %i.\nInsert Username: ",(ulong)param_1[2]);
  sVar1 = strlen(local_428);
  sVar2 = send(param_1[1],local_428,sVar1,0x4000);
  if (sVar2 < 1) {
    local_4a4 = -1;
  }
  else {
    __ptr = (char *)recv_str(param_1);
    if (__ptr == (char *)0x0) {
      local_4a4 = -1;
    }
    else {
      sVar1 = strlen((char *)&local_488);
      sVar2 = send(param_1[1],&local_488,sVar1,0x4000);
      if (sVar2 < 1) {
        local_4a4 = -1;
      }
      else {
        __ptr_00 = (char *)recv_str(param_1);
        if (__ptr_00 == (char *)0x0) {
          free(__ptr);
          local_4a4 = -1;
        }
        else {
          local_4a4 = check_cred(__ptr,__ptr_00,(dbentry **)(param_1 + 4));
          if (local_4a4 < 0) {
            sVar1 = strlen((char *)&local_468);
            sVar2 = send(param_1[1],&local_468,sVar1,0x4000);
            if (sVar2 < 1) {
              free(__ptr);
              free(__ptr_00);
              local_4a4 = -1;
              goto LAB_0040227d;
            }
            __string = (char *)recv_str(param_1);
            if (__string == (char *)0x0) {
              free(__ptr);
              free(__ptr_00);
              local_4a4 = -1;
              goto LAB_0040227d;
            }
            sVar1 = strnlen(__string,0x400);
            if (sVar1 == 0) {
              if (__string != (char *)0x0) {
                free(__string);
              }
              free(__ptr);
              free(__ptr_00);
              goto LAB_0040227d;
            }
            local_4a4 = add_user(__ptr,__ptr_00,__string,(dbentry **)(param_1 + 4));
            free(__ptr);
            free(__ptr_00);
            if (__string != (char *)0x0) {
              free(__string);
            }
          }
          if (local_4a4 == 0) {
            local_4a4 = 0;
          }
          else {
            local_4a4 = -1;
          }
        }
      }
    }
  }
LAB_0040227d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_4a4;
}



// menu_screen(thread_arg*)

undefined8 menu_screen(thread_arg *param_1)

{
  size_t sVar1;
  ssize_t sVar2;
  undefined8 uVar3;
  char *__s;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined local_2e;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0x7720756f79206f44;
  local_60 = 0x28206f7420746e61;
  local_58 = 0x440a2e79616c2970;
  local_50 = 0x617720756f79206f;
  local_48 = 0x6573206f7420746e;
  local_40 = 0x282072756f792065;
  local_38 = 0xa74657263652973;
  local_30 = 0x3e3f;
  local_2e = 0;
  sVar1 = strlen((char *)&local_68);
  sVar2 = send(param_1[1],&local_68,sVar1,0x4000);
  if (sVar2 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    __s = (char *)recv_str(param_1);
    if (__s == (char *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      sVar1 = strlen(__s);
      if (sVar1 < 2) {
        if (*__s == 's') {
          free(__s);
          uVar3 = 0;
        }
        else if (*__s == 'p') {
          free(__s);
          uVar3 = 1;
        }
        else {
          free(__s);
          uVar3 = 0xffffffff;
        }
      }
      else {
        free(__s);
        uVar3 = 0xffffffff;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



// send_secret(thread_arg*)

undefined8 send_secret(thread_arg *param_1)

{
  size_t __n;
  ssize_t sVar1;
  undefined8 uVar2;
  
  __n = strlen((char *)(*(long *)(param_1 + 4) + 0x80e));
  sVar1 = send(param_1[1],(void *)(*(long *)(param_1 + 4) + 0x80e),__n,0x4000);
  if (sVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// entry_screen(thread_arg*)

undefined8 entry_screen(thread_arg *param_1)

{
  size_t sVar1;
  ssize_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0x7375206863696857;
  local_50 = 0x6365732073277265;
  local_48 = 0x2065726120746572;
  local_40 = 0x6b6f6f6c20756f79;
  local_38 = 0x3f726f6620676e69;
  local_30 = 0x3e3f0a;
  sVar1 = strlen((char *)&local_58);
  sVar2 = send(param_1[1],&local_58,sVar1,0x4000);
  if (sVar2 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    pcVar4 = (char *)recv_str(param_1);
    if (pcVar4 == (char *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      lVar5 = get_user_cred(pcVar4);
      if (lVar5 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        sVar1 = strlen((char *)(lVar5 + 0x80e));
        sVar2 = send(param_1[1],(void *)(lVar5 + 0x80e),sVar1,0x4000);
        if (sVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



// min(int, int)

int min(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}



// dohash(unsigned char*, unsigned int, unsigned char*)

undefined8 dohash(uchar *param_1,uint param_2,uchar *param_3)

{
  uchar *out;
  uchar *in;
  size_t n;
  long in_FS_OFFSET;
  uint local_170;
  AES_KEY local_158;
  uchar local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x414c45454e455250;
  local_30 = 0x4d5345564f525050;
  local_28 = 0x45425941;
  local_24 = 0;
  local_170 = (param_2 / 0x10) * 0x10;
  if (param_2 % 0x10 != 0) {
    local_170 = local_170 + 0x10;
  }
  out = (uchar *)malloc((ulong)local_170);
  if (out == (uchar *)0x0) {
                    // WARNING: Subroutine does not return
    __assert_fail("encrypted != __null","ubersecurecrypt.cpp",0x2b,
                  "int dohash(unsigned char*, unsigned int, unsigned char*)");
  }
  in = (uchar *)malloc((ulong)local_170);
  if (in == (uchar *)0x0) {
                    // WARNING: Subroutine does not return
    __assert_fail("toencrypt != __null","ubersecurecrypt.cpp",0x2d,
                  "int dohash(unsigned char*, unsigned int, unsigned char*)");
  }
  memset(in,0,(ulong)local_170);
  memcpy(in,param_1,(ulong)param_2);
  n = strlen((char *)&local_38);
  SHA1((uchar *)&local_38,n,local_58);
  AES_set_encrypt_key(local_58,0x80,&local_158);
  AES_cbc_encrypt(in,out,(ulong)local_170,&local_158,local_58,1);
  memcpy(param_3,out + ((ulong)local_170 - 0x10),0x10);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// create_challenge_1()

int create_challenge_1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}



// create_forward_secure_tokens(unsigned char const*, unsigned int, unsigned char*, int)

undefined8 create_forward_secure_tokens(uchar *param_1,uint param_2,uchar *param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  uint local_830;
  int local_82c;
  uchar local_828 [1024];
  uchar local_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memcpy(local_828,param_1,(ulong)param_2);
  iVar1 = min(param_2,0x10);
  memcpy(local_428,param_1,(long)iVar1);
  local_830 = param_2;
  for (local_82c = 0; local_82c < param_4; local_82c = local_82c + 1) {
    dohash(local_828,local_830,local_428);
    memcpy(local_828,local_428,0x10);
    local_830 = 0x10;
  }
  memcpy(param_3,local_428,0x10);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



// is_it_valid(unsigned char*, unsigned int, unsigned char*, unsigned int, int)

bool is_it_valid(uchar *param_1,uint param_2,uchar *param_3,uint param_4,int param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  uchar local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  create_forward_secure_tokens(param_3,param_4,local_38,param_5);
  iVar1 = memcmp(local_38,param_1,0x10);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1 == 0;
}



// convert_moves_to_buffer(char*, unsigned int, unsigned char*, unsigned int*)

undefined8 convert_moves_to_buffer(char *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  *param_4 = 0;
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    uVar2 = local_18 >> 2;
    if ((local_18 & 3) == 0) {
      param_3[(int)uVar2] = '\0';
    }
    cVar1 = param_1[local_18];
    if (cVar1 == 'n') {
      local_10 = 1;
    }
    else if (cVar1 < 'o') {
      if (cVar1 == 'e') {
        local_10 = 3;
      }
    }
    else if (cVar1 == 's') {
      local_10 = 2;
    }
    else if (cVar1 == 'w') {
      local_10 = 0;
    }
    param_3[(int)uVar2] =
         (char)(local_10 << ((char)local_14 * '\x02' & 0x1fU)) + param_3[(int)uVar2];
    *param_4 = uVar2 + 1;
    local_14 = (local_14 + 1) % 4;
  }
  return 0;
}



// vulnerable_function1(char*, int)

undefined8 vulnerable_function1(char *param_1,int param_2)

{
  param_1[param_2] = '\0';
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// init_db()

undefined8 init_db(void)

{
  undefined8 uVar1;
  int local_c;
  
  ht = calloc(0x400,0x18);
  if (ht == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_c = 0; local_c < 0x400; local_c = local_c + 1) {
      *(undefined4 *)((long)local_c * 0x18 + (long)ht) = 0;
      *(undefined8 *)((long)ht + (long)local_c * 0x18 + 8) = 0;
      *(undefined8 *)((long)ht + (long)local_c * 0x18 + 0x10) = 0;
    }
    mt._0_8_ = 1;
    for (local_c = 1; local_c < 4; local_c = local_c + 1) {
      *(ulong *)(mt + (long)local_c * 8) =
           (ulong)((uint)(*(long *)(mt + (long)(local_c + -1) * 8) << 8) & 0x300);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// get_hash(char*)

uint get_hash(char *param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  uint local_854;
  int local_850;
  byte local_848 [32];
  uchar local_828 [2056];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  strncpy((char *)local_828,param_1,0x400);
  sVar1 = strlen((char *)local_828);
  SHA1(local_828,(long)(int)sVar1,local_848);
  local_854 = 0;
  for (local_850 = 0; local_850 < 4; local_850 = local_850 + 1) {
    local_854 = local_854 +
                (int)*(undefined8 *)(mt + (long)local_850 * 8) * (uint)local_848[local_850];
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_854 & 0x3ff;
}



// add_user(char*, char*, char*, dbentry**)

undefined8 add_user(char *param_1,char *param_2,char *param_3,dbentry **param_4)

{
  long lVar1;
  time_t *ptVar2;
  time_t *ptVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  time_t tVar8;
  dbentry *pdVar9;
  int local_30;
  long local_28;
  
  pthread_mutex_lock((pthread_mutex_t *)dblock);
  uVar4 = get_hash(param_1);
  local_28 = *(long *)((ulong)uVar4 * 0x18 + ht + 8);
  for (local_30 = 0; local_30 < *(int *)((ulong)uVar4 * 0x18 + ht); local_30 = local_30 + 1) {
    iVar5 = strncmp((char *)(local_28 + 0xc),param_1,0x400);
    if (iVar5 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)dblock);
      return 0xfffffffd;
    }
    local_28 = *(long *)(local_28 + 0xc10);
  }
  if (*(long *)((ulong)uVar4 * 0x18 + ht + 8) == 0) {
    lVar1 = ht + (ulong)uVar4 * 0x18;
    pvVar6 = malloc(0xc20);
    *(void **)(lVar1 + 8) = pvVar6;
    if (*(long *)(lVar1 + 8) == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)dblock);
      return 0xfffffffd;
    }
    *(undefined8 *)(ht + (ulong)uVar4 * 0x18 + 0x10) = *(undefined8 *)((ulong)uVar4 * 0x18 + ht + 8)
    ;
    *(undefined8 *)(*(long *)((ulong)uVar4 * 0x18 + ht + 0x10) + 0xc10) = 0;
  }
  else {
    lVar1 = *(long *)((ulong)uVar4 * 0x18 + ht + 0x10);
    pvVar6 = malloc(0xc20);
    *(void **)(lVar1 + 0xc10) = pvVar6;
    if (*(long *)(lVar1 + 0xc10) == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)dblock);
      return 0xfffffffd;
    }
    lVar1 = *(long *)(*(long *)((ulong)uVar4 * 0x18 + ht + 0x10) + 0xc10);
    *(undefined8 *)(lVar1 + 0xc10) = 0;
    *(long *)(ht + (ulong)uVar4 * 0x18 + 0x10) = lVar1;
  }
  piVar7 = (int *)((ulong)uVar4 * 0x18 + ht);
  *piVar7 = *piVar7 + 1;
  ptVar2 = *(time_t **)((ulong)uVar4 * 0x18 + ht + 0x10);
  ptVar3 = ptVar2;
  if (oldest != (time_t *)0x0) {
    *(time_t **)((long)newest + 0xc18) = ptVar2;
    ptVar3 = oldest;
  }
  oldest = ptVar3;
  newest = ptVar2;
  strncpy((char *)((long)ptVar2 + 0xc),param_1,0x400);
  strncpy((char *)((long)ptVar2 + 0x40d),param_2,0x400);
  strncpy((char *)((long)ptVar2 + 0x80e),param_3,0x400);
  uid = uid + 1;
  *(int *)(ptVar2 + 1) = uid;
  tVar8 = time((time_t *)0x0);
  *ptVar2 = tVar8;
  ptVar2[0x182] = 0;
  ptVar2[0x183] = 0;
  pdVar9 = (dbentry *)malloc(0xc20);
  *param_4 = pdVar9;
  strncpy((char *)(*param_4 + 0xc),param_1,0x400);
  strncpy((char *)(*param_4 + 0x40d),param_2,0x400);
  strncpy((char *)(*param_4 + 0x80e),param_3,0x400);
  *(undefined4 *)(*param_4 + 8) = *(undefined4 *)(ptVar2 + 1);
  *(time_t *)*param_4 = *ptVar2;
  *(undefined8 *)(*param_4 + 0xc10) = 0;
  *(undefined8 *)(*param_4 + 0xc18) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)dblock);
  return 0;
}



// check_cred(char*, char*, dbentry**)

undefined4 check_cred(char *param_1,char *param_2,dbentry **param_3)

{
  dbentry *pdVar1;
  uint uVar2;
  int iVar3;
  dbentry *pdVar4;
  int local_1c;
  undefined4 local_18;
  undefined8 *local_10;
  
  local_18 = 0xffffffff;
  pthread_mutex_lock((pthread_mutex_t *)dblock);
  uVar2 = get_hash(param_1);
  local_10 = *(undefined8 **)((ulong)uVar2 * 0x18 + ht + 8);
  local_1c = 0;
  do {
    if (*(int *)((ulong)uVar2 * 0x18 + ht) <= local_1c) {
LAB_0040332a:
      pthread_mutex_unlock((pthread_mutex_t *)dblock);
      return local_18;
    }
    iVar3 = strncmp((char *)((long)local_10 + 0xc),param_1,0x400);
    if (iVar3 == 0) {
      iVar3 = strncmp((char *)((long)local_10 + 0x40d),param_2,0x400);
      if (iVar3 == 0) {
        pdVar4 = (dbentry *)malloc(0xc20);
        *param_3 = pdVar4;
        if (*param_3 == (dbentry *)0x0) {
          local_18 = 0xfffffffd;
        }
        else {
          strncpy((char *)(*param_3 + 0xc),(char *)((long)local_10 + 0xc),0x400);
          strncpy((char *)(*param_3 + 0x40d),(char *)((long)local_10 + 0x40d),0x400);
          strncpy((char *)(*param_3 + 0x80e),(char *)((long)local_10 + 0x80e),0x400);
          *(undefined8 *)*param_3 = *local_10;
          *(undefined4 *)(*param_3 + 8) = *(undefined4 *)(local_10 + 1);
          pdVar4 = *param_3;
          pdVar1 = *param_3;
          *(undefined8 *)(pdVar1 + 0xc18) = 0;
          *(undefined8 *)(pdVar4 + 0xc10) = *(undefined8 *)(pdVar1 + 0xc18);
          local_18 = 0;
        }
      }
      else {
        local_18 = 0xfffffffe;
        *param_3 = (dbentry *)0x0;
      }
      goto LAB_0040332a;
    }
    local_10 = (undefined8 *)local_10[0x182];
    local_1c = local_1c + 1;
  } while( true );
}



// remove_older_than(int)

void remove_older_than(int param_1)

{
  long *__ptr;
  int iVar1;
  time_t tVar2;
  int *piVar3;
  
  tVar2 = time((time_t *)0x0);
  pthread_mutex_lock((pthread_mutex_t *)dblock);
  while ((oldest != (long *)0x0 && ((long)param_1 < tVar2 - *oldest))) {
    iVar1 = get_hash((char *)((long)oldest + 0xc));
    *(long *)(ht + (long)iVar1 * 0x18 + 8) = oldest[0x182];
    piVar3 = (int *)((long)iVar1 * 0x18 + ht);
    *piVar3 = *piVar3 + -1;
    __ptr = oldest;
    oldest = (long *)oldest[0x183];
    free(__ptr);
  }
  pthread_mutex_unlock((pthread_mutex_t *)dblock);
  return;
}



// get_user_cred(char*)

long get_user_cred(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_20;
  long local_18;
  long local_10;
  
  pthread_mutex_lock((pthread_mutex_t *)dblock);
  iVar1 = get_hash(param_1);
  local_18 = *(long *)((long)iVar1 * 0x18 + ht + 8);
  local_10 = 0;
  local_20 = 0;
  do {
    if (*(int *)((long)iVar1 * 0x18 + ht) <= local_20) {
LAB_004034ea:
      pthread_mutex_unlock((pthread_mutex_t *)dblock);
      return local_10;
    }
    iVar2 = strncmp((char *)(local_18 + 0xc),param_1,0x400);
    if (iVar2 == 0) {
      local_10 = local_18;
      goto LAB_004034ea;
    }
    local_18 = *(long *)(local_18 + 0xc10);
    local_20 = local_20 + 1;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// set_init_epoch()

void set_init_epoch(void)

{
  starting_epoch = 0x52a18400;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// get_current_epoch()

int get_current_epoch(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 500;
}



// recv_str(thread_arg*)

void * recv_str(thread_arg *param_1)

{
  ssize_t sVar1;
  char local_19;
  int local_18;
  int local_14;
  void *local_10;
  
  local_10 = calloc(0x401,1);
  for (local_18 = 0; local_18 < 0x400; local_18 = local_18 + local_14) {
    sVar1 = recv(param_1[1],&local_19,1,0);
    local_14 = (int)sVar1;
    if (local_14 < 1) {
      free(local_10);
      return (void *)0x0;
    }
    if ((local_19 == '\n') || (local_19 == '\r')) break;
    *(char *)((long)local_18 + (long)local_10) = local_19;
  }
  *(undefined *)((long)local_10 + (long)local_18) = 0;
  return local_10;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(param_1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


