#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InstagramPostScreenshotTask
struct InstagramPostScreenshotTask_t332;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void InstagramPostScreenshotTask::.ctor()
extern "C" void InstagramPostScreenshotTask__ctor_m1789 (InstagramPostScreenshotTask_t332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InstagramPostScreenshotTask InstagramPostScreenshotTask::Create()
extern "C" InstagramPostScreenshotTask_t332 * InstagramPostScreenshotTask_Create_m1790 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::Post(System.String)
extern "C" void InstagramPostScreenshotTask_Post_m1791 (InstagramPostScreenshotTask_t332 * __this, String_t* ____text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InstagramPostScreenshotTask::PostScreenshot()
extern "C" Object_t * InstagramPostScreenshotTask_PostScreenshot_m1792 (InstagramPostScreenshotTask_t332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::OnPostingCompleteAction(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_OnPostingCompleteAction_m1793 (InstagramPostScreenshotTask_t332 * __this, int32_t ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::<OnPostScreenshotCompleteAction>m__48(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_U3COnPostScreenshotCompleteActionU3Em__48_m1794 (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
