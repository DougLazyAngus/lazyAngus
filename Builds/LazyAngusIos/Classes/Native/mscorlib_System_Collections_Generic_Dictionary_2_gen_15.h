#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t549;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5347;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>[]
struct Dictionary_2U5BU5D_t5545;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t5546;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct  Dictionary_2_t274  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::table
	Int32U5BU5D_t549* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::linkSlots
	LinkU5BU5D_t5347* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::keySlots
	StringU5BU5D_t75* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::valueSlots
	Dictionary_2U5BU5D_t5545* ___valueSlots_7;
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
	SerializationInfo_t2871 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t274_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>::<>f__am$cacheB
	Transform_1_t5546 * ___U3CU3Ef__amU24cacheB_15;
};
