#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FBResult
struct FBResult_t239;
// System.Object
#include "mscorlib_System_Object.h"
// FB_APIResult
struct  FB_APIResult_t256  : public Object_t
{
	// System.Boolean FB_APIResult::_IsSucceeded
	bool ____IsSucceeded_0;
	// System.String FB_APIResult::_data
	String_t* ____data_1;
	// FBResult FB_APIResult::Unity_FB_Result
	FBResult_t239 * ___Unity_FB_Result_2;
};
