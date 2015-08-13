#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t2807;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t2806;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerable_1_t9621;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t8465;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t9622;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ICollection_1_t9623;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ReadOnlyCollection_1_t8467;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t8468;
// System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDesc>
struct IComparer_1_t9624;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
struct Comparison_1_t8470;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_103.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m61367(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m61368(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1__ctor_m7470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m61369(__this, ___capacity, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(T[],System.Int32)
#define List_1__ctor_m61370(__this, ___data, ___size, method) (( void (*) (List_1_t2807 *, MatchDescU5BU5D_t8465*, int32_t, const MethodInfo*))List_1__ctor_m21571_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m61371(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21573_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61372(__this, method) (( Object_t* (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m61373(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2807 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61374(__this, method) (( Object_t * (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m61375(__this, ___item, method) (( int32_t (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m61376(__this, ___item, method) (( bool (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m61377(__this, ___item, method) (( int32_t (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m61378(__this, ___index, ___item, method) (( void (*) (List_1_t2807 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m61379(__this, ___item, method) (( void (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61380(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61381(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m61382(__this, method) (( Object_t * (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m61383(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m61384(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m61385(__this, ___index, method) (( Object_t * (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m61386(__this, ___index, ___value, method) (( void (*) (List_1_t2807 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m61387(__this, ___item, method) (( void (*) (List_1_t2807 *, MatchDesc_t2806 *, const MethodInfo*))List_1_Add_m10356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m61388(__this, ___newCount, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m61389(__this, ___idx, ___count, method) (( void (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21593_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m61390(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m61391(__this, ___enumerable, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m61392(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_AddRange_m21599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
#define List_1_AsReadOnly_m61393(__this, method) (( ReadOnlyCollection_1_t8467 * (*) (List_1_t2807 *, const MethodInfo*))List_1_AsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m61394(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_Clear_m10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m61395(__this, ___item, method) (( bool (*) (List_1_t2807 *, MatchDesc_t2806 *, const MethodInfo*))List_1_Contains_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m61396(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2807 *, MatchDescU5BU5D_t8465*, int32_t, const MethodInfo*))List_1_CopyTo_m10358_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m61397(__this, ___match, method) (( MatchDesc_t2806 * (*) (List_1_t2807 *, Predicate_1_t8468 *, const MethodInfo*))List_1_Find_m21606_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m61398(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8468 *, const MethodInfo*))List_1_CheckMatch_m21608_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m61399(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2807 *, int32_t, int32_t, Predicate_1_t8468 *, const MethodInfo*))List_1_GetIndex_m21610_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m61400(__this, method) (( Enumerator_t8469  (*) (List_1_t2807 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m61401(__this, ___index, ___count, method) (( List_1_t2807 * (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21612_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m61402(__this, ___item, method) (( int32_t (*) (List_1_t2807 *, MatchDesc_t2806 *, const MethodInfo*))List_1_IndexOf_m10361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m61403(__this, ___start, ___delta, method) (( void (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21615_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m61404(__this, ___index, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m61405(__this, ___index, ___item, method) (( void (*) (List_1_t2807 *, int32_t, MatchDesc_t2806 *, const MethodInfo*))List_1_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m61406(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21620_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m61407(__this, ___index, ___collection, method) (( void (*) (List_1_t2807 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m61408(__this, ___index, ___collection, method) (( void (*) (List_1_t2807 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21624_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m61409(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2807 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21626_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m61410(__this, ___item, method) (( bool (*) (List_1_t2807 *, MatchDesc_t2806 *, const MethodInfo*))List_1_Remove_m10359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m61411(__this, ___match, method) (( int32_t (*) (List_1_t2807 *, Predicate_1_t8468 *, const MethodInfo*))List_1_RemoveAll_m21629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m61412(__this, ___index, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m61413(__this, ___index, ___count, method) (( void (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
#define List_1_Reverse_m61414(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_Reverse_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
#define List_1_Sort_m61415(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m61416(__this, ___comparer, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m61417(__this, ___comparison, method) (( void (*) (List_1_t2807 *, Comparison_1_t8470 *, const MethodInfo*))List_1_Sort_m21640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m61418(__this, method) (( MatchDescU5BU5D_t8465* (*) (List_1_t2807 *, const MethodInfo*))List_1_ToArray_m21642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
#define List_1_TrimExcess_m61419(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_TrimExcess_m21644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m61420(__this, method) (( int32_t (*) (List_1_t2807 *, const MethodInfo*))List_1_get_Capacity_m21646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m61421(__this, ___value, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m61422(__this, method) (( int32_t (*) (List_1_t2807 *, const MethodInfo*))List_1_get_Count_m10340_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m61423(__this, ___index, method) (( MatchDesc_t2806 * (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_get_Item_m10363_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m61424(__this, ___index, ___value, method) (( void (*) (List_1_t2807 *, int32_t, MatchDesc_t2806 *, const MethodInfo*))List_1_set_Item_m10364_gshared)(__this, ___index, ___value, method)
