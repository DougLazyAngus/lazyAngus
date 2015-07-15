#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1437;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1433;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.RBTree/Node>
struct IEnumerable_1_t1799;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t1709;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.RBTree/Node>
struct ICollection_1_t4307;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.RBTree/Node>
struct ReadOnlyCollection_1_t3546;
// System.Collections.Generic.RBTree/Node[]
struct NodeU5BU5D_t3544;
// System.Predicate`1<System.Collections.Generic.RBTree/Node>
struct Predicate_1_t3547;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.RBTree/Node>
struct IComparer_1_t4308;
// System.Comparison`1<System.Collections.Generic.RBTree/Node>
struct Comparison_1_t3549;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m8684(__this, method) (( void (*) (List_1_t1437 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20599(__this, ___collection, method) (( void (*) (List_1_t1437 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Int32)
#define List_1__ctor_m20600(__this, ___capacity, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.cctor()
#define List_1__cctor_m20601(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20602(__this, method) (( Object_t* (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20603(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1437 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20604(__this, method) (( Object_t * (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20605(__this, ___item, method) (( int32_t (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20606(__this, ___item, method) (( bool (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20607(__this, ___item, method) (( int32_t (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20608(__this, ___index, ___item, method) (( void (*) (List_1_t1437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20609(__this, ___item, method) (( void (*) (List_1_t1437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20610(__this, method) (( bool (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20611(__this, method) (( bool (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20612(__this, method) (( Object_t * (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20613(__this, method) (( bool (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20614(__this, method) (( bool (*) (List_1_t1437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20615(__this, ___index, method) (( Object_t * (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20616(__this, ___index, ___value, method) (( void (*) (List_1_t1437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Add(T)
#define List_1_Add_m20617(__this, ___item, method) (( void (*) (List_1_t1437 *, Node_t1433 *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20618(__this, ___newCount, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20619(__this, ___collection, method) (( void (*) (List_1_t1437 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20620(__this, ___enumerable, method) (( void (*) (List_1_t1437 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20621(__this, ___collection, method) (( void (*) (List_1_t1437 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AsReadOnly()
#define List_1_AsReadOnly_m20622(__this, method) (( ReadOnlyCollection_1_t3546 * (*) (List_1_t1437 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Clear()
#define List_1_Clear_m20623(__this, method) (( void (*) (List_1_t1437 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Contains(T)
#define List_1_Contains_m20624(__this, ___item, method) (( bool (*) (List_1_t1437 *, Node_t1433 *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20625(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1437 *, NodeU5BU5D_t3544*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Find(System.Predicate`1<T>)
#define List_1_Find_m20626(__this, ___match, method) (( Node_t1433 * (*) (List_1_t1437 *, Predicate_1_t3547 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20627(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3547 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20628(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1437 *, int32_t, int32_t, Predicate_1_t3547 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetEnumerator()
#define List_1_GetEnumerator_m20629(__this, method) (( Enumerator_t3548  (*) (List_1_t1437 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::IndexOf(T)
#define List_1_IndexOf_m20630(__this, ___item, method) (( int32_t (*) (List_1_t1437 *, Node_t1433 *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20631(__this, ___start, ___delta, method) (( void (*) (List_1_t1437 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20632(__this, ___index, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Insert(System.Int32,T)
#define List_1_Insert_m20633(__this, ___index, ___item, method) (( void (*) (List_1_t1437 *, int32_t, Node_t1433 *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20634(__this, ___collection, method) (( void (*) (List_1_t1437 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Remove(T)
#define List_1_Remove_m20635(__this, ___item, method) (( bool (*) (List_1_t1437 *, Node_t1433 *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20636(__this, ___match, method) (( int32_t (*) (List_1_t1437 *, Predicate_1_t3547 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20637(__this, ___index, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Reverse()
#define List_1_Reverse_m20638(__this, method) (( void (*) (List_1_t1437 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort()
#define List_1_Sort_m20639(__this, method) (( void (*) (List_1_t1437 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m20640(__this, ___comparer, method) (( void (*) (List_1_t1437 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20641(__this, ___comparison, method) (( void (*) (List_1_t1437 *, Comparison_1_t3549 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::ToArray()
#define List_1_ToArray_m20642(__this, method) (( NodeU5BU5D_t3544* (*) (List_1_t1437 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::TrimExcess()
#define List_1_TrimExcess_m20643(__this, method) (( void (*) (List_1_t1437 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Capacity()
#define List_1_get_Capacity_m8685(__this, method) (( int32_t (*) (List_1_t1437 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20644(__this, ___value, method) (( void (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Count()
#define List_1_get_Count_m20645(__this, method) (( int32_t (*) (List_1_t1437 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Item(System.Int32)
#define List_1_get_Item_m20646(__this, ___index, method) (( Node_t1433 * (*) (List_1_t1437 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Item(System.Int32,T)
#define List_1_set_Item_m20647(__this, ___index, ___value, method) (( void (*) (List_1_t1437 *, int32_t, Node_t1433 *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)
