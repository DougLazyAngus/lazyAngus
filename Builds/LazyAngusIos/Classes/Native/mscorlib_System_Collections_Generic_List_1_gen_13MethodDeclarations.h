﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<TweetTemplate>
struct List_1_t320;
// System.Object
struct Object_t;
// TweetTemplate
struct TweetTemplate_t323;
// System.Collections.Generic.IEnumerable`1<TweetTemplate>
struct IEnumerable_1_t8893;
// TweetTemplate[]
struct TweetTemplateU5BU5D_t5615;
// System.Collections.Generic.IEnumerator`1<TweetTemplate>
struct IEnumerator_1_t8884;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<TweetTemplate>
struct ICollection_1_t8879;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TweetTemplate>
struct ReadOnlyCollection_1_t5628;
// System.Predicate`1<TweetTemplate>
struct Predicate_1_t5629;
// System.Collections.Generic.IComparer`1<TweetTemplate>
struct IComparer_1_t8894;
// System.Comparison`1<TweetTemplate>
struct Comparison_1_t5631;
// System.Collections.Generic.List`1/Enumerator<TweetTemplate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3938(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25569(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Int32)
#define List_1__ctor_m25570(__this, ___capacity, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(T[],System.Int32)
#define List_1__ctor_m25571(__this, ___data, ___size, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t5615*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.cctor()
#define List_1__cctor_m25572(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25573(__this, method) (( Object_t* (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25574(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25575(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25576(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25577(__this, ___item, method) (( bool (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25578(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25579(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25580(__this, ___item, method) (( void (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25581(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25582(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25583(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25584(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25585(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25586(__this, ___index, method) (( Object_t * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25587(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Add(T)
#define List_1_Add_m25588(__this, ___item, method) (( void (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25589(__this, ___newCount, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25590(__this, ___idx, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25591(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25592(__this, ___enumerable, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25593(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<TweetTemplate>::AsReadOnly()
#define List_1_AsReadOnly_m25594(__this, method) (( ReadOnlyCollection_1_t5628 * (*) (List_1_t320 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Clear()
#define List_1_Clear_m25595(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Contains(T)
#define List_1_Contains_m25596(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25597(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t5615*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<TweetTemplate>::Find(System.Predicate`1<T>)
#define List_1_Find_m25598(__this, ___match, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, Predicate_1_t5629 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25599(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5629 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25600(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t320 *, int32_t, int32_t, Predicate_1_t5629 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TweetTemplate>::GetEnumerator()
#define List_1_GetEnumerator_m25601(__this, method) (( Enumerator_t5630  (*) (List_1_t320 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<TweetTemplate>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25602(__this, ___index, ___count, method) (( List_1_t320 * (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::IndexOf(T)
#define List_1_IndexOf_m25603(__this, ___item, method) (( int32_t (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25604(__this, ___start, ___delta, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25605(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Insert(System.Int32,T)
#define List_1_Insert_m25606(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25607(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25608(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25609(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25610(__this, ___index, ___enumerable, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Remove(T)
#define List_1_Remove_m25611(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25612(__this, ___match, method) (( int32_t (*) (List_1_t320 *, Predicate_1_t5629 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25613(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25614(__this, ___index, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Reverse()
#define List_1_Reverse_m25615(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort()
#define List_1_Sort_m25616(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25617(__this, ___comparer, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25618(__this, ___comparison, method) (( void (*) (List_1_t320 *, Comparison_1_t5631 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<TweetTemplate>::ToArray()
#define List_1_ToArray_m25619(__this, method) (( TweetTemplateU5BU5D_t5615* (*) (List_1_t320 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::TrimExcess()
#define List_1_TrimExcess_m25620(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Capacity()
#define List_1_get_Capacity_m25621(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25622(__this, ___value, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Count()
#define List_1_get_Count_m25623(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<TweetTemplate>::get_Item(System.Int32)
#define List_1_get_Item_m25624(__this, ___index, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Item(System.Int32,T)
#define List_1_set_Item_m25625(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
