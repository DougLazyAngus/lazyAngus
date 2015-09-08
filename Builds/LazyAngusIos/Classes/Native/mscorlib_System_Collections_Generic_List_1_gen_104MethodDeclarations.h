#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t8206;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t10016;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8205;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7811;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t10017;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t8208;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t8209;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t10018;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t8211;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_103MethodDeclarations.h"
#define List_1__ctor_m56008(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1__ctor_m55855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m56009(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1__ctor_m55856_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m56010(__this, ___capacity, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1__ctor_m55857_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m56011(__this, ___data, ___size, method) (( void (*) (List_1_t8206 *, KeyValuePair_2U5BU5D_t8205*, int32_t, const MethodInfo*))List_1__ctor_m55858_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m56012(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55859_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56013(__this, method) (( Object_t* (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55860_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m56014(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8206 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55861_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56015(__this, method) (( Object_t * (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55862_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m56016(__this, ___item, method) (( int32_t (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55863_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m56017(__this, ___item, method) (( bool (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55864_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m56018(__this, ___item, method) (( int32_t (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55865_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m56019(__this, ___index, ___item, method) (( void (*) (List_1_t8206 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55866_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m56020(__this, ___item, method) (( void (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55867_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56021(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55868_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56022(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55869_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m56023(__this, method) (( Object_t * (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55870_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m56024(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m56025(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55872_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m56026(__this, ___index, method) (( Object_t * (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55873_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m56027(__this, ___index, ___value, method) (( void (*) (List_1_t8206 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55874_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m56028(__this, ___item, method) (( void (*) (List_1_t8206 *, KeyValuePair_2_t7806 , const MethodInfo*))List_1_Add_m55875_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m56029(__this, ___newCount, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55876_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m56030(__this, ___idx, ___count, method) (( void (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55877_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m56031(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55878_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m56032(__this, ___enumerable, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55879_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m56033(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_AddRange_m55880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m56034(__this, method) (( ReadOnlyCollection_1_t8208 * (*) (List_1_t8206 *, const MethodInfo*))List_1_AsReadOnly_m55881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m56035(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_Clear_m55882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m56036(__this, ___item, method) (( bool (*) (List_1_t8206 *, KeyValuePair_2_t7806 , const MethodInfo*))List_1_Contains_m55883_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m56037(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8206 *, KeyValuePair_2U5BU5D_t8205*, int32_t, const MethodInfo*))List_1_CopyTo_m55884_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m56038(__this, ___match, method) (( KeyValuePair_2_t7806  (*) (List_1_t8206 *, Predicate_1_t8209 *, const MethodInfo*))List_1_Find_m55885_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m56039(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8209 *, const MethodInfo*))List_1_CheckMatch_m55886_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m56040(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8206 *, int32_t, int32_t, Predicate_1_t8209 *, const MethodInfo*))List_1_GetIndex_m55887_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m56041(__this, method) (( Enumerator_t8210  (*) (List_1_t8206 *, const MethodInfo*))List_1_GetEnumerator_m55888_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m56042(__this, ___index, ___count, method) (( List_1_t8206 * (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55889_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m56043(__this, ___item, method) (( int32_t (*) (List_1_t8206 *, KeyValuePair_2_t7806 , const MethodInfo*))List_1_IndexOf_m55890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m56044(__this, ___start, ___delta, method) (( void (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55891_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m56045(__this, ___index, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m56046(__this, ___index, ___item, method) (( void (*) (List_1_t8206 *, int32_t, KeyValuePair_2_t7806 , const MethodInfo*))List_1_Insert_m55893_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m56047(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m56048(__this, ___index, ___collection, method) (( void (*) (List_1_t8206 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m56049(__this, ___index, ___collection, method) (( void (*) (List_1_t8206 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m56050(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8206 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m56051(__this, ___item, method) (( bool (*) (List_1_t8206 *, KeyValuePair_2_t7806 , const MethodInfo*))List_1_Remove_m55898_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m56052(__this, ___match, method) (( int32_t (*) (List_1_t8206 *, Predicate_1_t8209 *, const MethodInfo*))List_1_RemoveAll_m55899_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m56053(__this, ___index, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55900_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m56054(__this, ___index, ___count, method) (( void (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55901_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m56055(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_Reverse_m55902_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m56056(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_Sort_m55903_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m56057(__this, ___comparer, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_Sort_m55904_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m56058(__this, ___comparison, method) (( void (*) (List_1_t8206 *, Comparison_1_t8211 *, const MethodInfo*))List_1_Sort_m55905_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m56059(__this, method) (( KeyValuePair_2U5BU5D_t8205* (*) (List_1_t8206 *, const MethodInfo*))List_1_ToArray_m55906_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m56060(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_TrimExcess_m55907_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m56061(__this, method) (( int32_t (*) (List_1_t8206 *, const MethodInfo*))List_1_get_Capacity_m55908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m56062(__this, ___value, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55909_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m56063(__this, method) (( int32_t (*) (List_1_t8206 *, const MethodInfo*))List_1_get_Count_m55910_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m56064(__this, ___index, method) (( KeyValuePair_2_t7806  (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_get_Item_m55911_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m56065(__this, ___index, ___value, method) (( void (*) (List_1_t8206 *, int32_t, KeyValuePair_2_t7806 , const MethodInfo*))List_1_set_Item_m55912_gshared)(__this, ___index, ___value, method)
