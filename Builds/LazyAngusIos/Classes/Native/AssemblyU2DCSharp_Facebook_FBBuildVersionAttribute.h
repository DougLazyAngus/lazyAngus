#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Facebook.FBBuildVersionAttribute
struct  FBBuildVersionAttribute_t342  : public Attribute_t343
{
	// System.DateTime Facebook.FBBuildVersionAttribute::buildDate
	DateTime_t219  ___buildDate_0;
	// System.String Facebook.FBBuildVersionAttribute::buildHash
	String_t* ___buildHash_1;
	// System.String Facebook.FBBuildVersionAttribute::buildVersion
	String_t* ___buildVersion_2;
	// System.String Facebook.FBBuildVersionAttribute::sdkVersion
	String_t* ___sdkVersion_3;
};
