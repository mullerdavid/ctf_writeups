typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct _MEMORYSTATUSEX _MEMORYSTATUSEX, *P_MEMORYSTATUSEX;

typedef ulong DWORD;

typedef ulonglong ULONGLONG;

typedef ULONGLONG DWORDLONG;

struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef void *PVOID;

typedef ulonglong ULONG_PTR;

typedef ulonglong DWORD64;

typedef ushort WORD;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef longlong LONGLONG;

typedef uchar BYTE;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _MEMORYSTATUSEX *LPMEMORYSTATUSEX;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef char CHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef wchar_t WCHAR;

typedef WCHAR *LPCWSTR;

typedef struct _M128A *PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong *PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef void *HANDLE;

typedef CHAR *LPCSTR;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef DWORD ACCESS_MASK;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR SIZE_T;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void *LPVOID;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef DWORD *LPDWORD;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef int BOOL;

typedef BYTE *LPBYTE;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef int PMFN;

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int pForwardCompat;
    int pCatchableTypeArray;
};

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct _s_ThrowInfo ThrowInfo;

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef ulonglong uintptr_t;

typedef struct basic_streambuf<char,struct_std::char_traits<char>_> basic_streambuf<char,struct_std::char_traits<char>_>, *Pbasic_streambuf<char,struct_std::char_traits<char>_>;

struct basic_streambuf<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct basic_ostream<char,struct_std::char_traits<char>_> basic_ostream<char,struct_std::char_traits<char>_>, *Pbasic_ostream<char,struct_std::char_traits<char>_>;

struct basic_ostream<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,std::char_traits<char>_> basic_streambuf<char,std::char_traits<char>_>, *Pbasic_streambuf<char,std::char_traits<char>_>;

struct basic_streambuf<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_ostream<char,std::char_traits<char>_> basic_ostream<char,std::char_traits<char>_>, *Pbasic_ostream<char,std::char_traits<char>_>;

struct basic_ostream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_ios<char,std::char_traits<char>_> basic_ios<char,std::char_traits<char>_>, *Pbasic_ios<char,std::char_traits<char>_>;

struct basic_ios<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct _Smanip<__int64> _Smanip<__int64>, *P_Smanip<__int64>;

struct _Smanip<__int64> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef int errno_t;

typedef ulonglong size_t;



undefined DAT_14000b938;
pointer[2] vftable;
undefined DAT_140009be8;
ulonglong DAT_14000b000;
undefined DAT_1400084c0;
int DAT_14000b07c;
uint DAT_14000b078;
int DAT_14000b084;
int DAT_14000b080;
pointer[15] vftable;
undefined LAB_1400012e0;
undefined LAB_140001300;
pointer[1] vftable;
void *ThreadLocalStoragePointer;
undefined *PTR_cout_140008170;
undefined FUN_1400051b0;
undefined LAB_1400029b0;
undefined FUN_140003130;
undefined FUN_140003440;
undefined LAB_140003ca0;
undefined FUN_1400034b0;
undefined LAB_140003cc0;
undefined FUN_1400035c0;
undefined LAB_140003ce0;
undefined FUN_140003600;
undefined DAT_140009af0;
undefined FUN_1400036d0;
undefined FUN_140003770;
undefined FUN_140003880;
undefined FUN_140003930;
undefined FUN_1400029c0;
undefined FUN_140002a60;
undefined FUN_140002b30;
undefined FUN_140002c00;
undefined FUN_140002cd0;
undefined FUN_140002dd0;
undefined FUN_140002e70;
undefined FUN_140002f10;
undefined FUN_140002750;
undefined DAT_ffffffff80000001;
uintptr_t DAT_14000b000;
undefined FUN_1400065d4;
undefined FUN_140006894;
int DAT_14000b8c0;
undefined DAT_140008388;
undefined DAT_140008398;
undefined DAT_1400083a0;
undefined DAT_1400083b8;
undefined8 DAT_14000b4e8;
undefined DAT_14000b488;
undefined DAT_14000b360;
undefined DAT_14000b470;
undefined DAT_14000b350;
undefined DAT_14000b354;
undefined DAT_14000b368;
undefined8 DAT_14000b000;
undefined8 DAT_14000b040;
undefined8 DAT_14000b370;
undefined *PTR_DAT_140008400;
undefined DAT_14000b3f0;
undefined DAT_140009ab8;
void *DAT_14000b8c8;
void *StackBase;
undefined1 DAT_14000b8d0;
char DAT_14000b8d1;
undefined8 DAT_14000b8d8;
undefined DAT_14000b8e8;
undefined DAT_14000b8f0;
undefined DAT_14000b900;
undefined8 UNK_14000b8e0;
undefined8 UNK_14000b8f8;
IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER_1400001f0;
undefined DAT_1400002b8;
undefined8 DAT_14000b8c8;
char DAT_14000b8d0;
ulonglong DAT_14000b040;
undefined DAT_14000b910;
undefined DAT_14000b920;
int DAT_14000b04c;
undefined DAT_14000b950;
undefined DAT_14000b948;
undefined DAT_14000b928;
undefined FUN_1400067fc;
undefined8 DAT_140009198;
undefined8 DAT_1400091a8;
undefined DAT_14000b068;
undefined DAT_14000b060;
uint DAT_14000b930;
ulonglong DAT_14000b050;
undefined DAT_14000b058;
uint DAT_14000b05c;
undefined DAT_14000b92c;
int DAT_14000b070;

undefined * FUN_140001000(void)

{
  return &DAT_14000b938;
}



void FUN_140001010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_140001000();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}



undefined8 * FUN_140001070(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



char * FUN_1400010b0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



undefined8 * FUN_1400010d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



undefined8 * FUN_140001140(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



void FUN_140001170(void)

{
  undefined8 local_28 [5];
  
  FUN_140001140(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009be8);
}



undefined8 * FUN_140001190(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



undefined8 * FUN_1400011d0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_140001210(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_140001230(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14000b000 ^ (ulonglong)auStack_48;
  local_20 = 1;
  *param_1 = std::exception::vftable;
  local_28 = &DAT_1400084c0;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(&local_28);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



undefined8 * FUN_1400012a0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_140001310(void)

{
  ulonglong uVar1;
  uint extraout_var;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  LARGE_INTEGER local_30;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14000b000 ^ (ulonglong)auStack_58;
  QueryPerformanceFrequency(&local_20);
  QueryPerformanceCounter(&local_28);
  uVar2 = (ulonglong)extraout_var << 0x20;
  iVar4 = 0;
  local_38 = 0;
  do {
    uVar1 = rdtsc();
    uVar3 = iVar4 * -0x21524111;
    iVar4 = iVar4 + 1;
    uVar2 = (CONCAT44((int)(uVar2 >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000) ^
            (ulonglong)uVar3;
    local_38 = local_38 + uVar2;
  } while (iVar4 < 1000000);
  QueryPerformanceCounter(&local_30);
  return CONCAT71((int7)((ulonglong)(local_30.QuadPart - (longlong)local_28) >> 8),
                  50000.0 < ((double)(local_30.QuadPart - (longlong)local_28) * 1000000.0) /
                            (double)local_20.QuadPart);
}



undefined8 FUN_1400013c0(void)

{
  ulonglong uVar1;
  BOOL BVar2;
  LPVOID lpAddress;
  LPVOID pvVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  
  lpAddress = VirtualAlloc((LPVOID)0x0,0x100000,0x3000,4);
  if (lpAddress == (LPVOID)0x0) {
    return 1;
  }
  uVar4 = 0;
  pvVar3 = lpAddress;
  do {
    uVar1 = rdtsc();
    pvVar3 = (LPVOID)(CONCAT44((int)((ulonglong)pvVar3 >> 0x20),(int)uVar1) |
                     uVar1 & 0xffffffff00000000);
    *(LPVOID *)((longlong)lpAddress + uVar4 * 8) = pvVar3;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x20000);
  BVar2 = VirtualFree(lpAddress,0,0x8000);
  return CONCAT44(extraout_var,BVar2) & 0xffffffffffffff00;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_140001430(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined1 auStack_78 [32];
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_14000b000 ^ (ulonglong)auStack_78;
  local_58.dwLength = 0x40;
  BVar1 = GlobalMemoryStatusEx(&local_58);
  if (BVar1 != 0) {
    return CONCAT71(0x1000000,local_58.ullTotalPhys < 0x100000000);
  }
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}



undefined8 FUN_1400014a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001310();
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_1400013c0();
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_140001430();
      if ((char)uVar1 == '\0') {
        return uVar1;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



void FUN_1400014d0(int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1[1];
  uVar2 = ((uVar4 >> 5 ^ uVar4 << 4) + uVar4 ^ DAT_14000b078) + *param_1;
  uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b084 + 0x9e3779b9U) + uVar4;
  uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b07c + 0x9e3779b9U) + uVar2;
  uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b080 + 0x3c6ef372U) + uVar4;
  uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b080 + 0x3c6ef372U) + uVar2;
  uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b07c + 0xdaa66d2bU) + uVar4;
  uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b084 + 0xdaa66d2bU) + uVar2;
  uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b078 + 0x78dde6e4) + uVar4;
  uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b078 + 0x78dde6e4) + uVar2;
  uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b078 + 0x1715609d) + uVar4;
  uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b07c + 0x1715609dU) + uVar2;
  uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b084 + 0xb54cda56U) + uVar4;
  uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b080 + 0xb54cda56U) + uVar2;
  uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b080 + 0x5384540fU) + uVar4;
  uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b084 + 0x5384540fU) + uVar2;
  uVar1 = FUN_1400014a0();
  if ((char)uVar1 == '\0') {
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b07c + 0xf1bbcdc8U) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b078 + 0xf1bbcdc8) + uVar2;
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b078 + 0x8ff34781) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b07c + 0x8ff34781U) + uVar2;
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b078 + 0x2e2ac13a) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b080 + 0x2e2ac13aU) + uVar2;
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b084 + 0xcc623af3U) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b084 + 0xcc623af3U) + uVar2;
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b080 + 0x6a99b4acU) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b078 + 0x6a99b4ac) + uVar2;
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b07c + 0x8d12e65U) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b07c + 0x8d12e65U) + uVar2;
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b07c + 0xa708a81eU) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b080 + 0xa708a81eU) + uVar2;
    uVar4 = ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ DAT_14000b078 + 0x454021d7) + uVar4;
    uVar2 = ((uVar4 >> 5 ^ uVar4 * 0x10) + uVar4 ^ DAT_14000b084 + 0x454021d7U) + uVar2;
    iVar3 = (DAT_14000b084 + 0xe3779b90U ^ (uVar2 >> 5 ^ uVar2 * 0x10) + uVar2) + uVar4;
    uVar1 = FUN_1400014a0();
    if ((char)uVar1 == '\0') {
      *(char *)((longlong)param_1 + 1) = (char)(uVar2 >> 8);
      *(char *)((longlong)param_1 + 5) = (char)((uint)iVar3 >> 8);
      *(char *)((longlong)param_1 + 2) = (char)(uVar2 >> 0x10);
      *(char *)param_1 = (char)uVar2;
      *(char *)(param_1 + 1) = (char)iVar3;
      *(char *)((longlong)param_1 + 7) = (char)((uint)iVar3 >> 0x18);
      *(char *)((longlong)param_1 + 3) = (char)(uVar2 >> 0x18);
      *(char *)((longlong)param_1 + 6) = (char)((uint)iVar3 >> 0x10);
      return;
    }
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong * FUN_140001960(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong _Size;
  longlong *_Src;
  undefined1 auStackY_98 [32];
  byte local_68 [4];
  undefined4 local_64;
  longlong *local_60;
  longlong local_58;
  byte *local_50;
  byte *pbStack_48;
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14000b000 ^ (ulonglong)auStackY_98;
  uVar2 = 0;
  local_64 = 0;
  if ((ulonglong)param_2[3] < 0x10) {
    lVar4 = param_2[2] + (longlong)param_2;
    _Src = param_2;
  }
  else {
    lVar4 = *param_2 + param_2[2];
    _Src = (longlong *)*param_2;
  }
  local_50 = (byte *)0x0;
  pbStack_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
  _Size = lVar4 - (longlong)_Src;
  local_60 = param_1;
  if (_Size != 0) {
    if (0x7fffffffffffffff < _Size) {
                    // WARNING: Subroutine does not return
      FUN_140004d00();
    }
    if (_Size < 0x1000) {
      local_50 = (byte *)FUN_140005e40(_Size);
    }
    else {
      if (_Size + 0x27 <= _Size) {
                    // WARNING: Subroutine does not return
        FUN_140001170();
      }
      lVar4 = FUN_140005e40(_Size + 0x27);
      if (lVar4 == 0) goto LAB_140001b61;
      local_50 = (byte *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(local_50 + -8) = lVar4;
    }
    pbVar1 = local_50 + _Size;
    pbStack_48 = local_50;
    local_40 = pbVar1;
    memmove(local_50,_Src,_Size);
    pbStack_48 = pbVar1;
  }
  local_68[0] = 0;
  FUN_140004770((longlong *)&local_50,&local_58,pbStack_48,
                (ulonglong)(-((int)pbStack_48 - (int)local_50) & 7),local_68);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_64 = 1;
  for (uVar3 = *(uint *)(param_2 + 2); local_68[0] = (byte)uVar3, 0x7f < uVar3; uVar3 = uVar3 >> 7)
  {
    local_68[0] = local_68[0] | 0x80;
    pbVar1 = (byte *)param_1[1];
    if (pbVar1 == (byte *)param_1[2]) {
      FUN_140005bc0(param_1,pbVar1,local_68);
    }
    else {
      *pbVar1 = local_68[0];
      param_1[1] = param_1[1] + 1;
    }
  }
  pbVar1 = (byte *)param_1[1];
  if (pbVar1 == (byte *)param_1[2]) {
    FUN_140005bc0(param_1,pbVar1,local_68);
  }
  else {
    *pbVar1 = local_68[0];
    param_1[1] = param_1[1] + 1;
  }
  if (pbStack_48 != local_50) {
    do {
      FUN_1400014d0((int *)(local_50 + uVar2));
      uVar2 = uVar2 + 8;
    } while (uVar2 < (ulonglong)((longlong)pbStack_48 - (longlong)local_50));
  }
  FUN_140005520(param_1,(void *)param_1[1],local_50,(longlong)pbStack_48 - (longlong)local_50);
  if (local_50 != (byte *)0x0) {
    pbVar1 = local_50;
    if ((0xfff < (ulonglong)((longlong)local_40 - (longlong)local_50)) &&
       (pbVar1 = *(byte **)(local_50 + -8), (byte *)0x1f < local_50 + (-8 - (longlong)pbVar1))) {
LAB_140001b61:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pbVar1);
  }
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong * FUN_140001bb0(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  basic_ostream<> *pbVar4;
  void *pvVar5;
  size_t sVar6;
  byte *pbVar8;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  longlong *local_148;
  int iStack_13c;
  char *local_138;
  undefined **local_130;
  basic_ostream<> local_128 [16];
  longlong *local_118;
  longlong *local_110;
  longlong *local_f8;
  ulonglong *local_f0;
  int *local_e0;
  ulonglong local_c8;
  uint local_c0;
  basic_ios<> local_b0 [104];
  ulonglong local_48;
  ulonglong uVar7;
  
  local_48 = DAT_14000b000 ^ (ulonglong)auStack_188;
  local_168 = 0;
  local_148 = param_1;
  memset(&local_138,0,0xe8);
  local_138 = "";
  std::basic_ios<>::basic_ios<>(local_b0);
  local_168 = 2;
  std::basic_ostream<>::basic_ostream<>
            ((basic_ostream<> *)&local_138,(basic_streambuf<> *)&local_130,false);
  *(undefined ***)((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138 + 4)) =
       *(int *)(local_138 + 4) + -0x88;
  std::basic_streambuf<>::basic_streambuf<>((basic_streambuf<> *)&local_130);
  local_130 = std::basic_stringbuf<>::vftable;
  local_c8 = 0;
  local_c0 = 4;
  pbVar2 = (byte *)param_2[1];
  for (pbVar8 = (byte *)*param_2; pbVar8 != pbVar2; pbVar8 = pbVar8 + 1) {
    bVar1 = *pbVar8;
    puVar3 = (undefined8 *)std::setw((__int64)&local_160);
    pbVar4 = std::basic_ostream<>::operator<<
                       ((basic_ostream<> *)&local_138,
                        (_func_ios_base_ptr_ios_base_ptr *)&LAB_1400012e0);
    pbVar4 = std::basic_ostream<>::operator<<
                       ((basic_ostream<> *)pbVar4,(_func_ios_base_ptr_ios_base_ptr *)&LAB_140001300)
    ;
    (*(code *)*puVar3)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),puVar3[1]);
    pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x58] = (basic_ostream<>)0x30;
    std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,(uint)bVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_168 = 10;
  local_160 = 0;
  uStack_158 = 0;
  if ((((byte)local_c0 & 0x22) == 2) || (uVar7 = *local_f0, uVar7 == 0)) {
    if (((local_c0 & 4) == 0) && (*local_f8 != 0)) {
      pvVar5 = (void *)*local_118;
      sVar6 = ((longlong)*local_e0 - (longlong)pvVar5) + *local_f8;
    }
    else {
      sVar6 = 0;
      pvVar5 = (void *)0x0;
    }
  }
  else {
    pvVar5 = (void *)*local_110;
    if (uVar7 < local_c8) {
      uVar7 = local_c8;
    }
    sVar6 = uVar7 - (longlong)pvVar5;
  }
  if (pvVar5 != (void *)0x0) {
    FUN_140004d50(param_1,pvVar5,sVar6);
  }
  *(undefined ***)((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138 + 4)) =
       *(int *)(local_138 + 4) + -0x88;
  FUN_1400046b0((basic_streambuf<> *)&local_130);
  std::basic_ostream<>::~basic_ostream<>(local_128);
  std::basic_ios<>::~basic_ios<>(local_b0);
  return param_1;
}



