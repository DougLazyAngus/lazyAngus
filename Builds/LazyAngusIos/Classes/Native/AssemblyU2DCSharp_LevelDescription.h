#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t437;
// UnityEngine.Sprite
struct Sprite_t394;
// TipConfig
struct TipConfig_t438;
// System.Object
#include "mscorlib_System_Object.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// LevelDescription
struct  LevelDescription_t439  : public Object_t
{
	// System.String LevelDescription::specialText
	String_t* ___specialText_4;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelDescription::explicitMouseDesc
	List_1_t437 * ___explicitMouseDesc_5;
	// System.Int32 LevelDescription::growMouseHoles
	int32_t ___growMouseHoles_6;
	// UnityEngine.Sprite LevelDescription::sprite
	Sprite_t394 * ___sprite_7;
	// TipConfig LevelDescription::tipConfig
	TipConfig_t438 * ___tipConfig_8;
	// System.Single LevelDescription::tipPause
	float ___tipPause_9;
	// BoostConfig/BoostType LevelDescription::unlockedBoostType
	int32_t ___unlockedBoostType_10;
};
