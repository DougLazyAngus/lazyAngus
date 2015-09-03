#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBScore
struct FBScore_t293;
// System.Action`1<FBScore>
struct Action_1_t292;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;
// FacebookProfileImageSize
#include "AssemblyU2DCSharp_FacebookProfileImageSize.h"

// System.Void FBScore::.ctor()
extern "C" void FBScore__ctor_m1567 (FBScore_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::add_OnProfileImageLoaded(System.Action`1<FBScore>)
extern "C" void FBScore_add_OnProfileImageLoaded_m1568 (FBScore_t293 * __this, Action_1_t292 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::remove_OnProfileImageLoaded(System.Action`1<FBScore>)
extern "C" void FBScore_remove_OnProfileImageLoaded_m1569 (FBScore_t293 * __this, Action_1_t292 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBScore::GetProfileUrl(FacebookProfileImageSize)
extern "C" String_t* FBScore_GetProfileUrl_m1570 (FBScore_t293 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FBScore::GetProfileImage(FacebookProfileImageSize)
extern "C" Texture2D_t108 * FBScore_GetProfileImage_m1571 (FBScore_t293 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::LoadProfileImage(FacebookProfileImageSize)
extern "C" void FBScore_LoadProfileImage_m1572 (FBScore_t293 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnSquareImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnSquareImageLoaded_m1573 (FBScore_t293 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnLargeImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnLargeImageLoaded_m1574 (FBScore_t293 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnNormalImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnNormalImageLoaded_m1575 (FBScore_t293 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnSmallImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnSmallImageLoaded_m1576 (FBScore_t293 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::<OnProfileImageLoaded>m__37(FBScore)
extern "C" void FBScore_U3COnProfileImageLoadedU3Em__37_m1577 (Object_t * __this /* static, unused */, FBScore_t293 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
