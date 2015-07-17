#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;
// TwitterStatus
struct TwitterStatus_t282;
// UnionAssets.FLE.EventDispatcherBase
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcherBase.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// TwitterUserInfo
struct  TwitterUserInfo_t266  : public EventDispatcherBase_t88
{
	// System.String TwitterUserInfo::_id
	String_t* ____id_4;
	// System.String TwitterUserInfo::_description
	String_t* ____description_5;
	// System.String TwitterUserInfo::_name
	String_t* ____name_6;
	// System.String TwitterUserInfo::_screen_name
	String_t* ____screen_name_7;
	// System.String TwitterUserInfo::_location
	String_t* ____location_8;
	// System.String TwitterUserInfo::_lang
	String_t* ____lang_9;
	// System.String TwitterUserInfo::_rawJSON
	String_t* ____rawJSON_10;
	// System.String TwitterUserInfo::_profile_image_url
	String_t* ____profile_image_url_11;
	// System.String TwitterUserInfo::_profile_image_url_https
	String_t* ____profile_image_url_https_12;
	// System.String TwitterUserInfo::_profile_background_image_url
	String_t* ____profile_background_image_url_13;
	// System.String TwitterUserInfo::_profile_background_image_url_https
	String_t* ____profile_background_image_url_https_14;
	// UnityEngine.Texture2D TwitterUserInfo::_profile_image
	Texture2D_t65 * ____profile_image_15;
	// UnityEngine.Texture2D TwitterUserInfo::_profile_background
	Texture2D_t65 * ____profile_background_16;
	// UnityEngine.Color TwitterUserInfo::_profile_background_color
	Color_t283  ____profile_background_color_17;
	// UnityEngine.Color TwitterUserInfo::_profile_text_color
	Color_t283  ____profile_text_color_18;
	// System.Int32 TwitterUserInfo::_friends_count
	int32_t ____friends_count_19;
	// System.Int32 TwitterUserInfo::_statuses_count
	int32_t ____statuses_count_20;
	// TwitterStatus TwitterUserInfo::_status
	TwitterStatus_t282 * ____status_21;
};
