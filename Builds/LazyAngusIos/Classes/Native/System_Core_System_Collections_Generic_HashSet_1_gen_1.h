#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t540;
// System.Collections.Generic.HashSet`1/Link<Parse.ParseObject>[]
struct LinkU5BU5D_t6156;
// Parse.ParseObject[]
struct ParseObjectU5BU5D_t1390;
// System.Collections.Generic.IEqualityComparer`1<Parse.ParseObject>
struct IEqualityComparer_1_t6158;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<Parse.ParseObject>
struct  HashSet_1_t1208  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::table
	Int32U5BU5D_t540* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::links
	LinkU5BU5D_t6156* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::slots
	ParseObjectU5BU5D_t1390* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<Parse.ParseObject>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<Parse.ParseObject>::si
	SerializationInfo_t2861 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::generation
	int32_t ___generation_9;
};
