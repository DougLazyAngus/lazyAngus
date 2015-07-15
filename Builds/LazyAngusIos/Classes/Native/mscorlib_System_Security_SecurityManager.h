#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t1438;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2638;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.SecurityManager
struct  SecurityManager_t2658  : public Object_t
{
};
struct SecurityManager_t2658_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1438 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t2638 * ____execution_2;
};
