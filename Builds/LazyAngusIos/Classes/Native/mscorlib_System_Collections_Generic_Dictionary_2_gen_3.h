﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5392;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.List`1<AN_PropertyTemplate>[]
struct List_1U5BU5D_t5464;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5380;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>,System.Collections.DictionaryEntry>
struct Transform_1_t5465;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct  Dictionary_2_t121  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::table
	Int32U5BU5D_t484* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::linkSlots
	LinkU5BU5D_t5392* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::keySlots
	StringU5BU5D_t75* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::valueSlots
	List_1U5BU5D_t5464* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::serialization_info
	SerializationInfo_t2920 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t121_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::<>f__am$cacheB
	Transform_1_t5465 * ___U3CU3Ef__amU24cacheB_15;
};
