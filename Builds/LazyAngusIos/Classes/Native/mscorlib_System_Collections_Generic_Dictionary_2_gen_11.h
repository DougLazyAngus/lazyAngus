﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3310;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>[]
struct Dictionary_2U5BU5D_t3464;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3276;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t3465;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct  Dictionary_2_t205  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::table
	Int32U5BU5D_t476* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::linkSlots
	LinkU5BU5D_t3310* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::keySlots
	StringU5BU5D_t45* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::valueSlots
	Dictionary_2U5BU5D_t3464* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::serialization_info
	SerializationInfo_t1220 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t205_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::<>f__am$cacheB
	Transform_1_t3465 * ___U3CU3Ef__amU24cacheB_15;
};