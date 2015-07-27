#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t495;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3388;
// System.String[]
struct StringU5BU5D_t45;
// Facebook.FacebookDelegate[]
struct FacebookDelegateU5BU5D_t3630;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3354;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t3635;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>
struct  Dictionary_2_t371  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::table
	Int32U5BU5D_t495* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::linkSlots
	LinkU5BU5D_t3388* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::keySlots
	StringU5BU5D_t45* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::valueSlots
	FacebookDelegateU5BU5D_t3630* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::serialization_info
	SerializationInfo_t1300 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t371_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::<>f__am$cacheB
	Transform_1_t3635 * ___U3CU3Ef__amU24cacheB_15;
};
