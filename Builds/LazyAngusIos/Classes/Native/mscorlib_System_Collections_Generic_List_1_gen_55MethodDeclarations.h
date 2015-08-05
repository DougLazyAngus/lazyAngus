#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t2841;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2835;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t9594;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t8499;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t9595;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t9596;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t8501;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t2914;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
struct IComparer_1_t9597;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t8503;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_102.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9954(__this, method) (( void (*) (List_1_t2841 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m62076(__this, ___collection, method) (( void (*) (List_1_t2841 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m62077(__this, ___capacity, method) (( void (*) (List_1_t2841 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(T[],System.Int32)
#define List_1__ctor_m62078(__this, ___data, ___size, method) (( void (*) (List_1_t2841 *, BaseInvokableCallU5BU5D_t8499*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m62079(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62080(__this, method) (( Object_t* (*) (List_1_t2841 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m62081(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2841 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m62082(__this, method) (( Object_t * (*) (List_1_t2841 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m62083(__this, ___item, method) (( int32_t (*) (List_1_t2841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m62084(__this, ___item, method) (( bool (*) (List_1_t2841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m62085(__this, ___item, method) (( int32_t (*) (List_1_t2841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m62086(__this, ___index, ___item, method) (( void (*) (List_1_t2841 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m62087(__this, ___item, method) (( void (*) (List_1_t2841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62088(__this, method) (( bool (*) (List_1_t2841 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m62089(__this, method) (( bool (*) (List_1_t2841 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m62090(__this, method) (( Object_t * (*) (List_1_t2841 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m62091(__this, method) (( bool (*) (List_1_t2841 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m62092(__this, method) (( bool (*) (List_1_t2841 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m62093(__this, ___index, method) (( Object_t * (*) (List_1_t2841 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m62094(__this, ___index, ___value, method) (( void (*) (List_1_t2841 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m62095(__this, ___item, method) (( void (*) (List_1_t2841 *, BaseInvokableCall_t2835 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m62096(__this, ___newCount, method) (( void (*) (List_1_t2841 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m62097(__this, ___idx, ___count, method) (( void (*) (List_1_t2841 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m62098(__this, ___collection, method) (( void (*) (List_1_t2841 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m62099(__this, ___enumerable, method) (( void (*) (List_1_t2841 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m9957(__this, ___collection, method) (( void (*) (List_1_t2841 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m62100(__this, method) (( ReadOnlyCollection_1_t8501 * (*) (List_1_t2841 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m62101(__this, method) (( void (*) (List_1_t2841 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m62102(__this, ___item, method) (( bool (*) (List_1_t2841 *, BaseInvokableCall_t2835 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m62103(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2841 *, BaseInvokableCallU5BU5D_t8499*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m62104(__this, ___match, method) (( BaseInvokableCall_t2835 * (*) (List_1_t2841 *, Predicate_1_t2914 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m62105(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2914 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m62106(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2841 *, int32_t, int32_t, Predicate_1_t2914 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m62107(__this, method) (( Enumerator_t8502  (*) (List_1_t2841 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m62108(__this, ___index, ___count, method) (( List_1_t2841 * (*) (List_1_t2841 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m62109(__this, ___item, method) (( int32_t (*) (List_1_t2841 *, BaseInvokableCall_t2835 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m62110(__this, ___start, ___delta, method) (( void (*) (List_1_t2841 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m62111(__this, ___index, method) (( void (*) (List_1_t2841 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m62112(__this, ___index, ___item, method) (( void (*) (List_1_t2841 *, int32_t, BaseInvokableCall_t2835 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m62113(__this, ___collection, method) (( void (*) (List_1_t2841 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m62114(__this, ___index, ___collection, method) (( void (*) (List_1_t2841 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m62115(__this, ___index, ___collection, method) (( void (*) (List_1_t2841 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m62116(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2841 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m62117(__this, ___item, method) (( bool (*) (List_1_t2841 *, BaseInvokableCall_t2835 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m9956(__this, ___match, method) (( int32_t (*) (List_1_t2841 *, Predicate_1_t2914 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m62118(__this, ___index, method) (( void (*) (List_1_t2841 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m62119(__this, ___index, ___count, method) (( void (*) (List_1_t2841 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m62120(__this, method) (( void (*) (List_1_t2841 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m62121(__this, method) (( void (*) (List_1_t2841 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m62122(__this, ___comparer, method) (( void (*) (List_1_t2841 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m62123(__this, ___comparison, method) (( void (*) (List_1_t2841 *, Comparison_1_t8503 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m62124(__this, method) (( BaseInvokableCallU5BU5D_t8499* (*) (List_1_t2841 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m62125(__this, method) (( void (*) (List_1_t2841 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m62126(__this, method) (( int32_t (*) (List_1_t2841 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m62127(__this, ___value, method) (( void (*) (List_1_t2841 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m62128(__this, method) (( int32_t (*) (List_1_t2841 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m62129(__this, ___index, method) (( BaseInvokableCall_t2835 * (*) (List_1_t2841 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m62130(__this, ___index, ___value, method) (( void (*) (List_1_t2841 *, int32_t, BaseInvokableCall_t2835 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)
