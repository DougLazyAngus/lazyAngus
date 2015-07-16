#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GPLeaderBoard
struct GPLeaderBoard_t155;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GPScore>
struct List_1_t542;
// GPScore
struct GPScore_t275;
// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpan.h"
// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionType.h"

// System.Void GPLeaderBoard::.ctor(System.String,System.String)
extern "C" void GPLeaderBoard__ctor_m637 (GPLeaderBoard_t155 * __this, String_t* ___lId, String_t* ___lName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateName(System.String)
extern "C" void GPLeaderBoard_UpdateName_m638 (GPLeaderBoard_t155 * __this, String_t* ___lName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GPScore> GPLeaderBoard::GetScoresList(GPBoardTimeSpan,GPCollectionType)
extern "C" List_1_t542 * GPLeaderBoard_GetScoresList_m639 (GPLeaderBoard_t155 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetScoreByPlayerId(System.String,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t275 * GPLeaderBoard_GetScoreByPlayerId_m640 (GPLeaderBoard_t155 * __this, String_t* ___playerId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetScore(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t275 * GPLeaderBoard_GetScore_m641 (GPLeaderBoard_t155 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPScore GPLeaderBoard::GetCurrentPlayerScore(GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t275 * GPLeaderBoard_GetCurrentPlayerScore_m642 (GPLeaderBoard_t155 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateCurrentPlayerRank(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" void GPLeaderBoard_UpdateCurrentPlayerRank_m643 (GPLeaderBoard_t155 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPLeaderBoard::UpdateScore(GPScore)
extern "C" void GPLeaderBoard_UpdateScore_m644 (GPLeaderBoard_t155 * __this, GPScore_t275 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPLeaderBoard::get_id()
extern "C" String_t* GPLeaderBoard_get_id_m645 (GPLeaderBoard_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPLeaderBoard::get_name()
extern "C" String_t* GPLeaderBoard_get_name_m646 (GPLeaderBoard_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
