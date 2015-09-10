#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Collections.Hashtable
struct Hashtable_t721;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t5253;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.SecurityManager
struct  SecurityManager_t5254  : public Object_t
{
};
struct SecurityManager_t5254_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t723 * ____hierarchy_1;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t721 * ____declsecCache_2;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t5242 * ____level_3;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t5253 * ____execution_4;
};
