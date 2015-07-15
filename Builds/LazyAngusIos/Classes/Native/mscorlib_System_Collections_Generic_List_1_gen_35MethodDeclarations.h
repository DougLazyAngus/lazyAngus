#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t840;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t525;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>
struct IEnumerable_1_t4448;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>
struct IEnumerator_1_t4449;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>
struct ICollection_1_t4450;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
struct ReadOnlyCollection_1_t3791;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t3789;
// System.Predicate`1<UnityEngine.RectTransform>
struct Predicate_1_t3792;
// System.Collections.Generic.IComparer`1<UnityEngine.RectTransform>
struct IComparer_1_t4451;
// System.Comparison`1<UnityEngine.RectTransform>
struct Comparison_1_t3794;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_43.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4971(__this, method) (( void (*) (List_1_t840 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24253(__this, ___collection, method) (( void (*) (List_1_t840 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
#define List_1__ctor_m24254(__this, ___capacity, method) (( void (*) (List_1_t840 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
#define List_1__cctor_m24255(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24256(__this, method) (( Object_t* (*) (List_1_t840 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24257(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t840 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24258(__this, method) (( Object_t * (*) (List_1_t840 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24259(__this, ___item, method) (( int32_t (*) (List_1_t840 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24260(__this, ___item, method) (( bool (*) (List_1_t840 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24261(__this, ___item, method) (( int32_t (*) (List_1_t840 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24262(__this, ___index, ___item, method) (( void (*) (List_1_t840 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24263(__this, ___item, method) (( void (*) (List_1_t840 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24264(__this, method) (( bool (*) (List_1_t840 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24265(__this, method) (( bool (*) (List_1_t840 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24266(__this, method) (( Object_t * (*) (List_1_t840 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24267(__this, method) (( bool (*) (List_1_t840 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24268(__this, method) (( bool (*) (List_1_t840 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24269(__this, ___index, method) (( Object_t * (*) (List_1_t840 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24270(__this, ___index, ___value, method) (( void (*) (List_1_t840 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
#define List_1_Add_m24271(__this, ___item, method) (( void (*) (List_1_t840 *, RectTransform_t525 *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24272(__this, ___newCount, method) (( void (*) (List_1_t840 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24273(__this, ___collection, method) (( void (*) (List_1_t840 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24274(__this, ___enumerable, method) (( void (*) (List_1_t840 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24275(__this, ___collection, method) (( void (*) (List_1_t840 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
#define List_1_AsReadOnly_m24276(__this, method) (( ReadOnlyCollection_1_t3791 * (*) (List_1_t840 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
#define List_1_Clear_m24277(__this, method) (( void (*) (List_1_t840 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
#define List_1_Contains_m24278(__this, ___item, method) (( bool (*) (List_1_t840 *, RectTransform_t525 *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24279(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t840 *, RectTransformU5BU5D_t3789*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
#define List_1_Find_m24280(__this, ___match, method) (( RectTransform_t525 * (*) (List_1_t840 *, Predicate_1_t3792 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24281(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3792 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24282(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t840 *, int32_t, int32_t, Predicate_1_t3792 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
#define List_1_GetEnumerator_m24283(__this, method) (( Enumerator_t3793  (*) (List_1_t840 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
#define List_1_IndexOf_m24284(__this, ___item, method) (( int32_t (*) (List_1_t840 *, RectTransform_t525 *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24285(__this, ___start, ___delta, method) (( void (*) (List_1_t840 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24286(__this, ___index, method) (( void (*) (List_1_t840 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
#define List_1_Insert_m24287(__this, ___index, ___item, method) (( void (*) (List_1_t840 *, int32_t, RectTransform_t525 *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24288(__this, ___collection, method) (( void (*) (List_1_t840 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
#define List_1_Remove_m24289(__this, ___item, method) (( bool (*) (List_1_t840 *, RectTransform_t525 *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24290(__this, ___match, method) (( int32_t (*) (List_1_t840 *, Predicate_1_t3792 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24291(__this, ___index, method) (( void (*) (List_1_t840 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
#define List_1_Reverse_m24292(__this, method) (( void (*) (List_1_t840 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
#define List_1_Sort_m24293(__this, method) (( void (*) (List_1_t840 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24294(__this, ___comparer, method) (( void (*) (List_1_t840 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24295(__this, ___comparison, method) (( void (*) (List_1_t840 *, Comparison_1_t3794 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
#define List_1_ToArray_m24296(__this, method) (( RectTransformU5BU5D_t3789* (*) (List_1_t840 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
#define List_1_TrimExcess_m24297(__this, method) (( void (*) (List_1_t840 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
#define List_1_get_Capacity_m24298(__this, method) (( int32_t (*) (List_1_t840 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24299(__this, ___value, method) (( void (*) (List_1_t840 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
#define List_1_get_Count_m24300(__this, method) (( int32_t (*) (List_1_t840 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
#define List_1_get_Item_m24301(__this, ___index, method) (( RectTransform_t525 * (*) (List_1_t840 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#define List_1_set_Item_m24302(__this, ___index, ___value, method) (( void (*) (List_1_t840 *, int32_t, RectTransform_t525 *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)
