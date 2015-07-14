#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_QuestResult
struct GP_QuestResult_t172;
// System.String
struct String_t;
// GP_Quest
struct GP_Quest_t169;

// System.Void GP_QuestResult::.ctor(System.String)
extern "C" void GP_QuestResult__ctor_m712 (GP_QuestResult_t172 * __this, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_Quest GP_QuestResult::GetQuest()
extern "C" GP_Quest_t169 * GP_QuestResult_GetQuest_m713 (GP_QuestResult_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
