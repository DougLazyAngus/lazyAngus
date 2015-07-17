#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBPostingTask
struct FBPostingTask_t255;
// System.String
struct String_t;
// UnionAssets.FLE.CEvent
struct CEvent_t91;

// System.Void FBPostingTask::.ctor()
extern "C" void FBPostingTask__ctor_m1333 (FBPostingTask_t255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBPostingTask FBPostingTask::Cretae()
extern "C" FBPostingTask_t255 * FBPostingTask_Cretae_m1334 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBPostingTask::Post(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void FBPostingTask_Post_m1335 (FBPostingTask_t255 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBPostingTask::OnFBInited()
extern "C" void FBPostingTask_OnFBInited_m1336 (FBPostingTask_t255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBPostingTask::OnFBAuth()
extern "C" void FBPostingTask_OnFBAuth_m1337 (FBPostingTask_t255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBPostingTask::OnFBAuthFailed()
extern "C" void FBPostingTask_OnFBAuthFailed_m1338 (FBPostingTask_t255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBPostingTask::OnPost(UnionAssets.FLE.CEvent)
extern "C" void FBPostingTask_OnPost_m1339 (FBPostingTask_t255 * __this, CEvent_t91 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBPostingTask::OnPostFailed(UnionAssets.FLE.CEvent)
extern "C" void FBPostingTask_OnPostFailed_m1340 (FBPostingTask_t255 * __this, CEvent_t91 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
