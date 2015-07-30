#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t547;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5343;
// System.String[]
struct StringU5BU5D_t75;
// Parse.ParseUser[]
struct ParseUserU5BU5D_t6900;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5331;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseUser,System.Collections.DictionaryEntry>
struct Transform_1_t7090;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>
struct  Dictionary_2_t7091  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::table
	Int32U5BU5D_t547* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::linkSlots
	LinkU5BU5D_t5343* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::keySlots
	StringU5BU5D_t75* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::valueSlots
	ParseUserU5BU5D_t6900* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::serialization_info
	SerializationInfo_t2867 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t7091_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseUser>::<>f__am$cacheB
	Transform_1_t7090 * ___U3CU3Ef__amU24cacheB_15;
};
