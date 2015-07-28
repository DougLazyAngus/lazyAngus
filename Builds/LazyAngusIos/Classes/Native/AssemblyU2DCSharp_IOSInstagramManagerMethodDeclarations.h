#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IOSInstagramManager
struct IOSInstagramManager_t365;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;

// System.Void IOSInstagramManager::.ctor()
extern "C" void IOSInstagramManager__ctor_m1985 (IOSInstagramManager_t365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::_instaShare(System.String,System.String)
extern "C" void IOSInstagramManager__instaShare_m1986 (Object_t * __this /* static, unused */, String_t* ___encodedMedia, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::Awake()
extern "C" void IOSInstagramManager_Awake_m1987 (IOSInstagramManager_t365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::Share(UnityEngine.Texture2D)
extern "C" void IOSInstagramManager_Share_m1988 (IOSInstagramManager_t365 * __this, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::Share(UnityEngine.Texture2D,System.String)
extern "C" void IOSInstagramManager_Share_m1989 (IOSInstagramManager_t365 * __this, Texture2D_t108 * ___texture, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::OnPostSuccess()
extern "C" void IOSInstagramManager_OnPostSuccess_m1990 (IOSInstagramManager_t365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInstagramManager::OnPostFailed(System.String)
extern "C" void IOSInstagramManager_OnPostFailed_m1991 (IOSInstagramManager_t365 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
