﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3310;
// System.String[]
struct StringU5BU5D_t45;
// FBScore[]
struct FBScoreU5BU5D_t3450;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3276;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>
struct Transform_1_t3451;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct  Dictionary_2_t204  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,FBScore>::table
	Int32U5BU5D_t476* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,FBScore>::linkSlots
	LinkU5BU5D_t3310* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,FBScore>::keySlots
	StringU5BU5D_t45* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,FBScore>::valueSlots
	FBScoreU5BU5D_t3450* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBScore>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,FBScore>::serialization_info
	SerializationInfo_t1220 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t204_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,FBScore>::<>f__am$cacheB
	Transform_1_t3451 * ___U3CU3Ef__amU24cacheB_15;
};