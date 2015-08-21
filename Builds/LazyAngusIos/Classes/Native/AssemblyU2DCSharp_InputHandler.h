#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t544;
// InputHandler
struct InputHandler_t571;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InputHandler
struct  InputHandler_t571  : public MonoBehaviour_t13
{
	// UnityEngine.Camera InputHandler::worldCamera
	Camera_t544 * ___worldCamera_2;
	// UnityEngine.Camera InputHandler::uxCamera
	Camera_t544 * ___uxCamera_3;
	// System.Boolean InputHandler::<isTouchDevice>k__BackingField
	bool ___U3CisTouchDeviceU3Ek__BackingField_4;
};
struct InputHandler_t571_StaticFields{
	// InputHandler InputHandler::<instance>k__BackingField
	InputHandler_t571 * ___U3CinstanceU3Ek__BackingField_5;
};
