#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t350;
// Facebook.InitDelegate
struct InitDelegate_t336;
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebook.h"
// Facebook.AndroidFacebook
struct  AndroidFacebook_t351  : public AbstractFacebook_t331
{
	// System.String Facebook.AndroidFacebook::keyHash
	String_t* ___keyHash_15;
	// Facebook.FacebookDelegate Facebook.AndroidFacebook::deepLinkDelegate
	FacebookDelegate_t350 * ___deepLinkDelegate_16;
	// Facebook.InitDelegate Facebook.AndroidFacebook::onInitComplete
	InitDelegate_t336 * ___onInitComplete_17;
};
