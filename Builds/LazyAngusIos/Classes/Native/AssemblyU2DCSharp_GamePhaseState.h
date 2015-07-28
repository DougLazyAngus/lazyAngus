﻿#pragma once
#include <stdint.h>
// GameUI[]
struct GameUIU5BU5D_t512;
// GamePhaseState/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t508;
// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t509;
// GamePhaseState
struct GamePhaseState_t510;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// GamePhaseState
struct  GamePhaseState_t510  : public MonoBehaviour_t13
{
	// GamePhaseState/GamePhaseType GamePhaseState::pendingPhase
	int32_t ___pendingPhase_2;
	// System.Single GamePhaseState::pendingPhaseTimeout
	float ___pendingPhaseTimeout_3;
	// System.Single GamePhaseState::pendingPause
	float ___pendingPause_4;
	// System.Boolean GamePhaseState::shouldCheckForPhaseTransition
	bool ___shouldCheckForPhaseTransition_5;
	// GameUI[] GamePhaseState::gameUIs
	GameUIU5BU5D_t512* ___gameUIs_6;
	// GamePhaseState/GameInstanceChangedEventHandler GamePhaseState::GameInstanceChanged
	GameInstanceChangedEventHandler_t508 * ___GameInstanceChanged_7;
	// GamePhaseState/GamePhaseChangedEventHandler GamePhaseState::GamePhaseChanged
	GamePhaseChangedEventHandler_t509 * ___GamePhaseChanged_8;
	// GamePhaseState/GamePhaseType GamePhaseState::<gamePhase>k__BackingField
	int32_t ___U3CgamePhaseU3Ek__BackingField_9;
	// System.Int32 GamePhaseState::<instancesFinishedThisSession>k__BackingField
	int32_t ___U3CinstancesFinishedThisSessionU3Ek__BackingField_10;
	// System.Int32 GamePhaseState::<instancesFinishedEver>k__BackingField
	int32_t ___U3CinstancesFinishedEverU3Ek__BackingField_11;
};
struct GamePhaseState_t510_StaticFields{
	// GamePhaseState GamePhaseState::<instance>k__BackingField
	GamePhaseState_t510 * ___U3CinstanceU3Ek__BackingField_12;
};