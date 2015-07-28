#pragma once
#include <stdint.h>
// FBResult
struct FBResult_t281;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t115;
// System.Object
#include "mscorlib_System_Object.h"
// FBAppRequestResult
struct  FBAppRequestResult_t288  : public Object_t
{
	// FBResult FBAppRequestResult::Result
	FBResult_t281 * ___Result_0;
	// System.String FBAppRequestResult::ReuqestId
	String_t* ___ReuqestId_1;
	// System.Collections.Generic.List`1<System.String> FBAppRequestResult::Recipients
	List_1_t115 * ___Recipients_2;
	// System.Boolean FBAppRequestResult::IsSucceeded
	bool ___IsSucceeded_3;
};
