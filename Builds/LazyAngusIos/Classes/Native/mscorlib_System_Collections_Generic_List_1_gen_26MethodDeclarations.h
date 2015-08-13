#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t852;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t851;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t8963;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t5796;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t8964;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t8965;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t5798;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t5799;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IComparer_1_t8966;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t5801;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5780(__this, method) (( void (*) (List_1_t852 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28128(__this, ___collection, method) (( void (*) (List_1_t852 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m28129(__this, ___capacity, method) (( void (*) (List_1_t852 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(T[],System.Int32)
#define List_1__ctor_m28130(__this, ___data, ___size, method) (( void (*) (List_1_t852 *, EntryU5BU5D_t5796*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m28131(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28132(__this, method) (( Object_t* (*) (List_1_t852 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28133(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t852 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28134(__this, method) (( Object_t * (*) (List_1_t852 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28135(__this, ___item, method) (( int32_t (*) (List_1_t852 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28136(__this, ___item, method) (( bool (*) (List_1_t852 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28137(__this, ___item, method) (( int32_t (*) (List_1_t852 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28138(__this, ___index, ___item, method) (( void (*) (List_1_t852 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28139(__this, ___item, method) (( void (*) (List_1_t852 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28140(__this, method) (( bool (*) (List_1_t852 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28141(__this, method) (( bool (*) (List_1_t852 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28142(__this, method) (( Object_t * (*) (List_1_t852 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28143(__this, method) (( bool (*) (List_1_t852 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28144(__this, method) (( bool (*) (List_1_t852 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28145(__this, ___index, method) (( Object_t * (*) (List_1_t852 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28146(__this, ___index, ___value, method) (( void (*) (List_1_t852 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m28147(__this, ___item, method) (( void (*) (List_1_t852 *, Entry_t851 *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28148(__this, ___newCount, method) (( void (*) (List_1_t852 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28149(__this, ___idx, ___count, method) (( void (*) (List_1_t852 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28150(__this, ___collection, method) (( void (*) (List_1_t852 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28151(__this, ___enumerable, method) (( void (*) (List_1_t852 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28152(__this, ___collection, method) (( void (*) (List_1_t852 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m28153(__this, method) (( ReadOnlyCollection_1_t5798 * (*) (List_1_t852 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m28154(__this, method) (( void (*) (List_1_t852 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m28155(__this, ___item, method) (( bool (*) (List_1_t852 *, Entry_t851 *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28156(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t852 *, EntryU5BU5D_t5796*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m28157(__this, ___match, method) (( Entry_t851 * (*) (List_1_t852 *, Predicate_1_t5799 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28158(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5799 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28159(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t852 *, int32_t, int32_t, Predicate_1_t5799 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m28160(__this, method) (( Enumerator_t5800  (*) (List_1_t852 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28161(__this, ___index, ___count, method) (( List_1_t852 * (*) (List_1_t852 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m28162(__this, ___item, method) (( int32_t (*) (List_1_t852 *, Entry_t851 *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28163(__this, ___start, ___delta, method) (( void (*) (List_1_t852 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28164(__this, ___index, method) (( void (*) (List_1_t852 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m28165(__this, ___index, ___item, method) (( void (*) (List_1_t852 *, int32_t, Entry_t851 *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28166(__this, ___collection, method) (( void (*) (List_1_t852 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28167(__this, ___index, ___collection, method) (( void (*) (List_1_t852 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28168(__this, ___index, ___collection, method) (( void (*) (List_1_t852 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28169(__this, ___index, ___enumerable, method) (( void (*) (List_1_t852 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m28170(__this, ___item, method) (( bool (*) (List_1_t852 *, Entry_t851 *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28171(__this, ___match, method) (( int32_t (*) (List_1_t852 *, Predicate_1_t5799 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28172(__this, ___index, method) (( void (*) (List_1_t852 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28173(__this, ___index, ___count, method) (( void (*) (List_1_t852 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m28174(__this, method) (( void (*) (List_1_t852 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m28175(__this, method) (( void (*) (List_1_t852 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28176(__this, ___comparer, method) (( void (*) (List_1_t852 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28177(__this, ___comparison, method) (( void (*) (List_1_t852 *, Comparison_1_t5801 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m28178(__this, method) (( EntryU5BU5D_t5796* (*) (List_1_t852 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m28179(__this, method) (( void (*) (List_1_t852 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m28180(__this, method) (( int32_t (*) (List_1_t852 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28181(__this, ___value, method) (( void (*) (List_1_t852 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m28182(__this, method) (( int32_t (*) (List_1_t852 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m28183(__this, ___index, method) (( Entry_t851 * (*) (List_1_t852 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m28184(__this, ___index, ___value, method) (( void (*) (List_1_t852 *, int32_t, Entry_t851 *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)
