#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t7498;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t9285;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7497;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7157;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t9286;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t7500;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t7501;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t9287;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t7503;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_78.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_94MethodDeclarations.h"
#define List_1__ctor_m49826(__this, method) (( void (*) (List_1_t7498 *, const MethodInfo*))List_1__ctor_m49673_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m49827(__this, ___collection, method) (( void (*) (List_1_t7498 *, Object_t*, const MethodInfo*))List_1__ctor_m49674_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m49828(__this, ___capacity, method) (( void (*) (List_1_t7498 *, int32_t, const MethodInfo*))List_1__ctor_m49675_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m49829(__this, ___data, ___size, method) (( void (*) (List_1_t7498 *, KeyValuePair_2U5BU5D_t7497*, int32_t, const MethodInfo*))List_1__ctor_m49676_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m49830(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49677_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49831(__this, method) (( Object_t* (*) (List_1_t7498 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49678_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m49832(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7498 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49679_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49833(__this, method) (( Object_t * (*) (List_1_t7498 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49680_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m49834(__this, ___item, method) (( int32_t (*) (List_1_t7498 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49681_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m49835(__this, ___item, method) (( bool (*) (List_1_t7498 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49682_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m49836(__this, ___item, method) (( int32_t (*) (List_1_t7498 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m49837(__this, ___index, ___item, method) (( void (*) (List_1_t7498 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49684_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m49838(__this, ___item, method) (( void (*) (List_1_t7498 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49685_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49839(__this, method) (( bool (*) (List_1_t7498 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49840(__this, method) (( bool (*) (List_1_t7498 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49687_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m49841(__this, method) (( Object_t * (*) (List_1_t7498 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49688_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m49842(__this, method) (( bool (*) (List_1_t7498 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m49843(__this, method) (( bool (*) (List_1_t7498 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49690_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m49844(__this, ___index, method) (( Object_t * (*) (List_1_t7498 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49691_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m49845(__this, ___index, ___value, method) (( void (*) (List_1_t7498 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49692_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m49846(__this, ___item, method) (( void (*) (List_1_t7498 *, KeyValuePair_2_t5498 , const MethodInfo*))List_1_Add_m49693_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49847(__this, ___newCount, method) (( void (*) (List_1_t7498 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49694_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49848(__this, ___idx, ___count, method) (( void (*) (List_1_t7498 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49695_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49849(__this, ___collection, method) (( void (*) (List_1_t7498 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49696_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49850(__this, ___enumerable, method) (( void (*) (List_1_t7498 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49697_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49851(__this, ___collection, method) (( void (*) (List_1_t7498 *, Object_t*, const MethodInfo*))List_1_AddRange_m49698_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m49852(__this, method) (( ReadOnlyCollection_1_t7500 * (*) (List_1_t7498 *, const MethodInfo*))List_1_AsReadOnly_m49699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m49853(__this, method) (( void (*) (List_1_t7498 *, const MethodInfo*))List_1_Clear_m49700_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m49854(__this, ___item, method) (( bool (*) (List_1_t7498 *, KeyValuePair_2_t5498 , const MethodInfo*))List_1_Contains_m49701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49855(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7498 *, KeyValuePair_2U5BU5D_t7497*, int32_t, const MethodInfo*))List_1_CopyTo_m49702_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49856(__this, ___match, method) (( KeyValuePair_2_t5498  (*) (List_1_t7498 *, Predicate_1_t7501 *, const MethodInfo*))List_1_Find_m49703_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49857(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7501 *, const MethodInfo*))List_1_CheckMatch_m49704_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49858(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7498 *, int32_t, int32_t, Predicate_1_t7501 *, const MethodInfo*))List_1_GetIndex_m49705_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m49859(__this, method) (( Enumerator_t7502  (*) (List_1_t7498 *, const MethodInfo*))List_1_GetEnumerator_m49706_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49860(__this, ___index, ___count, method) (( List_1_t7498 * (*) (List_1_t7498 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49707_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m49861(__this, ___item, method) (( int32_t (*) (List_1_t7498 *, KeyValuePair_2_t5498 , const MethodInfo*))List_1_IndexOf_m49708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49862(__this, ___start, ___delta, method) (( void (*) (List_1_t7498 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49709_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49863(__this, ___index, method) (( void (*) (List_1_t7498 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49710_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m49864(__this, ___index, ___item, method) (( void (*) (List_1_t7498 *, int32_t, KeyValuePair_2_t5498 , const MethodInfo*))List_1_Insert_m49711_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49865(__this, ___collection, method) (( void (*) (List_1_t7498 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49712_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49866(__this, ___index, ___collection, method) (( void (*) (List_1_t7498 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49713_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49867(__this, ___index, ___collection, method) (( void (*) (List_1_t7498 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49714_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49868(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7498 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49715_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m49869(__this, ___item, method) (( bool (*) (List_1_t7498 *, KeyValuePair_2_t5498 , const MethodInfo*))List_1_Remove_m49716_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49870(__this, ___match, method) (( int32_t (*) (List_1_t7498 *, Predicate_1_t7501 *, const MethodInfo*))List_1_RemoveAll_m49717_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49871(__this, ___index, method) (( void (*) (List_1_t7498 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49718_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49872(__this, ___index, ___count, method) (( void (*) (List_1_t7498 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49719_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m49873(__this, method) (( void (*) (List_1_t7498 *, const MethodInfo*))List_1_Reverse_m49720_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m49874(__this, method) (( void (*) (List_1_t7498 *, const MethodInfo*))List_1_Sort_m49721_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49875(__this, ___comparer, method) (( void (*) (List_1_t7498 *, Object_t*, const MethodInfo*))List_1_Sort_m49722_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49876(__this, ___comparison, method) (( void (*) (List_1_t7498 *, Comparison_1_t7503 *, const MethodInfo*))List_1_Sort_m49723_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m49877(__this, method) (( KeyValuePair_2U5BU5D_t7497* (*) (List_1_t7498 *, const MethodInfo*))List_1_ToArray_m49724_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m49878(__this, method) (( void (*) (List_1_t7498 *, const MethodInfo*))List_1_TrimExcess_m49725_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m49879(__this, method) (( int32_t (*) (List_1_t7498 *, const MethodInfo*))List_1_get_Capacity_m49726_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49880(__this, ___value, method) (( void (*) (List_1_t7498 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49727_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m49881(__this, method) (( int32_t (*) (List_1_t7498 *, const MethodInfo*))List_1_get_Count_m49728_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m49882(__this, ___index, method) (( KeyValuePair_2_t5498  (*) (List_1_t7498 *, int32_t, const MethodInfo*))List_1_get_Item_m49729_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49883(__this, ___index, ___value, method) (( void (*) (List_1_t7498 *, int32_t, KeyValuePair_2_t5498 , const MethodInfo*))List_1_set_Item_m49730_gshared)(__this, ___index, ___value, method)
