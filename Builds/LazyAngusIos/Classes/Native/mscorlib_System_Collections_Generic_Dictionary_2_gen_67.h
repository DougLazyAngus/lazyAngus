#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t540;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5336;
// System.String[]
struct StringU5BU5D_t75;
// Parse.ParseRole[]
struct ParseRoleU5BU5D_t6902;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5324;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.DictionaryEntry>
struct Transform_1_t7092;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>
struct  Dictionary_2_t7093  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::table
	Int32U5BU5D_t540* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::linkSlots
	LinkU5BU5D_t5336* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::keySlots
	StringU5BU5D_t75* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::valueSlots
	ParseRoleU5BU5D_t6902* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::serialization_info
	SerializationInfo_t2861 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t7093_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>::<>f__am$cacheB
	Transform_1_t7092 * ___U3CU3Ef__amU24cacheB_15;
};