void FUN_140001e10(longlong *param_1)

{
  basic_ios<> *this;
  
  this = (basic_ios<> *)(param_1 + 0x11);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x88) =
       std::basic_ostringstream<>::vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x8c) = *(int *)(*param_1 + 4) + -0x88;
  FUN_1400046b0((basic_streambuf<> *)(param_1 + 1));
  std::basic_ostream<>::~basic_ostream<>((basic_ostream<> *)(param_1 + 2));
                    // WARNING: Could not recover jumptable at 0x000140001e64. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_ios<>::~basic_ios<>(this);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

int FUN_140001e70(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 ****ppppuVar9;
  byte ****ppppbVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 ****_Dst;
  byte ****ppppbVar14;
  undefined1 auStack_f8 [32];
  undefined8 ***local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  void *local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 ***local_90;
  longlong lStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  ulonglong local_60;
  ulonglong local_58;
  byte ***local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14000b000 ^ (ulonglong)auStack_f8;
  ppppuVar6 = (undefined8 ****)0x0;
  local_98 = param_1;
  FUN_140004eb0(&local_90,*(uint *)(*(longlong *)ThreadLocalStoragePointer + 0x10));
  plVar1 = FUN_140001960((longlong *)&local_b0,(longlong *)&local_90);
  FUN_140001bb0((longlong *)&local_70,plVar1);
  if (local_b0 != (void *)0x0) {
    pvVar7 = local_b0;
    if ((0xfff < (ulonglong)(local_a0 - (longlong)local_b0)) &&
       (pvVar7 = *(void **)((longlong)local_b0 + -8),
       0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
    local_b0 = (void *)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
  }
  if (0xf < uStack_78) {
    pppuVar3 = local_90;
    if ((0xfff < uStack_78 + 1) &&
       (pppuVar3 = (undefined8 ***)local_90[-1],
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppuVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppuVar3);
  }
  local_80 = 0;
  uStack_78 = 0xf;
  local_90 = (undefined8 ***)((ulonglong)local_90 & 0xffffffffffffff00);
  local_d8 = (undefined8 ****)0x0;
  lStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  plVar1 = (longlong *)&local_70;
  if (0xf < local_58) {
    plVar1 = (longlong *)CONCAT71(uStack_6f,local_70);
  }
  if (0x7fffffffffffffff < local_60) {
                    // WARNING: Subroutine does not return
    FUN_140001210();
  }
  ppppuVar9 = ppppuVar6;
  if (local_60 < 0x10) {
    uVar12 = 0xf;
    uStack_c0 = 0xf;
    _Dst = (undefined8 ****)*plVar1;
    local_d8 = _Dst;
    lStack_d0 = plVar1[1];
    local_c8 = local_60;
  }
  else {
    uVar12 = local_60 | 0xf;
    if (uVar12 < 0x8000000000000000) {
      if (uVar12 < 0x16) {
        uVar12 = 0x16;
      }
      uVar5 = uVar12 + 1;
      _Dst = ppppuVar6;
      if (uVar5 != 0) {
        if (0xfff < uVar5) {
          uVar2 = uVar12 + 0x28;
          if (uVar2 <= uVar5) {
                    // WARNING: Subroutine does not return
            FUN_140001170();
          }
          goto LAB_140001fe9;
        }
        _Dst = (undefined8 ****)FUN_140005e40(uVar5);
      }
    }
    else {
      uVar2 = 0x8000000000000027;
      uVar12 = 0x7fffffffffffffff;
LAB_140001fe9:
      pppuVar3 = (undefined8 ***)FUN_140005e40(uVar2);
      if (pppuVar3 == (undefined8 ***)0x0) goto LAB_14000217d;
      _Dst = (undefined8 ****)((longlong)pppuVar3 + 0x27U & 0xffffffffffffffe0);
      _Dst[-1] = pppuVar3;
    }
    local_c8 = local_60;
    local_d8 = _Dst;
    uStack_c0 = uVar12;
    memcpy(_Dst,plVar1,local_60 + 1);
  }
  while( true ) {
    ppppuVar4 = &local_d8;
    if (0xf < uVar12) {
      ppppuVar4 = _Dst;
    }
    iVar11 = (int)ppppuVar9;
    if (*(char *)((longlong)ppppuVar6 + (longlong)ppppuVar4) != '0') break;
    ppppuVar6 = (undefined8 ****)((longlong)ppppuVar6 + 1);
    ppppuVar9 = (undefined8 ****)(ulonglong)(iVar11 + 1);
  }
  uVar5 = (longlong)iVar11;
  if (local_60 < (ulonglong)(longlong)iVar11) {
    uVar5 = local_60;
  }
  ppppuVar6 = &local_d8;
  if (0xf < uVar12) {
    ppppuVar6 = _Dst;
  }
  lVar13 = local_60 - uVar5;
  memmove(ppppuVar6,(void *)((longlong)ppppuVar6 + uVar5),lVar13 + 1);
  local_90 = local_d8;
  lStack_88 = lStack_d0;
  uStack_78 = uStack_c0;
  local_c8 = lVar13;
  local_80 = lVar13;
  FUN_140005050(local_50,param_1,&local_90);
  iVar11 = 0x1505;
  ppppbVar10 = local_50;
  if (0xf < local_38) {
    ppppbVar10 = (byte ****)local_50[0];
  }
  ppppbVar14 = (byte ****)((longlong)ppppbVar10 + local_40);
  for (; ppppbVar10 != ppppbVar14; ppppbVar10 = (byte ****)((longlong)ppppbVar10 + 1)) {
    iVar11 = iVar11 * 0x21 + (uint)*(byte *)ppppbVar10;
  }
  if (0xf < local_38) {
    ppppbVar10 = (byte ****)local_50[0];
    if ((0xfff < local_38 + 1) &&
       (ppppbVar10 = (byte ****)local_50[0][-1],
       (byte *)0x1f < (byte *)((longlong)local_50[0] + (-8 - (longlong)ppppbVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppbVar10);
  }
  if (0xf < uStack_78) {
    ppppuVar6 = (undefined8 ****)local_90;
    if ((0xfff < uStack_78 + 1) &&
       (ppppuVar6 = (undefined8 ****)local_90[-1],
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)ppppuVar6)))) {
LAB_14000217d:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar6);
  }
  if (0xf < local_58) {
    pvVar8 = (void *)CONCAT71(uStack_6f,local_70);
    pvVar7 = pvVar8;
    if ((0xfff < local_58 + 1) &&
       (pvVar7 = *(void **)((longlong)pvVar8 + -8),
       0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  local_60 = 0;
  local_58 = 0xf;
  local_70 = 0;
  if (0xf < (ulonglong)param_1[3]) {
    pvVar7 = (void *)*param_1;
    pvVar8 = pvVar7;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar8 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return iVar11;
}



longlong * FUN_140002260(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar4;
  
  uVar5 = param_3 & 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar6 = 0;
  if (param_2[1] != *param_2) {
    do {
      bVar7 = (char)uVar5 * -0x33 + 0x9bU ^ *(byte *)(*param_2 + uVar6);
      uVar4 = param_1[2];
      uVar1 = param_1[3];
      if (uVar4 < uVar1) {
        param_1[2] = uVar4 + 1;
        plVar3 = param_1;
        if (0xf < uVar1) {
          plVar3 = (longlong *)*param_1;
        }
        *(byte *)((longlong)plVar3 + uVar4) = bVar7;
        *(undefined1 *)((longlong)plVar3 + uVar4 + 1) = 0;
      }
      else {
        FUN_1400053b0(param_1,uVar1,param_3,bVar7);
      }
      uVar5 = (ulonglong)((uint)uVar5 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f);
      uVar4 = 0;
      do {
        uVar2 = (int)uVar4 + 0x10000;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 != 0x30000);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)(param_2[1] - *param_2));
  }
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

void FUN_140002390(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  char *******pppppppcVar4;
  basic_ostream<> *this;
  void *pvVar5;
  void *pvVar6;
  void **ppvVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 auStack_d8 [32];
  char local_b8;
  undefined8 local_a8 [4];
  longlong *local_88;
  char *******local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_48;
  void *local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14000b000 ^ (ulonglong)auStack_d8;
  local_b8 = *(char *)(*(longlong *)ThreadLocalStoragePointer + 4);
  local_88 = param_1;
  if (local_b8 != '\0') {
    local_40 = (void *)0x0;
    uStack_38 = 0;
    local_30 = 0;
    FUN_140002630(*(longlong *)ThreadLocalStoragePointer,(longlong *)&local_40);
    plVar3 = FUN_140004ac0(local_a8,param_1);
    uVar2 = FUN_140001e70(plVar3);
    ppvVar7 = &local_40;
    FUN_140002260(local_60,(longlong *)ppvVar7,(ulonglong)uVar2);
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0xf;
    local_80 = (char *******)0x0;
    pcVar8 = (char *)local_60;
    if (0xf < local_48) {
      pcVar8 = (char *)CONCAT71(local_60[0]._1_7_,(char)local_60[0]);
    }
    puVar9 = (undefined1 *)local_60;
    if (0xf < local_48) {
      puVar9 = (undefined1 *)CONCAT71(local_60[0]._1_7_,(char)local_60[0]);
    }
    uVar1 = local_70;
    for (; local_70 = uVar1, pcVar8 != puVar9 + local_50; pcVar8 = pcVar8 + 1) {
      if (uVar1 < local_68) {
        local_70 = uVar1 + 1;
        pppppppcVar4 = (char *******)&local_80;
        if (0xf < local_68) {
          pppppppcVar4 = local_80;
        }
        *(char *)((longlong)pppppppcVar4 + uVar1) = *pcVar8;
        *(char *)((longlong)pppppppcVar4 + uVar1 + 1) = '\0';
      }
      else {
        FUN_1400053b0(&local_80,ppvVar7,uVar1,*pcVar8);
      }
      uVar1 = local_70;
    }
    pppppppcVar4 = (char *******)&local_80;
    if (0xf < local_68) {
      pppppppcVar4 = local_80;
    }
    this = FUN_140005750((basic_ostream<> *)cout_exref,(char *)pppppppcVar4,uVar1);
    std::basic_ostream<>::operator<<(this,FUN_1400051b0);
    if (0xf < local_68) {
      pppppppcVar4 = local_80;
      if ((0xfff < local_68 + 1) &&
         (pppppppcVar4 = (char *******)local_80[-1],
         (char *)0x1f < (char *)((longlong)local_80 + (-8 - (longlong)pppppppcVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppppcVar4);
    }
    local_70 = 0;
    local_68 = 0xf;
    local_80 = (char *******)((ulonglong)local_80 & 0xffffffffffffff00);
    if (0xf < local_48) {
      pvVar6 = (void *)CONCAT71(local_60[0]._1_7_,(char)local_60[0]);
      pvVar5 = pvVar6;
      if ((0xfff < local_48 + 1) &&
         (pvVar5 = *(void **)((longlong)pvVar6 + -8),
         0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar5);
    }
    local_50 = 0;
    local_48 = 0xf;
    local_60[0]._0_1_ = '\0';
    if (local_40 != (void *)0x0) {
      pvVar5 = local_40;
      if ((0xfff < (ulonglong)(local_30 - (longlong)local_40)) &&
         (pvVar5 = *(void **)((longlong)local_40 + -8),
         0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar5);
      local_40 = (void *)0x0;
      uStack_38 = 0;
      local_30 = 0;
    }
  }
  if (0xf < (ulonglong)param_1[3]) {
    pvVar5 = (void *)*param_1;
    pvVar6 = pvVar5;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar6 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar6);
  }
  *(undefined1 *)param_1 = 0;
  param_1[3] = 0xf;
  param_1[2] = 0;
  return;
}



longlong * FUN_140002630(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  void *_Dst;
  void *_Memory;
  ulonglong uVar3;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_20;
  longlong *local_18;
  
  uVar3 = 0;
  local_40 = 0x908ba161;
  local_3c = 0x4ab22d4c;
  local_38 = 0xfeccf219;
  local_34 = 0xeef5056a;
  local_30 = 0xaa578840;
  local_2c = 0xc8add1c5;
  local_28 = 0x3b9f;
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_20 = 1;
  local_18 = param_2;
  _Dst = (void *)FUN_140005e40(0x1a);
  memmove(_Dst,(void *)*param_2,param_2[1] - *param_2);
  pvVar1 = (void *)*param_2;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_2[2] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_2 = (longlong)_Dst;
  param_2[1] = (longlong)_Dst;
  param_2[2] = (longlong)_Dst + 0x1a;
  do {
    local_48[0] = *(undefined1 *)((longlong)&local_40 + uVar3);
    puVar2 = (undefined1 *)param_2[1];
    if (puVar2 == (undefined1 *)param_2[2]) {
      FUN_140005bc0(param_2,puVar2,local_48);
    }
    else {
      *puVar2 = local_48[0];
      param_2[1] = param_2[1] + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x1a);
  return param_2;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_140002750(undefined8 *param_1)

{
  longlong *plVar1;
  void *_Memory;
  undefined1 auStack_78 [40];
  undefined8 local_50 [4];
  void *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14000b000 ^ (ulonglong)auStack_78;
  if (*(int *)*param_1 != -0x4523f213) {
    return 0;
  }
  local_20 = 0xd;
  local_18 = 0xf;
  local_30 = (void *)0x61696c6c65707845;
  uStack_28 = 0x2173756d72;
  plVar1 = FUN_140004ac0(local_50,&local_30);
  FUN_140002390(plVar1);
  if (0xf < local_18) {
    _Memory = local_30;
    if ((0xfff < local_18 + 1) &&
       (_Memory = *(void **)((longlong)local_30 + -8),
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return 0xffffffff;
}



void FUN_140002840(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *local_d8 [4];
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_28 [4];
  
  lVar2 = *param_1;
  local_d8[0] = (code *)&LAB_1400029b0;
  uVar1 = param_1[3];
  local_d8[1] = FUN_1400029c0;
  local_d8[2] = FUN_140002a60;
  local_d8[3] = FUN_140002b30;
  local_b8 = FUN_140002c00;
  local_b0 = FUN_140002cd0;
  local_a8 = FUN_140002dd0;
  local_a0 = FUN_140002e70;
  local_98 = FUN_140002f10;
  local_90 = FUN_140003130;
  local_88 = FUN_140003440;
  local_80 = FUN_1400034b0;
  local_78 = FUN_1400035c0;
  local_70 = FUN_140003600;
  local_68 = FUN_1400036d0;
  local_60 = FUN_140003770;
  local_58 = FUN_140003880;
  local_50 = FUN_140003930;
  local_48 = &LAB_140003ca0;
  local_40 = &LAB_140003cc0;
  local_38 = &LAB_140003ce0;
  if (uVar1 < (ulonglong)(param_1[1] - lVar2)) {
    do {
      if ((char)param_1[7] != '\0') {
        return;
      }
      param_1[3] = uVar1 + 1;
      if (0x14 < *(byte *)(lVar2 + uVar1)) {
        FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
        _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
      }
      (*local_d8[*(byte *)(lVar2 + uVar1)])(param_1);
      lVar2 = *param_1;
      uVar1 = param_1[3];
    } while (uVar1 < (ulonglong)(param_1[1] - lVar2));
  }
  return;
}



void FUN_1400029c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [8];
  undefined8 local_28 [5];
  
  lVar1 = param_1[3];
  lVar2 = *param_1;
  if ((ulonglong)(param_1[1] - lVar2) < lVar1 + 4U) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  local_res8[0] =
       CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 3 + lVar1),
                                  *(undefined1 *)(lVar2 + 2 + lVar1)),
                         *(undefined1 *)(lVar2 + 1 + lVar1)),*(undefined1 *)(lVar2 + lVar1));
  param_1[3] = lVar1 + 4U;
  puVar3 = (undefined4 *)param_1[5];
  if (puVar3 != (undefined4 *)param_1[6]) {
    *puVar3 = local_res8[0];
    param_1[5] = param_1[5] + 4;
    return;
  }
  FUN_140005910(param_1 + 4,puVar3,local_res8);
  return;
}



void FUN_140002a60(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int local_res8 [8];
  undefined8 local_28 [5];
  
  piVar2 = *(int **)(param_1 + 0x20);
  if ((ulonglong)((longlong)*(int **)(param_1 + 0x28) - (longlong)piVar2 >> 2) < 2) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (piVar2 == *(int **)(param_1 + 0x28)) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  piVar4 = (int *)(lVar3 + -4);
  iVar1 = *piVar4;
  *(int **)(param_1 + 0x28) = piVar4;
  if (piVar2 == piVar4) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  local_res8[0] = *(int *)(lVar3 + -8);
  *(longlong *)(param_1 + 0x28) = lVar3 + -8;
  piVar2 = *(int **)(param_1 + 0x28);
  local_res8[0] = local_res8[0] + iVar1;
  if (piVar2 != *(int **)(param_1 + 0x30)) {
    *piVar2 = local_res8[0];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    return;
  }
  FUN_140005910((longlong *)(param_1 + 0x20),piVar2,local_res8);
  return;
}



void FUN_140002b30(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int local_res8 [8];
  undefined8 local_28 [5];
  
  piVar2 = *(int **)(param_1 + 0x20);
  if ((ulonglong)((longlong)*(int **)(param_1 + 0x28) - (longlong)piVar2 >> 2) < 2) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (piVar2 == *(int **)(param_1 + 0x28)) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  piVar4 = (int *)(lVar3 + -4);
  iVar1 = *piVar4;
  *(int **)(param_1 + 0x28) = piVar4;
  if (piVar2 == piVar4) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  local_res8[0] = *(int *)(lVar3 + -8);
  *(longlong *)(param_1 + 0x28) = lVar3 + -8;
  local_res8[0] = local_res8[0] - iVar1;
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != *(int **)(param_1 + 0x30)) {
    *piVar2 = local_res8[0];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    return;
  }
  FUN_140005910((longlong *)(param_1 + 0x20),piVar2,local_res8);
  return;
}



void FUN_140002c00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int local_res8 [8];
  undefined8 local_28 [5];
  
  piVar1 = *(int **)(param_1 + 0x20);
  if ((ulonglong)((longlong)*(int **)(param_1 + 0x28) - (longlong)piVar1 >> 2) < 2) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (piVar1 == *(int **)(param_1 + 0x28)) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  piVar3 = (int *)(lVar2 + -4);
  local_res8[0] = *piVar3;
  *(int **)(param_1 + 0x28) = piVar3;
  if (piVar1 == piVar3) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  local_res8[0] = *(int *)(lVar2 + -8) * local_res8[0];
  *(longlong *)(param_1 + 0x28) = lVar2 + -8;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != *(int **)(param_1 + 0x30)) {
    *piVar1 = local_res8[0];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    return;
  }
  FUN_140005910((longlong *)(param_1 + 0x20),piVar1,local_res8);
  return;
}



void FUN_140002cd0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int local_res8 [8];
  undefined8 local_28 [5];
  
  piVar2 = *(int **)(param_1 + 0x20);
  if ((ulonglong)((longlong)*(int **)(param_1 + 0x28) - (longlong)piVar2 >> 2) < 2) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (piVar2 == *(int **)(param_1 + 0x28)) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  piVar4 = (int *)(lVar3 + -4);
  iVar1 = *piVar4;
  *(int **)(param_1 + 0x28) = piVar4;
  if (iVar1 == 0) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (piVar2 != piVar4) {
    local_res8[0] = *(int *)(lVar3 + -8);
    *(longlong *)(param_1 + 0x28) = lVar3 + -8;
    local_res8[0] = local_res8[0] / iVar1;
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 != *(int **)(param_1 + 0x30)) {
      *piVar2 = local_res8[0];
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
      return;
    }
    FUN_140005910((longlong *)(param_1 + 0x20),piVar2,local_res8);
    return;
  }
  FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
}



void FUN_140002dd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  basic_ostream<> *this;
  basic_ostream<> *this_00;
  undefined8 local_28 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 - *(longlong *)(param_1 + 0x20) >> 2 == 0) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (*(longlong *)(param_1 + 0x20) != lVar2) {
    iVar1 = *(int *)(lVar2 + -4);
    *(int **)(param_1 + 0x28) = (int *)(lVar2 + -4);
    this = FUN_1400051f0((basic_ostream<> *)cout_exref);
    this_00 = std::basic_ostream<>::operator<<(this,iVar1);
                    // WARNING: Could not recover jumptable at 0x000140002e2a. Too many branches
                    // WARNING: Treating indirect jump as call
    std::basic_ostream<>::operator<<((basic_ostream<> *)this_00,FUN_1400051b0);
    return;
  }
  FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
}



void FUN_140002e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_28 [5];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar2 - lVar3 >> 2 == 0) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (lVar3 != lVar2) {
    iVar1 = *(int *)(lVar2 + -4);
    *(longlong *)(param_1 + 0x28) = lVar2 + -4;
    if (iVar1 == 0x7070707) {
      FUN_140001010("Protego Horribilis!\n",param_1,lVar3,param_4);
                    // WARNING: Could not recover jumptable at 0x000140002ec3. Too many branches
                    // WARNING: Treating indirect jump as call
      AddVectoredExceptionHandler(1,FUN_140002750);
      return;
    }
    return;
  }
  FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_140002f10(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  char ****ppppcVar4;
  basic_ostream<> *this;
  char *****pppppcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58 [3];
  char ****local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14000b000 ^ (ulonglong)auStack_78;
  lVar3 = *param_1;
  uVar6 = param_1[3];
  if ((ulonglong)(param_1[1] - lVar3) <= uVar6) {
    FUN_140001230(local_58);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_140009af0);
  }
  lVar1 = uVar6 + 1;
  param_1[3] = lVar1;
  uVar6 = (ulonglong)*(byte *)(lVar3 + uVar6);
  if ((ulonglong)(param_1[1] - lVar3) < uVar6 + lVar1) {
    FUN_140001230(local_58);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_140009af0);
  }
  _Src = (void *)(lVar1 + lVar3);
  local_40 = (char ****)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0xf;
  if (_Src == (void *)((longlong)_Src + uVar6)) {
    local_40 = (char ****)0x0;
  }
  else {
    if (0x7fffffffffffffff < uVar6) {
                    // WARNING: Subroutine does not return
      FUN_140001210();
    }
    if (0xf < uVar6) {
      uVar7 = uVar6 | 0xf;
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar2 = uVar7 + 1;
      if (uVar2 < 0x1000) {
        local_40 = (char ****)FUN_140005e40(uVar2);
        local_28 = uVar7;
      }
      else {
        if (uVar7 + 0x28 <= uVar2) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        ppppcVar4 = (char ****)FUN_140005e40(uVar7 + 0x28);
        if (ppppcVar4 == (char ****)0x0) goto LAB_1400030b0;
        local_40 = (char ****)((longlong)ppppcVar4 + 0x27U & 0xffffffffffffffe0);
        local_40[-1] = (char ***)ppppcVar4;
        local_28 = uVar7;
      }
    }
    pppppcVar5 = &local_40;
    if (0xf < local_28) {
      pppppcVar5 = (char *****)local_40;
    }
    memmove(pppppcVar5,_Src,uVar6);
    local_30 = uVar6;
    *(char *)((longlong)pppppcVar5 + uVar6) = '\0';
  }
  param_1[3] = param_1[3] + uVar6;
  pppppcVar5 = &local_40;
  if (0xf < local_28) {
    pppppcVar5 = (char *****)local_40;
  }
  this = FUN_140005750((basic_ostream<> *)cout_exref,(char *)pppppcVar5,local_30);
  std::basic_ostream<>::operator<<(this,FUN_1400051b0);
  if (0xf < local_28) {
    pppppcVar5 = (char *****)local_40;
    if ((0xfff < local_28 + 1) &&
       (pppppcVar5 = (char *****)local_40[-1],
       (char *)0x1f < (char *)((longlong)local_40 + (-8 - (longlong)pppppcVar5)))) {
LAB_1400030b0:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppcVar5);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_140003130(void)

{
  LSTATUS LVar1;
  longlong lVar2;
  LPBYTE pBVar3;
  ulonglong uVar4;
  size_t _Size;
  void *pvVar5;
  ulonglong uVar6;
  undefined1 auStackY_b8 [32];
  HKEY local_80;
  DWORD local_78;
  DWORD local_74;
  LPBYTE local_70;
  LPBYTE pBStack_68;
  longlong local_60;
  void *local_58;
  void *pvStack_50;
  longlong local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14000b000 ^ (ulonglong)auStackY_b8;
  local_70 = (LPBYTE)0x0;
  pBStack_68 = (LPBYTE)0x0;
  local_60 = 0;
  LVar1 = RegOpenKeyExA((HKEY)&DAT_ffffffff80000001,"SOFTWARE\\6-2-4-4-2",0,0x20019,&local_80);
  if (LVar1 == 0) {
    local_74 = 0;
    local_78 = 0;
    LVar1 = RegQueryValueExA(local_80,"incantation",(LPDWORD)0x0,&local_74,(LPBYTE)0x0,&local_78);
    if ((LVar1 == 0) && (local_74 == 3)) {
      uVar6 = (ulonglong)local_78;
      uVar4 = (longlong)pBStack_68 - (longlong)local_70;
      if (uVar6 < uVar4) {
        pBStack_68 = local_70 + uVar6;
      }
      else if (uVar4 < uVar6) {
        if ((ulonglong)(local_60 - (longlong)local_70) < uVar6) {
          FUN_140005a70((longlong *)&local_70,uVar6);
        }
        else {
          pBVar3 = pBStack_68 + (uVar6 - uVar4);
          memset(pBStack_68,0,uVar6 - uVar4);
          pBStack_68 = pBVar3;
        }
      }
      LVar1 = RegQueryValueExA(local_80,"incantation",(LPDWORD)0x0,&local_74,local_70,&local_78);
      if ((LVar1 != 0) && (local_70 != pBStack_68)) {
        pBStack_68 = local_70;
      }
    }
    RegCloseKey(local_80);
  }
  if (local_70 != pBStack_68) {
    uStack_40 = 0;
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    uVar4 = (longlong)pBStack_68 - (longlong)local_70;
    if (uVar4 != 0) {
      if (0x7fffffffffffffff < uVar4) {
                    // WARNING: Subroutine does not return
        FUN_140004d00();
      }
      if (uVar4 < 0x1000) {
        pvVar5 = (void *)FUN_140005e40(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        lVar2 = FUN_140005e40(uVar4 + 0x27);
        if (lVar2 == 0) goto LAB_1400033c6;
        pvVar5 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar5 - 8) = lVar2;
      }
      local_48 = (longlong)pvVar5 + uVar4;
      _Size = (longlong)pBStack_68 - (longlong)local_70;
      local_58 = pvVar5;
      pvStack_50 = pvVar5;
      memmove(pvVar5,local_70,_Size);
      pvStack_50 = (void *)(_Size + (longlong)pvVar5);
    }
    uStack_40 = 0;
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = uStack_20 & 0xffffffffffff0000;
    FUN_140002840((longlong *)&local_58);
    if (local_38 != (void *)0x0) {
      pvVar5 = local_38;
      if ((0xfff < (ulonglong)((local_28 - (longlong)local_38 >> 2) * 4)) &&
         (pvVar5 = *(void **)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar5)))) goto LAB_1400033c6;
      free(pvVar5);
      local_38 = (void *)0x0;
      uStack_30 = 0;
      local_28 = 0;
    }
    if (local_58 != (void *)0x0) {
      pvVar5 = local_58;
      if ((0xfff < (ulonglong)(local_48 - (longlong)local_58)) &&
         (pvVar5 = *(void **)((longlong)local_58 + -8),
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar5)))) {
LAB_1400033c6:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar5);
    }
  }
  if (local_70 != (LPBYTE)0x0) {
    pBVar3 = local_70;
    if ((0xfff < (ulonglong)(local_60 - (longlong)local_70)) &&
       (pBVar3 = *(LPBYTE *)(local_70 + -8), (LPBYTE)0x1f < local_70 + (-8 - (longlong)pBVar3))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pBVar3);
  }
  return;
}



