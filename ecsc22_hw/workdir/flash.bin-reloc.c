typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;



void FUN_10000000(void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_lr;
  
  iVar4 = DAT_100000cc;
  *(undefined4 *)(DAT_100000cc + 4) = 0x21;
  uVar3 = *(uint *)(iVar4 + 8) & 0xfffffffd;
  *(uint *)(iVar4 + 8) = uVar3;
  *(uint *)(iVar4 + 0xc) = uVar3;
  *(uint *)(iVar4 + 0x10) = uVar3;
  *(uint *)(iVar4 + 0x14) = uVar3;
  puVar6 = DAT_100000d0;
  DAT_100000d0[2] = 0;
  puVar6[5] = 2;
  puVar6[0x3c] = 1;
  *puVar6 = DAT_100000d4;
  puVar6[2] = 1;
  iVar4 = FUN_100000bc(0x35);
  uVar5 = 2;
  if (iVar4 != 2) {
    puVar6[0x18] = 6;
    FUN_100000aa();
    puVar6[0x18] = 1;
    puVar6[0x18] = 0;
    puVar6[0x18] = uVar5;
    FUN_100000aa();
    uVar5 = puVar6[0x18];
    do {
      uVar3 = FUN_100000bc(5,uVar5);
      uVar5 = 1;
    } while ((uVar3 & 1) != 0);
  }
  puVar6[2] = 0;
  *puVar6 = DAT_100000d8;
  puVar6[1] = 0;
  *DAT_100000e0 = DAT_100000dc;
  puVar6[2] = 1;
  puVar6[0x18] = 0xeb;
  puVar6[0x18] = 0xa0;
  FUN_100000aa();
  puVar6[2] = 0;
  *DAT_100000e0 = DAT_100000e4;
  puVar6[2] = 1;
  puVar2 = PTR_DAT_100000e8;
  if (in_lr != 0) {
    return;
  }
  *DAT_100000ec = PTR_DAT_100000e8;
  uVar5 = *(undefined4 *)puVar2;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(uVar5);
  }
                    // WARNING: Could not recover jumptable at 0x100000a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(puVar2 + 4))(uVar5);
  return;
}



undefined8 FUN_100000aa(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  do {
    do {
    } while ((*(uint *)(param_4 + 0x28) & 4) == 0);
  } while ((*(uint *)(param_4 + 0x28) & 1) != 0);
  return CONCAT44(param_2,param_1);
}



undefined8 FUN_100000bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + 0x60) = param_1;
  *(undefined4 *)(param_4 + 0x60) = param_1;
  FUN_100000aa();
  return CONCAT44(param_2,*(undefined4 *)(param_4 + 0x60));
}



void FUN_1000022e(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_3 = uVar1;
  }
  return;
}



byte FUN_10000266(void)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  bVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    bVar3 = (byte)uVar2 & 0x1f;
  }
  return bVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10000390(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_100020ec();
  iVar1 = (int)((ulonglong)lVar2 >> 0x20);
  if (-1 < lVar2) {
    if (iVar1 == 0) {
      iVar1 = FUN_100040e0((int)lVar2,1000);
    }
    else {
      iVar1 = FUN_10004164((int)lVar2,iVar1,1000,0);
    }
    if (*DAT_100003fc <= (uint)(iVar1 - *DAT_100003f8)) {
      *DAT_100003f8 = *DAT_100003f8 + *DAT_100003fc;
      if (*DAT_10000400 == 0) {
        _DAT_d0000018 = 0x8000000;
      }
      else {
        _DAT_d0000014 = 0x8000000;
      }
      *DAT_10000400 = *DAT_10000400 ^ 1;
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000040c,0x3f,
               PTR_s_update_us_since_boot_10000408,PTR_s_us_since_boot____INT64_MAX_10000404);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10000410(void)

{
  undefined *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack32;
  undefined4 uStack28;
  undefined4 local_18;
  undefined4 uStack20;
  
  FUN_10000634();
  FUN_10000784(PTR_LAB_1000030c_1_100004a0);
  FUN_10000fd8(0x1a);
  _DAT_d0000024 = 0x4000000;
  _DAT_d0000014 = 0x4000000;
  FUN_10000fd8(0x1c);
  _DAT_d0000024 = 0x10000000;
  FUN_10000fd8(0x1b);
  _DAT_d0000024 = 0x8000000;
  FUN_10000b8c();
  FUN_10008130();
  FUN_100067b8();
  FUN_10000b74(PTR_LAB_10000368_1_100004a4);
  FUN_10000b3c(0);
  FUN_10000528();
  local_34 = &local_24;
  local_24 = *(undefined4 *)PTR_PTR_s_Vault_1___Water_Purification_100004a8;
  uStack32 = *(undefined4 *)(PTR_PTR_s_Vault_1___Water_Purification_100004a8 + 4);
  uStack28 = *(undefined4 *)(PTR_PTR_s_Vault_1___Water_Purification_100004a8 + 8);
  local_18 = *(undefined4 *)(PTR_PTR_s_Vault_1___Water_Purification_100004a8 + 0xc);
  uStack20 = *(undefined4 *)(PTR_PTR_s_Vault_1___Water_Purification_100004a8 + 0x10);
  local_38 = PTR_s_______________________100004ac;
  local_30 = 5;
  local_2c = PTR_LAB_10000330_1_100004b0;
  local_28 = 0;
  FUN_10000940(&local_38,PTR_PTR_s_Vault_1___Water_Purification_100004a8 + 0x14);
  do {
    FUN_100067b8();
    FUN_10000390();
    FUN_10000544();
    FUN_1000079c();
  } while( true );
}



void FUN_100004b4(void)

{
  *DAT_100004c0 = 1000;
  return;
}



void FUN_100004c4(void)

{
  *DAT_100004cc = 0xfa;
  return;
}



void FUN_100004d0(void)

{
  *DAT_100004d8 = DAT_100004dc;
  return;
}



void FUN_100004e0(void)

{
  *DAT_100004ec = 1000;
  return;
}



void FUN_10000528(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *DAT_10000538 = 0;
  puVar1 = DAT_1000053c;
  uVar2 = DAT_10000540[1];
  *DAT_1000053c = *DAT_10000540;
  puVar1[1] = uVar2;
  return;
}



void FUN_10000544(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined *extraout_r1;
  code *pcVar6;
  code **ppcVar7;
  int iVar8;
  int iVar9;
  char local_13;
  undefined auStack16 [4];
  
  if (-1 < *DAT_100005c0) {
    ppcVar7 = (code **)(DAT_100005c4 + *DAT_100005c0 * 8);
    pcVar3 = *ppcVar7;
    pcVar6 = ppcVar7[1];
    puVar5 = auStack16;
    iVar9 = 0;
    while (iVar4 = FUN_10005224(500,puVar5), iVar8 = DAT_100005cc, piVar2 = DAT_100005c8,
          iVar4 != -1) {
      iVar8 = *DAT_100005c8;
      puVar5 = (undefined *)(iVar8 + 1);
      *DAT_100005c8 = (int)puVar5;
      *(char *)(DAT_100005cc + iVar8) = (char)iVar4;
      iVar9 = iVar9 + 1;
      if (((uint)pcVar6 & 0xff) != 0) {
        FUN_10005140();
        puVar5 = extraout_r1;
      }
    }
    local_13 = (char)((uint)pcVar6 >> 8);
    if (((((local_13 == '\0') ||
          (cVar1 = *(char *)(DAT_100005cc + *DAT_100005c8 + -1), cVar1 == '\r')) || (cVar1 == '\n'))
        || (cVar1 == '\x03')) && (0 < iVar9)) {
      iVar9 = *DAT_100005c8;
      *(undefined *)(DAT_100005cc + iVar9) = 0;
      (*pcVar3)(iVar8,iVar9);
      *piVar2 = 0;
    }
  }
  return;
}



void FUN_100005d0(void)

{
  FUN_1000520c(PTR_DAT_100005dc);
  return;
}



void FUN_100005e0(undefined4 param_1)

{
  FUN_100051c8(param_1);
  return;
}



void FUN_100005f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *DAT_10000618;
  *DAT_10000618 = iVar1 + 1;
  puVar2 = (undefined4 *)(DAT_1000061c + (iVar1 + 1) * 8);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  return;
}



void FUN_10000620(void)

{
  if (-1 < *DAT_10000630) {
    *DAT_10000630 = *DAT_10000630 + -1;
  }
  return;
}



void FUN_10000634(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_10000680;
  FUN_10002830(DAT_10000680,0x1c200);
  FUN_10000fa8(0,2);
  FUN_10000fa8(1,2);
  *(uint *)(DAT_10000684 | 0x1000) = ~*(uint *)(iVar1 + 0x30) & 0xc000;
  puVar2 = (uint *)(DAT_10000688 | 0x1000);
  *puVar2 = (*(uint *)(iVar1 + 0x2c) ^ 0x60) & 0x6e;
  *puVar2 = ~*(uint *)(iVar1 + 0x2c) & 0x10;
  return;
}



void FUN_1000068c(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = DAT_10000744;
  uVar4 = *(undefined4 *)(&stack0xffffffe4 + DAT_10000748 + DAT_10000744);
  *(undefined4 **)(&stack0xffffffe4 + DAT_1000074c + DAT_10000744) =
       (undefined4 *)((int)(&stack0xffffffe4 + DAT_10000748 + DAT_10000744) + 4);
  FUN_10003fec(&stack0xffffffe8 + DAT_10000744,DAT_10000750,uVar4);
  bVar6 = false;
  pbVar5 = &stack0xffffffe8 + iVar2;
  while( true ) {
    bVar1 = *pbVar5;
    if (bVar1 == 0) break;
    if (bVar6) {
      (&stack0xffffffe7)[iVar2] = bVar1;
      pbVar3 = &stack0xffffffe7 + iVar2;
      bVar6 = false;
      while (!bVar6) {
        do {
        } while ((int)(DAT_10000754[6] << 0x1a) < 0);
        *DAT_10000754 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        bVar6 = true;
      }
    }
    else {
      if (*DAT_10000758 == (ushort)bVar1) {
        (&stack0xffffffe7)[iVar2] = 0xd;
        pbVar3 = &stack0xffffffe7 + iVar2;
        bVar6 = false;
        while (!bVar6) {
          do {
          } while ((int)(DAT_10000754[6] << 0x1a) < 0);
          *DAT_10000754 = (uint)*pbVar3;
          pbVar3 = pbVar3 + 1;
          bVar6 = true;
        }
      }
      (&stack0xffffffe7)[iVar2] = bVar1;
      pbVar3 = &stack0xffffffe7 + iVar2;
      bVar6 = false;
      while (!bVar6) {
        do {
        } while ((int)(DAT_10000754[6] << 0x1a) < 0);
        *DAT_10000754 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        bVar6 = true;
      }
    }
    bVar6 = *pbVar5 == 0xd;
    pbVar5 = pbVar5 + 1;
  }
  return;
}



void FUN_10000760(byte *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    do {
    } while ((int)(DAT_10000780[6] << 0x1a) < 0);
    *DAT_10000780 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  return;
}



void FUN_10000784(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_10000794;
  *DAT_10000794 = iVar1 + 1;
  *(undefined4 *)(DAT_10000798 + (iVar1 + 1) * 4) = param_1;
  return;
}



void FUN_1000079c(void)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char local_9;
  
  uVar5 = DAT_1000082c[6];
  if ((uVar5 & 0x10) == 0) {
    while (iVar2 = FUN_100028b0(DAT_1000082c,500), pcVar3 = DAT_10000834, iVar2 != 0) {
      pcVar3 = &local_9;
      uVar4 = uVar5 & 0x10;
      while (uVar4 == 0) {
        do {
        } while ((int)(DAT_1000082c[6] << 0x1b) < 0);
        *pcVar3 = (char)*DAT_1000082c;
        pcVar3 = pcVar3 + 1;
        uVar4 = 1;
      }
      iVar2 = *DAT_10000830;
      *DAT_10000830 = iVar2 + 1;
      DAT_10000834[iVar2] = local_9;
    }
    iVar2 = *DAT_10000830;
    DAT_10000834[iVar2] = '\0';
    if (*pcVar3 == '\0') {
      if (iVar2 < 1) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (-1 < *DAT_10000838)) {
      (**(code **)(*DAT_10000838 * 4 + DAT_1000083c))(DAT_10000834);
      *DAT_10000830 = 0;
    }
  }
  return;
}



void FUN_10000840(void)

{
  int iVar1;
  int iVar2;
  
  if (*DAT_1000088c != 0) {
    FUN_100005d0();
    FUN_100005e0(PTR_DAT_10000890,*(undefined4 *)*DAT_1000088c);
    for (iVar2 = 0; iVar1 = *DAT_1000088c, iVar2 < *(int *)(iVar1 + 8); iVar2 = iVar2 + 1) {
      if (*(int *)(iVar1 + 0x10) == iVar2) {
        FUN_100005e0(PTR_s_____s_10000898,*(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4));
      }
      else {
        FUN_100005e0(PTR_s___s_10000894,*(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4));
      }
    }
  }
  return;
}



void FUN_10000940(int param_1)

{
  *DAT_10000958 = param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_100005f8(*(undefined4 *)PTR_PTR_LAB_1000089c_1_1000095c,
               *(undefined4 *)(PTR_PTR_LAB_1000089c_1_1000095c + 4));
  return;
}



undefined * FUN_10000960(void)

{
  return PTR_DAT_10000964;
}



undefined * FUN_10000968(void)

{
  return PTR_LAB_1000096c;
}



ushort * FUN_10000970(uint param_1)

{
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    FUN_10004ee8(DAT_100009cc + 1,*DAT_100009c8,2);
    sVar3 = 1;
  }
  else {
    if (6 < param_1) {
      return (ushort *)0x0;
    }
    iVar6 = DAT_100009c8[param_1];
    bVar2 = FUN_10008a34(iVar6);
    uVar4 = (uint)bVar2;
    if (0x1f < uVar4) {
      uVar4 = 0x1f;
    }
    sVar3 = (short)uVar4;
    for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 1 & 0xff) {
      DAT_100009cc[uVar5 + 1] = (ushort)*(byte *)(iVar6 + uVar5);
    }
  }
  puVar1 = DAT_100009cc;
  *DAT_100009cc = (sVar3 + 1) * 2 | 0x300;
  return puVar1;
}



// WARNING: Removing unreachable block (ram,0x10000a8e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100009d0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iStack28;
  
  iVar2 = FUN_10008f90(DAT_10000a98,&iStack28);
  if (iVar2 == 0) {
    if (iStack28 == _DAT_d0000000) {
      return;
    }
    FUN_10008fc0(DAT_10000a98);
  }
  iVar2 = FUN_10006c88(0);
  puVar1 = DAT_10000a9c;
  if (iVar2 == 0) {
    *DAT_10000a9c = 0;
    puVar1[1] = 0;
  }
  else {
    iVar2 = 0;
    while (iVar2 < param_2) {
      iVar3 = FUN_10006e0c(0);
      if (param_2 - iVar2 <= iVar3) {
        iVar3 = param_2 - iVar2;
      }
      if (iVar3 == 0) {
        FUN_100067b8();
        FUN_10006d0c(0);
        iVar3 = FUN_10006c88(0);
        if ((iVar3 == 0) ||
           ((iVar3 = FUN_10006e0c(0), iVar3 == 0 &&
            (uVar5 = FUN_100020ec(),
            CONCAT44(DAT_10000a9c[1] + (uint)CARRY4(DAT_10000aa0,*DAT_10000a9c),
                     DAT_10000aa0 + *DAT_10000a9c) < uVar5)))) break;
      }
      else {
        iVar3 = FUN_10006dd4(0,param_1 + iVar2);
        FUN_100067b8();
        FUN_10006d0c(0);
        iVar2 = iVar2 + iVar3;
        uVar4 = FUN_100020ec();
        puVar1 = DAT_10000a9c;
        *DAT_10000a9c = (uint)uVar4;
        puVar1[1] = (uint)((ulonglong)uVar4 >> 0x20);
      }
    }
  }
  FUN_10008f50(DAT_10000a98);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_10000aa4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int aiStack20 [2];
  
  iVar1 = FUN_10008f90(DAT_10000b10,aiStack20);
  if (iVar1 == 0) {
    if (aiStack20[0] == _DAT_d0000000) {
      return -3;
    }
    FUN_10008fc0(DAT_10000b10);
  }
  iVar1 = FUN_10006c88(0);
  if (iVar1 == 0) {
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_10006ccc(0);
    if (iVar1 == 0) {
      iVar1 = -3;
    }
    else {
      iVar1 = FUN_10006ce4(0,param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = -3;
      }
    }
  }
  FUN_10008f50(DAT_10000b10);
  return iVar1;
}



void FUN_10000b14(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (-1 < *DAT_10000b30) {
    pcVar1 = *(code **)(*DAT_10000b30 * 4 + DAT_10000b34);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_2);
    }
  }
  return;
}



void FUN_10000b38(void)

{
  return;
}



void FUN_10000b3c(int param_1)

{
  int iVar1;
  
  FUN_1000274c(DAT_10000b6c);
  FUN_1000515c(DAT_10000b70,1);
  if (param_1 != 0) {
    while (iVar1 = FUN_10006c88(0), iVar1 == 0) {
      FUN_100067b8();
      FUN_10001fb4(10);
    }
  }
  return;
}



void FUN_10000b74(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_10000b84;
  *DAT_10000b84 = iVar1 + 1;
  *(undefined4 *)(DAT_10000b88 + (iVar1 + 1) * 4) = param_1;
  return;
}



void FUN_10000b8c(void)

{
  int iVar1;
  
  iVar1 = DAT_10000bc8;
  FUN_10004ee8(DAT_10000bc8,PTR_s_____To_all_survivors_____If_you__10000bd0,DAT_10000bcc);
  FUN_10004ee8(iVar1 + 0x400,PTR_s_void_unlock_____volatile_bool_su_10000bd4,0x130);
  FUN_10004ee8(iVar1 + 0x800,PTR_LAB_10000bdc,DAT_10000bd8);
  FUN_10004ee8(iVar1 + 0x1400,PTR_s_void_unlock_int_key____uart_prin_10000be4,DAT_10000be0);
  return;
}



void FUN_10000be8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_44;
  undefined local_40;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined2 local_30;
  undefined local_2e;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined local_24;
  
  local_2c = *(undefined4 *)PTR_DAT_10000c60;
  uStack40 = *(undefined4 *)(PTR_DAT_10000c60 + 4);
  local_24 = PTR_DAT_10000c60[8];
  local_3c = *(undefined4 *)PTR_s_Revive_Society_10000c64;
  uStack56 = *(undefined4 *)(PTR_s_Revive_Society_10000c64 + 4);
  uStack52 = *(undefined4 *)(PTR_s_Revive_Society_10000c64 + 8);
  local_30 = *(undefined2 *)(PTR_s_Revive_Society_10000c64 + 0xc);
  local_2e = PTR_s_Revive_Society_10000c64[0xe];
  local_44 = *(undefined4 *)PTR_DAT_10000c68;
  local_40 = PTR_DAT_10000c68[4];
  uVar1 = FUN_10008a34(&local_2c);
  FUN_10004ee8(param_2,&local_2c,uVar1);
  uVar1 = FUN_10008a34(&local_3c);
  FUN_10004ee8(param_3,&local_3c,uVar1);
  uVar1 = FUN_10008a34(&local_44);
  FUN_10004ee8(param_4,&local_44,uVar1);
  return;
}



bool FUN_10000c6c(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = *DAT_10000c88;
  if (cVar1 != '\0') {
    FUN_100072f8(param_1,2,0x3a,0);
  }
  return cVar1 == '\0';
}



void FUN_10000c8c(undefined4 param_1,undefined4 *param_2,undefined2 *param_3)

{
  *param_2 = 0x10;
  *param_3 = 0x200;
  return;
}



undefined4 FUN_10000c98(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if ((param_4 != 0) && (param_3 == 0)) {
    *DAT_10000cac = 1;
  }
  return 1;
}



undefined4
FUN_10000cb0(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_2 < 0x10) {
    FUN_10004ee8(param_4,param_2 * 0x200 + DAT_10000cd0 + param_3,param_5);
  }
  else {
    param_5 = 0xffffffff;
  }
  return param_5;
}



undefined4 FUN_10000cd4(void)

{
  return 1;
}



undefined4
FUN_10000cd8(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_2 < 0x10) {
    FUN_10004ee8(param_2 * 0x200 + DAT_10000cfc + param_3,param_4,param_5);
  }
  else {
    param_5 = 0xffffffff;
  }
  return param_5;
}



int FUN_10000d00(undefined4 param_1,char *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*param_2 == '\x1e') {
    iVar1 = 0;
  }
  else {
    FUN_100072f8(param_1,5,0x20,0);
    iVar1 = -1;
  }
  if (iVar1 <= param_4) {
    param_4 = iVar1;
  }
  return param_4;
}



// WARNING: Removing unreachable block (ram,0x10000d4e)

void FUN_10000d28(void)

{
  FUN_100005e0(PTR_s_Refusing_to_continue_10000d64);
  return;
}



void FUN_10000d90(void)

{
  FUN_100005d0();
  FUN_100005f8(*(undefined4 *)PTR_PTR_LAB_10000d70_1_10000da8,
               *(undefined4 *)(PTR_PTR_LAB_10000d70_1_10000da8 + 4));
  FUN_100005e0(PTR_s_This_vault_is_locked_by_a_check_t_10000dac);
  return;
}



void FUN_10000e08(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined local_c;
  
  if (*DAT_10000e64 != '\0') {
    iVar1 = FUN_10007e8c(0);
    if (iVar1 == 4) {
      local_10 = 0x32;
      local_c = 0;
      FUN_10007ea4(0,(int)&local_10 + 1,4);
      FUN_10000760(&local_10,5);
    }
    else {
      FUN_10007ee8(0,PTR_s_ERR__message_length_does_not_fol_10000e68,0x39);
      uVar2 = FUN_10007e8c(0);
      FUN_100005e0(PTR_s_ERR__message_length_does_not_fol_10000e6c,uVar2);
      FUN_10007ec8(0);
    }
  }
  return;
}



void FUN_10000e70(void)

{
  *DAT_10000e94 = 1;
  FUN_100005d0();
  FUN_100005f8(*(undefined4 *)PTR_PTR_LAB_10000db0_1_10000e98,
               *(undefined4 *)(PTR_PTR_LAB_10000db0_1_10000e98 + 4));
  FUN_10000784(PTR_LAB_10000dc8_1_10000e9c);
  FUN_100005e0(PTR_s_This_vault_can_only_be_unlocked_v_10000ea0);
  return;
}



void FUN_10000f00(void)

{
  FUN_100005d0();
  FUN_100005f8(*(undefined4 *)PTR_PTR_LAB_10000ea4_1_10000f18,
               *(undefined4 *)(PTR_PTR_LAB_10000ea4_1_10000f18 + 4));
  FUN_100005e0(PTR_s_This_vault_is_locked_by_a_hashin_10000f1c);
  return;
}



void FUN_10000f7c(void)

{
  FUN_100005d0();
  FUN_100005f8(*(undefined4 *)PTR_PTR_LAB_10000f20_1_10000f9c,
               *(undefined4 *)(PTR_PTR_LAB_10000f20_1_10000f9c + 4));
  FUN_100005e0(PTR_s_This_vault_is_locked_on_the_TPM_c_10000fa0);
  FUN_1000068c(PTR_s_4HELP_10000fa4);
  return;
}



void FUN_10000fa8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 * 4 + DAT_10000fd0);
  *(uint *)((uint)puVar1 | 0x1000) = (*puVar1 ^ 0x40) & 0xc0;
  *(undefined4 *)(param_1 * 8 + DAT_10000fd4 + 4) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10000fd8(uint param_1)

{
  _DAT_d0000018 = 1 << (param_1 & 0xff);
  _DAT_d0000028 = _DAT_d0000018;
  FUN_10000fa8(param_1,5);
  return;
}



undefined4 FUN_10000ff0(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
  } while (*DAT_10001004 == 0);
  DataMemoryBarrier(0x1f);
  return uVar2;
}



void FUN_10001008(uint param_1)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1f);
  *DAT_10001018 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}



void FUN_1000101c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  FUN_10000ff0();
  bVar1 = *(byte *)(param_1 + (param_2 >> 3));
  uVar2 = 1 << (param_2 & 7);
  if ((uVar2 & bVar1) == 0) {
    *(byte *)(param_1 + (param_2 >> 3)) = (byte)uVar2 | bVar1;
    FUN_10001008();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_10002a10(param_3,param_2,param_2 & 7,uVar2,param_4);
}



uint FUN_1000104e(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  byte bVar1;
  uint uVar2;
  
  FUN_10000ff0();
  do {
    if (param_4 < param_3) {
      param_3 = 0xffffffff;
LAB_10001084:
      FUN_10001008();
      if (((int)param_3 < 0) && (param_2 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_10002a10(param_5);
      }
      return param_3;
    }
    bVar1 = *(byte *)(param_1 + (param_3 >> 3));
    uVar2 = 1 << (param_3 & 7);
    if ((uVar2 & bVar1) == 0) {
      *(byte *)(param_1 + (param_3 >> 3)) = (byte)uVar2 | bVar1;
      goto LAB_10001084;
    }
    param_3 = param_3 + 1;
  } while( true );
}



bool FUN_100010a0(void)

{
  return (*DAT_100010b0 & 2) != 0;
}



void FUN_100010b4(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DataMemoryBarrier(0x1f);
    *(undefined4 *)((uVar1 + DAT_100010d0) * 4) = 0;
  }
  return;
}



void FUN_100010d4(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = DAT_100010ec;
  bVar1 = *DAT_100010ec;
  *DAT_100010ec = bVar1 + 1;
  if (0x17 < (byte)(bVar1 + 1)) {
    *pbVar2 = 0x10;
  }
  return;
}



void FUN_100010f0(undefined4 param_1)

{
  FUN_1000104e(DAT_1000110c,param_1,0x18,0x1f,PTR_s_No_spinlocks_are_available_10001108);
  return;
}



void FUN_10001110(int param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  
  *(undefined4 *)(*(int *)(DAT_10001130 + 8) + (param_1 + 0x10) * 4) = param_2;
  DataMemoryBarrier(0x1f);
  DataMemoryBarrier(0x1f);
  *DAT_10001134 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_3 & 1) == 1);
  }
  return;
}



uint FUN_10001138(int param_1,int param_2)

{
  param_2 = param_2 - param_1;
  if (((uint)(param_2 + DAT_10001168) <= DAT_1000116c) && (-1 < param_2 * -0x80000000)) {
    return param_2 + -4 >> 1 & 0x7ffU | DAT_10001170 & 0xffff;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000117c,0x99,PTR_s_make_branch_10001178,
               PTR_s_delta_____2048____delta____2046___10001174);
}



void FUN_10001180(undefined2 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 - (int)param_1) - 4;
  if (uVar1 >> 0xc == 0) {
    *param_1 = (short)DAT_100011ac;
    param_1[1] = (ushort)DAT_100011b0 | (ushort)(uVar1 >> 1);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100011bc,0xa1,
               PTR_s_insert_branch_and_link_100011b8,PTR_s___delta____11u__100011b4);
}



bool FUN_100011c0(uint param_1)

{
  return (*DAT_100011d4 & 1 << (param_1 & 0xff)) != 0;
}



void FUN_100011d8(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    *DAT_100011f4 = param_1;
  }
  else {
    *DAT_100011ec = param_1;
    *DAT_100011f0 = param_1;
  }
  return;
}



void FUN_100011f8(uint param_1)

{
  FUN_100011d8(1 << (param_1 & 0xff));
  return;
}



undefined4 FUN_10001208(int param_1)

{
  return *(undefined4 *)((param_1 + 0x10) * 4 + *(int *)(DAT_10001214 + 8));
}



void FUN_10001218(undefined4 param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
  } while (*DAT_10001258 == 0);
  DataMemoryBarrier(0x1f);
  puVar2 = (undefined *)FUN_10001208(param_1);
  if ((puVar2 != PTR_DAT_1000125c) && (puVar2 != param_2)) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001268,0x7c,
                 PTR_s_irq_set_exclusive_handler_10001264,
                 PTR_s_current______unhandled_user_irq___10001260);
  }
  FUN_10001110(param_1,param_2,uVar3);
  return;
}



