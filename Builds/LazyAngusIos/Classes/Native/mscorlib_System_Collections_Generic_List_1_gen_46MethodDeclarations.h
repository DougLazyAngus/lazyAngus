#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1412;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1408;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.RBTree/Node>
struct IEnumerable_1_t1774;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t1684;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.RBTree/Node>
struct ICollection_1_t4288;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.RBTree/Node>
struct ReadOnlyCollection_1_t3521;
// System.Collections.Generic.RBTree/Node[]
struct NodeU5BU5D_t3519;
// System.Predicate`1<System.Collections.Generic.RBTree/Node>
struct Predicate_1_t3522;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.RBTree/Node>
struct IComparer_1_t4289;
// System.Comparison`1<System.Collections.Generic.RBTree/Node>
struct Comparison_1_t3524;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m8504(__this, method) (( void (*) (List_1_t1412 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20419(__this, ___collection, method) (( void (*) (List_1_t1412 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Int32)
#define List_1__ctor_m20420(__this, ___capacity, method) (( void (*) (List_1_t1412 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.cctor()
#define List_1__cctor_m20421(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20422(__this, method) (( Object_t* (*) (List_1_t1412 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20423(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1412 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20424(__this, method) (( Object_t * (*) (List_1_t1412 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20425(__this, ___item, method) (( int32_t (*) (List_1_t1412 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20426(__this, ___item, method) (( bool (*) (List_1_t1412 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20427(__this, ___item, method) (( int32_t (*) (List_1_t1412 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20428(__this, ___index, ___item, method) (( void (*) (List_1_t1412 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20429(__this, ___item, method) (( void (*) (List_1_t1412 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20430(__this, method) (( bool (*) (List_1_t1412 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20431(__this, method) (( bool (*) (List_1_t1412 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20432(__this, method) (( Object_t * (*) (List_1_t1412 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20433(__this, method) (( bool (*) (List_1_t1412 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20434(__this, method) (( bool (*) (List_1_t1412 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20435(__this, ___index, method) (( Object_t * (*) (List_1_t1412 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20436(__this, ___index, ___value, method) (( void (*) (List_1_t1412 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Add(T)
#define List_1_Add_m20437(__this, ___item, method) (( void (*) (List_1_t1412 *, Node_t1408 *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20438(__this, ___newCount, method) (( void (*) (List_1_t1412 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20439(__this, ___collection, method) (( void (*) (List_1_t1412 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20440(__this, ___enumerable, method) (( void (*) (List_1_t1412 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20441(__this, ___collection, method) (( void (*) (List_1_t1412 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AsReadOnly()
#define List_1_AsReadOnly_m20442(__this, method) (( ReadOnlyCollection_1_t3521 * (*) (List_1_t1412 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Clear()
#define List_1_Clear_m20443(__this, method) (( void (*) (List_1_t1412 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Contains(T)
#define List_1_Contains_m20444(__this, ___item, method) (( bool (*) (List_1_t1412 *, Node_t1408 *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20445(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1412 *, NodeU5BU5D_t3519*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Find(System.Predicate`1<T>)
#define List_1_Find_m20446(__this, ___match, method) (( Node_t1408 * (*) (List_1_t1412 *, Predicate_1_t3522 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20447(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3522 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20448(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1412 *, int32_t, int32_t, Predicate_1_t3522 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetEnumerator()
#define List_1_GetEnumerator_m20449(__this, method) (( Enumerator_t3523  (*) (List_1_t1412 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::IndexOf(T)
#define List_1_IndexOf_m20450(__this, ___item, method) (( int32_t (*) (List_1_t1412 *, Node_t1408 *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20451(__this, ___start, ___delta, method) (( void (*) (List_1_t1412 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20452(__this, ___index, method) (( void (*) (List_1_t1412 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Insert(System.Int32,T)
#define List_1_Insert_m20453(__this, ___index, ___item, method) (( void (*) (List_1_t1412 *, int32_t, Node_t1408 *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20454(__this, ___collection, method) (( void (*) (List_1_t1412 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Remove(T)
#define List_1_Remove_m20455(__this, ___item, method) (( bool (*) (List_1_t1412 *, Node_t1408 *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20456(__this, ___match, method) (( int32_t (*) (List_1_t1412 *, Predicate_1_t3522 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20457(__this, ___index, method) (( void (*) (List_1_t1412 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Reverse()
#define List_1_Reverse_m20458(__this, method) (( void (*) (List_1_t1412 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort()
#define List_1_Sort_m20459(__this, method) (( void (*) (List_1_t1412 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m20460(__this, ___comparer, method) (( void (*) (List_1_t1412 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20461(__this, ___comparison, method) (( void (*) (List_1_t1412 *, Comparison_1_t3524 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::ToArray()
#define List_1_ToArray_m20462(__this, method) (( NodeU5BU5D_t3519* (*) (List_1_t1412 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::TrimExcess()
#define List_1_TrimExcess_m20463(__this, method) (( void (*) (List_1_t1412 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Capacity()
#define List_1_get_Capacity_m8505(__this, method) (( int32_t (*) (List_1_t1412 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20464(__this, ___value, method) (( void (*) (List_1_t1412 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Count()
#define List_1_get_Count_m20465(__this, method) (( int32_t (*) (List_1_t1412 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Item(System.Int32)
#define List_1_get_Item_m20466(__this, ___index, method) (( Node_t1408 * (*) (List_1_t1412 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Item(System.Int32,T)
#define List_1_set_Item_m20467(__this, ___index, ___value, method) (( void (*) (List_1_t1412 *, int32_t, Node_t1408 *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)
