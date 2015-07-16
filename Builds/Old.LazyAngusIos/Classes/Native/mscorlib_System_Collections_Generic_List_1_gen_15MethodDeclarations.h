#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t444;
// System.Object
struct Object_t;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t414;
// System.Collections.Generic.IEnumerable`1<ExplicitMouseDesc>
struct IEnumerable_1_t4323;
// System.Collections.Generic.IEnumerator`1<ExplicitMouseDesc>
struct IEnumerator_1_t4324;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<ExplicitMouseDesc>
struct ICollection_1_t4325;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ExplicitMouseDesc>
struct ReadOnlyCollection_1_t3592;
// ExplicitMouseDesc[]
struct ExplicitMouseDescU5BU5D_t3590;
// System.Predicate`1<ExplicitMouseDesc>
struct Predicate_1_t3593;
// System.Collections.Generic.IComparer`1<ExplicitMouseDesc>
struct IComparer_1_t4326;
// System.Comparison`1<ExplicitMouseDesc>
struct Comparison_1_t3595;
// System.Collections.Generic.List`1/Enumerator<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3050(__this, method) (( void (*) (List_1_t444 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21232(__this, ___collection, method) (( void (*) (List_1_t444 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Int32)
#define List_1__ctor_m21233(__this, ___capacity, method) (( void (*) (List_1_t444 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.cctor()
#define List_1__cctor_m21234(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21235(__this, method) (( Object_t* (*) (List_1_t444 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21236(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t444 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21237(__this, method) (( Object_t * (*) (List_1_t444 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21238(__this, ___item, method) (( int32_t (*) (List_1_t444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21239(__this, ___item, method) (( bool (*) (List_1_t444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21240(__this, ___item, method) (( int32_t (*) (List_1_t444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21241(__this, ___index, ___item, method) (( void (*) (List_1_t444 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21242(__this, ___item, method) (( void (*) (List_1_t444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21243(__this, method) (( bool (*) (List_1_t444 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21244(__this, method) (( bool (*) (List_1_t444 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21245(__this, method) (( Object_t * (*) (List_1_t444 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21246(__this, method) (( bool (*) (List_1_t444 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21247(__this, method) (( bool (*) (List_1_t444 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21248(__this, ___index, method) (( Object_t * (*) (List_1_t444 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21249(__this, ___index, ___value, method) (( void (*) (List_1_t444 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(T)
#define List_1_Add_m21250(__this, ___item, method) (( void (*) (List_1_t444 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21251(__this, ___newCount, method) (( void (*) (List_1_t444 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21252(__this, ___collection, method) (( void (*) (List_1_t444 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21253(__this, ___enumerable, method) (( void (*) (List_1_t444 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3077(__this, ___collection, method) (( void (*) (List_1_t444 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::AsReadOnly()
#define List_1_AsReadOnly_m21254(__this, method) (( ReadOnlyCollection_1_t3592 * (*) (List_1_t444 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Clear()
#define List_1_Clear_m21255(__this, method) (( void (*) (List_1_t444 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Contains(T)
#define List_1_Contains_m21256(__this, ___item, method) (( bool (*) (List_1_t444 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21257(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t444 *, ExplicitMouseDescU5BU5D_t3590*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m21258(__this, ___match, method) (( ExplicitMouseDesc_t414 * (*) (List_1_t444 *, Predicate_1_t3593 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21259(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3593 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21260(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t444 *, int32_t, int32_t, Predicate_1_t3593 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::GetEnumerator()
#define List_1_GetEnumerator_m21261(__this, method) (( Enumerator_t3594  (*) (List_1_t444 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::IndexOf(T)
#define List_1_IndexOf_m21262(__this, ___item, method) (( int32_t (*) (List_1_t444 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21263(__this, ___start, ___delta, method) (( void (*) (List_1_t444 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21264(__this, ___index, method) (( void (*) (List_1_t444 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Insert(System.Int32,T)
#define List_1_Insert_m21265(__this, ___index, ___item, method) (( void (*) (List_1_t444 *, int32_t, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21266(__this, ___collection, method) (( void (*) (List_1_t444 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Remove(T)
#define List_1_Remove_m21267(__this, ___item, method) (( bool (*) (List_1_t444 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21268(__this, ___match, method) (( int32_t (*) (List_1_t444 *, Predicate_1_t3593 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21269(__this, ___index, method) (( void (*) (List_1_t444 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Reverse()
#define List_1_Reverse_m21270(__this, method) (( void (*) (List_1_t444 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort()
#define List_1_Sort_m21271(__this, method) (( void (*) (List_1_t444 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21272(__this, ___comparer, method) (( void (*) (List_1_t444 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21273(__this, ___comparison, method) (( void (*) (List_1_t444 *, Comparison_1_t3595 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ExplicitMouseDesc>::ToArray()
#define List_1_ToArray_m21274(__this, method) (( ExplicitMouseDescU5BU5D_t3590* (*) (List_1_t444 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::TrimExcess()
#define List_1_TrimExcess_m21275(__this, method) (( void (*) (List_1_t444 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Capacity()
#define List_1_get_Capacity_m21276(__this, method) (( int32_t (*) (List_1_t444 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21277(__this, ___value, method) (( void (*) (List_1_t444 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count()
#define List_1_get_Count_m21278(__this, method) (( int32_t (*) (List_1_t444 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32)
#define List_1_get_Item_m21279(__this, ___index, method) (( ExplicitMouseDesc_t414 * (*) (List_1_t444 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m21280(__this, ___index, ___value, method) (( void (*) (List_1_t444 *, int32_t, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)
