#pragma once
#include <stdint.h>
// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t512;
// GameLevelState
struct GameLevelState_t513;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameLevelState
struct  GameLevelState_t513  : public MonoBehaviour_t13
{
	// GameLevelState/GameLevelChangedEventHandler GameLevelState::GameLevelChanged
	GameLevelChangedEventHandler_t512 * ___GameLevelChanged_2;
	// System.Int32 GameLevelState::<gameLevel>k__BackingField
	int32_t ___U3CgameLevelU3Ek__BackingField_3;
};
struct GameLevelState_t513_StaticFields{
	// GameLevelState GameLevelState::<instance>k__BackingField
	GameLevelState_t513 * ___U3CinstanceU3Ek__BackingField_4;
};
