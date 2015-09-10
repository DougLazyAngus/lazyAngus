#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5337;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Collections.Hashtable
struct Hashtable_t721;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.PolicyLevelType
#include "mscorlib_System_Security_PolicyLevelType.h"
// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t5242  : public Object_t
{
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t5337 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t723 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t723 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t721 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t4838 * ___xml_7;
};
