#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;
// System.Object
#include "mscorlib_System_Object.h"
// GP_QuestState
#include "AssemblyU2DCSharp_GP_QuestState.h"
// GP_Quest
struct  GP_Quest_t238  : public Object_t
{
	// System.String GP_Quest::Id
	String_t* ___Id_0;
	// System.String GP_Quest::Name
	String_t* ___Name_1;
	// System.String GP_Quest::Description
	String_t* ___Description_2;
	// System.String GP_Quest::IconImageUrl
	String_t* ___IconImageUrl_3;
	// System.String GP_Quest::BannerImageUrl
	String_t* ___BannerImageUrl_4;
	// GP_QuestState GP_Quest::state
	int32_t ___state_5;
	// System.Int64 GP_Quest::LastUpdatedTimestamp
	int64_t ___LastUpdatedTimestamp_6;
	// System.Int64 GP_Quest::AcceptedTimestamp
	int64_t ___AcceptedTimestamp_7;
	// System.Int64 GP_Quest::EndTimestamp
	int64_t ___EndTimestamp_8;
	// UnityEngine.Texture2D GP_Quest::_icon
	Texture2D_t108 * ____icon_9;
	// UnityEngine.Texture2D GP_Quest::_banner
	Texture2D_t108 * ____banner_10;
};
