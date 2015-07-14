#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t1124;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t1123;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerable_1_t4504;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t4505;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ICollection_1_t4506;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ReadOnlyCollection_1_t3894;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t3892;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t3895;
// System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDesc>
struct IComparer_1_t4507;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
struct Comparison_1_t3897;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_49.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m25678(__this, method) (( void (*) (List_1_t1124 *, const MethodInfo*))List_1__ctor_m2584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25679(__this, ___collection, method) (( void (*) (List_1_t1124 *, Object_t*, const MethodInfo*))List_1__ctor_m16791_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m25680(__this, ___capacity, method) (( void (*) (List_1_t1124 *, int32_t, const MethodInfo*))List_1__ctor_m16793_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m25681(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16795_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25682(__this, method) (( Object_t* (*) (List_1_t1124 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25683(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1124 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6796_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25684(__this, method) (( Object_t * (*) (List_1_t1124 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6792_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25685(__this, ___item, method) (( int32_t (*) (List_1_t1124 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6801_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25686(__this, ___item, method) (( bool (*) (List_1_t1124 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6803_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25687(__this, ___item, method) (( int32_t (*) (List_1_t1124 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25688(__this, ___index, ___item, method) (( void (*) (List_1_t1124 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6805_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25689(__this, ___item, method) (( void (*) (List_1_t1124 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6806_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25690(__this, method) (( bool (*) (List_1_t1124 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25691(__this, method) (( bool (*) (List_1_t1124 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6794_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25692(__this, method) (( Object_t * (*) (List_1_t1124 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25693(__this, method) (( bool (*) (List_1_t1124 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25694(__this, method) (( bool (*) (List_1_t1124 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6798_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25695(__this, ___index, method) (( Object_t * (*) (List_1_t1124 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6799_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25696(__this, ___index, ___value, method) (( void (*) (List_1_t1124 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6800_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m25697(__this, ___item, method) (( void (*) (List_1_t1124 *, MatchDesc_t1123 *, const MethodInfo*))List_1_Add_m6809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25698(__this, ___newCount, method) (( void (*) (List_1_t1124 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16813_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25699(__this, ___collection, method) (( void (*) (List_1_t1124 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16815_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25700(__this, ___enumerable, method) (( void (*) (List_1_t1124 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16817_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25701(__this, ___collection, method) (( void (*) (List_1_t1124 *, Object_t*, const MethodInfo*))List_1_AddRange_m16819_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
#define List_1_AsReadOnly_m25702(__this, method) (( ReadOnlyCollection_1_t3894 * (*) (List_1_t1124 *, const MethodInfo*))List_1_AsReadOnly_m16821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m25703(__this, method) (( void (*) (List_1_t1124 *, const MethodInfo*))List_1_Clear_m6802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m25704(__this, ___item, method) (( bool (*) (List_1_t1124 *, MatchDesc_t1123 *, const MethodInfo*))List_1_Contains_m6810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25705(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1124 *, MatchDescU5BU5D_t3892*, int32_t, const MethodInfo*))List_1_CopyTo_m6811_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m25706(__this, ___match, method) (( MatchDesc_t1123 * (*) (List_1_t1124 *, Predicate_1_t3895 *, const MethodInfo*))List_1_Find_m16826_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25707(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3895 *, const MethodInfo*))List_1_CheckMatch_m16828_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25708(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1124 *, int32_t, int32_t, Predicate_1_t3895 *, const MethodInfo*))List_1_GetIndex_m16830_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m25709(__this, method) (( Enumerator_t3896  (*) (List_1_t1124 *, const MethodInfo*))List_1_GetEnumerator_m2687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m25710(__this, ___item, method) (( int32_t (*) (List_1_t1124 *, MatchDesc_t1123 *, const MethodInfo*))List_1_IndexOf_m6814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25711(__this, ___start, ___delta, method) (( void (*) (List_1_t1124 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16833_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25712(__this, ___index, method) (( void (*) (List_1_t1124 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16835_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m25713(__this, ___index, ___item, method) (( void (*) (List_1_t1124 *, int32_t, MatchDesc_t1123 *, const MethodInfo*))List_1_Insert_m6815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25714(__this, ___collection, method) (( void (*) (List_1_t1124 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16838_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m25715(__this, ___item, method) (( bool (*) (List_1_t1124 *, MatchDesc_t1123 *, const MethodInfo*))List_1_Remove_m6812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25716(__this, ___match, method) (( int32_t (*) (List_1_t1124 *, Predicate_1_t3895 *, const MethodInfo*))List_1_RemoveAll_m16841_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25717(__this, ___index, method) (( void (*) (List_1_t1124 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6807_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
#define List_1_Reverse_m25718(__this, method) (( void (*) (List_1_t1124 *, const MethodInfo*))List_1_Reverse_m16844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
#define List_1_Sort_m25719(__this, method) (( void (*) (List_1_t1124 *, const MethodInfo*))List_1_Sort_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25720(__this, ___comparer, method) (( void (*) (List_1_t1124 *, Object_t*, const MethodInfo*))List_1_Sort_m16848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25721(__this, ___comparison, method) (( void (*) (List_1_t1124 *, Comparison_1_t3897 *, const MethodInfo*))List_1_Sort_m16850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m25722(__this, method) (( MatchDescU5BU5D_t3892* (*) (List_1_t1124 *, const MethodInfo*))List_1_ToArray_m16852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
#define List_1_TrimExcess_m25723(__this, method) (( void (*) (List_1_t1124 *, const MethodInfo*))List_1_TrimExcess_m16854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m25724(__this, method) (( int32_t (*) (List_1_t1124 *, const MethodInfo*))List_1_get_Capacity_m16856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25725(__this, ___value, method) (( void (*) (List_1_t1124 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16858_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m25726(__this, method) (( int32_t (*) (List_1_t1124 *, const MethodInfo*))List_1_get_Count_m6793_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m25727(__this, ___index, method) (( MatchDesc_t1123 * (*) (List_1_t1124 *, int32_t, const MethodInfo*))List_1_get_Item_m6816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m25728(__this, ___index, ___value, method) (( void (*) (List_1_t1124 *, int32_t, MatchDesc_t1123 *, const MethodInfo*))List_1_set_Item_m6817_gshared)(__this, ___index, ___value, method)