void FUN_140003440(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 local_res8 [8];
  undefined8 local_28 [5];
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if ((longlong)puVar1 - *(longlong *)(param_1 + 0x20) >> 2 == 0) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  local_res8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + -4);
  if (puVar1 != *(undefined4 **)(param_1 + 0x30)) {
    *puVar1 = local_res8[0];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    return;
  }
  FUN_140005910((longlong *)(param_1 + 0x20),puVar1,local_res8);
  return;
}



void FUN_1400034b0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_28 [4];
  
  plVar1 = (longlong *)(param_1 + 0x20);
  puVar5 = (undefined4 *)*plVar1;
  if ((ulonglong)((longlong)*(undefined4 **)(param_1 + 0x28) - (longlong)puVar5 >> 2) < 2) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (puVar5 == *(undefined4 **)(param_1 + 0x28)) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar4 = (undefined4 *)(lVar3 + -4);
  local_res8[0] = *puVar4;
  *(undefined4 **)(param_1 + 0x28) = puVar4;
  if (puVar5 == puVar4) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  puVar5 = (undefined4 *)(lVar3 + -8);
  uVar2 = *puVar5;
  *(undefined4 **)(param_1 + 0x28) = puVar5;
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  local_res10[0] = uVar2;
  if (puVar5 == *(undefined4 **)(param_1 + 0x30)) {
    FUN_140005910(plVar1,puVar5,local_res8);
  }
  else {
    *puVar5 = local_res8[0];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  if (puVar5 != *(undefined4 **)(param_1 + 0x30)) {
    *puVar5 = uVar2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    return;
  }
  FUN_140005910(plVar1,puVar5,local_res10);
  return;
}