void FUN_1000126c(int param_1,undefined *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  
  uVar13 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar13 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
  } while (*DAT_100013dc == 0);
  DataMemoryBarrier(0x1f);
  puVar11 = *(undefined **)(*(int *)(DAT_100013e0 + 8) + (param_1 + 0x10) * 4);
  puVar12 = puVar11;
  if (((puVar11 != PTR_DAT_100013e4) && (puVar12 = PTR_DAT_100013e4, puVar11 != param_2)) &&
     (puVar12 = puVar11, (int)puVar11 - DAT_100013e8 < 0x30)) {
    uVar6 = FUN_100011c0(param_1);
    FUN_100011f8(param_1,0);
    DataMemoryBarrier(0x1f);
    iVar7 = FUN_10000266();
    if ((iVar7 != 0) && (param_1 + 0x10 != iVar7)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100013f4,299,
                   PTR_s_irq_remove_handler_100013f0,PTR_s__exception____exception____num___100013ec
                  );
    }
    uVar8 = 0;
    for (uVar9 = (uint)puVar11 & 0xfffffffe;
        (*(undefined **)(uVar9 + 8) != param_2 && (uVar8 = uVar9, -1 < *(char *)(uVar9 + 6)));
        uVar9 = DAT_100013e8 + *(char *)(uVar9 + 6) * 0xc) {
    }
    if (*(undefined **)(uVar9 + 8) != param_2) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100013f4,0x15f,
                   PTR_s_irq_remove_handler_100013f0,PTR_s_false_10001410);
    }
    cVar2 = *(char *)(uVar9 + 6);
    iVar10 = (int)cVar2;
    if (iVar10 < 0) {
      if (iVar7 == 0) {
        puVar12 = PTR_DAT_100013e4;
        if (uVar8 != 0) {
          *(undefined *)(uVar8 + 6) = 0xff;
          *(short *)(uVar8 + 4) = (short)DAT_10001404;
          puVar12 = puVar11;
        }
        pcVar4 = DAT_100013f8;
        *(char *)(uVar9 + 6) = *DAT_100013f8;
        *pcVar4 = (char)(((uVar9 - DAT_100013e8) * 2 + (uint)(DAT_100013e8 <= uVar9)) * DAT_10001408
                        >> 0x14);
        puVar11 = puVar12;
      }
      else {
        FUN_10001180(uVar9 + 4,DAT_1000140c);
      }
    }
    else {
      iVar7 = DAT_100013e8 + iVar10 * 0xc;
      *(undefined4 *)(uVar9 + 8) = *(undefined4 *)(iVar7 + 8);
      *(undefined *)(uVar9 + 7) = *(undefined *)(iVar7 + 7);
      *(undefined *)(uVar9 + 6) = *(undefined *)(iVar7 + 6);
      if (*(char *)(iVar7 + 6) < '\0') {
        uVar5 = 0xbd00;
      }
      else {
        iVar7 = iVar10 * 0xc + DAT_100013e8;
        uVar1 = *(ushort *)(iVar7 + 4);
        if (uVar1 >> 0xb != 0x1c) {
                    // WARNING: Subroutine does not return
          FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100013f4,0xa7,
                       PTR_s_resolve_branch_10001400,PTR_s_0x1c______inst___11u_100013fc);
        }
        uVar5 = FUN_10001138(uVar9 + 4,iVar7 + 4 + (((int)((uint)uVar1 << 0x15) >> 0x15) + 2) * 2);
      }
      *(undefined2 *)(uVar9 + 4) = uVar5;
      pcVar4 = DAT_100013f8;
      *(char *)(DAT_100013e8 + iVar10 * 0xc + 6) = *DAT_100013f8;
      *pcVar4 = cVar2;
    }
    FUN_100011f8(param_1,uVar6);
    puVar12 = puVar11;
  }
  FUN_10001110(param_1,puVar12,uVar13);
  return;
}



void FUN_10001504(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_10001518;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
    *puVar2 = DAT_1000151c;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_10001520(int *param_1,int param_2)

{
  *param_1 = (param_2 + DAT_1000152c) * 4;
  return;
}



void FUN_10001530(int param_1,int param_2)

{
  int iVar1;
  
  FUN_100020d4(param_2);
  FUN_100022ec(param_2);
  FUN_10002174(param_2,PTR_FUN_10001874_1_10001564);
  iVar1 = FUN_100010d4();
  *(int *)(param_1 + 4) = (iVar1 + DAT_10001568) * 4;
  *(char *)(param_1 + 0x14) = (char)param_2;
  *(int *)(param_2 * 4 + DAT_1000156c) = param_1;
  return;
}



void FUN_1000161c(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 3) < param_2)) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100016ac,0x68,PTR_s_ph_get_node_100016a8,
                 PTR_s_id____id____heap__max_nodes_100016a4);
  }
  pcVar2 = (char *)(param_2 * 3 + -3 + *param_1);
  if (param_2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100016ac,0x6f,
                 PTR_s_ph_add_child_node_100016b4,PTR_s_parent_id_100016b0);
  }
  if (param_3 != 0) {
    if (param_2 == param_3) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100016ac,0x71,
                   PTR_s_ph_add_child_node_100016b4,PTR_s_parent_id____child_id_100016bc);
    }
    if ((param_3 != 0) && (param_3 <= *(byte *)(param_1 + 3))) {
      iVar1 = *param_1 + param_3 * 3 + -3;
      *(char *)(iVar1 + 2) = (char)param_2;
      if (*pcVar2 == '\0') {
        *pcVar2 = (char)param_3;
      }
      else {
        *(char *)(iVar1 + 1) = *pcVar2;
        *pcVar2 = (char)param_3;
      }
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100016ac,0x68,PTR_s_ph_get_node_100016a8,
                 PTR_s_id____id____heap__max_nodes_100016a4);
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100016ac,0x70,PTR_s_ph_add_child_node_100016b4
               ,PTR_s_child_id_100016b8);
}



int FUN_100016c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  if ((param_2 != 0) && (iVar2 = param_2, param_3 != 0)) {
    iVar1 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      FUN_1000161c(param_1,param_3,param_2);
      iVar2 = param_3;
    }
    else {
      FUN_1000161c(param_1,param_2,param_3);
    }
  }
  return iVar2;
}



uint FUN_10001700(int **param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 byte param_7,char param_8,undefined *param_9)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = (uint)param_7;
  if (uVar5 == 0) {
    piVar3 = *param_1;
    uVar5 = (uint)*(byte *)((int)piVar3 + 0xe);
    if (uVar5 != 0) {
      if ((uVar5 == 0) || (*(byte *)(piVar3 + 3) < uVar5)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001850,0x68,PTR_s_ph_get_node_1000184c
                     ,PTR_s_id____id____heap__max_nodes_10001848);
      }
      puVar4 = (undefined *)(uVar5 * 3 + -3 + *piVar3);
      cVar2 = puVar4[1];
      *(char *)((int)piVar3 + 0xe) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)((int)piVar3 + 0xf) = 0;
      }
      puVar4[2] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
  }
  else {
    piVar3 = *param_1;
    if (uVar5 == *(byte *)((int)piVar3 + 0xd)) {
      cVar2 = '\x01';
    }
    else {
      if ((uVar5 == 0) || (*(byte *)(piVar3 + 3) < uVar5)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001850,0x68,PTR_s_ph_get_node_1000184c
                     ,PTR_s_id____id____heap__max_nodes_10001848);
      }
      cVar2 = *(char *)(*piVar3 + uVar5 * 3 + -1);
      if (cVar2 != '\0') {
        cVar2 = '\x01';
      }
    }
    if (cVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000185c,0x65,
                   PTR_s_add_alarm_under_lock_10001858,
                   PTR_s__ph_contains_node_pool__heap__re_10001854);
    }
  }
  if (uVar5 != 0) {
    if ((uVar5 == 0) || (*(byte *)(*param_1 + 3) < uVar5)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000185c,0x3b,PTR_s_get_entry_10001868,
                   PTR_s_id____id____pool__heap__max_node_10001864);
    }
    piVar3 = param_1[2] + (uVar5 + DAT_10001860) * 4;
    *piVar3 = param_3;
    piVar3[1] = param_4;
    piVar3[2] = param_5;
    piVar3[3] = param_6;
    piVar3 = *param_1;
    if (uVar5 == 0) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001850,0xa5,
                   PTR_s_ph_insert_node_10001870,PTR_s_id_1000186c);
    }
    if ((uVar5 == 0) || (*(byte *)(piVar3 + 3) < uVar5)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001850,0x68,PTR_s_ph_get_node_1000184c,
                   PTR_s_id____id____heap__max_nodes_10001848);
    }
    puVar4 = (undefined *)(uVar5 * 3 + -3 + *piVar3);
    puVar4[2] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    uVar6 = FUN_100016c0(piVar3,*(undefined *)((int)piVar3 + 0xd),uVar5);
    *(char *)((int)piVar3 + 0xd) = (char)uVar6;
    if (uVar5 == (uint)uVar6) {
      iVar1 = FUN_10002204(*(undefined *)(param_1 + 5),(int)((ulonglong)uVar6 >> 0x20),param_3,
                           param_4);
      if ((iVar1 != 0) && (param_8 == '\0')) {
        FUN_10002654(*param_1,uVar5);
      }
      if (param_9 != (undefined *)0x0) {
        *param_9 = (char)iVar1;
      }
    }
  }
  return uVar5;
}



// WARNING: Removing unreachable block (ram,0x10001a72)
// WARNING: Removing unreachable block (ram,0x100019ea)

void FUN_10001874(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int **ppiVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint local_38;
  uint local_34;
  uint local_30;
  
  local_30 = 0;
  ppiVar9 = *(int ***)(param_1 * 4 + DAT_10001b54);
  do {
    while( true ) {
      lVar12 = FUN_100020ec();
      if (lVar12 < 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b60,0x3f,
                     PTR_s_update_us_since_boot_10001b5c,PTR_s_us_since_boot____INT64_MAX_10001b58);
      }
      local_38 = 0;
      local_34 = 0;
      uVar10 = 0;
      bVar11 = (bool)isCurrentModePrivileged();
      if (bVar11) {
        uVar10 = isIRQinterruptsEnabled();
      }
      disableIRQinterrupts();
      do {
      } while (*ppiVar9[1] == 0);
      DataMemoryBarrier(0x1f);
      piVar3 = *ppiVar9;
      bVar1 = *(byte *)((int)piVar3 + 0xd);
      uVar7 = (uint)bVar1;
      if (uVar7 == 0) {
        uVar6 = 0;
        pcVar5 = (code *)0x0;
        iVar4 = 0;
      }
      else {
        if ((uVar7 == 0) || (*(byte *)(piVar3 + 3) < uVar7)) {
                    // WARNING: Subroutine does not return
          FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b6c,0x3b,PTR_s_get_entry_10001b68
                       ,PTR_s_id____id____pool__heap__max_node_10001b64);
        }
        puVar8 = (uint *)(ppiVar9[2] + (uVar7 + DAT_10001b80) * 4);
        iVar4 = (puVar8[1] - (int)((ulonglong)lVar12 >> 0x20)) - (uint)(*puVar8 < (uint)lVar12);
        if ((iVar4 < 1) && ((iVar4 != 0 || (*puVar8 == (uint)lVar12)))) {
          uVar2 = FUN_10002640(piVar3,0);
          if (uVar2 != uVar7) {
                    // WARNING: Subroutine does not return
            FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b6c,0x8c,
                         PTR_s_alarm_pool_alarm_callback_10001b74,
                         PTR_s_removed_id____next_id_10001b70);
          }
          local_38 = *puVar8;
          local_34 = puVar8[1];
          pcVar5 = (code *)puVar8[2];
          uVar6 = puVar8[3];
          if (pcVar5 == (code *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b6c,0x90,
                         PTR_s_alarm_pool_alarm_callback_10001b74,PTR_s_callback_10001b78);
          }
          if ((uVar7 == 0) || (*(byte *)(*ppiVar9 + 3) < uVar7)) {
                    // WARNING: Subroutine does not return
            FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b6c,0x40,
                         PTR_s_get_entry_id_high_10001b7c,
                         PTR_s_id____id____pool__heap__max_node_10001b64);
          }
          local_30 = (uint)*(byte *)((int)ppiVar9[3] + (uVar7 - 1));
          ppiVar9[4] = (int *)(uVar2 | local_30 << 8);
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_10002204(param_1,iVar4,*puVar8,puVar8[1]);
          uVar6 = 0;
          pcVar5 = (code *)0x0;
        }
      }
      DataMemoryBarrier(0x1f);
      *ppiVar9[1] = 0;
      bVar11 = (bool)isCurrentModePrivileged();
      if (bVar11) {
        enableIRQinterrupts((uVar10 & 1) == 1);
      }
      if (pcVar5 != (code *)0x0) break;
      if (iVar4 == 0) {
        return;
      }
    }
    piVar3 = (int *)(local_30 << 8 | uVar7);
    lVar12 = (*pcVar5)(piVar3,uVar6);
    uVar10 = 0;
    bVar11 = (bool)isCurrentModePrivileged();
    if (bVar11) {
      uVar10 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    do {
      bVar11 = *ppiVar9[1] == 0;
    } while (bVar11);
    DataMemoryBarrier(0x1f);
    if ((lVar12 < 0) && (ppiVar9[4] != (int *)0x0)) {
      if (ppiVar9[4] != piVar3) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b6c,0x9f,
                     PTR_s_alarm_pool_alarm_callback_10001b74,
                     PTR_s_pool__alarm_in_progress____make__10001b84);
      }
      uVar7 = (local_34 - (int)((ulonglong)lVar12 >> 0x20)) - (uint)(local_38 < (uint)lVar12);
      if ((uVar7 < local_34) || ((local_34 == uVar7 && (local_38 - (uint)lVar12 < local_38)))) {
        uVar7 = 0xffffffff;
      }
      if ((int)uVar7 < 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b60,0x3f,
                     PTR_s_update_us_since_boot_10001b5c,PTR_s_us_since_boot____INT64_MAX_10001b58);
      }
      FUN_10001700(ppiVar9);
    }
    else if ((lVar12 < 1) || (ppiVar9[4] == (int *)0x0)) {
      piVar3 = *ppiVar9;
      if (uVar7 == 0) {
LAB_10001b08:
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b90,0xf6,
                     PTR_s_ph_free_node_10001b98,PTR_s_id_____ph_contains_node_heap__id_10001b94);
      }
      if (uVar7 == *(byte *)((int)piVar3 + 0xd)) {
        bVar11 = true;
      }
      else {
        if ((uVar7 == 0) || (*(byte *)(piVar3 + 3) < uVar7)) {
                    // WARNING: Subroutine does not return
          FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b90,0x68,
                       PTR_s_ph_get_node_10001b8c,PTR_s_id____id____heap__max_nodes_10001b88);
        }
        if (*(char *)(uVar7 * 3 + *piVar3 + -1) != '\0') {
          bVar11 = true;
        }
      }
      if (bVar11) goto LAB_10001b08;
      uVar6 = (uint)*(byte *)((int)piVar3 + 0xf);
      if (uVar6 != 0) {
        if ((uVar6 == 0) || (*(byte *)(piVar3 + 3) < uVar6)) {
                    // WARNING: Subroutine does not return
          FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b90,0x68,
                       PTR_s_ph_get_node_10001b8c,PTR_s_id____id____heap__max_nodes_10001b88);
        }
        *(byte *)(uVar6 * 3 + *piVar3 + -2) = bVar1;
      }
      *(byte *)((int)piVar3 + 0xf) = bVar1;
      if ((uVar7 == 0) || (*(byte *)(*ppiVar9 + 3) < uVar7)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b6c,0x40,
                     PTR_s_get_entry_id_high_10001b7c,
                     PTR_s_id____id____pool__heap__max_node_10001b64);
      }
      *(char *)((int)ppiVar9[3] + (uVar7 - 1)) = *(char *)((int)ppiVar9[3] + (uVar7 - 1)) + '\x01';
    }
    else {
      if (ppiVar9[4] != piVar3) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b6c,0xa2,
                     PTR_s_alarm_pool_alarm_callback_10001b74,
                     PTR_s_pool__alarm_in_progress____make__10001b84);
      }
      uVar13 = FUN_100020ec();
      if ((longlong)uVar13 < 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b60,0x3f,
                     PTR_s_update_us_since_boot_10001b5c,PTR_s_us_since_boot____INT64_MAX_10001b58);
      }
      iVar4 = (int)(lVar12 + uVar13 >> 0x20);
      if (lVar12 + uVar13 < uVar13) {
        iVar4 = -1;
      }
      if (iVar4 < 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001b60,0x3f,
                     PTR_s_update_us_since_boot_10001b5c,PTR_s_us_since_boot____INT64_MAX_10001b58);
      }
      FUN_10001700(ppiVar9);
    }
    ppiVar9[4] = (int *)0x0;
    DataMemoryBarrier(0x1f);
    *ppiVar9[1] = 0;
    bVar11 = (bool)isCurrentModePrivileged();
    if (bVar11) {
      enableIRQinterrupts((uVar10 & 1) == 1);
    }
  } while( true );
}



void FUN_10001b9c(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_10001bc8;
  if (DAT_10001bc8[1] == 0) {
    FUN_10002480(*DAT_10001bc8,0x10,PTR_LAB_100015a0_1_10001bd0,DAT_10001bc8);
    FUN_10001530(puVar1,3);
  }
  FUN_10001520(DAT_10001bcc,10);
  return;
}



int FUN_10001bd4(void)

{
  if (*(int *)(DAT_10001bf0 + 4) != 0) {
    return DAT_10001bf0;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001bfc,0x5c,
               PTR_s_alarm_pool_get_default_10001bf8,PTR_s_default_alarm_pool_initialized___10001bf4
              );
}



// WARNING: Removing unreachable block (ram,0x10001d10)
// WARNING: Removing unreachable block (ram,0x10001c88)

uint FUN_10001c00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 code *param_5,undefined4 param_6,char param_7)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char local_29 [5];
  
  uVar2 = CONCAT44(param_4,param_3);
  local_29[0] = '\0';
  while( true ) {
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    do {
    } while (*(int *)param_1[1] == 0);
    DataMemoryBarrier(0x1f);
    uVar3 = FUN_10001700(param_1,0,(int)uVar2,(int)(uVar2 >> 0x20),param_5,param_6,0,0,local_29);
    uVar4 = uVar3;
    if (uVar3 != 0) {
      if ((uVar3 == 0) || (*(byte *)(*param_1 + 0xc) < uVar3)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001d60,0x40,
                     PTR_s_get_entry_id_high_10001d5c,
                     PTR_s_id____id____pool__heap__max_node_10001d58);
      }
      uVar4 = (uint)*(byte *)(param_1[3] + (uVar3 - 1));
    }
    DataMemoryBarrier(0x1f);
    *(undefined4 *)param_1[1] = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts((uVar5 & 1) == 1);
    }
    if (uVar3 == 0) break;
    if (local_29[0] == '\0') {
      return uVar3 | uVar4 << 8;
    }
    if (param_7 == '\0') {
      return 0;
    }
    lVar6 = (*param_5)(0,param_6);
    if (lVar6 == 0) {
      return 0;
    }
    if (lVar6 < 0) {
      bVar1 = uVar2 - lVar6 < uVar2;
      uVar2 = uVar2 - lVar6;
      if (bVar1) {
        uVar2 = 0xffffffffffffffff;
      }
      if ((longlong)uVar2 < 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001d6c,0x3f,
                     PTR_s_update_us_since_boot_10001d68,PTR_s_us_since_boot____INT64_MAX_10001d64);
      }
    }
    else {
      uVar7 = FUN_100020ec();
      if ((longlong)uVar7 < 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001d6c,0x3f,
                     PTR_s_update_us_since_boot_10001d68,PTR_s_us_since_boot____INT64_MAX_10001d64);
      }
      uVar2 = lVar6 + uVar7;
      if (uVar2 < uVar7) {
        uVar2 = 0xffffffffffffffff;
      }
      if ((longlong)uVar2 < 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001d6c,0x3f,
                     PTR_s_update_us_since_boot_10001d68,PTR_s_us_since_boot____INT64_MAX_10001d64);
      }
    }
  }
  return 0xffffffff;
}



uint FUN_10001d70(int **param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
    uVar2 = (uint)(*param_1[1] == 0);
  } while (uVar2 != 0);
  DataMemoryBarrier(0x1f);
  uVar4 = (uint)param_2 & 0xff;
  piVar3 = *param_1;
  if (uVar4 == *(byte *)((int)piVar3 + 0xd)) {
    uVar2 = 1;
  }
  else {
    if ((uVar4 == 0) || (*(byte *)(piVar3 + 3) < uVar4)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001e44,0x68,PTR_s_ph_get_node_10001e40,
                   PTR_s_id____id____heap__max_nodes_10001e3c,param_4);
    }
    if (*(char *)(uVar4 * 3 + *piVar3 + -1) != '\0') {
      uVar2 = 1;
    }
  }
  if (uVar2 == 0) {
    if (param_1[4] == param_2) {
      param_1[4] = (int *)0x0;
    }
  }
  else {
    if (param_1[4] == param_2) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001e50,0x10a,
                   PTR_s_alarm_pool_cancel_alarm_10001e4c,
                   PTR_s_alarm_id____pool__alarm_in_progr_10001e48,param_4);
    }
    if ((uVar4 == 0) || (*(byte *)(*param_1 + 3) < uVar4)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001e50,0x40,
                   PTR_s_get_entry_id_high_10001e58,PTR_s_id____id____pool__heap__max_node_10001e54,
                   param_4);
    }
    if ((uint)*(byte *)((int)param_1[3] + (uVar4 - 1)) == ((uint)param_2 >> 8 & 0xff)) {
      uVar2 = FUN_10002654(piVar3,uVar4);
      if (uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001e50,0x111,
                     PTR_s_alarm_pool_cancel_alarm_10001e4c,PTR_DAT_10001e5c,param_4);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  DataMemoryBarrier(0x1f);
  *param_1[1] = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar5 & 1) == 1);
  }
  return uVar2;
}



void FUN_10001e60(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  iVar3 = FUN_10000266();
  if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_10002a10(PTR_s_Attempted_to_sleep_inside_of_an_e_10001f40);
  }
  uVar5 = param_1 - 6;
  uVar6 = (param_2 - 1) + (uint)(5 < param_1);
  if ((param_2 < uVar6) || ((uVar6 == param_2 && (param_1 < uVar5)))) {
    uVar5 = 0;
    uVar6 = 0;
  }
  if ((int)uVar6 < 0) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001f4c,0x3f,
                 PTR_s_update_us_since_boot_10001f48,PTR_s_us_since_boot____INT64_MAX_10001f44);
  }
  lVar7 = FUN_100020ec();
  if (lVar7 < 0) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001f4c,0x3f,
                 PTR_s_update_us_since_boot_10001f48,PTR_s_us_since_boot____INT64_MAX_10001f44);
  }
  uVar4 = uVar6 - (int)((ulonglong)lVar7 >> 0x20);
  uVar2 = (uint)(uVar5 < (uint)lVar7);
  if ((0 < (int)(uVar4 - uVar2)) || ((uVar4 == uVar2 && (uVar5 != (uint)lVar7)))) {
    uVar8 = FUN_10001bd4();
    iVar3 = FUN_10001c00((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar5,uVar6,
                         PTR_LAB_10001570_1_10001f50,0,0);
    if (-1 < iVar3) {
      while( true ) {
        if (*(uint *)(DAT_10001f58 + 0x24) < uVar6) {
          bVar1 = false;
        }
        else if (*(uint *)(DAT_10001f58 + 0x28) < uVar5) {
          if (uVar6 == *(uint *)(DAT_10001f58 + 0x24)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
        if (bVar1) break;
        uVar4 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar4 = isIRQinterruptsEnabled();
        }
        disableIRQinterrupts();
        do {
        } while (**DAT_10001f54 == 0);
        DataMemoryBarrier(0x1f);
        DataMemoryBarrier(0x1f);
        **DAT_10001f54 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts((uVar4 & 1) == 1);
        }
        WaitForEvent();
      }
    }
  }
  FUN_10002104(param_1,param_2);
  return;
}



// WARNING: Removing unreachable block (ram,0x10001f7a)

void FUN_10001f5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_100020ec();
  if ((longlong)uVar3 < 0) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001fb0,0x3f,
                 PTR_s_update_us_since_boot_10001fac,PTR_s_us_since_boot____INT64_MAX_10001fa8,
                 param_4);
  }
  uVar1 = uVar3 + CONCAT44(param_2,param_1);
  iVar2 = (int)(uVar1 >> 0x20);
  if (uVar1 < uVar3) {
    iVar2 = -1;
  }
  if (-1 < iVar2) {
    FUN_10001e60();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10001fb0,0x3f,
               PTR_s_update_us_since_boot_10001fac,PTR_s_us_since_boot____INT64_MAX_10001fa8,param_4
              );
}



void FUN_10001fb4(undefined4 param_1)

{
  FUN_10004d68(param_1,0,1000,0);
  FUN_10001f5c();
  return;
}



undefined4 FUN_10001fc8(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_10001bd4();
  iVar1 = FUN_10001c00((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_1,param_2,DAT_10002040,0,0);
  if (iVar1 < 1) {
    if (*(uint *)(DAT_10002044 + 0x24) < param_2) {
      uVar2 = 0;
    }
    else if (*(uint *)(DAT_10002044 + 0x28) < param_1) {
      if (param_2 == *(uint *)(DAT_10002044 + 0x24)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    WaitForEvent();
    uVar2 = FUN_10001bd4();
    FUN_10001d70(uVar2,iVar1);
    if (*(uint *)(DAT_10002044 + 0x24) < param_2) {
      uVar2 = 0;
    }
    else if (*(uint *)(DAT_10002044 + 0x28) < param_1) {
      if (param_2 == *(uint *)(DAT_10002044 + 0x24)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



void FUN_100020d4(undefined4 param_1)

{
  FUN_1000101c(DAT_100020e8,param_1,PTR_s_Hardware_alarm__d_already_claime_100020e4);
  return;
}



undefined4 FUN_100020ec(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(DAT_10002100 + 0x24);
  do {
    bVar2 = iVar1 != *(int *)(DAT_10002100 + 0x24);
    iVar1 = *(int *)(DAT_10002100 + 0x24);
  } while (bVar2);
  return *(undefined4 *)(DAT_10002100 + 0x28);
}



void FUN_10002104(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_10002128 + 0x24);
  while (uVar1 < param_2) {
    uVar1 = *(uint *)(DAT_10002128 + 0x24);
  }
  while ((uVar1 == param_2 && (*(uint *)(DAT_10002128 + 0x28) < param_1))) {
    uVar1 = *(uint *)(DAT_10002128 + 0x24);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x10002148)

void FUN_1000212c(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_100020ec();
  uVar1 = uVar3 + CONCAT44(param_2,param_1);
  iVar2 = (int)(uVar1 >> 0x20);
  if (uVar1 < uVar3) {
    iVar2 = -1;
  }
  if (-1 < iVar2) {
    FUN_10002104();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002170,0x3f,
               PTR_s_update_us_since_boot_1000216c,PTR_s_us_since_boot____INT64_MAX_10002168);
}



void FUN_10002174(uint param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
  } while (*DAT_100021f0 == 0);
  DataMemoryBarrier(0x1f);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 * 4 + DAT_100021fc) = 0;
    *DAT_10002200 = *DAT_10002200 & ~(byte)(1 << (param_1 & 0xff));
    FUN_1000126c(param_1,PTR_LAB_10002048_1_100021f4);
    FUN_100011f8(param_1,0);
  }
  else {
    puVar2 = (undefined *)FUN_10001208(param_1);
    if (PTR_LAB_10002048_1_100021f4 != puVar2) {
      FUN_10001218(param_1,PTR_LAB_10002048_1_100021f4);
      FUN_100011f8(param_1,1);
      *DAT_100021f8 = 1 << (param_1 & 0xff);
    }
    *(int *)(param_1 * 4 + DAT_100021fc) = param_2;
  }
  DataMemoryBarrier(0x1f);
  *DAT_100021f0 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar3 & 1) == 1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x10002222)
// WARNING: Removing unreachable block (ram,0x10002290)

undefined4 FUN_10002204(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = FUN_100020ec();
  if (uVar7 < CONCAT44(param_4,param_3)) {
    uVar6 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar6 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    do {
    } while (*DAT_100022cc == 0);
    DataMemoryBarrier(0x1f);
    bVar1 = *DAT_100022d0;
    uVar5 = 1 << (param_1 & 0xff);
    *DAT_100022d0 = (byte)uVar5 | bVar1;
    iVar3 = DAT_100022d4;
    *(uint *)(DAT_100022d4 + 0x34) = uVar5;
    *(undefined4 *)((param_1 + 4) * 4 + iVar3) = param_3;
    *(undefined4 *)(param_1 * 4 + DAT_100022d8) = param_4;
    if ((*(uint *)(iVar3 + 0x20) & uVar5) == 0) {
      if ((*(uint *)(DAT_100022d4 + 0x40) & uVar5) == 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100022e4,0xc1,
                     PTR_s_hardware_alarm_set_target_100022e0,
                     PTR_s_timer_hw__ints___1u____alarm_num_100022dc);
      }
      uVar4 = 0;
    }
    else {
      uVar7 = FUN_100020ec();
      iVar3 = DAT_100022d4;
      if (uVar7 < CONCAT44(param_4,param_3)) {
        uVar4 = 0;
      }
      else if (*DAT_100022d0 == bVar1) {
        uVar4 = 1;
      }
      else {
        *(uint *)(DAT_100022d4 + 0x20) = uVar5;
        *(uint *)(iVar3 + 0x34) = uVar5;
        *DAT_100022e8 = 1 << (param_1 & 0x1f);
        *DAT_100022d0 = bVar1;
        uVar4 = 1;
      }
    }
    DataMemoryBarrier(0x1f);
    *DAT_100022cc = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      enableIRQinterrupts((uVar6 & 1) == 1);
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



void FUN_100022ec(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
  } while (*DAT_10002320 == 0);
  DataMemoryBarrier(0x1f);
  iVar2 = 1 << (param_1 & 0xff);
  *(int *)(DAT_10002324 + 0x20) = iVar2;
  *DAT_10002328 = *DAT_10002328 & ~(byte)iVar2;
  DataMemoryBarrier(0x1f);
  *DAT_10002320 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar3 & 1) == 1);
  }
  return;
}



