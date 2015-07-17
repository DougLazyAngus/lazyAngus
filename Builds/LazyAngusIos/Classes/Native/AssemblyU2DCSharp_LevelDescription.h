#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t481;
// UnityEngine.Sprite
struct Sprite_t430;
// TipConfig
struct TipConfig_t431;
// EnumAccumulator`1<MouseHole/MouseHoleLocation>
struct EnumAccumulator_1_t482;
// EnumAccumulator`1<BoostConfig/BoostType>
struct EnumAccumulator_1_t483;
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
struct EnumAccumulator_1_t484;
// EnumAccumulator`1<MouseConfig/MouseType>
struct EnumAccumulator_1_t485;
// EnumAccumulator`1<LevelDescription/WaveType>
struct EnumAccumulator_1_t486;
// System.Object
#include "mscorlib_System_Object.h"
// LevelDescription
struct  LevelDescription_t487  : public Object_t
{
	// System.String LevelDescription::specialText
	String_t* ___specialText_0;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelDescription::explicitMouseDescs
	List_1_t481 * ___explicitMouseDescs_1;
	// UnityEngine.Sprite LevelDescription::sprite
	Sprite_t430 * ___sprite_2;
	// TipConfig LevelDescription::tipConfig
	TipConfig_t431 * ___tipConfig_3;
	// System.Single LevelDescription::tipPause
	float ___tipPause_4;
	// EnumAccumulator`1<MouseHole/MouseHoleLocation> LevelDescription::mouseHolesAccumulator
	EnumAccumulator_1_t482 * ___mouseHolesAccumulator_5;
	// EnumAccumulator`1<BoostConfig/BoostType> LevelDescription::boostsAccumulator
	EnumAccumulator_1_t483 * ___boostsAccumulator_6;
	// EnumAccumulator`1<MouseConfig/MouseWiggleType> LevelDescription::wigglesAccumulator
	EnumAccumulator_1_t484 * ___wigglesAccumulator_7;
	// EnumAccumulator`1<MouseConfig/MouseType> LevelDescription::mouseTypesAccumulator
	EnumAccumulator_1_t485 * ___mouseTypesAccumulator_8;
	// EnumAccumulator`1<LevelDescription/WaveType> LevelDescription::waveTypesAccumulator
	EnumAccumulator_1_t486 * ___waveTypesAccumulator_9;
	// System.Int32 LevelDescription::gameLevel
	int32_t ___gameLevel_10;
	// System.String LevelDescription::previousLevelClearedAchievementID
	String_t* ___previousLevelClearedAchievementID_11;
};
