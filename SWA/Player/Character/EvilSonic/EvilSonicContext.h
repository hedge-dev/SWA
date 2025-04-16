#pragma once

#include "SWA.inl"
#include "SWA/Player/Character/EvilSonic/Hud/EvilHudGuide.h"

namespace SWA::Player
{
    class CEvilSonicContext // : public CPlayerContext
    {
    public:
        SWA_INSERT_PADDING(0x660);
        be<uint32_t> m_Rings;
        SWA_INSERT_PADDING(0x10);
        be<uint32_t> m_CrushScore;
        be<uint32_t> m_ComboScore;
        SWA_INSERT_PADDING(0xC);
        be<float> m_DarkGaiaEnergy;
        SWA_INSERT_PADDING(0x138);
        be<uint32_t> m_AnimationID;
        SWA_INSERT_PADDING(0x38);
        be<float> m_UnkHudGuideF32;
        be<uint32_t> m_UnkHudGuideU32;
        SWA_INSERT_PADDING(0x18);
        be<EGuideType> m_GuideType;
        SWA_INSERT_PADDING(0xA8);
        be<uint32_t> m_OutOfControlCount;
    };
}
