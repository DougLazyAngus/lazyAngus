#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Security.Policy.CodeGroup
#include "mscorlib_System_Security_Policy_CodeGroup.h"
// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t5335  : public CodeGroup_t5326
{
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t710 * ____rules_8;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_9;
};
struct NetCodeGroup_t5335_StaticFields{
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_6;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_7;
};
