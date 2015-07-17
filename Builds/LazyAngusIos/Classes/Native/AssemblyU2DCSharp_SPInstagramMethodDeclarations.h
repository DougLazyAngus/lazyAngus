#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPInstagram
struct SPInstagram_t319;
// UnityEngine.Texture2D
struct Texture2D_t65;
// System.String
struct String_t;
// UnionAssets.FLE.CEvent
struct CEvent_t91;
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void SPInstagram::.ctor()
extern "C" void SPInstagram__ctor_m1655 (SPInstagram_t319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::Awake()
extern "C" void SPInstagram_Awake_m1656 (SPInstagram_t319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::Share(UnityEngine.Texture2D)
extern "C" void SPInstagram_Share_m1657 (SPInstagram_t319 * __this, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::Share(UnityEngine.Texture2D,System.String)
extern "C" void SPInstagram_Share_m1658 (SPInstagram_t319 * __this, Texture2D_t65 * ___texture, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::OnPost()
extern "C" void SPInstagram_OnPost_m1659 (SPInstagram_t319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::OnPostFailed(UnionAssets.FLE.CEvent)
extern "C" void SPInstagram_OnPostFailed_m1660 (SPInstagram_t319 * __this, CEvent_t91 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::<OnPostingCompleteAction>m__3F(InstagramPostResult)
extern "C" void SPInstagram_U3COnPostingCompleteActionU3Em__3F_m1661 (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
