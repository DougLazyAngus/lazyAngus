#pragma once
#include <stdint.h>
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t5303;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.KeyContainerPermissionFlags
#include "mscorlib_System_Security_Permissions_KeyContainerPermissionF.h"
// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t5304  : public CodeAccessPermission_t5230
{
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t5303 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;
};
