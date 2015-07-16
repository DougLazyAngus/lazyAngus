#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBLikesRetrieveTask
struct FBLikesRetrieveTask_t228;
// System.String
struct String_t;
// FBResult
struct FBResult_t213;

// System.Void FBLikesRetrieveTask::.ctor()
extern "C" void FBLikesRetrieveTask__ctor_m927 (FBLikesRetrieveTask_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBLikesRetrieveTask FBLikesRetrieveTask::Create()
extern "C" FBLikesRetrieveTask_t228 * FBLikesRetrieveTask_Create_m928 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBLikesRetrieveTask::LoadLikes(System.String)
extern "C" void FBLikesRetrieveTask_LoadLikes_m929 (FBLikesRetrieveTask_t228 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBLikesRetrieveTask::LoadLikes(System.String,System.String)
extern "C" void FBLikesRetrieveTask_LoadLikes_m930 (FBLikesRetrieveTask_t228 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBLikesRetrieveTask::get_userId()
extern "C" String_t* FBLikesRetrieveTask_get_userId_m931 (FBLikesRetrieveTask_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBLikesRetrieveTask::OnUserLikesResult(FBResult)
extern "C" void FBLikesRetrieveTask_OnUserLikesResult_m932 (FBLikesRetrieveTask_t228 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
