#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t539;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5335;
// System.Object[]
struct ObjectU5BU5D_t626;
// System.Double[]
struct DoubleU5BU5D_t4817;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1125;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.DictionaryEntry>
struct Transform_1_t6997;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct  Dictionary_2_t6998  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Double>::table
	Int32U5BU5D_t539* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Double>::linkSlots
	LinkU5BU5D_t5335* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Double>::keySlots
	ObjectU5BU5D_t626* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Double>::valueSlots
	DoubleU5BU5D_t4817* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Double>::serialization_info
	SerializationInfo_t2860 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t6998_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<>f__am$cacheB
	Transform_1_t6997 * ___U3CU3Ef__amU24cacheB_15;
};
