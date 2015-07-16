#pragma once
#include <stdint.h>
// BoostDesc[]
struct BoostDescU5BU5D_t391;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.AudioSource
struct AudioSource_t392;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t388;
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
	BoostDescU5BU5D_t391* ___boostDescs_2;
	// System.Collections.IEnumerator BoostConfig::activePause
	Object_t * ___activePause_3;
	// System.Single BoostConfig::activeBoostStartTime
	float ___activeBoostStartTime_4;
	// System.Single BoostConfig::activeBoostEndTime
	float ___activeBoostEndTime_5;
	// System.Boolean BoostConfig::registeredForEvents
	bool ___registeredForEvents_6;
	// UnityEngine.AudioSource BoostConfig::startBoostAudioSource
	AudioSource_t392 * ___startBoostAudioSource_7;
	// BoostConfig/BoostActiveEventHandler BoostConfig::BoostActive
	BoostActiveEventHandler_t388 * ___BoostActive_8;
	// BoostConfig/BoostType BoostConfig::<activeBoost>k__BackingField
	int32_t ___U3CactiveBoostU3Ek__BackingField_10;
};
struct BoostConfig_t373_StaticFields{
	// BoostConfig BoostConfig::<instance>k__BackingField
	BoostConfig_t373 * ___U3CinstanceU3Ek__BackingField_9;
};
