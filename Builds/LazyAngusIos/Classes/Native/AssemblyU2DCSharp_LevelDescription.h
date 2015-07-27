﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t484;
// UnityEngine.Sprite
struct Sprite_t432;
// TipConfig
struct TipConfig_t433;
// EnumAccumulator`1<MouseHole/MouseHoleLocation>
struct EnumAccumulator_1_t485;
// EnumAccumulator`1<BoostConfig/BoostType>
struct EnumAccumulator_1_t486;
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
struct EnumAccumulator_1_t487;
// EnumAccumulator`1<MouseConfig/MouseType>
struct EnumAccumulator_1_t488;
// EnumAccumulator`1<LevelDescription/WaveType>
struct EnumAccumulator_1_t489;
// System.Object
#include "mscorlib_System_Object.h"
// LevelDescription
struct  LevelDescription_t490  : public Object_t
{
	// System.String LevelDescription::specialText
	String_t* ___specialText_0;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelDescription::explicitMouseDescs
	List_1_t484 * ___explicitMouseDescs_1;
	// UnityEngine.Sprite LevelDescription::sprite
	Sprite_t432 * ___sprite_2;
	// TipConfig LevelDescription::tipConfig
	TipConfig_t433 * ___tipConfig_3;
	// System.Single LevelDescription::tipPause
	float ___tipPause_4;
	// EnumAccumulator`1<MouseHole/MouseHoleLocation> LevelDescription::mouseHolesAccumulator
	EnumAccumulator_1_t485 * ___mouseHolesAccumulator_5;
	// EnumAccumulator`1<BoostConfig/BoostType> LevelDescription::boostsAccumulator
	EnumAccumulator_1_t486 * ___boostsAccumulator_6;
	// EnumAccumulator`1<MouseConfig/MouseWiggleType> LevelDescription::wigglesAccumulator
	EnumAccumulator_1_t487 * ___wigglesAccumulator_7;
	// EnumAccumulator`1<MouseConfig/MouseType> LevelDescription::mouseTypesAccumulator
	EnumAccumulator_1_t488 * ___mouseTypesAccumulator_8;
	// EnumAccumulator`1<LevelDescription/WaveType> LevelDescription::waveTypesAccumulator
	EnumAccumulator_1_t489 * ___waveTypesAccumulator_9;
	// System.Int32 LevelDescription::gameLevel
	int32_t ___gameLevel_10;
	// System.String LevelDescription::previousLevelClearedAchievementID
	String_t* ___previousLevelClearedAchievementID_11;
};
