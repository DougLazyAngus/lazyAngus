#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GPLeaderBoard
struct GPLeaderBoard_t182;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GPScore>
struct List_1_t581;
// GPScore
struct GPScore_t301;
// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpan.h"
// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionType.h"

// System.Void GPLeaderBoard::.ctor(System.String,System.String)
extern "C" void GPLeaderBoard__ctor_m1037 (GPLeaderBoard_t182 * __this, String_t* ___lId, String_t* ___lName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateName(System.String)
extern "C" void GPLeaderBoard_UpdateName_m1038 (GPLeaderBoard_t182 * __this, String_t* ___lName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GPScore> GPLeaderBoard::GetScoresList(GPBoardTimeSpan,GPCollectionType)
extern "C" List_1_t581 * GPLeaderBoard_GetScoresList_m1039 (GPLeaderBoard_t182 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetScoreByPlayerId(System.String,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t301 * GPLeaderBoard_GetScoreByPlayerId_m1040 (GPLeaderBoard_t182 * __this, String_t* ___playerId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetScore(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t301 * GPLeaderBoard_GetScore_m1041 (GPLeaderBoard_t182 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetCurrentPlayerScore(GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t301 * GPLeaderBoard_GetCurrentPlayerScore_m1042 (GPLeaderBoard_t182 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateCurrentPlayerRank(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" void GPLeaderBoard_UpdateCurrentPlayerRank_m1043 (GPLeaderBoard_t182 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateScore(GPScore)
extern "C" void GPLeaderBoard_UpdateScore_m1044 (GPLeaderBoard_t182 * __this, GPScore_t301 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPLeaderBoard::get_id()
extern "C" String_t* GPLeaderBoard_get_id_m1045 (GPLeaderBoard_t182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPLeaderBoard::get_name()
extern "C" String_t* GPLeaderBoard_get_name_m1046 (GPLeaderBoard_t182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
