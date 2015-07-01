#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t462;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t459;
// PlayerStats/TreatsChangedEventHandler
struct TreatsChangedEventHandler_t460;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t461;
// PlayerStats
struct PlayerStats_t382;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerStats
struct  PlayerStats_t382  : public MonoBehaviour_t67
{
	// System.Int32 PlayerStats::gameScore
	int32_t ___gameScore_3;
	// System.Int32 PlayerStats::treatCount
	int32_t ___treatCount_4;
	// System.Int32[] PlayerStats::availableBoostCount
	Int32U5BU5D_t462* ___availableBoostCount_5;
	// System.Int32[] PlayerStats::purchasedBoostCount
	Int32U5BU5D_t462* ___purchasedBoostCount_6;
	// PlayerStats/ScoreChangedEventHandler PlayerStats::ScoreChanged
	ScoreChangedEventHandler_t459 * ___ScoreChanged_7;
	// PlayerStats/TreatsChangedEventHandler PlayerStats::TreatsChanged
	TreatsChangedEventHandler_t460 * ___TreatsChanged_8;
	// PlayerStats/BoostsChangedEventHandler PlayerStats::BoostsChanged
	BoostsChangedEventHandler_t461 * ___BoostsChanged_9;
};
struct PlayerStats_t382_StaticFields{
	// PlayerStats PlayerStats::<instance>k__BackingField
	PlayerStats_t382 * ___U3CinstanceU3Ek__BackingField_10;
};