void FUN_1000232c(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 3) < param_2)) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100023bc,0x68,PTR_s_ph_get_node_100023b8,
                 PTR_s_id____id____heap__max_nodes_100023b4);
  }
  pcVar2 = (char *)(param_2 * 3 + -3 + *param_1);
  if (param_2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100023bc,0x6f,
                 PTR_s_ph_add_child_node_100023c4,PTR_s_parent_id_100023c0);
  }
  if (param_3 != 0) {
    if (param_2 == param_3) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100023bc,0x71,
                   PTR_s_ph_add_child_node_100023c4,PTR_s_parent_id____child_id_100023cc);
    }
    if ((param_3 != 0) && (param_3 <= *(byte *)(param_1 + 3))) {
      iVar1 = *param_1 + param_3 * 3 + -3;
      *(char *)(iVar1 + 2) = (char)param_2;
      if (*pcVar2 == '\0') {
        *pcVar2 = (char)param_3;
      }
      else {
        *(char *)(iVar1 + 1) = *pcVar2;
        *pcVar2 = (char)param_3;
      }
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100023bc,0x68,PTR_s_ph_get_node_100023b8,
                 PTR_s_id____id____heap__max_nodes_100023b4);
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100023bc,0x70,PTR_s_ph_add_child_node_100023c4
               ,PTR_s_child_id_100023c8);
}



int FUN_100023d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  if ((param_2 != 0) && (iVar2 = param_2, param_3 != 0)) {
    iVar1 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      FUN_1000232c(param_1,param_3,param_2);
      iVar2 = param_3;
    }
    else {
      FUN_1000232c(param_1,param_2,param_3);
    }
  }
  return iVar2;
}



void FUN_10002410(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined *)((int)param_1 + 0xd) = 0;
  *(undefined *)((int)param_1 + 0xe) = 1;
  *(undefined *)((int)param_1 + 0xf) = *(undefined *)(param_1 + 3);
  uVar3 = 1;
  while( true ) {
    uVar2 = (uint)*(byte *)(param_1 + 3);
    if (uVar2 <= uVar3) {
      if (uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000247c,0x68,PTR_s_ph_get_node_10002478
                     ,PTR_s_id____id____heap__max_nodes_10002474);
      }
      *(undefined *)(*param_1 + uVar2 * 3 + -2) = 0;
      return;
    }
    if ((uVar3 == 0) || (*(byte *)(param_1 + 3) < uVar3)) break;
    iVar1 = uVar3 * 3;
    uVar3 = uVar3 + 1 & 0xff;
    *(char *)(iVar1 + *param_1 + -2) = (char)uVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000247c,0x68,PTR_s_ph_get_node_10002478,
               PTR_s_id____id____heap__max_nodes_10002474);
}



void FUN_10002480(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  FUN_10002410();
  return;
}



void FUN_10002490(int *param_1,uint param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    if ((param_2 == 0) || (*(byte *)(param_1 + 3) < param_2)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002534,0x68,PTR_s_ph_get_node_10002530,
                   PTR_s_id____id____heap__max_nodes_1000252c);
    }
    uVar4 = (uint)*(byte *)(param_2 * 3 + *param_1 + -2);
    if (uVar4 != 0) {
      if ((uVar4 == 0) || (*(byte *)(param_1 + 3) < uVar4)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002534,0x68,PTR_s_ph_get_node_10002530
                     ,PTR_s_id____id____heap__max_nodes_1000252c);
      }
      iVar5 = uVar4 * 3 + -3 + *param_1;
      uVar1 = *(undefined *)(iVar5 + 1);
      *(undefined *)(iVar5 + 1) = 0;
      if ((param_2 == 0) || (*(byte *)(param_1 + 3) < param_2)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002534,0x68,PTR_s_ph_get_node_10002530
                     ,PTR_s_id____id____heap__max_nodes_1000252c);
      }
      *(undefined *)(param_2 * 3 + *param_1 + -2) = 0;
      uVar2 = FUN_100023d0(param_1,param_2);
      uVar3 = FUN_10002490(param_1,uVar1);
      FUN_100023d0(param_1,uVar2,uVar3);
    }
  }
  return;
}



void FUN_10002538(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002628,0x38,
                 PTR_s_ph_remove_any_head_10002624,PTR_s_root_id_10002620);
  }
  if ((param_2 == 0) || (*(byte *)(param_1 + 3) < param_2)) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002634,0x68,PTR_s_ph_get_node_10002630,
                 PTR_s_id____id____heap__max_nodes_1000262c);
  }
  puVar3 = (undefined *)(param_2 * 3 + -3 + *param_1);
  if (puVar3[1] != '\0') {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002628,0x3a,
                 PTR_s_ph_remove_any_head_10002624,PTR_s__ph_get_node_heap__root_id___sib_10002638);
  }
  if (puVar3[2] == '\0') {
    uVar1 = FUN_10002490(param_1,*puVar3);
    if (param_3 != 0) {
      uVar2 = (uint)*(byte *)((int)param_1 + 0xf);
      if (uVar2 != 0) {
        if ((uVar2 == 0) || (*(byte *)(param_1 + 3) < uVar2)) {
                    // WARNING: Subroutine does not return
          FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002634,0x68,
                       PTR_s_ph_get_node_10002630,PTR_s_id____id____heap__max_nodes_1000262c);
        }
        *(char *)(uVar2 * 3 + *param_1 + -2) = (char)param_2;
      }
      *(char *)((int)param_1 + 0xf) = (char)param_2;
    }
    if (uVar1 != 0) {
      if ((uVar1 == 0) || (*(byte *)(param_1 + 3) < uVar1)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002634,0x68,PTR_s_ph_get_node_10002630
                     ,PTR_s_id____id____heap__max_nodes_1000262c);
      }
      *(undefined *)(uVar1 * 3 + *param_1 + -1) = 0;
    }
    if ((param_2 != 0) && (param_2 <= *(byte *)(param_1 + 3))) {
      *(undefined *)(*param_1 + param_2 * 3 + -2) = 0;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002634,0x68,PTR_s_ph_get_node_10002630,
                 PTR_s_id____id____heap__max_nodes_1000262c);
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002628,0x3b,
               PTR_s_ph_remove_any_head_10002624,PTR_s__ph_get_node_heap__root_id___par_1000263c);
}



undefined FUN_10002640(int param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined uVar2;
  
  uVar1 = *(undefined *)(param_1 + 0xd);
  uVar2 = FUN_10002538(param_1,uVar1,param_2);
  *(undefined *)(param_1 + 0xd) = uVar2;
  return uVar1;
}



undefined4 FUN_10002654(int *param_1,uint param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else if (*(byte *)((int)param_1 + 0xd) == param_2) {
    FUN_10002640(param_1,1);
    uVar3 = 1;
  }
  else {
    if ((param_2 == 0) || (*(byte *)(param_1 + 3) < param_2)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002738,0x68,PTR_s_ph_get_node_10002734,
                   PTR_s_id____id____heap__max_nodes_10002730);
    }
    iVar2 = *param_1 + param_2 * 3 + -3;
    uVar4 = (uint)*(byte *)(iVar2 + 2);
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    else {
      if ((uVar4 == 0) || (*(byte *)(param_1 + 3) < uVar4)) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002738,0x68,PTR_s_ph_get_node_10002734
                     ,PTR_s_id____id____heap__max_nodes_10002730);
      }
      iVar5 = uVar4 * 3 + -3;
      uVar4 = (uint)*(byte *)(*param_1 + iVar5);
      if (uVar4 == param_2) {
        *(undefined *)(*param_1 + iVar5) = *(undefined *)(iVar2 + 1);
      }
      else {
        while( true ) {
          if ((uVar4 == 0) || (*(byte *)(param_1 + 3) < uVar4)) {
                    // WARNING: Subroutine does not return
            FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002738,0x68,
                         PTR_s_ph_get_node_10002734,PTR_s_id____id____heap__max_nodes_10002730);
          }
          iVar5 = *param_1 + uVar4 * 3 + -3;
          uVar4 = (uint)*(byte *)(iVar5 + 1);
          if (uVar4 == param_2) break;
          if (uVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002744,0x67,
                         PTR_s_ph_remove_and_free_node_10002740,PTR_s_found_1000273c);
          }
        }
        *(undefined *)(iVar5 + 1) = *(undefined *)(iVar2 + 1);
      }
      *(undefined *)(iVar2 + 2) = 0;
      *(undefined *)(iVar2 + 1) = 0;
      uVar4 = FUN_10002538(param_1,param_2,1);
      if (*(byte *)((int)param_1 + 0xd) == uVar4) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002744,0x6d,
                     PTR_s_ph_remove_and_free_node_10002740,
                     PTR_s_new_sub_tree____heap__root_id_10002748);
      }
      uVar1 = FUN_100023d0(param_1,(uint)*(byte *)((int)param_1 + 0xd),uVar4);
      *(undefined *)((int)param_1 + 0xd) = uVar1;
      uVar3 = 1;
    }
  }
  return uVar3;
}



void FUN_1000274c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100010d4();
  FUN_10001520(param_1,uVar1);
  *(undefined *)(param_1 + 4) = 0xff;
  DataMemoryBarrier(0x1f);
  return;
}



void FUN_10002766(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100010d4();
  FUN_10001520(param_1,uVar1);
  *(undefined *)(param_1 + 4) = 0xff;
  *(undefined *)(param_1 + 5) = 0;
  DataMemoryBarrier(0x1f);
  return;
}



void FUN_10002784(int *param_1,int param_2)

{
  *param_1 = (param_2 + DAT_10002794) * 4;
  DataMemoryBarrier(0x1f);
  return;
}



void FUN_10002798(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100010f0(1);
  FUN_10002784(param_1,uVar1);
  return;
}



void FUN_100027ac(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_10002c44(6);
  uVar2 = FUN_100040e0(iVar1 << 3,param_2);
  uVar4 = uVar2 >> 7;
  if (uVar4 == 0) {
    uVar3 = 1;
  }
  else if (DAT_10002800 < uVar4) {
    uVar4 = 0;
    uVar3 = DAT_10002804;
  }
  else {
    uVar3 = uVar4;
    uVar4 = (uVar2 & 0x7f) + 1 >> 1;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  *(uint *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2cU | 0x2000) = 0;
  iVar1 = FUN_10002c44(6);
  FUN_100040e0(iVar1 << 2,uVar3 * 0x40 + uVar4);
  return;
}



void FUN_10002808(int param_1,int param_2)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x100;
  }
  else {
    uVar1 = 10;
  }
  *(undefined2 *)((uint)(param_1 + DAT_10002828 == 0) * 2 + DAT_1000282c) = uVar1;
  return;
}



void FUN_10002830(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10002c44(6);
  if (iVar1 != 0) {
    if (param_1 == DAT_1000289c) {
      uVar2 = 0x800000;
    }
    else {
      uVar2 = 0x400000;
    }
    *DAT_100028a0 = uVar2;
    *DAT_100028a4 = uVar2;
    do {
    } while ((uVar2 & ~*(uint *)(DAT_100028a8 + 8)) != 0);
    FUN_10002808(param_1,0);
    FUN_100027ac(param_1,param_2);
    *(uint *)(param_1 + 0x2cU | 0x1000) = (*(uint *)(param_1 + 0x2c) ^ 0x60) & 0x6e;
    *(undefined4 *)(param_1 + 0x30) = DAT_100028ac;
    *(undefined4 *)(param_1 + 0x2cU | 0x2000) = 0x10;
    *(undefined4 *)(param_1 + 0x48) = 3;
  }
  return;
}



undefined4 FUN_100028b0(int param_1,uint param_2)

{
  do {
    if (-1 < *(int *)(param_1 + 0x18) << 0x1b) {
      return 1;
    }
  } while ((uint)(*(int *)(DAT_100028cc + 0x28) - *(int *)(DAT_100028cc + 0x28)) <= param_2);
  return 0;
}



void FUN_100028d0(void)

{
  software_bkpt(0);
  FUN_100028d0();
  return;
}



void FUN_100028d4(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_100028d0();
  uVar4 = uVar3 & 0xffffffff | (ulonglong)param_4 << 0x20;
  puVar1 = param_3;
  puVar2 = PTR_s___function__1000290c;
  if (param_3 == (undefined *)0x0) goto LAB_10002902;
  do {
    param_3 = (undefined *)uVar4;
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_s__10002914;
    }
    FUN_1000520c(PTR_s_assertion___s__failed__file___s__10002910,(int)(uVar4 >> 0x20),param_3,
                 (int)(uVar3 >> 0x20),puVar2,puVar1);
    uVar4 = FUN_100028d0(1);
LAB_10002902:
    puVar1 = param_3;
    puVar2 = PTR_s__10002914;
  } while( true );
}



void FUN_100028dc(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_4,param_1);
  puVar1 = param_3;
  puVar2 = PTR_s___function__1000290c;
  if (param_3 == (undefined *)0x0) goto LAB_10002902;
  do {
    param_3 = (undefined *)uVar3;
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_s__10002914;
    }
    FUN_1000520c(PTR_s_assertion___s__failed__file___s__10002910,(int)((ulonglong)uVar3 >> 0x20),
                 param_3,param_2,puVar2,puVar1);
    uVar3 = FUN_100028d0(1);
LAB_10002902:
    puVar1 = param_3;
    puVar2 = PTR_s__10002914;
  } while( true );
}



void FUN_10002918(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code **ppcVar4;
  
  *DAT_100029c8 = DAT_100029cc;
  *DAT_100029d0 = DAT_100029d4;
  do {
    ppcVar4 = DAT_100029dc;
  } while ((DAT_100029d4 & ~*(uint *)(DAT_100029d8 + 8)) != 0);
  for (; ppcVar4 < DAT_100029e0; ppcVar4 = ppcVar4 + 1) {
    (**ppcVar4)();
  }
  FUN_10002b44();
  *DAT_100029d0 = DAT_100029e4;
  iVar2 = DAT_100029e8;
  do {
  } while ((~*(uint *)(DAT_100029d8 + 8) & 0x1ffffff) != 0);
  *(undefined4 *)(DAT_100029e8 + 0x78) = 0x40;
  *(undefined4 *)(iVar2 + 0x74) = 0x40;
  *(undefined4 *)(iVar2 + 0x70) = 0x40;
  *(undefined4 *)(iVar2 + 0x6c) = 0x40;
  piVar3 = DAT_100029ec;
  while( true ) {
    while( true ) {
      uVar1 = DAT_10002a04;
      iVar2 = DAT_10002a00;
      if (DAT_100029fc <= piVar3) {
        FUN_10004ee8(DAT_10002a04,*(undefined4 *)(DAT_10002a00 + 8),0xc0);
        *(undefined4 *)(iVar2 + 8) = uVar1;
        iVar2 = FUN_10000266();
        if (iVar2 != 0) {
          software_bkpt(0);
        }
        FUN_100010b4();
        FUN_10001504();
        FUN_10001b9c();
        for (ppcVar4 = DAT_10002a08; ppcVar4 < DAT_10002a0c; ppcVar4 = ppcVar4 + 1) {
          (**ppcVar4)();
        }
        return;
      }
      if (*piVar3 != 0) break;
      FUN_1000274c(piVar3);
      piVar3 = piVar3 + 2;
    }
    if (*piVar3 != 1) break;
    FUN_10002766(piVar3);
    piVar3 = piVar3 + 2;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100029f8,0x83,PTR_s_runtime_init_100029f4,
               PTR_s_1_____uintptr_t_l__spin_lock_100029f0);
}



// WARNING: Control flow encountered bad instruction data

void FUN_10002a10(int param_1)

{
  FUN_100051a8(PTR_s______PANIC_____10002a38);
  if (param_1 != 0) {
    FUN_100051c8(param_1);
    FUN_100051a8(PTR_DAT_10002a3c);
  }
  FUN_100028d0(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_10002a40(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  
  if (param_4 < param_5) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002b40,0x2d,PTR_s_clock_configure_10002b3c
                 ,PTR_s_src_freq____freq_10002b38);
  }
  uVar1 = FUN_10004164(param_4 << 8,param_4 >> 0x18,param_5,0);
  puVar5 = (uint *)(param_1 * 0xc + DAT_10002b30);
  if (puVar5[1] < uVar1) {
    puVar5[1] = uVar1;
  }
  uVar4 = param_1 - 4U & 0xff;
  if ((uVar4 < 2) && (param_2 == 1)) {
    *(undefined4 *)((uint)puVar5 | 0x3000) = 3;
    do {
    } while (-1 < (int)(puVar5[2] << 0x1f));
  }
  else {
    *(undefined4 *)((uint)puVar5 | 0x3000) = 0x800;
    if (*(int *)(param_1 * 4 + DAT_10002b34) != 0) {
      iVar2 = FUN_100040e0(*(undefined4 *)(DAT_10002b34 + 0x14));
      iVar2 = iVar2 + 1;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  *(uint *)((uint)puVar5 | 0x1000) = (param_3 << 5 ^ *puVar5) & 0xe0;
  if (uVar4 < 2) {
    *(uint *)((uint)puVar5 | 0x1000) = (*puVar5 ^ param_2) & 3;
    do {
    } while ((1 << (param_2 & 0xff) & puVar5[2]) == 0);
  }
  *(undefined4 *)((uint)puVar5 | 0x2000) = 0x800;
  puVar5[1] = uVar1;
  uVar3 = FUN_10004164(param_4 << 8,param_4 >> 0x18,uVar1,0);
  *(undefined4 *)(DAT_10002b34 + param_1 * 4) = uVar3;
  return 1;
}



void FUN_10002b44(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_10002d90(0xc);
  iVar3 = FUN_100010a0();
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_10002c20 + 0x78) = 0;
    FUN_10002e74();
    *DAT_10002c24 = 1;
    do {
    } while (*(int *)(DAT_10002c20 + 0x44) != 1);
    *DAT_10002c28 = 3;
    do {
    } while (*(int *)(DAT_10002c20 + 0x38) != 1);
    FUN_10002c50(DAT_10002c30,1,DAT_10002c2c,6,2);
    FUN_10002c50(DAT_10002c38,1,DAT_10002c34,5,5);
    FUN_10002a40(4,2,0,DAT_10002c3c,DAT_10002c3c);
    uVar2 = DAT_10002c40;
    FUN_10002a40(5,1,0,DAT_10002c40,DAT_10002c40);
    uVar1 = DAT_10002c18;
    FUN_10002a40(7,0,0,DAT_10002c18,DAT_10002c18);
    FUN_10002a40(8,0,0,uVar1,uVar1);
    FUN_10002a40(9,0,0,uVar1,DAT_10002c1c);
    FUN_10002a40(6,0,0,uVar2,uVar2);
  }
  else {
    for (uVar4 = 0; uVar4 < 10; uVar4 = uVar4 + 1) {
      *(undefined4 *)(uVar4 * 4 + DAT_10002c14) = DAT_10002c18;
    }
    *(undefined4 *)(DAT_10002c14 + 0x24) = DAT_10002c1c;
  }
  return;
}



undefined4 FUN_10002c44(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + DAT_10002c4c);
}



void FUN_10002c50(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_100040e0(0xc);
  if (DAT_10002d60 < DAT_10002d5c + param_3) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002d7c,0x11,PTR_s_pll_init_10002d78,
                 PTR_s_vco_freq_____PICO_PLL_VCO_MIN_FR_10002d74);
  }
  uVar2 = FUN_100040e0(param_3,uVar1 * 1000000);
  if (0x130 < uVar2 - 0x10) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002d7c,0x19,PTR_s_pll_init_10002d78,
                 PTR_s_fbdiv____16____fbdiv____320_10002d80);
  }
  if ((6 < param_4 - 1) || (6 < param_5 - 1)) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002d7c,0x1c,PTR_s_pll_init_10002d78,
                 PTR_s__post_div1____1____post_div1____7_10002d84);
  }
  if (param_4 < param_5) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002d7c,0x22,PTR_s_pll_init_10002d78,
                 PTR_s_post_div2____post_div1_10002d88);
  }
  if (param_3 >> 4 < uVar1) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10002d7c,0x25,PTR_s_pll_init_10002d78,
                 PTR_s_ref_mhz_____vco_freq___16__10002d8c);
  }
  uVar1 = param_4 << 0x10 | param_5 << 0xc;
  if ((((-1 < (int)*param_1) || ((*param_1 & 0x3f) != param_2)) || ((param_1[2] & 0xfff) != uVar2))
     || ((param_1[3] & 0x77000) != uVar1)) {
    if (param_1 == DAT_10002d64) {
      uVar3 = 0x2000;
    }
    else {
      uVar3 = 0x1000;
    }
    *DAT_10002d68 = uVar3;
    *DAT_10002d6c = uVar3;
    do {
    } while ((uVar3 & ~*(uint *)(DAT_10002d70 + 8)) != 0);
    *param_1 = param_2;
    param_1[2] = uVar2;
    *(undefined4 *)((uint)(param_1 + 1) | 0x3000) = 0x21;
    do {
    } while (-1 < (int)*param_1);
    param_1[3] = uVar1;
    *(undefined4 *)((uint)(param_1 + 1) | 0x3000) = 8;
  }
  return;
}



void FUN_10002d90(uint param_1)

{
  *(uint *)(DAT_10002d9c + 0x2c) = param_1 | 0x200;
  return;
}



void FUN_10002da0(void)

{
  *(undefined4 *)(DAT_10002db0 + 4) = *DAT_10002dac;
  return;
}



void FUN_10002db4(int param_1,int param_2)

{
  *DAT_10002e14 = 0x40000000;
  *DAT_10002e18 = DAT_10002e1c;
  if (param_2 == 0) {
    *DAT_10002e14 = 0x7000000;
  }
  else {
    *DAT_10002e20 = 0x7000000;
  }
  if (param_1 == 0) {
    *DAT_10002e20 = 0x80000000;
  }
  else {
    *DAT_10002e24 = param_1 * 2000;
    if (0xffffff < (uint)(param_1 * 2000)) {
      *DAT_10002e24 = DAT_10002e28;
    }
    FUN_10002da0();
    *DAT_10002e20 = 0x40000000;
  }
  return;
}



void FUN_10002e2c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *DAT_10002e64 = 0x40000000;
  iVar1 = DAT_10002e68;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_10002e68 + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(DAT_10002e68 + 0x1c) = DAT_10002e6c;
    *(uint *)(iVar1 + 0x20) = DAT_10002e70 ^ (param_1 | 1);
    *(undefined4 *)(iVar1 + 0x24) = param_2;
    *(uint *)(iVar1 + 0x28) = param_1 | 1;
  }
  FUN_10002db4(param_3,0);
  return;
}



void FUN_10002e74(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_10002e90;
  *DAT_10002e90 = 0xaa0;
  puVar1[3] = 0x2f;
  *DAT_10002e94 = DAT_10002e98;
  do {
  } while (-1 < (int)DAT_10002e90[1]);
  return;
}



void FUN_10002ea4(void)

{
  return;
}



void FUN_10002ea6(int param_1,code **param_2)

{
  if (param_1 != 0) {
    (**param_2)(param_1,param_2[1]);
  }
  return;
}



int FUN_10002eb4(byte **param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  while (pbVar2 = *param_1, (byte)(*pbVar2 - 0x30) < 10) {
    *param_1 = pbVar2 + 1;
    iVar1 = (uint)*pbVar2 + iVar1 * 10 + -0x30;
  }
  return iVar1;
}



int FUN_10002ed8(code *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3;
  uVar1 = param_6;
  if ((param_8 & 3) == 0) {
    for (; uVar1 < param_7; uVar1 = uVar1 + 1) {
      (*param_1)(0x20,param_2,iVar2,param_4);
      iVar2 = iVar2 + 1;
    }
  }
  while (param_6 != 0) {
    param_6 = param_6 - 1;
    (*param_1)(*(undefined *)(param_5 + param_6),param_2,iVar2,param_4);
    iVar2 = iVar2 + 1;
  }
  if ((int)(param_8 << 0x1e) < 0) {
    for (; (uint)(iVar2 - param_3) < param_7; iVar2 = iVar2 + 1) {
      (*param_1)(0x20,param_2,iVar2,param_4);
    }
  }
  return iVar2;
}



void FUN_10002f86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,uint param_6,char param_7,int param_8,uint param_9,uint param_10,
                 uint param_11)

{
  uint uVar1;
  
  if (-1 < (int)(param_11 << 0x1e)) {
    if (((param_10 != 0) && ((int)(param_11 << 0x1f) < 0)) &&
       ((param_7 != '\0' || ((param_11 & 0xc) != 0)))) {
      param_10 = param_10 - 1;
    }
    for (; (param_6 < param_9 && (param_6 < 0x20)); param_6 = param_6 + 1) {
      *(undefined *)(param_5 + param_6) = 0x30;
    }
    for (; (((int)(param_11 << 0x1f) < 0 && (param_6 < param_10)) && (param_6 < 0x20));
        param_6 = param_6 + 1) {
      *(undefined *)(param_5 + param_6) = 0x30;
    }
  }
  uVar1 = param_6;
  if ((int)(param_11 << 0x1b) < 0) {
    if ((((-1 < (int)(param_11 << 0x15)) && (param_6 != 0)) &&
        ((param_6 == param_9 || (param_6 == param_10)))) &&
       ((uVar1 = param_6 - 1, param_6 != 1 && (param_8 == 0x10)))) {
      uVar1 = param_6 - 2;
    }
    if (((param_8 == 0x10) && (-1 < (int)(param_11 << 0x1a))) && (uVar1 < 0x20)) {
      *(undefined *)(param_5 + uVar1) = 0x78;
      uVar1 = uVar1 + 1;
    }
    else if (((param_8 == 0x10) && ((int)(param_11 << 0x1a) < 0)) && (uVar1 < 0x20)) {
      *(undefined *)(param_5 + uVar1) = 0x58;
      uVar1 = uVar1 + 1;
    }
    else if ((param_8 == 2) && (uVar1 < 0x20)) {
      *(undefined *)(param_5 + uVar1) = 0x62;
      uVar1 = uVar1 + 1;
    }
    if (uVar1 < 0x20) {
      *(undefined *)(param_5 + uVar1) = 0x30;
      uVar1 = uVar1 + 1;
    }
  }
  if (uVar1 < 0x20) {
    if (param_7 == '\0') {
      if ((int)(param_11 << 0x1d) < 0) {
        *(undefined *)(param_5 + uVar1) = 0x2b;
        uVar1 = uVar1 + 1;
      }
      else if ((int)(param_11 << 0x1c) < 0) {
        *(undefined *)(param_5 + uVar1) = 0x20;
        uVar1 = uVar1 + 1;
      }
    }
    else {
      *(undefined *)(param_5 + uVar1) = 0x2d;
      uVar1 = uVar1 + 1;
    }
  }
  FUN_10002ed8(param_1,param_2,param_3,param_4,param_5,uVar1,param_10,param_11);
  return;
}



void FUN_10003098(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined param_6,uint param_7,undefined4 param_8,undefined4 param_9,
                 uint param_10)

{
  uint uVar1;
  byte extraout_r1;
  char cVar2;
  uint uVar3;
  char local_48 [36];
  
  if (param_5 == 0) {
    param_10 = param_10 & 0xffffffef;
  }
  uVar3 = param_5;
  uVar1 = param_10 & 0x400;
  if ((param_10 & 0x400) != 0) {
    if (param_5 == 0) goto LAB_10003122;
    uVar1 = 0;
  }
  do {
    FUN_100040e0(uVar3,param_7);
    if (extraout_r1 < 10) {
      cVar2 = extraout_r1 + 0x30;
    }
    else {
      if ((int)(param_10 << 0x1a) < 0) {
        cVar2 = 'A';
      }
      else {
        cVar2 = 'a';
      }
      cVar2 = cVar2 + extraout_r1 + -10;
    }
    param_5 = uVar1 + 1;
    local_48[uVar1] = cVar2;
    uVar1 = FUN_100040e0(uVar3,param_7);
  } while ((param_7 <= uVar3) && (uVar3 = uVar1, uVar1 = param_5, param_5 < 0x20));
LAB_10003122:
  FUN_10002f86(param_1,param_2,param_3,param_4,local_48,param_5,param_6,param_7,param_8,param_9,
               param_10);
  return;
}



void FUN_10003154(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6,undefined param_7,undefined4 param_8,uint param_9,
                 uint param_10,undefined4 param_11,undefined4 param_12,uint param_13)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char local_48 [36];
  
  if ((param_5 | param_6) == 0) {
    param_13 = param_13 & 0xffffffef;
  }
  uVar6 = param_13 & 0x400;
  uVar7 = CONCAT44(param_6,param_5);
  if ((param_13 & 0x400) != 0) {
    if ((param_5 | param_6) == 0) {
      uVar3 = 0;
      goto LAB_10003200;
    }
    uVar6 = 0;
    uVar7 = CONCAT44(param_6,param_5);
  }
  do {
    uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar5 = (uint)uVar7;
    uVar3 = param_9;
    FUN_10004164(uVar5,uVar4,param_9,param_10);
    cVar1 = (char)(uVar3 & 0xff);
    if ((uVar3 & 0xff) < 10) {
      cVar1 = cVar1 + '0';
    }
    else {
      if ((int)(param_13 << 0x1a) < 0) {
        cVar2 = 'A';
      }
      else {
        cVar2 = 'a';
      }
      cVar1 = cVar2 + cVar1 + -10;
    }
    uVar3 = uVar6 + 1;
    local_48[uVar6] = cVar1;
    uVar7 = FUN_10004164(uVar5,uVar4,param_9,param_10);
  } while ((param_10 < uVar4 || param_10 == uVar4) &&
          (((param_10 != uVar4 || (param_9 <= uVar5)) && (uVar6 = uVar3, uVar3 < 0x20))));
LAB_10003200:
  FUN_10002f86(param_1,param_2,param_3,param_4,local_48,uVar3,param_7,param_9,param_11,param_12,
               param_13);
  return;
}



