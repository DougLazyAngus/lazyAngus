﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t540;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5336;
// System.String[]
struct StringU5BU5D_t75;
// GP_TBM_Match[]
struct GP_TBM_MatchU5BU5D_t5506;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5324;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,GP_TBM_Match,System.Collections.DictionaryEntry>
struct Transform_1_t5507;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>
struct  Dictionary_2_t251  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::table
	Int32U5BU5D_t540* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::linkSlots
	LinkU5BU5D_t5336* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::keySlots
	StringU5BU5D_t75* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::valueSlots
	GP_TBM_MatchU5BU5D_t5506* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::serialization_info
	SerializationInfo_t2861 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t251_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::<>f__am$cacheB
	Transform_1_t5507 * ___U3CU3Ef__amU24cacheB_15;
};
