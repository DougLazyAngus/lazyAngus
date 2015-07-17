#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t377;
// Facebook.FacebookDelegate
struct FacebookDelegate_t391;
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebook.h"
// Facebook.IOSFacebook
struct  IOSFacebook_t402  : public AbstractFacebook_t372
{
	// System.Int32 Facebook.IOSFacebook::dialogMode
	int32_t ___dialogMode_14;
	// Facebook.InitDelegate Facebook.IOSFacebook::externalInitDelegate
	InitDelegate_t377 * ___externalInitDelegate_15;
	// Facebook.FacebookDelegate Facebook.IOSFacebook::deepLinkDelegate
	FacebookDelegate_t391 * ___deepLinkDelegate_16;
};
