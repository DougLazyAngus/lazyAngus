﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5392;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t6077;
// System.Type[]
struct TypeU5BU5D_t1204;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6079;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Type,System.Collections.DictionaryEntry>
struct Transform_1_t6106;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct  Dictionary_2_t1227  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::table
	Int32U5BU5D_t484* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::linkSlots
	LinkU5BU5D_t5392* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::keySlots
	Tuple_2U5BU5D_t6077* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::valueSlots
	TypeU5BU5D_t1204* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::serialization_info
	SerializationInfo_t2920 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1227_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::<>f__am$cacheB
	Transform_1_t6106 * ___U3CU3Ef__amU24cacheB_15;
};
