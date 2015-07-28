#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;
// DefaultPreviewButton
struct DefaultPreviewButton_t349;
// SA_Texture
struct SA_Texture_t350;
// SA_Label
struct SA_Label_t351;
// DefaultPreviewButton[]
struct DefaultPreviewButtonU5BU5D_t348;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MSPTwitterUseExample
struct  MSPTwitterUseExample_t357  : public MonoBehaviour_t13
{
	// UnityEngine.Texture2D MSPTwitterUseExample::ImageToShare
	Texture2D_t108 * ___ImageToShare_6;
	// DefaultPreviewButton MSPTwitterUseExample::connectButton
	DefaultPreviewButton_t349 * ___connectButton_7;
	// SA_Texture MSPTwitterUseExample::avatar
	SA_Texture_t350 * ___avatar_8;
	// SA_Label MSPTwitterUseExample::Location
	SA_Label_t351 * ___Location_9;
	// SA_Label MSPTwitterUseExample::Language
	SA_Label_t351 * ___Language_10;
	// SA_Label MSPTwitterUseExample::Status
	SA_Label_t351 * ___Status_11;
	// SA_Label MSPTwitterUseExample::Name
	SA_Label_t351 * ___Name_12;
	// DefaultPreviewButton[] MSPTwitterUseExample::AuthDependedButtons
	DefaultPreviewButtonU5BU5D_t348* ___AuthDependedButtons_13;
};
struct MSPTwitterUseExample_t357_StaticFields{
	// System.String MSPTwitterUseExample::TWITTER_CONSUMER_KEY
	String_t* ___TWITTER_CONSUMER_KEY_2;
	// System.String MSPTwitterUseExample::TWITTER_CONSUMER_SECRET
	String_t* ___TWITTER_CONSUMER_SECRET_3;
	// System.Boolean MSPTwitterUseExample::IsUserInfoLoaded
	bool ___IsUserInfoLoaded_4;
	// System.Boolean MSPTwitterUseExample::IsAuntifivated
	bool ___IsAuntifivated_5;
};
