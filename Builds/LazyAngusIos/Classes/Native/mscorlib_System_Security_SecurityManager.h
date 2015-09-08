#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5235;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t5246;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.SecurityManager
struct  SecurityManager_t5247  : public Object_t
{
};
struct SecurityManager_t5247_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t716 * ____hierarchy_1;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t714 * ____declsecCache_2;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t5235 * ____level_3;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t5246 * ____execution_4;
};
