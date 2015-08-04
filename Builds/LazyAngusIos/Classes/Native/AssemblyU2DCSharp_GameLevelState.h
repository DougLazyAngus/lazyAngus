#pragma once
#include <stdint.h>
// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t511;
// GameLevelState
struct GameLevelState_t512;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameLevelState
struct  GameLevelState_t512  : public MonoBehaviour_t13
{
	// GameLevelState/GameLevelChangedEventHandler GameLevelState::GameLevelChanged
	GameLevelChangedEventHandler_t511 * ___GameLevelChanged_2;
	// System.Int32 GameLevelState::<gameLevel>k__BackingField
	int32_t ___U3CgameLevelU3Ek__BackingField_3;
};
struct GameLevelState_t512_StaticFields{
	// GameLevelState GameLevelState::<instance>k__BackingField
	GameLevelState_t512 * ___U3CinstanceU3Ek__BackingField_4;
};
