#pragma once
#include <stdint.h>
// System.String
struct String_t;
// GP_Quest
struct GP_Quest_t169;
// GooglePlayResult
#include "AssemblyU2DCSharp_GooglePlayResult.h"
// GP_QuestResult
struct  GP_QuestResult_t172  : public GooglePlayResult_t167
{
	// System.String GP_QuestResult::questId
	String_t* ___questId_2;
	// System.String GP_QuestResult::reward
	String_t* ___reward_3;
	// GP_Quest GP_QuestResult::quest
	GP_Quest_t169 * ___quest_4;
};
