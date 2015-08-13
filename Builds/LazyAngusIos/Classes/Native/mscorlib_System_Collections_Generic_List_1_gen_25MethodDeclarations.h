#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t877;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t879;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t8959;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t5790;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t8960;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t8961;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t5792;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t5793;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseRaycaster>
struct IComparer_1_t8962;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t5795;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5805(__this, method) (( void (*) (List_1_t877 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28026(__this, ___collection, method) (( void (*) (List_1_t877 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m28027(__this, ___capacity, method) (( void (*) (List_1_t877 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(T[],System.Int32)
#define List_1__ctor_m28028(__this, ___data, ___size, method) (( void (*) (List_1_t877 *, BaseRaycasterU5BU5D_t5790*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m28029(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28030(__this, method) (( Object_t* (*) (List_1_t877 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28031(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t877 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28032(__this, method) (( Object_t * (*) (List_1_t877 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28033(__this, ___item, method) (( int32_t (*) (List_1_t877 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28034(__this, ___item, method) (( bool (*) (List_1_t877 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28035(__this, ___item, method) (( int32_t (*) (List_1_t877 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28036(__this, ___index, ___item, method) (( void (*) (List_1_t877 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28037(__this, ___item, method) (( void (*) (List_1_t877 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28038(__this, method) (( bool (*) (List_1_t877 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28039(__this, method) (( bool (*) (List_1_t877 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28040(__this, method) (( Object_t * (*) (List_1_t877 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28041(__this, method) (( bool (*) (List_1_t877 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28042(__this, method) (( bool (*) (List_1_t877 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28043(__this, ___index, method) (( Object_t * (*) (List_1_t877 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28044(__this, ___index, ___value, method) (( void (*) (List_1_t877 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m28045(__this, ___item, method) (( void (*) (List_1_t877 *, BaseRaycaster_t879 *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28046(__this, ___newCount, method) (( void (*) (List_1_t877 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28047(__this, ___idx, ___count, method) (( void (*) (List_1_t877 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28048(__this, ___collection, method) (( void (*) (List_1_t877 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28049(__this, ___enumerable, method) (( void (*) (List_1_t877 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28050(__this, ___collection, method) (( void (*) (List_1_t877 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m28051(__this, method) (( ReadOnlyCollection_1_t5792 * (*) (List_1_t877 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m28052(__this, method) (( void (*) (List_1_t877 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m28053(__this, ___item, method) (( bool (*) (List_1_t877 *, BaseRaycaster_t879 *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28054(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t877 *, BaseRaycasterU5BU5D_t5790*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m28055(__this, ___match, method) (( BaseRaycaster_t879 * (*) (List_1_t877 *, Predicate_1_t5793 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28056(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5793 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28057(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t877 *, int32_t, int32_t, Predicate_1_t5793 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#define List_1_GetEnumerator_m28058(__this, method) (( Enumerator_t5794  (*) (List_1_t877 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28059(__this, ___index, ___count, method) (( List_1_t877 * (*) (List_1_t877 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m28060(__this, ___item, method) (( int32_t (*) (List_1_t877 *, BaseRaycaster_t879 *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28061(__this, ___start, ___delta, method) (( void (*) (List_1_t877 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28062(__this, ___index, method) (( void (*) (List_1_t877 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m28063(__this, ___index, ___item, method) (( void (*) (List_1_t877 *, int32_t, BaseRaycaster_t879 *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28064(__this, ___collection, method) (( void (*) (List_1_t877 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28065(__this, ___index, ___collection, method) (( void (*) (List_1_t877 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28066(__this, ___index, ___collection, method) (( void (*) (List_1_t877 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28067(__this, ___index, ___enumerable, method) (( void (*) (List_1_t877 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m28068(__this, ___item, method) (( bool (*) (List_1_t877 *, BaseRaycaster_t879 *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28069(__this, ___match, method) (( int32_t (*) (List_1_t877 *, Predicate_1_t5793 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28070(__this, ___index, method) (( void (*) (List_1_t877 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28071(__this, ___index, ___count, method) (( void (*) (List_1_t877 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m28072(__this, method) (( void (*) (List_1_t877 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m28073(__this, method) (( void (*) (List_1_t877 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28074(__this, ___comparer, method) (( void (*) (List_1_t877 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28075(__this, ___comparison, method) (( void (*) (List_1_t877 *, Comparison_1_t5795 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m28076(__this, method) (( BaseRaycasterU5BU5D_t5790* (*) (List_1_t877 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m28077(__this, method) (( void (*) (List_1_t877 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m28078(__this, method) (( int32_t (*) (List_1_t877 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28079(__this, ___value, method) (( void (*) (List_1_t877 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m28080(__this, method) (( int32_t (*) (List_1_t877 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m28081(__this, ___index, method) (( BaseRaycaster_t879 * (*) (List_1_t877 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m28082(__this, ___index, ___value, method) (( void (*) (List_1_t877 *, int32_t, BaseRaycaster_t879 *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)
