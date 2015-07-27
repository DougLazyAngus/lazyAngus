#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t1181;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t1180;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerable_1_t4612;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t4613;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ICollection_1_t4614;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ReadOnlyCollection_1_t3972;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t3970;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t3973;
// System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDesc>
struct IComparer_1_t4615;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
struct Comparison_1_t3975;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m26781(__this, method) (( void (*) (List_1_t1181 *, const MethodInfo*))List_1__ctor_m3123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26782(__this, ___collection, method) (( void (*) (List_1_t1181 *, Object_t*, const MethodInfo*))List_1__ctor_m17404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m26783(__this, ___capacity, method) (( void (*) (List_1_t1181 *, int32_t, const MethodInfo*))List_1__ctor_m17406_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m26784(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17408_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26785(__this, method) (( Object_t* (*) (List_1_t1181 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26786(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1181 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26787(__this, method) (( Object_t * (*) (List_1_t1181 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26788(__this, ___item, method) (( int32_t (*) (List_1_t1181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26789(__this, ___item, method) (( bool (*) (List_1_t1181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26790(__this, ___item, method) (( int32_t (*) (List_1_t1181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26791(__this, ___index, ___item, method) (( void (*) (List_1_t1181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26792(__this, ___item, method) (( void (*) (List_1_t1181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26793(__this, method) (( bool (*) (List_1_t1181 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26794(__this, method) (( bool (*) (List_1_t1181 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26795(__this, method) (( Object_t * (*) (List_1_t1181 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26796(__this, method) (( bool (*) (List_1_t1181 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26797(__this, method) (( bool (*) (List_1_t1181 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7415_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26798(__this, ___index, method) (( Object_t * (*) (List_1_t1181 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26799(__this, ___index, ___value, method) (( void (*) (List_1_t1181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7417_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m26800(__this, ___item, method) (( void (*) (List_1_t1181 *, MatchDesc_t1180 *, const MethodInfo*))List_1_Add_m7426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26801(__this, ___newCount, method) (( void (*) (List_1_t1181 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17426_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26802(__this, ___collection, method) (( void (*) (List_1_t1181 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26803(__this, ___enumerable, method) (( void (*) (List_1_t1181 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17430_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26804(__this, ___collection, method) (( void (*) (List_1_t1181 *, Object_t*, const MethodInfo*))List_1_AddRange_m17432_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
#define List_1_AsReadOnly_m26805(__this, method) (( ReadOnlyCollection_1_t3972 * (*) (List_1_t1181 *, const MethodInfo*))List_1_AsReadOnly_m17434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m26806(__this, method) (( void (*) (List_1_t1181 *, const MethodInfo*))List_1_Clear_m7419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m26807(__this, ___item, method) (( bool (*) (List_1_t1181 *, MatchDesc_t1180 *, const MethodInfo*))List_1_Contains_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26808(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1181 *, MatchDescU5BU5D_t3970*, int32_t, const MethodInfo*))List_1_CopyTo_m7428_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m26809(__this, ___match, method) (( MatchDesc_t1180 * (*) (List_1_t1181 *, Predicate_1_t3973 *, const MethodInfo*))List_1_Find_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26810(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3973 *, const MethodInfo*))List_1_CheckMatch_m17441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26811(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1181 *, int32_t, int32_t, Predicate_1_t3973 *, const MethodInfo*))List_1_GetIndex_m17443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m26812(__this, method) (( Enumerator_t3974  (*) (List_1_t1181 *, const MethodInfo*))List_1_GetEnumerator_m3281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m26813(__this, ___item, method) (( int32_t (*) (List_1_t1181 *, MatchDesc_t1180 *, const MethodInfo*))List_1_IndexOf_m7431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26814(__this, ___start, ___delta, method) (( void (*) (List_1_t1181 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26815(__this, ___index, method) (( void (*) (List_1_t1181 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m26816(__this, ___index, ___item, method) (( void (*) (List_1_t1181 *, int32_t, MatchDesc_t1180 *, const MethodInfo*))List_1_Insert_m7432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26817(__this, ___collection, method) (( void (*) (List_1_t1181 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17451_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m26818(__this, ___item, method) (( bool (*) (List_1_t1181 *, MatchDesc_t1180 *, const MethodInfo*))List_1_Remove_m7429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26819(__this, ___match, method) (( int32_t (*) (List_1_t1181 *, Predicate_1_t3973 *, const MethodInfo*))List_1_RemoveAll_m17454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26820(__this, ___index, method) (( void (*) (List_1_t1181 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
#define List_1_Reverse_m26821(__this, method) (( void (*) (List_1_t1181 *, const MethodInfo*))List_1_Reverse_m17457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
#define List_1_Sort_m26822(__this, method) (( void (*) (List_1_t1181 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26823(__this, ___comparer, method) (( void (*) (List_1_t1181 *, Object_t*, const MethodInfo*))List_1_Sort_m17461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26824(__this, ___comparison, method) (( void (*) (List_1_t1181 *, Comparison_1_t3975 *, const MethodInfo*))List_1_Sort_m17463_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m26825(__this, method) (( MatchDescU5BU5D_t3970* (*) (List_1_t1181 *, const MethodInfo*))List_1_ToArray_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
#define List_1_TrimExcess_m26826(__this, method) (( void (*) (List_1_t1181 *, const MethodInfo*))List_1_TrimExcess_m17467_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m26827(__this, method) (( int32_t (*) (List_1_t1181 *, const MethodInfo*))List_1_get_Capacity_m17469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26828(__this, ___value, method) (( void (*) (List_1_t1181 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m26829(__this, method) (( int32_t (*) (List_1_t1181 *, const MethodInfo*))List_1_get_Count_m7410_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m26830(__this, ___index, method) (( MatchDesc_t1180 * (*) (List_1_t1181 *, int32_t, const MethodInfo*))List_1_get_Item_m7433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m26831(__this, ___index, ___value, method) (( void (*) (List_1_t1181 *, int32_t, MatchDesc_t1180 *, const MethodInfo*))List_1_set_Item_m7434_gshared)(__this, ___index, ___value, method)
