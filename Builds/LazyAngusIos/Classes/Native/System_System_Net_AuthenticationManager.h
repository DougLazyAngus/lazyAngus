#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t3113;
// System.Object
struct Object_t;
// System.Net.ICredentialPolicy
struct ICredentialPolicy_t3964;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.AuthenticationManager
struct  AuthenticationManager_t3965  : public Object_t
{
};
struct AuthenticationManager_t3965_StaticFields{
	// System.Collections.ArrayList System.Net.AuthenticationManager::modules
	ArrayList_t3113 * ___modules_0;
	// System.Object System.Net.AuthenticationManager::locker
	Object_t * ___locker_1;
	// System.Net.ICredentialPolicy System.Net.AuthenticationManager::credential_policy
	Object_t * ___credential_policy_2;
};
