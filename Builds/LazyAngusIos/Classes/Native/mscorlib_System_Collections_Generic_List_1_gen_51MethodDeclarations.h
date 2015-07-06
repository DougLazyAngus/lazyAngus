#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3569;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4307;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4166;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4158;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3572;
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Predicate`1<System.Int32>
struct Predicate_1_t3574;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3263;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3578;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m21055_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1__ctor_m21055(__this, method) (( void (*) (List_1_t3569 *, const MethodInfo*))List_1__ctor_m21055_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21056_gshared (List_1_t3569 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21056(__this, ___collection, method) (( void (*) (List_1_t3569 *, Object_t*, const MethodInfo*))List_1__ctor_m21056_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21057_gshared (List_1_t3569 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21057(__this, ___capacity, method) (( void (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1__ctor_m21057_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m21058_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21058(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21058_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21059_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21059(__this, method) (( Object_t* (*) (List_1_t3569 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21059_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21060_gshared (List_1_t3569 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21060(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3569 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21060_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21061_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21061(__this, method) (( Object_t * (*) (List_1_t3569 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21061_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21062_gshared (List_1_t3569 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21062(__this, ___item, method) (( int32_t (*) (List_1_t3569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21062_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21063_gshared (List_1_t3569 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21063(__this, ___item, method) (( bool (*) (List_1_t3569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21063_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21064_gshared (List_1_t3569 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21064(__this, ___item, method) (( int32_t (*) (List_1_t3569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21064_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21065_gshared (List_1_t3569 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21065(__this, ___index, ___item, method) (( void (*) (List_1_t3569 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21065_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21066_gshared (List_1_t3569 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21066(__this, ___item, method) (( void (*) (List_1_t3569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21066_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21067_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21067(__this, method) (( bool (*) (List_1_t3569 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21067_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21068_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21068(__this, method) (( bool (*) (List_1_t3569 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21068_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21069_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21069(__this, method) (( Object_t * (*) (List_1_t3569 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21069_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21070_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21070(__this, method) (( bool (*) (List_1_t3569 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21071_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21071(__this, method) (( bool (*) (List_1_t3569 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21071_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21072_gshared (List_1_t3569 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21072(__this, ___index, method) (( Object_t * (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21072_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21073_gshared (List_1_t3569 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21073(__this, ___index, ___value, method) (( void (*) (List_1_t3569 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21073_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m21074_gshared (List_1_t3569 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m21074(__this, ___item, method) (( void (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_Add_m21074_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21075_gshared (List_1_t3569 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21075(__this, ___newCount, method) (( void (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21075_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21076_gshared (List_1_t3569 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21076(__this, ___collection, method) (( void (*) (List_1_t3569 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21076_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21077_gshared (List_1_t3569 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21077(__this, ___enumerable, method) (( void (*) (List_1_t3569 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21077_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21078_gshared (List_1_t3569 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21078(__this, ___collection, method) (( void (*) (List_1_t3569 *, Object_t*, const MethodInfo*))List_1_AddRange_m21078_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3572 * List_1_AsReadOnly_m21079_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21079(__this, method) (( ReadOnlyCollection_1_t3572 * (*) (List_1_t3569 *, const MethodInfo*))List_1_AsReadOnly_m21079_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m21080_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_Clear_m21080(__this, method) (( void (*) (List_1_t3569 *, const MethodInfo*))List_1_Clear_m21080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m21081_gshared (List_1_t3569 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m21081(__this, ___item, method) (( bool (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_Contains_m21081_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21082_gshared (List_1_t3569 * __this, Int32U5BU5D_t476* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21082(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3569 *, Int32U5BU5D_t476*, int32_t, const MethodInfo*))List_1_CopyTo_m21082_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m21083_gshared (List_1_t3569 * __this, Predicate_1_t3574 * ___match, const MethodInfo* method);
#define List_1_Find_m21083(__this, ___match, method) (( int32_t (*) (List_1_t3569 *, Predicate_1_t3574 *, const MethodInfo*))List_1_Find_m21083_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21084_gshared (Object_t * __this /* static, unused */, Predicate_1_t3574 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21084(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3574 *, const MethodInfo*))List_1_CheckMatch_m21084_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21085_gshared (List_1_t3569 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3574 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21085(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3569 *, int32_t, int32_t, Predicate_1_t3574 *, const MethodInfo*))List_1_GetIndex_m21085_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t3570  List_1_GetEnumerator_m21086_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21086(__this, method) (( Enumerator_t3570  (*) (List_1_t3569 *, const MethodInfo*))List_1_GetEnumerator_m21086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21087_gshared (List_1_t3569 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m21087(__this, ___item, method) (( int32_t (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_IndexOf_m21087_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21088_gshared (List_1_t3569 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21088(__this, ___start, ___delta, method) (( void (*) (List_1_t3569 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21088_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21089_gshared (List_1_t3569 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21089(__this, ___index, method) (( void (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21089_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21090_gshared (List_1_t3569 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m21090(__this, ___index, ___item, method) (( void (*) (List_1_t3569 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m21090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21091_gshared (List_1_t3569 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21091(__this, ___collection, method) (( void (*) (List_1_t3569 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21091_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m21092_gshared (List_1_t3569 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m21092(__this, ___item, method) (( bool (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_Remove_m21092_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21093_gshared (List_1_t3569 * __this, Predicate_1_t3574 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21093(__this, ___match, method) (( int32_t (*) (List_1_t3569 *, Predicate_1_t3574 *, const MethodInfo*))List_1_RemoveAll_m21093_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21094_gshared (List_1_t3569 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21094(__this, ___index, method) (( void (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21094_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m21095_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_Reverse_m21095(__this, method) (( void (*) (List_1_t3569 *, const MethodInfo*))List_1_Reverse_m21095_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m21096_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_Sort_m21096(__this, method) (( void (*) (List_1_t3569 *, const MethodInfo*))List_1_Sort_m21096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21097_gshared (List_1_t3569 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21097(__this, ___comparer, method) (( void (*) (List_1_t3569 *, Object_t*, const MethodInfo*))List_1_Sort_m21097_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21098_gshared (List_1_t3569 * __this, Comparison_1_t3578 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21098(__this, ___comparison, method) (( void (*) (List_1_t3569 *, Comparison_1_t3578 *, const MethodInfo*))List_1_Sort_m21098_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t476* List_1_ToArray_m21099_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_ToArray_m21099(__this, method) (( Int32U5BU5D_t476* (*) (List_1_t3569 *, const MethodInfo*))List_1_ToArray_m21099_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m21100_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21100(__this, method) (( void (*) (List_1_t3569 *, const MethodInfo*))List_1_TrimExcess_m21100_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21101_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21101(__this, method) (( int32_t (*) (List_1_t3569 *, const MethodInfo*))List_1_get_Capacity_m21101_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21102_gshared (List_1_t3569 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21102(__this, ___value, method) (( void (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21102_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m21103_gshared (List_1_t3569 * __this, const MethodInfo* method);
#define List_1_get_Count_m21103(__this, method) (( int32_t (*) (List_1_t3569 *, const MethodInfo*))List_1_get_Count_m21103_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m21104_gshared (List_1_t3569 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21104(__this, ___index, method) (( int32_t (*) (List_1_t3569 *, int32_t, const MethodInfo*))List_1_get_Item_m21104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21105_gshared (List_1_t3569 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m21105(__this, ___index, ___value, method) (( void (*) (List_1_t3569 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m21105_gshared)(__this, ___index, ___value, method)
