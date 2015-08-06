#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t548;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t583;
// PlayerStats/MoneyChangedEventHandler
struct MoneyChangedEventHandler_t584;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t585;
// PlayerStats
struct PlayerStats_t475;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerStats
struct  PlayerStats_t475  : public MonoBehaviour_t13
{
	// System.Int32[] PlayerStats::availableBoostCount
	Int32U5BU5D_t548* ___availableBoostCount_3;
	// System.Int32[] PlayerStats::purchasedBoostCount
	Int32U5BU5D_t548* ___purchasedBoostCount_4;
	// System.Boolean PlayerStats::registeredForEvents
	bool ___registeredForEvents_5;
	// PlayerStats/ScoreChangedEventHandler PlayerStats::ScoreChanged
	ScoreChangedEventHandler_t583 * ___ScoreChanged_6;
	// PlayerStats/MoneyChangedEventHandler PlayerStats::MoneyChanged
	MoneyChangedEventHandler_t584 * ___MoneyChanged_7;
	// PlayerStats/BoostsChangedEventHandler PlayerStats::BoostsChanged
	BoostsChangedEventHandler_t585 * ___BoostsChanged_8;
	// System.Int32 PlayerStats::<gameScore>k__BackingField
	int32_t ___U3CgameScoreU3Ek__BackingField_9;
	// System.Int32 PlayerStats::<money>k__BackingField
	int32_t ___U3CmoneyU3Ek__BackingField_10;
};
struct PlayerStats_t475_StaticFields{
	// PlayerStats PlayerStats::<instance>k__BackingField
	PlayerStats_t475 * ___U3CinstanceU3Ek__BackingField_11;
};
