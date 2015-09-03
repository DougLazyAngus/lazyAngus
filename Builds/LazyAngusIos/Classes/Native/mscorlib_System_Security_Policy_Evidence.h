#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.Evidence
struct  Evidence_t4832  : public Object_t
{
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t712 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t712 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;
};
