#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FacebookUserInfo
struct FacebookUserInfo_t229;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t584;
// System.Action`1<FacebookUserInfo>
struct Action_1_t253;
// UnityEngine.Texture2D
struct Texture2D_t65;
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// FacebookProfileImageSize
#include "AssemblyU2DCSharp_FacebookProfileImageSize.h"

// System.Void FacebookUserInfo::.ctor(System.String)
extern "C" void FacebookUserInfo__ctor_m1303 (FacebookUserInfo_t229 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::.ctor(System.Collections.IDictionary)
extern "C" void FacebookUserInfo__ctor_m1304 (FacebookUserInfo_t229 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::add_OnProfileImageLoaded(System.Action`1<FacebookUserInfo>)
extern "C" void FacebookUserInfo_add_OnProfileImageLoaded_m1305 (FacebookUserInfo_t229 * __this, Action_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::remove_OnProfileImageLoaded(System.Action`1<FacebookUserInfo>)
extern "C" void FacebookUserInfo_remove_OnProfileImageLoaded_m1306 (FacebookUserInfo_t229 * __this, Action_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::InitializeData(System.Collections.IDictionary)
extern "C" void FacebookUserInfo_InitializeData_m1307 (FacebookUserInfo_t229 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::GetProfileUrl(FacebookProfileImageSize)
extern "C" String_t* FacebookUserInfo_GetProfileUrl_m1308 (FacebookUserInfo_t229 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FacebookUserInfo::GetProfileImage(FacebookProfileImageSize)
extern "C" Texture2D_t65 * FacebookUserInfo_GetProfileImage_m1309 (FacebookUserInfo_t229 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::LoadProfileImage(FacebookProfileImageSize)
extern "C" void FacebookUserInfo_LoadProfileImage_m1310 (FacebookUserInfo_t229 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_rawJSON()
extern "C" String_t* FacebookUserInfo_get_rawJSON_m1311 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_id()
extern "C" String_t* FacebookUserInfo_get_id_m1312 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_name()
extern "C" String_t* FacebookUserInfo_get_name_m1313 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_first_name()
extern "C" String_t* FacebookUserInfo_get_first_name_m1314 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_last_name()
extern "C" String_t* FacebookUserInfo_get_last_name_m1315 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_username()
extern "C" String_t* FacebookUserInfo_get_username_m1316 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_profile_url()
extern "C" String_t* FacebookUserInfo_get_profile_url_m1317 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_email()
extern "C" String_t* FacebookUserInfo_get_email_m1318 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_locale()
extern "C" String_t* FacebookUserInfo_get_locale_m1319 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FacebookUserInfo::get_location()
extern "C" String_t* FacebookUserInfo_get_location_m1320 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleGender FacebookUserInfo::get_gender()
extern "C" int32_t FacebookUserInfo_get_gender_m1321 (FacebookUserInfo_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnSquareImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnSquareImageLoaded_m1322 (FacebookUserInfo_t229 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnLargeImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnLargeImageLoaded_m1323 (FacebookUserInfo_t229 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnNormalImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnNormalImageLoaded_m1324 (FacebookUserInfo_t229 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::OnSmallImageLoaded(UnityEngine.Texture2D)
extern "C" void FacebookUserInfo_OnSmallImageLoaded_m1325 (FacebookUserInfo_t229 * __this, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookUserInfo::<OnProfileImageLoaded>m__38(FacebookUserInfo)
extern "C" void FacebookUserInfo_U3COnProfileImageLoadedU3Em__38_m1326 (Object_t * __this /* static, unused */, FacebookUserInfo_t229 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
