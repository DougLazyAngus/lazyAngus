#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// DistortForEffect
struct  DistortForEffect_t535  : public MonoBehaviour_t13
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
	Transform_t406 * ___thingToScale_6;
	// UnityEngine.Vector3 DistortForEffect::originalScale
	Vector3_t536  ___originalScale_7;
};
