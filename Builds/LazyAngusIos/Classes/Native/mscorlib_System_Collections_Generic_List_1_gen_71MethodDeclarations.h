﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t6045;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6044;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5452;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t9090;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t6048;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t6052;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t9091;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t6055;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m31555_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1__ctor_m31555(__this, method) (( void (*) (List_1_t6045 *, const MethodInfo*))List_1__ctor_m31555_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m31556_gshared (List_1_t6045 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m31556(__this, ___collection, method) (( void (*) (List_1_t6045 *, Object_t*, const MethodInfo*))List_1__ctor_m31556_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m31557_gshared (List_1_t6045 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m31557(__this, ___capacity, method) (( void (*) (List_1_t6045 *, int32_t, const MethodInfo*))List_1__ctor_m31557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m31558_gshared (List_1_t6045 * __this, KeyValuePair_2U5BU5D_t6044* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m31558(__this, ___data, ___size, method) (( void (*) (List_1_t6045 *, KeyValuePair_2U5BU5D_t6044*, int32_t, const MethodInfo*))List_1__ctor_m31558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m31559_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m31559(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31559_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31560_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31560(__this, method) (( Object_t* (*) (List_1_t6045 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m31561_gshared (List_1_t6045 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m31561(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6045 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31561_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m31562_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31562(__this, method) (( Object_t * (*) (List_1_t6045 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31562_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m31563_gshared (List_1_t6045 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m31563(__this, ___item, method) (( int32_t (*) (List_1_t6045 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31563_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m31564_gshared (List_1_t6045 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m31564(__this, ___item, method) (( bool (*) (List_1_t6045 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31564_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m31565_gshared (List_1_t6045 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m31565(__this, ___item, method) (( int32_t (*) (List_1_t6045 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31565_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m31566_gshared (List_1_t6045 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m31566(__this, ___index, ___item, method) (( void (*) (List_1_t6045 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31566_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m31567_gshared (List_1_t6045 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m31567(__this, ___item, method) (( void (*) (List_1_t6045 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31567_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31568_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31568(__this, method) (( bool (*) (List_1_t6045 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m31569_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31569(__this, method) (( bool (*) (List_1_t6045 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31569_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m31570_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m31570(__this, method) (( Object_t * (*) (List_1_t6045 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m31571_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m31571(__this, method) (( bool (*) (List_1_t6045 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31571_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m31572_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m31572(__this, method) (( bool (*) (List_1_t6045 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31572_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m31573_gshared (List_1_t6045 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m31573(__this, ___index, method) (( Object_t * (*) (List_1_t6045 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31573_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m31574_gshared (List_1_t6045 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m31574(__this, ___index, ___value, method) (( void (*) (List_1_t6045 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31574_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m31575_gshared (List_1_t6045 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Add_m31575(__this, ___item, method) (( void (*) (List_1_t6045 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Add_m31575_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m31576_gshared (List_1_t6045 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m31576(__this, ___newCount, method) (( void (*) (List_1_t6045 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31576_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m31577_gshared (List_1_t6045 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m31577(__this, ___idx, ___count, method) (( void (*) (List_1_t6045 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31577_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m31578_gshared (List_1_t6045 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m31578(__this, ___collection, method) (( void (*) (List_1_t6045 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31578_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m31579_gshared (List_1_t6045 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m31579(__this, ___enumerable, method) (( void (*) (List_1_t6045 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31579_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m31580_gshared (List_1_t6045 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m31580(__this, ___collection, method) (( void (*) (List_1_t6045 *, Object_t*, const MethodInfo*))List_1_AddRange_m31580_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6048 * List_1_AsReadOnly_m31581_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m31581(__this, method) (( ReadOnlyCollection_1_t6048 * (*) (List_1_t6045 *, const MethodInfo*))List_1_AsReadOnly_m31581_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m31582_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_Clear_m31582(__this, method) (( void (*) (List_1_t6045 *, const MethodInfo*))List_1_Clear_m31582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m31583_gshared (List_1_t6045 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Contains_m31583(__this, ___item, method) (( bool (*) (List_1_t6045 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Contains_m31583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m31584_gshared (List_1_t6045 * __this, KeyValuePair_2U5BU5D_t6044* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m31584(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6045 *, KeyValuePair_2U5BU5D_t6044*, int32_t, const MethodInfo*))List_1_CopyTo_m31584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t70  List_1_Find_m31585_gshared (List_1_t6045 * __this, Predicate_1_t6052 * ___match, const MethodInfo* method);
#define List_1_Find_m31585(__this, ___match, method) (( KeyValuePair_2_t70  (*) (List_1_t6045 *, Predicate_1_t6052 *, const MethodInfo*))List_1_Find_m31585_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m31586_gshared (Object_t * __this /* static, unused */, Predicate_1_t6052 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m31586(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6052 *, const MethodInfo*))List_1_CheckMatch_m31586_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m31587_gshared (List_1_t6045 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6052 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m31587(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6045 *, int32_t, int32_t, Predicate_1_t6052 *, const MethodInfo*))List_1_GetIndex_m31587_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t6046  List_1_GetEnumerator_m31588_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m31588(__this, method) (( Enumerator_t6046  (*) (List_1_t6045 *, const MethodInfo*))List_1_GetEnumerator_m31588_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6045 * List_1_GetRange_m31589_gshared (List_1_t6045 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m31589(__this, ___index, ___count, method) (( List_1_t6045 * (*) (List_1_t6045 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31589_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m31590_gshared (List_1_t6045 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_IndexOf_m31590(__this, ___item, method) (( int32_t (*) (List_1_t6045 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_IndexOf_m31590_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m31591_gshared (List_1_t6045 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m31591(__this, ___start, ___delta, method) (( void (*) (List_1_t6045 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31591_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m31592_gshared (List_1_t6045 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m31592(__this, ___index, method) (( void (*) (List_1_t6045 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m31593_gshared (List_1_t6045 * __this, int32_t ___index, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Insert_m31593(__this, ___index, ___item, method) (( void (*) (List_1_t6045 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_Insert_m31593_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m31594_gshared (List_1_t6045 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m31594(__this, ___collection, method) (( void (*) (List_1_t6045 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31594_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m31595_gshared (List_1_t6045 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m31595(__this, ___index, ___collection, method) (( void (*) (List_1_t6045 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31595_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m31596_gshared (List_1_t6045 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m31596(__this, ___index, ___collection, method) (( void (*) (List_1_t6045 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31596_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m31597_gshared (List_1_t6045 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m31597(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6045 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31597_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m31598_gshared (List_1_t6045 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Remove_m31598(__this, ___item, method) (( bool (*) (List_1_t6045 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Remove_m31598_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m31599_gshared (List_1_t6045 * __this, Predicate_1_t6052 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m31599(__this, ___match, method) (( int32_t (*) (List_1_t6045 *, Predicate_1_t6052 *, const MethodInfo*))List_1_RemoveAll_m31599_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m31600_gshared (List_1_t6045 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m31600(__this, ___index, method) (( void (*) (List_1_t6045 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31600_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m31601_gshared (List_1_t6045 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m31601(__this, ___index, ___count, method) (( void (*) (List_1_t6045 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31601_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m31602_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_Reverse_m31602(__this, method) (( void (*) (List_1_t6045 *, const MethodInfo*))List_1_Reverse_m31602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m31603_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_Sort_m31603(__this, method) (( void (*) (List_1_t6045 *, const MethodInfo*))List_1_Sort_m31603_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m31604_gshared (List_1_t6045 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m31604(__this, ___comparer, method) (( void (*) (List_1_t6045 *, Object_t*, const MethodInfo*))List_1_Sort_m31604_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m31605_gshared (List_1_t6045 * __this, Comparison_1_t6055 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m31605(__this, ___comparison, method) (( void (*) (List_1_t6045 *, Comparison_1_t6055 *, const MethodInfo*))List_1_Sort_m31605_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t6044* List_1_ToArray_m31606_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_ToArray_m31606(__this, method) (( KeyValuePair_2U5BU5D_t6044* (*) (List_1_t6045 *, const MethodInfo*))List_1_ToArray_m31606_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m31607_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m31607(__this, method) (( void (*) (List_1_t6045 *, const MethodInfo*))List_1_TrimExcess_m31607_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m31608_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m31608(__this, method) (( int32_t (*) (List_1_t6045 *, const MethodInfo*))List_1_get_Capacity_m31608_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m31609_gshared (List_1_t6045 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m31609(__this, ___value, method) (( void (*) (List_1_t6045 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31609_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m31610_gshared (List_1_t6045 * __this, const MethodInfo* method);
#define List_1_get_Count_m31610(__this, method) (( int32_t (*) (List_1_t6045 *, const MethodInfo*))List_1_get_Count_m31610_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t70  List_1_get_Item_m31611_gshared (List_1_t6045 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31611(__this, ___index, method) (( KeyValuePair_2_t70  (*) (List_1_t6045 *, int32_t, const MethodInfo*))List_1_get_Item_m31611_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31612_gshared (List_1_t6045 * __this, int32_t ___index, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define List_1_set_Item_m31612(__this, ___index, ___value, method) (( void (*) (List_1_t6045 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_set_Item_m31612_gshared)(__this, ___index, ___value, method)
