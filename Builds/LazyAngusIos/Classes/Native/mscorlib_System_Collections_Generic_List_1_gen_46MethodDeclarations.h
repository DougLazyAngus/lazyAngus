#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t2666;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2665;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t9498;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t8327;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t9499;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t9500;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t8329;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t8330;
// System.Collections.Generic.IComparer`1<UnityEngine.GUILayoutEntry>
struct IComparer_1_t9501;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t8331;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9835(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1__ctor_m3471_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59605(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1__ctor_m7211_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m59606(__this, ___capacity, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1__ctor_m21311_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m59607(__this, ___data, ___size, method) (( void (*) (List_1_t2666 *, GUILayoutEntryU5BU5D_t8327*, int32_t, const MethodInfo*))List_1__ctor_m21313_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m59608(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21315_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59609(__this, method) (( Object_t* (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10104_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59610(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2666 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10087_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59611(__this, method) (( Object_t * (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10083_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59612(__this, ___item, method) (( int32_t (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10092_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59613(__this, ___item, method) (( bool (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10094_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59614(__this, ___item, method) (( int32_t (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10095_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59615(__this, ___index, ___item, method) (( void (*) (List_1_t2666 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10096_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59616(__this, ___item, method) (( void (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10097_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59617(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59618(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59619(__this, method) (( Object_t * (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59620(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59621(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10089_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59622(__this, ___index, method) (( Object_t * (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10090_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59623(__this, ___index, ___value, method) (( void (*) (List_1_t2666 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10091_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m59624(__this, ___item, method) (( void (*) (List_1_t2666 *, GUILayoutEntry_t2665 *, const MethodInfo*))List_1_Add_m10100_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59625(__this, ___newCount, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21333_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59626(__this, ___idx, ___count, method) (( void (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21335_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59627(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21337_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59628(__this, ___enumerable, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21339_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59629(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_AddRange_m21341_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m59630(__this, method) (( ReadOnlyCollection_1_t8329 * (*) (List_1_t2666 *, const MethodInfo*))List_1_AsReadOnly_m21343_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m59631(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_Clear_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m59632(__this, ___item, method) (( bool (*) (List_1_t2666 *, GUILayoutEntry_t2665 *, const MethodInfo*))List_1_Contains_m10101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59633(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2666 *, GUILayoutEntryU5BU5D_t8327*, int32_t, const MethodInfo*))List_1_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m59634(__this, ___match, method) (( GUILayoutEntry_t2665 * (*) (List_1_t2666 *, Predicate_1_t8330 *, const MethodInfo*))List_1_Find_m21348_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59635(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8330 *, const MethodInfo*))List_1_CheckMatch_m21350_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59636(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2666 *, int32_t, int32_t, Predicate_1_t8330 *, const MethodInfo*))List_1_GetIndex_m21352_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m9832(__this, method) (( Enumerator_t2876  (*) (List_1_t2666 *, const MethodInfo*))List_1_GetEnumerator_m3627_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59637(__this, ___index, ___count, method) (( List_1_t2666 * (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21354_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m59638(__this, ___item, method) (( int32_t (*) (List_1_t2666 *, GUILayoutEntry_t2665 *, const MethodInfo*))List_1_IndexOf_m10105_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59639(__this, ___start, ___delta, method) (( void (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21357_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59640(__this, ___index, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21359_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m59641(__this, ___index, ___item, method) (( void (*) (List_1_t2666 *, int32_t, GUILayoutEntry_t2665 *, const MethodInfo*))List_1_Insert_m10106_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59642(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21362_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59643(__this, ___index, ___collection, method) (( void (*) (List_1_t2666 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21364_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59644(__this, ___index, ___collection, method) (( void (*) (List_1_t2666 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21366_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59645(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2666 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21368_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m59646(__this, ___item, method) (( bool (*) (List_1_t2666 *, GUILayoutEntry_t2665 *, const MethodInfo*))List_1_Remove_m10103_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59647(__this, ___match, method) (( int32_t (*) (List_1_t2666 *, Predicate_1_t8330 *, const MethodInfo*))List_1_RemoveAll_m21371_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59648(__this, ___index, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59649(__this, ___index, ___count, method) (( void (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21374_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m59650(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_Reverse_m21376_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m59651(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_Sort_m21378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59652(__this, ___comparer, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_Sort_m21380_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59653(__this, ___comparison, method) (( void (*) (List_1_t2666 *, Comparison_1_t8331 *, const MethodInfo*))List_1_Sort_m21382_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m59654(__this, method) (( GUILayoutEntryU5BU5D_t8327* (*) (List_1_t2666 *, const MethodInfo*))List_1_ToArray_m21384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m59655(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_TrimExcess_m21386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m59656(__this, method) (( int32_t (*) (List_1_t2666 *, const MethodInfo*))List_1_get_Capacity_m21388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59657(__this, ___value, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21390_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m59658(__this, method) (( int32_t (*) (List_1_t2666 *, const MethodInfo*))List_1_get_Count_m10084_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m59659(__this, ___index, method) (( GUILayoutEntry_t2665 * (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_get_Item_m10107_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m59660(__this, ___index, ___value, method) (( void (*) (List_1_t2666 *, int32_t, GUILayoutEntry_t2665 *, const MethodInfo*))List_1_set_Item_m10108_gshared)(__this, ___index, ___value, method)
