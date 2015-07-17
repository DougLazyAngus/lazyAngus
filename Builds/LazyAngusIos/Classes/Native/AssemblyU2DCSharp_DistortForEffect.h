#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t364;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// DistortForEffect
struct  DistortForEffect_t448  : public MonoBehaviour_t67
{
	// System.Boolean DistortForEffect::distorting
	bool ___distorting_2;
	// System.Single DistortForEffect::startDistortTime
	float ___startDistortTime_3;
	// System.Single DistortForEffect::distortPeriod
	float ___distortPeriod_4;
	// System.Single DistortForEffect::distortScale
	float ___distortScale_5;
	// UnityEngine.Transform DistortForEffect::thingToScale
	Transform_t364 * ___thingToScale_6;
	// UnityEngine.Vector3 DistortForEffect::originalScale
	Vector3_t449  ___originalScale_7;
};
