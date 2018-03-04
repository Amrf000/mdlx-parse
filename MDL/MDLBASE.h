#ifndef _MDLBASE_H
#define _MDLBASE_H
#include <stdint.h>
#include <vector>
//#include "../core/math3d.h"

#include "MDLHEADERSECTION.h"
#include "MDLMODELSECTION.h"
#include "MDLSEQUENCESSECTION.h"
#include "MDLGLOBALSEQSECTION.h"
#include "MDLTEXANIMSECTION.h"
#include "MDLSOUNDSECTION.h"
#include "MDLMATERIALSECTION.h"
#include "MDLTEXTURESECTION.h"
#include "MDLGEOSETSECTION.h"

#include "MDLTEXTURESECTION.h"
#include "MDLGEOSETANIMSECTION.h"
#include "MDLBONESECTION.h"
#include "MDLLIGHTSECTION.h"
#include "MDLGENOBJECT.h"
#include "MDLSOUNDEMITTERSECTION.h"
#include "MDLATTACHMENTSECTION.h"

#include "MDLPARTICLEEMITTER.h"
#include "MDLCAMERASECTION.h"
#include "MDLEVENTSECTION.h"
#include "MDLPARTICLEEMITTER2.h"
#include "MDLCOLLISIONSHAPE.h"
#include "MDLRIBBONEMITTER.h"


class MDLBASE:public MDLHEADERSECTION
{
public:
	MDLBASE();
	~MDLBASE();
public:
	MDLMODELSECTION m_MdlModelSection;//130
	uint32_t m_val;//234
	std::vector<MDLSEQUENCESSECTION> m_MdlSequencesSection;
	std::vector<MDLGLOBALSEQSECTION> m_MdlGlobalSeqSection;
	std::vector<MDLSOUNDSECTION> m_MdlGlobalSeqSection;
	std::vector<MDLMATERIALSECTION> m_MdlGlobalSeqSection;

	std::vector<MDLTEXTURESECTION> m_MdlGlobalSeqSection;
    std::vector<MDLTEXANIMSECTION> m_MdlGlobalSeqSection;

	std::vector<MDLGEOSETSECTION> m_MdlGlobalSeqSection;
	std::vector<MDLGEOSETANIMSECTION> m_MdlGlobalSeqSection;
	std::vector<MDLGENOBJECT *> m_MdlGlobalSeqSection;

	std::vector<MDLBONESECTION> m_MdlGlobalSeqSection;
	std::vector<MDLLIGHTSECTION> m_MdlGlobalSeqSection;
	std::vector<MDLGENOBJECT> m_MdlGlobalSeqSection;
	
	std::vector<MDLSOUNDEMITTERSECTION> m_MdlGlobalSeqSection;
	std::vector<MDLATTACHMENTSECTION> m_MdlGlobalSeqSection;
	std::vector<Vector3<float> > m_MdlGlobalSeqSection;

	std::vector<MDLPARTICLEEMITTER> m_MdlGlobalSeqSection;
	std::vector<MDLCAMERASECTION> m_MdlGlobalSeqSection;
	std::vector<MDLEVENTSECTION> m_MdlGlobalSeqSection;
	
	std::vector<MDLPARTICLEEMITTER2> m_MdlGlobalSeqSection;
	std::vector<MDLCOLLISIONSHAPE> m_MdlGlobalSeqSection;
	std::vector<MDLRIBBONEMITTER> m_MdlGlobalSeqSection;
};
#endif
