#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t549;
// System.Collections.Generic.HashSet`1/Link<System.String>[]
struct LinkU5BU5D_t6019;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t1240  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.String>::table
	Int32U5BU5D_t549* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.String>::links
	LinkU5BU5D_t6019* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<System.String>::slots
	StringU5BU5D_t75* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.String>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.String>::si
	SerializationInfo_t2871 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::generation
	int32_t ___generation_9;
};
