#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t4208;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t4204;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.RBTree/Node>
struct IEnumerable_1_t4627;
// System.Collections.Generic.RBTree/Node[]
struct NodeU5BU5D_t6194;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t4547;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.RBTree/Node>
struct ICollection_1_t9513;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.RBTree/Node>
struct ReadOnlyCollection_1_t6196;
// System.Predicate`1<System.Collections.Generic.RBTree/Node>
struct Predicate_1_t6197;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.RBTree/Node>
struct IComparer_1_t9514;
// System.Comparison`1<System.Collections.Generic.RBTree/Node>
struct Comparison_1_t6199;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m18010(__this, method) (( void (*) (List_1_t4208 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30228(__this, ___collection, method) (( void (*) (List_1_t4208 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Int32)
#define List_1__ctor_m30229(__this, ___capacity, method) (( void (*) (List_1_t4208 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.ctor(T[],System.Int32)
#define List_1__ctor_m30230(__this, ___data, ___size, method) (( void (*) (List_1_t4208 *, NodeU5BU5D_t6194*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::.cctor()
#define List_1__cctor_m30231(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30232(__this, method) (( Object_t* (*) (List_1_t4208 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30233(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4208 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30234(__this, method) (( Object_t * (*) (List_1_t4208 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30235(__this, ___item, method) (( int32_t (*) (List_1_t4208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30236(__this, ___item, method) (( bool (*) (List_1_t4208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30237(__this, ___item, method) (( int32_t (*) (List_1_t4208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30238(__this, ___index, ___item, method) (( void (*) (List_1_t4208 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30239(__this, ___item, method) (( void (*) (List_1_t4208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30240(__this, method) (( bool (*) (List_1_t4208 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30241(__this, method) (( bool (*) (List_1_t4208 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30242(__this, method) (( Object_t * (*) (List_1_t4208 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30243(__this, method) (( bool (*) (List_1_t4208 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30244(__this, method) (( bool (*) (List_1_t4208 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30245(__this, ___index, method) (( Object_t * (*) (List_1_t4208 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30246(__this, ___index, ___value, method) (( void (*) (List_1_t4208 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Add(T)
#define List_1_Add_m30247(__this, ___item, method) (( void (*) (List_1_t4208 *, Node_t4204 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30248(__this, ___newCount, method) (( void (*) (List_1_t4208 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30249(__this, ___idx, ___count, method) (( void (*) (List_1_t4208 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30250(__this, ___collection, method) (( void (*) (List_1_t4208 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30251(__this, ___enumerable, method) (( void (*) (List_1_t4208 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30252(__this, ___collection, method) (( void (*) (List_1_t4208 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::AsReadOnly()
#define List_1_AsReadOnly_m30253(__this, method) (( ReadOnlyCollection_1_t6196 * (*) (List_1_t4208 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Clear()
#define List_1_Clear_m30254(__this, method) (( void (*) (List_1_t4208 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Contains(T)
#define List_1_Contains_m30255(__this, ___item, method) (( bool (*) (List_1_t4208 *, Node_t4204 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30256(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4208 *, NodeU5BU5D_t6194*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Find(System.Predicate`1<T>)
#define List_1_Find_m30257(__this, ___match, method) (( Node_t4204 * (*) (List_1_t4208 *, Predicate_1_t6197 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30258(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6197 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30259(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4208 *, int32_t, int32_t, Predicate_1_t6197 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetEnumerator()
#define List_1_GetEnumerator_m30260(__this, method) (( Enumerator_t6198  (*) (List_1_t4208 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30261(__this, ___index, ___count, method) (( List_1_t4208 * (*) (List_1_t4208 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::IndexOf(T)
#define List_1_IndexOf_m30262(__this, ___item, method) (( int32_t (*) (List_1_t4208 *, Node_t4204 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30263(__this, ___start, ___delta, method) (( void (*) (List_1_t4208 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30264(__this, ___index, method) (( void (*) (List_1_t4208 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Insert(System.Int32,T)
#define List_1_Insert_m30265(__this, ___index, ___item, method) (( void (*) (List_1_t4208 *, int32_t, Node_t4204 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30266(__this, ___collection, method) (( void (*) (List_1_t4208 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30267(__this, ___index, ___collection, method) (( void (*) (List_1_t4208 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30268(__this, ___index, ___collection, method) (( void (*) (List_1_t4208 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30269(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4208 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Remove(T)
#define List_1_Remove_m30270(__this, ___item, method) (( bool (*) (List_1_t4208 *, Node_t4204 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30271(__this, ___match, method) (( int32_t (*) (List_1_t4208 *, Predicate_1_t6197 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30272(__this, ___index, method) (( void (*) (List_1_t4208 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30273(__this, ___index, ___count, method) (( void (*) (List_1_t4208 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Reverse()
#define List_1_Reverse_m30274(__this, method) (( void (*) (List_1_t4208 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort()
#define List_1_Sort_m30275(__this, method) (( void (*) (List_1_t4208 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30276(__this, ___comparer, method) (( void (*) (List_1_t4208 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30277(__this, ___comparison, method) (( void (*) (List_1_t4208 *, Comparison_1_t6199 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::ToArray()
#define List_1_ToArray_m30278(__this, method) (( NodeU5BU5D_t6194* (*) (List_1_t4208 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::TrimExcess()
#define List_1_TrimExcess_m30279(__this, method) (( void (*) (List_1_t4208 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Capacity()
#define List_1_get_Capacity_m18011(__this, method) (( int32_t (*) (List_1_t4208 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30280(__this, ___value, method) (( void (*) (List_1_t4208 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Count()
#define List_1_get_Count_m30281(__this, method) (( int32_t (*) (List_1_t4208 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::get_Item(System.Int32)
#define List_1_get_Item_m30282(__this, ___index, method) (( Node_t4204 * (*) (List_1_t4208 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>::set_Item(System.Int32,T)
#define List_1_set_Item_m30283(__this, ___index, ___value, method) (( void (*) (List_1_t4208 *, int32_t, Node_t4204 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)
