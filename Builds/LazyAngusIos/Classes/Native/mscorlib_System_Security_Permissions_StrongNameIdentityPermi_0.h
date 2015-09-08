#pragma once
#include <stdint.h>
// System.Version
struct Version_t1405;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t5319  : public CodeAccessPermission_t5230
{
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t716 * ____list_2;
};
struct StrongNameIdentityPermission_t5319_StaticFields{
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t1405 * ___defaultVersion_0;
};
