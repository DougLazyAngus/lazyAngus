#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t462;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3288;
// System.String[]
struct StringU5BU5D_t45;
// TwitterUserInfo[]
struct TwitterUserInfoU5BU5D_t3473;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3254;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,TwitterUserInfo,System.Collections.DictionaryEntry>
struct Transform_1_t3474;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>
struct  Dictionary_2_t249  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::table
	Int32U5BU5D_t462* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::linkSlots
	LinkU5BU5D_t3288* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::keySlots
	StringU5BU5D_t45* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::valueSlots
	TwitterUserInfoU5BU5D_t3473* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::serialization_info
	SerializationInfo_t1198 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t249_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::<>f__am$cacheB
	Transform_1_t3474 * ___U3CU3Ef__amU24cacheB_15;
};
