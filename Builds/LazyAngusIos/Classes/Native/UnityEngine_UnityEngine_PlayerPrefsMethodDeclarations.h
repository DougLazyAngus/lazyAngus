#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.PlayerPrefs
struct PlayerPrefs_t2760;
// System.String
struct String_t;

// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
extern "C" bool PlayerPrefs_TrySetInt_m9436 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
extern "C" bool PlayerPrefs_TrySetFloat_m9437 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
extern "C" bool PlayerPrefs_TrySetSetString_m9438 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C" void PlayerPrefs_SetInt_m4297 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" int32_t PlayerPrefs_GetInt_m4298 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
extern "C" void PlayerPrefs_SetFloat_m4295 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C" float PlayerPrefs_GetFloat_m4296 (Object_t * __this /* static, unused */, String_t* ___key, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C" void PlayerPrefs_SetString_m3914 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m7731 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C" String_t* PlayerPrefs_GetString_m3917 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" bool PlayerPrefs_HasKey_m3916 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
extern "C" void PlayerPrefs_DeleteAll_m4294 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C" void PlayerPrefs_Save_m7734 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
