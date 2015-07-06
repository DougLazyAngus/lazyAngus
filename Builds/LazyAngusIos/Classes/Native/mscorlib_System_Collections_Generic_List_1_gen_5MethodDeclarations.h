#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t510;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t275;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t4203;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t4204;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t4205;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t3423;
// GPScore[]
struct GPScoreU5BU5D_t3421;
// System.Predicate`1<GPScore>
struct Predicate_1_t3424;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t4206;
// System.Comparison`1<GPScore>
struct Comparison_1_t3425;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m2536(__this, method) (( void (*) (List_1_t510 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18626(__this, ___collection, method) (( void (*) (List_1_t510 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m18627(__this, ___capacity, method) (( void (*) (List_1_t510 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m18628(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18629(__this, method) (( Object_t* (*) (List_1_t510 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18630(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t510 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18631(__this, method) (( Object_t * (*) (List_1_t510 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18632(__this, ___item, method) (( int32_t (*) (List_1_t510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18633(__this, ___item, method) (( bool (*) (List_1_t510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18634(__this, ___item, method) (( int32_t (*) (List_1_t510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18635(__this, ___index, ___item, method) (( void (*) (List_1_t510 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18636(__this, ___item, method) (( void (*) (List_1_t510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18637(__this, method) (( bool (*) (List_1_t510 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18638(__this, method) (( bool (*) (List_1_t510 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18639(__this, method) (( Object_t * (*) (List_1_t510 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18640(__this, method) (( bool (*) (List_1_t510 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18641(__this, method) (( bool (*) (List_1_t510 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18642(__this, ___index, method) (( Object_t * (*) (List_1_t510 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18643(__this, ___index, ___value, method) (( void (*) (List_1_t510 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m18644(__this, ___item, method) (( void (*) (List_1_t510 *, GPScore_t275 *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18645(__this, ___newCount, method) (( void (*) (List_1_t510 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18646(__this, ___collection, method) (( void (*) (List_1_t510 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18647(__this, ___enumerable, method) (( void (*) (List_1_t510 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m2538(__this, ___collection, method) (( void (*) (List_1_t510 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m18648(__this, method) (( ReadOnlyCollection_1_t3423 * (*) (List_1_t510 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m18649(__this, method) (( void (*) (List_1_t510 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m18650(__this, ___item, method) (( bool (*) (List_1_t510 *, GPScore_t275 *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18651(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t510 *, GPScoreU5BU5D_t3421*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m18652(__this, ___match, method) (( GPScore_t275 * (*) (List_1_t510 *, Predicate_1_t3424 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18653(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3424 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18654(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t510 *, int32_t, int32_t, Predicate_1_t3424 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m2539(__this, method) (( Enumerator_t553  (*) (List_1_t510 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m18655(__this, ___item, method) (( int32_t (*) (List_1_t510 *, GPScore_t275 *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18656(__this, ___start, ___delta, method) (( void (*) (List_1_t510 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18657(__this, ___index, method) (( void (*) (List_1_t510 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m18658(__this, ___index, ___item, method) (( void (*) (List_1_t510 *, int32_t, GPScore_t275 *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18659(__this, ___collection, method) (( void (*) (List_1_t510 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m18660(__this, ___item, method) (( bool (*) (List_1_t510 *, GPScore_t275 *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18661(__this, ___match, method) (( int32_t (*) (List_1_t510 *, Predicate_1_t3424 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18662(__this, ___index, method) (( void (*) (List_1_t510 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m18663(__this, method) (( void (*) (List_1_t510 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m18664(__this, method) (( void (*) (List_1_t510 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18665(__this, ___comparer, method) (( void (*) (List_1_t510 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18666(__this, ___comparison, method) (( void (*) (List_1_t510 *, Comparison_1_t3425 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m18667(__this, method) (( GPScoreU5BU5D_t3421* (*) (List_1_t510 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m18668(__this, method) (( void (*) (List_1_t510 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m18669(__this, method) (( int32_t (*) (List_1_t510 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18670(__this, ___value, method) (( void (*) (List_1_t510 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m18671(__this, method) (( int32_t (*) (List_1_t510 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m18672(__this, ___index, method) (( GPScore_t275 * (*) (List_1_t510 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m18673(__this, ___index, ___value, method) (( void (*) (List_1_t510 *, int32_t, GPScore_t275 *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)
