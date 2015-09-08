#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct InstanceComparer_t5186;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.ObjectIDGenerator
struct  ObjectIDGenerator_t5187  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectIDGenerator::table
	Hashtable_t714 * ___table_0;
	// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::current
	int64_t ___current_1;
};
struct ObjectIDGenerator_t5187_StaticFields{
	// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer System.Runtime.Serialization.ObjectIDGenerator::comparer
	InstanceComparer_t5186 * ___comparer_2;
};
