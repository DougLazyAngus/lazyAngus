#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPInstagram
struct SPInstagram_t361;
// UnityEngine.Texture2D
struct Texture2D_t108;
// System.String
struct String_t;
// UnionAssets.FLE.CEvent
struct CEvent_t133;
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void SPInstagram::.ctor()
extern "C" void SPInstagram__ctor_m1930 (SPInstagram_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::Awake()
extern "C" void SPInstagram_Awake_m1931 (SPInstagram_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::Share(UnityEngine.Texture2D)
extern "C" void SPInstagram_Share_m1932 (SPInstagram_t361 * __this, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::Share(UnityEngine.Texture2D,System.String)
extern "C" void SPInstagram_Share_m1933 (SPInstagram_t361 * __this, Texture2D_t108 * ___texture, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::OnPost()
extern "C" void SPInstagram_OnPost_m1934 (SPInstagram_t361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::OnPostFailed(UnionAssets.FLE.CEvent)
extern "C" void SPInstagram_OnPostFailed_m1935 (SPInstagram_t361 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPInstagram::<OnPostingCompleteAction>m__3F(InstagramPostResult)
extern "C" void SPInstagram_U3COnPostingCompleteActionU3Em__3F_m1936 (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
