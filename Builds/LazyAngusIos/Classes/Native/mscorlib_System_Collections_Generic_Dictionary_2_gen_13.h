#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t496;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3389;
// System.String[]
struct StringU5BU5D_t45;
// FacebookUserInfo[]
struct FacebookUserInfoU5BU5D_t3542;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3355;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>
struct Transform_1_t3543;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct  Dictionary_2_t232  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::table
	Int32U5BU5D_t496* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::linkSlots
	LinkU5BU5D_t3389* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::keySlots
	StringU5BU5D_t45* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::valueSlots
	FacebookUserInfoU5BU5D_t3542* ___valueSlots_7;
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
	SerializationInfo_t1301 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t232_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::<>f__am$cacheB
	Transform_1_t3543 * ___U3CU3Ef__amU24cacheB_15;
};
