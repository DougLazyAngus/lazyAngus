#pragma once
#include <stdint.h>
// System.Version
struct Version_t1401;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5313;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t5229;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t5328  : public Object_t
{
};
struct DefaultPolicies_t5328_StaticFields{
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t1401 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t66* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t5313 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t66* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t5313 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t5229 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t5229 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t5229 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t5229 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t5229 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t5229 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t5229 * ____everything_11;
};
