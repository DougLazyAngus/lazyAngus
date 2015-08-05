#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t792;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t791;
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
#define List_1__ctor_m5524(__this, method) (( void (*) (List_1_t792 *, const MethodInfo*))List_1__ctor_m3485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27425(__this, ___collection, method) (( void (*) (List_1_t792 *, Object_t*, const MethodInfo*))List_1__ctor_m7223_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m27426(__this, ___capacity, method) (( void (*) (List_1_t792 *, int32_t, const MethodInfo*))List_1__ctor_m21323_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(T[],System.Int32)
#define List_1__ctor_m27427(__this, ___data, ___size, method) (( void (*) (List_1_t792 *, EntryU5BU5D_t5720*, int32_t, const MethodInfo*))List_1__ctor_m21325_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m27428(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21327_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27429(__this, method) (( Object_t* (*) (List_1_t792 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27430(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t792 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10099_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27431(__this, method) (( Object_t * (*) (List_1_t792 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10095_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27432(__this, ___item, method) (( int32_t (*) (List_1_t792 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27433(__this, ___item, method) (( bool (*) (List_1_t792 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10106_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27434(__this, ___item, method) (( int32_t (*) (List_1_t792 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27435(__this, ___index, ___item, method) (( void (*) (List_1_t792 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10108_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27436(__this, ___item, method) (( void (*) (List_1_t792 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10109_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27437(__this, method) (( bool (*) (List_1_t792 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27438(__this, method) (( bool (*) (List_1_t792 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10097_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27439(__this, method) (( Object_t * (*) (List_1_t792 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27440(__this, method) (( bool (*) (List_1_t792 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27441(__this, method) (( bool (*) (List_1_t792 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10101_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27442(__this, ___index, method) (( Object_t * (*) (List_1_t792 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10102_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27443(__this, ___index, ___value, method) (( void (*) (List_1_t792 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10103_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m27444(__this, ___item, method) (( void (*) (List_1_t792 *, Entry_t791 *, const MethodInfo*))List_1_Add_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27445(__this, ___newCount, method) (( void (*) (List_1_t792 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21345_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27446(__this, ___idx, ___count, method) (( void (*) (List_1_t792 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21347_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27447(__this, ___collection, method) (( void (*) (List_1_t792 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21349_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27448(__this, ___enumerable, method) (( void (*) (List_1_t792 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21351_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27449(__this, ___collection, method) (( void (*) (List_1_t792 *, Object_t*, const MethodInfo*))List_1_AddRange_m21353_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m27450(__this, method) (( ReadOnlyCollection_1_t5722 * (*) (List_1_t792 *, const MethodInfo*))List_1_AsReadOnly_m21355_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m27451(__this, method) (( void (*) (List_1_t792 *, const MethodInfo*))List_1_Clear_m10105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m27452(__this, ___item, method) (( bool (*) (List_1_t792 *, Entry_t791 *, const MethodInfo*))List_1_Contains_m10113_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27453(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t792 *, EntryU5BU5D_t5720*, int32_t, const MethodInfo*))List_1_CopyTo_m10114_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m27454(__this, ___match, method) (( Entry_t791 * (*) (List_1_t792 *, Predicate_1_t5723 *, const MethodInfo*))List_1_Find_m21360_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27455(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5723 *, const MethodInfo*))List_1_CheckMatch_m21362_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27456(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t792 *, int32_t, int32_t, Predicate_1_t5723 *, const MethodInfo*))List_1_GetIndex_m21364_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m27457(__this, method) (( Enumerator_t5724  (*) (List_1_t792 *, const MethodInfo*))List_1_GetEnumerator_m3641_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27458(__this, ___index, ___count, method) (( List_1_t792 * (*) (List_1_t792 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21366_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m27459(__this, ___item, method) (( int32_t (*) (List_1_t792 *, Entry_t791 *, const MethodInfo*))List_1_IndexOf_m10117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27460(__this, ___start, ___delta, method) (( void (*) (List_1_t792 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21369_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27461(__this, ___index, method) (( void (*) (List_1_t792 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21371_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m27462(__this, ___index, ___item, method) (( void (*) (List_1_t792 *, int32_t, Entry_t791 *, const MethodInfo*))List_1_Insert_m10118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27463(__this, ___collection, method) (( void (*) (List_1_t792 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21374_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27464(__this, ___index, ___collection, method) (( void (*) (List_1_t792 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21376_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27465(__this, ___index, ___collection, method) (( void (*) (List_1_t792 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21378_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27466(__this, ___index, ___enumerable, method) (( void (*) (List_1_t792 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21380_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m27467(__this, ___item, method) (( bool (*) (List_1_t792 *, Entry_t791 *, const MethodInfo*))List_1_Remove_m10115_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27468(__this, ___match, method) (( int32_t (*) (List_1_t792 *, Predicate_1_t5723 *, const MethodInfo*))List_1_RemoveAll_m21383_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27469(__this, ___index, method) (( void (*) (List_1_t792 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10110_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27470(__this, ___index, ___count, method) (( void (*) (List_1_t792 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21386_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m27471(__this, method) (( void (*) (List_1_t792 *, const MethodInfo*))List_1_Reverse_m21388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m27472(__this, method) (( void (*) (List_1_t792 *, const MethodInfo*))List_1_Sort_m21390_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27473(__this, ___comparer, method) (( void (*) (List_1_t792 *, Object_t*, const MethodInfo*))List_1_Sort_m21392_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27474(__this, ___comparison, method) (( void (*) (List_1_t792 *, Comparison_1_t5725 *, const MethodInfo*))List_1_Sort_m21394_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m27475(__this, method) (( EntryU5BU5D_t5720* (*) (List_1_t792 *, const MethodInfo*))List_1_ToArray_m21396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m27476(__this, method) (( void (*) (List_1_t792 *, const MethodInfo*))List_1_TrimExcess_m21398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m27477(__this, method) (( int32_t (*) (List_1_t792 *, const MethodInfo*))List_1_get_Capacity_m21400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27478(__this, ___value, method) (( void (*) (List_1_t792 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21402_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m27479(__this, method) (( int32_t (*) (List_1_t792 *, const MethodInfo*))List_1_get_Count_m10096_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m27480(__this, ___index, method) (( Entry_t791 * (*) (List_1_t792 *, int32_t, const MethodInfo*))List_1_get_Item_m10119_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m27481(__this, ___index, ___value, method) (( void (*) (List_1_t792 *, int32_t, Entry_t791 *, const MethodInfo*))List_1_set_Item_m10120_gshared)(__this, ___index, ___value, method)
