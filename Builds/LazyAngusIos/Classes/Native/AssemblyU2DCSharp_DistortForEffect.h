#pragma once
#include <stdint.h>
// DistortForEffect/DistortFinishedHandler
struct DistortFinishedHandler_t533;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// DistortForEffect
struct  DistortForEffect_t534  : public MonoBehaviour_t13
{
	// DistortForEffect/DistortFinishedHandler DistortForEffect::handler
	DistortFinishedHandler_t533 * ___handler_2;
	// System.Single DistortForEffect::startDistortTime
	float ___startDistortTime_3;
	// System.Single DistortForEffect::distortPeriod
	float ___distortPeriod_4;
	// System.Single DistortForEffect::distortScale
	float ___distortScale_5;
	// UnityEngine.Transform DistortForEffect::thingToScale
	Transform_t406 * ___thingToScale_6;
	// System.Boolean DistortForEffect::squishAndStretch
	bool ___squishAndStretch_7;
	// UnityEngine.Vector3 DistortForEffect::originalScale
	Vector3_t535  ___originalScale_8;
	// System.Boolean DistortForEffect::<distorting>k__BackingField
	bool ___U3CdistortingU3Ek__BackingField_9;
};
