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
	String_t* ___specialText_1;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelDescription::explicitMouseDescs
	List_1_t537 * ___explicitMouseDescs_2;
	// UnityEngine.Sprite LevelDescription::sprite
	Sprite_t472 * ___sprite_3;
	// TipConfig LevelDescription::tipConfig
	TipConfig_t473 * ___tipConfig_4;
	// System.Single LevelDescription::tipPause
	float ___tipPause_5;
	// EnumAccumulator`1<MouseHole/MouseHoleLocation> LevelDescription::mouseHolesAccumulator
	EnumAccumulator_1_t538 * ___mouseHolesAccumulator_6;
	// EnumAccumulator`1<BoostConfig/BoostType> LevelDescription::boostsAccumulator
	EnumAccumulator_1_t539 * ___boostsAccumulator_7;
	// EnumAccumulator`1<MouseConfig/MouseWiggleType> LevelDescription::wigglesAccumulator
	EnumAccumulator_1_t540 * ___wigglesAccumulator_8;
	// EnumAccumulator`1<MouseConfig/MouseType> LevelDescription::mouseTypesAccumulator
	EnumAccumulator_1_t541 * ___mouseTypesAccumulator_9;
	// EnumAccumulator`1<LevelDescription/WaveType> LevelDescription::waveTypesAccumulator
	EnumAccumulator_1_t542 * ___waveTypesAccumulator_10;
	// System.Int32 LevelDescription::gameLevel
	int32_t ___gameLevel_11;
	// System.String LevelDescription::previousLevelClearedAchievementID
	String_t* ___previousLevelClearedAchievementID_12;
};
