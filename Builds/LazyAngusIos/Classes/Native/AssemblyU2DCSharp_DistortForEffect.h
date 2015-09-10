#pragma once
#include <stdint.h>
// DistortForEffect/DistortFinishedHandler
struct DistortFinishedHandler_t689;
// UnityEngine.Transform
struct Transform_t406;
// BounceLerp
#include "AssemblyU2DCSharp_BounceLerp.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// DistortForEffect
struct  DistortForEffect_t535  : public BounceLerp_t605
{
	// DistortForEffect/DistortFinishedHandler DistortForEffect::handler
	DistortFinishedHandler_t689 * ___handler_7;
	// System.Single DistortForEffect::startDistortTime
	float ___startDistortTime_8;
	// UnityEngine.Vector3 DistortForEffect::originalScale
	Vector3_t523  ___originalScale_9;
	// System.Single DistortForEffect::minScale
	float ___minScale_10;
	// UnityEngine.Transform DistortForEffect::thingToScale
	Transform_t406 * ___thingToScale_11;
	// System.Boolean DistortForEffect::squishAndStretch
	bool ___squishAndStretch_12;
	// System.Boolean DistortForEffect::onAtStart
	bool ___onAtStart_13;
	// System.Boolean DistortForEffect::<distorting>k__BackingField
	bool ___U3CdistortingU3Ek__BackingField_14;
};
