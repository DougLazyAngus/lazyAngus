﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t583;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t303;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t4328;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t4329;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t4330;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t3524;
// GPScore[]
struct GPScoreU5BU5D_t3522;
// System.Predicate`1<GPScore>
struct Predicate_1_t3525;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t4331;
// System.Comparison`1<GPScore>
struct Comparison_1_t3526;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3234(__this, method) (( void (*) (List_1_t583 *, const MethodInfo*))List_1__ctor_m3119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19882(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1__ctor_m17400_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m19883(__this, ___capacity, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1__ctor_m17402_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m19884(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17404_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19885(__this, method) (( Object_t* (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19886(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t583 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19887(__this, method) (( Object_t * (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7405_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19888(__this, ___item, method) (( int32_t (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7414_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19889(__this, ___item, method) (( bool (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19890(__this, ___item, method) (( int32_t (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19891(__this, ___index, ___item, method) (( void (*) (List_1_t583 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19892(__this, ___item, method) (( void (*) (List_1_t583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7419_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19893(__this, method) (( bool (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19894(__this, method) (( bool (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19895(__this, method) (( Object_t * (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19896(__this, method) (( bool (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19897(__this, method) (( bool (*) (List_1_t583 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19898(__this, ___index, method) (( Object_t * (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7412_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19899(__this, ___index, ___value, method) (( void (*) (List_1_t583 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m19900(__this, ___item, method) (( void (*) (List_1_t583 *, GPScore_t303 *, const MethodInfo*))List_1_Add_m7422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19901(__this, ___newCount, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17422_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19902(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19903(__this, ___enumerable, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17426_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3236(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_AddRange_m17428_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m19904(__this, method) (( ReadOnlyCollection_1_t3524 * (*) (List_1_t583 *, const MethodInfo*))List_1_AsReadOnly_m17430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m19905(__this, method) (( void (*) (List_1_t583 *, const MethodInfo*))List_1_Clear_m7415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m19906(__this, ___item, method) (( bool (*) (List_1_t583 *, GPScore_t303 *, const MethodInfo*))List_1_Contains_m7423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19907(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t583 *, GPScoreU5BU5D_t3522*, int32_t, const MethodInfo*))List_1_CopyTo_m7424_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m19908(__this, ___match, method) (( GPScore_t303 * (*) (List_1_t583 *, Predicate_1_t3525 *, const MethodInfo*))List_1_Find_m17435_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19909(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3525 *, const MethodInfo*))List_1_CheckMatch_m17437_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19910(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t583 *, int32_t, int32_t, Predicate_1_t3525 *, const MethodInfo*))List_1_GetIndex_m17439_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m3237(__this, method) (( Enumerator_t636  (*) (List_1_t583 *, const MethodInfo*))List_1_GetEnumerator_m3277_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m19911(__this, ___item, method) (( int32_t (*) (List_1_t583 *, GPScore_t303 *, const MethodInfo*))List_1_IndexOf_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19912(__this, ___start, ___delta, method) (( void (*) (List_1_t583 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17442_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19913(__this, ___index, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17444_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m19914(__this, ___index, ___item, method) (( void (*) (List_1_t583 *, int32_t, GPScore_t303 *, const MethodInfo*))List_1_Insert_m7428_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19915(__this, ___collection, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17447_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m19916(__this, ___item, method) (( bool (*) (List_1_t583 *, GPScore_t303 *, const MethodInfo*))List_1_Remove_m7425_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19917(__this, ___match, method) (( int32_t (*) (List_1_t583 *, Predicate_1_t3525 *, const MethodInfo*))List_1_RemoveAll_m17450_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19918(__this, ___index, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m19919(__this, method) (( void (*) (List_1_t583 *, const MethodInfo*))List_1_Reverse_m17453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m19920(__this, method) (( void (*) (List_1_t583 *, const MethodInfo*))List_1_Sort_m17455_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m19921(__this, ___comparer, method) (( void (*) (List_1_t583 *, Object_t*, const MethodInfo*))List_1_Sort_m17457_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19922(__this, ___comparison, method) (( void (*) (List_1_t583 *, Comparison_1_t3526 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m19923(__this, method) (( GPScoreU5BU5D_t3522* (*) (List_1_t583 *, const MethodInfo*))List_1_ToArray_m17461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m19924(__this, method) (( void (*) (List_1_t583 *, const MethodInfo*))List_1_TrimExcess_m17463_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m19925(__this, method) (( int32_t (*) (List_1_t583 *, const MethodInfo*))List_1_get_Capacity_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19926(__this, ___value, method) (( void (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17467_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m19927(__this, method) (( int32_t (*) (List_1_t583 *, const MethodInfo*))List_1_get_Count_m7406_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m19928(__this, ___index, method) (( GPScore_t303 * (*) (List_1_t583 *, int32_t, const MethodInfo*))List_1_get_Item_m7429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m19929(__this, ___index, ___value, method) (( void (*) (List_1_t583 *, int32_t, GPScore_t303 *, const MethodInfo*))List_1_set_Item_m7430_gshared)(__this, ___index, ___value, method)
