#include "MDLHANDLER.h"

MDLHANDLER::MDLHANDLER()
{
	//*(uint32_t *)this = &`vtable for'CHandleObject + 2;
		*((uint32_t *)this + 1) = 0;
	//*(uint32_t *)this = &`vtable for'MDLHANDLER + 2;
	//	TSExplicitList<MDLHANDLERTYPE<int(*)(MDLDATA const&, long, char const*, CStatus *)>, -572662307>::TSExplicitList((char *)this + 8);
	//TSExplicitList<MDLHANDLERTYPE<int(*)(MDLDATA &, long, char const*, CStatus *)>, -572662307>::TSExplicitList((char *)this + 20);
}