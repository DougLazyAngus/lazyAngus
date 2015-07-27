#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t379;
// Facebook.FacebookDelegate
struct FacebookDelegate_t393;
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebook.h"
// Facebook.IOSFacebook
struct  IOSFacebook_t404  : public AbstractFacebook_t374
{
	// System.Int32 Facebook.IOSFacebook::dialogMode
	int32_t ___dialogMode_14;
	// Facebook.InitDelegate Facebook.IOSFacebook::externalInitDelegate
	InitDelegate_t379 * ___externalInitDelegate_15;
	// Facebook.FacebookDelegate Facebook.IOSFacebook::deepLinkDelegate
	FacebookDelegate_t393 * ___deepLinkDelegate_16;
};
