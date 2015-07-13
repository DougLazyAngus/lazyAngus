﻿#pragma once
#include <stdint.h>
// Facebook.InitDelegate
struct InitDelegate_t336;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t337;
// Facebook.AbstractFacebook
struct AbstractFacebook_t331;
// System.String
struct String_t;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// FB
struct  FB_t338  : public ScriptableObject_t111
{
};
struct FB_t338_StaticFields{
	// Facebook.InitDelegate FB::OnInitComplete
	InitDelegate_t336 * ___OnInitComplete_2;
	// Facebook.HideUnityDelegate FB::OnHideUnity
	HideUnityDelegate_t337 * ___OnHideUnity_3;
	// Facebook.AbstractFacebook FB::facebook
	AbstractFacebook_t331 * ___facebook_4;
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