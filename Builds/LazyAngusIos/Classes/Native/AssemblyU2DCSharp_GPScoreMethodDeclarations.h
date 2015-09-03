#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GPScore
struct GPScore_t343;
// System.String
struct String_t;
// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionType.h"
// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpan.h"

// System.Void GPScore::.ctor(System.Int64,System.Int32,GPBoardTimeSpan,GPCollectionType,System.String,System.String)
extern "C" void GPScore__ctor_m1777 (GPScore_t343 * __this, int64_t ___vScore, int32_t ___vRank, int32_t ___vTimeSpan, int32_t ___sCollection, String_t* ___lid, String_t* ___pid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPScore::UpdateScore(System.Int64)
extern "C" void GPScore_UpdateScore_m1778 (GPScore_t343 * __this, int64_t ___vScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GPScore::get_rank()
extern "C" int32_t GPScore_get_rank_m1779 (GPScore_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GPScore::get_score()
extern "C" int64_t GPScore_get_score_m1780 (GPScore_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPScore::get_playerId()
extern "C" String_t* GPScore_get_playerId_m1781 (GPScore_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPScore::get_leaderboardId()
extern "C" String_t* GPScore_get_leaderboardId_m1782 (GPScore_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPCollectionType GPScore::get_collection()
extern "C" int32_t GPScore_get_collection_m1783 (GPScore_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPBoardTimeSpan GPScore::get_timeSpan()
extern "C" int32_t GPScore_get_timeSpan_m1784 (GPScore_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
