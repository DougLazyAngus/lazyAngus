#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ScreenPosition
#include "AssemblyU2DCSharp_ScreenPosition.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// ScreenPlacement
struct  ScreenPlacement_t407  : public MonoBehaviour_t13
{
	// ScreenPosition ScreenPlacement::position
	int32_t ___position_2;
	// UnityEngine.Vector2 ScreenPlacement::pixelOffset
	Vector2_t110  ___pixelOffset_3;
	// System.Boolean ScreenPlacement::persents
	bool ___persents_4;
	// System.Boolean ScreenPlacement::calulateStartOnly
	bool ___calulateStartOnly_5;
	// UnityEngine.Transform ScreenPlacement::boundsTransform
	Transform_t406 * ___boundsTransform_6;
	// UnityEngine.Vector2 ScreenPlacement::actualOffset
	Vector2_t110  ___actualOffset_7;
	// UnityEngine.ScreenOrientation ScreenPlacement::orinetation
	int32_t ___orinetation_8;
};
