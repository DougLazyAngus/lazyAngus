#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t861;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t543;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t4541;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t4542;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t4543;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t3842;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t3840;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t3843;
// System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
struct IComparer_1_t4544;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t3845;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5488(__this, method) (( void (*) (List_1_t861 *, const MethodInfo*))List_1__ctor_m3108_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24996(__this, ___collection, method) (( void (*) (List_1_t861 *, Object_t*, const MethodInfo*))List_1__ctor_m17389_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m24997(__this, ___capacity, method) (( void (*) (List_1_t861 *, int32_t, const MethodInfo*))List_1__ctor_m17391_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m24998(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17393_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24999(__this, method) (( Object_t* (*) (List_1_t861 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7415_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25000(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t861 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7398_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25001(__this, method) (( Object_t * (*) (List_1_t861 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25002(__this, ___item, method) (( int32_t (*) (List_1_t861 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7403_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25003(__this, ___item, method) (( bool (*) (List_1_t861 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7405_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25004(__this, ___item, method) (( int32_t (*) (List_1_t861 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25005(__this, ___index, ___item, method) (( void (*) (List_1_t861 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7407_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25006(__this, ___item, method) (( void (*) (List_1_t861 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25007(__this, method) (( bool (*) (List_1_t861 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25008(__this, method) (( bool (*) (List_1_t861 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7396_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25009(__this, method) (( Object_t * (*) (List_1_t861 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25010(__this, method) (( bool (*) (List_1_t861 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25011(__this, method) (( bool (*) (List_1_t861 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7400_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25012(__this, ___index, method) (( Object_t * (*) (List_1_t861 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7401_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25013(__this, ___index, ___value, method) (( void (*) (List_1_t861 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7402_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m25014(__this, ___item, method) (( void (*) (List_1_t861 *, CanvasGroup_t543 *, const MethodInfo*))List_1_Add_m7411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25015(__this, ___newCount, method) (( void (*) (List_1_t861 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17411_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25016(__this, ___collection, method) (( void (*) (List_1_t861 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17413_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25017(__this, ___enumerable, method) (( void (*) (List_1_t861 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17415_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25018(__this, ___collection, method) (( void (*) (List_1_t861 *, Object_t*, const MethodInfo*))List_1_AddRange_m17417_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m25019(__this, method) (( ReadOnlyCollection_1_t3842 * (*) (List_1_t861 *, const MethodInfo*))List_1_AsReadOnly_m17419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m25020(__this, method) (( void (*) (List_1_t861 *, const MethodInfo*))List_1_Clear_m7404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m25021(__this, ___item, method) (( bool (*) (List_1_t861 *, CanvasGroup_t543 *, const MethodInfo*))List_1_Contains_m7412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25022(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t861 *, CanvasGroupU5BU5D_t3840*, int32_t, const MethodInfo*))List_1_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m25023(__this, ___match, method) (( CanvasGroup_t543 * (*) (List_1_t861 *, Predicate_1_t3843 *, const MethodInfo*))List_1_Find_m17424_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25024(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3843 *, const MethodInfo*))List_1_CheckMatch_m17426_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25025(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t861 *, int32_t, int32_t, Predicate_1_t3843 *, const MethodInfo*))List_1_GetIndex_m17428_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m25026(__this, method) (( Enumerator_t3844  (*) (List_1_t861 *, const MethodInfo*))List_1_GetEnumerator_m3266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m25027(__this, ___item, method) (( int32_t (*) (List_1_t861 *, CanvasGroup_t543 *, const MethodInfo*))List_1_IndexOf_m7416_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25028(__this, ___start, ___delta, method) (( void (*) (List_1_t861 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25029(__this, ___index, method) (( void (*) (List_1_t861 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m25030(__this, ___index, ___item, method) (( void (*) (List_1_t861 *, int32_t, CanvasGroup_t543 *, const MethodInfo*))List_1_Insert_m7417_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25031(__this, ___collection, method) (( void (*) (List_1_t861 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17436_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m25032(__this, ___item, method) (( bool (*) (List_1_t861 *, CanvasGroup_t543 *, const MethodInfo*))List_1_Remove_m7414_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25033(__this, ___match, method) (( int32_t (*) (List_1_t861 *, Predicate_1_t3843 *, const MethodInfo*))List_1_RemoveAll_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25034(__this, ___index, method) (( void (*) (List_1_t861 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m25035(__this, method) (( void (*) (List_1_t861 *, const MethodInfo*))List_1_Reverse_m17442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m25036(__this, method) (( void (*) (List_1_t861 *, const MethodInfo*))List_1_Sort_m17444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25037(__this, ___comparer, method) (( void (*) (List_1_t861 *, Object_t*, const MethodInfo*))List_1_Sort_m17446_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25038(__this, ___comparison, method) (( void (*) (List_1_t861 *, Comparison_1_t3845 *, const MethodInfo*))List_1_Sort_m17448_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m25039(__this, method) (( CanvasGroupU5BU5D_t3840* (*) (List_1_t861 *, const MethodInfo*))List_1_ToArray_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m25040(__this, method) (( void (*) (List_1_t861 *, const MethodInfo*))List_1_TrimExcess_m17452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m25041(__this, method) (( int32_t (*) (List_1_t861 *, const MethodInfo*))List_1_get_Capacity_m17454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25042(__this, ___value, method) (( void (*) (List_1_t861 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17456_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m25043(__this, method) (( int32_t (*) (List_1_t861 *, const MethodInfo*))List_1_get_Count_m7395_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m25044(__this, ___index, method) (( CanvasGroup_t543 * (*) (List_1_t861 *, int32_t, const MethodInfo*))List_1_get_Item_m7418_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m25045(__this, ___index, ___value, method) (( void (*) (List_1_t861 *, int32_t, CanvasGroup_t543 *, const MethodInfo*))List_1_set_Item_m7419_gshared)(__this, ___index, ___value, method)
