﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3310;
// UnityEngine.Networking.Types.NetworkID[]
struct NetworkIDU5BU5D_t3881;
// UnityEngine.Networking.Types.NetworkAccessToken[]
struct NetworkAccessTokenU5BU5D_t3882;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t3883;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
struct Transform_1_t3884;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct  Dictionary_2_t1109  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::table
	Int32U5BU5D_t476* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::linkSlots
	LinkU5BU5D_t3310* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::keySlots
	NetworkIDU5BU5D_t3881* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::valueSlots
	NetworkAccessTokenU5BU5D_t3882* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::serialization_info
	SerializationInfo_t1220 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1109_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::<>f__am$cacheB
	Transform_1_t3884 * ___U3CU3Ef__amU24cacheB_15;
};