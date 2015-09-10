#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5952;
// GameAnalyticsSDK.GA_ServerFieldTypes/FieldType[]
struct FieldTypeU5BU5D_t6230;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Generic.IEqualityComparer`1<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType>
struct IEqualityComparer_1_t6231;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.Dictionary`2/Transform`1<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t6232;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>
struct  Dictionary_2_t471  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::table
	Int32U5BU5D_t484* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::linkSlots
	LinkU5BU5D_t5952* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::keySlots
	FieldTypeU5BU5D_t6230* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::valueSlots
	StringU5BU5D_t75* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::serialization_info
	SerializationInfo_t2947 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t471_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::<>f__am$cacheB
	Transform_1_t6232 * ___U3CU3Ef__amU24cacheB_15;
};
