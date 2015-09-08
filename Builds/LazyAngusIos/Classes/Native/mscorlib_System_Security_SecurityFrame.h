#pragma once
#include <stdint.h>
// System.AppDomain
struct AppDomain_t2167;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t4837;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Security.SecurityFrame
struct  SecurityFrame_t5243 
{
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t2167 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t4837 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t4837 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t4837 * ____permitonly_4;
};