int FUN_10003238(code *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                uint param_6,int param_7,uint param_8,uint param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_50;
  uint local_4c;
  
  iVar1 = FUN_10004682(param_5,param_6,param_5,param_6);
  if (((iVar1 == 0) && (iVar1 = FUN_10004678(param_5,param_6,0xffffffff,DAT_100035cc), iVar1 == 0))
     && (iVar1 = FUN_1000464c(param_5,param_6,0xffffffff,DAT_100035d0), iVar1 == 0)) {
    iVar1 = FUN_1000464c(param_5,param_6,0,0);
    if (iVar1 == 0) {
      local_4c = param_6;
    }
    else {
      local_4c = param_6 + 0x80000000;
    }
    uVar14 = CONCAT44(local_4c,param_5);
    if ((param_9 & 0x400) == 0) {
      param_7 = 6;
    }
    if ((local_4c | param_5) == 0) {
      uVar10 = 0;
      uVar6 = param_5;
      uVar7 = local_4c;
    }
    else {
      uVar6 = DAT_100035d8 | local_4c & 0xfffff;
      uVar11 = FUN_100046a8((local_4c >> 0x14 & 0x7ff) + DAT_100035d4);
      uVar11 = FUN_100045c6((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_100035dc,DAT_100035e0);
      uVar11 = FUN_10004578((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_100035e4,DAT_100035e8);
      uVar12 = FUN_10004566(param_5,uVar6,0,DAT_100035ec);
      uVar12 = FUN_100045c6((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_100035f0,DAT_100035f4);
      FUN_10004578((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                   (int)((ulonglong)uVar12 >> 0x20));
      uVar10 = FUN_100046d8();
      uVar11 = FUN_100046a8();
      uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar12 = FUN_100045c6((int)uVar11,uVar8,DAT_100035f8,DAT_100035fc);
      FUN_10004578((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,DAT_10003600);
      iVar1 = FUN_100046d8();
      uVar11 = FUN_100045c6((int)uVar11,uVar8,DAT_10003604,DAT_10003608);
      uVar12 = FUN_100046a8(iVar1);
      uVar12 = FUN_100045c6((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_1000360c,DAT_10003610);
      uVar11 = FUN_10004566((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                            (int)((ulonglong)uVar12 >> 0x20));
      uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar8 = (undefined4)uVar11;
      uVar11 = FUN_100045c6(uVar8,uVar4,uVar8,uVar4);
      uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar2 = (undefined4)uVar11;
      iVar1 = iVar1 + DAT_10003614;
      uVar11 = FUN_10004578(uVar8,uVar4,uVar8,uVar4);
      uVar12 = FUN_10004566(0,0x40000000,uVar8,uVar4);
      uVar13 = FUN_1000458a(uVar2,uVar5,0,DAT_10003618);
      uVar13 = FUN_10004578((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,DAT_1000361c);
      uVar13 = FUN_1000458a(uVar2,uVar5,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      uVar13 = FUN_10004578((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,DAT_10003620);
      uVar13 = FUN_1000458a(uVar2,uVar5,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      uVar12 = FUN_10004578((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                            (int)((ulonglong)uVar13 >> 0x20));
      uVar11 = FUN_1000458a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                            (int)((ulonglong)uVar12 >> 0x20));
      uVar11 = FUN_10004578((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,DAT_100035d8);
      uVar11 = FUN_100045c6((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,iVar1 * 0x100000);
      uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
      uVar6 = (uint)uVar11;
      iVar1 = FUN_10004678(uVar6,uVar7,param_5,local_4c);
      if (iVar1 != 0) {
        uVar10 = uVar10 - 1;
        uVar11 = FUN_1000458a(uVar6,uVar7,0,DAT_1000361c);
        uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
        uVar6 = (uint)uVar11;
      }
    }
    if (uVar10 + 99 < 199) {
      uVar9 = 4;
    }
    else {
      uVar9 = 5;
    }
    if ((int)(param_9 << 0x14) < 0) {
      if (((uVar7 | uVar6) == 0) ||
         ((iVar1 = FUN_10004668(param_5,local_4c,DAT_10003624,DAT_10003628), iVar1 != 0 &&
          (iVar1 = FUN_1000464c(param_5,local_4c,0,DAT_1000362c), iVar1 != 0)))) {
        if ((int)uVar10 < param_7) {
          param_7 = (param_7 - uVar10) + -1;
        }
        else {
          param_7 = 0;
        }
        param_9 = param_9 | 0x400;
        uVar9 = 0;
        uVar10 = 0;
      }
      else if ((param_7 != 0) && ((param_9 & 0x400) != 0)) {
        param_7 = param_7 + -1;
      }
    }
    if (uVar9 < param_8) {
      iVar1 = param_8 - uVar9;
    }
    else {
      iVar1 = 0;
    }
    if (((param_9 & 2) != 0) && (uVar9 != 0)) {
      iVar1 = 0;
    }
    if (uVar10 != 0) {
      uVar14 = FUN_1000458a(param_5,local_4c,uVar6,uVar7);
    }
    local_4c = (uint)((ulonglong)uVar14 >> 0x20);
    local_50 = (undefined4)uVar14;
    iVar3 = FUN_1000464c(param_5,param_6,0,0);
    if (iVar3 != 0) {
      local_4c = local_4c + -0x80000000;
    }
    iVar1 = FUN_1000364c(param_1,param_2,param_3,param_4,local_50,local_4c,param_7,iVar1,
                         DAT_10003630 & param_9);
    if (uVar9 != 0) {
      if ((int)(param_9 << 0x1a) < 0) {
        uVar8 = 0x45;
      }
      else {
        uVar8 = 0x65;
      }
      (*param_1)(uVar8,param_2,iVar1,param_4);
      iVar1 = FUN_10003098(param_1,param_2,iVar1 + 1,param_4,
                           uVar10 + ((int)uVar10 >> 0x1f) ^ (int)uVar10 >> 0x1f,uVar10 >> 0x1f,10,0,
                           uVar9 - 1,5);
      if ((param_9 & 2) != 0) {
        for (; (uint)(iVar1 - param_3) < param_8; iVar1 = iVar1 + 1) {
          (*param_1)(0x20,param_2,iVar1,param_4);
        }
      }
    }
  }
  else {
    iVar1 = FUN_1000364c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return iVar1;
}



void FUN_1000364c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,uint param_8,uint param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char extraout_r1;
  char extraout_r1_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char local_48 [36];
  
  uVar13 = CONCAT44(param_6,param_5);
  iVar2 = FUN_10004682(param_5,param_6);
  if (iVar2 == 0) {
    iVar2 = FUN_1000464c(param_5,param_6,0xffffffff,DAT_10003978);
    if (iVar2 == 0) {
      iVar2 = FUN_10004678(param_5,param_6,0xffffffff,DAT_1000397c);
      if (iVar2 == 0) {
        iVar2 = FUN_10004678(param_5,param_6,0,DAT_10003980);
        if ((iVar2 == 0) && (iVar2 = FUN_1000464c(param_5,param_6,0,DAT_10003984), iVar2 == 0)) {
          iVar2 = FUN_1000464c(param_5,param_6,0,0);
          bVar12 = iVar2 != 0;
          if (bVar12) {
            uVar13 = FUN_10004566(0,0,param_5,param_6);
          }
          param_6 = (undefined4)((ulonglong)uVar13 >> 0x20);
          param_5 = (undefined4)uVar13;
          if (-1 < (int)(param_9 << 0x15)) {
            param_7 = 6;
          }
          uVar10 = 0;
          for (; (uVar10 < 0x20 && (9 < param_7)); param_7 = param_7 - 1) {
            local_48[uVar10] = '0';
            uVar10 = uVar10 + 1;
          }
          iVar3 = FUN_100046d8(param_5,param_6);
          uVar13 = FUN_100046a8();
          FUN_10004566(param_5,param_6,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
          uVar7 = *(undefined4 *)(PTR_DAT_10003998 + param_7 * 8);
          uVar9 = *(undefined4 *)((int)(PTR_DAT_10003998 + param_7 * 8) + 4);
          uVar13 = FUN_100045c6();
          uVar4 = FUN_10004720();
          uVar14 = FUN_100046a0();
          uVar13 = FUN_10004566((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                                (int)((ulonglong)uVar14 >> 0x20));
          uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
          iVar2 = FUN_10004678((int)uVar13,uVar6,0,DAT_1000399c);
          if (iVar2 == 0) {
            iVar2 = FUN_1000464c((int)uVar13,uVar6,0,DAT_1000399c);
            if ((iVar2 == 0) && ((uVar4 == 0 || ((int)(uVar4 << 0x1f) < 0)))) {
              uVar4 = uVar4 + 1;
            }
          }
          else {
            uVar4 = uVar4 + 1;
            uVar13 = FUN_100046a0(uVar4);
            iVar2 = FUN_10004658(uVar7,uVar9,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              uVar4 = 0;
            }
          }
          if (param_7 == 0) {
            uVar13 = FUN_100046a8(iVar3);
            uVar13 = FUN_10004566(param_5,param_6,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
            iVar2 = FUN_1000464c((int)uVar13,uVar6,0,DAT_1000399c);
            if (((iVar2 == 0) &&
                (iVar2 = FUN_10004678((int)uVar13,uVar6,0,DAT_1000399c), iVar2 == 0)) &&
               (iVar3 << 0x1f < 0)) {
              iVar3 = iVar3 + 1;
            }
          }
          else {
            do {
              if (0x1f < uVar10) break;
              param_7 = param_7 - 1;
              FUN_100040e0(uVar4,10);
              uVar11 = uVar10 + 1;
              local_48[uVar10] = extraout_r1 + '0';
              uVar5 = FUN_100040e0(uVar4,10);
              bVar1 = 9 < uVar4;
              uVar10 = uVar11;
              uVar4 = uVar5;
            } while (bVar1);
            while ((uVar10 < 0x20 && (param_7 != 0))) {
              local_48[uVar10] = '0';
              uVar10 = uVar10 + 1;
              param_7 = param_7 - 1;
            }
            if (uVar10 < 0x20) {
              local_48[uVar10] = '.';
              uVar10 = uVar10 + 1;
            }
          }
          do {
            uVar4 = uVar10;
            if (0x1f < uVar10) break;
            FUN_10004090(iVar3,10);
            uVar4 = uVar10 + 1;
            local_48[uVar10] = extraout_r1_00 + '0';
            iVar3 = FUN_10004090(iVar3,10);
            uVar10 = uVar4;
          } while (iVar3 != 0);
          if ((param_9 & 3) == 1) {
            uVar10 = param_8;
            if ((param_8 != 0) && ((bVar12 || ((param_9 & 0xc) != 0)))) {
              param_8 = param_8 - 1;
              uVar10 = param_8;
            }
            for (; (uVar4 < uVar10 && (uVar4 < 0x20)); uVar4 = uVar4 + 1) {
              local_48[uVar4] = '0';
            }
          }
          if (uVar4 < 0x20) {
            if (bVar12) {
              local_48[uVar4] = '-';
              uVar4 = uVar4 + 1;
            }
            else if ((int)(param_9 << 0x1d) < 0) {
              local_48[uVar4] = '+';
              uVar4 = uVar4 + 1;
            }
            else if ((int)(param_9 << 0x1c) < 0) {
              local_48[uVar4] = ' ';
              uVar4 = uVar4 + 1;
            }
          }
          FUN_10002ed8(param_1,param_2,param_3,param_4,local_48,uVar4,param_8,param_9);
        }
        else {
          FUN_10003238(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
        }
      }
      else {
        puVar8 = PTR_DAT_10003994;
        if ((param_9 & 4) != 0) {
          puVar8 = PTR_DAT_10003990;
        }
        if ((param_9 & 4) == 0) {
          uVar6 = 3;
        }
        else {
          uVar6 = 4;
        }
        FUN_10002ed8(param_1,param_2,param_3,param_4,puVar8,uVar6,param_8,param_9);
      }
    }
    else {
      FUN_10002ed8(param_1,param_2,param_3,param_4,PTR_DAT_1000398c,4,param_8,param_9);
    }
  }
  else {
    FUN_10002ed8(param_1,param_2,param_3,param_4,PTR_DAT_10003988,3,param_8,param_9);
  }
  return;
}



uint FUN_100039a0(code *param_1,int param_2,uint param_3,byte *param_4,uint *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *local_2c [2];
  
  if (param_2 == 0) {
    param_1 = DAT_10003fc0;
  }
  uVar3 = 0;
  local_2c[0] = param_4;
  while( true ) {
    while( true ) {
      bVar1 = *local_2c[0];
      if (bVar1 == 0) {
        uVar2 = uVar3;
        if (param_3 <= uVar3) {
          uVar2 = param_3 - 1;
        }
        (*param_1)(0,param_2,uVar2,param_3);
        return uVar3;
      }
      if (bVar1 == 0x25) break;
      (*param_1)(bVar1,param_2,uVar3,param_3);
      local_2c[0] = local_2c[0] + 1;
      uVar3 = uVar3 + 1;
    }
    pbVar5 = local_2c[0] + 1;
    bVar1 = *pbVar5;
    uVar2 = (uint)(byte)(bVar1 - 0x20);
    if (uVar2 < 0x11) break;
    if ((byte)(bVar1 - 0x30) < 10) {
      local_2c[0] = pbVar5;
      uVar2 = FUN_10002eb4(local_2c);
      pbVar5 = local_2c[0];
    }
    else if (bVar1 == 0x2a) {
      uVar2 = *param_5;
      param_5 = param_5 + 1;
      pbVar5 = local_2c[0] + 2;
    }
    local_2c[0] = pbVar5;
    pbVar5 = local_2c[0];
    if (*local_2c[0] == 0x2e) {
      if ((byte)(local_2c[0][1] - 0x30) < 10) {
        local_2c[0] = local_2c[0] + 1;
        uVar2 = FUN_10002eb4(local_2c);
        pbVar5 = local_2c[0];
      }
      else {
        pbVar5 = local_2c[0] + 1;
        if (local_2c[0][1] == 0x2a) {
          uVar2 = *param_5;
          if ((int)uVar2 < 0) {
            uVar2 = 0;
          }
          param_5 = param_5 + 1;
          pbVar5 = local_2c[0] + 2;
        }
      }
    }
    local_2c[0] = pbVar5;
    uVar4 = *local_2c[0] - 0x68 & 0xff;
    if (uVar4 < 0x13) {
                    // WARNING: Could not recover jumptable at 0x10003a2e. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(PTR_PTR_LAB_10003d40 + uVar4 * 4))(uVar2);
      return uVar3;
    }
    uVar2 = (uint)(byte)(*local_2c[0] - 0x25);
    if (uVar2 < 0x54) {
                    // WARNING: Could not recover jumptable at 0x10003b2c. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(PTR_PTR_LAB_10003d44 + uVar2 * 4))();
      return uVar3;
    }
    (*param_1)(*local_2c[0],param_2,uVar3,param_3);
    local_2c[0] = local_2c[0] + 1;
    uVar3 = uVar3 + 1;
  }
  local_2c[0] = pbVar5;
                    // WARNING: Could not recover jumptable at 0x100039fc. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar3 = (**(code **)(PTR_PTR_LAB_10003d3c + uVar2 * 4))();
  return uVar3;
}



void FUN_10003fc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack8;
  undefined4 uStack4;
  
  uStack8 = param_3;
  uStack4 = param_4;
  FUN_100039a0(DAT_10003fe8,param_1,0xffffffff,param_2,&uStack8);
  return;
}



void FUN_10003fec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100039a0(PTR_LAB_10002e9c_1_10004004,param_1,param_2,param_3,param_4);
  return;
}



void FUN_10004008(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  FUN_100039a0(PTR_FUN_10002ea6_1_10004024,&local_10,0xffffffff,param_3,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10004038(undefined4 param_1)

{
  (*(code *)(uint)_UsageFault)(_BusFault,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10004048(undefined4 param_1)

{
  (*(code *)(uint)_UsageFault)(_DAT_00000016,param_1);
  return;
}



undefined4 FUN_10004058(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1) {
    piVar2 = (int *)(param_1 + uVar3 * 4);
    iVar1 = FUN_10004038(*piVar2);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}



ulonglong FUN_10004090(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  iVar2 = DAT_100040dc;
  if ((*(uint *)(DAT_100040dc + 0x78) >> 1 & 1) != 0) {
    uVar3 = *(undefined4 *)(DAT_100040dc + 0x60);
    uVar4 = *(undefined4 *)(DAT_100040dc + 100);
    uVar6 = *(undefined4 *)(DAT_100040dc + 0x74);
    uVar5 = *(undefined4 *)(DAT_100040dc + 0x70);
    uVar7 = FUN_10004098();
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined4 *)(iVar2 + 100) = uVar4;
    *(undefined4 *)(iVar2 + 0x74) = uVar6;
    *(undefined4 *)(iVar2 + 0x70) = uVar5;
    return uVar7;
  }
  *(uint *)(DAT_100040dc + 0x68) = param_1;
  *(int *)(iVar2 + 0x6c) = param_2;
  if (param_2 != 0) {
    return *(ulonglong *)(iVar2 + 0x70);
  }
  if (param_1 != 0) {
    param_1 = ~((int)param_1 >> 0x1f ^ 0x80000000U);
  }
  uVar1 = FUN_10008f80(param_1);
  return (ulonglong)uVar1;
}



ulonglong FUN_10004098(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  *(uint *)(param_3 + 0x68) = param_1;
  *(int *)(param_3 + 0x6c) = param_2;
  if (param_2 != 0) {
    return *(ulonglong *)(param_3 + 0x70);
  }
  if (param_1 != 0) {
    param_1 = ~((int)param_1 >> 0x1f ^ 0x80000000U);
  }
  uVar1 = FUN_10008f80(param_1);
  return (ulonglong)uVar1;
}



ulonglong FUN_100040e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  iVar2 = DAT_10004128;
  if ((*(uint *)(DAT_10004128 + 0x78) >> 1 & 1) != 0) {
    uVar3 = *(undefined4 *)(DAT_10004128 + 0x60);
    uVar4 = *(undefined4 *)(DAT_10004128 + 100);
    uVar6 = *(undefined4 *)(DAT_10004128 + 0x74);
    uVar5 = *(undefined4 *)(DAT_10004128 + 0x70);
    uVar7 = FUN_100040e8();
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined4 *)(iVar2 + 100) = uVar4;
    *(undefined4 *)(iVar2 + 0x74) = uVar6;
    *(undefined4 *)(iVar2 + 0x70) = uVar5;
    return uVar7;
  }
  *(int *)(DAT_10004128 + 0x60) = param_1;
  *(int *)(iVar2 + 100) = param_2;
  if (param_2 != 0) {
    return *(ulonglong *)(iVar2 + 0x70);
  }
  if (param_1 != 0) {
    param_1 = -1;
  }
  uVar1 = FUN_10008f80(param_1);
  return (ulonglong)uVar1;
}



ulonglong FUN_100040e8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  *(int *)(param_3 + 0x60) = param_1;
  *(int *)(param_3 + 100) = param_2;
  if (param_2 != 0) {
    return *(ulonglong *)(param_3 + 0x70);
  }
  if (param_1 != 0) {
    param_1 = -1;
  }
  uVar1 = FUN_10008f80(param_1);
  return (ulonglong)uVar1;
}



void FUN_10004164(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(uint *)(DAT_10004268 + 0x78) >> 1 & 1) != 0) {
    do {
    } while ((*(uint *)(DAT_10004268 + 0x78) & 1) == 0);
    uVar2 = *(undefined4 *)(DAT_10004268 + 0x60);
    uVar3 = *(undefined4 *)(DAT_10004268 + 100);
    uVar5 = *(undefined4 *)(DAT_10004268 + 0x74);
    uVar4 = *(undefined4 *)(DAT_10004268 + 0x70);
    FUN_10004224(param_1,param_2,param_3);
    iVar1 = DAT_10004268;
    *(undefined4 *)(DAT_10004268 + 0x60) = uVar2;
    *(undefined4 *)(iVar1 + 100) = uVar3;
    *(undefined4 *)(iVar1 + 0x74) = uVar5;
    *(undefined4 *)(iVar1 + 0x70) = uVar4;
    return;
  }
  FUN_10004224(param_1,param_2,param_3);
  return;
}



ulonglong FUN_10004224(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  
  iVar2 = DAT_10004558;
  iVar1 = DAT_1000438c;
  iVar6 = DAT_100042c8;
  iVar7 = DAT_10004268;
  if (param_2 == 0) {
    if (param_4 != 0) {
      return 0;
    }
    if (param_3 != 0) {
      *(uint *)(DAT_10004268 + 0x60) = param_1;
      *(uint *)(iVar7 + 100) = param_3;
      return (ulonglong)*(uint *)(iVar7 + 0x70);
    }
    if (param_1 == 0) goto LAB_10004252;
  }
  else {
    if (param_4 != 0) {
      if (param_4 >> 0x10 != 0) {
        uVar8 = 0;
        if (param_4 + 1 != 0) {
          *(uint *)(DAT_10004558 + 100) = param_4 + 1;
          *(uint *)(iVar2 + 0x60) = param_2;
          uVar8 = *(uint *)(iVar2 + 0x70);
        }
        uVar9 = uVar8 * (param_3 & 0xffff);
        uVar5 = param_1 - uVar9;
        uVar10 = uVar8 * (param_3 >> 0x10);
        uVar9 = (((param_2 - uVar8 * (param_4 & 0xffff)) - (uint)(param_1 < uVar9)) -
                (uVar8 * (param_4 >> 0x10) * 0x10000 | uVar10 >> 0x10)) -
                (uint)(uVar5 < uVar10 * 0x10000);
        for (uVar5 = uVar5 + uVar10 * -0x10000;
            (param_4 <= uVar9 && ((uVar9 != param_4 || (param_3 <= uVar5))));
            uVar5 = uVar5 - param_3) {
          uVar9 = (uVar9 - param_4) - (uint)(uVar5 < param_3);
          uVar8 = uVar8 + 1;
        }
        return (ulonglong)uVar8;
      }
      uVar9 = 0;
      uVar8 = param_3;
      uVar5 = param_4;
      if (param_4 >> 8 == 0) {
        uVar5 = param_4 << 8 | param_3 >> 0x18;
        uVar8 = param_3 << 8;
        uVar9 = 8;
      }
      if (uVar5 >> 0xc == 0) {
        uVar5 = uVar5 << 4 | uVar8 >> 0x1c;
        uVar8 = uVar8 << 4;
        uVar9 = uVar9 + 4;
      }
      if (uVar5 >> 0xe == 0) {
        uVar5 = uVar5 << 2 | uVar8 >> 0x1e;
        uVar8 = uVar8 << 2;
        uVar9 = uVar9 + 2;
      }
      if (uVar5 >> 0xf == 0) {
        bVar14 = CARRY4(uVar8,uVar8);
        uVar8 = uVar8 * 2;
        uVar5 = uVar5 * 2 + (uint)bVar14;
        uVar9 = uVar9 + 1;
      }
      *(uint *)(DAT_10004558 + 100) = uVar5 * 2 + (uint)CARRY4(uVar8,uVar8) + 1;
      *(undefined4 *)(iVar2 + 0x60) = DAT_1000455c;
      iVar7 = *(int *)(iVar2 + 0x70);
      uVar10 = iVar7 * (param_2 >> 0x10) >> 0x10;
      uVar11 = uVar10 * (uVar8 & 0xffff);
      if (param_1 < uVar11) {
        param_2 = param_2 - 1;
      }
      uVar3 = (param_1 - uVar11) - uVar11;
      if (param_1 - uVar11 < uVar11) {
        param_2 = param_2 - 1;
      }
      uVar12 = uVar10 * (uVar8 >> 0x10);
      uVar11 = uVar3 + uVar12 * -0x20000;
      uVar3 = ((param_2 + uVar10 * (uVar5 & 0xffff) * -2) - (uVar12 >> 0xf)) -
              (uint)(uVar3 < uVar12 * 0x20000);
      uVar12 = iVar7 * (uVar3 >> 3) >> 0x10;
      if (uVar9 < 0xc) {
        uVar8 = uVar12 >> (0xc - uVar9 & 0xff);
        iVar7 = (uVar10 << uVar9) * 2;
      }
      else {
        uVar13 = uVar12 * (uVar8 >> 0xc & 0xffff);
        uVar4 = uVar11 - uVar13;
        if (uVar11 < uVar13) {
          uVar3 = uVar3 - 1;
        }
        uVar8 = uVar12 * ((uVar8 >> 0xc | uVar5 << 0x14) >> 0x10);
        uVar11 = uVar4 + uVar8 * -0x10000;
        uVar3 = ((uVar3 - uVar12 * (uVar5 >> 0xc & 0xffff)) - (uVar8 >> 0x10)) -
                (uint)(uVar4 < uVar8 * 0x10000);
        uVar8 = iVar7 * (uVar11 >> 0x16 | uVar3 * 0x400) >> (0x29 - uVar9 & 0xff);
        iVar7 = uVar10 * 0x2000 + uVar12 << ((uint)(&DAT_fffffff4 + uVar9) & 0xff);
      }
      uVar10 = uVar8 * (param_3 & 0xffff);
      uVar5 = uVar11 - uVar10;
      uVar12 = uVar8 * (param_3 >> 0x10);
      uVar9 = uVar5 + uVar12 * -0x10000;
      uVar5 = (((uVar3 - uVar8 * (param_4 & 0xffff)) - (uint)(uVar11 < uVar10)) - (uVar12 >> 0x10))
              - (uint)(uVar5 < uVar12 * 0x10000);
      uVar8 = iVar7 + uVar8;
      do {
        uVar11 = uVar8;
        bVar15 = param_3 <= uVar9;
        uVar9 = uVar9 - param_3;
        uVar10 = uVar5 - param_4;
        bVar14 = param_4 < uVar5;
        uVar5 = (uVar5 - param_4) - (uint)!bVar15;
        uVar8 = uVar11 + 1;
      } while (bVar14 || uVar10 < bVar15);
      return (ulonglong)uVar11;
    }
    if (param_3 >> 0x10 != 0) {
      uVar5 = 0;
      uVar8 = param_3;
      if (param_3 >> 0x18 == 0) {
        uVar8 = param_3 << 8;
        uVar5 = 8;
      }
      if (uVar8 >> 0x1c == 0) {
        uVar8 = uVar8 << 4;
        uVar5 = uVar5 + 4;
      }
      if (uVar8 >> 0x1e == 0) {
        uVar8 = uVar8 << 2;
        uVar5 = uVar5 + 2;
      }
      if (-1 < (int)uVar8) {
        uVar8 = uVar8 << 1;
        uVar5 = uVar5 + 1;
      }
      *(uint *)(DAT_1000438c + 100) = (uVar8 >> 0xf) + 1;
      *(undefined4 *)(iVar1 + 0x60) = DAT_10004390;
      iVar6 = *(int *)(iVar1 + 0x70);
      uVar11 = iVar6 * (param_2 >> 0x10) >> 0x10;
      uVar10 = uVar11 * (uVar8 & 0xffff);
      uVar9 = param_1 + uVar10 * -0x20000;
      uVar12 = ((param_2 - (uVar10 >> 0xf)) - (uint)(param_1 < uVar10 * 0x20000)) +
               uVar11 * (uVar8 >> 0x10) * -2;
      uVar13 = iVar6 * (uVar12 >> 3) >> 0x10;
      uVar3 = uVar11 * 0x2000 + uVar13;
      uVar4 = uVar13 * (uVar8 & 0xffff);
      uVar10 = uVar9 + uVar4 * -0x10;
      uVar13 = uVar13 * (uVar8 >> 0x10);
      uVar11 = uVar10 + uVar13 * -0x100000;
      iVar7 = (((uVar12 - (uVar4 >> 0x1c)) - (uint)(uVar9 < uVar4 * 0x10)) - (uVar13 >> 0xc)) -
              (uint)(uVar10 < uVar13 * 0x100000);
      uVar9 = iVar6 * (uVar11 >> 0x16 | iVar7 * 0x400) >> 0x10;
      if (8 < uVar5) {
        uVar11 = uVar11 - uVar9 * (uVar8 >> 9);
        uVar8 = -uVar5 + 0x16;
        uVar10 = (iVar6 * (uVar11 >> 9) >> 0x10) >> (uVar8 & 0xff);
        uVar9 = ((uVar9 << 0xd) >> (uVar8 & 0xff)) + uVar10;
        uVar11 = uVar11 - param_3 * uVar10;
        uVar8 = uVar3 >> (-uVar5 + 0x1c & 0xff);
        uVar3 = uVar3 << uVar5 + 4;
        iVar7 = uVar3 + uVar9;
        if (CARRY4(uVar3,uVar9) == false) goto LAB_10004382;
        do {
          uVar8 = uVar8 + 1;
LAB_10004382:
          do {
            if (uVar11 < param_3) {
              return CONCAT44(uVar8,iVar7);
            }
            uVar11 = uVar11 - param_3;
            bVar14 = iVar7 != -1;
            iVar7 = iVar7 + 1;
          } while (bVar14);
        } while( true );
      }
      uVar9 = uVar9 >> (-uVar5 + 9 & 0xff);
      uVar10 = uVar9 * (param_3 & 0xffff);
      uVar8 = uVar11 - uVar10;
      if (uVar11 < uVar10) {
        iVar7 = iVar7 + -1;
      }
      uVar10 = uVar9 * (param_3 >> 0x10);
      uVar11 = uVar8 + uVar10 * -0x10000;
      iVar6 = (iVar7 - (uVar10 >> 0x10)) - (uint)(uVar8 < uVar10 * 0x10000);
      uVar8 = uVar3 >> (-uVar5 + 0x1c & 0xff);
      uVar3 = uVar3 << uVar5 + 4;
      iVar7 = uVar3 + uVar9;
      if (CARRY4(uVar3,uVar9) != false) {
        uVar8 = uVar8 + 1;
      }
      if (iVar6 == 0) {
        if (uVar11 < param_3) {
          return CONCAT44(uVar8,iVar7);
        }
        do {
          bVar14 = iVar7 == -1;
          iVar7 = iVar7 + 1;
          if (bVar14) {
            uVar8 = uVar8 + 1;
          }
          uVar11 = uVar11 - param_3;
LAB_100043e6:
        } while (param_3 <= uVar11);
        return CONCAT44(uVar8,iVar7);
      }
      do {
        bVar14 = iVar7 == -1;
        iVar7 = iVar7 + 1;
        if (bVar14) {
          uVar8 = uVar8 + 1;
        }
        bVar14 = uVar11 < param_3;
        uVar11 = uVar11 - param_3;
        if ((bVar14) && (iVar6 = iVar6 + -1, iVar6 == 0)) goto LAB_100043e6;
      } while( true );
    }
    if (param_3 != 0) {
      *(uint *)(DAT_100042c8 + 0x60) = param_2;
      *(uint *)(iVar6 + 100) = param_3;
      *(uint *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x74) << 0x10 | param_1 >> 0x10;
      *(uint *)(iVar6 + 100) = param_3;
      *(uint *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x74) << 0x10 | param_1 & 0xffff;
      *(uint *)(iVar6 + 100) = param_3;
      uVar8 = *(uint *)(iVar6 + 0x70) * 0x10000;
      return CONCAT44(*(int *)(iVar6 + 0x70) + (*(uint *)(iVar6 + 0x70) >> 0x10) +
                      (uint)CARRY4(*(uint *)(iVar6 + 0x70),uVar8),*(uint *)(iVar6 + 0x70) + uVar8);
    }
  }
  param_1 = DAT_1000426c;
  param_2 = DAT_1000426c;
LAB_10004252:
  uVar16 = FUN_10008f60(param_1,param_2);
  return uVar16;
}



void FUN_10004566(void)

{
  return;
}



void FUN_10004578(void)

{
  return;
}



void FUN_1000458a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(uint *)(DAT_100045dc + 0x78) >> 1 & 1) == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(DAT_100045dc + 0x60);
  uVar3 = *(undefined4 *)(DAT_100045dc + 100);
  uVar5 = *(undefined4 *)(DAT_100045dc + 0x74);
  uVar4 = *(undefined4 *)(DAT_100045dc + 0x70);
  FUN_10004596(param_1,param_2,param_3);
  iVar1 = DAT_100045dc;
  *(undefined4 *)(DAT_100045dc + 0x60) = uVar2;
  *(undefined4 *)(iVar1 + 100) = uVar3;
  *(undefined4 *)(iVar1 + 0x74) = uVar5;
  *(undefined4 *)(iVar1 + 0x70) = uVar4;
  return;
}



void FUN_10004596(void)

{
  return;
}



void FUN_100045c6(void)

{
  return;
}



undefined8 FUN_100045e0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_4 << 1) >> 0x15;
  if (uVar3 == 0) {
LAB_10004602:
    param_3 = 0;
    param_4 = param_4 & 0xfff00000;
  }
  else if (uVar3 == DAT_10004648) {
    if ((param_4 & 0x100000) != 0 && (param_4 & 0xfffff) != 0) goto LAB_1000462c;
    goto LAB_10004602;
  }
  uVar3 = (param_2 << 1) >> 0x15;
  if (uVar3 == 0) {
LAB_10004616:
    uVar1 = 0;
    uVar2 = param_2 & 0xfff00000;
  }
  else {
    uVar1 = param_1;
    uVar2 = param_2;
    if (uVar3 == DAT_10004648) {
      if ((param_2 & 0x100000) != 0 && (param_2 & 0xfffff) != 0) goto LAB_1000462c;
      goto LAB_10004616;
    }
  }
  if ((int)(uVar2 ^ param_4) < 0) {
    if (((uVar2 ^ param_4 | param_4) * 2 | param_3 | uVar1) != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  else if ((-1 < (int)uVar2) && (param_4 == uVar2)) {
    return CONCAT44(param_2,param_1);
  }
LAB_1000462c:
  return CONCAT44(param_2,param_1);
}



undefined8 FUN_100045f0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 << 1) >> 0x15;
  if (uVar3 == 0) {
LAB_10004602:
    uVar1 = 0;
    uVar2 = param_2 & 0xfff00000;
  }
  else {
    uVar1 = param_1;
    uVar2 = param_2;
    if (uVar3 == DAT_10004648) {
      if ((param_2 & 0x100000) != 0 && (param_2 & 0xfffff) != 0) goto LAB_1000462c;
      goto LAB_10004602;
    }
  }
  uVar3 = (param_4 << 1) >> 0x15;
  if (uVar3 == 0) {
LAB_10004616:
    param_3 = 0;
    param_4 = param_4 & 0xfff00000;
  }
  else if (uVar3 == DAT_10004648) {
    if ((param_4 & 0x100000) != 0 && (param_4 & 0xfffff) != 0) goto LAB_1000462c;
    goto LAB_10004616;
  }
  if ((int)(param_4 ^ uVar2) < 0) {
    if (((param_4 ^ uVar2 | uVar2) * 2 | uVar1 | param_3) != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  else if ((-1 < (int)param_4) && (uVar2 == param_4)) {
    return CONCAT44(param_2,param_1);
  }
LAB_1000462c:
  return CONCAT44(param_2,param_1);
}



int FUN_1000464c(void)

{
  undefined in_CY;
  
  FUN_100045f0();
  return -(uint)!(bool)in_CY;
}



undefined4 FUN_10004658(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_100045f0();
  if ((bool)in_CY && !(bool)in_ZR) {
    return 0;
  }
  return 1;
}



undefined4 FUN_10004668(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_100045e0();
  if ((bool)in_CY && !(bool)in_ZR) {
    return 0;
  }
  return 1;
}



int FUN_10004678(void)

{
  undefined in_CY;
  
  FUN_100045e0();
  return -(uint)!(bool)in_CY;
}



undefined4 FUN_10004682(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  if (((uint)(param_2 * 2) < 0xffe00001) && ((uint)(param_4 * 2) < 0xffe00001)) {
    return 0;
  }
  return 1;
}



undefined8 FUN_100046a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = (**DAT_100046d0)();
  uVar2 = param_1 << (iVar1 + 1U & 0xff);
  return CONCAT44((DAT_100046d4 - (iVar1 + 1U)) * 0x100000 | uVar2 >> 0xc,uVar2 << 0x14);
}



longlong FUN_100046a8(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)param_1 >> 0x1f;
  iVar1 = (param_1 ^ uVar3) - uVar3;
  if (iVar1 != 0) {
    iVar2 = (**DAT_100046d0)();
    uVar4 = iVar1 << (iVar2 + 1U & 0xff);
    return CONCAT44((DAT_100046d4 - (iVar2 + 1U)) * 0x100000 | uVar3 << 0x1f | uVar4 >> 0xc,
                    uVar4 << 0x14);
  }
  return (ulonglong)uVar3 << 0x20;
}



int FUN_100046d8(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(param_2 << 1) >> 0x15;
  iVar3 = uVar2 - 0x380;
  if (iVar3 < 0x7f) {
    return 0;
  }
  if (iVar3 < 0x9e) {
    uVar2 = -(uVar2 - 0x41e);
    uVar1 = ((uint)(param_2 << 0xc) >> 1 | 0x80000000) >> (uVar2 & 0xff);
    iVar3 = (param_2 >> 0x1f) * 2 + 1;
    uVar2 = uVar2 + 0x15;
    if ((int)uVar2 < 0x20) {
      return iVar3 * (param_1 >> (uVar2 & 0xff) | uVar1);
    }
    return iVar3 * uVar1;
  }
  return 0x7fffffff - (param_2 >> 0x1f);
}



void FUN_10004720(void)

{
  return;
}



undefined8 FUN_10004d68(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_3 >> 0x10) * (param_1 & 0xffff);
  uVar1 = (param_3 & 0xffff) * (param_1 & 0xffff);
  uVar3 = (param_1 >> 0x10) * (param_3 & 0xffff);
  uVar6 = uVar4 * 0x10000;
  uVar2 = uVar1 + uVar6;
  uVar5 = uVar3 * 0x10000;
  return CONCAT44((param_1 >> 0x10) * (param_3 >> 0x10) + (uVar4 >> 0x10) +
                  (uint)CARRY4(uVar1,uVar6) + (uVar3 >> 0x10) + (uint)CARRY4(uVar2,uVar5) +
                  param_3 * param_2 + param_1 * param_4,uVar2 + uVar5);
}



void FUN_10004edc(void)

{
                    // WARNING: Could not recover jumptable at 0x10004ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**DAT_10004ee4)();
  return;
}



void FUN_10004ee8(void)

{
                    // WARNING: Could not recover jumptable at 0x10004eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(DAT_10004ef0 + 4))();
  return;
}



void FUN_10004ef4(code **param_1,undefined4 param_2,undefined4 param_3)

{
  (**param_1)(param_2,param_3);
  return;
}



void FUN_10004f04(code **param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    (**param_1)(param_2,param_3,param_3,*param_1,param_4);
  }
  else {
    iVar1 = 0;
    for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
      if (iVar2 < 1) {
        cVar3 = *(char *)(param_1 + 4);
      }
      else {
        cVar3 = *(char *)(param_2 + iVar2 + -1) == '\r';
      }
      if ((*(char *)(param_2 + iVar2) == '\n') && (cVar3 == '\0')) {
        if (iVar1 < iVar2) {
          (**param_1)(param_2 + iVar1,iVar2 - iVar1);
        }
        (**param_1)(PTR_LAB_10004f80,2);
        iVar1 = iVar2 + 1;
      }
    }
    if (iVar1 < param_3) {
      (**param_1)(param_2 + iVar1,param_3 - iVar1);
    }
    if (0 < param_3) {
      *(bool *)(param_1 + 4) = *(char *)(param_2 + param_3 + -1) == '\r';
    }
  }
  return;
}



void FUN_10004f84(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    for (piVar1 = *DAT_10004fc0; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      if ((*piVar1 != 0) && ((*DAT_10004fc4 == (int *)0x0 || (*DAT_10004fc4 == piVar1)))) {
        FUN_10004f04(piVar1,param_1 + 1,*param_1);
      }
    }
    *param_1 = 0;
  }
  return;
}



int FUN_10004fe8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  while( true ) {
    for (iVar3 = *DAT_10005064; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      if ((((*DAT_1000505c == 0) || (*DAT_1000505c == iVar3)) &&
          (*(code **)(iVar3 + 8) != (code *)0x0)) &&
         (iVar1 = (**(code **)(iVar3 + 8))(param_1,param_2), 0 < iVar1)) {
        return iVar1;
      }
    }
    if (*(uint *)(DAT_10005060 + 0x24) < param_4) {
      bVar2 = false;
    }
    else if (*(uint *)(DAT_10005060 + 0x28) < param_3) {
      if (param_4 == *(uint *)(DAT_10005060 + 0x24)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    FUN_1000212c(1,0);
  }
  return -1;
}



int FUN_10005068(void)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = (int)DAT_d0000000;
  iVar1 = FUN_10008f90(DAT_10005094,&local_c);
  if ((iVar1 == 0) && (iVar2 != local_c)) {
    FUN_10008fc0(DAT_10005094);
    iVar1 = 1;
  }
  return iVar1;
}



void FUN_10005098(void)

{
  FUN_10008f50(DAT_100050a4);
  return;
}



bool FUN_100050a8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined local_21 [5];
  
  iVar1 = FUN_10005068();
  if (param_2 == -1) {
    param_2 = FUN_10008a34(param_1);
  }
  pcVar3 = DAT_10005138;
  if (param_4 != 0) {
    pcVar3 = DAT_10005130;
  }
  for (piVar2 = *DAT_10005134; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    if ((*piVar2 != 0) &&
       (((*DAT_1000513c == (int *)0x0 || (*DAT_1000513c == piVar2)) &&
        ((*pcVar3)(piVar2,param_1,param_2), param_3 != 0)))) {
      local_21[0] = 10;
      (*pcVar3)(piVar2,local_21,1);
    }
  }
  if (iVar1 != 0) {
    FUN_10005098();
  }
  return param_2 != 0;
}



undefined4 FUN_10005140(undefined4 param_1)

{
  undefined local_9;
  
  local_9 = (undefined)param_1;
  FUN_100050a8(&local_9,1,0,0);
  return param_1;
}



void FUN_1000515c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10005184;
  while( true ) {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      if (param_2 != 0) {
        *piVar1 = param_1;
      }
      return;
    }
    if (iVar2 == param_1) break;
    piVar1 = (int *)(iVar2 + 0xc);
  }
  if (param_2 != 0) {
    return;
  }
  *piVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void FUN_10005188(void)

{
  int iVar1;
  
  for (iVar1 = *DAT_100051a4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (*(code **)(iVar1 + 4) != (code *)0x0) {
      (**(code **)(iVar1 + 4))();
    }
  }
  return;
}



undefined4 FUN_100051a8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10008a34();
  FUN_100050a8(param_1,uVar1,1,0);
  FUN_10005188();
  return uVar1;
}



undefined4 FUN_100051c8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack148 [132];
  
  iVar1 = FUN_10005068();
  FUN_10004edc(auStack148,0,0x84);
  uVar2 = FUN_10004008(PTR_LAB_10004fc8_1_10005208,auStack148,param_1,param_2);
  FUN_10004f84(auStack148);
  FUN_10005188();
  if (iVar1 != 0) {
    FUN_10005098();
  }
  return uVar2;
}



void FUN_1000520c(undefined4 param_1)

{
  FUN_100051c8(param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x10005240)

uint FUN_10005224(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  byte local_14 [8];
  
  uVar3 = FUN_100020ec();
  if ((longlong)uVar3 < 0) {
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10005294,0x3f,
                 PTR_s_update_us_since_boot_10005290,PTR_s_us_since_boot____INT64_MAX_1000528c);
  }
  iVar2 = (int)(uVar3 + 0x20 >> 0x20);
  if (uVar3 + 0x20 < uVar3) {
    iVar2 = -1;
  }
  if (-1 < iVar2) {
    uVar1 = FUN_10004fe8(local_14,1);
    if (-1 < (int)uVar1) {
      if (uVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_100052a0,0x12a,
                     PTR_s_getchar_timeout_us_1000529c,PTR_DAT_10005298);
      }
      uVar1 = (uint)local_14[0];
    }
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_src_10005294,0x3f,
               PTR_s_update_us_since_boot_10005290,PTR_s_us_since_boot____INT64_MAX_1000528c);
}



