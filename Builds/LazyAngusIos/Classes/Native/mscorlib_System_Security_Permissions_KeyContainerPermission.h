#pragma once
#include <stdint.h>
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t5299;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.KeyContainerPermissionFlags
#include "mscorlib_System_Security_Permissions_KeyContainerPermissionF.h"
// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t5300  : public CodeAccessPermission_t5226
{
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t5299 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;
};
