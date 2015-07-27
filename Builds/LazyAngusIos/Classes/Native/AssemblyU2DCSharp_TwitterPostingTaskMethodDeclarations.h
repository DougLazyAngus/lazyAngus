#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwitterPostingTask
struct TwitterPostingTask_t302;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t68;
// TwitterManagerInterface
struct TwitterManagerInterface_t301;
// UnionAssets.FLE.CEvent
struct CEvent_t93;

// System.Void TwitterPostingTask::.ctor()
extern "C" void TwitterPostingTask__ctor_m1496 (TwitterPostingTask_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask TwitterPostingTask::Cretae()
extern "C" TwitterPostingTask_t302 * TwitterPostingTask_Cretae_m1497 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterPostingTask::Post(System.String,UnityEngine.Texture2D,TwitterManagerInterface)
extern "C" void TwitterPostingTask_Post_m1498 (TwitterPostingTask_t302 * __this, String_t* ___status, Texture2D_t68 * ___texture, Object_t * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterPostingTask::OnTWInited()
extern "C" void TwitterPostingTask_OnTWInited_m1499 (TwitterPostingTask_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterPostingTask::OnTWAuth()
extern "C" void TwitterPostingTask_OnTWAuth_m1500 (TwitterPostingTask_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterPostingTask::OnTWAuthFailed()
extern "C" void TwitterPostingTask_OnTWAuthFailed_m1501 (TwitterPostingTask_t302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterPostingTask::OnPost(UnionAssets.FLE.CEvent)
extern "C" void TwitterPostingTask_OnPost_m1502 (TwitterPostingTask_t302 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterPostingTask::OnPostFailed(UnionAssets.FLE.CEvent)
extern "C" void TwitterPostingTask_OnPostFailed_m1503 (TwitterPostingTask_t302 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