int FUN_100052a4(uint param_1)

{
  return ((param_1 & 0x7f) * 2 + (param_1 >> 7)) * 0x20 + DAT_100052b8;
}



void FUN_100052bc(void)

{
  int iVar1;
  uint uVar2;
  undefined2 local_c;
  
  local_c = (short)DAT_100052e0;
  for (uVar2 = 0; uVar2 < 2; uVar2 = uVar2 + 1) {
    iVar1 = FUN_100052a4(*(undefined *)((int)&local_c + uVar2));
    *(undefined *)(iVar1 + 3) = 1;
  }
  return;
}



void FUN_100052e4(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = DAT_1000533c;
  uVar3 = *(ushort *)(param_1 + 0x1c) + 0x3f & 0xffffffc0;
  if (param_2 == 2) {
    uVar3 = uVar3 << 1;
  }
  uVar2 = *DAT_1000533c;
  *(uint *)(param_1 + 0xc) = uVar2;
  uVar3 = uVar2 + uVar3;
  *puVar1 = uVar3;
  if ((uVar3 & 0x3f) == 0) {
    if ((uVar3 ^ DAT_10005340) < 0x1001) {
      **(uint **)(param_1 + 4) = param_2 << 0x1a | uVar2 ^ DAT_10005340 | 0x80000000;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_1000534c,0x56,
                 PTR_s__hw_endpoint_alloc_10005348,PTR_s_hw_data_offset_next_buffer_ptr____10005350)
    ;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_1000534c,0x54,
               PTR_s__hw_endpoint_alloc_10005348,PTR_s___uintptr_t__next_buffer_ptr___0_10005344);
}



void FUN_10005354(uint param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = FUN_100052a4();
  uVar4 = param_1 & 0x7f;
  uVar6 = param_1 >> 7;
  *(char *)(iVar2 + 2) = (char)param_1;
  *(bool *)(iVar2 + 1) = uVar6 == 0;
  *(undefined *)(iVar2 + 3) = 0;
  *(undefined2 *)(iVar2 + 0x1c) = param_2;
  *(char *)(iVar2 + 0x1e) = (char)param_3;
  if (uVar6 == 1) {
    *(uint *)(iVar2 + 8) = uVar4 * 8 + DAT_100053d0;
  }
  else {
    *(uint *)(iVar2 + 8) = uVar4 * 8 + DAT_100053c8;
  }
  **(undefined4 **)(iVar2 + 8) = 0;
  iVar3 = DAT_100053d8;
  iVar1 = DAT_100053d4;
  if (uVar4 == 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0xc) = DAT_100053cc;
  }
  else {
    if (uVar6 == 1) {
      iVar5 = (uVar4 - 1) * 8 + DAT_100053d8;
      *(int *)(iVar2 + 4) = iVar5;
    }
    else {
      iVar5 = (uVar4 - 1) * 8 + DAT_100053d4;
      *(int *)(iVar2 + 4) = iVar5;
      iVar3 = iVar1;
    }
    FUN_100052e4(iVar2,param_3,iVar3,iVar5,param_4);
  }
  return;
}



void FUN_100053dc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  for (uVar3 = 0; iVar1 = DAT_1000540c, uVar3 < 0xf; uVar3 = uVar3 + 1 & 0xff) {
    iVar2 = (uVar3 + 1) * 8;
    *(undefined4 *)(iVar2 + DAT_1000540c) = 0;
    *(undefined4 *)(iVar2 + iVar1 + 4) = 0;
  }
  FUN_10004edc(DAT_10005410,0,0x3c0);
  *DAT_10005414 = DAT_10005418;
  return;
}



void FUN_1000541c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(DAT_1000549c + 0x58);
  uVar5 = 1;
  for (uVar3 = 0; (uVar6 != 0 && (uVar3 < 0x20)); uVar3 = uVar3 + 1 & 0xff) {
    if ((uVar5 & uVar6) != 0) {
      *(uint *)(DAT_100054a0 + 0x58) = uVar5;
      uVar2 = (uVar3 ^ 1) & 1;
      iVar4 = ((uVar3 & 0xfffffffe) + uVar2) * 0x20 + DAT_100054a4;
      iVar1 = FUN_100059c0(iVar4);
      if (iVar1 != 0) {
        iVar1 = DAT_100054a4 + ((uVar3 & 0xfffffffe) + uVar2) * 0x20;
        FUN_100060ac(0,*(undefined *)(iVar1 + 2),*(undefined2 *)(iVar1 + 0x14),0,1);
        FUN_100058a0(iVar4);
      }
      uVar6 = uVar6 & ~uVar5;
    }
    uVar5 = uVar5 << 1;
  }
  return;
}



void FUN_100054a8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_10005558[0x26];
  uVar2 = uVar1 & 0x10000;
  if ((uVar1 & 0x10000) != 0) {
    FUN_100052bc();
    FUN_10006078(0,DAT_1000555c,1);
    *(undefined4 *)(DAT_10005560 + 0x50) = 0x20000;
    uVar2 = 0x10000;
  }
  if ((int)(uVar1 << 0x1b) < 0) {
    uVar2 = uVar2 | 0x10;
    FUN_1000541c();
  }
  if ((int)(uVar1 << 0x13) < 0) {
    uVar2 = uVar2 | 0x1000;
    *DAT_10005558 = 0;
    FUN_100053dc();
    FUN_1000604e(0,0,1);
    *(undefined4 *)(DAT_10005560 + 0x50) = 0x80000;
  }
  if ((int)(uVar1 << 0x11) < 0) {
    uVar2 = uVar2 | 0x4000;
    FUN_10006028(0,4,1);
    *(undefined4 *)(DAT_10005560 + 0x50) = 0x10;
  }
  if ((int)(uVar1 << 0x10) < 0) {
    uVar2 = uVar2 | 0x8000;
    FUN_10006028(0,5,1);
    *(undefined4 *)(DAT_10005560 + 0x50) = 0x800;
  }
  if (uVar2 == uVar1) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_10002a10(PTR_s_Unhandled_IRQ_0x_x_10005564,uVar2 ^ uVar1);
}



void FUN_10005568(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100052a4();
  FUN_10005978(uVar1,param_2,param_3);
  return;
}



void FUN_1000557c(int param_1)

{
  if (param_1 == 0) {
    FUN_100011f8(5,1);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_100055a4,0x172,PTR_s_dcd_int_enable_100055a0,
               PTR_s_rhport____0_1000559c);
}



void FUN_100055a8(int param_1)

{
  if (param_1 == 0) {
    FUN_10005568(0x80,0,0);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_100055d0,0x17e,PTR_s_dcd_set_address_100055cc,
               PTR_s_rhport____0_100055c8);
}



void FUN_100055d4(void)

{
  *(undefined4 *)(DAT_100055e0 + 0x4c) = 0x10000;
  return;
}



void FUN_100055e4(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_10005854();
    iVar1 = DAT_10005644;
    *(undefined4 *)(DAT_10005644 + 0x78) = 0xc;
    FUN_10001218(5,PTR_FUN_100054a8_1_10005648);
    FUN_10004edc(DAT_1000564c,0,0x40);
    FUN_10005354(0,0x40,0);
    FUN_10005354(0x80,0x40,0);
    FUN_100053dc();
    *(undefined4 *)(iVar1 + 0x40) = 1;
    *(undefined4 *)(iVar1 + 0x4c) = 0x20000000;
    *(undefined4 *)(iVar1 + 0x90) = DAT_10005650;
    FUN_100055d4(0);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_1000565c,0x14d,PTR_s_dcd_init_10005658,
               PTR_s_rhport____0_10005654);
}



void FUN_10005660(undefined4 param_1,byte *param_2)

{
  if (((*param_2 & 0x7f) == 0) && (param_2[1] == 5)) {
    *DAT_10005678 = (uint)param_2[2];
  }
  return;
}



undefined4 FUN_1000567c(int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_10005354(*(undefined *)(param_2 + 2),
                 (*(byte *)(param_2 + 5) & 7) << 8 | (uint)*(byte *)(param_2 + 4),
                 *(byte *)(param_2 + 3) & 3);
    return 1;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_100056b8,0x1ac,PTR_s_dcd_edpt_open_100056b4,
               PTR_s_rhport____0_100056b0);
}



void FUN_100056bc(void)

{
  FUN_100053dc();
  return;
}



undefined4 FUN_100056c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    FUN_10005568(param_2,param_3,param_4);
    return 1;
  }
                    // WARNING: Subroutine does not return
  FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_100056f0,0x1bb,PTR_s_dcd_edpt_xfer_100056ec,
               PTR_s_rhport____0_100056e8);
}



void FUN_100056f4(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 0x7f) == 0) {
    if (param_2 >> 7 == 1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *(undefined4 *)(DAT_1000571c + 0x68) = uVar1;
  }
  uVar1 = FUN_100052a4(param_2);
  FUN_100058ac(uVar1,0,0x800);
  return;
}



void FUN_10005720(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0x7f) != 0) {
    iVar1 = FUN_100052a4(param_2);
    *(undefined *)(iVar1 + 3) = 0;
    FUN_100058ac(iVar1,DAT_1000573c,0);
  }
  return;
}



uint FUN_10005740(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x12);
  uVar3 = uVar1;
  if (*(ushort *)(param_1 + 0x1c) < uVar1) {
    uVar3 = *(ushort *)(param_1 + 0x1c);
  }
  uVar4 = (uint)uVar3;
  *(ushort *)(param_1 + 0x12) = uVar1 - uVar3;
  if (*(byte *)(param_1 + 3) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x2000;
  }
  uVar2 = uVar4 | 0x400 | uVar2;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) ^ 1;
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_10004ee8(param_2 * 0x40 + *(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18),uVar4,
                 *(int *)(param_1 + 0xc),param_4);
    *(uint *)(param_1 + 0x18) = uVar4 + *(int *)(param_1 + 0x18);
    uVar2 = uVar2 | 0x8000;
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    uVar2 = uVar2 | 0x4000;
  }
  if (param_2 != 0) {
    uVar2 = uVar2 << 0x10;
  }
  return uVar2;
}



uint FUN_100057b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = **(uint **)(param_1 + 8);
  if (param_2 != 0) {
    uVar1 = uVar1 >> 0x10;
  }
  uVar2 = uVar1 & 0x3ff;
  if (*(char *)(param_1 + 1) == '\0') {
    if ((int)(uVar1 << 0x10) < 0) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_10005824,0xd7,
                   PTR_s_sync_ep_buffer_10005820,PTR_s___buf_ctrl___USB_BUF_CTRL_FULL__1000581c);
    }
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + (short)uVar2;
  }
  else {
    if (-1 < (int)(uVar1 << 0x10)) {
                    // WARNING: Subroutine does not return
      FUN_100028dc(PTR_s__Users_tom_Git_pico_pico_sdk_lib_10005824,0xde,
                   PTR_s_sync_ep_buffer_10005820,PTR_s_buf_ctrl___USB_BUF_CTRL_FULL_10005828);
    }
    FUN_10004ee8(*(undefined4 *)(param_1 + 0x18),param_2 * 0x40 + *(int *)(param_1 + 0xc),uVar2);
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + (short)uVar2;
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar2;
  }
  if (uVar2 < *(ushort *)(param_1 + 0x1c)) {
    *(undefined2 *)(param_1 + 0x12) = 0;
  }
  return uVar2;
}



void FUN_1000582c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_100057b0(param_1,0,param_3,**(undefined4 **)(param_1 + 8));
  if ((**(int **)(param_1 + 4) << 1 < 0) && (*(ushort *)(param_1 + 0x1c) == uVar1)) {
    FUN_100057b0(param_1,1);
  }
  return;
}



void FUN_10005854(void)

{
  int iVar1;
  
  *DAT_1000588c = 0x1000000;
  *DAT_10005890 = 0x1000000;
  iVar1 = DAT_10005898;
  do {
  } while ((~*(uint *)(DAT_10005894 + 8) & 0x1000000) != 0);
  FUN_10004edc(DAT_10005898,0,0x9c);
  FUN_10004edc(DAT_1000589c,0,0x1000);
  *(undefined4 *)(iVar1 + 0x74) = 9;
  return;
}



void FUN_100058a0(int param_1)

{
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void FUN_100058ac(int param_1,uint param_2,uint param_3)

{
  if (param_2 != 0) {
    param_2 = param_2 & **(uint **)(param_1 + 8);
  }
  if ((param_3 != 0) && (param_2 = param_2 | param_3, (int)(param_3 << 0x15) < 0)) {
    if ((int)(**(uint **)(param_1 + 8) << 0x15) < 0) {
                    // WARNING: Subroutine does not return
      FUN_10002a10(PTR_s_ep__d__s_was_already_available_10005900,*(byte *)(param_1 + 2) & 0x7f,
                   *(undefined4 *)((uint)(*(byte *)(param_1 + 2) >> 7) * 4 + DAT_100058fc));
    }
    **(uint **)(param_1 + 8) = DAT_100058f8 & param_2;
  }
  **(uint **)(param_1 + 8) = param_2;
  return;
}



void FUN_10005904(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = **(uint **)(param_1 + 4);
  uVar2 = FUN_10005740(param_1,0);
  uVar2 = uVar2 | 0x1000;
  if (*(int *)(DAT_1000596c + 0x40) << 0x1e < 0) {
    bVar1 = false;
  }
  else if (*(char *)(param_1 + 2) < '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(short *)(param_1 + 0x12) == 0) || (bVar1)) {
    uVar4 = uVar4 & DAT_10005970 | 0x20000000;
  }
  else {
    uVar3 = FUN_10005740(param_1,1);
    uVar2 = uVar2 | uVar3;
    uVar4 = uVar4 & DAT_10005974 | 0x50000000;
  }
  **(uint **)(param_1 + 4) = uVar4;
  FUN_100058ac(param_1,0,uVar2);
  return;
}



void FUN_10005978(int param_1,undefined4 param_2,undefined2 param_3)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_1000520c(PTR_s_WARN__starting_new_transfer_on_a_100059bc,*(byte *)(param_1 + 2) & 0x7f,
                 *(undefined4 *)((uint)(*(byte *)(param_1 + 2) >> 7) * 4 + DAT_100059b8));
    FUN_100058a0(param_1);
  }
  *(undefined2 *)(param_1 + 0x12) = param_3;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  FUN_10005904(param_1);
  return;
}



char FUN_100059c0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != '\0') {
    FUN_1000582c();
    if (*(short *)(param_1 + 0x12) != 0) {
      FUN_10005904(param_1);
      cVar1 = '\0';
    }
    return cVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_10002a10(PTR_s_Can_t_continue_xfer_on_inactive_e_100059f4,*(byte *)(param_1 + 2) & 0x7f,
               DAT_100059f0);
}



