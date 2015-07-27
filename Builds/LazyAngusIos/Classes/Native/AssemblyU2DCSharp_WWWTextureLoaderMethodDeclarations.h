#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WWWTextureLoader
struct WWWTextureLoader_t226;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t228;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Texture2D
struct Texture2D_t68;

// System.Void WWWTextureLoader::.ctor()
extern "C" void WWWTextureLoader__ctor_m1174 (WWWTextureLoader_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::add_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C" void WWWTextureLoader_add_OnLoad_m1175 (WWWTextureLoader_t226 * __this, Action_1_t228 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::remove_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C" void WWWTextureLoader_remove_OnLoad_m1176 (WWWTextureLoader_t226 * __this, Action_1_t228 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WWWTextureLoader WWWTextureLoader::Create()
extern "C" WWWTextureLoader_t226 * WWWTextureLoader_Create_m1177 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::LoadTexture(System.String)
extern "C" void WWWTextureLoader_LoadTexture_m1178 (WWWTextureLoader_t226 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WWWTextureLoader::LoadCoroutin()
extern "C" Object_t * WWWTextureLoader_LoadCoroutin_m1179 (WWWTextureLoader_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::<OnLoad>m__27(UnityEngine.Texture2D)
extern "C" void WWWTextureLoader_U3COnLoadU3Em__27_m1180 (Object_t * __this /* static, unused */, Texture2D_t68 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
