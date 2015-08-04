#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t547;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5345;
// System.String[]
struct StringU5BU5D_t75;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t5375;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5333;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>
struct Transform_1_t5392;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct  Dictionary_2_t44  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::table
	Int32U5BU5D_t547* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::linkSlots
	LinkU5BU5D_t5345* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::keySlots
	StringU5BU5D_t75* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::valueSlots
	JSONNodeU5BU5D_t5375* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::serialization_info
	SerializationInfo_t2869 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t44_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::<>f__am$cacheB
	Transform_1_t5392 * ___U3CU3Ef__amU24cacheB_15;
};
