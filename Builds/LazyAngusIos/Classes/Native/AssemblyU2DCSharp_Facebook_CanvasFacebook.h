#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t336;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t337;
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebook.h"
// Facebook.CanvasFacebook
struct  CanvasFacebook_t353  : public AbstractFacebook_t331
{
	// Facebook.InitDelegate Facebook.CanvasFacebook::onInitComplete
	InitDelegate_t336 * ___onInitComplete_20;
	// Facebook.HideUnityDelegate Facebook.CanvasFacebook::OnHideUnity
	HideUnityDelegate_t337 * ___OnHideUnity_21;
	// System.String Facebook.CanvasFacebook::integrationMethodJs
	String_t* ___integrationMethodJs_22;
	// System.String Facebook.CanvasFacebook::appId
	String_t* ___appId_23;
	// System.String Facebook.CanvasFacebook::sdkLocale
	String_t* ___sdkLocale_24;
	// System.Boolean Facebook.CanvasFacebook::sdkDebug
	bool ___sdkDebug_25;
	// System.String Facebook.CanvasFacebook::deepLink
	String_t* ___deepLink_26;
};
