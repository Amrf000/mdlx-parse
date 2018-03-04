#include "CMdlScanner.h"
#include "MDLDATA.h"
#include <stdint.h>

int sub_6F0196B6(uint8_t *a1)
{
	uint8_t *i; // ecx@2
	int result; // eax@3
	int v3; // eax@4
	unsigned int v4; // edx@10

	if (a1)
	{
		for (i = a1; ; ++i)
		{
			v3 = (int)i;
			if (!((unsigned __int8)i & 3))
				break;
			if (!*i)
				goto LABEL_16;
		}
		do
		{
			do
			{
				v4 = *(uint32_t *)i;
				i += 4;
			} while (((v4 ^ (v4 + 2130640639)) & 0x81010100) == -2130640640);
			if (!(uint8_t)v4)
			{
				v3 = (int)(i - 4);
				goto LABEL_16;
			}
			if (!BYTE1(v4))
			{
				v3 = (int)(i - 3);
				goto LABEL_16;
			}
			if (!(unsigned __int8)(v4 >> 16))
			{
				v3 = (int)(i - 2);
				goto LABEL_16;
			}
		} while (BYTE3(v4));
		v3 = (int)(i - 1);
	LABEL_16:
		result = v3 - (uint32_t)a1;
	}
	else
	{
		sub_6F71AA9C();
		sub_6F01BA2E(87);
		result = 0;
	}
	return result;
}


char sub_6F5B0300(uint8_t *a1)
{
	uint8_t *v1; // esi@1
	int v2; // eax@1
	int v3; // edx@2
	int v4; // eax@5

	v1 = a1;
	v2 = sub_6F0196B6(a1) - 4;
	if (v2 >= 0)
	{
		v3 = (int)&v1[v2];
		if (v1[v2] == 46 && (*(uint8_t *)(v3 + 1) & 0xDF) == 77 && (*(uint8_t *)(v3 + 2) & 0xDF) == 68)
		{
			v4 = *(uint8_t *)(v3 + 3) & 0xDF;
			if (v4 == 76)
				return 0;
			if (v4 == 88)
				return 1;
		}
	}
	return 2;
}

int sub_6F019500(uint8_t *a1, uint8_t *a2, int a3)
{
	return (int)memcpy(a1, a2, a3);
}

int sub_6F1ECB50(void *a1, uint32_t *a2, uint32_t *a3, int a4)
{
	int v4; // esi@6
	int v5; // eax@9
	void *v6; // eax@13
	int v7; // eax@18
	int v9; // [sp+2Ch] [bp-1Ch]@5

	*a2 = 0;
	if (a3)
		*a3 = 0;
	sub_6F54F886((int)dword_6FF324E8);
	if (TSHashTable<UncachableNode, HASHKEY_STRI>::Ptr(dword_6FF32480, a1) || !dword_6FF32628)
	{
		v4 = sub_6F01796C((int)a1, (int)a2, (int)a3, 1u, 0);
		goto LABEL_22;
	}
	v9 = sub_6F1ECB18(a1);
	if (!v9)
	{
		v4 = 0;
		goto LABEL_22;
	}
	if (byte_6FF32520)
	{
		if (a4)
		{
			v5 = TSHashTable<PrefetchListFile, HASHKEY_STRI_P>::Ptr(dword_6FF32440, a1);
			if (!v5)
				v5 = TSHashTable_P<PrefetchListFile, HASHKEY_STRI_P>::New(dword_6FF32440, a1, 0, 0);
			*(uint32_t *)(v5 + 24) = 1;
			goto LABEL_15;
		}
	LABEL_13:
		v6 = sub_6F00A3FE(
			*(uint32_t *)(v9 + 28) + 1,
			(int)"/Volumes/F1/usrbuild/xb/build/War3x_B6401/War3/Source/Mac/../../../Engine/Source/Base/FileCache.cpp",
			644,
			0);
		*a2 = v6;
		if (*(uint32_t *)(v9 + 28) + 1 > 0)
			memmove(v6, *(const void **)(v9 + 24), *(uint32_t *)(v9 + 28) + 1);
		goto LABEL_15;
	}
	if (!a4)
		goto LABEL_13;
LABEL_15:
	if (a3)
		*a3 = *(uint32_t *)(v9 + 28);
	--*(uint32_t *)(v9 + 52);
	if (a4)
	{
		*a2 = *(uint32_t *)(v9 + 24);
		*(uint32_t *)(v9 + 24) = 0;
		v7 = *(uint32_t *)(v9 + 28);
		if (v7)
		{
			dword_6FF3262C -= v7;
			TSHashTable<PrefetchNode, HASHKEY_STRI>::DeleteNode(&dword_6FF324C0, v9);
			--dword_6FF32630;
		}
	}
	v4 = 1;
LABEL_22:
	sub_6F54F890((int)dword_6FF324E8);
	return v4;
}

