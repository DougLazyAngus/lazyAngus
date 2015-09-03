#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t5312  : public CodeAccessPermission_t5226
{
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_0;
};
struct SiteIdentityPermission_t5312_StaticFields{
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t487* ___valid_1;
};
