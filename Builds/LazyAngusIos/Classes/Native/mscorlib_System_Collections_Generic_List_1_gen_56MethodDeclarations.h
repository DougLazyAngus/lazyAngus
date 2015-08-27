#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t2808;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t2807;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerable_1_t9632;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t8472;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t9633;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ICollection_1_t9634;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ReadOnlyCollection_1_t8474;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t8475;
// System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDesc>
struct IComparer_1_t9635;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
struct Comparison_1_t8477;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_104.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m61488(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m61489(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m61490(__this, ___capacity, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(T[],System.Int32)
#define List_1__ctor_m61491(__this, ___data, ___size, method) (( void (*) (List_1_t2808 *, MatchDescU5BU5D_t8472*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m61492(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61493(__this, method) (( Object_t* (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m61494(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2808 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61495(__this, method) (( Object_t * (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m61496(__this, ___item, method) (( int32_t (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m61497(__this, ___item, method) (( bool (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m61498(__this, ___item, method) (( int32_t (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m61499(__this, ___index, ___item, method) (( void (*) (List_1_t2808 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m61500(__this, ___item, method) (( void (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61501(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61502(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m61503(__this, method) (( Object_t * (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m61504(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m61505(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m61506(__this, ___index, method) (( Object_t * (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m61507(__this, ___index, ___value, method) (( void (*) (List_1_t2808 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m61508(__this, ___item, method) (( void (*) (List_1_t2808 *, MatchDesc_t2807 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m61509(__this, ___newCount, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m61510(__this, ___idx, ___count, method) (( void (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m61511(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m61512(__this, ___enumerable, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m61513(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
#define List_1_AsReadOnly_m61514(__this, method) (( ReadOnlyCollection_1_t8474 * (*) (List_1_t2808 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m61515(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m61516(__this, ___item, method) (( bool (*) (List_1_t2808 *, MatchDesc_t2807 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m61517(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2808 *, MatchDescU5BU5D_t8472*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m61518(__this, ___match, method) (( MatchDesc_t2807 * (*) (List_1_t2808 *, Predicate_1_t8475 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m61519(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8475 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m61520(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2808 *, int32_t, int32_t, Predicate_1_t8475 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m61521(__this, method) (( Enumerator_t8476  (*) (List_1_t2808 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m61522(__this, ___index, ___count, method) (( List_1_t2808 * (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m61523(__this, ___item, method) (( int32_t (*) (List_1_t2808 *, MatchDesc_t2807 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m61524(__this, ___start, ___delta, method) (( void (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m61525(__this, ___index, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m61526(__this, ___index, ___item, method) (( void (*) (List_1_t2808 *, int32_t, MatchDesc_t2807 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m61527(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m61528(__this, ___index, ___collection, method) (( void (*) (List_1_t2808 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m61529(__this, ___index, ___collection, method) (( void (*) (List_1_t2808 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m61530(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2808 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m61531(__this, ___item, method) (( bool (*) (List_1_t2808 *, MatchDesc_t2807 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m61532(__this, ___match, method) (( int32_t (*) (List_1_t2808 *, Predicate_1_t8475 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m61533(__this, ___index, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m61534(__this, ___index, ___count, method) (( void (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
#define List_1_Reverse_m61535(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
#define List_1_Sort_m61536(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m61537(__this, ___comparer, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m61538(__this, ___comparison, method) (( void (*) (List_1_t2808 *, Comparison_1_t8477 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m61539(__this, method) (( MatchDescU5BU5D_t8472* (*) (List_1_t2808 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
#define List_1_TrimExcess_m61540(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m61541(__this, method) (( int32_t (*) (List_1_t2808 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m61542(__this, ___value, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m61543(__this, method) (( int32_t (*) (List_1_t2808 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m61544(__this, ___index, method) (( MatchDesc_t2807 * (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m61545(__this, ___index, ___value, method) (( void (*) (List_1_t2808 *, int32_t, MatchDesc_t2807 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
