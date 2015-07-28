#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t539;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5335;
// System.Int64[]
struct Int64U5BU5D_t4816;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5923;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>
struct Transform_1_t6107;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct  Dictionary_2_t6108  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::table
	Int32U5BU5D_t539* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::linkSlots
	LinkU5BU5D_t5335* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::keySlots
	Int64U5BU5D_t4816* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::valueSlots
	ByteU5BU5D_t66* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::serialization_info
	SerializationInfo_t2860 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t6108_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<>f__am$cacheB
	Transform_1_t6107 * ___U3CU3Ef__amU24cacheB_15;
};