void FUN_1400035c0(longlong param_1)

{
  int *piVar1;
  int local_res8 [8];
  
  local_res8[0] = rand();
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != *(int **)(param_1 + 0x30)) {
    *piVar1 = local_res8[0];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    return;
  }
  FUN_140005910((longlong *)(param_1 + 0x20),piVar1,local_res8);
  return;
}



void FUN_140003600(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  uint local_res8 [8];
  undefined8 local_28 [5];
  
  puVar2 = *(uint **)(param_1 + 0x20);
  if ((ulonglong)((longlong)*(uint **)(param_1 + 0x28) - (longlong)puVar2 >> 2) < 2) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (puVar2 == *(uint **)(param_1 + 0x28)) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar4 = (uint *)(lVar3 + -4);
  uVar1 = *puVar4;
  *(uint **)(param_1 + 0x28) = puVar4;
  if (puVar2 == puVar4) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  local_res8[0] = *(uint *)(lVar3 + -8);
  *(longlong *)(param_1 + 0x28) = lVar3 + -8;
  local_res8[0] = local_res8[0] ^ uVar1;
  puVar2 = *(uint **)(param_1 + 0x28);
  if (puVar2 != *(uint **)(param_1 + 0x30)) {
    *puVar2 = local_res8[0];
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    return;
  }
  FUN_140005910((longlong *)(param_1 + 0x20),puVar2,local_res8);
  return;
}



void FUN_1400036d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_28 [5];
  
  lVar2 = param_1[3];
  lVar3 = *param_1;
  if ((ulonglong)(param_1[1] - lVar3) < lVar2 + 4U) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  cVar1 = *(char *)(lVar3 + 3 + lVar2);
  iVar4 = CONCAT31(CONCAT21(CONCAT11(cVar1,*(undefined1 *)(lVar3 + 2 + lVar2)),
                            *(undefined1 *)(lVar3 + 1 + lVar2)),*(undefined1 *)(lVar3 + lVar2));
  param_1[3] = lVar2 + 4U;
  if ((-1 < cVar1) && (iVar4 < (int)param_1[1] - (int)lVar3)) {
    param_1[3] = (longlong)iVar4;
    return;
  }
  FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
}



void FUN_140003770(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_28 [4];
  
  lVar3 = param_1[5];
  if (lVar3 - param_1[4] >> 2 == 0) {
    FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
  }
  if (param_1[4] != lVar3) {
    iVar2 = *(int *)(lVar3 + -4);
    param_1[5] = lVar3 + -4;
    lVar3 = param_1[3];
    lVar4 = *param_1;
    if ((ulonglong)(param_1[1] - lVar4) < lVar3 + 4U) {
      FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
      _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
    }
    cVar1 = *(char *)(lVar4 + 3 + lVar3);
    iVar5 = CONCAT31(CONCAT21(CONCAT11(cVar1,*(undefined1 *)(lVar4 + 2 + lVar3)),
                              *(undefined1 *)(lVar4 + 1 + lVar3)),*(undefined1 *)(lVar4 + lVar3));
    param_1[3] = lVar3 + 4U;
    if (iVar2 == 0) {
      if ((cVar1 < '\0') || ((int)param_1[1] - (int)lVar4 <= iVar5)) {
        FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
        _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
      }
      param_1[3] = (longlong)iVar5;
    }
    return;
  }
  FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
}



