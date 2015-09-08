#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct List_1_t6624;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t839;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1420;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ICollection_1_t838;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6626;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Predicate_1_t6627;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IComparer_1_t9722;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Comparison_1_t6629;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_56.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_74MethodDeclarations.h"
#define List_1__ctor_m36295(__this, method) (( void (*) (List_1_t6624 *, const MethodInfo*))List_1__ctor_m36142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m36296(__this, ___collection, method) (( void (*) (List_1_t6624 *, Object_t*, const MethodInfo*))List_1__ctor_m36143_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m36297(__this, ___capacity, method) (( void (*) (List_1_t6624 *, int32_t, const MethodInfo*))List_1__ctor_m36144_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m36298(__this, ___data, ___size, method) (( void (*) (List_1_t6624 *, KeyValuePair_2U5BU5D_t1433*, int32_t, const MethodInfo*))List_1__ctor_m36145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m36299(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36146_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36300(__this, method) (( Object_t* (*) (List_1_t6624 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m36301(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6624 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36302(__this, method) (( Object_t * (*) (List_1_t6624 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36149_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m36303(__this, ___item, method) (( int32_t (*) (List_1_t6624 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36150_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m36304(__this, ___item, method) (( bool (*) (List_1_t6624 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36151_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m36305(__this, ___item, method) (( int32_t (*) (List_1_t6624 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36152_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m36306(__this, ___index, ___item, method) (( void (*) (List_1_t6624 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36153_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m36307(__this, ___item, method) (( void (*) (List_1_t6624 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36154_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36308(__this, method) (( bool (*) (List_1_t6624 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36309(__this, method) (( bool (*) (List_1_t6624 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36156_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m36310(__this, method) (( Object_t * (*) (List_1_t6624 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36157_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m36311(__this, method) (( bool (*) (List_1_t6624 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36158_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m36312(__this, method) (( bool (*) (List_1_t6624 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36159_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m36313(__this, ___index, method) (( Object_t * (*) (List_1_t6624 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36160_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m36314(__this, ___index, ___value, method) (( void (*) (List_1_t6624 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36161_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m36315(__this, ___item, method) (( void (*) (List_1_t6624 *, KeyValuePair_2_t795 , const MethodInfo*))List_1_Add_m36162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m36316(__this, ___newCount, method) (( void (*) (List_1_t6624 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36163_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m36317(__this, ___idx, ___count, method) (( void (*) (List_1_t6624 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36164_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m36318(__this, ___collection, method) (( void (*) (List_1_t6624 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36165_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m36319(__this, ___enumerable, method) (( void (*) (List_1_t6624 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36166_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m36320(__this, ___collection, method) (( void (*) (List_1_t6624 *, Object_t*, const MethodInfo*))List_1_AddRange_m36167_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m36321(__this, method) (( ReadOnlyCollection_1_t6626 * (*) (List_1_t6624 *, const MethodInfo*))List_1_AsReadOnly_m36168_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m36322(__this, method) (( void (*) (List_1_t6624 *, const MethodInfo*))List_1_Clear_m36169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m36323(__this, ___item, method) (( bool (*) (List_1_t6624 *, KeyValuePair_2_t795 , const MethodInfo*))List_1_Contains_m36170_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m36324(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6624 *, KeyValuePair_2U5BU5D_t1433*, int32_t, const MethodInfo*))List_1_CopyTo_m36171_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m36325(__this, ___match, method) (( KeyValuePair_2_t795  (*) (List_1_t6624 *, Predicate_1_t6627 *, const MethodInfo*))List_1_Find_m36172_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m36326(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6627 *, const MethodInfo*))List_1_CheckMatch_m36173_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m36327(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6624 *, int32_t, int32_t, Predicate_1_t6627 *, const MethodInfo*))List_1_GetIndex_m36174_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m36328(__this, method) (( Enumerator_t6628  (*) (List_1_t6624 *, const MethodInfo*))List_1_GetEnumerator_m36175_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m36329(__this, ___index, ___count, method) (( List_1_t6624 * (*) (List_1_t6624 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36176_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m36330(__this, ___item, method) (( int32_t (*) (List_1_t6624 *, KeyValuePair_2_t795 , const MethodInfo*))List_1_IndexOf_m36177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m36331(__this, ___start, ___delta, method) (( void (*) (List_1_t6624 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36178_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m36332(__this, ___index, method) (( void (*) (List_1_t6624 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m36333(__this, ___index, ___item, method) (( void (*) (List_1_t6624 *, int32_t, KeyValuePair_2_t795 , const MethodInfo*))List_1_Insert_m36180_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m36334(__this, ___collection, method) (( void (*) (List_1_t6624 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m36335(__this, ___index, ___collection, method) (( void (*) (List_1_t6624 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36182_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m36336(__this, ___index, ___collection, method) (( void (*) (List_1_t6624 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36183_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m36337(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6624 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36184_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m36338(__this, ___item, method) (( bool (*) (List_1_t6624 *, KeyValuePair_2_t795 , const MethodInfo*))List_1_Remove_m36185_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m36339(__this, ___match, method) (( int32_t (*) (List_1_t6624 *, Predicate_1_t6627 *, const MethodInfo*))List_1_RemoveAll_m36186_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m36340(__this, ___index, method) (( void (*) (List_1_t6624 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36187_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m36341(__this, ___index, ___count, method) (( void (*) (List_1_t6624 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36188_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m36342(__this, method) (( void (*) (List_1_t6624 *, const MethodInfo*))List_1_Reverse_m36189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m36343(__this, method) (( void (*) (List_1_t6624 *, const MethodInfo*))List_1_Sort_m36190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m36344(__this, ___comparer, method) (( void (*) (List_1_t6624 *, Object_t*, const MethodInfo*))List_1_Sort_m36191_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m36345(__this, ___comparison, method) (( void (*) (List_1_t6624 *, Comparison_1_t6629 *, const MethodInfo*))List_1_Sort_m36192_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m36346(__this, method) (( KeyValuePair_2U5BU5D_t1433* (*) (List_1_t6624 *, const MethodInfo*))List_1_ToArray_m36193_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m36347(__this, method) (( void (*) (List_1_t6624 *, const MethodInfo*))List_1_TrimExcess_m36194_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m36348(__this, method) (( int32_t (*) (List_1_t6624 *, const MethodInfo*))List_1_get_Capacity_m36195_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m36349(__this, ___value, method) (( void (*) (List_1_t6624 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36196_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m36350(__this, method) (( int32_t (*) (List_1_t6624 *, const MethodInfo*))List_1_get_Count_m36197_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m36351(__this, ___index, method) (( KeyValuePair_2_t795  (*) (List_1_t6624 *, int32_t, const MethodInfo*))List_1_get_Item_m36198_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m36352(__this, ___index, ___value, method) (( void (*) (List_1_t6624 *, int32_t, KeyValuePair_2_t795 , const MethodInfo*))List_1_set_Item_m36199_gshared)(__this, ___index, ___value, method)
