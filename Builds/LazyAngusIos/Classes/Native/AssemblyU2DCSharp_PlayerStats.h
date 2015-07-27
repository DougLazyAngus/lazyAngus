#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t496;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t531;
// PlayerStats/TreatsChangedEventHandler
struct TreatsChangedEventHandler_t532;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t533;
// PlayerStats
struct PlayerStats_t435;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerStats
struct  PlayerStats_t435  : public MonoBehaviour_t66
{
	// System.Int32 PlayerStats::gameScore
	int32_t ___gameScore_3;
	// System.Int32 PlayerStats::treatCount
	int32_t ___treatCount_4;
	// System.Int32[] PlayerStats::availableBoostCount
	Int32U5BU5D_t496* ___availableBoostCount_5;
	// System.Int32[] PlayerStats::purchasedBoostCount
	Int32U5BU5D_t496* ___purchasedBoostCount_6;
	// System.Boolean PlayerStats::registeredForEvents
	bool ___registeredForEvents_7;
	// PlayerStats/ScoreChangedEventHandler PlayerStats::ScoreChanged
	ScoreChangedEventHandler_t531 * ___ScoreChanged_8;
	// PlayerStats/TreatsChangedEventHandler PlayerStats::TreatsChanged
	TreatsChangedEventHandler_t532 * ___TreatsChanged_9;
	// PlayerStats/BoostsChangedEventHandler PlayerStats::BoostsChanged
	BoostsChangedEventHandler_t533 * ___BoostsChanged_10;
};
struct PlayerStats_t435_StaticFields{
	// PlayerStats PlayerStats::<instance>k__BackingField
	PlayerStats_t435 * ___U3CinstanceU3Ek__BackingField_11;
};
