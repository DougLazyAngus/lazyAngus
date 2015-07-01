#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InstagramPostScreenshotTask
struct InstagramPostScreenshotTask_t304;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void InstagramPostScreenshotTask::.ctor()
extern "C" void InstagramPostScreenshotTask__ctor_m1387 (InstagramPostScreenshotTask_t304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InstagramPostScreenshotTask InstagramPostScreenshotTask::Create()
extern "C" InstagramPostScreenshotTask_t304 * InstagramPostScreenshotTask_Create_m1388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::Post(System.String)
extern "C" void InstagramPostScreenshotTask_Post_m1389 (InstagramPostScreenshotTask_t304 * __this, String_t* ____text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InstagramPostScreenshotTask::PostScreenshot()
extern "C" Object_t * InstagramPostScreenshotTask_PostScreenshot_m1390 (InstagramPostScreenshotTask_t304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::OnPostingCompleteAction(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_OnPostingCompleteAction_m1391 (InstagramPostScreenshotTask_t304 * __this, int32_t ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InstagramPostScreenshotTask::<OnPostScreenshotCompleteAction>m__21(InstagramPostResult)
extern "C" void InstagramPostScreenshotTask_U3COnPostScreenshotCompleteActionU3Em__21_m1392 (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
