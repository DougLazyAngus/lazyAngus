#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t806;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t496;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t4435;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t4436;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t4437;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t3766;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t3764;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t3767;
// System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
struct IComparer_1_t4438;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t3769;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4881(__this, method) (( void (*) (List_1_t806 *, const MethodInfo*))List_1__ctor_m2584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23908(__this, ___collection, method) (( void (*) (List_1_t806 *, Object_t*, const MethodInfo*))List_1__ctor_m16791_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m23909(__this, ___capacity, method) (( void (*) (List_1_t806 *, int32_t, const MethodInfo*))List_1__ctor_m16793_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m23910(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16795_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23911(__this, method) (( Object_t* (*) (List_1_t806 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23912(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t806 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6796_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23913(__this, method) (( Object_t * (*) (List_1_t806 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6792_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23914(__this, ___item, method) (( int32_t (*) (List_1_t806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6801_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23915(__this, ___item, method) (( bool (*) (List_1_t806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6803_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23916(__this, ___item, method) (( int32_t (*) (List_1_t806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23917(__this, ___index, ___item, method) (( void (*) (List_1_t806 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6805_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23918(__this, ___item, method) (( void (*) (List_1_t806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6806_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23919(__this, method) (( bool (*) (List_1_t806 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23920(__this, method) (( bool (*) (List_1_t806 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6794_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23921(__this, method) (( Object_t * (*) (List_1_t806 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23922(__this, method) (( bool (*) (List_1_t806 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23923(__this, method) (( bool (*) (List_1_t806 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6798_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23924(__this, ___index, method) (( Object_t * (*) (List_1_t806 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6799_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23925(__this, ___index, ___value, method) (( void (*) (List_1_t806 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6800_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m23926(__this, ___item, method) (( void (*) (List_1_t806 *, CanvasGroup_t496 *, const MethodInfo*))List_1_Add_m6809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23927(__this, ___newCount, method) (( void (*) (List_1_t806 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16813_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23928(__this, ___collection, method) (( void (*) (List_1_t806 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16815_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23929(__this, ___enumerable, method) (( void (*) (List_1_t806 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16817_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23930(__this, ___collection, method) (( void (*) (List_1_t806 *, Object_t*, const MethodInfo*))List_1_AddRange_m16819_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m23931(__this, method) (( ReadOnlyCollection_1_t3766 * (*) (List_1_t806 *, const MethodInfo*))List_1_AsReadOnly_m16821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m23932(__this, method) (( void (*) (List_1_t806 *, const MethodInfo*))List_1_Clear_m6802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m23933(__this, ___item, method) (( bool (*) (List_1_t806 *, CanvasGroup_t496 *, const MethodInfo*))List_1_Contains_m6810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23934(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t806 *, CanvasGroupU5BU5D_t3764*, int32_t, const MethodInfo*))List_1_CopyTo_m6811_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m23935(__this, ___match, method) (( CanvasGroup_t496 * (*) (List_1_t806 *, Predicate_1_t3767 *, const MethodInfo*))List_1_Find_m16826_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23936(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3767 *, const MethodInfo*))List_1_CheckMatch_m16828_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23937(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t806 *, int32_t, int32_t, Predicate_1_t3767 *, const MethodInfo*))List_1_GetIndex_m16830_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m23938(__this, method) (( Enumerator_t3768  (*) (List_1_t806 *, const MethodInfo*))List_1_GetEnumerator_m2687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m23939(__this, ___item, method) (( int32_t (*) (List_1_t806 *, CanvasGroup_t496 *, const MethodInfo*))List_1_IndexOf_m6814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23940(__this, ___start, ___delta, method) (( void (*) (List_1_t806 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16833_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23941(__this, ___index, method) (( void (*) (List_1_t806 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16835_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m23942(__this, ___index, ___item, method) (( void (*) (List_1_t806 *, int32_t, CanvasGroup_t496 *, const MethodInfo*))List_1_Insert_m6815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23943(__this, ___collection, method) (( void (*) (List_1_t806 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16838_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m23944(__this, ___item, method) (( bool (*) (List_1_t806 *, CanvasGroup_t496 *, const MethodInfo*))List_1_Remove_m6812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23945(__this, ___match, method) (( int32_t (*) (List_1_t806 *, Predicate_1_t3767 *, const MethodInfo*))List_1_RemoveAll_m16841_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23946(__this, ___index, method) (( void (*) (List_1_t806 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6807_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m23947(__this, method) (( void (*) (List_1_t806 *, const MethodInfo*))List_1_Reverse_m16844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m23948(__this, method) (( void (*) (List_1_t806 *, const MethodInfo*))List_1_Sort_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23949(__this, ___comparer, method) (( void (*) (List_1_t806 *, Object_t*, const MethodInfo*))List_1_Sort_m16848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23950(__this, ___comparison, method) (( void (*) (List_1_t806 *, Comparison_1_t3769 *, const MethodInfo*))List_1_Sort_m16850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m23951(__this, method) (( CanvasGroupU5BU5D_t3764* (*) (List_1_t806 *, const MethodInfo*))List_1_ToArray_m16852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m23952(__this, method) (( void (*) (List_1_t806 *, const MethodInfo*))List_1_TrimExcess_m16854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m23953(__this, method) (( int32_t (*) (List_1_t806 *, const MethodInfo*))List_1_get_Capacity_m16856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23954(__this, ___value, method) (( void (*) (List_1_t806 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16858_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m23955(__this, method) (( int32_t (*) (List_1_t806 *, const MethodInfo*))List_1_get_Count_m6793_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m23956(__this, ___index, method) (( CanvasGroup_t496 * (*) (List_1_t806 *, int32_t, const MethodInfo*))List_1_get_Item_m6816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m23957(__this, ___index, ___value, method) (( void (*) (List_1_t806 *, int32_t, CanvasGroup_t496 *, const MethodInfo*))List_1_set_Item_m6817_gshared)(__this, ___index, ___value, method)
