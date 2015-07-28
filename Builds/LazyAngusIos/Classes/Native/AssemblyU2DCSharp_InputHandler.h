#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t524;
// InputHandler
struct InputHandler_t525;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InputHandler
struct  InputHandler_t525  : public MonoBehaviour_t13
{
	// UnityEngine.Camera InputHandler::worldCamera
	Camera_t524 * ___worldCamera_4;
	// UnityEngine.Camera InputHandler::uxCamera
	Camera_t524 * ___uxCamera_5;
	// System.Int32 InputHandler::UserInteractionsLayerBitmask
	int32_t ___UserInteractionsLayerBitmask_6;
	// System.Boolean InputHandler::<isTouchDevice>k__BackingField
	bool ___U3CisTouchDeviceU3Ek__BackingField_7;
};
struct InputHandler_t525_StaticFields{
	// System.Int32 InputHandler::UserInteractionsLayerBit
	int32_t ___UserInteractionsLayerBit_2;
	// System.Int32 InputHandler::UILayerBit
	int32_t ___UILayerBit_3;
	// InputHandler InputHandler::<instance>k__BackingField
	InputHandler_t525 * ___U3CinstanceU3Ek__BackingField_8;
};
