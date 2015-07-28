#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t540;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t576;
// PlayerStats/TreatsChangedEventHandler
struct TreatsChangedEventHandler_t577;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t578;
// PlayerStats
struct PlayerStats_t476;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerStats
struct  PlayerStats_t476  : public MonoBehaviour_t13
{
	// System.Int32 PlayerStats::gameScore
	int32_t ___gameScore_3;
	// System.Int32 PlayerStats::treatCount
	int32_t ___treatCount_4;
	// System.Int32[] PlayerStats::availableBoostCount
	Int32U5BU5D_t540* ___availableBoostCount_5;
	// System.Int32[] PlayerStats::purchasedBoostCount
	Int32U5BU5D_t540* ___purchasedBoostCount_6;
	// System.Boolean PlayerStats::registeredForEvents
	bool ___registeredForEvents_7;
	// PlayerStats/ScoreChangedEventHandler PlayerStats::ScoreChanged
	ScoreChangedEventHandler_t576 * ___ScoreChanged_8;
	// PlayerStats/TreatsChangedEventHandler PlayerStats::TreatsChanged
	TreatsChangedEventHandler_t577 * ___TreatsChanged_9;
	// PlayerStats/BoostsChangedEventHandler PlayerStats::BoostsChanged
	BoostsChangedEventHandler_t578 * ___BoostsChanged_10;
};
struct PlayerStats_t476_StaticFields{
	// PlayerStats PlayerStats::<instance>k__BackingField
	PlayerStats_t476 * ___U3CinstanceU3Ek__BackingField_11;
};
