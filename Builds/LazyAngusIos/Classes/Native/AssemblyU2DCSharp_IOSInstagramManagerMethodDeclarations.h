#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IOSInstagramManager
struct IOSInstagramManager_t323;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;

// System.Void IOSInstagramManager::.ctor()
extern "C" void IOSInstagramManager__ctor_m1712 (IOSInstagramManager_t323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::_instaShare(System.String,System.String)
extern "C" void IOSInstagramManager__instaShare_m1713 (Object_t * __this /* static, unused */, String_t* ___encodedMedia, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::Awake()
extern "C" void IOSInstagramManager_Awake_m1714 (IOSInstagramManager_t323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::Share(UnityEngine.Texture2D)
extern "C" void IOSInstagramManager_Share_m1715 (IOSInstagramManager_t323 * __this, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::Share(UnityEngine.Texture2D,System.String)
extern "C" void IOSInstagramManager_Share_m1716 (IOSInstagramManager_t323 * __this, Texture2D_t65 * ___texture, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::OnPostSuccess()
extern "C" void IOSInstagramManager_OnPostSuccess_m1717 (IOSInstagramManager_t323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::OnPostFailed(System.String)
extern "C" void IOSInstagramManager_OnPostFailed_m1718 (IOSInstagramManager_t323 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