void FUN_100059f8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar1 = DAT_10005a7c;
    uVar2 = (uint)*DAT_10005a70;
    if (uVar2 + 2 < uVar5) {
      FUN_10004edc(DAT_10005a7c,0,0x53);
      FUN_10004edc(iVar1 + 3,0xff,0x10);
      FUN_10004edc(iVar1 + 0x13,0xff,0x20);
      return;
    }
    uVar3 = uVar5;
    if (DAT_10005a74 == 0) {
LAB_10005a36:
      if (uVar3 < 3) {
        puVar4 = PTR_PTR_FUN_10006e28_1_10005a78 + uVar3 * 0x18;
      }
      else {
        puVar4 = (undefined *)0x0;
      }
    }
    else {
      if (uVar2 <= uVar5) {
        uVar3 = uVar5 - uVar2 & 0xff;
        goto LAB_10005a36;
      }
      puVar4 = (undefined *)(*DAT_10005a6c + uVar5 * 0x18);
    }
    (**(code **)(puVar4 + 4))(param_1);
    uVar5 = uVar5 + 1 & 0xff;
  } while( true );
}



void FUN_10005a80(void)

{
  FUN_100059f8();
  FUN_10006b0c();
  return;
}



void FUN_10005a8c(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_10006b20(*(undefined4 *)(param_2 + 0xc));
  (**(code **)(param_2 + 0xc))(param_1,0,param_3);
  return;
}



undefined4 FUN_10005aa8(undefined4 param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte bVar12;
  
  iVar3 = FUN_10000968(param_2 + -1);
  pbVar5 = DAT_10005c3c;
  if ((iVar3 == 0) || (bVar1 = *(byte *)(iVar3 + 1), bVar1 != 2)) {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10005c38,PTR_s_process_set_config_10005c34,DAT_10005c30)
    ;
    return 0;
  }
  bVar12 = *(byte *)(iVar3 + 7);
  bVar4 = *DAT_10005c3c;
  bVar2 = (byte)(((int)(uint)bVar12 >> 5 & 1U) << 4);
  *DAT_10005c3c = bVar4 & 0xef | bVar2;
  *pbVar5 = (byte)(((int)(uint)bVar12 >> 6 & 1U) << 5) | bVar4 & 0xcf | bVar2;
  pbVar11 = (byte *)(iVar3 + 9);
  pbVar5 = (byte *)(iVar3 + (uint)*(ushort *)(iVar3 + 2));
  do {
    if (pbVar5 <= pbVar11) {
      if (DAT_10005c5c != 0) {
        FUN_100004b4();
        return 1;
      }
      return 1;
    }
    if (pbVar11[1] == 0xb) {
      bVar12 = pbVar11[3];
      pbVar11 = pbVar11 + *pbVar11;
    }
    else {
      bVar12 = 1;
    }
    if (pbVar11[1] != 4) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10005c38,PTR_s_process_set_config_10005c34,
                   DAT_10005c40);
      return 0;
    }
    uVar9 = (int)pbVar5 - (int)pbVar11 & 0xffff;
    uVar8 = 0;
LAB_10005b62:
    uVar6 = (uint)*DAT_10005c48;
    if (uVar6 + 2 < uVar8) goto LAB_10005be2;
    uVar7 = uVar8;
    if (DAT_10005c4c == 0) {
LAB_10005b7c:
      if (uVar7 < 3) {
        puVar10 = PTR_PTR_FUN_10006e28_1_10005c50 + uVar7 * 0x18;
      }
      else {
        puVar10 = (undefined *)0x0;
      }
    }
    else {
      if (uVar6 <= uVar8) {
        uVar7 = uVar8 - uVar6 & 0xff;
        goto LAB_10005b7c;
      }
      puVar10 = (undefined *)(*DAT_10005c44 + uVar8 * 0x18);
    }
    uVar6 = (**(code **)(puVar10 + 8))(param_1,pbVar11,uVar9);
    if ((uVar6 < 9) || (uVar9 < uVar6)) {
      uVar8 = uVar8 + 1 & 0xff;
      goto LAB_10005b62;
    }
    if ((bVar12 == 1) && (*(undefined **)(puVar10 + 8) == PTR_FUN_10006f18_1_10005c54)) {
      bVar12 = bVar1;
    }
    for (bVar4 = 0; bVar4 < bVar12; bVar4 = bVar4 + 1) {
      if (DAT_10005c3c[(byte)(pbVar11[2] + bVar4) + 3] != 0xff) {
        FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10005c38,PTR_s_process_set_config_10005c34,
                     DAT_10005c58);
        return 0;
      }
      DAT_10005c3c[(byte)(pbVar11[2] + bVar4) + 3] = (byte)uVar8;
    }
    FUN_1000820c(DAT_10005c3c + 0x13,pbVar11,uVar6,uVar8);
    pbVar11 = pbVar11 + uVar6;
LAB_10005be2:
    if (*DAT_10005c48 + 2 < uVar8) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10005c38,PTR_s_process_set_config_10005c34,0x3cc);
      return 0;
    }
  } while( true );
}



undefined4 FUN_10005c60(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_2 + 3) < 0x10) {
                    // WARNING: Could not recover jumptable at 0x10005c74. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(PTR_PTR_LAB_10005d30 + (uint)*(byte *)(param_2 + 3) * 4))
                      (*(undefined *)(param_2 + 2));
    return uVar1;
  }
  return 0;
}



bool FUN_10005d4c(void)

{
  return *(char *)(DAT_10005d58 + 1) != '\0';
}



uint FUN_10005d5c(void)

{
  return ((uint)*DAT_10005d68 << 0x1d) >> 0x1f;
}



undefined FUN_10005d6c(void)

{
  return *DAT_10005d74;
}



char FUN_10005d78(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  code **ppcVar6;
  uint uVar7;
  
  cVar3 = *DAT_10005e20;
  if (cVar3 == '\0') {
    FUN_10004edc(DAT_10005e24,0,0x53);
    uVar1 = DAT_10005e28;
    FUN_1000274c(DAT_10005e28);
    *DAT_10005e2c = uVar1;
    iVar2 = DAT_10005e30;
    FUN_10002798(DAT_10005e30 + 0x1c);
    FUN_10008840(iVar2);
    *DAT_10005e34 = iVar2;
    if (DAT_10005e38 != 0) {
      *DAT_10005e40 = DAT_10005e3c;
    }
    for (uVar7 = 0; uVar4 = (uint)*DAT_10005e3c, uVar7 <= uVar4 + 2; uVar7 = uVar7 + 1 & 0xff) {
      uVar5 = uVar7;
      if (DAT_10005e38 == 0) {
LAB_10005df8:
        if (uVar5 < 3) {
          ppcVar6 = (code **)(PTR_PTR_FUN_10006e28_1_10005e44 + uVar5 * 0x18);
        }
        else {
          ppcVar6 = (code **)0x0;
        }
      }
      else {
        if (uVar4 <= uVar7) {
          uVar5 = uVar7 - uVar4 & 0xff;
          goto LAB_10005df8;
        }
        ppcVar6 = (code **)(*DAT_10005e40 + uVar7 * 0x18);
      }
      (**ppcVar6)();
    }
    FUN_100055e4(param_1);
    FUN_1000557c(param_1);
    *DAT_10005e20 = '\x01';
    cVar3 = '\x01';
  }
  return cVar3;
}



void FUN_10005e48(undefined *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined local_1c;
  undefined local_1b;
  
  pbVar3 = DAT_10006018;
  bVar1 = param_1[1];
  if (bVar1 == 4) {
    if (-1 < (int)((uint)*DAT_10006018 << 0x1f)) {
      return;
    }
    *DAT_10006018 = *DAT_10006018 | 4;
    iVar7 = *DAT_1000601c;
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    do {
    } while (**(int **)(iVar7 + 0x1c) == 0);
    DataMemoryBarrier(0x1f);
    *(undefined4 *)(iVar7 + 0x20) = uVar5;
    iVar4 = FUN_100087ca(iVar7,param_1);
    uVar6 = *(uint *)(iVar7 + 0x20);
    DataMemoryBarrier(0x1f);
    **(undefined4 **)(iVar7 + 0x1c) = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      enableIRQinterrupts((uVar6 & 1) == 1);
    }
    if (iVar4 != 0) {
      return;
    }
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006024,PTR_s_osal_queue_send_10006020,0xa8,uVar6);
    return;
  }
  if (bVar1 < 5) {
    if (bVar1 == 2) {
      *DAT_10006018 = *DAT_10006018 & 0xfe;
      *pbVar3 = *pbVar3 & 0xfd;
      pbVar3[1] = 0;
      *pbVar3 = *pbVar3 & 0xfb;
      iVar7 = *DAT_1000601c;
      uVar5 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar5 = isIRQinterruptsEnabled();
      }
      disableIRQinterrupts();
      do {
      } while (**(int **)(iVar7 + 0x1c) == 0);
      DataMemoryBarrier(0x1f);
      *(undefined4 *)(iVar7 + 0x20) = uVar5;
      iVar4 = FUN_100087ca(iVar7,param_1);
      uVar6 = *(uint *)(iVar7 + 0x20);
      DataMemoryBarrier(0x1f);
      **(undefined4 **)(iVar7 + 0x1c) = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        enableIRQinterrupts((uVar6 & 1) == 1);
      }
      if (iVar4 != 0) {
        return;
      }
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006024,PTR_s_osal_queue_send_10006020,0xa8,uVar6);
      return;
    }
    if (bVar1 == 3) {
      if (-1 < (int)((uint)*DAT_10006018 << 0x1d)) {
        return;
      }
      *DAT_10006018 = *DAT_10006018 & 0xfb;
      FUN_10004edc(&local_1c,0,0xc);
      local_1c = *param_1;
      local_1b = 5;
      iVar7 = *DAT_1000601c;
      uVar5 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar5 = isIRQinterruptsEnabled();
      }
      disableIRQinterrupts();
      do {
      } while (**(int **)(iVar7 + 0x1c) == 0);
      DataMemoryBarrier(0x1f);
      *(undefined4 *)(iVar7 + 0x20) = uVar5;
      iVar4 = FUN_100087ca(iVar7,&local_1c);
      uVar6 = *(uint *)(iVar7 + 0x20);
      DataMemoryBarrier(0x1f);
      **(undefined4 **)(iVar7 + 0x1c) = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        enableIRQinterrupts((uVar6 & 1) == 1);
      }
      if (iVar4 != 0) {
        return;
      }
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006024,PTR_s_osal_queue_send_10006020,0xa8,uVar6);
      return;
    }
  }
  else if (bVar1 == 5) {
    if (-1 < (int)((uint)*DAT_10006018 << 0x1f)) {
      return;
    }
    *DAT_10006018 = *DAT_10006018 & 0xfb;
    iVar7 = *DAT_1000601c;
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    do {
    } while (**(int **)(iVar7 + 0x1c) == 0);
    DataMemoryBarrier(0x1f);
    *(undefined4 *)(iVar7 + 0x20) = uVar5;
    iVar4 = FUN_100087ca(iVar7,param_1);
    uVar6 = *(uint *)(iVar7 + 0x20);
    DataMemoryBarrier(0x1f);
    **(undefined4 **)(iVar7 + 0x1c) = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      enableIRQinterrupts((uVar6 & 1) == 1);
    }
    if (iVar4 != 0) {
      return;
    }
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006024,PTR_s_osal_queue_send_10006020,0xa8,uVar6);
    return;
  }
  iVar7 = *DAT_1000601c;
  uVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar5 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
  } while (**(int **)(iVar7 + 0x1c) == 0);
  DataMemoryBarrier(0x1f);
  *(undefined4 *)(iVar7 + 0x20) = uVar5;
  iVar4 = FUN_100087ca(iVar7,param_1);
  uVar6 = *(uint *)(iVar7 + 0x20);
  DataMemoryBarrier(0x1f);
  **(undefined4 **)(iVar7 + 0x1c) = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    enableIRQinterrupts((uVar6 & 1) == 1);
  }
  if (iVar4 == 0) {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006024,PTR_s_osal_queue_send_10006020,0xa8,uVar6);
  }
  return;
}



void FUN_10006028(undefined param_1,undefined param_2,undefined4 param_3)

{
  undefined local_1c;
  undefined local_1b;
  
  FUN_10004edc(&local_1c,0,0xc);
  local_1c = param_1;
  local_1b = param_2;
  FUN_10005e48(&local_1c,param_3);
  return;
}



void FUN_1000604e(undefined param_1,undefined param_2,undefined4 param_3)

{
  undefined local_24;
  undefined local_23;
  undefined local_20;
  
  FUN_10004edc(&local_24,0,0xc);
  local_23 = 1;
  local_24 = param_1;
  local_20 = param_2;
  FUN_10005e48(&local_24,param_3);
  return;
}



void FUN_10006078(undefined param_1,undefined4 param_2,undefined4 param_3)

{
  undefined local_1c;
  undefined local_1b;
  undefined auStack24 [8];
  
  FUN_10004edc(&local_1c,0,0xc);
  local_1b = 6;
  local_1c = param_1;
  FUN_10004ee8(auStack24,param_2,8);
  FUN_10005e48(&local_1c,param_3);
  return;
}



void FUN_100060ac(undefined param_1,undefined param_2,undefined4 param_3,undefined param_4,
                 undefined param_5)

{
  undefined local_2c;
  undefined local_2b;
  undefined local_28;
  undefined local_27;
  undefined4 local_24;
  
  FUN_10004edc(&local_2c,0,0xc);
  local_2b = 7;
  local_2c = param_1;
  local_28 = param_2;
  local_27 = param_4;
  local_24 = param_3;
  FUN_10005e48(&local_2c,param_5);
  return;
}



int FUN_100060f0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 2) & 0x70) == 0) {
    iVar1 = FUN_10008164(param_2,*(undefined *)(DAT_10006134 + 2));
    if (iVar1 == 0) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006140,PTR_s_usbd_edpt_open_1000613c,DAT_10006144);
    }
    else {
      iVar1 = FUN_1000567c(param_1,param_2);
    }
  }
  else {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006140,PTR_s_usbd_edpt_open_1000613c,DAT_10006138);
    iVar1 = 0;
  }
  return iVar1;
}



undefined4
FUN_10006148(undefined4 param_1,byte *param_2,int param_3,uint param_4,byte *param_5,byte *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (param_3 <= iVar3) {
      return 1;
    }
    if ((param_2[1] != 5) || ((param_2[3] & 3) != param_4)) break;
    iVar2 = FUN_100060f0(param_1,param_2);
    if (iVar2 == 0) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_100061cc,PTR_s_usbd_open_edpt_pair_100061c8,
                   DAT_100061d0);
      return 0;
    }
    bVar1 = param_2[2];
    if ((char)bVar1 < '\0') {
      *param_6 = bVar1;
    }
    else {
      *param_5 = bVar1;
    }
    param_2 = param_2 + *param_2;
    iVar3 = iVar3 + 1;
  }
  FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_100061cc,PTR_s_usbd_open_edpt_pair_100061c8,DAT_100061c4);
  return 0;
}



byte FUN_100061d4(undefined4 param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = param_2 & 0x7f;
  param_2 = param_2 >> 7;
  bVar1 = *(byte *)(DAT_10006258 + uVar3 * 2 + param_2 + 0x33);
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    if (-1 < (int)((uint)*(byte *)(DAT_10006258 + uVar3 * 2 + param_2 + 0x33) << 0x1d)) {
      FUN_10008fa0(*DAT_1000625c,0xffffffff);
      if ((int)((uint)*(byte *)(DAT_10006258 + uVar3 * 2 + param_2 + 0x33) << 0x1f) < 0) {
        bVar4 = 0;
      }
      else if ((int)((uint)*(byte *)(DAT_10006258 + uVar3 * 2 + param_2 + 0x33) << 0x1d) < 0) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      if (bVar4 != 0) {
        iVar2 = DAT_10006258 + uVar3 * 2 + param_2;
        *(byte *)(iVar2 + 0x33) = *(byte *)(iVar2 + 0x33) | 4;
      }
      FUN_10008f50(*DAT_1000625c);
    }
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}



int FUN_10006260(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 7;
  FUN_10008fa0(*DAT_100062c0,0xffffffff);
  iVar1 = (param_2 & 0x7f) * 2;
  if ((int)((uint)*(byte *)(DAT_100062c4 + iVar1 + uVar2 + 0x33) << 0x1f) < 0) {
    iVar1 = 0;
  }
  else if ((int)((uint)*(byte *)(DAT_100062c4 + iVar1 + uVar2 + 0x33) << 0x1d) < 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    iVar3 = DAT_100062c4 + (param_2 & 0x7f) * 2 + uVar2;
    *(byte *)(iVar3 + 0x33) = *(byte *)(iVar3 + 0x33) & 0xfb;
  }
  FUN_10008f50(*DAT_100062c0);
  return iVar1;
}



int FUN_100062c8(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 & 0x7f;
  param_2 = param_2 >> 7;
  if ((int)((uint)*(byte *)(DAT_10006338 + uVar2 * 2 + param_2 + 0x33) << 0x1f) < 0) {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006344,PTR_s_usbd_edpt_xfer_10006340,DAT_1000633c);
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_10006338 + uVar2 * 2 + param_2;
    *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 1;
    iVar1 = FUN_100056c4();
    if (iVar1 == 0) {
      iVar3 = DAT_10006338 + uVar2 * 2 + param_2;
      *(byte *)(iVar3 + 0x33) = *(byte *)(iVar3 + 0x33) & 0xfe;
      *(byte *)(iVar3 + 0x33) = *(byte *)(iVar3 + 0x33) & 0xfb;
    }
  }
  return iVar1;
}



byte FUN_10006348(undefined4 param_1,uint param_2)

{
  return *(byte *)(DAT_10006360 + (param_2 & 0x7f) * 2 + (param_2 >> 7) + 0x33) & 1;
}



void FUN_10006364(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (-1 < (int)((uint)*(byte *)(DAT_100063a0 + (param_2 & 0x7f) * 2 + (param_2 >> 7) + 0x33) <<
                0x1e)) {
    FUN_100056f4();
    iVar1 = DAT_100063a0 + (param_2 & 0x7f) * 2 + (param_2 >> 7);
    *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 2;
    *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 1;
  }
  return;
}



void FUN_100063a4(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(DAT_100063e0 + (param_2 & 0x7f) * 2 + (param_2 >> 7) + 0x33) << 0x1e) <
      0) {
    FUN_10005720();
    iVar1 = DAT_100063e0 + (param_2 & 0x7f) * 2 + (param_2 >> 7);
    *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) & 0xfd;
    *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) & 0xfe;
  }
  return;
}



uint FUN_100063e4(undefined4 param_1,uint param_2)

{
  return ((uint)*(byte *)(DAT_100063fc + (param_2 & 0x7f) * 2 + (param_2 >> 7) + 0x33) << 0x1e) >>
         0x1f;
}



uint FUN_10006400(uint param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined2 local_1a;
  
  FUN_10006b20(0);
  bVar1 = *param_2;
  bVar5 = bVar1 & 0x60;
  if (bVar5 == 0x60) {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_1000677c,PTR_s_process_control_request_10006778,
                 DAT_10006774);
    return 0;
  }
  if (bVar5 == 0x40) {
    if (DAT_10006780 == 0) {
      return 0;
    }
    FUN_10006b20(DAT_10006780);
    return param_1;
  }
  bVar4 = *param_2 & 0x1f;
  if (bVar4 != 1) {
    if (bVar4 != 2) {
      if ((*param_2 & 0x1f) != 0) {
        return 0;
      }
      if (bVar5 != 0x20) {
        if ((bVar1 & 0x60) != 0) {
          return 0;
        }
        if (9 < param_2[1]) {
          return 0;
        }
                    // WARNING: Could not recover jumptable at 0x10006484. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (**(code **)(PTR_PTR_LAB_10006784 + (uint)param_2[1] * 4))();
        return uVar2;
      }
      if (0xf < param_2[4]) {
        return 0;
      }
      uVar2 = (uint)*(byte *)(DAT_10006788 + (uint)param_2[4] + 3);
      if (DAT_1000678c != 0) {
        if (uVar2 < *DAT_10006790) {
          puVar3 = (undefined *)(*DAT_10006798 + uVar2 * 0x18);
          goto LAB_100064b6;
        }
        uVar2 = uVar2 - *DAT_10006790 & 0xff;
      }
      if (2 < uVar2) {
        return 0;
      }
      puVar3 = PTR_PTR_FUN_10006e28_1_10006794 + uVar2 * 0x18;
LAB_100064b6:
      if (puVar3 == (undefined *)0x0) {
        return 0;
      }
      uVar2 = FUN_10005a8c(param_1,puVar3,param_2);
      return uVar2;
    }
    bVar5 = param_2[4];
    if ((bVar5 & 0x70) != 0) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_1000677c,PTR_s_process_control_request_10006778,
                   DAT_100067a0);
      return 0;
    }
    uVar2 = (uint)*(byte *)(DAT_10006788 + (bVar5 & 0x7f) * 2 + (uint)(bVar5 >> 7) + 0x13);
    if (DAT_1000678c != 0) {
      if (uVar2 < *DAT_10006790) {
        puVar3 = (undefined *)(*DAT_10006798 + uVar2 * 0x18);
        goto LAB_100066ac;
      }
      uVar2 = uVar2 - *DAT_10006790 & 0xff;
    }
    if (uVar2 < 3) {
      puVar3 = PTR_PTR_FUN_10006e28_1_10006794 + uVar2 * 0x18;
    }
    else {
      puVar3 = (undefined *)0x0;
    }
LAB_100066ac:
    if ((bVar1 & 0x60) != 0) {
      if (puVar3 == (undefined *)0x0) {
        return 0;
      }
      uVar2 = FUN_10005a8c(param_1,puVar3,param_2);
      return uVar2;
    }
    bVar1 = param_2[1];
    if ((bVar1 != 1) && (bVar1 != 3)) {
      if (bVar1 != 0) {
        return 0;
      }
      local_1a = FUN_100063e4(param_1);
      FUN_10006a64(param_1,param_2,&local_1a,2);
      return 1;
    }
    if (*(short *)(param_2 + 2) == 0) {
      if (bVar1 == 1) {
        FUN_100063a4(param_1);
      }
      else {
        FUN_10006364(param_1);
      }
    }
    if (puVar3 != (undefined *)0x0) {
      FUN_10005a8c(param_1,puVar3,param_2);
      FUN_10006b20(0);
      if ((*(byte *)(DAT_10006788 + 0x34) & 1) != 0) {
        return *(byte *)(DAT_10006788 + 0x34) & 1;
      }
      FUN_10006a2c(param_1,param_2);
      return 1;
    }
    return 1;
  }
  if (0xf < param_2[4]) {
    return 0;
  }
  uVar2 = (uint)*(byte *)(DAT_10006788 + (uint)param_2[4] + 3);
  if (DAT_1000678c != 0) {
    if (uVar2 < *DAT_10006790) {
      puVar3 = (undefined *)(*DAT_10006798 + uVar2 * 0x18);
      goto LAB_10006610;
    }
    uVar2 = uVar2 - *DAT_10006790 & 0xff;
  }
  if (2 < uVar2) {
    return 0;
  }
  puVar3 = PTR_PTR_FUN_10006e28_1_10006794 + uVar2 * 0x18;
LAB_10006610:
  if (puVar3 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10005a8c(param_1,puVar3,param_2);
    if (((uVar2 == 0) && ((*param_2 & 0x60) == 0)) && (param_2[1] - 10 < 2)) {
      FUN_10006b20(0);
      if (param_2[1] == 10) {
        local_1a = (ushort)local_1a._1_1_ << 8;
        FUN_10006a64(param_1,param_2,&local_1a,1);
        uVar2 = 1;
      }
      else {
        FUN_10006a2c(param_1,param_2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



void FUN_100067b8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined uStack28;
  byte local_1b;
  
  iVar2 = FUN_10008154();
  if (iVar2 != 0) {
    while( true ) {
      iVar2 = *DAT_100069a4;
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = isIRQinterruptsEnabled();
      }
      disableIRQinterrupts();
      do {
      } while (**(int **)(iVar2 + 0x1c) == 0);
      DataMemoryBarrier(0x1f);
      *(undefined4 *)(iVar2 + 0x20) = uVar4;
      iVar3 = FUN_1000877e(iVar2,&uStack28);
      uVar5 = *(uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0x1f);
      **(undefined4 **)(iVar2 + 0x1c) = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        enableIRQinterrupts((uVar5 & 1) == 1);
      }
      if (iVar3 == 0) break;
      if (local_1b < 9) {
                    // WARNING: Could not recover jumptable at 0x10006818. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(PTR_PTR_LAB_100069a8 + (uint)local_1b * 4))();
        return;
      }
    }
  }
  return;
}



void FUN_100069d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  
  sVar1 = *(short *)(DAT_10006a24 + 0xc);
  sVar2 = *(short *)(DAT_10006a24 + 0xe);
  uVar5 = sVar1 - sVar2;
  if (0x40 < uVar5) {
    uVar5 = 0x40;
  }
  if (*DAT_10006a24 < '\0') {
    if (sVar1 == sVar2) {
      uVar3 = 0x80;
    }
    else {
      FUN_10004ee8(DAT_10006a28,*(undefined4 *)(DAT_10006a24 + 8),uVar5,DAT_10006a24,param_4);
      uVar3 = 0x80;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar4 = DAT_10006a28;
  if (sVar1 == sVar2) {
    uVar4 = 0;
  }
  FUN_100062c8(param_1,uVar3,uVar4,uVar5);
  return;
}



void FUN_10006a2c(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_10006a60;
  FUN_10004ee8(DAT_10006a60,param_2,8);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 0xe) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (*param_2 < '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80;
  }
  FUN_100062c8(param_1,uVar2,0,0);
  return;
}



int FUN_10006a64(undefined4 param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  iVar1 = DAT_10006b00;
  FUN_10004ee8(DAT_10006b00,param_2,8);
  *(int *)(iVar1 + 8) = param_3;
  *(undefined2 *)(iVar1 + 0xe) = 0;
  uVar3 = *(ushort *)(param_2 + 6);
  if (param_4 < uVar3) {
    uVar3 = (ushort)param_4;
  }
  *(ushort *)(DAT_10006b00 + 0xc) = uVar3;
  if (*(short *)(param_2 + 6) == 0) {
    if (*param_2 < '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80;
    }
    iVar1 = FUN_100062c8(param_1,uVar2,0,0);
    if (iVar1 == 0) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006b08,PTR_s_tud_control_xfer_10006b04,0x7e);
    }
  }
  else if ((uVar3 == 0) || (param_3 != 0)) {
    iVar1 = FUN_100069d4(param_1);
    if (iVar1 == 0) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006b08,PTR_s_tud_control_xfer_10006b04,0x79);
    }
  }
  else {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006b08,PTR_s_tud_control_xfer_10006b04,0x73);
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_10006b0c(void)

{
  FUN_10004edc(DAT_10006b1c,0,0x14);
  return;
}



void FUN_10006b20(undefined4 param_1)

{
  *(undefined4 *)(DAT_10006b28 + 0x10) = param_1;
  return;
}



void FUN_10006b2c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_10006b44;
  FUN_10004ee8(DAT_10006b44,param_1,8);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 0xe) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  return;
}



int FUN_10006b48(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((uint)(*DAT_10006c30 >> 7) == param_2 >> 7) {
    if (-1 < (char)*DAT_10006c30) {
      if (*(int *)(DAT_10006c30 + 8) == 0) {
        return 0;
      }
      FUN_10004ee8(*(int *)(DAT_10006c30 + 8),DAT_10006c40,param_4);
    }
    pbVar1 = DAT_10006c30;
    uVar3 = *(ushort *)(DAT_10006c30 + 0xe) + param_4 & 0xffff;
    *(short *)(DAT_10006c30 + 0xe) = (short)uVar3;
    *(uint *)(pbVar1 + 8) = *(int *)(pbVar1 + 8) + param_4;
    if ((uVar3 == *(ushort *)(pbVar1 + 6)) || (param_4 < 0x40)) {
      if ((*(code **)(DAT_10006c30 + 0x10) == (code *)0x0) ||
         (iVar4 = (**(code **)(DAT_10006c30 + 0x10))(param_1,1,DAT_10006c30), iVar4 != 0)) {
        if ((char)*DAT_10006c30 < '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x80;
        }
        iVar4 = FUN_100062c8(param_1,uVar2,0,0);
        if (iVar4 == 0) {
          FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006c3c,PTR_s_usbd_control_xfer_cb_10006c38,0xd8)
          ;
        }
      }
      else {
        FUN_100056f4(param_1,0);
        FUN_100056f4(param_1,0x80);
        iVar4 = 1;
      }
    }
    else {
      iVar4 = FUN_100069d4(param_1);
      if (iVar4 == 0) {
        FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006c3c,PTR_s_usbd_control_xfer_cb_10006c38,0xe3);
      }
    }
  }
  else if (param_4 == 0) {
    if (PTR_FUN_10005660_1_10006c34 != (undefined *)0x0) {
      FUN_10005660(param_1,DAT_10006c30);
    }
    if (*(code **)(DAT_10006c30 + 0x10) != (code *)0x0) {
      (**(code **)(DAT_10006c30 + 0x10))(param_1,2,DAT_10006c30);
    }
    iVar4 = 1;
  }
  else {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006c3c,PTR_s_usbd_control_xfer_cb_10006c38,0xab);
    iVar4 = 0;
  }
  return iVar4;
}



