﻿#pragma once
#include <stdint.h>
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.FileDialogPermissionAccess
#include "mscorlib_System_Security_Permissions_FileDialogPermissionAcc.h"
// System.Security.Permissions.FileDialogPermission
struct  FileDialogPermission_t5291  : public CodeAccessPermission_t5226
{
	// System.Security.Permissions.FileDialogPermissionAccess System.Security.Permissions.FileDialogPermission::_access
	int32_t ____access_0;
};