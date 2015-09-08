#pragma once
#include <stdint.h>
// System.Security.PermissionSet
struct PermissionSet_t4834;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t5337  : public Object_t
{
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t4834 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t4834 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t4834 * ___denied_2;
};
