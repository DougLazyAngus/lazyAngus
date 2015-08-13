#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t586;
// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>
struct QuasiRandomGenerator_1_t587;
// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t588;
// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t589;
// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
struct Dictionary_2_t590;
// System.Int32[]
struct Int32U5BU5D_t484;
// UnityEngine.Sprite
struct Sprite_t510;
// LevelConfig
struct LevelConfig_t591;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelConfig
struct  LevelConfig_t591  : public MonoBehaviour_t13
{
	// System.Single LevelConfig::paradePause
	float ___paradePause_4;
	// System.Int32 LevelConfig::minParadeMice
	int32_t ___minParadeMice_5;
	// System.Int32 LevelConfig::maxParadeMice
	int32_t ___maxParadeMice_6;
	// System.Single LevelConfig::paradeEndPause
	float ___paradeEndPause_7;
	// System.Int32 LevelConfig::minDistributedMice
	int32_t ___minDistributedMice_8;
	// System.Int32 LevelConfig::maxDistributedMice
	int32_t ___maxDistributedMice_9;
	// System.Single[] LevelConfig::distributedPauseDist
	SingleU5BU5D_t586* ___distributedPauseDist_10;
	// System.Single LevelConfig::distributedEndPause
	float ___distributedEndPause_11;
	// System.Single LevelConfig::minSpoutPause
	float ___minSpoutPause_12;
	// System.Single LevelConfig::maxSpoutPause
	float ___maxSpoutPause_13;
	// System.Single LevelConfig::spoutEndPause
	float ___spoutEndPause_14;
	// System.Int32 LevelConfig::minSpoutMice
	int32_t ___minSpoutMice_15;
	// System.Int32 LevelConfig::maxSpoutMice
	int32_t ___maxSpoutMice_16;
	// System.Int32 LevelConfig::superSpeedMiceLevel
	int32_t ___superSpeedMiceLevel_17;
	// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation> LevelConfig::mouseHoleGenerator
	QuasiRandomGenerator_1_t587 * ___mouseHoleGenerator_18;
	// QuasiRandomGenerator`1<System.Int32> LevelConfig::trackGenerator
	QuasiRandomGenerator_1_t588 * ___trackGenerator_19;
	// QuasiRandomGenerator`1<System.Single> LevelConfig::distributedPauseGenerator
	QuasiRandomGenerator_1_t589 * ___distributedPauseGenerator_20;
	// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription> LevelConfig::levelDescMap
	Dictionary_2_t590 * ___levelDescMap_21;
	// System.Int32[] LevelConfig::boostLevelLocks
	Int32U5BU5D_t484* ___boostLevelLocks_22;
	// UnityEngine.Sprite LevelConfig::mouseHoleIntroSprite
	Sprite_t510 * ___mouseHoleIntroSprite_23;
	// UnityEngine.Sprite LevelConfig::angusIntroSprite
	Sprite_t510 * ___angusIntroSprite_24;
};
struct LevelConfig_t591_StaticFields{
	// LevelConfig LevelConfig::<instance>k__BackingField
	LevelConfig_t591 * ___U3CinstanceU3Ek__BackingField_25;
};
