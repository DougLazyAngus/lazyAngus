#pragma once
#include <stdint.h>
// MouseHole[]
struct MouseHoleU5BU5D_t552;
// MouseSpawnFromData
struct MouseSpawnFromData_t553;
// GameController
struct GameController_t554;
// System.Action`1<System.Boolean>
struct Action_1_t277;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameController
struct  GameController_t554  : public MonoBehaviour_t13
{
	// System.Single GameController::startWait
	float ___startWait_2;
	// System.Single GameController::minSpawnWait
	float ___minSpawnWait_3;
	// System.Single GameController::maxSpawnWait
	float ___maxSpawnWait_4;
	// MouseHole[] GameController::mouseHoles
	MouseHoleU5BU5D_t552* ___mouseHoles_5;
	// MouseSpawnFromData GameController::mouseSpawnFromData
	MouseSpawnFromData_t553 * ___mouseSpawnFromData_6;
	// System.Boolean GameController::registeredForEvents
	bool ___registeredForEvents_7;
	// System.Boolean GameController::checkForPhaseChanges
	bool ___checkForPhaseChanges_8;
};
struct GameController_t554_StaticFields{
	// GameController GameController::<instance>k__BackingField
	GameController_t554 * ___U3CinstanceU3Ek__BackingField_9;
	// System.Action`1<System.Boolean> GameController::<>f__am$cache8
	Action_1_t277 * ___U3CU3Ef__amU24cache8_10;
};
