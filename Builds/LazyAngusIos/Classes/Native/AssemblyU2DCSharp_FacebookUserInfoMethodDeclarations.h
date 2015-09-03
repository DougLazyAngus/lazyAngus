#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FacebookUserInfo
struct FacebookUserInfo_t271;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t699;
// System.Action`1<FacebookUserInfo>
struct Action_1_t295;
// UnityEngine.Texture2D
struct Texture2D_t108;
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// FacebookProfileImageSize
#include "AssemblyU2DCSharp_FacebookProfileImageSize.h"

// System.Void FacebookUserInfo::.ctor(System.String)
extern "C" void FacebookUserInfo__ctor_m1578 (FacebookUserInfo_t271 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::.ctor(System.Collections.IDictionary)
extern "C" void FacebookUserInfo__ctor_m1579 (FacebookUserInfo_t271 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::add_OnProfileImageLoaded(System.Action`1<FacebookUserInfo>)
extern "C" void FacebookUserInfo_add_OnProfileImageLoaded_m1580 (FacebookUserInfo_t271 * __this, Action_1_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::remove_OnProfileImageLoaded(System.Action`1<FacebookUserInfo>)
extern "C" void FacebookUserInfo_remove_OnProfileImageLoaded_m1581 (FacebookUserInfo_t271 * __this, Action_1_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::InitializeData(System.Collections.IDictionary)
extern "C" void FacebookUserInfo_InitializeData_m1582 (FacebookUserInfo_t271 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::GetProfileUrl(FacebookProfileImageSize)
extern "C" String_t* FacebookUserInfo_GetProfileUrl_m1583 (FacebookUserInfo_t271 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FacebookUserInfo::GetProfileImage(FacebookProfileImageSize)
extern "C" Texture2D_t108 * FacebookUserInfo_GetProfileImage_m1584 (FacebookUserInfo_t271 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::LoadProfileImage(FacebookProfileImageSize)
extern "C" void FacebookUserInfo_LoadProfileImage_m1585 (FacebookUserInfo_t271 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_rawJSON()
extern "C" String_t* FacebookUserInfo_get_rawJSON_m1586 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_id()
extern "C" String_t* FacebookUserInfo_get_id_m1587 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_name()
extern "C" String_t* FacebookUserInfo_get_name_m1588 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_first_name()
extern "C" String_t* FacebookUserInfo_get_first_name_m1589 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_last_name()
extern "C" String_t* FacebookUserInfo_get_last_name_m1590 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_username()
extern "C" String_t* FacebookUserInfo_get_username_m1591 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_profile_url()
extern "C" String_t* FacebookUserInfo_get_profile_url_m1592 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_email()
extern "C" String_t* FacebookUserInfo_get_email_m1593 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_locale()
extern "C" String_t* FacebookUserInfo_get_locale_m1594 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_location()
extern "C" String_t* FacebookUserInfo_get_location_m1595 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleGender FacebookUserInfo::get_gender()
extern "C" int32_t FacebookUserInfo_get_gender_m1596 (FacebookUserInfo_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnSquareImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnSquareImageLoaded_m1597 (FacebookUserInfo_t271 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnLargeImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnLargeImageLoaded_m1598 (FacebookUserInfo_t271 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnNormalImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnNormalImageLoaded_m1599 (FacebookUserInfo_t271 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnSmallImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnSmallImageLoaded_m1600 (FacebookUserInfo_t271 * __this, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::<OnProfileImageLoaded>m__38(FacebookUserInfo)
extern "C" void FacebookUserInfo_U3COnProfileImageLoadedU3Em__38_m1601 (Object_t * __this /* static, unused */, FacebookUserInfo_t271 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
