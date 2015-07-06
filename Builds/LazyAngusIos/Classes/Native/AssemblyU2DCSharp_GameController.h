#pragma once
#include <stdint.h>
// MouseHole[]
struct MouseHoleU5BU5D_t426;
// MouseSpawnFromData
struct MouseSpawnFromData_t427;
// UnityEngine.GameObject
struct GameObject_t284;
// PlayerStats
struct PlayerStats_t391;
// BoostConfig
struct BoostConfig_t372;
// GameUI[]
struct GameUIU5BU5D_t428;
// GameController/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t422;
// GameController/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t423;
// GameController/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t424;
// GameController
struct GameController_t392;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameController/GamePhaseType
#include "AssemblyU2DCSharp_GameController_GamePhaseType.h"
// GameController
struct  GameController_t392  : public MonoBehaviour_t67
{
	// System.Single GameController::startWait
	float ___startWait_2;
	// System.Single GameController::minSpawnWait
	float ___minSpawnWait_3;
	// System.Single GameController::maxSpawnWait
	float ___maxSpawnWait_4;
	// MouseHole[] GameController::mouseHoles
	MouseHoleU5BU5D_t426* ___mouseHoles_5;
	// MouseSpawnFromData GameController::mouseSpawnFromData
	MouseSpawnFromData_t427 * ___mouseSpawnFromData_6;
	// UnityEngine.GameObject GameController::welcomeUIGameObject
	GameObject_t284 * ___welcomeUIGameObject_7;
	// UnityEngine.GameObject GameController::levelEndUIGameObject
	GameObject_t284 * ___levelEndUIGameObject_8;
	// UnityEngine.GameObject GameController::levelPlayUIGameObject
	GameObject_t284 * ___levelPlayUIGameObject_9;
	// UnityEngine.GameObject GameController::gameOverUIGameObject
	GameObject_t284 * ___gameOverUIGameObject_10;
	// GameController/GamePhaseType GameController::pendingPhase
	int32_t ___pendingPhase_11;
	// System.Single GameController::pendingPhaseTimeout
	float ___pendingPhaseTimeout_12;
	// System.Single GameController::pendingPause
	float ___pendingPause_13;
	// System.Boolean GameController::shouldCheckForPhaseTransition
	bool ___shouldCheckForPhaseTransition_14;
	// PlayerStats GameController::playerStats
	PlayerStats_t391 * ___playerStats_15;
	// BoostConfig GameController::boostConfig
	BoostConfig_t372 * ___boostConfig_16;
	// GameUI[] GameController::gameUIs
	GameUIU5BU5D_t428* ___gameUIs_17;
	// GameController/GameInstanceChangedEventHandler GameController::GameInstanceChanged
	GameInstanceChangedEventHandler_t422 * ___GameInstanceChanged_18;
	// GameController/GameLevelChangedEventHandler GameController::GameLevelChanged
	GameLevelChangedEventHandler_t423 * ___GameLevelChanged_19;
	// GameController/GamePhaseChangedEventHandler GameController::GamePhaseChanged
	GamePhaseChangedEventHandler_t424 * ___GamePhaseChanged_20;
	// System.Int32 GameController::<gameLevel>k__BackingField
	int32_t ___U3CgameLevelU3Ek__BackingField_21;
	// GameController/GamePhaseType GameController::<gamePhase>k__BackingField
	int32_t ___U3CgamePhaseU3Ek__BackingField_22;
};
struct GameController_t392_StaticFields{
	// GameController GameController::<instance>k__BackingField
	GameController_t392 * ___U3CinstanceU3Ek__BackingField_23;
};
