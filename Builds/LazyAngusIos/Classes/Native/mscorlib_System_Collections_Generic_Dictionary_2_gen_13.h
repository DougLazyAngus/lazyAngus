#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5942;
// System.String[]
struct StringU5BU5D_t75;
// FacebookUserInfo[]
struct FacebookUserInfoU5BU5D_t6118;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5768;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>
struct Transform_1_t6119;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct  Dictionary_2_t272  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::table
	Int32U5BU5D_t484* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::linkSlots
	LinkU5BU5D_t5942* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::keySlots
	StringU5BU5D_t75* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::valueSlots
	FacebookUserInfoU5BU5D_t6118* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::serialization_info
	SerializationInfo_t2937 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t272_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::<>f__am$cacheB
	Transform_1_t6119 * ___U3CU3Ef__amU24cacheB_15;
};
