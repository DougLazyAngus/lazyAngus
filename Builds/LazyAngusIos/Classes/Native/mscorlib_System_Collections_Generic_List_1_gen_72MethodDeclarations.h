#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct List_1_t6056;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t822;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ICollection_1_t821;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6058;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Predicate_1_t6059;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IComparer_1_t9092;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Comparison_1_t6061;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_71MethodDeclarations.h"
#define List_1__ctor_m31708(__this, method) (( void (*) (List_1_t6056 *, const MethodInfo*))List_1__ctor_m31555_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31709(__this, ___collection, method) (( void (*) (List_1_t6056 *, Object_t*, const MethodInfo*))List_1__ctor_m31556_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m31710(__this, ___capacity, method) (( void (*) (List_1_t6056 *, int32_t, const MethodInfo*))List_1__ctor_m31557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m31711(__this, ___data, ___size, method) (( void (*) (List_1_t6056 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))List_1__ctor_m31558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m31712(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31559_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31713(__this, method) (( Object_t* (*) (List_1_t6056 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31714(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6056 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31561_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31715(__this, method) (( Object_t * (*) (List_1_t6056 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31562_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31716(__this, ___item, method) (( int32_t (*) (List_1_t6056 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31563_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31717(__this, ___item, method) (( bool (*) (List_1_t6056 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31564_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31718(__this, ___item, method) (( int32_t (*) (List_1_t6056 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31565_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31719(__this, ___index, ___item, method) (( void (*) (List_1_t6056 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31566_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31720(__this, ___item, method) (( void (*) (List_1_t6056 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31567_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31721(__this, method) (( bool (*) (List_1_t6056 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31722(__this, method) (( bool (*) (List_1_t6056 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31569_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31723(__this, method) (( Object_t * (*) (List_1_t6056 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31724(__this, method) (( bool (*) (List_1_t6056 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31571_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31725(__this, method) (( bool (*) (List_1_t6056 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31572_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31726(__this, ___index, method) (( Object_t * (*) (List_1_t6056 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31573_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31727(__this, ___index, ___value, method) (( void (*) (List_1_t6056 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31574_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m31728(__this, ___item, method) (( void (*) (List_1_t6056 *, KeyValuePair_2_t778 , const MethodInfo*))List_1_Add_m31575_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31729(__this, ___newCount, method) (( void (*) (List_1_t6056 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31576_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31730(__this, ___idx, ___count, method) (( void (*) (List_1_t6056 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31577_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31731(__this, ___collection, method) (( void (*) (List_1_t6056 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31578_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31732(__this, ___enumerable, method) (( void (*) (List_1_t6056 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31579_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31733(__this, ___collection, method) (( void (*) (List_1_t6056 *, Object_t*, const MethodInfo*))List_1_AddRange_m31580_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m31734(__this, method) (( ReadOnlyCollection_1_t6058 * (*) (List_1_t6056 *, const MethodInfo*))List_1_AsReadOnly_m31581_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m31735(__this, method) (( void (*) (List_1_t6056 *, const MethodInfo*))List_1_Clear_m31582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m31736(__this, ___item, method) (( bool (*) (List_1_t6056 *, KeyValuePair_2_t778 , const MethodInfo*))List_1_Contains_m31583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31737(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6056 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))List_1_CopyTo_m31584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m31738(__this, ___match, method) (( KeyValuePair_2_t778  (*) (List_1_t6056 *, Predicate_1_t6059 *, const MethodInfo*))List_1_Find_m31585_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31739(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6059 *, const MethodInfo*))List_1_CheckMatch_m31586_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31740(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6056 *, int32_t, int32_t, Predicate_1_t6059 *, const MethodInfo*))List_1_GetIndex_m31587_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m31741(__this, method) (( Enumerator_t6060  (*) (List_1_t6056 *, const MethodInfo*))List_1_GetEnumerator_m31588_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31742(__this, ___index, ___count, method) (( List_1_t6056 * (*) (List_1_t6056 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31589_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m31743(__this, ___item, method) (( int32_t (*) (List_1_t6056 *, KeyValuePair_2_t778 , const MethodInfo*))List_1_IndexOf_m31590_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31744(__this, ___start, ___delta, method) (( void (*) (List_1_t6056 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31591_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31745(__this, ___index, method) (( void (*) (List_1_t6056 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m31746(__this, ___index, ___item, method) (( void (*) (List_1_t6056 *, int32_t, KeyValuePair_2_t778 , const MethodInfo*))List_1_Insert_m31593_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31747(__this, ___collection, method) (( void (*) (List_1_t6056 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31594_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31748(__this, ___index, ___collection, method) (( void (*) (List_1_t6056 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31595_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31749(__this, ___index, ___collection, method) (( void (*) (List_1_t6056 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31596_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31750(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6056 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31597_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m31751(__this, ___item, method) (( bool (*) (List_1_t6056 *, KeyValuePair_2_t778 , const MethodInfo*))List_1_Remove_m31598_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31752(__this, ___match, method) (( int32_t (*) (List_1_t6056 *, Predicate_1_t6059 *, const MethodInfo*))List_1_RemoveAll_m31599_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31753(__this, ___index, method) (( void (*) (List_1_t6056 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31600_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31754(__this, ___index, ___count, method) (( void (*) (List_1_t6056 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31601_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m31755(__this, method) (( void (*) (List_1_t6056 *, const MethodInfo*))List_1_Reverse_m31602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m31756(__this, method) (( void (*) (List_1_t6056 *, const MethodInfo*))List_1_Sort_m31603_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31757(__this, ___comparer, method) (( void (*) (List_1_t6056 *, Object_t*, const MethodInfo*))List_1_Sort_m31604_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31758(__this, ___comparison, method) (( void (*) (List_1_t6056 *, Comparison_1_t6061 *, const MethodInfo*))List_1_Sort_m31605_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m31759(__this, method) (( KeyValuePair_2U5BU5D_t1413* (*) (List_1_t6056 *, const MethodInfo*))List_1_ToArray_m31606_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m31760(__this, method) (( void (*) (List_1_t6056 *, const MethodInfo*))List_1_TrimExcess_m31607_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m31761(__this, method) (( int32_t (*) (List_1_t6056 *, const MethodInfo*))List_1_get_Capacity_m31608_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31762(__this, ___value, method) (( void (*) (List_1_t6056 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31609_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m31763(__this, method) (( int32_t (*) (List_1_t6056 *, const MethodInfo*))List_1_get_Count_m31610_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m31764(__this, ___index, method) (( KeyValuePair_2_t778  (*) (List_1_t6056 *, int32_t, const MethodInfo*))List_1_get_Item_m31611_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m31765(__this, ___index, ___value, method) (( void (*) (List_1_t6056 *, int32_t, KeyValuePair_2_t778 , const MethodInfo*))List_1_set_Item_m31612_gshared)(__this, ___index, ___value, method)
