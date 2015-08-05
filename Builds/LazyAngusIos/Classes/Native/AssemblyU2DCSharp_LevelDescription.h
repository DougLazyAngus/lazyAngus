#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t537;
// UnityEngine.Sprite
struct Sprite_t472;
// TipConfig
struct TipConfig_t473;
// EnumAccumulator`1<MouseHole/MouseHoleLocation>
struct EnumAccumulator_1_t538;
// EnumAccumulator`1<BoostConfig/BoostType>
struct EnumAccumulator_1_t539;
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
struct EnumAccumulator_1_t540;
// EnumAccumulator`1<MouseConfig/MouseType>
struct EnumAccumulator_1_t541;
// EnumAccumulator`1<LevelDescription/WaveType>
struct EnumAccumulator_1_t542;
// System.Object
#include "mscorlib_System_Object.h"
// LevelDescription
struct  LevelDescription_t543  : public Object_t
{
	// System.String LevelDescription::specialText
	String_t* ___specialText_0;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelDescription::explicitMouseDescs
	List_1_t537 * ___explicitMouseDescs_1;
	// UnityEngine.Sprite LevelDescription::sprite
	Sprite_t472 * ___sprite_2;
	// TipConfig LevelDescription::tipConfig
	TipConfig_t473 * ___tipConfig_3;
	// System.Single LevelDescription::tipPause
	float ___tipPause_4;
	// EnumAccumulator`1<MouseHole/MouseHoleLocation> LevelDescription::mouseHolesAccumulator
	EnumAccumulator_1_t538 * ___mouseHolesAccumulator_5;
	// EnumAccumulator`1<BoostConfig/BoostType> LevelDescription::boostsAccumulator
	EnumAccumulator_1_t539 * ___boostsAccumulator_6;
	// EnumAccumulator`1<MouseConfig/MouseWiggleType> LevelDescription::wigglesAccumulator
	EnumAccumulator_1_t540 * ___wigglesAccumulator_7;
	// EnumAccumulator`1<MouseConfig/MouseType> LevelDescription::mouseTypesAccumulator
	EnumAccumulator_1_t541 * ___mouseTypesAccumulator_8;
	// EnumAccumulator`1<LevelDescription/WaveType> LevelDescription::waveTypesAccumulator
	EnumAccumulator_1_t542 * ___waveTypesAccumulator_9;
	// System.Int32 LevelDescription::gameLevel
	int32_t ___gameLevel_10;
	// System.String LevelDescription::previousLevelClearedAchievementID
	String_t* ___previousLevelClearedAchievementID_11;
};