int sub_6F01986E(uint8_t *path, uint8_t *ext, int len)
{
	uint8_t *cext; // esi@1
	signed int v4; // eax@2
	int v6; // eax@10
	int v7; // edx@13
	int v8; // eax@15
	uint8_t *i; // ecx@19
	unsigned int v10; // edx@23
	int v11; // eax@29
	uint8_t *v12; // edi@29
	int j; // ecx@29
	char v14; // al@30
	int v15; // edi@34
	unsigned int v16; // edx@35
	unsigned int *v17; // ecx@35
	uint8_t *v18; // eax@39
	unsigned int *v19; // ecx@39
	int v20; // eax@47
	uint8_t *v21; // edi@47
	int k; // ecx@47
	char v23; // al@48
	int v24; // [sp+14h] [bp-24h]@17
	uint8_t *v25; // [sp+18h] [bp-20h]@17
	int v26; // [sp+1Ch] [bp-1Ch]@35

	cext = ext;
	if (path)
	{
		v4 = 1;
	}
	else
	{
		sub_6F71AA9C();
		v4 = 0;
	}
	if (!ext)
	{
		sub_6F71AA9C();
	LABEL_7:
		sub_6F01BA2E(87);
		return 0;
	}
	if (!v4)
		goto LABEL_7;
	if (!len)
		return 0;
	v24 = (int)&path[len];
	v25 = &path[len - 1];
	if (len != 0x7FFFFFFF)
		*(uint8_t *)(v24 - 1) = 0;
	for (i = path; ; ++i)
	{
		v6 = (int)i;
		if (!((unsigned __int8)i & 3))
			break;
		if (!*i)
			goto LABEL_29;
	}
	do
	{
		do
		{
			v10 = *(uint32_t *)i;
			i += 4;
		} while (((v10 ^ (v10 + 2130640639)) & 0x81010100) == -2130640640);
		if (!(uint8_t)v10)
		{
			v6 = (int)(i - 4);
			goto LABEL_29;
		}
		if (!BYTE1(v10))
		{
			v6 = (int)(i - 3);
			goto LABEL_29;
		}
		if (!(unsigned __int8)(v10 >> 16))
		{
			v6 = (int)(i - 2);
			goto LABEL_29;
		}
	} while (BYTE3(v10));
	v6 = (int)(i - 1);
LABEL_29:
	v11 = v6 - (uint32_t)v25;
	v12 = &v25[v11];
	for (j = v11; (unsigned __int8)cext & 3 && j; ++j)
	{
		v7 = (int)v12;
		v14 = *cext;
		*v12++ = *cext++;
		if (!v14)
			return v7 - (uint32_t)path;
	}
	v15 = j + 3;
	if (j + 3 >= 0)
	{
	LABEL_47:
		v20 = v15 - 3;
		v21 = &v25[v15 - 3];
		for (k = v20; k; ++k)
		{
			v7 = (int)v21;
			v23 = *cext;
			*v21++ = *cext++;
			if (!v23)
				return v7 - (uint32_t)path;
		}
		*v25 = 0;
		v7 = (int)v25;
	}
	else
	{
		v26 = v24 - 4;
		v16 = *(uint32_t *)cext;
		cext += 4;
		v17 = (unsigned int *)(v15 + v24 - 4);
		while (((v16 ^ (v16 + 2130640639)) & 0x81010100) == -2130640640)
		{
			*v17 = v16;
			++v17;
			v15 += 4;
			if (v15 >= 0)
			{
			LABEL_46:
				v25 = (uint8_t *)(v26 + 3);
				goto LABEL_47;
			}
			v16 = *(uint32_t *)cext;
			cext += 4;
		}
		v18 = cext;
		v19 = (unsigned int *)(v15 + v26);
		while (1)
		{
			cext = v18;
			if (!(uint8_t)v16)
			{
				v7 = v15 + v26;
				*(uint8_t *)(v15 + v26) = 0;
				return v7 - (uint32_t)path;
			}
			if (!BYTE1(v16))
			{
				*(uint16_t *)(v26 + v15) = (unsigned __int8)v16;
				v7 = v15 + v26 + 1;
				return v7 - (uint32_t)path;
			}
			if (!(unsigned __int8)(v16 >> 16))
			{
				v8 = v15 + v26;
				*(uint16_t *)v8 = v16;
				*(uint8_t *)(v8 + 2) = 0;
				v7 = v15 + v26 + 2;
				return v7 - (uint32_t)path;
			}
			*v19 = v16;
			if (!BYTE3(v16))
				break;
			v18 += 4;
			++v19;
			v15 += 4;
			if (v15 >= 0)
				goto LABEL_46;
			v16 = *(uint32_t *)cext;
		}
		v7 = v15 + v26 + 3;
	}
	return v7 - (uint32_t)path;
}

