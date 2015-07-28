#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<FacebookProfileImageSize,UnityEngine.Texture2D>
struct Dictionary_2_t291;
// System.Action`1<FBScore>
struct Action_1_t292;
// System.Object
#include "mscorlib_System_Object.h"
// FBScore
struct  FBScore_t293  : public Object_t
{
	// System.String FBScore::UserId
	String_t* ___UserId_0;
	// System.String FBScore::UserName
	String_t* ___UserName_1;
	// System.String FBScore::AppId
	String_t* ___AppId_2;
	// System.String FBScore::AppName
	String_t* ___AppName_3;
	// System.Int32 FBScore::value
	int32_t ___value_4;
	// System.Collections.Generic.Dictionary`2<FacebookProfileImageSize,UnityEngine.Texture2D> FBScore::profileImages
	Dictionary_2_t291 * ___profileImages_5;
	// System.Action`1<FBScore> FBScore::OnProfileImageLoaded
	Action_1_t292 * ___OnProfileImageLoaded_6;
};
struct FBScore_t293_StaticFields{
	// System.Action`1<FBScore> FBScore::<>f__am$cache7
	Action_1_t292 * ___U3CU3Ef__amU24cache7_7;
};
