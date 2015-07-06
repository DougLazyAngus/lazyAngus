#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t511;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t535;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1211;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3296;
// System.Object[]
struct ObjectU5BU5D_t509;
// System.Predicate`1<System.Object>
struct Predicate_1_t3298;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3525;
// System.Comparison`1<System.Object>
struct Comparison_1_t3305;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m2481_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1__ctor_m2481(__this, method) (( void (*) (List_1_t511 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16636_gshared (List_1_t511 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16636(__this, ___collection, method) (( void (*) (List_1_t511 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16638_gshared (List_1_t511 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16638(__this, ___capacity, method) (( void (*) (List_1_t511 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m16640_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16640(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658(__this, method) (( Object_t* (*) (List_1_t511 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m6641_gshared (List_1_t511 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m6641(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t511 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m6637(__this, method) (( Object_t * (*) (List_1_t511 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m6646_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m6646(__this, ___item, method) (( int32_t (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m6648_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m6648(__this, ___item, method) (( bool (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m6649_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m6649(__this, ___item, method) (( int32_t (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m6650_gshared (List_1_t511 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m6650(__this, ___index, ___item, method) (( void (*) (List_1_t511 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m6651_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m6651(__this, ___item, method) (( void (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653(__this, method) (( bool (*) (List_1_t511 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m6639(__this, method) (( bool (*) (List_1_t511 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m6640(__this, method) (( Object_t * (*) (List_1_t511 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m6642(__this, method) (( bool (*) (List_1_t511 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m6643(__this, method) (( bool (*) (List_1_t511 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m6644_gshared (List_1_t511 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m6644(__this, ___index, method) (( Object_t * (*) (List_1_t511 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m6645_gshared (List_1_t511 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m6645(__this, ___index, ___value, method) (( void (*) (List_1_t511 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m6654_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m6654(__this, ___item, method) (( void (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16658_gshared (List_1_t511 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16658(__this, ___newCount, method) (( void (*) (List_1_t511 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16660_gshared (List_1_t511 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16660(__this, ___collection, method) (( void (*) (List_1_t511 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16662_gshared (List_1_t511 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16662(__this, ___enumerable, method) (( void (*) (List_1_t511 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16664_gshared (List_1_t511 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16664(__this, ___collection, method) (( void (*) (List_1_t511 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3296 * List_1_AsReadOnly_m16666_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16666(__this, method) (( ReadOnlyCollection_1_t3296 * (*) (List_1_t511 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m6647_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_Clear_m6647(__this, method) (( void (*) (List_1_t511 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m6655_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m6655(__this, ___item, method) (( bool (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m6656_gshared (List_1_t511 * __this, ObjectU5BU5D_t509* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m6656(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t511 *, ObjectU5BU5D_t509*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m16671_gshared (List_1_t511 * __this, Predicate_1_t3298 * ___match, const MethodInfo* method);
#define List_1_Find_m16671(__this, ___match, method) (( Object_t * (*) (List_1_t511 *, Predicate_1_t3298 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16673_gshared (Object_t * __this /* static, unused */, Predicate_1_t3298 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16673(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3298 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16675_gshared (List_1_t511 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3298 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16675(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t511 *, int32_t, int32_t, Predicate_1_t3298 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t563  List_1_GetEnumerator_m2584_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2584(__this, method) (( Enumerator_t563  (*) (List_1_t511 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m6659_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m6659(__this, ___item, method) (( int32_t (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16678_gshared (List_1_t511 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16678(__this, ___start, ___delta, method) (( void (*) (List_1_t511 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16680_gshared (List_1_t511 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16680(__this, ___index, method) (( void (*) (List_1_t511 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m6660_gshared (List_1_t511 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m6660(__this, ___index, ___item, method) (( void (*) (List_1_t511 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16683_gshared (List_1_t511 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16683(__this, ___collection, method) (( void (*) (List_1_t511 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m6657_gshared (List_1_t511 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m6657(__this, ___item, method) (( bool (*) (List_1_t511 *, Object_t *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16686_gshared (List_1_t511 * __this, Predicate_1_t3298 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16686(__this, ___match, method) (( int32_t (*) (List_1_t511 *, Predicate_1_t3298 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m6652_gshared (List_1_t511 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m6652(__this, ___index, method) (( void (*) (List_1_t511 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m16689_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_Reverse_m16689(__this, method) (( void (*) (List_1_t511 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m16691_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_Sort_m16691(__this, method) (( void (*) (List_1_t511 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16693_gshared (List_1_t511 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16693(__this, ___comparer, method) (( void (*) (List_1_t511 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16695_gshared (List_1_t511 * __this, Comparison_1_t3305 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16695(__this, ___comparison, method) (( void (*) (List_1_t511 *, Comparison_1_t3305 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t509* List_1_ToArray_m16697_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_ToArray_m16697(__this, method) (( ObjectU5BU5D_t509* (*) (List_1_t511 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m16699_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16699(__this, method) (( void (*) (List_1_t511 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16701_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16701(__this, method) (( int32_t (*) (List_1_t511 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16703_gshared (List_1_t511 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16703(__this, ___value, method) (( void (*) (List_1_t511 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m6638_gshared (List_1_t511 * __this, const MethodInfo* method);
#define List_1_get_Count_m6638(__this, method) (( int32_t (*) (List_1_t511 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m6661_gshared (List_1_t511 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m6661(__this, ___index, method) (( Object_t * (*) (List_1_t511 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m6662_gshared (List_1_t511 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m6662(__this, ___index, ___value, method) (( void (*) (List_1_t511 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)
