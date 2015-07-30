#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Collections.Hashtable
struct Hashtable_t1274;
// System.Object
struct Object_t;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t4755;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t4756;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t4757;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t4758;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.MonoEnumInfo
struct  MonoEnumInfo_t4759 
{
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	Array_t * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t75* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t1274 * ___name_hash_3;
};
struct MonoEnumInfo_t4759_StaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t1274 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	Object_t * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t4755 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t4756 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t4757 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t4758 * ___long_comparer_10;
};
struct MonoEnumInfo_t4759_ThreadStaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t1274 * ___cache_4;
};
