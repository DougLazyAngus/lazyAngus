#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t512;
// System.String
struct String_t;
// TipConfig
struct TipConfig_t513;
// System.Object
#include "mscorlib_System_Object.h"
// BoostDesc
struct  BoostDesc_t514  : public Object_t
{
	// UnityEngine.Sprite BoostDesc::buttonSprite
	Sprite_t512 * ___buttonSprite_0;
	// UnityEngine.Sprite BoostDesc::introScreenSprite
	Sprite_t512 * ___introScreenSprite_1;
	// System.Single BoostDesc::effectiveTime
	float ___effectiveTime_2;
	// System.String BoostDesc::boostName
	String_t* ___boostName_3;
	// TipConfig BoostDesc::tipConfig
	TipConfig_t513 * ___tipConfig_4;
};
