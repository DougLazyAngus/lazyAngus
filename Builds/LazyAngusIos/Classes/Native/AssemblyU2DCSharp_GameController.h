#pragma once
#include <stdint.h>
// MouseSinkController[]
struct MouseSinkControllerU5BU5D_t555;
// MouseSpawnFromData
struct MouseSpawnFromData_t556;
// GameController
struct GameController_t557;
// System.Action`1<System.Boolean>
struct Action_1_t277;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameController
struct  GameController_t557  : public MonoBehaviour_t13
{
	// System.Single GameController::startWait
	float ___startWait_2;
	// System.Single GameController::minSpawnWait
	float ___minSpawnWait_3;
	// System.Single GameController::maxSpawnWait
	float ___maxSpawnWait_4;
	// MouseSinkController[] GameController::mouseSinkControllers
	MouseSinkControllerU5BU5D_t555* ___mouseSinkControllers_5;
	// System.Int32 GameController::escapedMouseCount
	int32_t ___escapedMouseCount_6;
	// MouseSpawnFromData GameController::mouseSpawnFromData
	MouseSpawnFromData_t556 * ___mouseSpawnFromData_7;
	// System.Boolean GameController::registeredForEvents
	bool ___registeredForEvents_8;
	// System.Boolean GameController::checkForPhaseChanges
	bool ___checkForPhaseChanges_9;
};
struct GameController_t557_StaticFields{
	// GameController GameController::<instance>k__BackingField
	GameController_t557 * ___U3CinstanceU3Ek__BackingField_10;
	// System.Action`1<System.Boolean> GameController::<>f__am$cache9
	Action_1_t277 * ___U3CU3Ef__amU24cache9_11;
};
