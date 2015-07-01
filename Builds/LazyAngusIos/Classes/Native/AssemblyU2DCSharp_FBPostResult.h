#pragma once
#include <stdint.h>
// FBResult
struct FBResult_t213;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// FBPostResult
struct  FBPostResult_t222  : public Object_t
{
	// FBResult FBPostResult::_Result
	FBResult_t213 * ____Result_0;
	// System.String FBPostResult::_PostId
	String_t* ____PostId_1;
	// System.Boolean FBPostResult::_IsSucceeded
	bool ____IsSucceeded_2;
};
