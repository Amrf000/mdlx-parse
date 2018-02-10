#include "CMdlBounds.h"

CMdlBounds::CMdlBounds()
{
  CMdlBounds *result; // eax
  uint32_t *v2; // ecx

  result = this;
  *(uint32_t *)this = 0;
  *((uint32_t *)this + 1) = 0;
  *((uint32_t *)this + 2) = 0;
  v2 = (uint32_t *)((char *)this + 12);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *((uint32_t *)this + 6) = 0;
}
