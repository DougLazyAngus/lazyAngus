#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t547;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t5867;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1132;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t1414  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Object>::table
	Int32U5BU5D_t547* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Object>::links
	LinkU5BU5D_t5867* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<System.Object>::slots
	ObjectU5BU5D_t634* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Object>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Object>::si
	SerializationInfo_t2867 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::generation
	int32_t ___generation_9;
};
