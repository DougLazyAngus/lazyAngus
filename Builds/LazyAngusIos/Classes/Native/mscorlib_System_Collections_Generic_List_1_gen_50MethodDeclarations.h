#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1939;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1935;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.RBTree/Node>
struct IEnumerable_1_t2221;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t2180;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.RBTree/Node>
struct ICollection_1_t4413;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.RBTree/Node>
struct ReadOnlyCollection_1_t3621;
// System.Collections.Generic.RBTree/Node[]
struct NodeU5BU5D_t3619;
// System.Predicate`1<System.Collections.Generic.RBTree/Node>
struct Predicate_1_t3622;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.RBTree/Node>
struct IComparer_1_t4414;
// System.Comparison`1<System.Collections.Generic.RBTree/Node>
struct Comparison_1_t3624;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m11514(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1__ctor_m3123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21672(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1__ctor_m17404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Int32)
#define List_1__ctor_m21673(__this, ___capacity, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1__ctor_m17406_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.cctor()
#define List_1__cctor_m21674(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17408_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21675(__this, method) (( Object_t* (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21676(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1939 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21677(__this, method) (( Object_t * (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21678(__this, ___item, method) (( int32_t (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21679(__this, ___item, method) (( bool (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21680(__this, ___item, method) (( int32_t (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21681(__this, ___index, ___item, method) (( void (*) (List_1_t1939 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21682(__this, ___item, method) (( void (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21683(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21684(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21685(__this, method) (( Object_t * (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21686(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21687(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7415_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21688(__this, ___index, method) (( Object_t * (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21689(__this, ___index, ___value, method) (( void (*) (List_1_t1939 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7417_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Add(T)
#define List_1_Add_m21690(__this, ___item, method) (( void (*) (List_1_t1939 *, Node_t1935 *, const MethodInfo*))List_1_Add_m7426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21691(__this, ___newCount, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17426_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21692(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21693(__this, ___enumerable, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17430_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21694(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_AddRange_m17432_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AsReadOnly()
#define List_1_AsReadOnly_m21695(__this, method) (( ReadOnlyCollection_1_t3621 * (*) (List_1_t1939 *, const MethodInfo*))List_1_AsReadOnly_m17434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Clear()
#define List_1_Clear_m21696(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_Clear_m7419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Contains(T)
#define List_1_Contains_m21697(__this, ___item, method) (( bool (*) (List_1_t1939 *, Node_t1935 *, const MethodInfo*))List_1_Contains_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21698(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1939 *, NodeU5BU5D_t3619*, int32_t, const MethodInfo*))List_1_CopyTo_m7428_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Find(System.Predicate`1<T>)
#define List_1_Find_m21699(__this, ___match, method) (( Node_t1935 * (*) (List_1_t1939 *, Predicate_1_t3622 *, const MethodInfo*))List_1_Find_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21700(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3622 *, const MethodInfo*))List_1_CheckMatch_m17441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21701(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1939 *, int32_t, int32_t, Predicate_1_t3622 *, const MethodInfo*))List_1_GetIndex_m17443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetEnumerator()
#define List_1_GetEnumerator_m21702(__this, method) (( Enumerator_t3623  (*) (List_1_t1939 *, const MethodInfo*))List_1_GetEnumerator_m3281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::IndexOf(T)
#define List_1_IndexOf_m21703(__this, ___item, method) (( int32_t (*) (List_1_t1939 *, Node_t1935 *, const MethodInfo*))List_1_IndexOf_m7431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21704(__this, ___start, ___delta, method) (( void (*) (List_1_t1939 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21705(__this, ___index, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Insert(System.Int32,T)
#define List_1_Insert_m21706(__this, ___index, ___item, method) (( void (*) (List_1_t1939 *, int32_t, Node_t1935 *, const MethodInfo*))List_1_Insert_m7432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21707(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17451_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Remove(T)
#define List_1_Remove_m21708(__this, ___item, method) (( bool (*) (List_1_t1939 *, Node_t1935 *, const MethodInfo*))List_1_Remove_m7429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21709(__this, ___match, method) (( int32_t (*) (List_1_t1939 *, Predicate_1_t3622 *, const MethodInfo*))List_1_RemoveAll_m17454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21710(__this, ___index, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Reverse()
#define List_1_Reverse_m21711(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_Reverse_m17457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort()
#define List_1_Sort_m21712(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21713(__this, ___comparer, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_Sort_m17461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21714(__this, ___comparison, method) (( void (*) (List_1_t1939 *, Comparison_1_t3624 *, const MethodInfo*))List_1_Sort_m17463_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::ToArray()
#define List_1_ToArray_m21715(__this, method) (( NodeU5BU5D_t3619* (*) (List_1_t1939 *, const MethodInfo*))List_1_ToArray_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::TrimExcess()
#define List_1_TrimExcess_m21716(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_TrimExcess_m17467_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Capacity()
#define List_1_get_Capacity_m11515(__this, method) (( int32_t (*) (List_1_t1939 *, const MethodInfo*))List_1_get_Capacity_m17469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21717(__this, ___value, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Count()
#define List_1_get_Count_m21718(__this, method) (( int32_t (*) (List_1_t1939 *, const MethodInfo*))List_1_get_Count_m7410_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Item(System.Int32)
#define List_1_get_Item_m21719(__this, ___index, method) (( Node_t1935 * (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_get_Item_m7433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Item(System.Int32,T)
#define List_1_set_Item_m21720(__this, ___index, ___value, method) (( void (*) (List_1_t1939 *, int32_t, Node_t1935 *, const MethodInfo*))List_1_set_Item_m7434_gshared)(__this, ___index, ___value, method)
