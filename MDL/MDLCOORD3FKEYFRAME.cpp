#include "MDLCOORD3FKEYFRAME.h"

MDLCOORD3FKEYFRAME::MDLCOORD3FKEYFRAME( float a2, float a3, float a4)
{
  float *v4; // ecx
  uint32_t *v5; // ecx
  int result; // eax
  uint32_t *v7; // ecx

  *(uint32_t *)this = 0;
  v4 = (float *)((char *)this + 4);
  *v4 = a2;
  v4[1] = a3;
  v4[2] = a4;
  v5 = (uint32_t *)((char *)this + 16);
  result = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v7 = (uint32_t *)((char *)this + 28);
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
}