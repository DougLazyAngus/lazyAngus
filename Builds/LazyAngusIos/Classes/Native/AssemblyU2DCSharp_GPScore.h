#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionType.h"
// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpan.h"
// GPScore
struct  GPScore_t343  : public Object_t
{
	// System.Int32 GPScore::_rank
	int32_t ____rank_0;
	// System.Int64 GPScore::_score
	int64_t ____score_1;
	// System.String GPScore::_playerId
	String_t* ____playerId_2;
	// System.String GPScore::_leaderboardId
	String_t* ____leaderboardId_3;
	// GPCollectionType GPScore::_collection
	int32_t ____collection_4;
	// GPBoardTimeSpan GPScore::_timeSpan
	int32_t ____timeSpan_5;
};
