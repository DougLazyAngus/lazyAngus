#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FBResult
struct FBResult_t241;
// System.Object
#include "mscorlib_System_Object.h"
// FB_APIResult
struct  FB_APIResult_t258  : public Object_t
{
	// System.Boolean FB_APIResult::_IsSucceeded
	bool ____IsSucceeded_0;
	// System.String FB_APIResult::_data
	String_t* ____data_1;
	// FBResult FB_APIResult::Unity_FB_Result
	FBResult_t241 * ___Unity_FB_Result_2;
};
