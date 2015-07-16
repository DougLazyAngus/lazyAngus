﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GPScore
struct GPScore_t275;
// System.String
struct String_t;
// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionType.h"
// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpan.h"

// System.Void GPScore::.ctor(System.Int64,System.Int32,GPBoardTimeSpan,GPCollectionType,System.String,System.String)
extern "C" void GPScore__ctor_m1102 (GPScore_t275 * __this, int64_t ___vScore, int32_t ___vRank, int32_t ___vTimeSpan, int32_t ___sCollection, String_t* ___lid, String_t* ___pid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPScore::UpdateScore(System.Int64)
extern "C" void GPScore_UpdateScore_m1103 (GPScore_t275 * __this, int64_t ___vScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GPScore::get_rank()
extern "C" int32_t GPScore_get_rank_m1104 (GPScore_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GPScore::get_score()
extern "C" int64_t GPScore_get_score_m1105 (GPScore_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPScore::get_playerId()
extern "C" String_t* GPScore_get_playerId_m1106 (GPScore_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPScore::get_leaderboardId()
extern "C" String_t* GPScore_get_leaderboardId_m1107 (GPScore_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPCollectionType GPScore::get_collection()
extern "C" int32_t GPScore_get_collection_m1108 (GPScore_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPBoardTimeSpan GPScore::get_timeSpan()
extern "C" int32_t GPScore_get_timeSpan_m1109 (GPScore_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
