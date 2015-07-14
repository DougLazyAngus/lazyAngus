#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<FacebookProfileImageSize,UnityEngine.Texture2D>
struct Dictionary_2_t223;
// System.Action`1<FacebookUserInfo>
struct Action_1_t227;
// System.Object
#include "mscorlib_System_Object.h"
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// FacebookUserInfo
struct  FacebookUserInfo_t202  : public Object_t
{
	// System.String FacebookUserInfo::_id
	String_t* ____id_0;
	// System.String FacebookUserInfo::_name
	String_t* ____name_1;
	// System.String FacebookUserInfo::_first_name
	String_t* ____first_name_2;
	// System.String FacebookUserInfo::_last_name
	String_t* ____last_name_3;
	// System.String FacebookUserInfo::_username
	String_t* ____username_4;
	// System.String FacebookUserInfo::_profile_url
	String_t* ____profile_url_5;
	// System.String FacebookUserInfo::_email
	String_t* ____email_6;
	// System.String FacebookUserInfo::_location
	String_t* ____location_7;
	// System.String FacebookUserInfo::_locale
	String_t* ____locale_8;
	// System.String FacebookUserInfo::_rawJSON
	String_t* ____rawJSON_9;
	// GoogleGender FacebookUserInfo::_gender
	int32_t ____gender_10;
	// System.Collections.Generic.Dictionary`2<FacebookProfileImageSize,UnityEngine.Texture2D> FacebookUserInfo::profileImages
	Dictionary_2_t223 * ___profileImages_11;
	// System.Action`1<FacebookUserInfo> FacebookUserInfo::OnProfileImageLoaded
	Action_1_t227 * ___OnProfileImageLoaded_12;
};
struct FacebookUserInfo_t202_StaticFields{
	// System.Action`1<FacebookUserInfo> FacebookUserInfo::<>f__am$cacheD
	Action_1_t227 * ___U3CU3Ef__amU24cacheD_13;
};
