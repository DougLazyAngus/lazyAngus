﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t456;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3335;
// LevelDescription[]
struct LevelDescriptionU5BU5D_t3612;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3379;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>
struct Transform_1_t3613;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
struct  Dictionary_2_t455  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::table
	Int32U5BU5D_t456* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::linkSlots
	LinkU5BU5D_t3335* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::keySlots
	Int32U5BU5D_t456* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::valueSlots
	LevelDescriptionU5BU5D_t3612* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::serialization_info
	SerializationInfo_t1247 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t455_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::<>f__am$cacheB
	Transform_1_t3613 * ___U3CU3Ef__amU24cacheB_15;
};