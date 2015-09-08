#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GPLeaderBoard
struct GPLeaderBoard_t224;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GPScore>
struct List_1_t698;
// GPScore
struct GPScore_t343;
// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpan.h"
// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionType.h"

// System.Void GPLeaderBoard::.ctor(System.String,System.String)
extern "C" void GPLeaderBoard__ctor_m1312 (GPLeaderBoard_t224 * __this, String_t* ___lId, String_t* ___lName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateName(System.String)
extern "C" void GPLeaderBoard_UpdateName_m1313 (GPLeaderBoard_t224 * __this, String_t* ___lName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GPScore> GPLeaderBoard::GetScoresList(GPBoardTimeSpan,GPCollectionType)
extern "C" List_1_t698 * GPLeaderBoard_GetScoresList_m1314 (GPLeaderBoard_t224 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetScoreByPlayerId(System.String,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t343 * GPLeaderBoard_GetScoreByPlayerId_m1315 (GPLeaderBoard_t224 * __this, String_t* ___playerId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetScore(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t343 * GPLeaderBoard_GetScore_m1316 (GPLeaderBoard_t224 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetCurrentPlayerScore(GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t343 * GPLeaderBoard_GetCurrentPlayerScore_m1317 (GPLeaderBoard_t224 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateCurrentPlayerRank(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" void GPLeaderBoard_UpdateCurrentPlayerRank_m1318 (GPLeaderBoard_t224 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateScore(GPScore)
extern "C" void GPLeaderBoard_UpdateScore_m1319 (GPLeaderBoard_t224 * __this, GPScore_t343 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPLeaderBoard::get_id()
extern "C" String_t* GPLeaderBoard_get_id_m1320 (GPLeaderBoard_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPLeaderBoard::get_name()
extern "C" String_t* GPLeaderBoard_get_name_m1321 (GPLeaderBoard_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
