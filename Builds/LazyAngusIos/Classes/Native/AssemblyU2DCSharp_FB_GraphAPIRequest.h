#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// UnityEngine.WWWForm
struct WWWForm_t112;
// UnionAssets.FLE.EventDispatcher
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcher.h"
// FB_GraphAPIRequest
struct  FB_GraphAPIRequest_t299  : public EventDispatcher_t129
{
	// System.Boolean FB_GraphAPIRequest::IsFirst
	bool ___IsFirst_4;
	// System.String FB_GraphAPIRequest::GetParams
	String_t* ___GetParams_5;
	// System.String FB_GraphAPIRequest::requestUrl
	String_t* ___requestUrl_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> FB_GraphAPIRequest::Headers
	Dictionary_2_t122 * ___Headers_7;
	// UnityEngine.WWWForm FB_GraphAPIRequest::form
	WWWForm_t112 * ___form_8;
};
