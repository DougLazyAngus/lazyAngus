﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FBSettings
struct FBSettings_t430;
// System.String[]
struct StringU5BU5D_t75;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// FBSettings
struct  FBSettings_t430  : public ScriptableObject_t148
{
	// System.Int32 FBSettings::selectedAppIndex
	int32_t ___selectedAppIndex_6;
	// System.String[] FBSettings::appIds
	StringU5BU5D_t75* ___appIds_7;
	// System.String[] FBSettings::appLabels
	StringU5BU5D_t75* ___appLabels_8;
	// System.Boolean FBSettings::cookie
	bool ___cookie_9;
	// System.Boolean FBSettings::logging
	bool ___logging_10;
	// System.Boolean FBSettings::status
	bool ___status_11;
	// System.Boolean FBSettings::xfbml
	bool ___xfbml_12;
	// System.Boolean FBSettings::frictionlessRequests
	bool ___frictionlessRequests_13;
	// System.String FBSettings::iosURLSuffix
	String_t* ___iosURLSuffix_14;
};
struct FBSettings_t430_StaticFields{
	// FBSettings FBSettings::instance
	FBSettings_t430 * ___instance_5;
};
