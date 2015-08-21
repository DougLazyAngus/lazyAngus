#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t875;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t877;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t8967;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t5794;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t8968;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t8969;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t5796;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t5797;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseRaycaster>
struct IComparer_1_t8970;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t5799;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5794(__this, method) (( void (*) (List_1_t875 *, const MethodInfo*))List_1__ctor_m3699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28115(__this, ___collection, method) (( void (*) (List_1_t875 *, Object_t*, const MethodInfo*))List_1__ctor_m7459_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m28116(__this, ___capacity, method) (( void (*) (List_1_t875 *, int32_t, const MethodInfo*))List_1__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(T[],System.Int32)
#define List_1__ctor_m28117(__this, ___data, ___size, method) (( void (*) (List_1_t875 *, BaseRaycasterU5BU5D_t5794*, int32_t, const MethodInfo*))List_1__ctor_m21559_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m28118(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21561_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28119(__this, method) (( Object_t* (*) (List_1_t875 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28120(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t875 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28121(__this, method) (( Object_t * (*) (List_1_t875 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28122(__this, ___item, method) (( int32_t (*) (List_1_t875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28123(__this, ___item, method) (( bool (*) (List_1_t875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10342_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28124(__this, ___item, method) (( int32_t (*) (List_1_t875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10343_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28125(__this, ___index, ___item, method) (( void (*) (List_1_t875 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10344_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28126(__this, ___item, method) (( void (*) (List_1_t875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10345_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28127(__this, method) (( bool (*) (List_1_t875 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28128(__this, method) (( bool (*) (List_1_t875 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10333_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28129(__this, method) (( Object_t * (*) (List_1_t875 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28130(__this, method) (( bool (*) (List_1_t875 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28131(__this, method) (( bool (*) (List_1_t875 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10337_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28132(__this, ___index, method) (( Object_t * (*) (List_1_t875 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28133(__this, ___index, ___value, method) (( void (*) (List_1_t875 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10339_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m28134(__this, ___item, method) (( void (*) (List_1_t875 *, BaseRaycaster_t877 *, const MethodInfo*))List_1_Add_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28135(__this, ___newCount, method) (( void (*) (List_1_t875 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21579_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28136(__this, ___idx, ___count, method) (( void (*) (List_1_t875 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21581_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28137(__this, ___collection, method) (( void (*) (List_1_t875 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21583_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28138(__this, ___enumerable, method) (( void (*) (List_1_t875 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21585_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28139(__this, ___collection, method) (( void (*) (List_1_t875 *, Object_t*, const MethodInfo*))List_1_AddRange_m21587_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m28140(__this, method) (( ReadOnlyCollection_1_t5796 * (*) (List_1_t875 *, const MethodInfo*))List_1_AsReadOnly_m21589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m28141(__this, method) (( void (*) (List_1_t875 *, const MethodInfo*))List_1_Clear_m10341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m28142(__this, ___item, method) (( bool (*) (List_1_t875 *, BaseRaycaster_t877 *, const MethodInfo*))List_1_Contains_m10349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28143(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t875 *, BaseRaycasterU5BU5D_t5794*, int32_t, const MethodInfo*))List_1_CopyTo_m10350_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m28144(__this, ___match, method) (( BaseRaycaster_t877 * (*) (List_1_t875 *, Predicate_1_t5797 *, const MethodInfo*))List_1_Find_m21594_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28145(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5797 *, const MethodInfo*))List_1_CheckMatch_m21596_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28146(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t875 *, int32_t, int32_t, Predicate_1_t5797 *, const MethodInfo*))List_1_GetIndex_m21598_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#define List_1_GetEnumerator_m28147(__this, method) (( Enumerator_t5798  (*) (List_1_t875 *, const MethodInfo*))List_1_GetEnumerator_m3855_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28148(__this, ___index, ___count, method) (( List_1_t875 * (*) (List_1_t875 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21600_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m28149(__this, ___item, method) (( int32_t (*) (List_1_t875 *, BaseRaycaster_t877 *, const MethodInfo*))List_1_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28150(__this, ___start, ___delta, method) (( void (*) (List_1_t875 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28151(__this, ___index, method) (( void (*) (List_1_t875 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21605_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m28152(__this, ___index, ___item, method) (( void (*) (List_1_t875 *, int32_t, BaseRaycaster_t877 *, const MethodInfo*))List_1_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28153(__this, ___collection, method) (( void (*) (List_1_t875 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21608_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28154(__this, ___index, ___collection, method) (( void (*) (List_1_t875 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28155(__this, ___index, ___collection, method) (( void (*) (List_1_t875 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21612_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28156(__this, ___index, ___enumerable, method) (( void (*) (List_1_t875 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21614_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m28157(__this, ___item, method) (( bool (*) (List_1_t875 *, BaseRaycaster_t877 *, const MethodInfo*))List_1_Remove_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28158(__this, ___match, method) (( int32_t (*) (List_1_t875 *, Predicate_1_t5797 *, const MethodInfo*))List_1_RemoveAll_m21617_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28159(__this, ___index, method) (( void (*) (List_1_t875 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28160(__this, ___index, ___count, method) (( void (*) (List_1_t875 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21620_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m28161(__this, method) (( void (*) (List_1_t875 *, const MethodInfo*))List_1_Reverse_m21622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m28162(__this, method) (( void (*) (List_1_t875 *, const MethodInfo*))List_1_Sort_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28163(__this, ___comparer, method) (( void (*) (List_1_t875 *, Object_t*, const MethodInfo*))List_1_Sort_m21626_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28164(__this, ___comparison, method) (( void (*) (List_1_t875 *, Comparison_1_t5799 *, const MethodInfo*))List_1_Sort_m21628_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m28165(__this, method) (( BaseRaycasterU5BU5D_t5794* (*) (List_1_t875 *, const MethodInfo*))List_1_ToArray_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m28166(__this, method) (( void (*) (List_1_t875 *, const MethodInfo*))List_1_TrimExcess_m21632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m28167(__this, method) (( int32_t (*) (List_1_t875 *, const MethodInfo*))List_1_get_Capacity_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28168(__this, ___value, method) (( void (*) (List_1_t875 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21636_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m28169(__this, method) (( int32_t (*) (List_1_t875 *, const MethodInfo*))List_1_get_Count_m10332_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m28170(__this, ___index, method) (( BaseRaycaster_t877 * (*) (List_1_t875 *, int32_t, const MethodInfo*))List_1_get_Item_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m28171(__this, ___index, ___value, method) (( void (*) (List_1_t875 *, int32_t, BaseRaycaster_t877 *, const MethodInfo*))List_1_set_Item_m10356_gshared)(__this, ___index, ___value, method)
