﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t645;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t4336;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t4337;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t4338;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t3627;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t3606;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t3628;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t4339;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t3630;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_16MethodDeclarations.h"
#define List_1__ctor_m3113(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1__ctor_m3115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21390(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1__ctor_m21113_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m21391(__this, ___capacity, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1__ctor_m21114_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m21392(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21115_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21393(__this, method) (( Object_t* (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21394(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t645 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21117_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21395(__this, method) (( Object_t * (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21118_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21396(__this, ___item, method) (( int32_t (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21397(__this, ___item, method) (( bool (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21120_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21398(__this, ___item, method) (( int32_t (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21121_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21399(__this, ___index, ___item, method) (( void (*) (List_1_t645 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21122_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21400(__this, ___item, method) (( void (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21123_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21401(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21402(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21125_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21403(__this, method) (( Object_t * (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21404(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21127_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21405(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21128_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21406(__this, ___index, method) (( Object_t * (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21129_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21407(__this, ___index, ___value, method) (( void (*) (List_1_t645 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21130_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m21408(__this, ___item, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_Add_m21131_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21409(__this, ___newCount, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21132_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21410(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21133_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21411(__this, ___enumerable, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21134_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21412(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_AddRange_m21135_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m21413(__this, method) (( ReadOnlyCollection_1_t3627 * (*) (List_1_t645 *, const MethodInfo*))List_1_AsReadOnly_m21136_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m21414(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_Clear_m21137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m21415(__this, ___item, method) (( bool (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_Contains_m21138_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21416(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t645 *, MouseHoleLocationU5BU5D_t3606*, int32_t, const MethodInfo*))List_1_CopyTo_m21139_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m21417(__this, ___match, method) (( int32_t (*) (List_1_t645 *, Predicate_1_t3628 *, const MethodInfo*))List_1_Find_m21140_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21418(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3628 *, const MethodInfo*))List_1_CheckMatch_m21141_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21419(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t645 *, int32_t, int32_t, Predicate_1_t3628 *, const MethodInfo*))List_1_GetIndex_m21142_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m21420(__this, method) (( Enumerator_t3629  (*) (List_1_t645 *, const MethodInfo*))List_1_GetEnumerator_m21143_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m21421(__this, ___item, method) (( int32_t (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_IndexOf_m21144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21422(__this, ___start, ___delta, method) (( void (*) (List_1_t645 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21145_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21423(__this, ___index, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21146_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m21424(__this, ___index, ___item, method) (( void (*) (List_1_t645 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m21147_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21425(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21148_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m21426(__this, ___item, method) (( bool (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_Remove_m21149_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21427(__this, ___match, method) (( int32_t (*) (List_1_t645 *, Predicate_1_t3628 *, const MethodInfo*))List_1_RemoveAll_m21150_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21428(__this, ___index, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21151_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m21429(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_Reverse_m21152_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m21430(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_Sort_m21153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21431(__this, ___comparer, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_Sort_m21154_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21432(__this, ___comparison, method) (( void (*) (List_1_t645 *, Comparison_1_t3630 *, const MethodInfo*))List_1_Sort_m21155_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m21433(__this, method) (( MouseHoleLocationU5BU5D_t3606* (*) (List_1_t645 *, const MethodInfo*))List_1_ToArray_m21156_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m21434(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_TrimExcess_m21157_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m21435(__this, method) (( int32_t (*) (List_1_t645 *, const MethodInfo*))List_1_get_Capacity_m21158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21436(__this, ___value, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21159_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m21437(__this, method) (( int32_t (*) (List_1_t645 *, const MethodInfo*))List_1_get_Count_m21160_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m21438(__this, ___index, method) (( int32_t (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_get_Item_m21161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m21439(__this, ___index, ___value, method) (( void (*) (List_1_t645 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m21162_gshared)(__this, ___index, ___value, method)
