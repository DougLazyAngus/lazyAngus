#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t4302;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.Authorization
struct  Authorization_t4303  : public Object_t
{
	// System.String System.Net.Authorization::token
	String_t* ___token_0;
	// System.Boolean System.Net.Authorization::complete
	bool ___complete_1;
	// System.Net.IAuthenticationModule System.Net.Authorization::module
	Object_t * ___module_2;
};