uint8_t *sub_6F0192C0(uint8_t *a1, char a2)
{
	uint8_t *v2; // edx@2
	uint8_t *v3; // edi@2

	if (a1)
	{
		v2 = a1;
		v3 = 0;
		while (*v2)
		{
			if (a2 == *v2)
				v3 = v2;
			++v2;
		}
	}
	else
	{
		sub_6F71AA9C();
		sub_6F01BA2E(87);
		v3 = 0;
	}
	return v3;
}

int sub_6F5B0424(void **a1, uint8_t *path, int a3, int *a4)
{
  void **v4; // edi@1
  int v5; // eax@1
  int v6; // esi@1
  uint8_t *v7; // eax@8
  uint8_t *v8; // edi@15
  int v9; // eax@15
  int v10; // edx@19
  const char *v11; // eax@19
  unsigned int v12; // edi@20
  int v13; // esi@21
  int v14; // edi@24
  int v15; // esi@27
  int v16; // eax@33
  int v17; // eax@52
  int v19; // [sp+2Ch] [bp-15Ch]@30
  int *v20; // [sp+40h] [bp-148h]@4
  int *v21; // [sp+44h] [bp-144h]@4
  int v22; // [sp+4Ch] [bp-13Ch]@1
  uint8_t *cpath; // [sp+50h] [bp-138h]@1
  unsigned int v24; // [sp+54h] [bp-134h]@18
  int v25; // [sp+58h] [bp-130h]@20
  int v26; // [sp+5Ch] [bp-12Ch]@21
  int *v27; // [sp+64h] [bp-124h]@15
  int v28; // [sp+68h] [bp-120h]@18
  int *v29; // [sp+6Ch] [bp-11Ch]@18
  int *v30; // [sp+70h] [bp-118h]@18
  int v31; // [sp+74h] [bp-114h]@18
  int v32; // [sp+164h] [bp-24h]@20
  int v33; // [sp+168h] [bp-20h]@1
  int *v34; // [sp+16Ch] [bp-1Ch]@1

  v4 = a1;
  cpath = path;
  v22 = a3;
  v34 = 0;
  v33 = 0;
  LOBYTE(v5) = sub_6F5B0300(*a1);
  v6 = v5;
  if ( v5 != 2 )
  {
    if ( v5 )
    {
      v20 = (int *)&v34;
      v21 = &v33;
    }
    else
    {
      cpath[sub_6F019500(cpath, *v4, 260) - 1] = 120;
      v20 = (int *)&v34;
      v21 = &v33;
      if ( sub_6F1ECB50(cpath, &v33, &v34, 1) )
        goto LABEL_18;
      LOWORD(v6) = 1;
    }
    if ( !sub_6F1ECB50(*v4, v21, v20, 1) )
    {
      sub_6F019500(cpath, *v4, 260);
      v7 = sub_6F0192C0(cpath, 46);
      if ( v7 )
        *v7 = 0;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          sub_6F01986E(cpath, ".mdl", 260);
          LOWORD(v6) = 0;
        }
      }
      else
      {
        sub_6F01986E(cpath, ".mdx", 260);
        v6 = 1;
      }
      if ( !sub_6F1ECB50(cpath, v21, v20, 1) )
      {
        v8 = *v4;
        v9 = sub_6F01BBEE();
        sub_6F01BE46(v9, &v27, 256);
        (*(void (**)(int *, int, const char *, ...))(*a4 + 12))(a4, 3, "%s: %s\n", v8, &v27);
        return 0;
      }
      *v4 = cpath;
    }
    if ( v6 != 1 )
    {
      CMdlScanner::CMdlScanner(&v27, a4, v33, 255);
      do
      {
        v17 = sub_6F66C514((int)&v27);
        if ( !v17 )
        {
          v6 = sub_6F669ABE(v22, (int)a4);
          goto LABEL_55;
        }
      }
      while ( sub_6F66BD48(v17, (int)&v27, v22, (int)a4) );
      v6 = 0;
LABEL_55:
      v27 = &`vtable for'CMdlScanner + 2;
      sub_6F66C108((int)&v27);
      goto LABEL_56;
    }
LABEL_18:
    v29 = 0;
    v24 = (unsigned int)v34;
    v31 = v33;
    v27 = v34;
    v30 = v34;
    v28 = 0;
    if ( sub_6F66AF00((int)&v27) == 1481393229 )
    {
      v32 = 0;
      v12 = 4;
      v25 = 0;
      while ( v12 < v24 )
      {
        v26 = sub_6F66AF00((int)&v27);
        v13 = sub_6F66AEB8((int)&v27);
        v12 += 8;
        if ( v13 )
        {
          if ( v13 > (char *)v30 - (char *)v29 )
          {
            (*(void (__cdecl **)(int *, int, const char *))(*a4 + 12))(
              a4,
              3,
              "Section length was greater than bytes remaining in file.\n");
            if ( BYTE3(v32) )
              v14 = BYTE3(v32);
            else
              v14 = 32;
            if ( BYTE2(v32) )
              v15 = BYTE2(v32);
            else
              v15 = 32;
            if ( BYTE1(v32) )
              v19 = BYTE1(v32);
            else
              v19 = 32;
            if ( (uint8_t)v32 )
              v16 = (unsigned __int8)v32;
            else
              v16 = 32;
            (*(void (**)(int *, int, const char *, ...))(*a4 + 12))(
              a4,
              3,
              "Section failed after section '%c%c%c%c' starting at offset %u\n",
              v16,
              v19,
              v15,
              v14,
              v25);
            goto LABEL_43;
          }
          if ( !sub_6F66B95C(v26, (int)&v27, v13, v22, a4) )
            goto LABEL_43;
          v12 += v13;
        }
        v32 = v26;
        v25 = (int)v29;
      }
      if ( v24 < v12 )
      {
        v10 = *a4;
        v11 = "MDLFile overran total file size.\n";
        goto LABEL_42;
      }
      v6 = sub_6F669ABE(v22, (int)a4);
    }
    else
    {
      v10 = *a4;
      v11 = "File is not a binary model file.\n";
LABEL_42:
      (*(void (__cdecl **)(int *, int, const char *))(v10 + 12))(a4, 3, v11);
LABEL_43:
      v6 = 0;
    }
    if ( v30 != v29 )
    {
      sub_6F66AF30((int)&v27, (char *)v30 - (char *)v29);
      v6 = 0;
    }
    if ( v31 && v28 )
      sub_6F00A766(v31);
LABEL_56:
    sub_6F1EB814(v33, 1);
    return v6;
  }
  sub_6F66AD3C((int)a4, *v4);
  LOWORD(v6) = 0;
  return v6;
}

int sub_6F5B09F4(int a1, int a2, int *a3)
{
  int *v3; // edi@1
  int result; // eax@4
  void (*v5)(int *, int, const char *, ...); // ST1C_4@5
  int v6; // esi@5
  int v7; // eax@5
  char v8; // [sp+2Ch] [bp-11Ch]@3

  v3 = a3;
  if ( !a3 )
    v3 = dword_6FF52B20;
  if ( sub_6F5B0424((void **)&a1, &v8, a2, v3) )
  {
    result = 1;
  }
  else
  {
    v5 = *(void (**)(int *, int, const char *, ...))(*v3 + 16);
    v6 = a1;
    v7 = sub_6F285EDA((int)v3);
    v5(v3, v7, "%s\n", v6);
    result = 0;
  }
  return result;
}

__int64 sub_6F2880DA(uint32_t *a1, uint32_t *a2)
{
	unsigned __int64 v2; // rax@7
	__int64 result; // rax@7
	int v4; // [sp+18h] [bp-20h]@5
	int v5; // [sp+1Ch] [bp-1Ch]@5

	if (dword_6FF32D20)
	{
		if (dword_6FF32D20 != 1)
		{
			*a1 = 0;
			*a2 = 0;
			goto LABEL_7;
		}
	}
	else
	{
		dword_6FF32D20 = 1;
	}
	Microseconds(&v4);
	*a1 = v5;
	*a2 = v4;
LABEL_7:
	HIDWORD(v2) = *a1;
	LODWORD(v2) = *a2;
	v2 /= 0x3E8uLL;
	*a2 = v2;
	result = HIDWORD(v2);
	*a1 = result;
	return result;
}

int sub_6F01000E()
{
	int v1; // [sp+18h] [bp-10h]@1
	char v2; // [sp+1Ch] [bp-Ch]@1

	sub_6F2880DA(&v2, &v1);
	return v1;
}

int sub_6F28F7DC()
{
	return sub_6F01000E();
}

int sub_6F1CE874()
{
	return sub_6F28F7DC();
}

int sub_6F285EDA(int a1)
{
	int result; // eax@1

	result = TSList<CStatus::STATUSENTRY, TSGetLink<CStatus::STATUSENTRY>>::Head(a1 + 4);
	if (result)
		result = *(uint32_t *)(result + 12);
	return result;
}

signed int sub_6F1EB86E(int a1)
{
	sub_6F54F886((int)dword_6FF324E8);
	dword_6FF32634 = a1;
	return sub_6F54F890((int)dword_6FF324E8);
}

signed int sub_6F1EC49A(int a1)
{
	int v1; // esi@1
	int v2; // eax@4
	int v4; // edi@10

	sub_6F54F886((int)dword_6FF324E8);
	v1 = dword_6FF324CC;
	if (dword_6FF324CC & 1 || !dword_6FF324CC)
		v1 = 0;
	while (!(v1 & 1) && v1)
	{
		v4 = TSList<PrefetchNode, TSGetExplicitLink<PrefetchNode>>::Next(&dword_6FF324C0 + 1, v1);
		if (*(uint32_t *)(v1 + 56) == a1)
		{
			v2 = *(uint32_t *)(v1 + 28);
			if (v2)
			{
				dword_6FF3262C -= v2;
				TSHashTable<PrefetchNode, HASHKEY_STRI>::DeleteNode(&dword_6FF324C0, v1);
				--dword_6FF32630;
			}
		}
		v1 = v4;
	}
	return sub_6F54F890((int)dword_6FF324E8);
}

BOOL sub_6F285EBC(int a1)
{
	return TSLink<CStatus::STATUSENTRY>::Next(a1 + 8) == 0;
}

int sub_6F5B0B68(int a1, int a2, int *a3)
{
  int *v3; // edi@1
  void (*v4)(int *, int, const char *, ...); // ST2C_4@4
  int v5; // esi@4
  int v6; // eax@4
  int v7; // esi@5
  void (*v8)(int *, int, const char *, ...); // ST18_4@16
  int v9; // esi@16
  int v10; // eax@16
  int v12; // [sp+1Ch] [bp-588Ch]@5
  int v13; // [sp+20h] [bp-5888h]@4
  int v14; // [sp+24h] [bp-5884h]@5
  int v15; // [sp+28h] [bp-5880h]@5
  char v16; // [sp+30h] [bp-5878h]@3
  char v17; // [sp+578Ch] [bp-11Ch]@3

  v3 = a3;
  if ( !a3 )
    v3 = dword_6FF52B20;
  MDLDATA::MDLDATA((MDLDATA *)&v16);
  if ( sub_6F5B0424((void **)&a1, &v17, (int)&v16, v3) )
  {
    v12 = sub_6F1CE874();
    sub_6F1EB86E(v12);
    v14 = a1;
    v15 = a2 + 8;
    v7 = *(uint32_t *)(a2 + 16);
    if ( v7 & 1 || !v7 )
      v7 = 0;
    while ( !(v7 & 1) && v7 )
    {
      if ( !(*(int (__cdecl **)(char *, uint32_t, int, int *))v7)(&v16, *(uint32_t *)(v7 + 4), v14, v3) )
      {
        v13 = 0;
        goto LABEL_16;
      }
      v7 = TSList<MDLHANDLERTYPE<int (*)(MDLDATA const&,long,char const*,CStatus *)>,TSGetExplicitLink<MDLHANDLERTYPE<int (*)(MDLDATA const&,long,char const*,CStatus *)>>>::RawNext(
             v15,
             v7);
    }
    if ( sub_6F285EBC((int)v3) )
    {
      v13 = 1;
      goto LABEL_17;
    }
    v13 = 1;
LABEL_16:
    v8 = *(void (**)(int *, int, const char *, ...))(*v3 + 16);
    v9 = a1;
    v10 = sub_6F285EDA((int)v3);
    v8(v3, v10, "%s\n", v9);
LABEL_17:
    sub_6F1EB86E(0);
    sub_6F1EC49A(v12);
  }
  else
  {
    v4 = *(void (**)(int *, int, const char *, ...))(*v3 + 16);
    v5 = a1;
    v6 = sub_6F285EDA((int)v3);
    v4(v3, v6, "%s\n", v5);
    v13 = 0;
  }
  MDLBASE::~MDLBASE((MDLBASE *)&v16);
  return v13;
}