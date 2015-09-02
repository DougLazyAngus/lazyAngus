#pragma once
#include <stdint.h>
// GameUI[]
struct GameUIU5BU5D_t566;
// GamePhaseState/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t562;
// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t563;
// GamePhaseState
struct GamePhaseState_t564;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// GamePhaseState
struct  GamePhaseState_t564  : public MonoBehaviour_t13
{
	// GamePhaseState/GamePhaseType GamePhaseState::pendingPhase
	int32_t ___pendingPhase_2;
	// System.Single GamePhaseState::pendingPhaseTimeout
	float ___pendingPhaseTimeout_3;
	// System.Boolean GamePhaseState::shouldCheckForPhaseTransition
	bool ___shouldCheckForPhaseTransition_4;
	// GameUI[] GamePhaseState::gameUIs
	GameUIU5BU5D_t566* ___gameUIs_5;
	// GamePhaseState/GameInstanceChangedEventHandler GamePhaseState::GameInstanceChanged
	GameInstanceChangedEventHandler_t562 * ___GameInstanceChanged_6;
	// GamePhaseState/GamePhaseChangedEventHandler GamePhaseState::GamePhaseChanged
	GamePhaseChangedEventHandler_t563 * ___GamePhaseChanged_7;
	// GamePhaseState/GamePhaseType GamePhaseState::<gamePhase>k__BackingField
	int32_t ___U3CgamePhaseU3Ek__BackingField_8;
	// GamePhaseState/GamePhaseType GamePhaseState::<previousGamePhase>k__BackingField
	int32_t ___U3CpreviousGamePhaseU3Ek__BackingField_9;
	// System.Int32 GamePhaseState::<instancesFinishedThisSession>k__BackingField
	int32_t ___U3CinstancesFinishedThisSessionU3Ek__BackingField_10;
	// System.Int32 GamePhaseState::<instancesFinishedEver>k__BackingField
	int32_t ___U3CinstancesFinishedEverU3Ek__BackingField_11;
};
struct GamePhaseState_t564_StaticFields{
	// GamePhaseState GamePhaseState::<instance>k__BackingField
	GamePhaseState_t564 * ___U3CinstanceU3Ek__BackingField_12;
};
