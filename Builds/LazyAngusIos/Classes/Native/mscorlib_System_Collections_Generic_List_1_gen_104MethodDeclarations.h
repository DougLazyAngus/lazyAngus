#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t7764;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t9390;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7763;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7261;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t9391;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t7766;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t7767;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t9392;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7769;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_103MethodDeclarations.h"
#define List_1__ctor_m52834(__this, method) (( void (*) (List_1_t7764 *, const MethodInfo*))List_1__ctor_m52681_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52835(__this, ___collection, method) (( void (*) (List_1_t7764 *, Object_t*, const MethodInfo*))List_1__ctor_m52682_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m52836(__this, ___capacity, method) (( void (*) (List_1_t7764 *, int32_t, const MethodInfo*))List_1__ctor_m52683_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52837(__this, ___data, ___size, method) (( void (*) (List_1_t7764 *, KeyValuePair_2U5BU5D_t7763*, int32_t, const MethodInfo*))List_1__ctor_m52684_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m52838(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52685_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52839(__this, method) (( Object_t* (*) (List_1_t7764 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52686_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52840(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7764 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52687_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52841(__this, method) (( Object_t * (*) (List_1_t7764 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52688_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52842(__this, ___item, method) (( int32_t (*) (List_1_t7764 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52689_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52843(__this, ___item, method) (( bool (*) (List_1_t7764 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52690_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52844(__this, ___item, method) (( int32_t (*) (List_1_t7764 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52691_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52845(__this, ___index, ___item, method) (( void (*) (List_1_t7764 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52692_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52846(__this, ___item, method) (( void (*) (List_1_t7764 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52693_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52847(__this, method) (( bool (*) (List_1_t7764 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52848(__this, method) (( bool (*) (List_1_t7764 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52695_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52849(__this, method) (( Object_t * (*) (List_1_t7764 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52696_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52850(__this, method) (( bool (*) (List_1_t7764 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52697_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52851(__this, method) (( bool (*) (List_1_t7764 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52698_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52852(__this, ___index, method) (( Object_t * (*) (List_1_t7764 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52699_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52853(__this, ___index, ___value, method) (( void (*) (List_1_t7764 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52700_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m52854(__this, ___item, method) (( void (*) (List_1_t7764 *, KeyValuePair_2_t7256 , const MethodInfo*))List_1_Add_m52701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52855(__this, ___newCount, method) (( void (*) (List_1_t7764 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52702_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52856(__this, ___idx, ___count, method) (( void (*) (List_1_t7764 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52703_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52857(__this, ___collection, method) (( void (*) (List_1_t7764 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52704_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52858(__this, ___enumerable, method) (( void (*) (List_1_t7764 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52705_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52859(__this, ___collection, method) (( void (*) (List_1_t7764 *, Object_t*, const MethodInfo*))List_1_AddRange_m52706_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m52860(__this, method) (( ReadOnlyCollection_1_t7766 * (*) (List_1_t7764 *, const MethodInfo*))List_1_AsReadOnly_m52707_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m52861(__this, method) (( void (*) (List_1_t7764 *, const MethodInfo*))List_1_Clear_m52708_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m52862(__this, ___item, method) (( bool (*) (List_1_t7764 *, KeyValuePair_2_t7256 , const MethodInfo*))List_1_Contains_m52709_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52863(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7764 *, KeyValuePair_2U5BU5D_t7763*, int32_t, const MethodInfo*))List_1_CopyTo_m52710_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52864(__this, ___match, method) (( KeyValuePair_2_t7256  (*) (List_1_t7764 *, Predicate_1_t7767 *, const MethodInfo*))List_1_Find_m52711_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52865(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7767 *, const MethodInfo*))List_1_CheckMatch_m52712_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52866(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7764 *, int32_t, int32_t, Predicate_1_t7767 *, const MethodInfo*))List_1_GetIndex_m52713_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m52867(__this, method) (( Enumerator_t7768  (*) (List_1_t7764 *, const MethodInfo*))List_1_GetEnumerator_m52714_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52868(__this, ___index, ___count, method) (( List_1_t7764 * (*) (List_1_t7764 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52715_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m52869(__this, ___item, method) (( int32_t (*) (List_1_t7764 *, KeyValuePair_2_t7256 , const MethodInfo*))List_1_IndexOf_m52716_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52870(__this, ___start, ___delta, method) (( void (*) (List_1_t7764 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52717_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52871(__this, ___index, method) (( void (*) (List_1_t7764 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52718_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m52872(__this, ___index, ___item, method) (( void (*) (List_1_t7764 *, int32_t, KeyValuePair_2_t7256 , const MethodInfo*))List_1_Insert_m52719_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52873(__this, ___collection, method) (( void (*) (List_1_t7764 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52720_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52874(__this, ___index, ___collection, method) (( void (*) (List_1_t7764 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52721_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52875(__this, ___index, ___collection, method) (( void (*) (List_1_t7764 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52722_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52876(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7764 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52723_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m52877(__this, ___item, method) (( bool (*) (List_1_t7764 *, KeyValuePair_2_t7256 , const MethodInfo*))List_1_Remove_m52724_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52878(__this, ___match, method) (( int32_t (*) (List_1_t7764 *, Predicate_1_t7767 *, const MethodInfo*))List_1_RemoveAll_m52725_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52879(__this, ___index, method) (( void (*) (List_1_t7764 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52726_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52880(__this, ___index, ___count, method) (( void (*) (List_1_t7764 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52727_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m52881(__this, method) (( void (*) (List_1_t7764 *, const MethodInfo*))List_1_Reverse_m52728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m52882(__this, method) (( void (*) (List_1_t7764 *, const MethodInfo*))List_1_Sort_m52729_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52883(__this, ___comparer, method) (( void (*) (List_1_t7764 *, Object_t*, const MethodInfo*))List_1_Sort_m52730_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52884(__this, ___comparison, method) (( void (*) (List_1_t7764 *, Comparison_1_t7769 *, const MethodInfo*))List_1_Sort_m52731_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m52885(__this, method) (( KeyValuePair_2U5BU5D_t7763* (*) (List_1_t7764 *, const MethodInfo*))List_1_ToArray_m52732_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m52886(__this, method) (( void (*) (List_1_t7764 *, const MethodInfo*))List_1_TrimExcess_m52733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m52887(__this, method) (( int32_t (*) (List_1_t7764 *, const MethodInfo*))List_1_get_Capacity_m52734_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52888(__this, ___value, method) (( void (*) (List_1_t7764 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52735_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m52889(__this, method) (( int32_t (*) (List_1_t7764 *, const MethodInfo*))List_1_get_Count_m52736_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m52890(__this, ___index, method) (( KeyValuePair_2_t7256  (*) (List_1_t7764 *, int32_t, const MethodInfo*))List_1_get_Item_m52737_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52891(__this, ___index, ___value, method) (( void (*) (List_1_t7764 *, int32_t, KeyValuePair_2_t7256 , const MethodInfo*))List_1_set_Item_m52738_gshared)(__this, ___index, ___value, method)
