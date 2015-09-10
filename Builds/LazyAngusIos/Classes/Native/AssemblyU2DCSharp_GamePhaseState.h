#pragma once
#include <stdint.h>
// GameUI[]
struct GameUIU5BU5D_t620;
// GamePhaseState/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t662;
// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t663;
// GamePhaseState
struct GamePhaseState_t664;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// GamePhaseState
struct  GamePhaseState_t664  : public MonoBehaviour_t13
{
	// System.Single GamePhaseState::pendingPhaseTimeout
	float ___pendingPhaseTimeout_2;
	// System.Boolean GamePhaseState::shouldCheckForPhaseTransition
	bool ___shouldCheckForPhaseTransition_3;
	// GameUI[] GamePhaseState::gameUIs
	GameUIU5BU5D_t620* ___gameUIs_4;
	// GamePhaseState/GameInstanceChangedEventHandler GamePhaseState::GameInstanceChanged
	GameInstanceChangedEventHandler_t662 * ___GameInstanceChanged_5;
	// GamePhaseState/GamePhaseChangedEventHandler GamePhaseState::GamePhaseChanged
	GamePhaseChangedEventHandler_t663 * ___GamePhaseChanged_6;
	// GamePhaseState/GamePhaseType GamePhaseState::<gamePhase>k__BackingField
	int32_t ___U3CgamePhaseU3Ek__BackingField_7;
	// GamePhaseState/GamePhaseType GamePhaseState::<previousGamePhase>k__BackingField
	int32_t ___U3CpreviousGamePhaseU3Ek__BackingField_8;
	// GamePhaseState/GamePhaseType GamePhaseState::<pendingPhase>k__BackingField
	int32_t ___U3CpendingPhaseU3Ek__BackingField_9;
	// System.Int32 GamePhaseState::<instancesFinishedThisSession>k__BackingField
	int32_t ___U3CinstancesFinishedThisSessionU3Ek__BackingField_10;
	// System.Int32 GamePhaseState::<instancesFinishedEver>k__BackingField
	int32_t ___U3CinstancesFinishedEverU3Ek__BackingField_11;
};
struct GamePhaseState_t664_StaticFields{
	// GamePhaseState GamePhaseState::<instance>k__BackingField
	GamePhaseState_t664 * ___U3CinstanceU3Ek__BackingField_12;
};
