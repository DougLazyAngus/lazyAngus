﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t6160;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t685;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t711;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object
struct Object_t;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1228;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1188;
// System.Linq.IGrouping`2<System.Object,System.Object>
struct IGrouping_2_t6161;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>
struct  U3CCreateGroupByIteratorU3Ec__Iterator6_3_t6162  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.List`1<TElement>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<groups>__0
	Dictionary_2_t6160 * ___U3CgroupsU3E__0_0;
	// System.Collections.Generic.List`1<TElement> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<nullList>__1
	List_1_t685 * ___U3CnullListU3E__1_1;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<counter>__2
	int32_t ___U3CcounterU3E__2_2;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<nullCounter>__3
	int32_t ___U3CnullCounterU3E__3_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::source
	Object_t* ___source_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<$s_54>__4
	Object_t* ___U3CU24s_54U3E__4_5;
	// TSource System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<item>__5
	Object_t * ___U3CitemU3E__5_6;
	// System.Func`2<TSource,TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::keySelector
	Func_2_t1228 * ___keySelector_7;
	// TKey System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<key>__6
	Object_t * ___U3CkeyU3E__6_8;
	// System.Func`2<TSource,TElement> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::elementSelector
	Func_2_t1228 * ___elementSelector_9;
	// TElement System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<element>__7
	Object_t * ___U3CelementU3E__7_10;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::comparer
	Object_t* ___comparer_11;
	// System.Collections.Generic.List`1<TElement> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<group>__8
	List_1_t685 * ___U3CgroupU3E__8_12;
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,System.Collections.Generic.List`1<TElement>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<$s_55>__9
	Enumerator_t6163  ___U3CU24s_55U3E__9_13;
	// System.Collections.Generic.KeyValuePair`2<TKey,System.Collections.Generic.List`1<TElement>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<group>__10
	KeyValuePair_2_t6164  ___U3CgroupU3E__10_14;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::$PC
	int32_t ___U24PC_15;
	// System.Linq.IGrouping`2<TKey,TElement> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::$current
	Object_t* ___U24current_16;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<$>source
	Object_t* ___U3CU24U3Esource_17;
	// System.Func`2<TSource,TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<$>keySelector
	Func_2_t1228 * ___U3CU24U3EkeySelector_18;
	// System.Func`2<TSource,TElement> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<$>elementSelector
	Func_2_t1228 * ___U3CU24U3EelementSelector_19;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator6`3<System.Object,System.Object,System.Object>::<$>comparer
	Object_t* ___U3CU24U3Ecomparer_20;
};
