#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t5289  : public CodeAccessPermission_t5226
{
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t712 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t712 * ___writeList_2;
};
