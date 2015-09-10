#pragma once
#include <stdint.h>
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.PermissionSet
struct  PermissionSet_t4844  : public Object_t
{
	// System.Security.Permissions.PermissionState System.Security.PermissionSet::state
	int32_t ___state_1;
	// System.Collections.ArrayList System.Security.PermissionSet::list
	ArrayList_t723 * ___list_2;
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::_policyLevel
	PolicyLevel_t5242 * ____policyLevel_3;
	// System.Boolean System.Security.PermissionSet::_declsec
	bool ____declsec_4;
	// System.Boolean System.Security.PermissionSet::_readOnly
	bool ____readOnly_5;
};
struct PermissionSet_t4844_StaticFields{
	// System.Object[] System.Security.PermissionSet::psUnrestricted
	ObjectU5BU5D_t707* ___psUnrestricted_0;
	// System.Object[] System.Security.PermissionSet::action
	ObjectU5BU5D_t707* ___action_6;
};
