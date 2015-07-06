#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1185;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1179;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t4571;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t4572;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t4573;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t3992;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3990;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t1271;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
struct IComparer_1_t4574;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t3994;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6493(__this, method) (( void (*) (List_1_t1185 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27008(__this, ___collection, method) (( void (*) (List_1_t1185 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m27009(__this, ___capacity, method) (( void (*) (List_1_t1185 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m27010(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27011(__this, method) (( Object_t* (*) (List_1_t1185 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27012(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1185 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27013(__this, method) (( Object_t * (*) (List_1_t1185 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27014(__this, ___item, method) (( int32_t (*) (List_1_t1185 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27015(__this, ___item, method) (( bool (*) (List_1_t1185 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27016(__this, ___item, method) (( int32_t (*) (List_1_t1185 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27017(__this, ___index, ___item, method) (( void (*) (List_1_t1185 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27018(__this, ___item, method) (( void (*) (List_1_t1185 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27019(__this, method) (( bool (*) (List_1_t1185 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27020(__this, method) (( bool (*) (List_1_t1185 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27021(__this, method) (( Object_t * (*) (List_1_t1185 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27022(__this, method) (( bool (*) (List_1_t1185 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27023(__this, method) (( bool (*) (List_1_t1185 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27024(__this, ___index, method) (( Object_t * (*) (List_1_t1185 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27025(__this, ___index, ___value, method) (( void (*) (List_1_t1185 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m27026(__this, ___item, method) (( void (*) (List_1_t1185 *, BaseInvokableCall_t1179 *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27027(__this, ___newCount, method) (( void (*) (List_1_t1185 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27028(__this, ___collection, method) (( void (*) (List_1_t1185 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27029(__this, ___enumerable, method) (( void (*) (List_1_t1185 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m6496(__this, ___collection, method) (( void (*) (List_1_t1185 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m27030(__this, method) (( ReadOnlyCollection_1_t3992 * (*) (List_1_t1185 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m27031(__this, method) (( void (*) (List_1_t1185 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m27032(__this, ___item, method) (( bool (*) (List_1_t1185 *, BaseInvokableCall_t1179 *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27033(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1185 *, BaseInvokableCallU5BU5D_t3990*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m27034(__this, ___match, method) (( BaseInvokableCall_t1179 * (*) (List_1_t1185 *, Predicate_1_t1271 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27035(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1271 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27036(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1185 *, int32_t, int32_t, Predicate_1_t1271 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m27037(__this, method) (( Enumerator_t3993  (*) (List_1_t1185 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m27038(__this, ___item, method) (( int32_t (*) (List_1_t1185 *, BaseInvokableCall_t1179 *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27039(__this, ___start, ___delta, method) (( void (*) (List_1_t1185 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27040(__this, ___index, method) (( void (*) (List_1_t1185 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m27041(__this, ___index, ___item, method) (( void (*) (List_1_t1185 *, int32_t, BaseInvokableCall_t1179 *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27042(__this, ___collection, method) (( void (*) (List_1_t1185 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m27043(__this, ___item, method) (( bool (*) (List_1_t1185 *, BaseInvokableCall_t1179 *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m6495(__this, ___match, method) (( int32_t (*) (List_1_t1185 *, Predicate_1_t1271 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27044(__this, ___index, method) (( void (*) (List_1_t1185 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m27045(__this, method) (( void (*) (List_1_t1185 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m27046(__this, method) (( void (*) (List_1_t1185 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27047(__this, ___comparer, method) (( void (*) (List_1_t1185 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27048(__this, ___comparison, method) (( void (*) (List_1_t1185 *, Comparison_1_t3994 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m27049(__this, method) (( BaseInvokableCallU5BU5D_t3990* (*) (List_1_t1185 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m27050(__this, method) (( void (*) (List_1_t1185 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m27051(__this, method) (( int32_t (*) (List_1_t1185 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27052(__this, ___value, method) (( void (*) (List_1_t1185 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m27053(__this, method) (( int32_t (*) (List_1_t1185 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m27054(__this, ___index, method) (( BaseInvokableCall_t1179 * (*) (List_1_t1185 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m27055(__this, ___index, ___value, method) (( void (*) (List_1_t1185 *, int32_t, BaseInvokableCall_t1179 *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)
