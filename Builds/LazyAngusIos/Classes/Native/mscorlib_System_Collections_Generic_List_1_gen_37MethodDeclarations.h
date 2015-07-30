#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t943;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t504;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>
struct IEnumerable_1_t8954;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t5842;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>
struct IEnumerator_1_t8955;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>
struct ICollection_1_t8956;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
struct ReadOnlyCollection_1_t5844;
// System.Predicate`1<UnityEngine.RectTransform>
struct Predicate_1_t5845;
// System.Collections.Generic.IComparer`1<UnityEngine.RectTransform>
struct IComparer_1_t8957;
// System.Comparison`1<UnityEngine.RectTransform>
struct Comparison_1_t5847;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5902(__this, method) (( void (*) (List_1_t943 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29489(__this, ___collection, method) (( void (*) (List_1_t943 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
#define List_1__ctor_m29490(__this, ___capacity, method) (( void (*) (List_1_t943 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(T[],System.Int32)
#define List_1__ctor_m29491(__this, ___data, ___size, method) (( void (*) (List_1_t943 *, RectTransformU5BU5D_t5842*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
#define List_1__cctor_m29492(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29493(__this, method) (( Object_t* (*) (List_1_t943 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29494(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t943 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29495(__this, method) (( Object_t * (*) (List_1_t943 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29496(__this, ___item, method) (( int32_t (*) (List_1_t943 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29497(__this, ___item, method) (( bool (*) (List_1_t943 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29498(__this, ___item, method) (( int32_t (*) (List_1_t943 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29499(__this, ___index, ___item, method) (( void (*) (List_1_t943 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29500(__this, ___item, method) (( void (*) (List_1_t943 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29501(__this, method) (( bool (*) (List_1_t943 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29502(__this, method) (( bool (*) (List_1_t943 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29503(__this, method) (( Object_t * (*) (List_1_t943 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29504(__this, method) (( bool (*) (List_1_t943 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29505(__this, method) (( bool (*) (List_1_t943 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29506(__this, ___index, method) (( Object_t * (*) (List_1_t943 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29507(__this, ___index, ___value, method) (( void (*) (List_1_t943 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
#define List_1_Add_m29508(__this, ___item, method) (( void (*) (List_1_t943 *, RectTransform_t504 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29509(__this, ___newCount, method) (( void (*) (List_1_t943 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29510(__this, ___idx, ___count, method) (( void (*) (List_1_t943 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29511(__this, ___collection, method) (( void (*) (List_1_t943 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29512(__this, ___enumerable, method) (( void (*) (List_1_t943 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29513(__this, ___collection, method) (( void (*) (List_1_t943 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
#define List_1_AsReadOnly_m29514(__this, method) (( ReadOnlyCollection_1_t5844 * (*) (List_1_t943 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
#define List_1_Clear_m29515(__this, method) (( void (*) (List_1_t943 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
#define List_1_Contains_m29516(__this, ___item, method) (( bool (*) (List_1_t943 *, RectTransform_t504 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29517(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t943 *, RectTransformU5BU5D_t5842*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
#define List_1_Find_m29518(__this, ___match, method) (( RectTransform_t504 * (*) (List_1_t943 *, Predicate_1_t5845 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29519(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5845 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29520(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t943 *, int32_t, int32_t, Predicate_1_t5845 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
#define List_1_GetEnumerator_m29521(__this, method) (( Enumerator_t5846  (*) (List_1_t943 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29522(__this, ___index, ___count, method) (( List_1_t943 * (*) (List_1_t943 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
#define List_1_IndexOf_m29523(__this, ___item, method) (( int32_t (*) (List_1_t943 *, RectTransform_t504 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29524(__this, ___start, ___delta, method) (( void (*) (List_1_t943 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29525(__this, ___index, method) (( void (*) (List_1_t943 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
#define List_1_Insert_m29526(__this, ___index, ___item, method) (( void (*) (List_1_t943 *, int32_t, RectTransform_t504 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29527(__this, ___collection, method) (( void (*) (List_1_t943 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29528(__this, ___index, ___collection, method) (( void (*) (List_1_t943 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29529(__this, ___index, ___collection, method) (( void (*) (List_1_t943 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29530(__this, ___index, ___enumerable, method) (( void (*) (List_1_t943 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
#define List_1_Remove_m29531(__this, ___item, method) (( bool (*) (List_1_t943 *, RectTransform_t504 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29532(__this, ___match, method) (( int32_t (*) (List_1_t943 *, Predicate_1_t5845 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29533(__this, ___index, method) (( void (*) (List_1_t943 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29534(__this, ___index, ___count, method) (( void (*) (List_1_t943 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
#define List_1_Reverse_m29535(__this, method) (( void (*) (List_1_t943 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
#define List_1_Sort_m29536(__this, method) (( void (*) (List_1_t943 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29537(__this, ___comparer, method) (( void (*) (List_1_t943 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29538(__this, ___comparison, method) (( void (*) (List_1_t943 *, Comparison_1_t5847 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
#define List_1_ToArray_m29539(__this, method) (( RectTransformU5BU5D_t5842* (*) (List_1_t943 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
#define List_1_TrimExcess_m29540(__this, method) (( void (*) (List_1_t943 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
#define List_1_get_Capacity_m29541(__this, method) (( int32_t (*) (List_1_t943 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29542(__this, ___value, method) (( void (*) (List_1_t943 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
#define List_1_get_Count_m29543(__this, method) (( int32_t (*) (List_1_t943 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
#define List_1_get_Item_m29544(__this, ___index, method) (( RectTransform_t504 * (*) (List_1_t943 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#define List_1_set_Item_m29545(__this, ___index, ___value, method) (( void (*) (List_1_t943 *, int32_t, RectTransform_t504 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)
