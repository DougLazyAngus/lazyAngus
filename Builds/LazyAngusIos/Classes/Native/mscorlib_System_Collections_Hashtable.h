﻿#pragma once
#include <stdint.h>
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2339;
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t2336;
// System.Collections.Hashtable/HashValues
struct HashValues_t2337;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1427;
// System.Collections.IComparer
struct IComparer_t1421;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1428;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Hashtable
struct  Hashtable_t1413  : public Object_t
{
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2339* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t476* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t2336 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t2337 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	Object_t * ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	Object_t * ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t1220 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	Object_t * ___equalityComparer_12;
};
struct Hashtable_t1413_StaticFields{
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t476* ___primeTbl_13;
};