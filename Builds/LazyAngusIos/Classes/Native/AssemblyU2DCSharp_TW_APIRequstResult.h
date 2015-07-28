#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<TweetTemplate>
struct List_1_t320;
// System.Collections.Generic.List`1<TwitterUserInfo>
struct List_1_t321;
// System.Collections.Generic.List`1<System.String>
struct List_1_t115;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// TW_APIRequstResult
struct  TW_APIRequstResult_t322  : public Object_t
{
	// System.Collections.Generic.List`1<TweetTemplate> TW_APIRequstResult::tweets
	List_1_t320 * ___tweets_0;
	// System.Collections.Generic.List`1<TwitterUserInfo> TW_APIRequstResult::users
	List_1_t321 * ___users_1;
	// System.Collections.Generic.List`1<System.String> TW_APIRequstResult::ids
	List_1_t115 * ___ids_2;
	// System.Boolean TW_APIRequstResult::_IsSucceeded
	bool ____IsSucceeded_3;
	// System.String TW_APIRequstResult::_data
	String_t* ____data_4;
};
