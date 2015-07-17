#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t481;
// System.Object
struct Object_t;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t450;
// System.Collections.Generic.IEnumerable`1<ExplicitMouseDesc>
struct IEnumerable_1_t4427;
// System.Collections.Generic.IEnumerator`1<ExplicitMouseDesc>
struct IEnumerator_1_t4428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<ExplicitMouseDesc>
struct ICollection_1_t4429;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ExplicitMouseDesc>
struct ReadOnlyCollection_1_t3665;
// ExplicitMouseDesc[]
struct ExplicitMouseDescU5BU5D_t3663;
// System.Predicate`1<ExplicitMouseDesc>
struct Predicate_1_t3666;
// System.Collections.Generic.IComparer`1<ExplicitMouseDesc>
struct IComparer_1_t4430;
// System.Comparison`1<ExplicitMouseDesc>
struct Comparison_1_t3668;
// System.Collections.Generic.List`1/Enumerator<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3613(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1__ctor_m3108_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m22290(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1__ctor_m17389_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Int32)
#define List_1__ctor_m22291(__this, ___capacity, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1__ctor_m17391_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.cctor()
#define List_1__cctor_m22292(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17393_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22293(__this, method) (( Object_t* (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7415_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m22294(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t481 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7398_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22295(__this, method) (( Object_t * (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m22296(__this, ___item, method) (( int32_t (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7403_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m22297(__this, ___item, method) (( bool (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7405_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m22298(__this, ___item, method) (( int32_t (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m22299(__this, ___index, ___item, method) (( void (*) (List_1_t481 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7407_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m22300(__this, ___item, method) (( void (*) (List_1_t481 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22301(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22302(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7396_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m22303(__this, method) (( Object_t * (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m22304(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m22305(__this, method) (( bool (*) (List_1_t481 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7400_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m22306(__this, ___index, method) (( Object_t * (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7401_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m22307(__this, ___index, ___value, method) (( void (*) (List_1_t481 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7402_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(T)
#define List_1_Add_m22308(__this, ___item, method) (( void (*) (List_1_t481 *, ExplicitMouseDesc_t450 *, const MethodInfo*))List_1_Add_m7411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m22309(__this, ___newCount, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17411_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m22310(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17413_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m22311(__this, ___enumerable, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17415_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3640(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_AddRange_m17417_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::AsReadOnly()
#define List_1_AsReadOnly_m22312(__this, method) (( ReadOnlyCollection_1_t3665 * (*) (List_1_t481 *, const MethodInfo*))List_1_AsReadOnly_m17419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Clear()
#define List_1_Clear_m22313(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_Clear_m7404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Contains(T)
#define List_1_Contains_m22314(__this, ___item, method) (( bool (*) (List_1_t481 *, ExplicitMouseDesc_t450 *, const MethodInfo*))List_1_Contains_m7412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m22315(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t481 *, ExplicitMouseDescU5BU5D_t3663*, int32_t, const MethodInfo*))List_1_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m22316(__this, ___match, method) (( ExplicitMouseDesc_t450 * (*) (List_1_t481 *, Predicate_1_t3666 *, const MethodInfo*))List_1_Find_m17424_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m22317(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3666 *, const MethodInfo*))List_1_CheckMatch_m17426_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m22318(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t481 *, int32_t, int32_t, Predicate_1_t3666 *, const MethodInfo*))List_1_GetIndex_m17428_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::GetEnumerator()
#define List_1_GetEnumerator_m22319(__this, method) (( Enumerator_t3667  (*) (List_1_t481 *, const MethodInfo*))List_1_GetEnumerator_m3266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::IndexOf(T)
#define List_1_IndexOf_m22320(__this, ___item, method) (( int32_t (*) (List_1_t481 *, ExplicitMouseDesc_t450 *, const MethodInfo*))List_1_IndexOf_m7416_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m22321(__this, ___start, ___delta, method) (( void (*) (List_1_t481 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m22322(__this, ___index, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Insert(System.Int32,T)
#define List_1_Insert_m22323(__this, ___index, ___item, method) (( void (*) (List_1_t481 *, int32_t, ExplicitMouseDesc_t450 *, const MethodInfo*))List_1_Insert_m7417_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m22324(__this, ___collection, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17436_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Remove(T)
#define List_1_Remove_m22325(__this, ___item, method) (( bool (*) (List_1_t481 *, ExplicitMouseDesc_t450 *, const MethodInfo*))List_1_Remove_m7414_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m22326(__this, ___match, method) (( int32_t (*) (List_1_t481 *, Predicate_1_t3666 *, const MethodInfo*))List_1_RemoveAll_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m22327(__this, ___index, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Reverse()
#define List_1_Reverse_m22328(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_Reverse_m17442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort()
#define List_1_Sort_m22329(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_Sort_m17444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m22330(__this, ___comparer, method) (( void (*) (List_1_t481 *, Object_t*, const MethodInfo*))List_1_Sort_m17446_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m22331(__this, ___comparison, method) (( void (*) (List_1_t481 *, Comparison_1_t3668 *, const MethodInfo*))List_1_Sort_m17448_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ExplicitMouseDesc>::ToArray()
#define List_1_ToArray_m22332(__this, method) (( ExplicitMouseDescU5BU5D_t3663* (*) (List_1_t481 *, const MethodInfo*))List_1_ToArray_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::TrimExcess()
#define List_1_TrimExcess_m22333(__this, method) (( void (*) (List_1_t481 *, const MethodInfo*))List_1_TrimExcess_m17452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Capacity()
#define List_1_get_Capacity_m22334(__this, method) (( int32_t (*) (List_1_t481 *, const MethodInfo*))List_1_get_Capacity_m17454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m22335(__this, ___value, method) (( void (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17456_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count()
#define List_1_get_Count_m22336(__this, method) (( int32_t (*) (List_1_t481 *, const MethodInfo*))List_1_get_Count_m7395_gshared)(__this, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32)
#define List_1_get_Item_m22337(__this, ___index, method) (( ExplicitMouseDesc_t450 * (*) (List_1_t481 *, int32_t, const MethodInfo*))List_1_get_Item_m7418_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m22338(__this, ___index, ___value, method) (( void (*) (List_1_t481 *, int32_t, ExplicitMouseDesc_t450 *, const MethodInfo*))List_1_set_Item_m7419_gshared)(__this, ___index, ___value, method)
