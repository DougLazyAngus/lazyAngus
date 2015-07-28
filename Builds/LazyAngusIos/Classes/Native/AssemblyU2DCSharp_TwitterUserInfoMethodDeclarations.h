#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.String
struct String_t;
// TwitterStatus
struct TwitterStatus_t324;
// UnityEngine.Texture2D
struct Texture2D_t108;
// System.Collections.IDictionary
struct IDictionary_t630;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void TwitterUserInfo::.ctor(System.String)
extern "C" void TwitterUserInfo__ctor_m1692 (TwitterUserInfo_t308 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterUserInfo::.ctor(System.Collections.IDictionary)
extern "C" void TwitterUserInfo__ctor_m1693 (TwitterUserInfo_t308 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterUserInfo::LoadProfileImage()
extern "C" void TwitterUserInfo_LoadProfileImage_m1694 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterUserInfo::LoadBackgroundImage()
extern "C" void TwitterUserInfo_LoadBackgroundImage_m1695 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_rawJSON()
extern "C" String_t* TwitterUserInfo_get_rawJSON_m1696 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_id()
extern "C" String_t* TwitterUserInfo_get_id_m1697 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_name()
extern "C" String_t* TwitterUserInfo_get_name_m1698 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_description()
extern "C" String_t* TwitterUserInfo_get_description_m1699 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_screen_name()
extern "C" String_t* TwitterUserInfo_get_screen_name_m1700 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_location()
extern "C" String_t* TwitterUserInfo_get_location_m1701 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_lang()
extern "C" String_t* TwitterUserInfo_get_lang_m1702 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_profile_image_url()
extern "C" String_t* TwitterUserInfo_get_profile_image_url_m1703 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_profile_image_url_https()
extern "C" String_t* TwitterUserInfo_get_profile_image_url_https_m1704 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_profile_background_image_url()
extern "C" String_t* TwitterUserInfo_get_profile_background_image_url_m1705 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterUserInfo::get_profile_background_image_url_https()
extern "C" String_t* TwitterUserInfo_get_profile_background_image_url_https_m1706 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TwitterUserInfo::get_friends_count()
extern "C" int32_t TwitterUserInfo_get_friends_count_m1707 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TwitterUserInfo::get_statuses_count()
extern "C" int32_t TwitterUserInfo_get_statuses_count_m1708 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterStatus TwitterUserInfo::get_status()
extern "C" TwitterStatus_t324 * TwitterUserInfo_get_status_m1709 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D TwitterUserInfo::get_profile_image()
extern "C" Texture2D_t108 * TwitterUserInfo_get_profile_image_m1710 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D TwitterUserInfo::get_profile_background()
extern "C" Texture2D_t108 * TwitterUserInfo_get_profile_background_m1711 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TwitterUserInfo::get_profile_background_color()
extern "C" Color_t325  TwitterUserInfo_get_profile_background_color_m1712 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TwitterUserInfo::get_profile_text_color()
extern "C" Color_t325  TwitterUserInfo_get_profile_text_color_m1713 (TwitterUserInfo_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterUserInfo::OnProfileImageLoaded(UnityEngine.Texture2D)
extern "C" void TwitterUserInfo_OnProfileImageLoaded_m1714 (TwitterUserInfo_t308 * __this, Texture2D_t108 * ___img, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwitterUserInfo::OnProfileBackgroundLoaded(UnityEngine.Texture2D)
extern "C" void TwitterUserInfo_OnProfileBackgroundLoaded_m1715 (TwitterUserInfo_t308 * __this, Texture2D_t108 * ___img, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TwitterUserInfo::HexToColor(System.String)
extern "C" Color_t325  TwitterUserInfo_HexToColor_m1716 (TwitterUserInfo_t308 * __this, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
