#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t73;
// SocialPlatfromSettings
struct SocialPlatfromSettings_t110;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// SocialPlatfromSettings
struct  SocialPlatfromSettings_t110  : public ScriptableObject_t111
{
	// System.Boolean SocialPlatfromSettings::showPermitions
	bool ___showPermitions_7;
	// System.Boolean SocialPlatfromSettings::ShowActions
	bool ___ShowActions_8;
	// System.Boolean SocialPlatfromSettings::ShowAPIS
	bool ___ShowAPIS_9;
	// System.Collections.Generic.List`1<System.String> SocialPlatfromSettings::fb_scopes_list
	List_1_t73 * ___fb_scopes_list_10;
	// System.String SocialPlatfromSettings::TWITTER_CONSUMER_KEY
	String_t* ___TWITTER_CONSUMER_KEY_11;
	// System.String SocialPlatfromSettings::TWITTER_CONSUMER_SECRET
	String_t* ___TWITTER_CONSUMER_SECRET_12;
	// System.String SocialPlatfromSettings::TWITTER_ACCESS_TOKEN
	String_t* ___TWITTER_ACCESS_TOKEN_13;
	// System.String SocialPlatfromSettings::TWITTER_ACCESS_TOKEN_SECRET
	String_t* ___TWITTER_ACCESS_TOKEN_SECRET_14;
	// System.Boolean SocialPlatfromSettings::ShowEditorOauthTestingBlock
	bool ___ShowEditorOauthTestingBlock_15;
	// System.Boolean SocialPlatfromSettings::TwitterAPI
	bool ___TwitterAPI_16;
	// System.Boolean SocialPlatfromSettings::NativeSharingAPI
	bool ___NativeSharingAPI_17;
	// System.Boolean SocialPlatfromSettings::InstagramAPI
	bool ___InstagramAPI_18;
	// System.Boolean SocialPlatfromSettings::EnableImageSharing
	bool ___EnableImageSharing_19;
	// System.Boolean SocialPlatfromSettings::KeepManifestClean
	bool ___KeepManifestClean_20;
};
struct SocialPlatfromSettings_t110_StaticFields{
	// SocialPlatfromSettings SocialPlatfromSettings::instance
	SocialPlatfromSettings_t110 * ___instance_21;
};
