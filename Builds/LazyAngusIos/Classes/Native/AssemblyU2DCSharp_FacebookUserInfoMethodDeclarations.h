#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FacebookUserInfo
struct FacebookUserInfo_t202;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t488;
// System.Action`1<FacebookUserInfo>
struct Action_1_t227;
// UnityEngine.Texture2D
struct Texture2D_t65;
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// FacebookProfileImageSize
#include "AssemblyU2DCSharp_FacebookProfileImageSize.h"

// System.Void FacebookUserInfo::.ctor(System.String)
extern "C" void FacebookUserInfo__ctor_m903 (FacebookUserInfo_t202 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::.ctor(System.Collections.IDictionary)
extern "C" void FacebookUserInfo__ctor_m904 (FacebookUserInfo_t202 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::add_OnProfileImageLoaded(System.Action`1<FacebookUserInfo>)
extern "C" void FacebookUserInfo_add_OnProfileImageLoaded_m905 (FacebookUserInfo_t202 * __this, Action_1_t227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::remove_OnProfileImageLoaded(System.Action`1<FacebookUserInfo>)
extern "C" void FacebookUserInfo_remove_OnProfileImageLoaded_m906 (FacebookUserInfo_t202 * __this, Action_1_t227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::InitializeData(System.Collections.IDictionary)
extern "C" void FacebookUserInfo_InitializeData_m907 (FacebookUserInfo_t202 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::GetProfileUrl(FacebookProfileImageSize)
extern "C" String_t* FacebookUserInfo_GetProfileUrl_m908 (FacebookUserInfo_t202 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FacebookUserInfo::GetProfileImage(FacebookProfileImageSize)
extern "C" Texture2D_t65 * FacebookUserInfo_GetProfileImage_m909 (FacebookUserInfo_t202 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::LoadProfileImage(FacebookProfileImageSize)
extern "C" void FacebookUserInfo_LoadProfileImage_m910 (FacebookUserInfo_t202 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_rawJSON()
extern "C" String_t* FacebookUserInfo_get_rawJSON_m911 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_id()
extern "C" String_t* FacebookUserInfo_get_id_m912 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_name()
extern "C" String_t* FacebookUserInfo_get_name_m913 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_first_name()
extern "C" String_t* FacebookUserInfo_get_first_name_m914 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_last_name()
extern "C" String_t* FacebookUserInfo_get_last_name_m915 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_username()
extern "C" String_t* FacebookUserInfo_get_username_m916 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_profile_url()
extern "C" String_t* FacebookUserInfo_get_profile_url_m917 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_email()
extern "C" String_t* FacebookUserInfo_get_email_m918 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_locale()
extern "C" String_t* FacebookUserInfo_get_locale_m919 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_location()
extern "C" String_t* FacebookUserInfo_get_location_m920 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleGender FacebookUserInfo::get_gender()
extern "C" int32_t FacebookUserInfo_get_gender_m921 (FacebookUserInfo_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnSquareImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnSquareImageLoaded_m922 (FacebookUserInfo_t202 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnLargeImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnLargeImageLoaded_m923 (FacebookUserInfo_t202 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnNormalImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnNormalImageLoaded_m924 (FacebookUserInfo_t202 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnSmallImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnSmallImageLoaded_m925 (FacebookUserInfo_t202 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::<OnProfileImageLoaded>m__11(FacebookUserInfo)
extern "C" void FacebookUserInfo_U3COnProfileImageLoadedU3Em__11_m926 (Object_t * __this /* static, unused */, FacebookUserInfo_t202 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