void FUN_140003880(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28 [5];
  
  lVar5 = *(longlong *)ThreadLocalStoragePointer;
  *(uint *)(lVar5 + 0x10) = (*(uint *)(lVar5 + 0xc) >> 5 | *(int *)(lVar5 + 8) << 7) ^ 0xa5a5a5a5;
  lVar5 = param_1[3];
  lVar6 = *param_1;
  if (lVar5 + 4U <= (ulonglong)(param_1[1] - lVar6)) {
    uVar1 = *(undefined1 *)(lVar6 + 2 + lVar5);
    uVar2 = *(undefined1 *)(lVar6 + 3 + lVar5);
    uVar3 = *(undefined1 *)(lVar6 + 1 + lVar5);
    uVar4 = *(undefined1 *)(lVar6 + lVar5);
    param_1[3] = lVar5 + 4U;
                    // WARNING: Could not recover jumptable at 0x000140003909. Too many branches
                    // WARNING: Treating indirect jump as call
    RaiseException(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4),0,0,0);
    return;
  }
  FUN_140001230(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009af0);
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_140003930(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  void *pvVar7;
  void *_Src;
  void *_Size;
  ulonglong _Size_00;
  void *_Dst;
  void *pvVar8;
  undefined1 auStack_b8 [32];
  void *local_98;
  longlong lStack_90;
  longlong local_88;
  void *local_78;
  void *pvStack_70;
  longlong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14000b000 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)ThreadLocalStoragePointer;
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 0x13579bdf;
  *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 0x2468ace0;
  lVar5 = *param_1;
  pvVar8 = (void *)(param_1[1] - lVar5);
  lVar4 = param_1[3];
  pvVar7 = (void *)(lVar4 + 4);
  if (pvVar8 < pvVar7) {
    FUN_140001230(&local_98);
                    // WARNING: Subroutine does not return
    _CxxThrowException(&local_98,(ThrowInfo *)&DAT_140009af0);
  }
  cVar1 = *(char *)(lVar5 + 3 + lVar4);
  iVar6 = CONCAT31(CONCAT21(CONCAT11(cVar1,*(undefined1 *)(lVar5 + 2 + lVar4)),
                            *(undefined1 *)(lVar5 + 1 + lVar4)),*(undefined1 *)(lVar5 + lVar4));
  param_1[3] = (longlong)pvVar7;
  if ((cVar1 < '\0') ||
     (_Size = (void *)(longlong)iVar6, pvVar8 < (void *)((longlong)pvVar7 + (longlong)_Size))) {
    FUN_140001230(&local_98);
                    // WARNING: Subroutine does not return
    _CxxThrowException(&local_98,(ThrowInfo *)&DAT_140009af0);
  }
  _Src = (void *)((longlong)pvVar7 + lVar5);
  local_98 = (void *)0x0;
  lStack_90 = 0;
  local_88 = 0;
  if (iVar6 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    if ((void *)0x7fffffffffffffff < _Size) {
                    // WARNING: Subroutine does not return
      FUN_140004d00();
    }
    if (_Size < (void *)0x1000) {
      _Dst = (void *)FUN_140005e40((size_t)_Size);
    }
    else {
      if ((void *)((longlong)_Size + 0x27U) <= _Size) {
                    // WARNING: Subroutine does not return
        FUN_140001170();
      }
      lVar4 = FUN_140005e40((longlong)_Size + 0x27U);
      if (lVar4 == 0) goto LAB_140003c0e;
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
    pvVar8 = _Size;
    local_98 = _Dst;
    local_88 = (longlong)_Dst + (longlong)_Size;
    memmove(_Dst,_Src,(size_t)_Size);
    pvVar7 = _Src;
    lStack_90 = (longlong)_Dst + (longlong)_Size;
  }
  lVar4 = lStack_90;
  param_1[3] = param_1[3] + (longlong)_Size;
  uVar2 = *(undefined1 *)(lVar3 + 4);
  *(undefined1 *)(lVar3 + 4) = 1;
  FUN_140001010("Lumos!\n",pvVar7,pvVar8,lVar5);
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  local_68 = 0;
  _Size_00 = lVar4 - (longlong)_Dst;
  if (_Size_00 != 0) {
    if (0x7fffffffffffffff < _Size_00) {
                    // WARNING: Subroutine does not return
      FUN_140004d00();
    }
    if (_Size_00 < 0x1000) {
      local_78 = (void *)FUN_140005e40(_Size_00);
    }
    else {
      if (_Size_00 + 0x27 <= _Size_00) {
                    // WARNING: Subroutine does not return
        FUN_140001170();
      }
      lVar5 = FUN_140005e40(_Size_00 + 0x27);
      if (lVar5 == 0) goto LAB_140003bcd;
      local_78 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)local_78 - 8) = lVar5;
    }
    lVar5 = (longlong)local_78 + _Size_00;
    pvStack_70 = local_78;
    local_68 = lVar5;
    memmove(local_78,_Dst,_Size_00);
    pvStack_70 = (void *)lVar5;
  }
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = CONCAT62(uStack_40._2_6_,0x100);
  FUN_140002840((longlong *)&local_78);
  *(undefined1 *)(lVar3 + 4) = uVar2;
  if (local_58 != (void *)0x0) {
    pvVar7 = local_58;
    if ((0xfff < (ulonglong)((local_48 - (longlong)local_58 >> 2) * 4)) &&
       (pvVar7 = *(void **)((longlong)local_58 + -8),
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar7)))) goto LAB_140003bcd;
    free(pvVar7);
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
  }
  if (local_78 != (void *)0x0) {
    pvVar7 = local_78;
    if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
       (pvVar7 = *(void **)((longlong)local_78 + -8),
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7)))) {
LAB_140003bcd:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_68 = 0;
  }
  if (_Dst != (void *)0x0) {
    pvVar7 = _Dst;
    if ((0xfff < (ulonglong)(lVar4 - (longlong)_Dst)) &&
       (pvVar7 = *(void **)((longlong)_Dst + -8),
       0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar7)))) {
LAB_140003c0e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  return;
}



void FUN_140003d20(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[6] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_140003dc0;
    free(pvVar2);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_140003dc0:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_140003dd0(void)

{
  char *_Memory;
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  size_t _Size;
  void *pvVar4;
  undefined1 auStack_b8 [32];
  char local_98 [8];
  void *local_90;
  char *pcStack_88;
  char *local_80;
  void *local_78;
  void *pvStack_70;
  longlong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  char *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14000b000 ^ (ulonglong)auStack_b8;
  local_90 = (void *)0x0;
  pcStack_88 = (char *)0x0;
  local_80 = (char *)0x0;
  local_98[0] = '\b';
  FUN_140005bc0((longlong *)&local_90,(void *)0x0,local_98);
  local_98[0] = '\x12';
  if (pcStack_88 == local_80) {
    FUN_140005bc0((longlong *)&local_90,pcStack_88,local_98);
  }
  else {
    *pcStack_88 = '\x12';
    pcStack_88 = pcStack_88 + 1;
  }
  local_38 = (char *)0x0;
  uStack_30 = 0;
  _Memory = (char *)FUN_140005e40(0x20);
  local_28 = 0x12;
  local_20 = 0x1f;
  builtin_strncpy(_Memory,"Yer a wizard Harry",0x13);
  local_38 = _Memory;
  for (pcVar2 = _Memory; pcVar2 != _Memory + 0x12; pcVar2 = pcVar2 + 1) {
    local_98[0] = *pcVar2;
    if (pcStack_88 == local_80) {
      FUN_140005bc0((longlong *)&local_90,pcStack_88,local_98);
    }
    else {
      *pcStack_88 = local_98[0];
      pcStack_88 = pcStack_88 + 1;
    }
  }
  free(_Memory);
  local_98[0] = '\t';
  if (pcStack_88 == local_80) {
    FUN_140005bc0((longlong *)&local_90,pcStack_88,local_98);
  }
  else {
    *pcStack_88 = '\t';
    pcStack_88 = pcStack_88 + 1;
  }
  local_98[0] = '\0';
  if (pcStack_88 == local_80) {
    FUN_140005bc0((longlong *)&local_90,pcStack_88,local_98);
  }
  else {
    *pcStack_88 = '\0';
    pcStack_88 = pcStack_88 + 1;
  }
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  local_68 = 0;
  uVar3 = (longlong)pcStack_88 - (longlong)local_90;
  if (uVar3 != 0) {
    if (0x7fffffffffffffff < uVar3) {
                    // WARNING: Subroutine does not return
      FUN_140004d00();
    }
    if (uVar3 < 0x1000) {
      pvVar4 = (void *)FUN_140005e40(uVar3);
    }
    else {
      if (uVar3 + 0x27 <= uVar3) {
                    // WARNING: Subroutine does not return
        FUN_140001170();
      }
      lVar1 = FUN_140005e40(uVar3 + 0x27);
      if (lVar1 == 0) goto LAB_140004076;
      pvVar4 = (void *)(lVar1 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar4 - 8) = lVar1;
    }
    local_68 = (longlong)pvVar4 + uVar3;
    _Size = (longlong)pcStack_88 - (longlong)local_90;
    local_78 = pvVar4;
    pvStack_70 = pvVar4;
    memmove(pvVar4,local_90,_Size);
    pvStack_70 = (void *)(_Size + (longlong)pvVar4);
  }
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = uStack_40 & 0xffffffffffff0000;
  FUN_140002840((longlong *)&local_78);
  if (local_58 != (void *)0x0) {
    pvVar4 = local_58;
    if ((0xfff < (ulonglong)((local_48 - (longlong)local_58 >> 2) * 4)) &&
       (pvVar4 = *(void **)((longlong)local_58 + -8),
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar4)))) goto LAB_140004076;
    free(pvVar4);
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
  }
  if (local_78 != (void *)0x0) {
    pvVar4 = local_78;
    if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
       (pvVar4 = *(void **)((longlong)local_78 + -8),
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar4)))) {
LAB_140004076:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_68 = 0;
  }
  if (local_90 != (void *)0x0) {
    pvVar4 = local_90;
    if ((0xfff < (ulonglong)((longlong)local_80 - (longlong)local_90)) &&
       (pvVar4 = *(void **)((longlong)local_90 + -8),
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  return 0;
}



ulonglong * FUN_140004110(longlong param_1,ulonglong *param_2,longlong *param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (((param_4 & 1) == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((param_4 & 2) == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((!bVar7) && (!bVar8)) {
    uVar10 = param_3[1] + *param_3;
    lVar3 = **(longlong **)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
      uVar9 = **(ulonglong **)(param_1 + 0x40);
      if ((uVar9 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar9)) {
        *(ulonglong *)(param_1 + 0x68) = uVar9;
      }
    }
    else {
      uVar9 = 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar5 = **(longlong **)(param_1 + 0x18);
    if ((uVar10 <= (ulonglong)(lVar4 - lVar5)) &&
       ((uVar10 == 0 ||
        ((((param_4 & 1) == 0 || (lVar3 != 0)) && (((param_4 & 2) == 0 || (uVar9 != 0)))))))) {
      lVar1 = lVar5 + uVar10;
      if (((param_4 & 1) != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x18) = lVar5;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar4 - (int)lVar1;
      }
      if (((param_4 & 2) != 0) && (uVar9 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar6 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar5;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar6) - (int)lVar1;
      }
      *param_2 = uVar10;
      goto LAB_14000421a;
    }
  }
  *param_2 = 0xffffffffffffffff;
LAB_14000421a:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



ulonglong *
FUN_140004240(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (((param_5 & 1) == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((param_5 & 2) == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((bVar6) || (bVar7)) goto LAB_1400043a4;
  lVar3 = **(longlong **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    uVar10 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar10 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar10)) {
      *(ulonglong *)(param_1 + 0x68) = uVar10;
    }
  }
  else {
    uVar10 = 0;
  }
  lVar4 = **(longlong **)(param_1 + 0x18);
  uVar9 = *(longlong *)(param_1 + 0x68) - lVar4;
  if (param_4 == 0) {
    uVar8 = 0;
LAB_140004327:
    uVar8 = uVar8 + param_3;
    if ((uVar8 <= uVar9) &&
       ((uVar8 == 0 ||
        ((((param_5 & 1) == 0 || (lVar3 != 0)) && (((param_5 & 2) == 0 || (uVar10 != 0)))))))) {
      lVar1 = lVar4 + uVar8;
      if (((param_5 & 1) != 0) && (lVar3 != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x68);
        **(longlong **)(param_1 + 0x18) = lVar4;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)uVar5 - (int)lVar1;
      }
      if (((param_5 & 2) != 0) && (uVar10 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar5 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar4;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar5) - (int)lVar1;
      }
      *param_2 = uVar8;
      goto LAB_1400043ab;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if ((param_5 & 1) == 0) {
        if (((param_5 & 2) != 0) && ((uVar10 != 0 || (lVar4 == 0)))) {
          uVar8 = uVar10 - lVar4;
          goto LAB_140004327;
        }
      }
      else if ((lVar3 != 0) || (lVar4 == 0)) {
        uVar8 = lVar3 - lVar4;
        goto LAB_140004327;
      }
    }
  }
  else {
    uVar8 = uVar9;
    if (param_4 == 2) goto LAB_140004327;
  }
LAB_1400043a4:
  *param_2 = 0xffffffffffffffff;
LAB_1400043ab:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



ulonglong FUN_1400043d0(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  pbVar2 = (byte *)*puVar1;
  if (pbVar2 != (byte *)0x0) {
    if (pbVar2 < pbVar2 + **(int **)(param_1 + 0x50)) {
      return (ulonglong)*pbVar2;
    }
    pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if ((pbVar3 != (byte *)0x0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
      pbVar5 = *(byte **)(param_1 + 0x68);
      if (*(byte **)(param_1 + 0x68) < pbVar3) {
        pbVar5 = pbVar3;
      }
      if (pbVar2 < pbVar5) {
        *(byte **)(param_1 + 0x68) = pbVar5;
        uVar4 = *puVar1;
        *puVar1 = uVar4;
        **(int **)(param_1 + 0x50) = (int)pbVar5 - (int)uVar4;
        return (ulonglong)*(byte *)**(undefined8 **)(param_1 + 0x38);
      }
    }
  }
  return 0xffffffff;
}



int FUN_140004450(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) &&
     ((param_2 == -1 ||
      (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x70) & 2) == 0)))))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == -1) {
      param_2 = 0;
    }
    else {
      *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
    }
    return param_2;
  }
  return -1;
}



int FUN_1400044b0(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Src;
  void *pvVar8;
  
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar7 = **(ulonglong **)(param_1 + 0x40);
  iVar1 = **(int **)(param_1 + 0x58);
  uVar6 = uVar7 + (longlong)iVar1;
  if (uVar7 == 0) {
    uVar6 = 0;
    _Src = (void *)**(longlong **)(param_1 + 0x18);
LAB_1400045a0:
    uVar7 = 0x20;
LAB_1400045a5:
    pvVar8 = (void *)FUN_140005e40(uVar7);
  }
  else {
    if (uVar7 < uVar6) {
      **(int **)(param_1 + 0x58) = iVar1 + -1;
      puVar2 = (undefined1 *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(puVar2 + 1);
      *puVar2 = (char)param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar7 + 1;
      return param_2;
    }
    _Src = (void *)**(longlong **)(param_1 + 0x18);
    uVar6 = uVar6 - (longlong)_Src;
    if (uVar6 < 0x20) goto LAB_1400045a0;
    if (uVar6 < 0x3fffffff) {
      uVar7 = uVar6 * 2;
      if (uVar7 == 0) {
        pvVar8 = (void *)0x0;
        goto LAB_1400045b0;
      }
      if (0xfff < uVar7) {
        uVar4 = uVar7 + 0x27;
        if (uVar4 <= uVar7) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_14000457b;
      }
      goto LAB_1400045a5;
    }
    uVar7 = 0x7fffffff;
    if (0x7ffffffe < uVar6) {
      return -1;
    }
    uVar4 = 0x80000026;
LAB_14000457b:
    lVar5 = FUN_140005e40(uVar4);
    if (lVar5 == 0) goto LAB_14000467e;
    pvVar8 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar8 - 8) = lVar5;
  }
LAB_1400045b0:
  memcpy(pvVar8,_Src,uVar6);
  lVar5 = (longlong)pvVar8 + uVar6;
  *(longlong *)(param_1 + 0x68) = lVar5 + 1;
  **(undefined8 **)(param_1 + 0x20) = pvVar8;
  **(longlong **)(param_1 + 0x40) = lVar5;
  **(int **)(param_1 + 0x58) = ((int)pvVar8 - (int)lVar5) + (int)uVar7;
  if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    lVar5 = (**(longlong **)(param_1 + 0x38) - (longlong)_Src) + (longlong)pvVar8;
    **(undefined8 **)(param_1 + 0x18) = pvVar8;
    **(longlong **)(param_1 + 0x38) = lVar5;
    **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar5;
  }
  else {
    **(undefined8 **)(param_1 + 0x18) = pvVar8;
    **(undefined8 **)(param_1 + 0x38) = pvVar8;
    **(undefined4 **)(param_1 + 0x50) = 0;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    pvVar8 = _Src;
    if ((0xfff < uVar6) &&
       (pvVar8 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar8)))) {
LAB_14000467e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar2 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar2 + 1);
  *puVar2 = (char)param_2;
  return param_2;
}



