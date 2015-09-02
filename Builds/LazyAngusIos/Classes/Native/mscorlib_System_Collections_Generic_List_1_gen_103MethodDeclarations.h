#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t7670;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t9428;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7669;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7275;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t9429;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t7672;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t7673;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t9430;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t7675;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_86.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_102MethodDeclarations.h"
#define List_1__ctor_m51733(__this, method) (( void (*) (List_1_t7670 *, const MethodInfo*))List_1__ctor_m51580_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m51734(__this, ___collection, method) (( void (*) (List_1_t7670 *, Object_t*, const MethodInfo*))List_1__ctor_m51581_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m51735(__this, ___capacity, method) (( void (*) (List_1_t7670 *, int32_t, const MethodInfo*))List_1__ctor_m51582_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m51736(__this, ___data, ___size, method) (( void (*) (List_1_t7670 *, KeyValuePair_2U5BU5D_t7669*, int32_t, const MethodInfo*))List_1__ctor_m51583_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m51737(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51584_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51738(__this, method) (( Object_t* (*) (List_1_t7670 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m51739(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7670 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51586_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51740(__this, method) (( Object_t * (*) (List_1_t7670 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51587_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m51741(__this, ___item, method) (( int32_t (*) (List_1_t7670 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51588_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m51742(__this, ___item, method) (( bool (*) (List_1_t7670 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51589_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m51743(__this, ___item, method) (( int32_t (*) (List_1_t7670 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51590_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m51744(__this, ___index, ___item, method) (( void (*) (List_1_t7670 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51591_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m51745(__this, ___item, method) (( void (*) (List_1_t7670 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51592_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51746(__this, method) (( bool (*) (List_1_t7670 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51747(__this, method) (( bool (*) (List_1_t7670 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m51748(__this, method) (( Object_t * (*) (List_1_t7670 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51595_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m51749(__this, method) (( bool (*) (List_1_t7670 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51596_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m51750(__this, method) (( bool (*) (List_1_t7670 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51597_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m51751(__this, ___index, method) (( Object_t * (*) (List_1_t7670 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51598_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m51752(__this, ___index, ___value, method) (( void (*) (List_1_t7670 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51599_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m51753(__this, ___item, method) (( void (*) (List_1_t7670 *, KeyValuePair_2_t7270 , const MethodInfo*))List_1_Add_m51600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m51754(__this, ___newCount, method) (( void (*) (List_1_t7670 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51601_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m51755(__this, ___idx, ___count, method) (( void (*) (List_1_t7670 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51602_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m51756(__this, ___collection, method) (( void (*) (List_1_t7670 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51603_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m51757(__this, ___enumerable, method) (( void (*) (List_1_t7670 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51604_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m51758(__this, ___collection, method) (( void (*) (List_1_t7670 *, Object_t*, const MethodInfo*))List_1_AddRange_m51605_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m51759(__this, method) (( ReadOnlyCollection_1_t7672 * (*) (List_1_t7670 *, const MethodInfo*))List_1_AsReadOnly_m51606_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m51760(__this, method) (( void (*) (List_1_t7670 *, const MethodInfo*))List_1_Clear_m51607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m51761(__this, ___item, method) (( bool (*) (List_1_t7670 *, KeyValuePair_2_t7270 , const MethodInfo*))List_1_Contains_m51608_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m51762(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7670 *, KeyValuePair_2U5BU5D_t7669*, int32_t, const MethodInfo*))List_1_CopyTo_m51609_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m51763(__this, ___match, method) (( KeyValuePair_2_t7270  (*) (List_1_t7670 *, Predicate_1_t7673 *, const MethodInfo*))List_1_Find_m51610_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m51764(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7673 *, const MethodInfo*))List_1_CheckMatch_m51611_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m51765(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7670 *, int32_t, int32_t, Predicate_1_t7673 *, const MethodInfo*))List_1_GetIndex_m51612_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m51766(__this, method) (( Enumerator_t7674  (*) (List_1_t7670 *, const MethodInfo*))List_1_GetEnumerator_m51613_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m51767(__this, ___index, ___count, method) (( List_1_t7670 * (*) (List_1_t7670 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51614_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m51768(__this, ___item, method) (( int32_t (*) (List_1_t7670 *, KeyValuePair_2_t7270 , const MethodInfo*))List_1_IndexOf_m51615_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m51769(__this, ___start, ___delta, method) (( void (*) (List_1_t7670 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m51770(__this, ___index, method) (( void (*) (List_1_t7670 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m51771(__this, ___index, ___item, method) (( void (*) (List_1_t7670 *, int32_t, KeyValuePair_2_t7270 , const MethodInfo*))List_1_Insert_m51618_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m51772(__this, ___collection, method) (( void (*) (List_1_t7670 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51619_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m51773(__this, ___index, ___collection, method) (( void (*) (List_1_t7670 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m51774(__this, ___index, ___collection, method) (( void (*) (List_1_t7670 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51621_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m51775(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7670 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51622_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m51776(__this, ___item, method) (( bool (*) (List_1_t7670 *, KeyValuePair_2_t7270 , const MethodInfo*))List_1_Remove_m51623_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m51777(__this, ___match, method) (( int32_t (*) (List_1_t7670 *, Predicate_1_t7673 *, const MethodInfo*))List_1_RemoveAll_m51624_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m51778(__this, ___index, method) (( void (*) (List_1_t7670 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51625_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m51779(__this, ___index, ___count, method) (( void (*) (List_1_t7670 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51626_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m51780(__this, method) (( void (*) (List_1_t7670 *, const MethodInfo*))List_1_Reverse_m51627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m51781(__this, method) (( void (*) (List_1_t7670 *, const MethodInfo*))List_1_Sort_m51628_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m51782(__this, ___comparer, method) (( void (*) (List_1_t7670 *, Object_t*, const MethodInfo*))List_1_Sort_m51629_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m51783(__this, ___comparison, method) (( void (*) (List_1_t7670 *, Comparison_1_t7675 *, const MethodInfo*))List_1_Sort_m51630_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m51784(__this, method) (( KeyValuePair_2U5BU5D_t7669* (*) (List_1_t7670 *, const MethodInfo*))List_1_ToArray_m51631_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m51785(__this, method) (( void (*) (List_1_t7670 *, const MethodInfo*))List_1_TrimExcess_m51632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m51786(__this, method) (( int32_t (*) (List_1_t7670 *, const MethodInfo*))List_1_get_Capacity_m51633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m51787(__this, ___value, method) (( void (*) (List_1_t7670 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51634_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m51788(__this, method) (( int32_t (*) (List_1_t7670 *, const MethodInfo*))List_1_get_Count_m51635_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m51789(__this, ___index, method) (( KeyValuePair_2_t7270  (*) (List_1_t7670 *, int32_t, const MethodInfo*))List_1_get_Item_m51636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m51790(__this, ___index, ___value, method) (( void (*) (List_1_t7670 *, int32_t, KeyValuePair_2_t7270 , const MethodInfo*))List_1_set_Item_m51637_gshared)(__this, ___index, ___value, method)
