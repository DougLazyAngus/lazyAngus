#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t599;
// System.Object
struct Object_t;
// MouseTrap
struct MouseTrap_t603;
// System.Collections.Generic.IEnumerable`1<MouseTrap>
struct IEnumerable_1_t8945;
// MouseTrap[]
struct MouseTrapU5BU5D_t5751;
// System.Collections.Generic.IEnumerator`1<MouseTrap>
struct IEnumerator_1_t8946;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseTrap>
struct ICollection_1_t8947;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseTrap>
struct ReadOnlyCollection_1_t5753;
// System.Predicate`1<MouseTrap>
struct Predicate_1_t5754;
// System.Collections.Generic.IComparer`1<MouseTrap>
struct IComparer_1_t8948;
// System.Comparison`1<MouseTrap>
struct Comparison_1_t5756;
// System.Collections.Generic.List`1/Enumerator<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4264(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1__ctor_m3698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27469(__this, ___collection, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1__ctor_m7458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Int32)
#define List_1__ctor_m27470(__this, ___capacity, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1__ctor_m21556_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(T[],System.Int32)
#define List_1__ctor_m27471(__this, ___data, ___size, method) (( void (*) (List_1_t599 *, MouseTrapU5BU5D_t5751*, int32_t, const MethodInfo*))List_1__ctor_m21558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.cctor()
#define List_1__cctor_m27472(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21560_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27473(__this, method) (( Object_t* (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27474(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t599 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10334_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseTrap>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27475(__this, method) (( Object_t * (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27476(__this, ___item, method) (( int32_t (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10339_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27477(__this, ___item, method) (( bool (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27478(__this, ___item, method) (( int32_t (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27479(__this, ___index, ___item, method) (( void (*) (List_1_t599 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27480(__this, ___item, method) (( void (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27481(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27482(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10332_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27483(__this, method) (( Object_t * (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27484(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27485(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10336_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27486(__this, ___index, method) (( Object_t * (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10337_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27487(__this, ___index, ___value, method) (( void (*) (List_1_t599 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10338_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Add(T)
#define List_1_Add_m27488(__this, ___item, method) (( void (*) (List_1_t599 *, MouseTrap_t603 *, const MethodInfo*))List_1_Add_m10347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27489(__this, ___newCount, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21578_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27490(__this, ___idx, ___count, method) (( void (*) (List_1_t599 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21580_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27491(__this, ___collection, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21582_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27492(__this, ___enumerable, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21584_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27493(__this, ___collection, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_AddRange_m21586_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseTrap>::AsReadOnly()
#define List_1_AsReadOnly_m27494(__this, method) (( ReadOnlyCollection_1_t5753 * (*) (List_1_t599 *, const MethodInfo*))List_1_AsReadOnly_m21588_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Clear()
#define List_1_Clear_m27495(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_Clear_m10340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Contains(T)
#define List_1_Contains_m27496(__this, ___item, method) (( bool (*) (List_1_t599 *, MouseTrap_t603 *, const MethodInfo*))List_1_Contains_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27497(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t599 *, MouseTrapU5BU5D_t5751*, int32_t, const MethodInfo*))List_1_CopyTo_m10349_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseTrap>::Find(System.Predicate`1<T>)
#define List_1_Find_m27498(__this, ___match, method) (( MouseTrap_t603 * (*) (List_1_t599 *, Predicate_1_t5754 *, const MethodInfo*))List_1_Find_m21593_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27499(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5754 *, const MethodInfo*))List_1_CheckMatch_m21595_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27500(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t599 *, int32_t, int32_t, Predicate_1_t5754 *, const MethodInfo*))List_1_GetIndex_m21597_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseTrap>::GetEnumerator()
#define List_1_GetEnumerator_m27501(__this, method) (( Enumerator_t5755  (*) (List_1_t599 *, const MethodInfo*))List_1_GetEnumerator_m3854_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseTrap>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27502(__this, ___index, ___count, method) (( List_1_t599 * (*) (List_1_t599 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21599_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::IndexOf(T)
#define List_1_IndexOf_m27503(__this, ___item, method) (( int32_t (*) (List_1_t599 *, MouseTrap_t603 *, const MethodInfo*))List_1_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27504(__this, ___start, ___delta, method) (( void (*) (List_1_t599 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21602_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27505(__this, ___index, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Insert(System.Int32,T)
#define List_1_Insert_m27506(__this, ___index, ___item, method) (( void (*) (List_1_t599 *, int32_t, MouseTrap_t603 *, const MethodInfo*))List_1_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27507(__this, ___collection, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21607_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27508(__this, ___index, ___collection, method) (( void (*) (List_1_t599 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21609_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27509(__this, ___index, ___collection, method) (( void (*) (List_1_t599 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21611_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27510(__this, ___index, ___enumerable, method) (( void (*) (List_1_t599 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21613_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Remove(T)
#define List_1_Remove_m27511(__this, ___item, method) (( bool (*) (List_1_t599 *, MouseTrap_t603 *, const MethodInfo*))List_1_Remove_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27512(__this, ___match, method) (( int32_t (*) (List_1_t599 *, Predicate_1_t5754 *, const MethodInfo*))List_1_RemoveAll_m21616_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27513(__this, ___index, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10345_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27514(__this, ___index, ___count, method) (( void (*) (List_1_t599 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21619_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Reverse()
#define List_1_Reverse_m27515(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_Reverse_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort()
#define List_1_Sort_m27516(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_Sort_m21623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27517(__this, ___comparer, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_Sort_m21625_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27518(__this, ___comparison, method) (( void (*) (List_1_t599 *, Comparison_1_t5756 *, const MethodInfo*))List_1_Sort_m21627_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseTrap>::ToArray()
#define List_1_ToArray_m27519(__this, method) (( MouseTrapU5BU5D_t5751* (*) (List_1_t599 *, const MethodInfo*))List_1_ToArray_m21629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::TrimExcess()
#define List_1_TrimExcess_m27520(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_TrimExcess_m21631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Capacity()
#define List_1_get_Capacity_m27521(__this, method) (( int32_t (*) (List_1_t599 *, const MethodInfo*))List_1_get_Capacity_m21633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27522(__this, ___value, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21635_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count()
#define List_1_get_Count_m27523(__this, method) (( int32_t (*) (List_1_t599 *, const MethodInfo*))List_1_get_Count_m10331_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32)
#define List_1_get_Item_m27524(__this, ___index, method) (( MouseTrap_t603 * (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_get_Item_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Item(System.Int32,T)
#define List_1_set_Item_m27525(__this, ___index, ___value, method) (( void (*) (List_1_t599 *, int32_t, MouseTrap_t603 *, const MethodInfo*))List_1_set_Item_m10355_gshared)(__this, ___index, ___value, method)