void FUN_1400046b0(basic_streambuf<> *param_1)

{
  void *pvVar1;
  void *_Memory;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_stringbuf<>::vftable;
  if (((byte)param_1[0x70] & 1) != 0) {
    if (**(longlong **)(param_1 + 0x40) == 0) {
      lVar2 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
    }
    else {
      lVar2 = (longlong)**(int **)(param_1 + 0x58) + **(longlong **)(param_1 + 0x40);
    }
    pvVar1 = (void *)**(longlong **)(param_1 + 0x18);
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(lVar2 - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    // WARNING: Could not recover jumptable at 0x000140004759. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_streambuf<>::~basic_streambuf<>(param_1);
  return;
}



void FUN_140004770(longlong *param_1,longlong *param_2,byte *param_3,ulonglong param_4,byte *param_5
                  )

{
  ulonglong uVar1;
  byte bVar2;
  void *pvVar3;
  byte *pbVar4;
  bool bVar5;
  longlong lVar6;
  void *_Memory;
  ulonglong uVar7;
  ulonglong uVar8;
  void *_Dst;
  size_t _Size;
  size_t sVar9;
  
  pvVar3 = (void *)*param_1;
  _Size = (longlong)param_3 - (longlong)pvVar3;
  pbVar4 = (byte *)param_1[1];
  if ((param_4 == 1) && (param_3 == pbVar4)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    if (param_4 == 0) goto LAB_1400049c7;
  }
  if (param_4 <= (ulonglong)(param_1[2] - (longlong)pbVar4)) {
    bVar2 = *param_5;
    if (bVar5) {
      *pbVar4 = bVar2;
      param_1[1] = param_1[1] + 1;
    }
    else {
      uVar8 = (longlong)pbVar4 - (longlong)param_3;
      if (uVar8 < param_4) {
        memset(pbVar4,(uint)bVar2,param_4 - uVar8);
        pbVar4 = pbVar4 + (param_4 - uVar8);
        param_1[1] = (longlong)pbVar4;
        memmove(pbVar4,param_3,uVar8);
        param_1[1] = (longlong)(pbVar4 + uVar8);
        param_4 = uVar8;
      }
      else {
        memmove(pbVar4,pbVar4 + -param_4,param_4);
        sVar9 = (longlong)(pbVar4 + -param_4) - (longlong)param_3;
        param_1[1] = (longlong)(pbVar4 + param_4);
        memmove(pbVar4 + -sVar9,param_3,sVar9);
        if (param_4 == 0) goto LAB_1400049c7;
      }
      memset(param_3,(uint)bVar2,param_4);
    }
    goto LAB_1400049c7;
  }
  uVar8 = 0x7fffffffffffffff;
  sVar9 = (longlong)pbVar4 - (longlong)pvVar3;
  if (0x7fffffffffffffff - sVar9 < param_4) {
                    // WARNING: Subroutine does not return
    FUN_140004d00();
  }
  uVar7 = param_1[2] - (longlong)pvVar3;
  uVar1 = param_4 + sVar9;
  if (0x7fffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar7 = 0x8000000000000026;
LAB_140004833:
    lVar6 = FUN_140005e40(uVar7);
    if (lVar6 == 0) goto LAB_140004932;
    _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar6;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar8) {
        uVar7 = uVar8 + 0x27;
        if (uVar7 <= uVar8) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_140004833;
      }
      _Dst = (void *)FUN_140005e40(uVar8);
    }
  }
  memset((void *)(_Size + (longlong)_Dst),(uint)*param_5,param_4);
  if (bVar5) {
    memmove(_Dst,pvVar3,sVar9);
  }
  else {
    memmove(_Dst,pvVar3,_Size);
    memmove((void *)((longlong)_Dst + _Size + param_4),param_3,(longlong)pbVar4 - (longlong)param_3)
    ;
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    _Memory = pvVar3;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar3)) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_140004932:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = uVar1 + (longlong)_Dst;
  param_1[2] = (longlong)_Dst + uVar8;
LAB_1400049c7:
  *param_2 = *param_1 + _Size;
  return;
}



