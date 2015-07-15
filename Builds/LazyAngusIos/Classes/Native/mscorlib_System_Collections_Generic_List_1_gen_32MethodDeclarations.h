#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t807;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t497;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t4437;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t4438;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t4439;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t3768;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t3766;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t3769;
// System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
struct IComparer_1_t4440;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t3771;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4906(__this, method) (( void (*) (List_1_t807 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23933(__this, ___collection, method) (( void (*) (List_1_t807 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m23934(__this, ___capacity, method) (( void (*) (List_1_t807 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m23935(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23936(__this, method) (( Object_t* (*) (List_1_t807 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23937(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t807 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23938(__this, method) (( Object_t * (*) (List_1_t807 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23939(__this, ___item, method) (( int32_t (*) (List_1_t807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23940(__this, ___item, method) (( bool (*) (List_1_t807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23941(__this, ___item, method) (( int32_t (*) (List_1_t807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23942(__this, ___index, ___item, method) (( void (*) (List_1_t807 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23943(__this, ___item, method) (( void (*) (List_1_t807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23944(__this, method) (( bool (*) (List_1_t807 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23945(__this, method) (( bool (*) (List_1_t807 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23946(__this, method) (( Object_t * (*) (List_1_t807 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23947(__this, method) (( bool (*) (List_1_t807 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23948(__this, method) (( bool (*) (List_1_t807 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23949(__this, ___index, method) (( Object_t * (*) (List_1_t807 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23950(__this, ___index, ___value, method) (( void (*) (List_1_t807 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m23951(__this, ___item, method) (( void (*) (List_1_t807 *, CanvasGroup_t497 *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23952(__this, ___newCount, method) (( void (*) (List_1_t807 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23953(__this, ___collection, method) (( void (*) (List_1_t807 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23954(__this, ___enumerable, method) (( void (*) (List_1_t807 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23955(__this, ___collection, method) (( void (*) (List_1_t807 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m23956(__this, method) (( ReadOnlyCollection_1_t3768 * (*) (List_1_t807 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m23957(__this, method) (( void (*) (List_1_t807 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m23958(__this, ___item, method) (( bool (*) (List_1_t807 *, CanvasGroup_t497 *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23959(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t807 *, CanvasGroupU5BU5D_t3766*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m23960(__this, ___match, method) (( CanvasGroup_t497 * (*) (List_1_t807 *, Predicate_1_t3769 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23961(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3769 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23962(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t807 *, int32_t, int32_t, Predicate_1_t3769 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m23963(__this, method) (( Enumerator_t3770  (*) (List_1_t807 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m23964(__this, ___item, method) (( int32_t (*) (List_1_t807 *, CanvasGroup_t497 *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23965(__this, ___start, ___delta, method) (( void (*) (List_1_t807 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23966(__this, ___index, method) (( void (*) (List_1_t807 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m23967(__this, ___index, ___item, method) (( void (*) (List_1_t807 *, int32_t, CanvasGroup_t497 *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23968(__this, ___collection, method) (( void (*) (List_1_t807 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m23969(__this, ___item, method) (( bool (*) (List_1_t807 *, CanvasGroup_t497 *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23970(__this, ___match, method) (( int32_t (*) (List_1_t807 *, Predicate_1_t3769 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23971(__this, ___index, method) (( void (*) (List_1_t807 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m23972(__this, method) (( void (*) (List_1_t807 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m23973(__this, method) (( void (*) (List_1_t807 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23974(__this, ___comparer, method) (( void (*) (List_1_t807 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23975(__this, ___comparison, method) (( void (*) (List_1_t807 *, Comparison_1_t3771 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m23976(__this, method) (( CanvasGroupU5BU5D_t3766* (*) (List_1_t807 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m23977(__this, method) (( void (*) (List_1_t807 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m23978(__this, method) (( int32_t (*) (List_1_t807 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23979(__this, ___value, method) (( void (*) (List_1_t807 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m23980(__this, method) (( int32_t (*) (List_1_t807 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m23981(__this, ___index, method) (( CanvasGroup_t497 * (*) (List_1_t807 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m23982(__this, ___index, ___value, method) (( void (*) (List_1_t807 *, int32_t, CanvasGroup_t497 *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)
