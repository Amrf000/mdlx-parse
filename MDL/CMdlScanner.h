#ifndef _CMDLSCANNER_H
#define _CMDLSCANNER_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

class CMdlScanner
{
public:
	CMdlScanner(int a2, int a3, int a4);
	class mdlerror 
	{
	public:
		static int buffer[64];
	};
};
#endif