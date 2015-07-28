#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WWWTextureLoader
struct WWWTextureLoader_t266;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t268;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.Texture2D
struct Texture2D_t108;

// System.Void WWWTextureLoader::.ctor()
extern "C" void WWWTextureLoader__ctor_m1445 (WWWTextureLoader_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::add_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C" void WWWTextureLoader_add_OnLoad_m1446 (WWWTextureLoader_t266 * __this, Action_1_t268 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::remove_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C" void WWWTextureLoader_remove_OnLoad_m1447 (WWWTextureLoader_t266 * __this, Action_1_t268 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WWWTextureLoader WWWTextureLoader::Create()
extern "C" WWWTextureLoader_t266 * WWWTextureLoader_Create_m1448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::LoadTexture(System.String)
extern "C" void WWWTextureLoader_LoadTexture_m1449 (WWWTextureLoader_t266 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WWWTextureLoader::LoadCoroutin()
extern "C" Object_t * WWWTextureLoader_LoadCoroutin_m1450 (WWWTextureLoader_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::<OnLoad>m__27(UnityEngine.Texture2D)
extern "C" void WWWTextureLoader_U3COnLoadU3Em__27_m1451 (Object_t * __this /* static, unused */, Texture2D_t108 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
