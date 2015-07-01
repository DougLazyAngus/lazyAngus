#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t428;
// GameController
struct GameController_t383;
// PlayerController
struct PlayerController_t429;
// InputHandler
struct InputHandler_t430;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InputHandler
struct  InputHandler_t430  : public MonoBehaviour_t67
{
	// UnityEngine.Camera InputHandler::worldCamera
	Camera_t428 * ___worldCamera_4;
	// UnityEngine.Camera InputHandler::uxCamera
	Camera_t428 * ___uxCamera_5;
	// GameController InputHandler::gameController
	GameController_t383 * ___gameController_6;
	// PlayerController InputHandler::playerController
	PlayerController_t429 * ___playerController_7;
	// System.Int32 InputHandler::UserInteractionsLayerBitmask
	int32_t ___UserInteractionsLayerBitmask_8;
	// System.Boolean InputHandler::<isTouchDevice>k__BackingField
	bool ___U3CisTouchDeviceU3Ek__BackingField_9;
};
struct InputHandler_t430_StaticFields{
	// System.Int32 InputHandler::UserInteractionsLayerBit
	int32_t ___UserInteractionsLayerBit_2;
	// System.Int32 InputHandler::UILayerBit
	int32_t ___UILayerBit_3;
	// InputHandler InputHandler::<instance>k__BackingField
	InputHandler_t430 * ___U3CinstanceU3Ek__BackingField_10;
};
