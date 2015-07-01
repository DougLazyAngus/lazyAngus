#pragma once
#include <stdint.h>
// System.Action`1<TW_APIRequstResult>
struct Action_1_t268;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t269;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TW_OAuthAPIRequest
struct  TW_OAuthAPIRequest_t264  : public MonoBehaviour_t67
{
	// System.Action`1<TW_APIRequstResult> TW_OAuthAPIRequest::OnResult
	Action_1_t268 * ___OnResult_2;
	// System.Boolean TW_OAuthAPIRequest::IsFirst
	bool ___IsFirst_3;
	// System.String TW_OAuthAPIRequest::GetParams
	String_t* ___GetParams_4;
	// System.String TW_OAuthAPIRequest::requestUrl
	String_t* ___requestUrl_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TW_OAuthAPIRequest::Headers
	Dictionary_2_t80 * ___Headers_6;
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> TW_OAuthAPIRequest::requestParams
	SortedDictionary_2_t269 * ___requestParams_7;
};
struct TW_OAuthAPIRequest_t264_StaticFields{
	// System.Action`1<TW_APIRequstResult> TW_OAuthAPIRequest::<>f__am$cache6
	Action_1_t268 * ___U3CU3Ef__amU24cache6_8;
};
