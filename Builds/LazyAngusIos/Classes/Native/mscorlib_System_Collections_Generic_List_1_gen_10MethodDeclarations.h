#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t540;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t221;
// System.Collections.Generic.IEnumerable`1<FBLikeInfo>
struct IEnumerable_1_t4278;
// System.Collections.Generic.IEnumerator`1<FBLikeInfo>
struct IEnumerator_1_t4269;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t4271;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBLikeInfo>
struct ReadOnlyCollection_1_t3501;
// FBLikeInfo[]
struct FBLikeInfoU5BU5D_t3491;
// System.Predicate`1<FBLikeInfo>
struct Predicate_1_t3502;
// System.Collections.Generic.IComparer`1<FBLikeInfo>
struct IComparer_1_t4279;
// System.Comparison`1<FBLikeInfo>
struct Comparison_1_t3504;
// System.Collections.Generic.List`1/Enumerator<FBLikeInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m2718(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19882(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Int32)
#define List_1__ctor_m19883(__this, ___capacity, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.cctor()
#define List_1__cctor_m19884(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19885(__this, method) (( Object_t* (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19886(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t540 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19887(__this, method) (( Object_t * (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19888(__this, ___item, method) (( int32_t (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19889(__this, ___item, method) (( bool (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19890(__this, ___item, method) (( int32_t (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19891(__this, ___index, ___item, method) (( void (*) (List_1_t540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19892(__this, ___item, method) (( void (*) (List_1_t540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19893(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19894(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19895(__this, method) (( Object_t * (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19896(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19897(__this, method) (( bool (*) (List_1_t540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19898(__this, ___index, method) (( Object_t * (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19899(__this, ___index, ___value, method) (( void (*) (List_1_t540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Add(T)
#define List_1_Add_m19900(__this, ___item, method) (( void (*) (List_1_t540 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19901(__this, ___newCount, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19902(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19903(__this, ___enumerable, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19904(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBLikeInfo>::AsReadOnly()
#define List_1_AsReadOnly_m19905(__this, method) (( ReadOnlyCollection_1_t3501 * (*) (List_1_t540 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Clear()
#define List_1_Clear_m19906(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Contains(T)
#define List_1_Contains_m19907(__this, ___item, method) (( bool (*) (List_1_t540 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19908(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t540 *, FBLikeInfoU5BU5D_t3491*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m19909(__this, ___match, method) (( FBLikeInfo_t221 * (*) (List_1_t540 *, Predicate_1_t3502 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19910(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3502 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19911(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t540 *, int32_t, int32_t, Predicate_1_t3502 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBLikeInfo>::GetEnumerator()
#define List_1_GetEnumerator_m19912(__this, method) (( Enumerator_t3503  (*) (List_1_t540 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::IndexOf(T)
#define List_1_IndexOf_m19913(__this, ___item, method) (( int32_t (*) (List_1_t540 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19914(__this, ___start, ___delta, method) (( void (*) (List_1_t540 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19915(__this, ___index, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Insert(System.Int32,T)
#define List_1_Insert_m19916(__this, ___index, ___item, method) (( void (*) (List_1_t540 *, int32_t, FBLikeInfo_t221 *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19917(__this, ___collection, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Remove(T)
#define List_1_Remove_m19918(__this, ___item, method) (( bool (*) (List_1_t540 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19919(__this, ___match, method) (( int32_t (*) (List_1_t540 *, Predicate_1_t3502 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19920(__this, ___index, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Reverse()
#define List_1_Reverse_m19921(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort()
#define List_1_Sort_m19922(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m19923(__this, ___comparer, method) (( void (*) (List_1_t540 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19924(__this, ___comparison, method) (( void (*) (List_1_t540 *, Comparison_1_t3504 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBLikeInfo>::ToArray()
#define List_1_ToArray_m19925(__this, method) (( FBLikeInfoU5BU5D_t3491* (*) (List_1_t540 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::TrimExcess()
#define List_1_TrimExcess_m19926(__this, method) (( void (*) (List_1_t540 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Capacity()
#define List_1_get_Capacity_m19927(__this, method) (( int32_t (*) (List_1_t540 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19928(__this, ___value, method) (( void (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Count()
#define List_1_get_Count_m19929(__this, method) (( int32_t (*) (List_1_t540 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::get_Item(System.Int32)
#define List_1_get_Item_m19930(__this, ___index, method) (( FBLikeInfo_t221 * (*) (List_1_t540 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m19931(__this, ___index, ___value, method) (( void (*) (List_1_t540 *, int32_t, FBLikeInfo_t221 *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)
