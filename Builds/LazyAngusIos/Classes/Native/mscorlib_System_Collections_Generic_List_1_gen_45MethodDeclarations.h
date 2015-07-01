#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1163;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1157;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t4547;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t4548;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t4549;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t3968;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3966;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t1249;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
struct IComparer_1_t4550;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t3970;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6345(__this, method) (( void (*) (List_1_t1163 *, const MethodInfo*))List_1__ctor_m2341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26850(__this, ___collection, method) (( void (*) (List_1_t1163 *, Object_t*, const MethodInfo*))List_1__ctor_m16488_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m26851(__this, ___capacity, method) (( void (*) (List_1_t1163 *, int32_t, const MethodInfo*))List_1__ctor_m16490_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m26852(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16492_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26853(__this, method) (( Object_t* (*) (List_1_t1163 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26854(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1163 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26855(__this, method) (( Object_t * (*) (List_1_t1163 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26856(__this, ___item, method) (( int32_t (*) (List_1_t1163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6498_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26857(__this, ___item, method) (( bool (*) (List_1_t1163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6500_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26858(__this, ___item, method) (( int32_t (*) (List_1_t1163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26859(__this, ___index, ___item, method) (( void (*) (List_1_t1163 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6502_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26860(__this, ___item, method) (( void (*) (List_1_t1163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6503_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26861(__this, method) (( bool (*) (List_1_t1163 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26862(__this, method) (( bool (*) (List_1_t1163 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26863(__this, method) (( Object_t * (*) (List_1_t1163 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26864(__this, method) (( bool (*) (List_1_t1163 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26865(__this, method) (( bool (*) (List_1_t1163 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6495_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26866(__this, ___index, method) (( Object_t * (*) (List_1_t1163 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26867(__this, ___index, ___value, method) (( void (*) (List_1_t1163 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m26868(__this, ___item, method) (( void (*) (List_1_t1163 *, BaseInvokableCall_t1157 *, const MethodInfo*))List_1_Add_m6506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26869(__this, ___newCount, method) (( void (*) (List_1_t1163 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26870(__this, ___collection, method) (( void (*) (List_1_t1163 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16512_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26871(__this, ___enumerable, method) (( void (*) (List_1_t1163 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16514_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m6348(__this, ___collection, method) (( void (*) (List_1_t1163 *, Object_t*, const MethodInfo*))List_1_AddRange_m16516_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m26872(__this, method) (( ReadOnlyCollection_1_t3968 * (*) (List_1_t1163 *, const MethodInfo*))List_1_AsReadOnly_m16518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m26873(__this, method) (( void (*) (List_1_t1163 *, const MethodInfo*))List_1_Clear_m6499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m26874(__this, ___item, method) (( bool (*) (List_1_t1163 *, BaseInvokableCall_t1157 *, const MethodInfo*))List_1_Contains_m6507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26875(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1163 *, BaseInvokableCallU5BU5D_t3966*, int32_t, const MethodInfo*))List_1_CopyTo_m6508_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m26876(__this, ___match, method) (( BaseInvokableCall_t1157 * (*) (List_1_t1163 *, Predicate_1_t1249 *, const MethodInfo*))List_1_Find_m16523_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26877(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1249 *, const MethodInfo*))List_1_CheckMatch_m16525_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26878(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1163 *, int32_t, int32_t, Predicate_1_t1249 *, const MethodInfo*))List_1_GetIndex_m16527_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m26879(__this, method) (( Enumerator_t3969  (*) (List_1_t1163 *, const MethodInfo*))List_1_GetEnumerator_m2444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m26880(__this, ___item, method) (( int32_t (*) (List_1_t1163 *, BaseInvokableCall_t1157 *, const MethodInfo*))List_1_IndexOf_m6511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26881(__this, ___start, ___delta, method) (( void (*) (List_1_t1163 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16530_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26882(__this, ___index, method) (( void (*) (List_1_t1163 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m26883(__this, ___index, ___item, method) (( void (*) (List_1_t1163 *, int32_t, BaseInvokableCall_t1157 *, const MethodInfo*))List_1_Insert_m6512_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26884(__this, ___collection, method) (( void (*) (List_1_t1163 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16535_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m26885(__this, ___item, method) (( bool (*) (List_1_t1163 *, BaseInvokableCall_t1157 *, const MethodInfo*))List_1_Remove_m6509_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m6347(__this, ___match, method) (( int32_t (*) (List_1_t1163 *, Predicate_1_t1249 *, const MethodInfo*))List_1_RemoveAll_m16538_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26886(__this, ___index, method) (( void (*) (List_1_t1163 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6504_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m26887(__this, method) (( void (*) (List_1_t1163 *, const MethodInfo*))List_1_Reverse_m16541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m26888(__this, method) (( void (*) (List_1_t1163 *, const MethodInfo*))List_1_Sort_m16543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26889(__this, ___comparer, method) (( void (*) (List_1_t1163 *, Object_t*, const MethodInfo*))List_1_Sort_m16545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26890(__this, ___comparison, method) (( void (*) (List_1_t1163 *, Comparison_1_t3970 *, const MethodInfo*))List_1_Sort_m16547_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m26891(__this, method) (( BaseInvokableCallU5BU5D_t3966* (*) (List_1_t1163 *, const MethodInfo*))List_1_ToArray_m16549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m26892(__this, method) (( void (*) (List_1_t1163 *, const MethodInfo*))List_1_TrimExcess_m16551_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m26893(__this, method) (( int32_t (*) (List_1_t1163 *, const MethodInfo*))List_1_get_Capacity_m16553_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26894(__this, ___value, method) (( void (*) (List_1_t1163 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m26895(__this, method) (( int32_t (*) (List_1_t1163 *, const MethodInfo*))List_1_get_Count_m6490_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m26896(__this, ___index, method) (( BaseInvokableCall_t1157 * (*) (List_1_t1163 *, int32_t, const MethodInfo*))List_1_get_Item_m6513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m26897(__this, ___index, ___value, method) (( void (*) (List_1_t1163 *, int32_t, BaseInvokableCall_t1157 *, const MethodInfo*))List_1_set_Item_m6514_gshared)(__this, ___index, ___value, method)
