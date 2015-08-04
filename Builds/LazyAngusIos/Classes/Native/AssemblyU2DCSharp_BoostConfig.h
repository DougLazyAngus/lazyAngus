#pragma once
#include <stdint.h>
// BoostDesc[]
struct BoostDescU5BU5D_t470;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t468;
// BoostConfig
struct BoostConfig_t456;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig
struct  BoostConfig_t456  : public MonoBehaviour_t13
{
	// BoostDesc[] BoostConfig::boostDescs
	BoostDescU5BU5D_t470* ___boostDescs_2;
	// System.Collections.IEnumerator BoostConfig::activePause
	Object_t * ___activePause_3;
	// System.Single BoostConfig::activeBoostStartTime
	float ___activeBoostStartTime_4;
	// System.Single BoostConfig::activeBoostEndTime
	float ___activeBoostEndTime_5;
	// System.Boolean BoostConfig::registeredForEvents
	bool ___registeredForEvents_6;
	// BoostConfig/BoostActiveEventHandler BoostConfig::BoostActive
	BoostActiveEventHandler_t468 * ___BoostActive_7;
	// BoostConfig/BoostType BoostConfig::<activeBoost>k__BackingField
	int32_t ___U3CactiveBoostU3Ek__BackingField_9;
};
struct BoostConfig_t456_StaticFields{
	// BoostConfig BoostConfig::<instance>k__BackingField
	BoostConfig_t456 * ___U3CinstanceU3Ek__BackingField_8;
};
