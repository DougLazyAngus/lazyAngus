#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t588;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t247;
// System.Collections.Generic.IEnumerable`1<FBLikeInfo>
struct IEnumerable_1_t4383;
// System.Collections.Generic.IEnumerator`1<FBLikeInfo>
struct IEnumerator_1_t4374;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t4376;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBLikeInfo>
struct ReadOnlyCollection_1_t3575;
// FBLikeInfo[]
struct FBLikeInfoU5BU5D_t3565;
// System.Predicate`1<FBLikeInfo>
struct Predicate_1_t3576;
// System.Collections.Generic.IComparer`1<FBLikeInfo>
struct IComparer_1_t4384;
// System.Comparison`1<FBLikeInfo>
struct Comparison_1_t3578;
// System.Collections.Generic.List`1/Enumerator<FBLikeInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3280(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1__ctor_m3116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20948(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1__ctor_m17397_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Int32)
#define List_1__ctor_m20949(__this, ___capacity, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1__ctor_m17399_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.cctor()
#define List_1__cctor_m20950(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17401_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20951(__this, method) (( Object_t* (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20952(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t588 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7406_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20953(__this, method) (( Object_t * (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7402_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20954(__this, ___item, method) (( int32_t (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7411_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20955(__this, ___item, method) (( bool (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7413_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20956(__this, ___item, method) (( int32_t (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20957(__this, ___index, ___item, method) (( void (*) (List_1_t588 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7415_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20958(__this, ___item, method) (( void (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7416_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20959(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20960(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7404_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20961(__this, method) (( Object_t * (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20962(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20963(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7408_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20964(__this, ___index, method) (( Object_t * (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20965(__this, ___index, ___value, method) (( void (*) (List_1_t588 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7410_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Add(T)
#define List_1_Add_m20966(__this, ___item, method) (( void (*) (List_1_t588 *, FBLikeInfo_t247 *, const MethodInfo*))List_1_Add_m7419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20967(__this, ___newCount, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17419_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20968(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17421_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20969(__this, ___enumerable, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17423_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20970(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_AddRange_m17425_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBLikeInfo>::AsReadOnly()
#define List_1_AsReadOnly_m20971(__this, method) (( ReadOnlyCollection_1_t3575 * (*) (List_1_t588 *, const MethodInfo*))List_1_AsReadOnly_m17427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Clear()
#define List_1_Clear_m20972(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_Clear_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Contains(T)
#define List_1_Contains_m20973(__this, ___item, method) (( bool (*) (List_1_t588 *, FBLikeInfo_t247 *, const MethodInfo*))List_1_Contains_m7420_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20974(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t588 *, FBLikeInfoU5BU5D_t3565*, int32_t, const MethodInfo*))List_1_CopyTo_m7421_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m20975(__this, ___match, method) (( FBLikeInfo_t247 * (*) (List_1_t588 *, Predicate_1_t3576 *, const MethodInfo*))List_1_Find_m17432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20976(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3576 *, const MethodInfo*))List_1_CheckMatch_m17434_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20977(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t588 *, int32_t, int32_t, Predicate_1_t3576 *, const MethodInfo*))List_1_GetIndex_m17436_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBLikeInfo>::GetEnumerator()
#define List_1_GetEnumerator_m20978(__this, method) (( Enumerator_t3577  (*) (List_1_t588 *, const MethodInfo*))List_1_GetEnumerator_m3274_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::IndexOf(T)
#define List_1_IndexOf_m20979(__this, ___item, method) (( int32_t (*) (List_1_t588 *, FBLikeInfo_t247 *, const MethodInfo*))List_1_IndexOf_m7424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20980(__this, ___start, ___delta, method) (( void (*) (List_1_t588 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17439_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20981(__this, ___index, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17441_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Insert(System.Int32,T)
#define List_1_Insert_m20982(__this, ___index, ___item, method) (( void (*) (List_1_t588 *, int32_t, FBLikeInfo_t247 *, const MethodInfo*))List_1_Insert_m7425_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20983(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17444_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Remove(T)
#define List_1_Remove_m20984(__this, ___item, method) (( bool (*) (List_1_t588 *, FBLikeInfo_t247 *, const MethodInfo*))List_1_Remove_m7422_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20985(__this, ___match, method) (( int32_t (*) (List_1_t588 *, Predicate_1_t3576 *, const MethodInfo*))List_1_RemoveAll_m17447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20986(__this, ___index, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7417_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Reverse()
#define List_1_Reverse_m20987(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_Reverse_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort()
#define List_1_Sort_m20988(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_Sort_m17452_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m20989(__this, ___comparer, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_Sort_m17454_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20990(__this, ___comparison, method) (( void (*) (List_1_t588 *, Comparison_1_t3578 *, const MethodInfo*))List_1_Sort_m17456_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBLikeInfo>::ToArray()
#define List_1_ToArray_m20991(__this, method) (( FBLikeInfoU5BU5D_t3565* (*) (List_1_t588 *, const MethodInfo*))List_1_ToArray_m17458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::TrimExcess()
#define List_1_TrimExcess_m20992(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_TrimExcess_m17460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Capacity()
#define List_1_get_Capacity_m20993(__this, method) (( int32_t (*) (List_1_t588 *, const MethodInfo*))List_1_get_Capacity_m17462_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20994(__this, ___value, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17464_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Count()
#define List_1_get_Count_m20995(__this, method) (( int32_t (*) (List_1_t588 *, const MethodInfo*))List_1_get_Count_m7403_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::get_Item(System.Int32)
#define List_1_get_Item_m20996(__this, ___index, method) (( FBLikeInfo_t247 * (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_get_Item_m7426_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m20997(__this, ___index, ___value, method) (( void (*) (List_1_t588 *, int32_t, FBLikeInfo_t247 *, const MethodInfo*))List_1_set_Item_m7427_gshared)(__this, ___index, ___value, method)
