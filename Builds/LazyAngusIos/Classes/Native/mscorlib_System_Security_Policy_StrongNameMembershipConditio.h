#pragma once
#include <stdint.h>
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5313;
// System.String
struct String_t;
// System.Version
struct Version_t1401;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t5342  : public Object_t
{
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t5313 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t1401 * ___assemblyVersion_3;
};
