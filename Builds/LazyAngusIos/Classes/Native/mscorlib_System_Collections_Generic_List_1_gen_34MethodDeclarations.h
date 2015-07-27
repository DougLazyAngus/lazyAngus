#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t863;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t546;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t4543;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t4544;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t4545;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t3844;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t3842;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t3845;
// System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
struct IComparer_1_t4546;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t3847;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5503(__this, method) (( void (*) (List_1_t863 *, const MethodInfo*))List_1__ctor_m3123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25011(__this, ___collection, method) (( void (*) (List_1_t863 *, Object_t*, const MethodInfo*))List_1__ctor_m17404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m25012(__this, ___capacity, method) (( void (*) (List_1_t863 *, int32_t, const MethodInfo*))List_1__ctor_m17406_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m25013(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17408_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25014(__this, method) (( Object_t* (*) (List_1_t863 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25015(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t863 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25016(__this, method) (( Object_t * (*) (List_1_t863 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25017(__this, ___item, method) (( int32_t (*) (List_1_t863 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25018(__this, ___item, method) (( bool (*) (List_1_t863 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25019(__this, ___item, method) (( int32_t (*) (List_1_t863 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25020(__this, ___index, ___item, method) (( void (*) (List_1_t863 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25021(__this, ___item, method) (( void (*) (List_1_t863 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25022(__this, method) (( bool (*) (List_1_t863 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25023(__this, method) (( bool (*) (List_1_t863 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25024(__this, method) (( Object_t * (*) (List_1_t863 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25025(__this, method) (( bool (*) (List_1_t863 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25026(__this, method) (( bool (*) (List_1_t863 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7415_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25027(__this, ___index, method) (( Object_t * (*) (List_1_t863 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25028(__this, ___index, ___value, method) (( void (*) (List_1_t863 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7417_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m25029(__this, ___item, method) (( void (*) (List_1_t863 *, CanvasGroup_t546 *, const MethodInfo*))List_1_Add_m7426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25030(__this, ___newCount, method) (( void (*) (List_1_t863 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17426_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25031(__this, ___collection, method) (( void (*) (List_1_t863 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25032(__this, ___enumerable, method) (( void (*) (List_1_t863 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17430_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25033(__this, ___collection, method) (( void (*) (List_1_t863 *, Object_t*, const MethodInfo*))List_1_AddRange_m17432_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m25034(__this, method) (( ReadOnlyCollection_1_t3844 * (*) (List_1_t863 *, const MethodInfo*))List_1_AsReadOnly_m17434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m25035(__this, method) (( void (*) (List_1_t863 *, const MethodInfo*))List_1_Clear_m7419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m25036(__this, ___item, method) (( bool (*) (List_1_t863 *, CanvasGroup_t546 *, const MethodInfo*))List_1_Contains_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25037(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t863 *, CanvasGroupU5BU5D_t3842*, int32_t, const MethodInfo*))List_1_CopyTo_m7428_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m25038(__this, ___match, method) (( CanvasGroup_t546 * (*) (List_1_t863 *, Predicate_1_t3845 *, const MethodInfo*))List_1_Find_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25039(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3845 *, const MethodInfo*))List_1_CheckMatch_m17441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25040(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t863 *, int32_t, int32_t, Predicate_1_t3845 *, const MethodInfo*))List_1_GetIndex_m17443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m25041(__this, method) (( Enumerator_t3846  (*) (List_1_t863 *, const MethodInfo*))List_1_GetEnumerator_m3281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m25042(__this, ___item, method) (( int32_t (*) (List_1_t863 *, CanvasGroup_t546 *, const MethodInfo*))List_1_IndexOf_m7431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25043(__this, ___start, ___delta, method) (( void (*) (List_1_t863 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25044(__this, ___index, method) (( void (*) (List_1_t863 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m25045(__this, ___index, ___item, method) (( void (*) (List_1_t863 *, int32_t, CanvasGroup_t546 *, const MethodInfo*))List_1_Insert_m7432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25046(__this, ___collection, method) (( void (*) (List_1_t863 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17451_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m25047(__this, ___item, method) (( bool (*) (List_1_t863 *, CanvasGroup_t546 *, const MethodInfo*))List_1_Remove_m7429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25048(__this, ___match, method) (( int32_t (*) (List_1_t863 *, Predicate_1_t3845 *, const MethodInfo*))List_1_RemoveAll_m17454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25049(__this, ___index, method) (( void (*) (List_1_t863 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m25050(__this, method) (( void (*) (List_1_t863 *, const MethodInfo*))List_1_Reverse_m17457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m25051(__this, method) (( void (*) (List_1_t863 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25052(__this, ___comparer, method) (( void (*) (List_1_t863 *, Object_t*, const MethodInfo*))List_1_Sort_m17461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25053(__this, ___comparison, method) (( void (*) (List_1_t863 *, Comparison_1_t3847 *, const MethodInfo*))List_1_Sort_m17463_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m25054(__this, method) (( CanvasGroupU5BU5D_t3842* (*) (List_1_t863 *, const MethodInfo*))List_1_ToArray_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m25055(__this, method) (( void (*) (List_1_t863 *, const MethodInfo*))List_1_TrimExcess_m17467_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m25056(__this, method) (( int32_t (*) (List_1_t863 *, const MethodInfo*))List_1_get_Capacity_m17469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25057(__this, ___value, method) (( void (*) (List_1_t863 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m25058(__this, method) (( int32_t (*) (List_1_t863 *, const MethodInfo*))List_1_get_Count_m7410_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m25059(__this, ___index, method) (( CanvasGroup_t546 * (*) (List_1_t863 *, int32_t, const MethodInfo*))List_1_get_Item_m7433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m25060(__this, ___index, ___value, method) (( void (*) (List_1_t863 *, int32_t, CanvasGroup_t546 *, const MethodInfo*))List_1_set_Item_m7434_gshared)(__this, ___index, ___value, method)
