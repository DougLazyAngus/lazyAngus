#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t484;
// System.Object
struct Object_t;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t452;
// System.Collections.Generic.IEnumerable`1<ExplicitMouseDesc>
struct IEnumerable_1_t4429;
// System.Collections.Generic.IEnumerator`1<ExplicitMouseDesc>
struct IEnumerator_1_t4430;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<ExplicitMouseDesc>
struct ICollection_1_t4431;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ExplicitMouseDesc>
struct ReadOnlyCollection_1_t3667;
// ExplicitMouseDesc[]
struct ExplicitMouseDescU5BU5D_t3665;
// System.Predicate`1<ExplicitMouseDesc>
struct Predicate_1_t3668;
// System.Collections.Generic.IComparer`1<ExplicitMouseDesc>
struct IComparer_1_t4432;
// System.Comparison`1<ExplicitMouseDesc>
struct Comparison_1_t3670;
// System.Collections.Generic.List`1/Enumerator<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3624(__this, method) (( void (*) (List_1_t484 *, const MethodInfo*))List_1__ctor_m3119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m22301(__this, ___collection, method) (( void (*) (List_1_t484 *, Object_t*, const MethodInfo*))List_1__ctor_m17400_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Int32)
#define List_1__ctor_m22302(__this, ___capacity, method) (( void (*) (List_1_t484 *, int32_t, const MethodInfo*))List_1__ctor_m17402_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.cctor()
#define List_1__cctor_m22303(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17404_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22304(__this, method) (( Object_t* (*) (List_1_t484 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m22305(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t484 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22306(__this, method) (( Object_t * (*) (List_1_t484 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7405_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m22307(__this, ___item, method) (( int32_t (*) (List_1_t484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7414_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m22308(__this, ___item, method) (( bool (*) (List_1_t484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m22309(__this, ___item, method) (( int32_t (*) (List_1_t484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m22310(__this, ___index, ___item, method) (( void (*) (List_1_t484 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m22311(__this, ___item, method) (( void (*) (List_1_t484 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7419_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22312(__this, method) (( bool (*) (List_1_t484 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22313(__this, method) (( bool (*) (List_1_t484 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m22314(__this, method) (( Object_t * (*) (List_1_t484 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m22315(__this, method) (( bool (*) (List_1_t484 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m22316(__this, method) (( bool (*) (List_1_t484 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m22317(__this, ___index, method) (( Object_t * (*) (List_1_t484 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7412_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m22318(__this, ___index, ___value, method) (( void (*) (List_1_t484 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(T)
#define List_1_Add_m22319(__this, ___item, method) (( void (*) (List_1_t484 *, ExplicitMouseDesc_t452 *, const MethodInfo*))List_1_Add_m7422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m22320(__this, ___newCount, method) (( void (*) (List_1_t484 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17422_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m22321(__this, ___collection, method) (( void (*) (List_1_t484 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m22322(__this, ___enumerable, method) (( void (*) (List_1_t484 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17426_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3651(__this, ___collection, method) (( void (*) (List_1_t484 *, Object_t*, const MethodInfo*))List_1_AddRange_m17428_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::AsReadOnly()
#define List_1_AsReadOnly_m22323(__this, method) (( ReadOnlyCollection_1_t3667 * (*) (List_1_t484 *, const MethodInfo*))List_1_AsReadOnly_m17430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Clear()
#define List_1_Clear_m22324(__this, method) (( void (*) (List_1_t484 *, const MethodInfo*))List_1_Clear_m7415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Contains(T)
#define List_1_Contains_m22325(__this, ___item, method) (( bool (*) (List_1_t484 *, ExplicitMouseDesc_t452 *, const MethodInfo*))List_1_Contains_m7423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m22326(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t484 *, ExplicitMouseDescU5BU5D_t3665*, int32_t, const MethodInfo*))List_1_CopyTo_m7424_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m22327(__this, ___match, method) (( ExplicitMouseDesc_t452 * (*) (List_1_t484 *, Predicate_1_t3668 *, const MethodInfo*))List_1_Find_m17435_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m22328(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3668 *, const MethodInfo*))List_1_CheckMatch_m17437_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m22329(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t484 *, int32_t, int32_t, Predicate_1_t3668 *, const MethodInfo*))List_1_GetIndex_m17439_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::GetEnumerator()
#define List_1_GetEnumerator_m22330(__this, method) (( Enumerator_t3669  (*) (List_1_t484 *, const MethodInfo*))List_1_GetEnumerator_m3277_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::IndexOf(T)
#define List_1_IndexOf_m22331(__this, ___item, method) (( int32_t (*) (List_1_t484 *, ExplicitMouseDesc_t452 *, const MethodInfo*))List_1_IndexOf_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m22332(__this, ___start, ___delta, method) (( void (*) (List_1_t484 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17442_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m22333(__this, ___index, method) (( void (*) (List_1_t484 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17444_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Insert(System.Int32,T)
#define List_1_Insert_m22334(__this, ___index, ___item, method) (( void (*) (List_1_t484 *, int32_t, ExplicitMouseDesc_t452 *, const MethodInfo*))List_1_Insert_m7428_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m22335(__this, ___collection, method) (( void (*) (List_1_t484 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17447_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Remove(T)
#define List_1_Remove_m22336(__this, ___item, method) (( bool (*) (List_1_t484 *, ExplicitMouseDesc_t452 *, const MethodInfo*))List_1_Remove_m7425_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m22337(__this, ___match, method) (( int32_t (*) (List_1_t484 *, Predicate_1_t3668 *, const MethodInfo*))List_1_RemoveAll_m17450_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m22338(__this, ___index, method) (( void (*) (List_1_t484 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Reverse()
#define List_1_Reverse_m22339(__this, method) (( void (*) (List_1_t484 *, const MethodInfo*))List_1_Reverse_m17453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort()
#define List_1_Sort_m22340(__this, method) (( void (*) (List_1_t484 *, const MethodInfo*))List_1_Sort_m17455_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m22341(__this, ___comparer, method) (( void (*) (List_1_t484 *, Object_t*, const MethodInfo*))List_1_Sort_m17457_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m22342(__this, ___comparison, method) (( void (*) (List_1_t484 *, Comparison_1_t3670 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ExplicitMouseDesc>::ToArray()
#define List_1_ToArray_m22343(__this, method) (( ExplicitMouseDescU5BU5D_t3665* (*) (List_1_t484 *, const MethodInfo*))List_1_ToArray_m17461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::TrimExcess()
#define List_1_TrimExcess_m22344(__this, method) (( void (*) (List_1_t484 *, const MethodInfo*))List_1_TrimExcess_m17463_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Capacity()
#define List_1_get_Capacity_m22345(__this, method) (( int32_t (*) (List_1_t484 *, const MethodInfo*))List_1_get_Capacity_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m22346(__this, ___value, method) (( void (*) (List_1_t484 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17467_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count()
#define List_1_get_Count_m22347(__this, method) (( int32_t (*) (List_1_t484 *, const MethodInfo*))List_1_get_Count_m7406_gshared)(__this, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32)
#define List_1_get_Item_m22348(__this, ___index, method) (( ExplicitMouseDesc_t452 * (*) (List_1_t484 *, int32_t, const MethodInfo*))List_1_get_Item_m7429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m22349(__this, ___index, ___value, method) (( void (*) (List_1_t484 *, int32_t, ExplicitMouseDesc_t452 *, const MethodInfo*))List_1_set_Item_m7430_gshared)(__this, ___index, ___value, method)
