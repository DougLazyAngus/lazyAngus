#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t493;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3387;
// System.String[]
struct StringU5BU5D_t45;
// FBLikeInfo[]
struct FBLikeInfoU5BU5D_t3564;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3353;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBLikeInfo,System.Collections.DictionaryEntry>
struct Transform_1_t3565;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct  Dictionary_2_t646  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::table
	Int32U5BU5D_t493* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::linkSlots
	LinkU5BU5D_t3387* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::keySlots
	StringU5BU5D_t45* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::valueSlots
	FBLikeInfoU5BU5D_t3564* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::serialization_info
	SerializationInfo_t1299 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t646_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::<>f__am$cacheB
	Transform_1_t3565 * ___U3CU3Ef__amU24cacheB_15;
};
