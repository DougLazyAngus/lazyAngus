#pragma once
#include <stdint.h>
// BoostDesc[]
struct BoostDescU5BU5D_t390;
// PlayerStats
struct PlayerStats_t391;
// GameController
struct GameController_t392;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.AudioSource
struct AudioSource_t393;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t387;
// BoostConfig
struct BoostConfig_t372;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig
struct  BoostConfig_t372  : public MonoBehaviour_t67
{
	// BoostDesc[] BoostConfig::boostDescs
	BoostDescU5BU5D_t390* ___boostDescs_2;
	// PlayerStats BoostConfig::playerStats
	PlayerStats_t391 * ___playerStats_3;
	// GameController BoostConfig::gameController
	GameController_t392 * ___gameController_4;
	// System.Collections.IEnumerator BoostConfig::activePause
	Object_t * ___activePause_5;
	// System.Single BoostConfig::activeBoostStartTime
	float ___activeBoostStartTime_6;
	// System.Single BoostConfig::activeBoostEndTime
	float ___activeBoostEndTime_7;
	// UnityEngine.AudioSource BoostConfig::startAudioSource
	AudioSource_t393 * ___startAudioSource_8;
	// BoostConfig/BoostActiveEventHandler BoostConfig::BoostActive
	BoostActiveEventHandler_t387 * ___BoostActive_9;
	// BoostConfig/BoostType BoostConfig::<activeBoost>k__BackingField
	int32_t ___U3CactiveBoostU3Ek__BackingField_11;
};
struct BoostConfig_t372_StaticFields{
	// BoostConfig BoostConfig::<instance>k__BackingField
	BoostConfig_t372 * ___U3CinstanceU3Ek__BackingField_10;
};
