#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t531;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t527;
// System.Collections.Generic.IEnumerable`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerable_1_t4193;
// System.Collections.Generic.IEnumerator`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerator_1_t4192;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ICollection_1_t4194;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ReadOnlyCollection_1_t3401;
// UnionAssets.FLE.EventHandlerFunction[]
struct EventHandlerFunctionU5BU5D_t3399;
// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t3402;
// System.Collections.Generic.IComparer`1<UnionAssets.FLE.EventHandlerFunction>
struct IComparer_1_t4195;
// System.Comparison`1<UnionAssets.FLE.EventHandlerFunction>
struct Comparison_1_t3404;
// System.Collections.Generic.List`1/Enumerator<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m2645(__this, method) (( void (*) (List_1_t531 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18176(__this, ___collection, method) (( void (*) (List_1_t531 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Int32)
#define List_1__ctor_m18177(__this, ___capacity, method) (( void (*) (List_1_t531 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.cctor()
#define List_1__cctor_m18178(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18179(__this, method) (( Object_t* (*) (List_1_t531 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18180(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t531 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18181(__this, method) (( Object_t * (*) (List_1_t531 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18182(__this, ___item, method) (( int32_t (*) (List_1_t531 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18183(__this, ___item, method) (( bool (*) (List_1_t531 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18184(__this, ___item, method) (( int32_t (*) (List_1_t531 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18185(__this, ___index, ___item, method) (( void (*) (List_1_t531 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18186(__this, ___item, method) (( void (*) (List_1_t531 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18187(__this, method) (( bool (*) (List_1_t531 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18188(__this, method) (( bool (*) (List_1_t531 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18189(__this, method) (( Object_t * (*) (List_1_t531 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18190(__this, method) (( bool (*) (List_1_t531 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18191(__this, method) (( bool (*) (List_1_t531 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18192(__this, ___index, method) (( Object_t * (*) (List_1_t531 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18193(__this, ___index, ___value, method) (( void (*) (List_1_t531 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(T)
#define List_1_Add_m18194(__this, ___item, method) (( void (*) (List_1_t531 *, EventHandlerFunction_t527 *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18195(__this, ___newCount, method) (( void (*) (List_1_t531 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18196(__this, ___collection, method) (( void (*) (List_1_t531 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18197(__this, ___enumerable, method) (( void (*) (List_1_t531 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18198(__this, ___collection, method) (( void (*) (List_1_t531 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AsReadOnly()
#define List_1_AsReadOnly_m18199(__this, method) (( ReadOnlyCollection_1_t3401 * (*) (List_1_t531 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Clear()
#define List_1_Clear_m18200(__this, method) (( void (*) (List_1_t531 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Contains(T)
#define List_1_Contains_m18201(__this, ___item, method) (( bool (*) (List_1_t531 *, EventHandlerFunction_t527 *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18202(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t531 *, EventHandlerFunctionU5BU5D_t3399*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Find(System.Predicate`1<T>)
#define List_1_Find_m18203(__this, ___match, method) (( EventHandlerFunction_t527 * (*) (List_1_t531 *, Predicate_1_t3402 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18204(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3402 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18205(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t531 *, int32_t, int32_t, Predicate_1_t3402 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetEnumerator()
#define List_1_GetEnumerator_m18206(__this, method) (( Enumerator_t3403  (*) (List_1_t531 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::IndexOf(T)
#define List_1_IndexOf_m18207(__this, ___item, method) (( int32_t (*) (List_1_t531 *, EventHandlerFunction_t527 *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18208(__this, ___start, ___delta, method) (( void (*) (List_1_t531 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18209(__this, ___index, method) (( void (*) (List_1_t531 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Insert(System.Int32,T)
#define List_1_Insert_m18210(__this, ___index, ___item, method) (( void (*) (List_1_t531 *, int32_t, EventHandlerFunction_t527 *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18211(__this, ___collection, method) (( void (*) (List_1_t531 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(T)
#define List_1_Remove_m18212(__this, ___item, method) (( bool (*) (List_1_t531 *, EventHandlerFunction_t527 *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18213(__this, ___match, method) (( int32_t (*) (List_1_t531 *, Predicate_1_t3402 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18214(__this, ___index, method) (( void (*) (List_1_t531 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Reverse()
#define List_1_Reverse_m18215(__this, method) (( void (*) (List_1_t531 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort()
#define List_1_Sort_m18216(__this, method) (( void (*) (List_1_t531 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18217(__this, ___comparer, method) (( void (*) (List_1_t531 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18218(__this, ___comparison, method) (( void (*) (List_1_t531 *, Comparison_1_t3404 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::ToArray()
#define List_1_ToArray_m18219(__this, method) (( EventHandlerFunctionU5BU5D_t3399* (*) (List_1_t531 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::TrimExcess()
#define List_1_TrimExcess_m18220(__this, method) (( void (*) (List_1_t531 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Capacity()
#define List_1_get_Capacity_m18221(__this, method) (( int32_t (*) (List_1_t531 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18222(__this, ___value, method) (( void (*) (List_1_t531 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count()
#define List_1_get_Count_m18223(__this, method) (( int32_t (*) (List_1_t531 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32)
#define List_1_get_Item_m18224(__this, ___index, method) (( EventHandlerFunction_t527 * (*) (List_1_t531 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Item(System.Int32,T)
#define List_1_set_Item_m18225(__this, ___index, ___value, method) (( void (*) (List_1_t531 *, int32_t, EventHandlerFunction_t527 *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)
