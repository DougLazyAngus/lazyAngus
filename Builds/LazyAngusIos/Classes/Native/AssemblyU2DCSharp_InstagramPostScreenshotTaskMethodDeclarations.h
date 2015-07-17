#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InstagramPostScreenshotTask
struct InstagramPostScreenshotTask_t330;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void InstagramPostScreenshotTask::.ctor()
extern "C" void InstagramPostScreenshotTask__ctor_m1787 (InstagramPostScreenshotTask_t330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InstagramPostScreenshotTask InstagramPostScreenshotTask::Create()
extern "C" InstagramPostScreenshotTask_t330 * InstagramPostScreenshotTask_Create_m1788 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::Post(System.String)
extern "C" void InstagramPostScreenshotTask_Post_m1789 (InstagramPostScreenshotTask_t330 * __this, String_t* ____text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InstagramPostScreenshotTask::PostScreenshot()
extern "C" Object_t * InstagramPostScreenshotTask_PostScreenshot_m1790 (InstagramPostScreenshotTask_t330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::OnPostingCompleteAction(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_OnPostingCompleteAction_m1791 (InstagramPostScreenshotTask_t330 * __this, int32_t ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::<OnPostScreenshotCompleteAction>m__48(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_U3COnPostScreenshotCompleteActionU3Em__48_m1792 (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
