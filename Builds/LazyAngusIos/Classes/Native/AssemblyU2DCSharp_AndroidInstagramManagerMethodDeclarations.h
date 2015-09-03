#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidInstagramManager
struct AndroidInstagramManager_t306;
// UnityEngine.Texture2D
struct Texture2D_t108;
// System.String
struct String_t;
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void AndroidInstagramManager::.ctor()
extern "C" void AndroidInstagramManager__ctor_m1633 (AndroidInstagramManager_t306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidInstagramManager::Share(UnityEngine.Texture2D)
extern "C" void AndroidInstagramManager_Share_m1634 (AndroidInstagramManager_t306 * __this, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidInstagramManager::Share(UnityEngine.Texture2D,System.String)
extern "C" void AndroidInstagramManager_Share_m1635 (AndroidInstagramManager_t306 * __this, Texture2D_t108 * ___texture, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidInstagramManager::OnPostSuccess()
extern "C" void AndroidInstagramManager_OnPostSuccess_m1636 (AndroidInstagramManager_t306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidInstagramManager::OnPostFailed(System.String)
extern "C" void AndroidInstagramManager_OnPostFailed_m1637 (AndroidInstagramManager_t306 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidInstagramManager::<OnPostingCompleteAction>m__39(InstagramPostResult)
extern "C" void AndroidInstagramManager_U3COnPostingCompleteActionU3Em__39_m1638 (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
