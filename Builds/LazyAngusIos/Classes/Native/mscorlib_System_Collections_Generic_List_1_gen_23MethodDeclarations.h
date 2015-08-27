#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t600;
// System.Object
struct Object_t;
// MouseTrap
struct MouseTrap_t604;
// System.Collections.Generic.IEnumerable`1<MouseTrap>
struct IEnumerable_1_t8948;
// MouseTrap[]
struct MouseTrapU5BU5D_t5754;
// System.Collections.Generic.IEnumerator`1<MouseTrap>
struct IEnumerator_1_t8949;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseTrap>
struct ICollection_1_t8950;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseTrap>
struct ReadOnlyCollection_1_t5756;
// System.Predicate`1<MouseTrap>
struct Predicate_1_t5757;
// System.Collections.Generic.IComparer`1<MouseTrap>
struct IComparer_1_t8951;
// System.Comparison`1<MouseTrap>
struct Comparison_1_t5759;
// System.Collections.Generic.List`1/Enumerator<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4294(__this, method) (( void (*) (List_1_t600 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27502(__this, ___collection, method) (( void (*) (List_1_t600 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Int32)
#define List_1__ctor_m27503(__this, ___capacity, method) (( void (*) (List_1_t600 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(T[],System.Int32)
#define List_1__ctor_m27504(__this, ___data, ___size, method) (( void (*) (List_1_t600 *, MouseTrapU5BU5D_t5754*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.cctor()
#define List_1__cctor_m27505(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27506(__this, method) (( Object_t* (*) (List_1_t600 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27507(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t600 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseTrap>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27508(__this, method) (( Object_t * (*) (List_1_t600 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27509(__this, ___item, method) (( int32_t (*) (List_1_t600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27510(__this, ___item, method) (( bool (*) (List_1_t600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27511(__this, ___item, method) (( int32_t (*) (List_1_t600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27512(__this, ___index, ___item, method) (( void (*) (List_1_t600 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27513(__this, ___item, method) (( void (*) (List_1_t600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27514(__this, method) (( bool (*) (List_1_t600 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27515(__this, method) (( bool (*) (List_1_t600 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27516(__this, method) (( Object_t * (*) (List_1_t600 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27517(__this, method) (( bool (*) (List_1_t600 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27518(__this, method) (( bool (*) (List_1_t600 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27519(__this, ___index, method) (( Object_t * (*) (List_1_t600 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27520(__this, ___index, ___value, method) (( void (*) (List_1_t600 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Add(T)
#define List_1_Add_m27521(__this, ___item, method) (( void (*) (List_1_t600 *, MouseTrap_t604 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27522(__this, ___newCount, method) (( void (*) (List_1_t600 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27523(__this, ___idx, ___count, method) (( void (*) (List_1_t600 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27524(__this, ___collection, method) (( void (*) (List_1_t600 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27525(__this, ___enumerable, method) (( void (*) (List_1_t600 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27526(__this, ___collection, method) (( void (*) (List_1_t600 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseTrap>::AsReadOnly()
#define List_1_AsReadOnly_m27527(__this, method) (( ReadOnlyCollection_1_t5756 * (*) (List_1_t600 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Clear()
#define List_1_Clear_m27528(__this, method) (( void (*) (List_1_t600 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Contains(T)
#define List_1_Contains_m27529(__this, ___item, method) (( bool (*) (List_1_t600 *, MouseTrap_t604 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27530(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t600 *, MouseTrapU5BU5D_t5754*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseTrap>::Find(System.Predicate`1<T>)
#define List_1_Find_m27531(__this, ___match, method) (( MouseTrap_t604 * (*) (List_1_t600 *, Predicate_1_t5757 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27532(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5757 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27533(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t600 *, int32_t, int32_t, Predicate_1_t5757 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseTrap>::GetEnumerator()
#define List_1_GetEnumerator_m27534(__this, method) (( Enumerator_t5758  (*) (List_1_t600 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseTrap>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27535(__this, ___index, ___count, method) (( List_1_t600 * (*) (List_1_t600 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::IndexOf(T)
#define List_1_IndexOf_m27536(__this, ___item, method) (( int32_t (*) (List_1_t600 *, MouseTrap_t604 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27537(__this, ___start, ___delta, method) (( void (*) (List_1_t600 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27538(__this, ___index, method) (( void (*) (List_1_t600 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Insert(System.Int32,T)
#define List_1_Insert_m27539(__this, ___index, ___item, method) (( void (*) (List_1_t600 *, int32_t, MouseTrap_t604 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27540(__this, ___collection, method) (( void (*) (List_1_t600 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27541(__this, ___index, ___collection, method) (( void (*) (List_1_t600 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27542(__this, ___index, ___collection, method) (( void (*) (List_1_t600 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27543(__this, ___index, ___enumerable, method) (( void (*) (List_1_t600 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Remove(T)
#define List_1_Remove_m27544(__this, ___item, method) (( bool (*) (List_1_t600 *, MouseTrap_t604 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27545(__this, ___match, method) (( int32_t (*) (List_1_t600 *, Predicate_1_t5757 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27546(__this, ___index, method) (( void (*) (List_1_t600 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27547(__this, ___index, ___count, method) (( void (*) (List_1_t600 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Reverse()
#define List_1_Reverse_m27548(__this, method) (( void (*) (List_1_t600 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort()
#define List_1_Sort_m27549(__this, method) (( void (*) (List_1_t600 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27550(__this, ___comparer, method) (( void (*) (List_1_t600 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27551(__this, ___comparison, method) (( void (*) (List_1_t600 *, Comparison_1_t5759 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseTrap>::ToArray()
#define List_1_ToArray_m27552(__this, method) (( MouseTrapU5BU5D_t5754* (*) (List_1_t600 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::TrimExcess()
#define List_1_TrimExcess_m27553(__this, method) (( void (*) (List_1_t600 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Capacity()
#define List_1_get_Capacity_m27554(__this, method) (( int32_t (*) (List_1_t600 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27555(__this, ___value, method) (( void (*) (List_1_t600 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count()
#define List_1_get_Count_m27556(__this, method) (( int32_t (*) (List_1_t600 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32)
#define List_1_get_Item_m27557(__this, ___index, method) (( MouseTrap_t604 * (*) (List_1_t600 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Item(System.Int32,T)
#define List_1_set_Item_m27558(__this, ___index, ___value, method) (( void (*) (List_1_t600 *, int32_t, MouseTrap_t604 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
