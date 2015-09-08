#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5945;
// System.Reflection.Emit.Label[]
struct LabelU5BU5D_t9264;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5946;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.DictionaryEntry>
struct Transform_1_t9265;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct  Dictionary_2_t4481  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::table
	Int32U5BU5D_t484* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::linkSlots
	LinkU5BU5D_t5945* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::keySlots
	Int32U5BU5D_t484* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::valueSlots
	LabelU5BU5D_t9264* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::serialization_info
	SerializationInfo_t2940 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t4481_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::<>f__am$cacheB
	Transform_1_t9265 * ___U3CU3Ef__amU24cacheB_15;
};
