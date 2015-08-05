#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t793;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t792;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t8874;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t5720;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t8875;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t8876;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t5722;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t5723;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IComparer_1_t8877;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t5725;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5526(__this, method) (( void (*) (List_1_t793 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27428(__this, ___collection, method) (( void (*) (List_1_t793 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m27429(__this, ___capacity, method) (( void (*) (List_1_t793 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(T[],System.Int32)
#define List_1__ctor_m27430(__this, ___data, ___size, method) (( void (*) (List_1_t793 *, EntryU5BU5D_t5720*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m27431(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27432(__this, method) (( Object_t* (*) (List_1_t793 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27433(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t793 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27434(__this, method) (( Object_t * (*) (List_1_t793 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27435(__this, ___item, method) (( int32_t (*) (List_1_t793 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27436(__this, ___item, method) (( bool (*) (List_1_t793 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27437(__this, ___item, method) (( int32_t (*) (List_1_t793 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27438(__this, ___index, ___item, method) (( void (*) (List_1_t793 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27439(__this, ___item, method) (( void (*) (List_1_t793 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27440(__this, method) (( bool (*) (List_1_t793 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27441(__this, method) (( bool (*) (List_1_t793 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27442(__this, method) (( Object_t * (*) (List_1_t793 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27443(__this, method) (( bool (*) (List_1_t793 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27444(__this, method) (( bool (*) (List_1_t793 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27445(__this, ___index, method) (( Object_t * (*) (List_1_t793 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27446(__this, ___index, ___value, method) (( void (*) (List_1_t793 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m27447(__this, ___item, method) (( void (*) (List_1_t793 *, Entry_t792 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27448(__this, ___newCount, method) (( void (*) (List_1_t793 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27449(__this, ___idx, ___count, method) (( void (*) (List_1_t793 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27450(__this, ___collection, method) (( void (*) (List_1_t793 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27451(__this, ___enumerable, method) (( void (*) (List_1_t793 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27452(__this, ___collection, method) (( void (*) (List_1_t793 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m27453(__this, method) (( ReadOnlyCollection_1_t5722 * (*) (List_1_t793 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m27454(__this, method) (( void (*) (List_1_t793 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m27455(__this, ___item, method) (( bool (*) (List_1_t793 *, Entry_t792 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27456(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t793 *, EntryU5BU5D_t5720*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m27457(__this, ___match, method) (( Entry_t792 * (*) (List_1_t793 *, Predicate_1_t5723 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27458(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5723 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27459(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t793 *, int32_t, int32_t, Predicate_1_t5723 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m27460(__this, method) (( Enumerator_t5724  (*) (List_1_t793 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27461(__this, ___index, ___count, method) (( List_1_t793 * (*) (List_1_t793 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m27462(__this, ___item, method) (( int32_t (*) (List_1_t793 *, Entry_t792 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27463(__this, ___start, ___delta, method) (( void (*) (List_1_t793 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27464(__this, ___index, method) (( void (*) (List_1_t793 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m27465(__this, ___index, ___item, method) (( void (*) (List_1_t793 *, int32_t, Entry_t792 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27466(__this, ___collection, method) (( void (*) (List_1_t793 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27467(__this, ___index, ___collection, method) (( void (*) (List_1_t793 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27468(__this, ___index, ___collection, method) (( void (*) (List_1_t793 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27469(__this, ___index, ___enumerable, method) (( void (*) (List_1_t793 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m27470(__this, ___item, method) (( bool (*) (List_1_t793 *, Entry_t792 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27471(__this, ___match, method) (( int32_t (*) (List_1_t793 *, Predicate_1_t5723 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27472(__this, ___index, method) (( void (*) (List_1_t793 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27473(__this, ___index, ___count, method) (( void (*) (List_1_t793 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m27474(__this, method) (( void (*) (List_1_t793 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m27475(__this, method) (( void (*) (List_1_t793 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27476(__this, ___comparer, method) (( void (*) (List_1_t793 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27477(__this, ___comparison, method) (( void (*) (List_1_t793 *, Comparison_1_t5725 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m27478(__this, method) (( EntryU5BU5D_t5720* (*) (List_1_t793 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m27479(__this, method) (( void (*) (List_1_t793 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m27480(__this, method) (( int32_t (*) (List_1_t793 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27481(__this, ___value, method) (( void (*) (List_1_t793 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m27482(__this, method) (( int32_t (*) (List_1_t793 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m27483(__this, ___index, method) (( Entry_t792 * (*) (List_1_t793 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m27484(__this, ___index, ___value, method) (( void (*) (List_1_t793 *, int32_t, Entry_t792 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)