void FUN_140004a00(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_140004a60(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined8 * FUN_140004ac0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  undefined8 *_Src;
  
  _Dst = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Src = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Src = (undefined8 *)*param_2;
  }
  uVar2 = param_2[2];
  if (0x7fffffffffffffff < uVar2) {
                    // WARNING: Subroutine does not return
    FUN_140001210();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar3 = _Src[1];
    *param_1 = *_Src;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar6 = uVar2 | 0xf;
  if (uVar6 < 0x8000000000000000) {
    if (uVar6 < 0x16) {
      uVar6 = 0x16;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 == 0) goto LAB_140004b9c;
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_140005e40(uVar1);
      goto LAB_140004b9c;
    }
    uVar4 = uVar6 + 0x28;
    if (uVar4 <= uVar1) {
                    // WARNING: Subroutine does not return
      FUN_140001170();
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar6 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_140005e40(uVar4);
  if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar5;
LAB_140004b9c:
  *param_1 = _Dst;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  memcpy(_Dst,_Src,uVar2 + 1);
  return param_1;
}



basic_streambuf<> * FUN_140004be0(basic_streambuf<> *param_1,uint param_2)

{
  FUN_1400046b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



basic_ios<> * FUN_140004c20(basic_ios<> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88) =
       std::basic_ostringstream<>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x8c) =
       *(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88;
  FUN_1400046b0((basic_streambuf<> *)(param_1 + -0x80));
  std::basic_ostream<>::~basic_ostream<>((basic_ostream<> *)(param_1 + -0x78));
  std::basic_ios<>::~basic_ios<>(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1 + -0x88);
  }
  return param_1 + -0x88;
}



void FUN_140004cc0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<>::_Osfx((basic_ostream<> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void FUN_140004d00(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_140004d20(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



longlong * FUN_140004d50(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Memory;
  longlong *_Dst;
  ulonglong uVar6;
  void *_Dst_00;
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    _Dst = param_1;
    if (0xf < uVar2) {
      _Dst = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
    return param_1;
  }
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_140001210();
  }
  uVar5 = param_3 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 == 0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar5 = uVar6 + 0x28;
        if (uVar5 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_140004e0e;
      }
      _Dst_00 = (void *)FUN_140005e40(uVar1);
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_140004e0e:
    lVar4 = FUN_140005e40(uVar5);
    if (lVar4 == 0) goto LAB_140004e95;
    _Dst_00 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst_00 - 8) = lVar4;
  }
  param_1[2] = param_3;
  param_1[3] = uVar6;
  memcpy(_Dst_00,param_2,param_3);
  *(undefined1 *)((longlong)_Dst_00 + param_3) = 0;
  if (0xf < uVar2) {
    pvVar3 = (void *)*param_1;
    _Memory = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_140004e95:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst_00;
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_140004eb0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *_Size;
  void *_Dst;
  char *_Src;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  char local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14000b000 ^ (ulonglong)auStack_68;
  _Src = local_24 + 1;
  _Dst = (void *)0x0;
  do {
    _Src = _Src + -1;
    *_Src = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
    param_2 = (uint)((ulonglong)param_2 / 10);
  } while (param_2 != 0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (_Src == local_24 + 1) {
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  _Size = local_24 + (1 - (longlong)_Src);
  local_40 = param_1;
  if ((char *)0x7fffffffffffffff < _Size) {
                    // WARNING: Subroutine does not return
    FUN_140001210();
  }
  if (_Size < (char *)0x10) {
    param_1[2] = _Size;
    param_1[3] = 0xf;
    memcpy(param_1,_Src,(size_t)_Size);
    _Size[(longlong)param_1] = '\0';
    return param_1;
  }
  uVar2 = (ulonglong)_Size | 0xf;
  if (uVar2 < 0x8000000000000000) {
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    uVar1 = uVar2 + 1;
    if (uVar1 == 0) goto LAB_140004ff7;
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_140005e40(uVar1);
      goto LAB_140004ff7;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar1) {
                    // WARNING: Subroutine does not return
      FUN_140001170();
    }
  }
  else {
    uVar3 = 0x8000000000000027;
    uVar2 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_140005e40(uVar3);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_140004ff7:
  *param_1 = _Dst;
  param_1[2] = _Size;
  param_1[3] = uVar2;
  memcpy(_Dst,_Src,(size_t)_Size);
  *(char *)((longlong)_Dst + (longlong)_Size) = '\0';
  return param_1;
}



undefined8 * FUN_140005050(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong _Size;
  size_t _Size_00;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *_Dst;
  
  _Size = param_3[2];
  puVar6 = (undefined8 *)0x0;
  _Size_00 = param_2[2];
  if (0x7fffffffffffffff - _Size_00 < _Size) {
                    // WARNING: Subroutine does not return
    FUN_140001210();
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar2 = _Size_00 + _Size;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0xf;
  param_1[2] = 0;
  param_1[3] = 0;
  _Dst = param_1;
  if (uVar2 < 0x10) goto LAB_14000514c;
  uVar5 = uVar2 | 0xf;
  if (uVar5 < 0x8000000000000000) {
    if (uVar5 < 0x16) {
      uVar5 = 0x16;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 != 0) {
      if (0xfff < uVar1) {
        uVar3 = uVar5 + 0x28;
        if (uVar3 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_1400050f1;
      }
      puVar6 = (undefined8 *)FUN_140005e40(uVar1);
    }
  }
  else {
    uVar5 = 0x7fffffffffffffff;
    uVar3 = 0x8000000000000027;
LAB_1400050f1:
    lVar4 = FUN_140005e40(uVar3);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    puVar6 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    puVar6[-1] = lVar4;
  }
  *param_1 = puVar6;
  _Dst = puVar6;
LAB_14000514c:
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  memcpy(_Dst,param_2,_Size_00);
  memcpy((void *)((longlong)_Dst + _Size_00),param_3,_Size);
  *(undefined1 *)((longlong)_Dst + uVar2) = 0;
  return param_1;
}



basic_ostream<> * FUN_1400051b0(basic_ostream<> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<>::widen
                    ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<>::put(param_1,cVar1);
  std::basic_ostream<>::flush(param_1);
  return param_1;
}



basic_ostream<> * FUN_1400051f0(basic_ostream<> *param_1)

{
  basic_ostream<> *this;
  bool bVar1;
  bool bVar2;
  int iVar3;
  __int64 _Var4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (*(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) < 9) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) + -8;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = *(basic_ostream<> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<> *)0x0) || (this == param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 == false) {
    iVar5 = 4;
  }
  else {
    if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) != 0x40)
    {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<>::sputc
                          (*(basic_streambuf<> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_14000532b;
      }
    }
    _Var4 = std::basic_streambuf<>::sputn
                      (*(basic_streambuf<> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),"Result: ",8
                      );
    if (_Var4 == 8) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<>::sputc
                          (*(basic_streambuf<> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_14000532b;
      }
    }
    else {
LAB_14000532b:
      iVar5 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  std::basic_ios<>::setstate
            ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



undefined8 *
FUN_1400053b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  void *_Dst;
  
  _Size = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if (_Size == 0x7fffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_140001210();
  }
  uVar2 = param_1[3];
  uVar4 = _Size + 1 | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar4 = uVar5 + 0x28;
        if (uVar4 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_140005454;
      }
      _Dst = (void *)FUN_140005e40(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_140005454:
    lVar3 = FUN_140005e40(uVar4);
    if (lVar3 == 0) goto LAB_1400054ce;
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
    _Memory = _Src;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
LAB_1400054ce:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}



void FUN_140005520(longlong *param_1,void *param_2,void *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  void *pvVar4;
  void *pvVar5;
  ulonglong uVar6;
  void *_Dst_00;
  size_t sVar7;
  size_t _Size;
  
  pvVar5 = (void *)*param_1;
  pvVar4 = (void *)param_1[1];
  if (param_4 == 0) {
    return;
  }
  if (param_4 <= (ulonglong)(param_1[2] - (longlong)pvVar4)) {
    uVar6 = (longlong)pvVar4 - (longlong)param_2;
    if (param_4 < uVar6) {
      memmove(pvVar4,(void *)((longlong)pvVar4 - param_4),param_4);
      param_1[1] = param_4 + (longlong)pvVar4;
      sVar7 = (longlong)((longlong)pvVar4 - param_4) - (longlong)param_2;
      memmove((void *)((longlong)pvVar4 - sVar7),param_2,sVar7);
      memmove(param_2,param_3,param_4);
      return;
    }
    memmove((void *)(param_4 + (longlong)param_2),param_2,uVar6);
    param_1[1] = uVar6 + (longlong)(param_4 + (longlong)param_2);
    memmove(param_2,param_3,param_4);
    return;
  }
  sVar7 = (longlong)pvVar4 - (longlong)pvVar5;
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - sVar7 < param_4) {
                    // WARNING: Subroutine does not return
    FUN_140004d00();
  }
  uVar1 = param_4 + sVar7;
  uVar3 = param_1[2] - (longlong)pvVar5;
  if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x8000000000000026;
LAB_1400055b3:
    lVar2 = FUN_140005e40(uVar3);
    if (lVar2 == 0) goto LAB_1400056ad;
    _Dst_00 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst_00 - 8) = lVar2;
  }
  else {
    uVar3 = uVar3 + (uVar3 >> 1);
    uVar6 = uVar1;
    if (uVar1 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar6 == 0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      if (0xfff < uVar6) {
        uVar3 = uVar6 + 0x27;
        if (uVar3 <= uVar6) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_1400055b3;
      }
      _Dst_00 = (void *)FUN_140005e40(uVar6);
    }
  }
  _Size = (longlong)param_2 - (longlong)pvVar5;
  memmove((void *)((longlong)_Dst_00 + _Size),param_3,param_4);
  if ((param_4 != 1) || (_Dst = _Dst_00, param_2 != pvVar4)) {
    memmove(_Dst_00,pvVar5,_Size);
    sVar7 = (longlong)pvVar4 - (longlong)param_2;
    _Dst = (void *)((longlong)_Dst_00 + _Size + param_4);
    pvVar5 = param_2;
  }
  memmove(_Dst,pvVar5,sVar7);
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    pvVar4 = pvVar5;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar5)) &&
       (pvVar4 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar4)))) {
LAB_1400056ad:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  *param_1 = (longlong)_Dst_00;
  param_1[1] = uVar1 + (longlong)_Dst_00;
  param_1[2] = (longlong)_Dst_00 + uVar6;
  return;
}



basic_ostream<> * FUN_140005750(basic_ostream<> *param_1,char *param_2,ulonglong param_3)

{
  basic_ostream<> *this;
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  uVar4 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if (((longlong)uVar4 < 1) || (uVar4 <= param_3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = uVar4 - param_3;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = *(basic_ostream<> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<> *)0x0) || (this == param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 == false) {
    iVar5 = 4;
  }
  else {
    if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) != 0x40)
    {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<>::sputc
                          (*(basic_streambuf<> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) {
          iVar5 = 4;
          goto LAB_140005864;
        }
      }
    }
    uVar4 = std::basic_streambuf<>::sputn
                      (*(basic_streambuf<> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),param_2,
                       param_3);
    if (uVar4 == param_3) {
LAB_140005864:
      do {
        if (lVar6 == 0) goto LAB_140005891;
        iVar3 = std::basic_streambuf<>::sputc
                          (*(basic_streambuf<> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) break;
        lVar6 = lVar6 + -1;
      } while( true );
    }
    iVar5 = 4;
LAB_140005891:
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  std::basic_ios<>::setstate
            ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



undefined4 * FUN_140005910(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *_Dst;
  undefined4 *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar4 = param_1[1] - lVar3 >> 2;
  if (lVar4 == 0x3fffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_140004d00();
  }
  uVar5 = param_1[2] - lVar3 >> 2;
  uVar1 = lVar4 + 1;
  if (uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (uVar6 < 0x4000000000000000) {
      uVar5 = uVar6 * 4;
      if (uVar5 == 0) {
        _Dst_00 = (undefined4 *)0x0;
      }
      else if (uVar5 < 0x1000) {
        _Dst_00 = (undefined4 *)FUN_140005e40(uVar5);
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_140005a5b;
        lVar4 = FUN_140005e40(uVar5 + 0x27);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        _Dst_00 = (undefined4 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(_Dst_00 + -2) = lVar4;
      }
      puVar2 = _Dst_00 + ((longlong)param_2 - lVar3 >> 2);
      *puVar2 = *param_3;
      _Src = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)_Src;
        _Dst = _Dst_00;
        param_2 = _Src;
      }
      else {
        memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
        _Dst = puVar2 + 1;
        _Size = param_1[1] - (longlong)param_2;
      }
      memmove(_Dst,param_2,_Size);
      FID_conflict__Change_array(param_1,(longlong)_Dst_00,uVar1,uVar6);
      return puVar2;
    }
  }
LAB_140005a5b:
                    // WARNING: Subroutine does not return
  FUN_140001170();
}



void FUN_140005a70(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Memory;
  ulonglong uVar6;
  void *_Dst;
  
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_2) {
                    // WARNING: Subroutine does not return
    FUN_140004d00();
  }
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar5 = param_1[2] - *param_1;
  if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = 0x8000000000000026;
LAB_140005aca:
    lVar4 = FUN_140005e40(uVar5);
    if (lVar4 == 0) goto LAB_140005ba0;
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar4;
  }
  else {
    uVar6 = (uVar5 >> 1) + uVar5;
    if (uVar6 < param_2) {
      uVar6 = param_2;
    }
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar6) {
        uVar5 = uVar6 + 0x27;
        if (uVar5 <= uVar6) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_140005aca;
      }
      _Dst = (void *)FUN_140005e40(uVar6);
    }
  }
  memset((void *)((longlong)_Dst + (lVar1 - lVar2)),0,param_2 - (lVar1 - lVar2));
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    _Memory = pvVar3;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar3)) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_140005ba0:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = param_2 + (longlong)_Dst;
  param_1[2] = (longlong)_Dst + uVar6;
  return;
}



undefined1 * FUN_140005bc0(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  undefined1 *_Dst;
  void *_Memory;
  ulonglong uVar5;
  undefined1 *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  undefined1 *puVar7;
  
  lVar2 = *param_1;
  uVar6 = 0x7fffffffffffffff;
  if (param_1[1] - lVar2 == 0x7fffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_140004d00();
  }
  uVar5 = param_1[2] - lVar2;
  uVar1 = (param_1[1] - lVar2) + 1;
  if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = 0x8000000000000026;
LAB_140005c2e:
    lVar4 = FUN_140005e40(uVar5);
    if (lVar4 == 0) goto LAB_140005d28;
    _Dst_00 = (undefined1 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(_Dst_00 + -8) = lVar4;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (uVar6 == 0) {
      _Dst_00 = (undefined1 *)0x0;
    }
    else {
      if (0xfff < uVar6) {
        uVar5 = uVar6 + 0x27;
        if (uVar5 <= uVar6) {
                    // WARNING: Subroutine does not return
          FUN_140001170();
        }
        goto LAB_140005c2e;
      }
      _Dst_00 = (undefined1 *)FUN_140005e40(uVar6);
    }
  }
  puVar7 = _Dst_00 + ((longlong)param_2 - lVar2);
  *puVar7 = *param_3;
  pvVar3 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar3;
    _Dst = _Dst_00;
    param_2 = pvVar3;
  }
  else {
    memmove(_Dst_00,pvVar3,(longlong)param_2 - (longlong)pvVar3);
    _Dst = puVar7 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    _Memory = pvVar3;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar3)) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_140005d28:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst_00;
  param_1[1] = (longlong)(_Dst_00 + uVar1);
  param_1[2] = (longlong)(_Dst_00 + uVar6);
  return puVar7;
}



// Library Function - Multiple Matches With Different Base Names
//  private: void __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN *
// __ptr64> >::_Change_array(struct CHN * __ptr64 * __ptr64 const,unsigned __int64,unsigned __int64)
// __ptr64
//  private: void __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
// __int64> >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64)
// __ptr64
//  private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
// >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64
// 
// Library: Visual Studio 2019 Release

void FID_conflict__Change_array
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



void FUN_140005dc8(longlong param_1,uint param_2)

{
  FUN_140004c20((basic_ios<> *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}



void __thiscall std::basic_streambuf<>::_Lock(basic_streambuf<> *this)

{
                    // WARNING: Could not recover jumptable at 0x000140005dd4. Too many branches
                    // WARNING: Treating indirect jump as call
  _Lock(this);
  return;
}



void __thiscall std::basic_streambuf<>::_Unlock(basic_streambuf<> *this)

{
                    // WARNING: Could not recover jumptable at 0x000140005dda. Too many branches
                    // WARNING: Treating indirect jump as call
  _Unlock(this);
  return;
}



__int64 __thiscall std::basic_streambuf<>::showmanyc(basic_streambuf<> *this)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x000140005de0. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = showmanyc(this);
  return _Var1;
}



int __thiscall std::basic_streambuf<>::uflow(basic_streambuf<> *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140005de6. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = uflow(this);
  return iVar1;
}



__int64 __thiscall
std::basic_streambuf<>::xsgetn(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x000140005dec. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}



__int64 __thiscall
std::basic_streambuf<>::xsputn(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x000140005df2. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}



basic_streambuf<> * __thiscall
std::basic_streambuf<>::setbuf(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  basic_streambuf<> *pbVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140005df8. Too many branches
                    // WARNING: Treating indirect jump as call
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}



int __thiscall std::basic_streambuf<>::sync(basic_streambuf<> *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140005dfe. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sync(this);
  return iVar1;
}



void __thiscall std::basic_streambuf<>::imbue(basic_streambuf<> *this,locale *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140005e04. Too many branches
                    // WARNING: Treating indirect jump as call
  imbue(this,param_1);
  return;
}



// WARNING: This is an inlined function

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_14000b000) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_140006158();
  return;
}



