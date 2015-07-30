#pragma once
#include <stdint.h>
// System.AppDomain
struct AppDomain_t2093;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.RuntimeDeclSecurityEntry
#include "mscorlib_System_Security_RuntimeDeclSecurityEntry.h"
// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t4690  : public Object_t
{
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t2093 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t4689  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t4689  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t4689  ___permitonly_4;
};
