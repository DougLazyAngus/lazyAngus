#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t476;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t473;
// PlayerStats/TreatsChangedEventHandler
struct TreatsChangedEventHandler_t474;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t475;
// PlayerStats
struct PlayerStats_t391;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerStats
struct  PlayerStats_t391  : public MonoBehaviour_t67
{
	// System.Int32 PlayerStats::gameScore
	int32_t ___gameScore_3;
	// System.Int32 PlayerStats::treatCount
	int32_t ___treatCount_4;
	// System.Int32[] PlayerStats::availableBoostCount
	Int32U5BU5D_t476* ___availableBoostCount_5;
	// System.Int32[] PlayerStats::purchasedBoostCount
	Int32U5BU5D_t476* ___purchasedBoostCount_6;
	// System.Boolean PlayerStats::registeredForEvents
	bool ___registeredForEvents_7;
	// PlayerStats/ScoreChangedEventHandler PlayerStats::ScoreChanged
	ScoreChangedEventHandler_t473 * ___ScoreChanged_8;
	// PlayerStats/TreatsChangedEventHandler PlayerStats::TreatsChanged
	TreatsChangedEventHandler_t474 * ___TreatsChanged_9;
	// PlayerStats/BoostsChangedEventHandler PlayerStats::BoostsChanged
	BoostsChangedEventHandler_t475 * ___BoostsChanged_10;
};
struct PlayerStats_t391_StaticFields{
	// PlayerStats PlayerStats::<instance>k__BackingField
	PlayerStats_t391 * ___U3CinstanceU3Ek__BackingField_11;
};
