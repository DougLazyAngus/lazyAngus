#pragma once
#include <stdint.h>
// BoostDesc[]
struct BoostDescU5BU5D_t393;
// PlayerStats
struct PlayerStats_t382;
// GameController
struct GameController_t383;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t390;
// BoostConfig
struct BoostConfig_t373;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig
struct  BoostConfig_t373  : public MonoBehaviour_t67
{
	// BoostDesc[] BoostConfig::boostDescs
	BoostDescU5BU5D_t393* ___boostDescs_2;
	// PlayerStats BoostConfig::playerStats
	PlayerStats_t382 * ___playerStats_3;
	// GameController BoostConfig::gameController
	GameController_t383 * ___gameController_4;
	// System.Collections.IEnumerator BoostConfig::activePause
	Object_t * ___activePause_5;
	// System.Single BoostConfig::activeBoostStartTime
	float ___activeBoostStartTime_6;
	// System.Single BoostConfig::activeBoostEndTime
	float ___activeBoostEndTime_7;
	// BoostConfig/BoostActiveEventHandler BoostConfig::BoostActive
	BoostActiveEventHandler_t390 * ___BoostActive_8;
	// BoostConfig/BoostType BoostConfig::<activeBoost>k__BackingField
	int32_t ___U3CactiveBoostU3Ek__BackingField_10;
};
struct BoostConfig_t373_StaticFields{
	// BoostConfig BoostConfig::<instance>k__BackingField
	BoostConfig_t373 * ___U3CinstanceU3Ek__BackingField_9;
};
