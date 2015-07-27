#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<GADTestDevice>
struct List_1_t106;
// GoogleMobileAdSettings
struct GoogleMobileAdSettings_t107;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// GoogleMobileAdSettings
struct  GoogleMobileAdSettings_t107  : public ScriptableObject_t108
{
	// System.String GoogleMobileAdSettings::IOS_InterstisialsUnitId
	String_t* ___IOS_InterstisialsUnitId_7;
	// System.String GoogleMobileAdSettings::IOS_BannersUnitId
	String_t* ___IOS_BannersUnitId_8;
	// System.String GoogleMobileAdSettings::Android_InterstisialsUnitId
	String_t* ___Android_InterstisialsUnitId_9;
	// System.String GoogleMobileAdSettings::Android_BannersUnitId
	String_t* ___Android_BannersUnitId_10;
	// System.String GoogleMobileAdSettings::WP8_InterstisialsUnitId
	String_t* ___WP8_InterstisialsUnitId_11;
	// System.String GoogleMobileAdSettings::WP8_BannersUnitId
	String_t* ___WP8_BannersUnitId_12;
	// System.Boolean GoogleMobileAdSettings::IsIOSSettinsOpened
	bool ___IsIOSSettinsOpened_13;
	// System.Boolean GoogleMobileAdSettings::IsAndroidSettinsOpened
	bool ___IsAndroidSettinsOpened_14;
	// System.Boolean GoogleMobileAdSettings::IsWP8SettinsOpened
	bool ___IsWP8SettinsOpened_15;
	// System.Boolean GoogleMobileAdSettings::IsTestSettinsOpened
	bool ___IsTestSettinsOpened_16;
	// System.Boolean GoogleMobileAdSettings::ShowActions
	bool ___ShowActions_17;
	// System.Boolean GoogleMobileAdSettings::KeepManifestClean
	bool ___KeepManifestClean_18;
	// System.Collections.Generic.List`1<GADTestDevice> GoogleMobileAdSettings::testDevices
	List_1_t106 * ___testDevices_19;
};
struct GoogleMobileAdSettings_t107_StaticFields{
	// GoogleMobileAdSettings GoogleMobileAdSettings::instance
	GoogleMobileAdSettings_t107 * ___instance_20;
};
