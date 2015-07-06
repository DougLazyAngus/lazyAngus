#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1183;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1182;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
struct IEnumerable_1_t4567;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t4568;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
struct ICollection_1_t4569;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
struct ReadOnlyCollection_1_t3987;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3985;
// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t3988;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>
struct IComparer_1_t4570;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t3989;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6489(__this, method) (( void (*) (List_1_t1183 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26917(__this, ___collection, method) (( void (*) (List_1_t1183 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m26918(__this, ___capacity, method) (( void (*) (List_1_t1183 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m26919(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26920(__this, method) (( Object_t* (*) (List_1_t1183 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26921(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1183 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26922(__this, method) (( Object_t * (*) (List_1_t1183 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26923(__this, ___item, method) (( int32_t (*) (List_1_t1183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26924(__this, ___item, method) (( bool (*) (List_1_t1183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26925(__this, ___item, method) (( int32_t (*) (List_1_t1183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26926(__this, ___index, ___item, method) (( void (*) (List_1_t1183 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26927(__this, ___item, method) (( void (*) (List_1_t1183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26928(__this, method) (( bool (*) (List_1_t1183 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26929(__this, method) (( bool (*) (List_1_t1183 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26930(__this, method) (( Object_t * (*) (List_1_t1183 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26931(__this, method) (( bool (*) (List_1_t1183 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26932(__this, method) (( bool (*) (List_1_t1183 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26933(__this, ___index, method) (( Object_t * (*) (List_1_t1183 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26934(__this, ___index, ___value, method) (( void (*) (List_1_t1183 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m26935(__this, ___item, method) (( void (*) (List_1_t1183 *, PersistentCall_t1182 *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26936(__this, ___newCount, method) (( void (*) (List_1_t1183 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26937(__this, ___collection, method) (( void (*) (List_1_t1183 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26938(__this, ___enumerable, method) (( void (*) (List_1_t1183 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26939(__this, ___collection, method) (( void (*) (List_1_t1183 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
#define List_1_AsReadOnly_m26940(__this, method) (( ReadOnlyCollection_1_t3987 * (*) (List_1_t1183 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m26941(__this, method) (( void (*) (List_1_t1183 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m26942(__this, ___item, method) (( bool (*) (List_1_t1183 *, PersistentCall_t1182 *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26943(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1183 *, PersistentCallU5BU5D_t3985*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m26944(__this, ___match, method) (( PersistentCall_t1182 * (*) (List_1_t1183 *, Predicate_1_t3988 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26945(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3988 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26946(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1183 *, int32_t, int32_t, Predicate_1_t3988 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m6490(__this, method) (( Enumerator_t1270  (*) (List_1_t1183 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m26947(__this, ___item, method) (( int32_t (*) (List_1_t1183 *, PersistentCall_t1182 *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26948(__this, ___start, ___delta, method) (( void (*) (List_1_t1183 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26949(__this, ___index, method) (( void (*) (List_1_t1183 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m26950(__this, ___index, ___item, method) (( void (*) (List_1_t1183 *, int32_t, PersistentCall_t1182 *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26951(__this, ___collection, method) (( void (*) (List_1_t1183 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m26952(__this, ___item, method) (( bool (*) (List_1_t1183 *, PersistentCall_t1182 *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26953(__this, ___match, method) (( int32_t (*) (List_1_t1183 *, Predicate_1_t3988 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26954(__this, ___index, method) (( void (*) (List_1_t1183 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
#define List_1_Reverse_m26955(__this, method) (( void (*) (List_1_t1183 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
#define List_1_Sort_m26956(__this, method) (( void (*) (List_1_t1183 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26957(__this, ___comparer, method) (( void (*) (List_1_t1183 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26958(__this, ___comparison, method) (( void (*) (List_1_t1183 *, Comparison_1_t3989 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m26959(__this, method) (( PersistentCallU5BU5D_t3985* (*) (List_1_t1183 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
#define List_1_TrimExcess_m26960(__this, method) (( void (*) (List_1_t1183 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m26961(__this, method) (( int32_t (*) (List_1_t1183 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26962(__this, ___value, method) (( void (*) (List_1_t1183 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m26963(__this, method) (( int32_t (*) (List_1_t1183 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m26964(__this, ___index, method) (( PersistentCall_t1182 * (*) (List_1_t1183 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m26965(__this, ___index, ___value, method) (( void (*) (List_1_t1183 *, int32_t, PersistentCall_t1182 *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)
