#pragma once
#include <stdint.h>
// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t5336  : public Object_t
{
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t4833 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t4833 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t4833 * ___denied_2;
};
