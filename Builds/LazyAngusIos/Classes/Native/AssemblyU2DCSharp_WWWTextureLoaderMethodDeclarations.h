#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WWWTextureLoader
struct WWWTextureLoader_t224;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t226;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Texture2D
struct Texture2D_t65;

// System.Void WWWTextureLoader::.ctor()
extern "C" void WWWTextureLoader__ctor_m1172 (WWWTextureLoader_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::add_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C" void WWWTextureLoader_add_OnLoad_m1173 (WWWTextureLoader_t224 * __this, Action_1_t226 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::remove_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C" void WWWTextureLoader_remove_OnLoad_m1174 (WWWTextureLoader_t224 * __this, Action_1_t226 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WWWTextureLoader WWWTextureLoader::Create()
extern "C" WWWTextureLoader_t224 * WWWTextureLoader_Create_m1175 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::LoadTexture(System.String)
extern "C" void WWWTextureLoader_LoadTexture_m1176 (WWWTextureLoader_t224 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WWWTextureLoader::LoadCoroutin()
extern "C" Object_t * WWWTextureLoader_LoadCoroutin_m1177 (WWWTextureLoader_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::<OnLoad>m__27(UnityEngine.Texture2D)
extern "C" void WWWTextureLoader_U3COnLoadU3Em__27_m1178 (Object_t * __this /* static, unused */, Texture2D_t65 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
