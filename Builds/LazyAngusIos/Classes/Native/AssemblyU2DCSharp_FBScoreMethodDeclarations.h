#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBScore
struct FBScore_t225;
// System.Action`1<FBScore>
struct Action_1_t224;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;
// FacebookProfileImageSize
#include "AssemblyU2DCSharp_FacebookProfileImageSize.h"

// System.Void FBScore::.ctor()
extern "C" void FBScore__ctor_m892 (FBScore_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::add_OnProfileImageLoaded(System.Action`1<FBScore>)
extern "C" void FBScore_add_OnProfileImageLoaded_m893 (FBScore_t225 * __this, Action_1_t224 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::remove_OnProfileImageLoaded(System.Action`1<FBScore>)
extern "C" void FBScore_remove_OnProfileImageLoaded_m894 (FBScore_t225 * __this, Action_1_t224 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBScore::GetProfileUrl(FacebookProfileImageSize)
extern "C" String_t* FBScore_GetProfileUrl_m895 (FBScore_t225 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FBScore::GetProfileImage(FacebookProfileImageSize)
extern "C" Texture2D_t65 * FBScore_GetProfileImage_m896 (FBScore_t225 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::LoadProfileImage(FacebookProfileImageSize)
extern "C" void FBScore_LoadProfileImage_m897 (FBScore_t225 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnSquareImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnSquareImageLoaded_m898 (FBScore_t225 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnLargeImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnLargeImageLoaded_m899 (FBScore_t225 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnNormalImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnNormalImageLoaded_m900 (FBScore_t225 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::OnSmallImageLoaded(UnityEngine.Texture2D)
extern "C" void FBScore_OnSmallImageLoaded_m901 (FBScore_t225 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScore::<OnProfileImageLoaded>m__10(FBScore)
extern "C" void FBScore_U3COnProfileImageLoadedU3Em__10_m902 (Object_t * __this /* static, unused */, FBScore_t225 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
