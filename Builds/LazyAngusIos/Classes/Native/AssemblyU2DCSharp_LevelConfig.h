﻿#pragma once
#include <stdint.h>
// System.Single[]
struct SingleU5BU5D_t535;
// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>
struct QuasiRandomGenerator_1_t536;
// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t537;
// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t538;
// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
struct Dictionary_2_t539;
// System.Int32[]
struct Int32U5BU5D_t540;
// LevelConfig
struct LevelConfig_t541;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelConfig
struct  LevelConfig_t541  : public MonoBehaviour_t13
{
	// System.Single LevelConfig::paradePause
	float ___paradePause_2;
	// System.Int32 LevelConfig::minParadeMice
	int32_t ___minParadeMice_3;
	// System.Int32 LevelConfig::maxParadeMice
	int32_t ___maxParadeMice_4;
	// System.Single LevelConfig::paradeEndPause
	float ___paradeEndPause_5;
	// System.Int32 LevelConfig::minDistributedMice
	int32_t ___minDistributedMice_6;
	// System.Int32 LevelConfig::maxDistributedMice
	int32_t ___maxDistributedMice_7;
	// System.Single[] LevelConfig::distributedPauseDist
	SingleU5BU5D_t535* ___distributedPauseDist_8;
	// System.Single LevelConfig::distributedEndPause
	float ___distributedEndPause_9;
	// System.Single LevelConfig::minSpoutPause
	float ___minSpoutPause_10;
	// System.Single LevelConfig::maxSpoutPause
	float ___maxSpoutPause_11;
	// System.Single LevelConfig::spoutEndPause
	float ___spoutEndPause_12;
	// System.Int32 LevelConfig::minSpoutMice
	int32_t ___minSpoutMice_13;
	// System.Int32 LevelConfig::maxSpoutMice
	int32_t ___maxSpoutMice_14;
	// System.Int32 LevelConfig::superSpeedMiceLevel
	int32_t ___superSpeedMiceLevel_15;
	// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation> LevelConfig::mouseHoleGenerator
	QuasiRandomGenerator_1_t536 * ___mouseHoleGenerator_16;
	// QuasiRandomGenerator`1<System.Int32> LevelConfig::trackGenerator
	QuasiRandomGenerator_1_t537 * ___trackGenerator_17;
	// QuasiRandomGenerator`1<System.Single> LevelConfig::distributedPauseGenerator
	QuasiRandomGenerator_1_t538 * ___distributedPauseGenerator_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription> LevelConfig::levelDescMap
	Dictionary_2_t539 * ___levelDescMap_19;
	// System.Int32[] LevelConfig::boostLevelLocks
	Int32U5BU5D_t540* ___boostLevelLocks_20;
};
struct LevelConfig_t541_StaticFields{
	// LevelConfig LevelConfig::<instance>k__BackingField
	LevelConfig_t541 * ___U3CinstanceU3Ek__BackingField_21;
};
