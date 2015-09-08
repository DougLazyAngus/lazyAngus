#pragma once
#include <stdint.h>
// System.Version
struct Version_t1402;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t5316  : public CodeAccessPermission_t5227
{
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t713 * ____list_2;
};
struct StrongNameIdentityPermission_t5316_StaticFields{
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t1402 * ___defaultVersion_0;
};
