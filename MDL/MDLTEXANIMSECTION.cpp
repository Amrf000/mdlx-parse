#include "MDLTEXANIMSECTION.h"

MDLTEXANIMSECTION::MDLTEXANIMSECTION()
{
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK(this, 2);
	//MDLKEYTRACK<MDLROTKEYFRAME>::MDLKEYTRACK((char *)this + 24, 2);
	//MDLKEYTRACK<MDLSCALEKEYFRAME>::MDLKEYTRACK((char *)this + 48, 2);
}
MDLTEXANIMSECTION::MDLTEXANIMSECTION(const MDLTEXANIMSECTION *a2)
{
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::MDLKEYTRACK(this, a2);
	//MDLKEYTRACK<MDLROTKEYFRAME>::MDLKEYTRACK((char *)this + 24, (char *)a2 + 24);
	//MDLKEYTRACK<MDLSCALEKEYFRAME>::MDLKEYTRACK((char *)this + 48, (char *)a2 + 48);
}
MDLTEXANIMSECTION::~MDLTEXANIMSECTION()
{
	//MDLKEYTRACK<MDLSCALEKEYFRAME>::~MDLKEYTRACK((char *)this + 48);
	//MDLKEYTRACK<MDLROTKEYFRAME>::~MDLKEYTRACK((char *)this + 24);
	//MDLKEYTRACK<MDLTRANSKEYFRAME>::~MDLKEYTRACK(this);
}