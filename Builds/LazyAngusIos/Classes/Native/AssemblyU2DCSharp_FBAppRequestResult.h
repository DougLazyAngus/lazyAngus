#pragma once
#include <stdint.h>
// FBResult
struct FBResult_t213;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t73;
// System.Object
#include "mscorlib_System_Object.h"
// FBAppRequestResult
struct  FBAppRequestResult_t220  : public Object_t
{
	// FBResult FBAppRequestResult::Result
	FBResult_t213 * ___Result_0;
	// System.String FBAppRequestResult::ReuqestId
	String_t* ___ReuqestId_1;
	// System.Collections.Generic.List`1<System.String> FBAppRequestResult::Recipients
	List_1_t73 * ___Recipients_2;
	// System.Boolean FBAppRequestResult::IsSucceeded
	bool ___IsSucceeded_3;
};
