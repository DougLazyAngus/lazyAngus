#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// UnionAssets.FLE.EventDispatcher
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcher.h"
// TW_APIRequest
struct  TW_APIRequest_t327  : public EventDispatcher_t129
{
	// System.Boolean TW_APIRequest::IsFirst
	bool ___IsFirst_4;
	// System.String TW_APIRequest::GetParams
	String_t* ___GetParams_5;
	// System.String TW_APIRequest::requestUrl
	String_t* ___requestUrl_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TW_APIRequest::Headers
	Dictionary_2_t122 * ___Headers_7;
};
