#pragma once
#include <stdint.h>
// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t505;
// GameLevelState
struct GameLevelState_t506;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameLevelState
struct  GameLevelState_t506  : public MonoBehaviour_t13
{
	// GameLevelState/GameLevelChangedEventHandler GameLevelState::GameLevelChanged
	GameLevelChangedEventHandler_t505 * ___GameLevelChanged_2;
	// System.Int32 GameLevelState::<gameLevel>k__BackingField
	int32_t ___U3CgameLevelU3Ek__BackingField_3;
};
struct GameLevelState_t506_StaticFields{
	// GameLevelState GameLevelState::<instance>k__BackingField
	GameLevelState_t506 * ___U3CinstanceU3Ek__BackingField_4;
};
