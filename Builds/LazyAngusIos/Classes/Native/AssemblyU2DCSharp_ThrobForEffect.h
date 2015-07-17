#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t364;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ThrobForEffect
struct  ThrobForEffect_t507  : public MonoBehaviour_t67
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
	Transform_t364 * ___thingToScale_6;
	// UnityEngine.Vector3 ThrobForEffect::originalScale
	Vector3_t449  ___originalScale_7;
};
