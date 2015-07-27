#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t1059;
// UnityEngine.Object
struct Object_t600;
struct Object_t600_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1276;

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t600 * AssetBundle_LoadAsset_m5770 (AssetBundle_t1059 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t600 * AssetBundle_LoadAsset_Internal_m5771 (AssetBundle_t1059 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t1276* AssetBundle_LoadAssetWithSubAssets_Internal_m5772 (AssetBundle_t1059 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
