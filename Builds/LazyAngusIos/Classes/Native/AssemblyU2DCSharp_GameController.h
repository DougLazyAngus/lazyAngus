#pragma once
#include <stdint.h>
// MouseHole[]
struct MouseHoleU5BU5D_t460;
// MouseSpawnFromData
struct MouseSpawnFromData_t461;
// GameController
struct GameController_t462;
// System.Action`1<System.Boolean>
struct Action_1_t237;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameController
struct  GameController_t462  : public MonoBehaviour_t66
{
	// System.Single GameController::startWait
	float ___startWait_2;
	// System.Single GameController::minSpawnWait
	float ___minSpawnWait_3;
	// System.Single GameController::maxSpawnWait
	float ___maxSpawnWait_4;
	// MouseHole[] GameController::mouseHoles
	MouseHoleU5BU5D_t460* ___mouseHoles_5;
	// MouseSpawnFromData GameController::mouseSpawnFromData
	MouseSpawnFromData_t461 * ___mouseSpawnFromData_6;
	// System.Boolean GameController::registeredForEvents
	bool ___registeredForEvents_7;
	// System.Boolean GameController::checkForPhaseChanges
	bool ___checkForPhaseChanges_8;
};
struct GameController_t462_StaticFields{
	// GameController GameController::<instance>k__BackingField
	GameController_t462 * ___U3CinstanceU3Ek__BackingField_9;
	// System.Action`1<System.Boolean> GameController::<>f__am$cache8
	Action_1_t237 * ___U3CU3Ef__amU24cache8_10;
};
