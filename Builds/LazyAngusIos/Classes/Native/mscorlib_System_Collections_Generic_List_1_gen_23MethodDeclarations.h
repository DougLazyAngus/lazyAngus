#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t740;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t739;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t4468;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t4469;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t4470;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t3739;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t3737;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t3740;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IComparer_1_t4471;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t3742;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5146(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1__ctor_m3108_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23344(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1__ctor_m17389_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m23345(__this, ___capacity, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1__ctor_m17391_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m23346(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17393_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23347(__this, method) (( Object_t* (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7415_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23348(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7398_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23349(__this, method) (( Object_t * (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23350(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7403_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23351(__this, ___item, method) (( bool (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7405_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23352(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23353(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7407_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23354(__this, ___item, method) (( void (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23355(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23356(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7396_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23357(__this, method) (( Object_t * (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23358(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23359(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7400_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23360(__this, ___index, method) (( Object_t * (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7401_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23361(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7402_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m23362(__this, ___item, method) (( void (*) (List_1_t740 *, Entry_t739 *, const MethodInfo*))List_1_Add_m7411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23363(__this, ___newCount, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17411_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23364(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17413_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23365(__this, ___enumerable, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17415_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23366(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddRange_m17417_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m23367(__this, method) (( ReadOnlyCollection_1_t3739 * (*) (List_1_t740 *, const MethodInfo*))List_1_AsReadOnly_m17419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m23368(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Clear_m7404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m23369(__this, ___item, method) (( bool (*) (List_1_t740 *, Entry_t739 *, const MethodInfo*))List_1_Contains_m7412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23370(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, EntryU5BU5D_t3737*, int32_t, const MethodInfo*))List_1_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m23371(__this, ___match, method) (( Entry_t739 * (*) (List_1_t740 *, Predicate_1_t3740 *, const MethodInfo*))List_1_Find_m17424_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23372(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3740 *, const MethodInfo*))List_1_CheckMatch_m17426_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23373(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t740 *, int32_t, int32_t, Predicate_1_t3740 *, const MethodInfo*))List_1_GetIndex_m17428_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m23374(__this, method) (( Enumerator_t3741  (*) (List_1_t740 *, const MethodInfo*))List_1_GetEnumerator_m3266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m23375(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Entry_t739 *, const MethodInfo*))List_1_IndexOf_m7416_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23376(__this, ___start, ___delta, method) (( void (*) (List_1_t740 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23377(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m23378(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, Entry_t739 *, const MethodInfo*))List_1_Insert_m7417_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23379(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17436_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m23380(__this, ___item, method) (( bool (*) (List_1_t740 *, Entry_t739 *, const MethodInfo*))List_1_Remove_m7414_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23381(__this, ___match, method) (( int32_t (*) (List_1_t740 *, Predicate_1_t3740 *, const MethodInfo*))List_1_RemoveAll_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23382(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m23383(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Reverse_m17442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m23384(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Sort_m17444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23385(__this, ___comparer, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_Sort_m17446_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23386(__this, ___comparison, method) (( void (*) (List_1_t740 *, Comparison_1_t3742 *, const MethodInfo*))List_1_Sort_m17448_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m23387(__this, method) (( EntryU5BU5D_t3737* (*) (List_1_t740 *, const MethodInfo*))List_1_ToArray_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m23388(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_TrimExcess_m17452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m23389(__this, method) (( int32_t (*) (List_1_t740 *, const MethodInfo*))List_1_get_Capacity_m17454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23390(__this, ___value, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17456_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m23391(__this, method) (( int32_t (*) (List_1_t740 *, const MethodInfo*))List_1_get_Count_m7395_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m23392(__this, ___index, method) (( Entry_t739 * (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_get_Item_m7418_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m23393(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, Entry_t739 *, const MethodInfo*))List_1_set_Item_m7419_gshared)(__this, ___index, ___value, method)
