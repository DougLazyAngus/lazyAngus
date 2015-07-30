#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t910;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t599;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t8943;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t5819;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t8944;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t8945;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t5821;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t5822;
// System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
struct IComparer_1_t8946;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t5824;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5839(__this, method) (( void (*) (List_1_t910 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29145(__this, ___collection, method) (( void (*) (List_1_t910 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m29146(__this, ___capacity, method) (( void (*) (List_1_t910 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(T[],System.Int32)
#define List_1__ctor_m29147(__this, ___data, ___size, method) (( void (*) (List_1_t910 *, CanvasGroupU5BU5D_t5819*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m29148(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29149(__this, method) (( Object_t* (*) (List_1_t910 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29150(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t910 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29151(__this, method) (( Object_t * (*) (List_1_t910 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29152(__this, ___item, method) (( int32_t (*) (List_1_t910 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29153(__this, ___item, method) (( bool (*) (List_1_t910 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29154(__this, ___item, method) (( int32_t (*) (List_1_t910 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29155(__this, ___index, ___item, method) (( void (*) (List_1_t910 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29156(__this, ___item, method) (( void (*) (List_1_t910 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29157(__this, method) (( bool (*) (List_1_t910 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29158(__this, method) (( bool (*) (List_1_t910 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29159(__this, method) (( Object_t * (*) (List_1_t910 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29160(__this, method) (( bool (*) (List_1_t910 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29161(__this, method) (( bool (*) (List_1_t910 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29162(__this, ___index, method) (( Object_t * (*) (List_1_t910 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29163(__this, ___index, ___value, method) (( void (*) (List_1_t910 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m29164(__this, ___item, method) (( void (*) (List_1_t910 *, CanvasGroup_t599 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29165(__this, ___newCount, method) (( void (*) (List_1_t910 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29166(__this, ___idx, ___count, method) (( void (*) (List_1_t910 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29167(__this, ___collection, method) (( void (*) (List_1_t910 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29168(__this, ___enumerable, method) (( void (*) (List_1_t910 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29169(__this, ___collection, method) (( void (*) (List_1_t910 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m29170(__this, method) (( ReadOnlyCollection_1_t5821 * (*) (List_1_t910 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m29171(__this, method) (( void (*) (List_1_t910 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m29172(__this, ___item, method) (( bool (*) (List_1_t910 *, CanvasGroup_t599 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29173(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t910 *, CanvasGroupU5BU5D_t5819*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m29174(__this, ___match, method) (( CanvasGroup_t599 * (*) (List_1_t910 *, Predicate_1_t5822 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29175(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5822 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29176(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t910 *, int32_t, int32_t, Predicate_1_t5822 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m29177(__this, method) (( Enumerator_t5823  (*) (List_1_t910 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29178(__this, ___index, ___count, method) (( List_1_t910 * (*) (List_1_t910 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m29179(__this, ___item, method) (( int32_t (*) (List_1_t910 *, CanvasGroup_t599 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29180(__this, ___start, ___delta, method) (( void (*) (List_1_t910 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29181(__this, ___index, method) (( void (*) (List_1_t910 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m29182(__this, ___index, ___item, method) (( void (*) (List_1_t910 *, int32_t, CanvasGroup_t599 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29183(__this, ___collection, method) (( void (*) (List_1_t910 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29184(__this, ___index, ___collection, method) (( void (*) (List_1_t910 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29185(__this, ___index, ___collection, method) (( void (*) (List_1_t910 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29186(__this, ___index, ___enumerable, method) (( void (*) (List_1_t910 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m29187(__this, ___item, method) (( bool (*) (List_1_t910 *, CanvasGroup_t599 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29188(__this, ___match, method) (( int32_t (*) (List_1_t910 *, Predicate_1_t5822 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29189(__this, ___index, method) (( void (*) (List_1_t910 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29190(__this, ___index, ___count, method) (( void (*) (List_1_t910 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m29191(__this, method) (( void (*) (List_1_t910 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m29192(__this, method) (( void (*) (List_1_t910 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29193(__this, ___comparer, method) (( void (*) (List_1_t910 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29194(__this, ___comparison, method) (( void (*) (List_1_t910 *, Comparison_1_t5824 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m29195(__this, method) (( CanvasGroupU5BU5D_t5819* (*) (List_1_t910 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m29196(__this, method) (( void (*) (List_1_t910 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m29197(__this, method) (( int32_t (*) (List_1_t910 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29198(__this, ___value, method) (( void (*) (List_1_t910 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m29199(__this, method) (( int32_t (*) (List_1_t910 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m29200(__this, ___index, method) (( CanvasGroup_t599 * (*) (List_1_t910 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m29201(__this, ___index, ___value, method) (( void (*) (List_1_t910 *, int32_t, CanvasGroup_t599 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)
