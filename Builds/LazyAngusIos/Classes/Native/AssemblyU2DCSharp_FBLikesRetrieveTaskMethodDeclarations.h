﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBLikesRetrieveTask
struct FBLikesRetrieveTask_t256;
// System.String
struct String_t;
// FBResult
struct FBResult_t241;

// System.Void FBLikesRetrieveTask::.ctor()
extern "C" void FBLikesRetrieveTask__ctor_m1329 (FBLikesRetrieveTask_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBLikesRetrieveTask FBLikesRetrieveTask::Create()
extern "C" FBLikesRetrieveTask_t256 * FBLikesRetrieveTask_Create_m1330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBLikesRetrieveTask::LoadLikes(System.String)
extern "C" void FBLikesRetrieveTask_LoadLikes_m1331 (FBLikesRetrieveTask_t256 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBLikesRetrieveTask::LoadLikes(System.String,System.String)
extern "C" void FBLikesRetrieveTask_LoadLikes_m1332 (FBLikesRetrieveTask_t256 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBLikesRetrieveTask::get_userId()
extern "C" String_t* FBLikesRetrieveTask_get_userId_m1333 (FBLikesRetrieveTask_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBLikesRetrieveTask::OnUserLikesResult(FBResult)
extern "C" void FBLikesRetrieveTask_OnUserLikesResult_m1334 (FBLikesRetrieveTask_t256 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
