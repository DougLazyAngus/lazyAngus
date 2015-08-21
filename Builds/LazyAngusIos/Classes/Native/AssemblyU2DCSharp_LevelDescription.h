#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t575;
// UnityEngine.Sprite
struct Sprite_t510;
// TipConfig
struct TipConfig_t511;
// EnumAccumulator`1<MouseSinkController/MouseHoleLocation>
struct EnumAccumulator_1_t576;
// EnumAccumulator`1<BoostConfig/BoostType>
struct EnumAccumulator_1_t577;
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
struct EnumAccumulator_1_t578;
// EnumAccumulator`1<MouseConfig/MouseType>
struct EnumAccumulator_1_t579;
// EnumAccumulator`1<LevelDescription/WaveType>
struct EnumAccumulator_1_t580;
// System.Object
#include "mscorlib_System_Object.h"
// LevelDescription
struct  LevelDescription_t581  : public Object_t
{
	// System.String LevelDescription::specialText
	String_t* ___specialText_0;
	// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelDescription::explicitMouseDescs
	List_1_t575 * ___explicitMouseDescs_1;
	// UnityEngine.Sprite LevelDescription::sprite
	Sprite_t510 * ___sprite_2;
	// TipConfig LevelDescription::tipConfig
	TipConfig_t511 * ___tipConfig_3;
	// System.Single LevelDescription::tipPause
	float ___tipPause_4;
	// EnumAccumulator`1<MouseSinkController/MouseHoleLocation> LevelDescription::mouseHolesAccumulator
	EnumAccumulator_1_t576 * ___mouseHolesAccumulator_5;
	// EnumAccumulator`1<BoostConfig/BoostType> LevelDescription::boostsAccumulator
	EnumAccumulator_1_t577 * ___boostsAccumulator_6;
	// EnumAccumulator`1<MouseConfig/MouseWiggleType> LevelDescription::wigglesAccumulator
	EnumAccumulator_1_t578 * ___wigglesAccumulator_7;
	// EnumAccumulator`1<MouseConfig/MouseType> LevelDescription::mouseTypesAccumulator
	EnumAccumulator_1_t579 * ___mouseTypesAccumulator_8;
	// EnumAccumulator`1<LevelDescription/WaveType> LevelDescription::waveTypesAccumulator
	EnumAccumulator_1_t580 * ___waveTypesAccumulator_9;
	// System.Int32 LevelDescription::gameLevel
	int32_t ___gameLevel_10;
	// System.String LevelDescription::previousLevelClearedAchievementID
	String_t* ___previousLevelClearedAchievementID_11;
};
