#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t574;
// InputHandler
struct InputHandler_t575;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InputHandler
struct  InputHandler_t575  : public MonoBehaviour_t13
{
	// UnityEngine.Camera InputHandler::worldCamera
	Camera_t574 * ___worldCamera_4;
	// UnityEngine.Camera InputHandler::uxCamera
	Camera_t574 * ___uxCamera_5;
	// System.Int32 InputHandler::UserInteractionsLayerBitmask
	int32_t ___UserInteractionsLayerBitmask_6;
	// System.Boolean InputHandler::<isTouchDevice>k__BackingField
	bool ___U3CisTouchDeviceU3Ek__BackingField_7;
};
struct InputHandler_t575_StaticFields{
	// System.Int32 InputHandler::UserInteractionsLayerBit
	int32_t ___UserInteractionsLayerBit_2;
	// System.Int32 InputHandler::UILayerBit
	int32_t ___UILayerBit_3;
	// InputHandler InputHandler::<instance>k__BackingField
	InputHandler_t575 * ___U3CinstanceU3Ek__BackingField_8;
};
