#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InstagramPostScreenshotTask
struct InstagramPostScreenshotTask_t372;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void InstagramPostScreenshotTask::.ctor()
extern "C" void InstagramPostScreenshotTask__ctor_m2062 (InstagramPostScreenshotTask_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InstagramPostScreenshotTask InstagramPostScreenshotTask::Create()
extern "C" InstagramPostScreenshotTask_t372 * InstagramPostScreenshotTask_Create_m2063 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::Post(System.String)
extern "C" void InstagramPostScreenshotTask_Post_m2064 (InstagramPostScreenshotTask_t372 * __this, String_t* ____text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InstagramPostScreenshotTask::PostScreenshot()
extern "C" Object_t * InstagramPostScreenshotTask_PostScreenshot_m2065 (InstagramPostScreenshotTask_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::OnPostingCompleteAction(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_OnPostingCompleteAction_m2066 (InstagramPostScreenshotTask_t372 * __this, int32_t ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::<OnPostScreenshotCompleteAction>m__48(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_U3COnPostScreenshotCompleteActionU3Em__48_m2067 (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
