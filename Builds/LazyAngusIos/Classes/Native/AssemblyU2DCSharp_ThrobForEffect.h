#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t366;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ThrobForEffect
struct  ThrobForEffect_t510  : public MonoBehaviour_t66
{
	// System.Boolean ThrobForEffect::throbbing
	bool ___throbbing_2;
	// System.Single ThrobForEffect::startThrobTime
	float ___startThrobTime_3;
	// System.Single ThrobForEffect::throbPeriod
	float ___throbPeriod_4;
	// System.Single ThrobForEffect::throbScale
	float ___throbScale_5;
	// UnityEngine.Transform ThrobForEffect::thingToScale
	Transform_t366 * ___thingToScale_6;
	// UnityEngine.Vector3 ThrobForEffect::originalScale
	Vector3_t451  ___originalScale_7;
};
