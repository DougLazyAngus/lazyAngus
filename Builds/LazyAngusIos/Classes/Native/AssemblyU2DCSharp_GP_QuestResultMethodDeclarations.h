#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_QuestResult
struct GP_QuestResult_t201;
// System.String
struct String_t;
// GP_Quest
struct GP_Quest_t198;

// System.Void GP_QuestResult::.ctor(System.String)
extern "C" void GP_QuestResult__ctor_m1114 (GP_QuestResult_t201 * __this, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Quest GP_QuestResult::GetQuest()
extern "C" GP_Quest_t198 * GP_QuestResult_GetQuest_m1115 (GP_QuestResult_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