void FUN_10006c44(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_1000875e(param_1 + 0x10);
  if ((0x3f < uVar1) && (iVar2 = FUN_100061d4(0,*(undefined *)(param_1 + 3)), iVar2 != 0)) {
    uVar1 = FUN_1000875e(param_1 + 0x10);
    if (uVar1 < 0x40) {
      FUN_10006260(0,*(undefined *)(param_1 + 3));
    }
    else {
      FUN_100062c8(0,*(undefined *)(param_1 + 3),param_1 + 0xd8,0x40);
    }
  }
  return;
}



undefined4 FUN_10006c88(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_10005d4c();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_10005d5c();
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    if ((int)((uint)*(byte *)(DAT_10006cc8 + param_1 * 0x158 + 4) << 0x1f) < 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_10006ccc(int param_1)

{
  FUN_10008728(param_1 * 0x158 + 0x10 + DAT_10006ce0);
  return;
}



undefined4 FUN_10006ce4(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x158 + DAT_10006d08;
  uVar1 = FUN_100087c0(param_1 * 0x158 + 0x10 + DAT_10006d08,param_2,param_3);
  FUN_10006c44(iVar2);
  return uVar1;
}



int FUN_10006d0c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_10005d4c();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_10005d5c();
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    iVar3 = param_1 * 0x158 + DAT_10006dc8 + 0x2c;
    iVar2 = FUN_10008728(iVar3);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_100061d4(0,*(undefined *)(DAT_10006dc8 + param_1 * 0x158 + 2));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar4 = param_1 * 0x158 + 0x118 + DAT_10006dc8;
        iVar2 = FUN_100087c0(iVar3,iVar4,0x40);
        if (iVar2 == 0) {
          FUN_10006260(0,*(undefined *)(DAT_10006dc8 + param_1 * 0x158 + 2));
          iVar2 = 0;
        }
        else {
          iVar3 = FUN_100062c8(0,*(undefined *)(DAT_10006dc8 + param_1 * 0x158 + 2),iVar4,iVar2);
          if (iVar3 == 0) {
            FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10006dd0,PTR_s_tud_cdc_n_write_flush_10006dcc,
                         200);
            iVar2 = 0;
          }
        }
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 FUN_10006dd4(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x158 + DAT_10006e08 + 0x2c;
  uVar1 = FUN_10008836(iVar3,param_2,param_3);
  uVar2 = FUN_10008728(iVar3);
  if (0x3f < uVar2) {
    FUN_10006d0c(param_1);
  }
  return uVar1;
}



void FUN_10006e0c(int param_1)

{
  FUN_1000875e(param_1 * 0x158 + DAT_10006e24 + 0x2c);
  return;
}



void FUN_10006e28(void)

{
  bool bVar1;
  int iVar2;
  
  FUN_10004edc(DAT_10006ecc,0,0x158);
  bVar1 = false;
  while (iVar2 = DAT_10006ecc, !bVar1) {
    *(undefined *)(DAT_10006ecc + 5) = 0xff;
    *(short *)(iVar2 + 6) = (short)DAT_10006ed0;
    *(undefined2 *)(iVar2 + 8) = 1;
    *(undefined *)(iVar2 + 10) = 0;
    *(undefined *)(iVar2 + 0xb) = 0;
    *(undefined *)(iVar2 + 0xc) = 8;
    FUN_100086b6(iVar2 + 0x10,iVar2 + 0x48,0x40,1,0);
    FUN_100086b6(iVar2 + 0x2c,iVar2 + 0x88,0x40,1,1);
    FUN_1000274c(iVar2 + 200);
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(int *)(iVar2 + 0x28) = iVar2 + 200;
    FUN_1000274c(iVar2 + 0xd0);
    *(int *)(iVar2 + 0x40) = iVar2 + 0xd0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    bVar1 = true;
  }
  return;
}



uint FUN_10006f18(undefined4 param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_2[5] == 2) {
    if (param_2[6] == 2) {
      bVar2 = false;
      while (!bVar2) {
        pbVar5 = DAT_10007004;
        if (DAT_10007004[2] == 0) goto LAB_10006f32;
        bVar2 = true;
      }
      pbVar5 = (byte *)0x0;
LAB_10006f32:
      if (pbVar5 == (byte *)0x0) {
        FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_1000700c,PTR_s_cdcd_open_10007008,0x11e);
        uVar4 = 0;
      }
      else {
        *pbVar5 = param_2[2];
        param_2 = param_2 + *param_2;
        for (uVar4 = 9; (param_2[1] == 0x24 && (uVar4 <= param_3)); uVar4 = bVar1 + uVar4 & 0xffff)
        {
          bVar1 = *param_2;
          param_2 = param_2 + bVar1;
        }
        if (param_2[1] == 5) {
          iVar3 = FUN_100060f0(param_1,param_2);
          if (iVar3 == 0) {
            FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_1000700c,PTR_s_cdcd_open_10007008,0x132);
            return 0;
          }
          pbVar5[1] = param_2[2];
          uVar4 = *param_2 + uVar4 & 0xffff;
          param_2 = param_2 + *param_2;
        }
        if ((param_2[1] == 4) && (param_2[5] == 10)) {
          bVar1 = *param_2;
          iVar3 = FUN_10006148(param_1,param_2 + bVar1,2,2,pbVar5 + 3,pbVar5 + 2);
          if (iVar3 == 0) {
            FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_1000700c,PTR_s_cdcd_open_10007008,0x142);
            return 0;
          }
          uVar4 = (bVar1 + uVar4 & 0xffff) + 0xe & 0xffff;
        }
        FUN_10006c44(pbVar5);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



int FUN_10007140(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  int unaff_r5;
  uint uVar4;
  undefined8 uVar5;
  
  bVar1 = false;
  while (((!bVar1 && (unaff_r5 = DAT_10007264, *(byte *)(DAT_10007264 + 3) != param_2)) &&
         (*(byte *)(DAT_10007264 + 2) != param_2))) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_1000726c,PTR_s_cdcd_xfer_cb_10007268,0x1af);
    iVar3 = 0;
  }
  else {
    if (*(byte *)(unaff_r5 + 3) == param_2) {
      iVar3 = unaff_r5 + 0x10;
      FUN_10008836(iVar3,unaff_r5 + 0xd8,param_4 & 0xffff);
      uVar2 = extraout_r1;
      if ((DAT_10007270 != 0) && (*(char *)(unaff_r5 + 5) != -1)) {
        for (uVar4 = 0; uVar4 < param_4; uVar4 = uVar4 + 1) {
          if (*(char *)(unaff_r5 + 5) == *(char *)(unaff_r5 + uVar4 + 0xd8)) {
            uVar5 = FUN_1000874e(iVar3,uVar2);
            uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
            if ((int)uVar5 == 0) {
              uVar2 = (uint)*(byte *)(unaff_r5 + 5);
            }
          }
        }
      }
      if ((DAT_10007274 != 0) && (iVar3 = FUN_1000874e(iVar3,uVar2), iVar3 == 0)) {
        FUN_10000b38(0);
      }
      FUN_10006c44(unaff_r5);
    }
    if (*(byte *)(unaff_r5 + 2) == param_2) {
      iVar3 = FUN_10006d0c(0);
      if (iVar3 == 0) {
        iVar3 = FUN_10008728(unaff_r5 + 0x2c);
        if (iVar3 == 0) {
          if (param_4 == 0) {
            iVar3 = 1;
          }
          else if ((param_4 & 0x3f) == 0) {
            iVar3 = FUN_100061d4(param_1,*(undefined *)(unaff_r5 + 2));
            if (iVar3 == 0) {
              iVar3 = 1;
            }
            else {
              FUN_100062c8(param_1,*(undefined *)(unaff_r5 + 2),0,0);
            }
          }
          else {
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  return iVar3;
}



void FUN_1000727c(int param_1)

{
  *(undefined *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined *)(param_1 + 0x3c) = 0;
  *(undefined *)(param_1 + 0x3d) = 0;
  *(undefined *)(param_1 + 0x3e) = 0;
  return;
}



undefined4 FUN_10007294(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (*(ushort *)(param_1 + 0x16) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 0x16) >> 8);
  if (*(uint *)(param_1 + 8) == 0) {
    if (uVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  else if ((*(char *)(param_1 + 0xf) == '(') && (-1 < *(char *)(param_1 + 0xc))) {
    uVar1 = 2;
  }
  else if ((*(char *)(param_1 + 0xf) == '*') && (*(char *)(param_1 + 0xc) < '\0')) {
    uVar1 = 2;
  }
  else if (uVar2 == 0) {
    uVar1 = 1;
  }
  else if (*(uint *)(param_1 + 8) < uVar2) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_100072f8(undefined4 param_1,undefined param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  
  iVar1 = DAT_1000730c;
  *(undefined *)(DAT_1000730c + 0x3c) = param_2;
  *(undefined *)(iVar1 + 0x3d) = param_3;
  *(undefined *)(iVar1 + 0x3e) = param_4;
  return 1;
}



undefined4 FUN_10007310(undefined4 param_1,byte *param_2)

{
  undefined4 uVar1;
  
  if (0x25 < *param_2) {
    return 0xffffffff;
  }
                    // WARNING: Could not recover jumptable at 0x10007326. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(PTR_PTR_LAB_10007564 + (uint)*param_2 * 4))();
  return uVar1;
}



void FUN_10007578(undefined4 param_1,int param_2,undefined param_3)

{
  int iVar1;
  
  *(undefined *)(param_2 + 0x2c) = param_3;
  iVar1 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x38);
  *(char *)(param_2 + 0x28) = (char)iVar1;
  *(char *)(param_2 + 0x29) = (char)((uint)iVar1 >> 8);
  *(char *)(param_2 + 0x2a) = (char)((uint)iVar1 >> 0x10);
  *(char *)(param_2 + 0x2b) = (char)((uint)iVar1 >> 0x18);
  *(undefined *)(param_2 + 0x30) = 2;
  if (*(char *)(param_2 + 0x3c) == '\0') {
    FUN_100072f8(*(undefined *)(param_2 + 0xd),5,0x20);
  }
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x28) != 0)) {
    if (*(char *)(param_2 + 0xc) < '\0') {
      FUN_10006364(param_1,*(undefined *)(param_2 + 0x2e));
    }
    else {
      FUN_10006364(param_1,*(undefined *)(param_2 + 0x2f));
    }
  }
  return;
}



void FUN_1000760c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((DAT_1000767c == 0) || (iVar1 = FUN_10000cd4(*(undefined *)(param_2 + 0xd)), iVar1 != 0)) {
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x38);
    if (0x200 < uVar2) {
      uVar2 = 0x200;
    }
    iVar1 = FUN_100062c8(param_1,*(undefined *)(param_2 + 0x2f),DAT_10007680,uVar2 & 0xffff);
    if (iVar1 == 0) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_1000768c,PTR_s_proc_write10_cmd_10007688,DAT_10007684)
      ;
    }
  }
  else {
    FUN_100072f8(*(undefined *)(param_2 + 0xd),7,0x27,0);
    FUN_10007578(param_1,param_2,1);
  }
  return;
}



void FUN_10007690(undefined4 param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  uint uVar5;
  int iVar6;
  
  uVar4 = (*(ushort *)(param_2 + 0x16) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 0x16) >> 8);
  if (uVar4 != 0) {
    uVar2 = FUN_100040e0(*(undefined4 *)(param_2 + 8));
    uVar4 = (uint)uVar2;
  }
  uVar1 = *(uint *)(param_2 + 0x11);
  iVar6 = *(int *)(param_2 + 0x38);
  iVar3 = FUN_100040e0(iVar6,uVar4);
  uVar5 = *(int *)(param_2 + 8) - iVar6;
  if (0x200 < uVar5) {
    uVar5 = 0x200;
  }
  FUN_100040e0(iVar6,uVar4);
  uVar4 = FUN_10000cb0(*(undefined *)(param_2 + 0xd),
                       iVar3 + (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18),extraout_r1,
                       DAT_10007778,uVar5);
  if ((int)uVar4 < 0) {
    FUN_100072f8(*(undefined *)(param_2 + 0xd),3,0x33,0);
    FUN_10007578(param_1,param_2,1);
  }
  else if (uVar4 == 0) {
    FUN_100060ac(param_1,*(undefined *)(param_2 + 0x2e),0,0,0);
  }
  else {
    iVar3 = FUN_100062c8(param_1,*(undefined *)(param_2 + 0x2e),DAT_10007778,uVar4 & 0xffff);
    if (iVar3 == 0) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10007784,PTR_s_proc_read10_cmd_10007780,DAT_1000777c);
    }
  }
  return;
}



void FUN_10007788(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (*(ushort *)(param_2 + 0x16) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 0x16) >> 8);
  if (uVar5 != 0) {
    uVar2 = FUN_100040e0(*(undefined4 *)(param_2 + 8),uVar5);
    uVar5 = (uint)uVar2;
  }
  uVar1 = *(uint *)(param_2 + 0x11);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  iVar3 = FUN_100040e0(uVar4,uVar5);
  FUN_100040e0(uVar4,uVar5);
  uVar5 = FUN_10000cd8(*(undefined *)(param_2 + 0xd),
                       iVar3 + (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18),extraout_r1,
                       DAT_10007870,param_3);
  if ((int)uVar5 < 0) {
    *(uint *)(param_2 + 0x38) = param_3 + *(int *)(param_2 + 0x38);
    FUN_100072f8(*(undefined *)(param_2 + 0xd),3,0x33,0);
    FUN_10007578(param_1,param_2,1);
  }
  else if (uVar5 < param_3) {
    if (0 < (int)uVar5) {
      *(uint *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + uVar5;
      FUN_100088c8(DAT_10007870,DAT_10007870 + uVar5,param_3 - uVar5);
    }
    FUN_100060ac(param_1,*(undefined *)(param_2 + 0x2f),param_3 - uVar5,0,0);
  }
  else {
    param_3 = param_3 + *(int *)(param_2 + 0x38);
    *(uint *)(param_2 + 0x38) = param_3;
    if (param_3 < *(uint *)(param_2 + 0x34)) {
      FUN_1000760c(param_1,param_2);
    }
    else {
      *(undefined *)(param_2 + 0x30) = 2;
    }
  }
  return;
}



undefined4 FUN_1000789c(undefined4 param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_10007938;
  if (param_2[5] == 8) {
    if (param_2[6] == 6) {
      if (param_2[7] == 0x50) {
        if (param_3 < 0x17) {
          FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10007940,PTR_s_mscd_open_1000793c,0x10b);
          uVar3 = 0;
        }
        else {
          *(byte *)(DAT_10007938 + 0x2d) = param_2[2];
          iVar1 = FUN_10006148(param_1,param_2 + *param_2,2,2,iVar2 + 0x2f,iVar2 + 0x2e);
          iVar2 = DAT_10007938;
          if (iVar1 == 0) {
            FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10007940,PTR_s_mscd_open_1000793c,0x111);
            uVar3 = 0;
          }
          else {
            *(undefined *)(DAT_10007938 + 0x30) = 0;
            iVar2 = FUN_100062c8(param_1,*(undefined *)(iVar2 + 0x2f),iVar2,0x1f);
            if (iVar2 == 0) {
              FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10007940,PTR_s_mscd_open_1000793c,0x114);
              uVar3 = 0x17;
            }
            else {
              uVar3 = 0x17;
            }
          }
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_10007944(undefined4 param_1,int param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  char acStack17 [5];
  
  iVar4 = DAT_10007ac0;
  if (param_2 != 0) {
    return 1;
  }
  if ((((*param_3 & 0x7f) == 2) && (param_3[1] == 1)) && (*(short *)(param_3 + 2) == 0)) {
    cVar1 = *(char *)(DAT_10007ac0 + 0x30);
    if (cVar1 == '\x04') {
      FUN_10006364();
    }
    else if (*(byte *)(DAT_10007ac0 + 0x2e) == param_3[4]) {
      if (cVar1 == '\x02') {
        *(int *)(DAT_10007ac0 + 0x28) = *(int *)(DAT_10007ac0 + 8) - *(int *)(DAT_10007ac0 + 0x38);
        *(undefined *)(iVar4 + 0x30) = 3;
        iVar4 = FUN_100062c8(param_1,*(undefined *)(iVar4 + 0x2e),iVar4 + 0x20,0xd);
        if (iVar4 == 0) {
          FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10007ac8,PTR_s_mscd_control_xfer_cb_10007ac4,0x143
                      );
          return 0;
        }
      }
    }
    else {
      bVar2 = *(byte *)(DAT_10007ac0 + 0x2f);
      if ((bVar2 == param_3[4]) && (cVar1 == '\0')) {
        iVar4 = FUN_10006348(param_1,bVar2);
        if (iVar4 == 0) {
          iVar4 = FUN_100063e4(param_1,bVar2);
          if (iVar4 == 0) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = false;
        }
        iVar4 = DAT_10007ac0;
        if (bVar3) {
          *(undefined *)(DAT_10007ac0 + 0x30) = 0;
          iVar4 = FUN_100062c8(param_1,*(undefined *)(iVar4 + 0x2f),iVar4,0x1f);
          if (iVar4 == 0) {
            FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10007ac8,PTR_s_mscd_control_xfer_cb_10007ac4,
                         0x14e);
            return 0;
          }
        }
      }
    }
    return 1;
  }
  if ((*param_3 & 0x60) == 0x20) {
    if (param_3[1] == 0xfe) {
      if ((*(short *)(param_3 + 2) == 0) && (*(short *)(param_3 + 6) == 1)) {
        acStack17[0] = '\x01';
        if (DAT_10007acc != 0) {
          acStack17[0] = (char)param_1;
        }
        if (acStack17[0] != '\0') {
          acStack17[0] = acStack17[0] + -1;
          FUN_10006a64(param_1,param_3,acStack17,1);
          return 1;
        }
      }
      uVar5 = 0;
    }
    else if (param_3[1] == 0xff) {
      if (*(short *)(param_3 + 2) == 0) {
        if (*(short *)(param_3 + 6) == 0) {
          FUN_1000727c(DAT_10007ac0);
          FUN_10006a2c(param_1,param_3);
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



void FUN_10007e0c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10006348(0,*(undefined *)(param_1 + 2));
  if ((iVar1 == 0) && (uVar2 = FUN_1000875e(param_1 + 4), 0x3f < uVar2)) {
    FUN_100062c8(0,*(undefined *)(param_1 + 2),param_1 + 0xcc,0x40);
  }
  return;
}



int FUN_10007e38(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10006348(0,*(undefined *)(param_1 + 1));
  if (iVar1 == 0) {
    iVar1 = FUN_100087c0(param_1 + 0x20,param_1 + 0x10c,0x40);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_100062c8(0,*(undefined *)(param_1 + 1),param_1 + 0x10c);
      if (iVar1 == 0) {
        FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10007e88,PTR_s_maybe_transmit_10007e84,0x7c);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_10007e8c(int param_1)

{
  FUN_10008728(param_1 * 0x14c + DAT_10007ea0 + 4);
  return;
}



undefined4 FUN_10007ea4(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x14c + DAT_10007ec4;
  uVar1 = FUN_100087c0(iVar2 + 4,param_2,param_3);
  FUN_10007e0c(iVar2);
  return uVar1;
}



void FUN_10007ec8(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x14c + DAT_10007ee4;
  FUN_10008840(iVar1 + 4);
  FUN_10007e0c(iVar1);
  return;
}



undefined4 FUN_10007ee8(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x14c + DAT_10007f0c;
  uVar1 = FUN_10008836(param_1 * 0x14c + 0x20 + DAT_10007f0c,param_2,param_3);
  FUN_10007e38(iVar2);
  return uVar1;
}



void FUN_10007f10(void)

{
  bool bVar1;
  int iVar2;
  
  FUN_10004edc(DAT_10007fa4,0,0x14c);
  bVar1 = false;
  while (iVar2 = DAT_10007fa4, !bVar1) {
    FUN_100086b6(DAT_10007fa4 + 4,DAT_10007fa4 + 0x3c,0x40,1,0);
    FUN_100086b6(iVar2 + 0x20,iVar2 + 0x7c,0x40,1,0);
    FUN_1000274c(iVar2 + 0xbc);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(int *)(iVar2 + 0x1c) = iVar2 + 0xbc;
    FUN_1000274c(iVar2 + 0xc4);
    *(int *)(iVar2 + 0x34) = iVar2 + 0xc4;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    bVar1 = true;
  }
  return;
}



uint FUN_10007fe0(undefined4 param_1,byte *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (param_2[5] == 0xff) {
    pbVar5 = param_2 + *param_2;
    pbVar4 = pbVar5 + param_3;
    bVar1 = false;
    while (!bVar1) {
      if ((DAT_100080bc[1] == 0) && (pbVar6 = DAT_100080bc, DAT_100080bc[2] == 0))
      goto LAB_10007ffc;
      bVar1 = true;
    }
    pbVar6 = (byte *)0x0;
LAB_10007ffc:
    if (pbVar6 == (byte *)0x0) {
      uVar2 = 0;
    }
    else {
      *pbVar6 = param_2[2];
      if (param_2[4] != 0) {
        for (; (pbVar5[1] != 5 && (pbVar5 < pbVar4)); pbVar5 = pbVar5 + *pbVar5) {
        }
        iVar3 = FUN_10006148(param_1,pbVar5,param_2[4],2,pbVar6 + 2,pbVar6 + 1);
        if (iVar3 == 0) {
          FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_100080c4,PTR_s_vendord_open_100080c0,0xcf);
          return 0;
        }
        pbVar5 = pbVar5 + (uint)param_2[4] * 7;
        if ((pbVar6[2] != 0) &&
           (iVar3 = FUN_100062c8(param_1,pbVar6[2],pbVar6 + 0xcc,0x40), iVar3 == 0)) {
          FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_100080c4,PTR_s_vendord_open_100080c0,0xd6);
          return 0;
        }
        if (pbVar6[1] != 0) {
          FUN_10007e38(pbVar6);
        }
      }
      uVar2 = (int)pbVar5 - (int)param_2 & 0xffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_100080c8(undefined4 param_1,uint param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = DAT_10008128;
  while( true ) {
    if (bVar1) {
      return 0;
    }
    if ((*(byte *)(iVar2 + 2) == param_2) || (*(byte *)(iVar2 + 1) == param_2)) break;
    bVar1 = true;
    iVar2 = iVar2 + 0x14c;
  }
  if (*(byte *)(iVar2 + 2) != param_2) {
    if (*(byte *)(iVar2 + 1) != param_2) {
      return 1;
    }
    FUN_10007e38(iVar2);
    return 1;
  }
  FUN_10008836(iVar2 + 4,iVar2 + 0xcc,param_4);
  if (DAT_1000812c != 0) {
    FUN_10000e08(0);
  }
  FUN_10007e0c(iVar2);
  return 1;
}



int FUN_10008130(void)

{
  int iVar1;
  
  iVar1 = FUN_10005d78(0);
  if (iVar1 == 0) {
    FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10008150,PTR_s_tusb_init_1000814c,0x29);
  }
  return iVar1;
}



int FUN_10008154(void)

{
  int iVar1;
  
  iVar1 = FUN_10005d6c();
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



undefined4 FUN_10008164(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 4) | (*(byte *)(param_1 + 5) & 7) << 8;
  bVar3 = *(byte *)(param_1 + 3) & 3;
  if (bVar3 == 2) {
    if (param_2 == 2) {
      if (uVar2 == 0x200) {
        uVar1 = 1;
      }
      else {
        FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10008208,PTR_s_tu_edpt_validate_10008204,0x58);
        uVar1 = 0;
      }
    }
    else if (uVar2 < 0x41) {
      uVar1 = 1;
    }
    else {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10008208,PTR_s_tu_edpt_validate_10008204,0x5c);
      uVar1 = 0;
    }
  }
  else if (bVar3 == 3) {
    if (param_2 == 2) {
      uVar4 = 0x400;
    }
    else {
      uVar4 = 0x40;
    }
    if (uVar4 < uVar2) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10008208,PTR_s_tu_edpt_validate_10008204,99);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (bVar3 == 1) {
    uVar4 = DAT_10008200;
    if (param_2 == 2) {
      uVar4 = 0x400;
    }
    if (uVar4 < uVar2) {
      FUN_1000520c(PTR_s__s__d__ASSERT_FAILED_10008208,PTR_s_tu_edpt_validate_10008204,0x50);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_1000820c(int param_1,byte *param_2,uint param_3,undefined param_4)

{
  byte bVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + bVar1 & 0xffff) {
    if (param_2[1] == 5) {
      *(undefined *)(param_1 + (param_2[2] & 0x7f) * 2 + (uint)(param_2[2] >> 7)) = param_4;
    }
    bVar1 = *param_2;
    param_2 = param_2 + bVar1;
  }
  return;
}



uint FUN_10008236(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + param_3 & 0xffff;
  if ((uVar1 < param_2) || (*(ushort *)(param_1 + 0xc) < uVar1)) {
    uVar1 = uVar1 + *(ushort *)(param_1 + 10) & 0xffff;
  }
  return uVar1;
}



uint FUN_1000824e(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 < param_3) ||
     (uVar1 = param_2 - param_3 & 0xffff, *(ushort *)(param_1 + 0xc) < uVar1)) {
    uVar1 = (param_2 - param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 10) & 0xffff;
  }
  return uVar1;
}



uint FUN_1000826c(int param_1,uint param_2)

{
  for (; *(ushort *)(param_1 + 4) <= param_2; param_2 = param_2 - *(ushort *)(param_1 + 4) & 0xffff)
  {
  }
  return param_2;
}



bool FUN_1000827c(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_3 - param_4 & 0xffff;
  if (param_3 < param_4) {
    uVar3 = uVar3 - *(ushort *)((int)param_1 + 10) & 0xffff;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 1);
  if (uVar4 < uVar3) {
    uVar1 = FUN_1000824e(param_1,param_3,uVar4);
    *(undefined2 *)(param_1 + 4) = uVar1;
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    iVar2 = FUN_1000826c(param_1,param_4);
    FUN_10004ee8(param_2,*param_1 + (uint)*(ushort *)((int)param_1 + 6) * iVar2);
  }
  return uVar3 != 0;
}



void FUN_100082cc(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 local_1c [2];
  
  uVar1 = param_3 >> 2;
  while (uVar1 != 0) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    uVar1 = uVar1 - 1 & 0xffff;
  }
  if ((param_3 & 3) != 0) {
    local_1c[0] = 0;
    FUN_10004ee8(local_1c,param_2,param_3 & 3);
    *param_1 = local_1c[0];
  }
  return;
}



void FUN_10008318(int *param_1,undefined4 *param_2,uint param_3,int param_4,char param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_2c [2];
  
  uVar1 = (uint)*(ushort *)(param_1 + 1) - param_4 & 0xffff;
  uVar5 = (uint)*(ushort *)((int)param_1 + 6);
  uVar6 = uVar5 * uVar1;
  uVar4 = uVar5 * (param_3 + (param_4 - (uint)*(ushort *)(param_1 + 1)) & 0xffff) & 0xffff;
  iVar7 = *param_1 + uVar5 * param_4;
  if (param_5 == '\0') {
    if (uVar1 < param_3) {
      FUN_10004ee8(param_2,iVar7,uVar6 & 0xffff);
      FUN_10004ee8((uVar6 & 0xffff) + (int)param_2,*param_1,uVar4);
    }
    else {
      FUN_10004ee8(param_2,iVar7,uVar5 * param_3);
    }
  }
  else if (param_5 == '\x01') {
    if (uVar1 < param_3) {
      FUN_100082cc(param_2,iVar7);
      puVar3 = (undefined *)(iVar7 + (uVar6 & 0xfffc));
      if ((uVar6 & 3) == 0) {
        puVar3 = (undefined *)*param_1;
      }
      else {
        uVar1 = 4 - (uVar6 & 3) & 0xffff;
        if (uVar4 < uVar1) {
          uVar1 = uVar4;
        }
        uVar4 = uVar4 - (uVar1 & 0xff) & 0xffff;
        local_2c[0] = 0;
        puVar2 = local_2c;
        uVar5 = uVar6 & 3;
        while (uVar5 != 0) {
          *(undefined *)puVar2 = *puVar3;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = puVar3 + 1;
          uVar5 = uVar5 - 1 & 0xff;
        }
        puVar3 = (undefined *)*param_1;
        while (uVar5 = uVar1 & 0xff, uVar1 = uVar5 - 1, uVar5 != 0) {
          *(undefined *)puVar2 = *puVar3;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = puVar3 + 1;
        }
        *param_2 = local_2c[0];
      }
      if (uVar4 != 0) {
        FUN_100082cc(param_2,puVar3,uVar4);
      }
    }
    else {
      FUN_100082cc(param_2,iVar7,uVar5 * param_3 & 0xffff);
    }
  }
  return;
}



uint FUN_10008424(int param_1,undefined4 param_2,uint param_3,uint param_4,ushort param_5,
                 undefined param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)param_5;
  uVar4 = param_4 - uVar3 & 0xffff;
  if (param_4 < uVar3) {
    uVar4 = uVar4 - *(ushort *)(param_1 + 10) & 0xffff;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 4);
  if (uVar5 < uVar4) {
    uVar1 = FUN_1000824e(param_1,param_4,uVar5);
    *(undefined2 *)(param_1 + 0x10) = uVar1;
    uVar3 = (uint)*(ushort *)(param_1 + 0x10);
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    uVar2 = FUN_1000826c(param_1,uVar3);
    FUN_10008318(param_1,param_2,uVar4,uVar2,param_6);
  }
  return uVar4;
}



undefined4 FUN_10008482(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008fa0(*(int *)(param_1 + 0x18),0xffffffff);
  }
  uVar2 = FUN_10008424(param_1,param_2,param_3,*(undefined2 *)(param_1 + 0xe),
                       *(undefined2 *)(param_1 + 0x10),param_4);
  uVar1 = FUN_10008236(param_1,*(undefined2 *)(param_1 + 0x10),uVar2);
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008f50();
  }
  return uVar2;
}



