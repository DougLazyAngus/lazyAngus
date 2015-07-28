#pragma once
#include <stdint.h>
// Facebook.InitDelegate
struct InitDelegate_t419;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t420;
// Facebook.AbstractFacebook
struct AbstractFacebook_t414;
// System.String
struct String_t;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// FB
struct  FB_t421  : public ScriptableObject_t148
{
};
struct FB_t421_StaticFields{
	// Facebook.InitDelegate FB::OnInitComplete
	InitDelegate_t419 * ___OnInitComplete_2;
	// Facebook.HideUnityDelegate FB::OnHideUnity
	HideUnityDelegate_t420 * ___OnHideUnity_3;
	// Facebook.AbstractFacebook FB::facebook
	AbstractFacebook_t414 * ___facebook_4;
	// System.String FB::authResponse
	String_t* ___authResponse_5;
	// System.Boolean FB::isInitCalled
	bool ___isInitCalled_6;
	// System.String FB::appId
	String_t* ___appId_7;
	// System.Boolean FB::cookie
	bool ___cookie_8;
	// System.Boolean FB::logging
	bool ___logging_9;
	// System.Boolean FB::status
	bool ___status_10;
	// System.Boolean FB::xfbml
	bool ___xfbml_11;
	// System.Boolean FB::frictionlessRequests
	bool ___frictionlessRequests_12;
};
