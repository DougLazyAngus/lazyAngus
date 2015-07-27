#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t480;
// InputHandler
struct InputHandler_t481;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InputHandler
struct  InputHandler_t481  : public MonoBehaviour_t66
{
	// UnityEngine.Camera InputHandler::worldCamera
	Camera_t480 * ___worldCamera_4;
	// UnityEngine.Camera InputHandler::uxCamera
	Camera_t480 * ___uxCamera_5;
	// System.Int32 InputHandler::UserInteractionsLayerBitmask
	int32_t ___UserInteractionsLayerBitmask_6;
	// System.Boolean InputHandler::<isTouchDevice>k__BackingField
	bool ___U3CisTouchDeviceU3Ek__BackingField_7;
};
struct InputHandler_t481_StaticFields{
	// System.Int32 InputHandler::UserInteractionsLayerBit
	int32_t ___UserInteractionsLayerBit_2;
	// System.Int32 InputHandler::UILayerBit
	int32_t ___UILayerBit_3;
	// InputHandler InputHandler::<instance>k__BackingField
	InputHandler_t481 * ___U3CinstanceU3Ek__BackingField_8;
};
