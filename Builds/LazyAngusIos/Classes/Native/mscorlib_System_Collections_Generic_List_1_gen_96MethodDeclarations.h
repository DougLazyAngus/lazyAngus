#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct List_1_t7504;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerable_1_t9370;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7503;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7221;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ICollection_1_t9371;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t7506;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t7507;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IComparer_1_t9372;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t7509;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_95MethodDeclarations.h"
#define List_1__ctor_m49723(__this, method) (( void (*) (List_1_t7504 *, const MethodInfo*))List_1__ctor_m49570_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m49724(__this, ___collection, method) (( void (*) (List_1_t7504 *, Object_t*, const MethodInfo*))List_1__ctor_m49571_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Int32)
#define List_1__ctor_m49725(__this, ___capacity, method) (( void (*) (List_1_t7504 *, int32_t, const MethodInfo*))List_1__ctor_m49572_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m49726(__this, ___data, ___size, method) (( void (*) (List_1_t7504 *, KeyValuePair_2U5BU5D_t7503*, int32_t, const MethodInfo*))List_1__ctor_m49573_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.cctor()
#define List_1__cctor_m49727(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49728(__this, method) (( Object_t* (*) (List_1_t7504 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49575_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m49729(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7504 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49576_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49730(__this, method) (( Object_t * (*) (List_1_t7504 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49577_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m49731(__this, ___item, method) (( int32_t (*) (List_1_t7504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49578_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m49732(__this, ___item, method) (( bool (*) (List_1_t7504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49579_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m49733(__this, ___item, method) (( int32_t (*) (List_1_t7504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49580_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m49734(__this, ___index, ___item, method) (( void (*) (List_1_t7504 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49581_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m49735(__this, ___item, method) (( void (*) (List_1_t7504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49582_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49736(__this, method) (( bool (*) (List_1_t7504 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49583_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49737(__this, method) (( bool (*) (List_1_t7504 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49584_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m49738(__this, method) (( Object_t * (*) (List_1_t7504 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49585_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m49739(__this, method) (( bool (*) (List_1_t7504 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49586_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m49740(__this, method) (( bool (*) (List_1_t7504 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49587_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m49741(__this, ___index, method) (( Object_t * (*) (List_1_t7504 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49588_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m49742(__this, ___index, ___value, method) (( void (*) (List_1_t7504 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49589_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Add(T)
#define List_1_Add_m49743(__this, ___item, method) (( void (*) (List_1_t7504 *, KeyValuePair_2_t7216 , const MethodInfo*))List_1_Add_m49590_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49744(__this, ___newCount, method) (( void (*) (List_1_t7504 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49745(__this, ___idx, ___count, method) (( void (*) (List_1_t7504 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49592_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49746(__this, ___collection, method) (( void (*) (List_1_t7504 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49747(__this, ___enumerable, method) (( void (*) (List_1_t7504 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49594_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49748(__this, ___collection, method) (( void (*) (List_1_t7504 *, Object_t*, const MethodInfo*))List_1_AddRange_m49595_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AsReadOnly()
#define List_1_AsReadOnly_m49749(__this, method) (( ReadOnlyCollection_1_t7506 * (*) (List_1_t7504 *, const MethodInfo*))List_1_AsReadOnly_m49596_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Clear()
#define List_1_Clear_m49750(__this, method) (( void (*) (List_1_t7504 *, const MethodInfo*))List_1_Clear_m49597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define List_1_Contains_m49751(__this, ___item, method) (( bool (*) (List_1_t7504 *, KeyValuePair_2_t7216 , const MethodInfo*))List_1_Contains_m49598_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49752(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7504 *, KeyValuePair_2U5BU5D_t7503*, int32_t, const MethodInfo*))List_1_CopyTo_m49599_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49753(__this, ___match, method) (( KeyValuePair_2_t7216  (*) (List_1_t7504 *, Predicate_1_t7507 *, const MethodInfo*))List_1_Find_m49600_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49754(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7507 *, const MethodInfo*))List_1_CheckMatch_m49601_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49755(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7504 *, int32_t, int32_t, Predicate_1_t7507 *, const MethodInfo*))List_1_GetIndex_m49602_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define List_1_GetEnumerator_m49756(__this, method) (( Enumerator_t7508  (*) (List_1_t7504 *, const MethodInfo*))List_1_GetEnumerator_m49603_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49757(__this, ___index, ___count, method) (( List_1_t7504 * (*) (List_1_t7504 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49604_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define List_1_IndexOf_m49758(__this, ___item, method) (( int32_t (*) (List_1_t7504 *, KeyValuePair_2_t7216 , const MethodInfo*))List_1_IndexOf_m49605_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49759(__this, ___start, ___delta, method) (( void (*) (List_1_t7504 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49606_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49760(__this, ___index, method) (( void (*) (List_1_t7504 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49607_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Insert(System.Int32,T)
#define List_1_Insert_m49761(__this, ___index, ___item, method) (( void (*) (List_1_t7504 *, int32_t, KeyValuePair_2_t7216 , const MethodInfo*))List_1_Insert_m49608_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49762(__this, ___collection, method) (( void (*) (List_1_t7504 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49609_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49763(__this, ___index, ___collection, method) (( void (*) (List_1_t7504 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49764(__this, ___index, ___collection, method) (( void (*) (List_1_t7504 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49611_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49765(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7504 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49612_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Remove(T)
#define List_1_Remove_m49766(__this, ___item, method) (( bool (*) (List_1_t7504 *, KeyValuePair_2_t7216 , const MethodInfo*))List_1_Remove_m49613_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49767(__this, ___match, method) (( int32_t (*) (List_1_t7504 *, Predicate_1_t7507 *, const MethodInfo*))List_1_RemoveAll_m49614_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49768(__this, ___index, method) (( void (*) (List_1_t7504 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49769(__this, ___index, ___count, method) (( void (*) (List_1_t7504 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49616_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Reverse()
#define List_1_Reverse_m49770(__this, method) (( void (*) (List_1_t7504 *, const MethodInfo*))List_1_Reverse_m49617_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort()
#define List_1_Sort_m49771(__this, method) (( void (*) (List_1_t7504 *, const MethodInfo*))List_1_Sort_m49618_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49772(__this, ___comparer, method) (( void (*) (List_1_t7504 *, Object_t*, const MethodInfo*))List_1_Sort_m49619_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49773(__this, ___comparison, method) (( void (*) (List_1_t7504 *, Comparison_1_t7509 *, const MethodInfo*))List_1_Sort_m49620_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::ToArray()
#define List_1_ToArray_m49774(__this, method) (( KeyValuePair_2U5BU5D_t7503* (*) (List_1_t7504 *, const MethodInfo*))List_1_ToArray_m49621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::TrimExcess()
#define List_1_TrimExcess_m49775(__this, method) (( void (*) (List_1_t7504 *, const MethodInfo*))List_1_TrimExcess_m49622_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Capacity()
#define List_1_get_Capacity_m49776(__this, method) (( int32_t (*) (List_1_t7504 *, const MethodInfo*))List_1_get_Capacity_m49623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49777(__this, ___value, method) (( void (*) (List_1_t7504 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49624_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define List_1_get_Count_m49778(__this, method) (( int32_t (*) (List_1_t7504 *, const MethodInfo*))List_1_get_Count_m49625_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define List_1_get_Item_m49779(__this, ___index, method) (( KeyValuePair_2_t7216  (*) (List_1_t7504 *, int32_t, const MethodInfo*))List_1_get_Item_m49626_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49780(__this, ___index, ___value, method) (( void (*) (List_1_t7504 *, int32_t, KeyValuePair_2_t7216 , const MethodInfo*))List_1_set_Item_m49627_gshared)(__this, ___index, ___value, method)
