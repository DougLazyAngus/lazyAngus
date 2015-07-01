#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t486;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t275;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t4179;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t4180;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t4181;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t3401;
// GPScore[]
struct GPScoreU5BU5D_t3399;
// System.Predicate`1<GPScore>
struct Predicate_1_t3402;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t4182;
// System.Comparison`1<GPScore>
struct Comparison_1_t3403;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m2396(__this, method) (( void (*) (List_1_t486 *, const MethodInfo*))List_1__ctor_m2341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18478(__this, ___collection, method) (( void (*) (List_1_t486 *, Object_t*, const MethodInfo*))List_1__ctor_m16488_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m18479(__this, ___capacity, method) (( void (*) (List_1_t486 *, int32_t, const MethodInfo*))List_1__ctor_m16490_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m18480(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16492_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18481(__this, method) (( Object_t* (*) (List_1_t486 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18482(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t486 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18483(__this, method) (( Object_t * (*) (List_1_t486 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18484(__this, ___item, method) (( int32_t (*) (List_1_t486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6498_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18485(__this, ___item, method) (( bool (*) (List_1_t486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6500_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18486(__this, ___item, method) (( int32_t (*) (List_1_t486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18487(__this, ___index, ___item, method) (( void (*) (List_1_t486 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6502_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18488(__this, ___item, method) (( void (*) (List_1_t486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6503_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18489(__this, method) (( bool (*) (List_1_t486 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18490(__this, method) (( bool (*) (List_1_t486 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18491(__this, method) (( Object_t * (*) (List_1_t486 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18492(__this, method) (( bool (*) (List_1_t486 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18493(__this, method) (( bool (*) (List_1_t486 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6495_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18494(__this, ___index, method) (( Object_t * (*) (List_1_t486 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18495(__this, ___index, ___value, method) (( void (*) (List_1_t486 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m18496(__this, ___item, method) (( void (*) (List_1_t486 *, GPScore_t275 *, const MethodInfo*))List_1_Add_m6506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18497(__this, ___newCount, method) (( void (*) (List_1_t486 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18498(__this, ___collection, method) (( void (*) (List_1_t486 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16512_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18499(__this, ___enumerable, method) (( void (*) (List_1_t486 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16514_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m2398(__this, ___collection, method) (( void (*) (List_1_t486 *, Object_t*, const MethodInfo*))List_1_AddRange_m16516_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m18500(__this, method) (( ReadOnlyCollection_1_t3401 * (*) (List_1_t486 *, const MethodInfo*))List_1_AsReadOnly_m16518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m18501(__this, method) (( void (*) (List_1_t486 *, const MethodInfo*))List_1_Clear_m6499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m18502(__this, ___item, method) (( bool (*) (List_1_t486 *, GPScore_t275 *, const MethodInfo*))List_1_Contains_m6507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18503(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t486 *, GPScoreU5BU5D_t3399*, int32_t, const MethodInfo*))List_1_CopyTo_m6508_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m18504(__this, ___match, method) (( GPScore_t275 * (*) (List_1_t486 *, Predicate_1_t3402 *, const MethodInfo*))List_1_Find_m16523_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18505(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3402 *, const MethodInfo*))List_1_CheckMatch_m16525_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18506(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t486 *, int32_t, int32_t, Predicate_1_t3402 *, const MethodInfo*))List_1_GetIndex_m16527_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m2399(__this, method) (( Enumerator_t529  (*) (List_1_t486 *, const MethodInfo*))List_1_GetEnumerator_m2444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m18507(__this, ___item, method) (( int32_t (*) (List_1_t486 *, GPScore_t275 *, const MethodInfo*))List_1_IndexOf_m6511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18508(__this, ___start, ___delta, method) (( void (*) (List_1_t486 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16530_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18509(__this, ___index, method) (( void (*) (List_1_t486 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m18510(__this, ___index, ___item, method) (( void (*) (List_1_t486 *, int32_t, GPScore_t275 *, const MethodInfo*))List_1_Insert_m6512_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18511(__this, ___collection, method) (( void (*) (List_1_t486 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16535_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m18512(__this, ___item, method) (( bool (*) (List_1_t486 *, GPScore_t275 *, const MethodInfo*))List_1_Remove_m6509_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18513(__this, ___match, method) (( int32_t (*) (List_1_t486 *, Predicate_1_t3402 *, const MethodInfo*))List_1_RemoveAll_m16538_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18514(__this, ___index, method) (( void (*) (List_1_t486 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6504_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m18515(__this, method) (( void (*) (List_1_t486 *, const MethodInfo*))List_1_Reverse_m16541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m18516(__this, method) (( void (*) (List_1_t486 *, const MethodInfo*))List_1_Sort_m16543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18517(__this, ___comparer, method) (( void (*) (List_1_t486 *, Object_t*, const MethodInfo*))List_1_Sort_m16545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18518(__this, ___comparison, method) (( void (*) (List_1_t486 *, Comparison_1_t3403 *, const MethodInfo*))List_1_Sort_m16547_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m18519(__this, method) (( GPScoreU5BU5D_t3399* (*) (List_1_t486 *, const MethodInfo*))List_1_ToArray_m16549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m18520(__this, method) (( void (*) (List_1_t486 *, const MethodInfo*))List_1_TrimExcess_m16551_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m18521(__this, method) (( int32_t (*) (List_1_t486 *, const MethodInfo*))List_1_get_Capacity_m16553_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18522(__this, ___value, method) (( void (*) (List_1_t486 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m18523(__this, method) (( int32_t (*) (List_1_t486 *, const MethodInfo*))List_1_get_Count_m6490_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m18524(__this, ___index, method) (( GPScore_t275 * (*) (List_1_t486 *, int32_t, const MethodInfo*))List_1_get_Item_m6513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m18525(__this, ___index, ___value, method) (( void (*) (List_1_t486 *, int32_t, GPScore_t275 *, const MethodInfo*))List_1_set_Item_m6514_gshared)(__this, ___index, ___value, method)