void FUN_100084d0(undefined *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14;
  
  uVar2 = param_3 >> 2;
  while (uVar2 != 0) {
    uVar1 = *param_2;
    *param_1 = (char)uVar1;
    param_1[1] = (char)((uint)uVar1 >> 8);
    param_1[2] = (char)((uint)uVar1 >> 0x10);
    param_1[3] = (char)((uint)uVar1 >> 0x18);
    param_1 = param_1 + 4;
    uVar2 = uVar2 - 1 & 0xffff;
  }
  if ((param_3 & 3) != 0) {
    local_14 = *param_2;
    FUN_10004ee8(param_1,&local_14,param_3 & 3);
  }
  return;
}



void FUN_10008510(int *param_1,undefined4 *param_2,uint param_3,int param_4,char param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_2c [2];
  
  uVar1 = (uint)*(ushort *)(param_1 + 1) - param_4 & 0xffff;
  uVar5 = (uint)*(ushort *)((int)param_1 + 6);
  uVar6 = uVar5 * uVar1;
  uVar4 = uVar5 * (param_3 + (param_4 - (uint)*(ushort *)(param_1 + 1)) & 0xffff) & 0xffff;
  iVar7 = *param_1 + uVar5 * param_4;
  if (param_5 == '\0') {
    if (uVar1 < param_3) {
      FUN_10004ee8(iVar7,param_2,uVar6 & 0xffff);
      FUN_10004ee8(*param_1,(uVar6 & 0xffff) + (int)param_2,uVar4);
    }
    else {
      FUN_10004ee8(iVar7,param_2,uVar5 * param_3);
    }
  }
  else if (param_5 == '\x01') {
    if (uVar1 < param_3) {
      FUN_100084d0(iVar7,param_2);
      puVar3 = (undefined *)(iVar7 + (uVar6 & 0xfffc));
      if ((uVar6 & 3) == 0) {
        puVar3 = (undefined *)*param_1;
      }
      else {
        uVar1 = 4 - (uVar6 & 3) & 0xffff;
        if (uVar4 < uVar1) {
          uVar1 = uVar4;
        }
        uVar4 = uVar4 - (uVar1 & 0xff) & 0xffff;
        local_2c[0] = *param_2;
        puVar2 = local_2c;
        uVar5 = uVar6 & 3;
        while (uVar5 != 0) {
          *puVar3 = *(undefined *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = puVar3 + 1;
          uVar5 = uVar5 - 1 & 0xff;
        }
        puVar3 = (undefined *)*param_1;
        while (uVar5 = uVar1 & 0xff, uVar1 = uVar5 - 1, uVar5 != 0) {
          *puVar3 = *(undefined *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = puVar3 + 1;
        }
      }
      if (uVar4 != 0) {
        FUN_100084d0(puVar3,param_2,uVar4);
      }
    }
    else {
      FUN_100084d0(iVar7,param_2,uVar5 * param_3 & 0xffff);
    }
  }
  return;
}



uint FUN_10008618(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_10008fa0(*(int *)(param_1 + 0x14),0xffffffff);
    }
    uVar7 = *(ushort *)(param_1 + 0xe);
    uVar5 = *(ushort *)(param_1 + 0x10);
    if (*(char *)(param_1 + 8) == '\0') {
      sVar3 = uVar7 - uVar5;
      if (uVar7 < uVar5) {
        sVar3 = sVar3 - *(short *)(param_1 + 10);
      }
      uVar4 = *(short *)(param_1 + 4) - sVar3;
      uVar5 = (ushort)param_3;
      if (uVar4 < param_3) {
        uVar5 = uVar4;
      }
      param_3 = (uint)uVar5;
    }
    else {
      uVar6 = (uint)*(ushort *)(param_1 + 4);
      if (uVar6 <= param_3) {
        param_2 = param_2 + (param_3 - uVar6) * (uint)*(ushort *)(param_1 + 6);
        param_3 = uVar6;
        uVar7 = uVar5;
      }
    }
    uVar2 = FUN_1000826c(param_1,uVar7);
    FUN_10008510(param_1,param_2,param_3,uVar2,param_4);
    uVar1 = FUN_10008236(param_1,uVar7,param_3);
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_10008f50();
    }
  }
  return param_3;
}



undefined4
FUN_100086b6(undefined4 *param_1,undefined4 param_2,uint param_3,undefined2 param_4,
            undefined param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (param_3 < 0x8001) {
    if (param_1[5] != 0) {
      FUN_10008fa0(param_1[5],0xffffffff);
    }
    if (param_1[6] != 0) {
      FUN_10008fa0(param_1[6],0xffffffff);
    }
    *param_1 = param_2;
    *(short *)(param_1 + 1) = (short)param_3;
    *(undefined2 *)((int)param_1 + 6) = param_4;
    *(undefined *)(param_1 + 2) = param_5;
    uVar1 = (short)param_3 * 2 - 1;
    *(ushort *)(param_1 + 3) = uVar1;
    *(ushort *)((int)param_1 + 10) = ~uVar1;
    *(undefined2 *)((int)param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    if (param_1[5] != 0) {
      FUN_10008f50();
    }
    if (param_1[6] == 0) {
      uVar2 = 1;
    }
    else {
      FUN_10008f50();
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



ushort FUN_10008728(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0xe) - *(ushort *)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 0xe) < *(ushort *)(param_1 + 0x10)) {
    uVar2 = uVar2 - *(short *)(param_1 + 10);
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar2 < *(ushort *)(param_1 + 4)) {
    uVar1 = uVar2;
  }
  return uVar1;
}



bool FUN_1000874e(int param_1)

{
  return *(short *)(param_1 + 0xe) == *(short *)(param_1 + 0x10);
}



short FUN_1000875e(int param_1)

{
  short sVar1;
  
  sVar1 = *(ushort *)(param_1 + 0xe) - *(ushort *)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 0xe) < *(ushort *)(param_1 + 0x10)) {
    sVar1 = sVar1 - *(short *)(param_1 + 10);
  }
  return *(short *)(param_1 + 4) - sVar1;
}



uint FUN_1000877e(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008fa0(*(int *)(param_1 + 0x18),0xffffffff);
  }
  uVar2 = FUN_1000827c(param_1,param_2,*(undefined2 *)(param_1 + 0xe),
                       *(undefined2 *)(param_1 + 0x10));
  uVar1 = FUN_10008236(param_1,*(undefined2 *)(param_1 + 0x10),uVar2 & 0xffff);
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008f50();
  }
  return uVar2;
}



void FUN_100087c0(void)

{
  FUN_10008482();
  return;
}



char FUN_100087ca(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  short sVar5;
  
  if (param_1[5] != 0) {
    FUN_10008fa0(param_1[5],0xffffffff);
  }
  uVar1 = *(ushort *)((int)param_1 + 0xe);
  sVar5 = uVar1 - *(ushort *)(param_1 + 4);
  if (uVar1 < *(ushort *)(param_1 + 4)) {
    sVar5 = sVar5 - *(short *)((int)param_1 + 10);
  }
  if ((*(short *)(param_1 + 1) != sVar5) || (cVar2 = *(char *)(param_1 + 2), cVar2 != '\0')) {
    iVar4 = FUN_1000826c(param_1,uVar1);
    FUN_10004ee8((uint)*(ushort *)((int)param_1 + 6) * iVar4 + *param_1,param_2);
    uVar3 = FUN_10008236(param_1,uVar1,1);
    *(undefined2 *)((int)param_1 + 0xe) = uVar3;
    if (param_1[5] == 0) {
      cVar2 = '\x01';
    }
    else {
      FUN_10008f50();
      cVar2 = '\x01';
    }
  }
  return cVar2;
}



void FUN_10008836(void)

{
  FUN_10008618();
  return;
}



undefined4 FUN_10008840(int param_1)

{
  ushort uVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10008fa0(*(int *)(param_1 + 0x14),0xffffffff);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008fa0(*(int *)(param_1 + 0x18),0xffffffff);
  }
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  uVar1 = *(short *)(param_1 + 4) * 2 - 1;
  *(ushort *)(param_1 + 0xc) = uVar1;
  *(ushort *)(param_1 + 10) = ~uVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10008f50();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008f50();
  }
  return 1;
}



undefined4 FUN_1000888c(int param_1,undefined param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10008fa0(*(int *)(param_1 + 0x14),0xffffffff);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008fa0(*(int *)(param_1 + 0x18),0xffffffff);
  }
  *(undefined *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10008f50();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10008f50();
  }
  return 1;
}



void FUN_100088c8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)((int)param_2 + param_3))) {
    iVar2 = param_3 - 1;
    if (param_3 == 0) {
      return;
    }
    do {
      *(undefined *)((int)param_1 + iVar2) = *(undefined *)((int)param_2 + iVar2);
      bVar8 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar8);
    return;
  }
  uVar5 = param_3;
  if (0xf < param_3) {
    uVar7 = ((uint)param_2 | (uint)param_1) & 3;
    if ((((uint)param_2 | (uint)param_1) & 3) != 0) {
      iVar2 = param_3 - 1;
      goto LAB_100088f0;
    }
    puVar4 = param_1;
    puVar6 = param_2;
    do {
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4[2] = puVar6[2];
      puVar1 = puVar6 + 3;
      puVar6 = puVar6 + 4;
      puVar4[3] = *puVar1;
      bVar8 = puVar4 != (undefined4 *)((param_3 - 0x10 & 0xfffffff0) + (int)param_1);
      puVar4 = puVar4 + 4;
    } while (bVar8);
    iVar2 = (param_3 - 0x10 >> 4) + 1;
    param_2 = param_2 + iVar2 * 4;
    uVar5 = param_3 & 0xf;
    param_1 = param_1 + iVar2 * 4;
    if ((param_3 & 0xc) != 0) {
      do {
        *(undefined4 *)((int)param_1 + uVar7) = *(undefined4 *)((int)param_2 + uVar7);
        uVar7 = uVar7 + 4;
      } while (3 < uVar5 - uVar7);
      iVar2 = (uVar5 - 4 >> 2) + 1;
      param_1 = param_1 + iVar2;
      param_2 = param_2 + iVar2;
      uVar5 = param_3 & 3;
    }
  }
  iVar2 = uVar5 - 1;
  if (uVar5 == 0) {
    return;
  }
LAB_100088f0:
  iVar3 = 0;
  do {
    *(undefined *)((int)param_1 + iVar3) = *(undefined *)((int)param_2 + iVar3);
    bVar8 = iVar2 != iVar3;
    iVar3 = iVar3 + 1;
  } while (bVar8);
  return;
}



uint * FUN_10008974(uint *param_1,char param_2)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == '\0') {
    uVar4 = (uint)param_1 & 3;
    while (uVar4 != 0) {
      if (*(char *)param_1 == '\0') {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      uVar4 = (uint)param_1 & 3;
    }
    uVar4 = *param_1 + DAT_10008a2c & ~*param_1;
    while ((uVar4 & DAT_10008a30) == 0) {
      puVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar4 = *puVar1 + DAT_10008a2c & ~*puVar1;
    }
    cVar3 = *(char *)param_1;
    while (cVar3 != '\0') {
      pcVar2 = (char *)((int)param_1 + 1);
      param_1 = (uint *)((int)param_1 + 1);
      cVar3 = *pcVar2;
    }
  }
  else {
    uVar4 = (uint)param_1 & 3;
    while (uVar4 != 0) {
      if (*(char *)param_1 == '\0') {
        return (uint *)0x0;
      }
      if (*(char *)param_1 == param_2) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      uVar4 = (uint)param_1 & 3;
    }
    uVar6 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    uVar5 = *param_1;
    uVar4 = uVar6 ^ uVar5;
    if (((uVar4 + DAT_10008a2c & ~uVar4 | uVar5 + DAT_10008a2c & ~uVar5) & DAT_10008a30) != 0)
    goto LAB_100089ca;
    do {
      uVar4 = param_1[1];
      uVar5 = uVar4 ^ uVar6;
      param_1 = param_1 + 1;
    } while (((uVar4 + DAT_10008a2c & ~uVar4 | uVar5 + DAT_10008a2c & ~uVar5) & DAT_10008a30) == 0);
    cVar3 = *(char *)param_1;
    while (cVar3 != '\0') {
      if (param_2 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
LAB_100089ca:
      cVar3 = *(char *)param_1;
    }
    param_1 = (uint *)0x0;
  }
  return param_1;
}



int FUN_10008a34(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = (uint)param_1 & 3;
  puVar2 = param_1;
  while (uVar1 != 0) {
    if (*(char *)puVar2 == '\0') goto LAB_10008a4c;
    puVar2 = (uint *)((int)puVar2 + 1);
    uVar1 = (uint)puVar2 & 3;
  }
  uVar1 = *puVar2 + DAT_10008a88 & ~*puVar2;
  puVar3 = puVar2;
  while ((puVar2 = puVar3, (uVar1 & DAT_10008a8c) == 0 &&
         (puVar2 = puVar3 + 1, (puVar3[1] + DAT_10008a88 & ~puVar3[1] & DAT_10008a8c) == 0))) {
    puVar2 = puVar3 + 2;
    puVar3 = puVar3 + 2;
    uVar1 = *puVar2 + DAT_10008a88 & ~*puVar2;
  }
  for (; *(char *)puVar2 != '\0'; puVar2 = (uint *)((int)puVar2 + 1)) {
  }
LAB_10008a4c:
  return (int)puVar2 - (int)param_1;
}



int FUN_10008a90(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      if (*pcVar2 == '\0') {
        return (int)pcVar2 - (int)param_1;
      }
      pcVar2 = pcVar2 + 1;
    } while (param_1 + param_2 != pcVar2);
    iVar1 = (int)(param_1 + param_2) - (int)param_1;
  }
  return iVar1;
}



int FUN_10008ab4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_10008a90(param_2,param_3);
  if ((((param_3 <= uVar1) && (*(char *)(param_2 + uVar1) != '\0')) ||
      (iVar2 = FUN_10008da8(param_1,param_3,param_2,uVar1), iVar2 == 0)) ||
     (iVar3 = FUN_10008af4(param_1,0,iVar2 - param_1), iVar3 != 0)) {
    iVar2 = 0;
  }
  return iVar2;
}



uint * FUN_10008af4(uint *param_1,char param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  
  if (((uint)param_1 & 3) == 0) {
LAB_10008b1a:
    if (3 < param_3) {
      do {
        uVar1 = *param_1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        if ((uVar1 + DAT_10008b64 & ~uVar1 & DAT_10008b60) != 0) goto LAB_10008b26;
        param_3 = param_3 - 4;
        param_1 = param_1 + 1;
      } while (3 < param_3);
    }
    if (param_3 != 0) {
LAB_10008b26:
      puVar2 = (uint *)((int)param_1 + param_3);
      do {
        if (*(char *)param_1 == param_2) {
          return param_1;
        }
        param_1 = (uint *)((int)param_1 + 1);
      } while (puVar2 != param_1);
    }
  }
  else {
    uVar1 = param_3 - 1;
    if (param_3 != 0) {
      do {
        if (*(char *)param_1 == param_2) {
          return param_1;
        }
        param_1 = (uint *)((int)param_1 + 1);
        param_3 = uVar1;
        if (((uint)param_1 & 3) == 0) goto LAB_10008b1a;
        bVar3 = uVar1 != 0;
        uVar1 = uVar1 - 1;
      } while (bVar3);
    }
  }
  return (uint *)0x0;
}



int FUN_10008b68(int param_1,int param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  iVar2 = DAT_10008da0;
  if (param_4 < 2) {
    uVar12 = 1;
    uVar5 = 0;
  }
  else {
    uVar4 = 1;
    uVar12 = 1;
    uVar14 = 0;
    uVar5 = 1;
    uVar3 = 0xffffffff;
LAB_10008ba2:
    do {
      uVar6 = uVar14;
      if (param_3[uVar5] < param_3[uVar4 + uVar3]) {
        uVar4 = 1;
        uVar12 = uVar5 - uVar3;
      }
      else {
        if (param_3[uVar5] != param_3[uVar4 + uVar3]) {
          uVar4 = 1;
          uVar5 = uVar6 + 2;
          uVar12 = 1;
          uVar14 = uVar6 + 1;
          uVar3 = uVar6;
          if (param_4 <= uVar5) break;
          goto LAB_10008ba2;
        }
        if (uVar12 == uVar4) {
          uVar4 = 1;
          uVar5 = uVar6 + uVar12;
        }
        else {
          uVar4 = uVar4 + 1;
          uVar5 = uVar6;
        }
      }
      uVar7 = uVar5 + uVar4;
      uVar14 = uVar5;
      uVar5 = uVar7;
      uVar6 = uVar3;
    } while (uVar7 < param_4);
    uVar4 = 1;
    uVar7 = 1;
    uVar14 = 0;
    uVar5 = 1;
    uVar3 = 0xffffffff;
LAB_10008be8:
    do {
      uVar13 = uVar14;
      if (param_3[uVar7 + uVar3] < param_3[uVar5]) {
        uVar4 = uVar5 - uVar3;
        uVar7 = 1;
      }
      else {
        if (param_3[uVar5] != param_3[uVar7 + uVar3]) {
          uVar4 = 1;
          uVar7 = 1;
          uVar15 = 1;
          uVar5 = uVar13 + 2;
          uVar14 = uVar13 + 1;
          uVar3 = uVar13;
          if (param_4 <= uVar5) break;
          goto LAB_10008be8;
        }
        if (uVar7 == uVar4) {
          uVar5 = uVar13 + uVar7;
          uVar7 = 1;
        }
        else {
          uVar7 = uVar7 + 1;
          uVar5 = uVar13;
        }
      }
      uVar8 = uVar5 + uVar7;
      uVar14 = uVar5;
      uVar5 = uVar8;
      uVar13 = uVar3;
      uVar15 = uVar4;
    } while (uVar8 < param_4);
    uVar5 = uVar6 + 1;
    if (uVar6 + 1 <= uVar13 + 1) {
      uVar12 = uVar15;
      uVar5 = uVar13 + 1;
    }
  }
  puVar9 = (uint *)(&stack0xffffffec + DAT_10008da0);
  do {
    *puVar9 = param_4;
    puVar9 = puVar9 + 1;
  } while ((uint *)(&stack0x000003ec + DAT_10008da0) != puVar9);
  uVar14 = 0xffffffff;
  if (param_4 != 0) {
    uVar14 = param_4 - 1;
    pbVar10 = param_3;
    do {
      bVar1 = *pbVar10;
      iVar11 = uVar14 - (int)pbVar10;
      pbVar10 = pbVar10 + 1;
      *(byte **)(&stack0xffffffec + (uint)bVar1 * 4 + DAT_10008da0) = param_3 + iVar11;
    } while (param_3 + param_4 != pbVar10);
  }
  uVar3 = FUN_10008f04(param_3,param_3 + uVar12,uVar5);
  if (uVar3 != 0) {
    uVar3 = param_4 - uVar5;
    if (param_4 - uVar5 < uVar5) {
      uVar3 = uVar5;
    }
    uVar6 = 0;
    uVar12 = *(uint *)(&stack0xffffffec + (uint)*(byte *)(param_1 + uVar14) * 4 + iVar2);
    uVar4 = uVar5;
    iVar11 = param_1;
    if (uVar12 == 0) goto joined_r0x10008d52;
LAB_10008d38:
    do {
      uVar6 = uVar12 + uVar6;
      while( true ) {
        if (param_2 - param_4 < uVar6) {
          return 0;
        }
        iVar11 = param_1 + uVar6;
        uVar12 = *(uint *)(&stack0xffffffec + (uint)*(byte *)(iVar11 + uVar14) * 4 + iVar2);
        uVar4 = uVar5;
        if (uVar12 != 0) break;
joined_r0x10008d52:
        while (uVar12 = uVar4, uVar4 = uVar5, uVar12 < uVar14) {
          if (param_3[uVar12] != *(byte *)(iVar11 + uVar12)) {
            uVar6 = uVar6 + (1 - uVar5);
            goto LAB_10008d38;
          }
          uVar4 = uVar12 + 1;
        }
        do {
          if (uVar4 == 0) {
            return iVar11;
          }
          uVar4 = uVar4 - 1;
        } while (param_3[uVar4] == *(byte *)(iVar11 + uVar4));
        uVar6 = uVar6 + uVar3 + 1;
      }
    } while( true );
  }
  *(uint *)(&stack0xffffffe8 + iVar2) = uVar5 - 1;
  *(uint *)(&stack0xffffffe0 + iVar2) = 1 - uVar5;
  uVar4 = 0;
  *(uint *)(&stack0xffffffe4 + iVar2) = param_4 - uVar12;
  do {
    while( true ) {
      iVar11 = param_1 + uVar4;
      uVar6 = *(uint *)(&stack0xffffffec + (uint)*(byte *)(iVar11 + uVar14) * 4 + iVar2);
      if (uVar6 == 0) break;
      if ((uVar3 != 0) && (uVar6 < uVar12)) {
        uVar6 = *(uint *)(&stack0xffffffe4 + iVar2);
      }
LAB_10008c88:
      uVar4 = uVar4 + uVar6;
      uVar3 = 0;
      if (param_2 - param_4 < uVar4) {
        return 0;
      }
    }
    uVar6 = uVar3;
    if (uVar3 < uVar5) {
      uVar6 = uVar5;
    }
    for (; uVar6 < uVar14; uVar6 = uVar6 + 1) {
      if (param_3[uVar6] != *(byte *)(iVar11 + uVar6)) {
        uVar4 = uVar4 + *(int *)(&stack0xffffffe0 + iVar2);
        goto LAB_10008c88;
      }
    }
    uVar6 = *(uint *)(&stack0xffffffe8 + iVar2);
    uVar7 = uVar5;
    if (uVar3 < uVar5) {
      do {
        uVar7 = uVar6 + 1;
        if (param_3[uVar6] != *(byte *)(iVar11 + uVar6)) break;
        bVar16 = uVar3 != uVar6;
        uVar6 = uVar6 - 1;
        uVar7 = uVar3;
      } while (bVar16);
    }
    if (uVar7 < uVar3 + 1) {
      return iVar11;
    }
    uVar4 = uVar4 + uVar12;
    uVar3 = *(uint *)(&stack0xffffffe4 + iVar2);
    if (param_2 - param_4 < uVar4) {
      return 0;
    }
  } while( true );
}



byte * FUN_10008da8(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte local_128 [260];
  
  if (param_4 != 0) {
    if (param_4 == 1) {
      param_1 = (byte *)FUN_10008af4(param_1,*param_3,param_2);
    }
    else {
      if (param_4 <= param_2) {
        pbVar8 = param_1 + (param_2 - param_4);
        if (param_4 == 2) {
          uVar4 = (uint)*param_3 << 0x10 | (uint)param_3[1];
          pbVar3 = param_1 + 1;
          uVar7 = (uint)*param_1 << 0x10 | (uint)param_1[1];
          if (pbVar3 <= pbVar8) {
            if (uVar4 == uVar7) {
              return param_1;
            }
            while( true ) {
              pbVar6 = pbVar3;
              uVar7 = uVar7 << 0x10 | (uint)pbVar6[1];
              pbVar3 = pbVar8 + 1;
              if (pbVar6 + 1 == pbVar8 + 1) break;
              pbVar3 = pbVar6 + 1;
              if (uVar4 == uVar7) {
                return pbVar6;
              }
            }
          }
          if (uVar4 == uVar7) {
            return pbVar3 + -1;
          }
          return (byte *)0x0;
        }
        if (0x100 < param_4) {
          pbVar8 = (byte *)FUN_10008b68(param_1,param_2,param_3);
          return pbVar8;
        }
        uVar7 = param_4 - 1;
        FUN_10004edc(local_128,0);
        uVar4 = 1;
        do {
          local_128[(uint)param_3[uVar4] + (uint)param_3[uVar4 - 1] * -8 & 0xff] = (byte)uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar7);
        uVar4 = (uint)param_3[uVar7] + (uint)param_3[param_4 - 2] * -8 & 0xff;
        bVar1 = local_128[uVar4];
        local_128[uVar4] = (byte)uVar7;
        uVar4 = 0;
LAB_10008e2e:
        if (param_1 <= pbVar8) {
          do {
            pbVar3 = param_1 + (param_4 - 2);
            do {
              param_1 = param_1 + uVar7;
              uVar5 = (uint)local_128[(uint)*param_1 + (uint)*pbVar3 * -8 & 0xff];
              if (pbVar8 < param_1) break;
              pbVar3 = pbVar3 + uVar7;
            } while (uVar5 == 0);
            param_1 = param_1 + -uVar5;
            if (uVar5 < uVar7) goto LAB_10008e2e;
            if ((uVar7 < 0x10) ||
               (iVar2 = FUN_10008f04(param_1 + uVar4,param_3 + uVar4,4), iVar2 == 0)) {
              iVar2 = FUN_10008f04(param_1,param_3,uVar7);
              if (iVar2 == 0) {
                return param_1;
              }
              if (uVar4 < 4) {
                uVar4 = param_4 - 5;
              }
              else {
                uVar4 = uVar4 - 4;
              }
            }
            param_1 = param_1 + (uVar7 - bVar1);
            if (pbVar8 < param_1) break;
          } while( true );
        }
      }
      param_1 = (byte *)0x0;
    }
  }
  return param_1;
}



int FUN_10008f04(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  
  if (3 < param_3) {
    if ((((uint)param_1 | (uint)param_2) & 3) != 0) goto LAB_10008f2a;
    do {
      if (*param_1 != *param_2) goto LAB_10008f2a;
      param_3 = param_3 - 4;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (3 < param_3);
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10008f2a:
  iVar1 = 0;
  do {
    if ((uint)*(byte *)((int)param_1 + iVar1) != (uint)*(byte *)((int)param_2 + iVar1)) {
      return (uint)*(byte *)((int)param_1 + iVar1) - (uint)*(byte *)((int)param_2 + iVar1);
    }
    bVar2 = param_3 - 1 != iVar1;
    iVar1 = iVar1 + 1;
  } while (bVar2);
  return 0;
}



void FUN_10008f4c(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008f5c)(param_1);
  return;
}



void FUN_10008f50(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008f5c)(param_1);
  return;
}



void FUN_10008f60(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008f6c)(param_1);
  return;
}



void FUN_10008f70(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008f7c)(param_1);
  return;
}



void FUN_10008f80(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008f8c)(param_1);
  return;
}



void FUN_10008f90(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008f98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008f9c)(param_1);
  return;
}



void FUN_10008fa0(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008fa8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008fac)(param_1);
  return;
}



void FUN_10008fb0(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008fb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_10008fbc)(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10008fc0(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x10008fc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_10008fcc)(param_1);
  return;
}



undefined4 FUN_1000c4d0(int **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = DAT_d0000000;
  if (*param_1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1000c710(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000c558,0x7a,
                 PTR_s_mutex_enter_block_until_1000c554,PTR_s_mtx__core_spin_lock_1000c550);
  }
  do {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    do {
    } while (**param_1 == 0);
    DataMemoryBarrier(0x1f);
    if (*(char *)(param_1 + 1) < '\0') {
      *(undefined *)(param_1 + 1) = uVar2;
      DataMemoryBarrier(0x1f);
      **param_1 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        enableIRQinterrupts((uVar4 & 1) == 1);
      }
      return 1;
    }
    DataMemoryBarrier(0x1f);
    **param_1 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts((uVar4 & 1) == 1);
    }
    iVar3 = FUN_1000c720(param_3,param_4);
  } while (iVar3 == 0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x1000c590)

void FUN_1000c55c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1000c740();
  if ((longlong)uVar2 < 0) {
                    // WARNING: Subroutine does not return
    FUN_1000c710(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000c5cc,0x3f,
                 PTR_s_update_us_since_boot_1000c5c8,PTR_s_us_since_boot____INT64_MAX_1000c5c4);
  }
  lVar3 = FUN_1000c6f0(param_2,0,1000,0);
  iVar1 = (int)(lVar3 + uVar2 >> 0x20);
  if (lVar3 + uVar2 < uVar2) {
    iVar1 = -1;
  }
  if (-1 < iVar1) {
    FUN_1000c4d0(param_1);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_1000c710(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000c5cc,0x3f,
               PTR_s_update_us_since_boot_1000c5c8,PTR_s_us_since_boot____INT64_MAX_1000c5c4);
}



void FUN_1000c5d0(int **param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  do {
  } while (**param_1 == 0);
  DataMemoryBarrier(0x1f);
  if (-1 < *(char *)(param_1 + 1)) {
    *(undefined *)(param_1 + 1) = 0xff;
    DataMemoryBarrier(0x1f);
    **param_1 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts((uVar2 & 1) == 1);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_1000c710(PTR_s__Users_tom_Git_pico_pico_sdk_src_1000c618,0xa9,PTR_s_mutex_exit_1000c614,
               PTR_s_lock_is_owner_id_valid_mtx__owne_1000c610);
}



void FUN_1000c6f0(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x1000c6f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000c6fc)(param_1);
  return;
}



void FUN_1000c710(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x1000c718. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000c71c)(param_1);
  return;
}



void FUN_1000c720(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x1000c728. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000c72c)(param_1);
  return;
}



void FUN_1000c740(undefined4 param_1)

{
                    // WARNING: Could not recover jumptable at 0x1000c748. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_1000c74c)(param_1);
  return;
}


