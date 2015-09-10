#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t532;
// InputHandler
struct InputHandler_t533;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InputHandler
struct  InputHandler_t533  : public MonoBehaviour_t13
{
	// UnityEngine.Camera InputHandler::worldCamera
	Camera_t532 * ___worldCamera_2;
	// UnityEngine.Camera InputHandler::uxCamera
	Camera_t532 * ___uxCamera_3;
	// System.Boolean InputHandler::<isTouchDevice>k__BackingField
	bool ___U3CisTouchDeviceU3Ek__BackingField_4;
};
struct InputHandler_t533_StaticFields{
	// InputHandler InputHandler::<instance>k__BackingField
	InputHandler_t533 * ___U3CinstanceU3Ek__BackingField_5;
};