void FUN_140005e40(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_140001170();
  }
                    // WARNING: Subroutine does not return
  FUN_1400062c0();
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x000140006c58. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



undefined8 * FUN_140005e84(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



void FUN_140005eb0(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(1);
  uVar5 = FUN_1400065e0();
  _set_fmode((int)uVar5);
  uVar5 = FUN_1400065d4();
  puVar6 = (undefined4 *)__p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar5 != '\0') {
    FUN_140006858();
    atexit(FUN_140006894);
    uVar7 = FUN_1400065d8();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_1400065e8();
      bVar2 = FUN_140006624();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_1400065d4);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_1400065d4();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_1400065f8();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_1400065d4();
      uVar5 = thunk_FUN_1400065d4();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_140006648(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 FUN_140005f68(void)

{
  FUN_140006608();
  return 0;
}



void FUN_140005f78(void)

{
  ulonglong uVar1;
  
  FUN_1400067ec();
  uVar1 = FUN_1400065d4();
  _set_new_mode(uVar1 & 0xffffffff);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

ulonglong FUN_140005f94(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined1 uVar9;
  
  iVar2 = (int)unaff_RBX;
  uVar3 = FUN_140006324(1);
  if ((char)uVar3 == '\0') {
    FUN_140006648(7);
  }
  else {
    bVar1 = false;
    uVar9 = 0;
    uVar3 = __scrt_acquire_startup_lock();
    iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar3);
    if (DAT_14000b8c0 != 1) {
      if (DAT_14000b8c0 == 0) {
        DAT_14000b8c0 = 1;
        iVar2 = _initterm_e(&DAT_1400083a0,&DAT_1400083b8);
        if (iVar2 != 0) {
          return 0xff;
        }
        _initterm(&DAT_140008388,&DAT_140008398);
        DAT_14000b8c0 = 2;
      }
      else {
        bVar1 = true;
        uVar9 = 1;
      }
      __scrt_release_startup_lock((char)uVar3);
      plVar4 = (longlong *)FUN_140006630();
      if ((*plVar4 != 0) && (uVar5 = FUN_1400063ec((longlong)plVar4), (char)uVar5 != '\0')) {
        (*(code *)*plVar4)(0,2,0,in_R9,uVar9);
      }
      plVar4 = (longlong *)FUN_140006638();
      if ((*plVar4 != 0) && (uVar5 = FUN_1400063ec((longlong)plVar4), (char)uVar5 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar4);
      }
      _get_initial_narrow_environment();
      __p___argv();
      puVar6 = (uint *)__p___argc();
      uVar8 = (ulonglong)*puVar6;
      uVar5 = FUN_140003dd0();
      iVar2 = (int)uVar5;
      uVar7 = FUN_140006798();
      if ((char)uVar7 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar8 >> 8),1),'\0');
        return uVar5 & 0xffffffff;
      }
      goto LAB_140006100;
    }
  }
  FUN_140006648(7);
LAB_140006100:
                    // WARNING: Subroutine does not return
  exit(iVar2);
}



void entry(void)

{
  __security_init_cookie();
  FUN_140005f94();
  return;
}



// Library Function - Single Match
//  __raise_securityfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x000140006151. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140006158(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140006183;
  capture_previous_context((PCONTEXT)&DAT_14000b3f0);
  _DAT_14000b360 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_14000b488 = puVar3 + 0x40;
  _DAT_14000b470 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_14000b350 = 0xc0000409;
  _DAT_14000b354 = 1;
  _DAT_14000b368 = 1;
  DAT_14000b370 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_14000b000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_14000b040;
  *(undefined8 *)(puVar3 + -8) = 0x140006225;
  DAT_14000b4e8 = _DAT_14000b360;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140008400);
  return;
}



// Library Function - Single Match
//  capture_previous_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



undefined8 * FUN_1400062a0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_1400062c0(void)

{
  undefined8 local_28 [5];
  
  FUN_1400062a0(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140009ab8);
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x000140006c58. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_140006316:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_14000b8c8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_14000b8c8;
        pvVar1 = DAT_14000b8c8;
      }
      DAT_14000b8c8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_140006316;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}



longlong FUN_140006324(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_14000b8d0 = 1;
  }
  FUN_1400068d0();
  cVar1 = FUN_1400065f8();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1400065f8();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1400065f8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2019 Release

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_14000b8d1 == '\0') {
    if (1 < param_1) {
      FUN_140006648(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_14000b8d8 = 0xffffffffffffffff;
      uRam000000014000b8e0 = 0xffffffffffffffff;
      _DAT_14000b8e8 = 0xffffffffffffffff;
      _DAT_14000b8f0 = 0xffffffffffffffff;
      uRam000000014000b8f8 = 0xffffffffffffffff;
      _DAT_14000b900 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_14000b8d8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_14000b8f0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_14000b8d1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000140006479)
// WARNING: Enum "SectionFlags": Some values do not have unique names

ulonglong FUN_1400063ec(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1400001f0; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002b8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_140006462;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_140006462:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_14000b8c8 = 0;
    UNLOCK();
  }
  return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
// 
// Library: Visual Studio 2019 Release

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_14000b8d0 == '\0') || (param_2 == '\0')) {
    FUN_1400065f8();
    FUN_1400065f8();
  }
  return 1;
}



// Library Function - Single Match
//  _onexit
// 
// Library: Visual Studio 2019 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_14000b8d8 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_14000b8d8);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



// Library Function - Single Match
//  atexit
// 
// Library: Visual Studio 2019 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_14000b000 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_14000b000 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_14000b000 == 0x2b992ddfa232) {
      DAT_14000b000 = 0x2b992ddfa233;
    }
  }
  DAT_14000b040 = ~DAT_14000b000;
  return;
}



undefined8 FUN_1400065d4(void)

{
  return 0;
}



undefined8 FUN_1400065d8(void)

{
  return 1;
}



undefined8 FUN_1400065e0(void)

{
  return 0x4000;
}



void FUN_1400065e8(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400065ef. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_14000b910);
  return;
}



undefined1 FUN_1400065f8(void)

{
  return 1;
}



void _guard_check_icall(void)

{
  return;
}



undefined * FUN_140006600(void)

{
  return &DAT_14000b920;
}



void FUN_140006608(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140001000();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_140006600();
  *puVar1 = *puVar1 | 2;
  return;
}



bool FUN_140006624(void)

{
  return DAT_14000b04c == 0;
}



undefined * FUN_140006630(void)

{
  return &DAT_14000b950;
}



undefined * FUN_140006638(void)

{
  return &DAT_14000b948;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140006640(void)

{
  _DAT_14000b928 = 0;
  return;
}



void FUN_140006648(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x14000667c;
  FUN_140006640();
  *(undefined8 *)(puVar4 + -8) = 0x14000668d;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x140006697;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1400066b1;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1400066f2;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x140006724;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x140006746;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x140006763;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x14000676e;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x14000677f;
    FUN_140006640();
  }
  return;
}



undefined8 thunk_FUN_1400065d4(void)

{
  return 0;
}



ulonglong FUN_140006798(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || ((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71(2,piVar3[0x3e] != 0);
  }
  return uVar2;
}



void FUN_1400067ec(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400067f3. Too many branches
                    // WARNING: Treating indirect jump as call
  SetUnhandledExceptionFilter(FUN_1400067fc);
  return;
}



undefined8 FUN_1400067fc(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) {
    if ((piVar1[8] + 0xe66cfae0U < 3) || (piVar1[8] == 0x1994000)) {
      puVar3 = (undefined8 *)__current_exception();
      *puVar3 = piVar1;
      uVar2 = param_1[1];
      puVar3 = (undefined8 *)__current_exception_context();
      *puVar3 = uVar2;
                    // WARNING: Subroutine does not return
      terminate();
    }
  }
  return 0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140006858(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140009198; puVar1 < &DAT_140009198; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140006894(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1400091a8; puVar1 < &DAT_1400091a8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001400069f3)
// WARNING: Removing unreachable block (ram,0x0001400069d6)
// WARNING: Removing unreachable block (ram,0x0001400069a5)
// WARNING: Removing unreachable block (ram,0x00014000690c)
// WARNING: Removing unreachable block (ram,0x0001400068e9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400068d0(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_14000b068 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_14000b060 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_14000b930 = DAT_14000b930 | 1;
    }
  }
  uVar11 = 0;
  uVar8 = uVar11;
  uVar10 = uVar11;
  uVar12 = uVar11;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_14000b930 = DAT_14000b930 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar12 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar11 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_14000b058 = 1;
  DAT_14000b05c = 2;
  uVar9 = DAT_14000b050 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_14000b058 = 2;
    DAT_14000b05c = 6;
    uVar9 = DAT_14000b050 & 0xffffffffffffffee;
  }
  DAT_14000b050 = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)uVar9, (bVar7 & 6) == 6)) {
      _DAT_14000b058 = 3;
      uVar6 = DAT_14000b050;
      uVar5 = DAT_14000b05c | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_14000b058 = 5;
        uVar6 = DAT_14000b050 & 0xfffffffffffffffd;
        uVar5 = DAT_14000b05c | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_14000b05c = DAT_14000b05c | 0x68;
          _DAT_14000b058 = 6;
          uVar6 = DAT_14000b050 & 0xffffffffffffffd9;
          uVar5 = DAT_14000b05c;
        }
      }
      DAT_14000b05c = uVar5;
      DAT_14000b050 = uVar6;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_14000b050 = DAT_14000b050 & 0xfffffffffeffffff;
      }
      if (((uVar12 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_14000b92c = uVar11 & 0x400ff;
        DAT_14000b050 = ~((ulonglong)(uVar11 >> 0x10 & 7) | 0x1000028) & DAT_14000b050;
        if (1 < _DAT_14000b92c) {
          DAT_14000b050 = DAT_14000b050 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar12 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_14000b050 = DAT_14000b050 & 0xffffffffffffff7f;
    }
  }
  return 0;
}



// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2019 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_14000b070 != 0;
}



void __CxxFrameHandler4(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006bb0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler4();
  return;
}



void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x000140006bc2. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



void __current_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006bc8. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception();
  return;
}



void __current_exception_context(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006bce. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception_context();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140006bd4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x000140006bda. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140006be0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _callnewh(_Size);
  return iVar1;
}



void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140006be6. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



void _seh_filter_exe(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006bec. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_exe();
  return;
}



void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006bf2. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006bf8. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006bfe. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c04. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _get_initial_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c0a. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_narrow_environment();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c10. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c16. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x000140006c1c. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}



errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140006c22. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c28. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c2e. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argv();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c34. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c40. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140006c46. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



void _set_new_mode(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c4c. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_new_mode();
  return;
}



void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c52. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x000140006c58. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c5e. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c64. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c6a. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x000140006c70. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// Library Function - Single Match
//  __GSHandlerCheck
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Single Match
//  __GSHandlerCheckCommon
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)(*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0);
  }
  return uVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __GSHandlerCheck_EH
//  __GSHandlerCheck_EH4
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140006d73. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140006d79. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000140006d90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000140006d90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_140006dcc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_140004a00(*(longlong **)(param_2 + 0x38));
  }
  return;
}



void FUN_140006e00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_ios<>::~basic_ios<>((basic_ios<> *)(param_2 + 0xd8));
  }
  return;
}



void FUN_140006e4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_140004a60(*(longlong **)(param_2 + 0x40));
  }
  return;
}



void FUN_140006ec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_140004a60(*(longlong **)(param_2 + 0x28));
  }
  return;
}



void FUN_140006f20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    FUN_140004a00(*(longlong **)(param_2 + 0x50));
  }
  return;
}



void FUN_140006f70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_140004a00((longlong *)(param_2 + 0x48));
  }
  return;
}



undefined8 FUN_140007018(undefined8 param_1,longlong param_2)

{
  std::basic_ios<>::setstate
            ((basic_ios<> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x50) + 4) +
             (longlong)*(longlong **)(param_2 + 0x50)),4,true);
  return 0;
}



undefined8 FUN_140007078(undefined8 param_1,longlong param_2)

{
  std::basic_ios<>::setstate
            ((basic_ios<> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x60) + 4) +
             (longlong)*(longlong **)(param_2 + 0x60)),4,true);
  return 0;
}



void FUN_1400070b3(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}



bool FUN_1400070d1(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}


