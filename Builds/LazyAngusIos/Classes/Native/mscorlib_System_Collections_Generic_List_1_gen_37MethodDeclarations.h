#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t947;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t503;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>
struct IEnumerable_1_t8958;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t5846;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>
struct IEnumerator_1_t8959;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>
struct ICollection_1_t8960;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
struct ReadOnlyCollection_1_t5848;
// System.Predicate`1<UnityEngine.RectTransform>
struct Predicate_1_t5849;
// System.Collections.Generic.IComparer`1<UnityEngine.RectTransform>
struct IComparer_1_t8961;
// System.Comparison`1<UnityEngine.RectTransform>
struct Comparison_1_t5851;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5930(__this, method) (( void (*) (List_1_t947 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29520(__this, ___collection, method) (( void (*) (List_1_t947 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
#define List_1__ctor_m29521(__this, ___capacity, method) (( void (*) (List_1_t947 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(T[],System.Int32)
#define List_1__ctor_m29522(__this, ___data, ___size, method) (( void (*) (List_1_t947 *, RectTransformU5BU5D_t5846*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
#define List_1__cctor_m29523(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29524(__this, method) (( Object_t* (*) (List_1_t947 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29525(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t947 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29526(__this, method) (( Object_t * (*) (List_1_t947 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29527(__this, ___item, method) (( int32_t (*) (List_1_t947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29528(__this, ___item, method) (( bool (*) (List_1_t947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29529(__this, ___item, method) (( int32_t (*) (List_1_t947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29530(__this, ___index, ___item, method) (( void (*) (List_1_t947 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29531(__this, ___item, method) (( void (*) (List_1_t947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29532(__this, method) (( bool (*) (List_1_t947 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29533(__this, method) (( bool (*) (List_1_t947 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29534(__this, method) (( Object_t * (*) (List_1_t947 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29535(__this, method) (( bool (*) (List_1_t947 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29536(__this, method) (( bool (*) (List_1_t947 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29537(__this, ___index, method) (( Object_t * (*) (List_1_t947 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29538(__this, ___index, ___value, method) (( void (*) (List_1_t947 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
#define List_1_Add_m29539(__this, ___item, method) (( void (*) (List_1_t947 *, RectTransform_t503 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29540(__this, ___newCount, method) (( void (*) (List_1_t947 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29541(__this, ___idx, ___count, method) (( void (*) (List_1_t947 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29542(__this, ___collection, method) (( void (*) (List_1_t947 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29543(__this, ___enumerable, method) (( void (*) (List_1_t947 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29544(__this, ___collection, method) (( void (*) (List_1_t947 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
#define List_1_AsReadOnly_m29545(__this, method) (( ReadOnlyCollection_1_t5848 * (*) (List_1_t947 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
#define List_1_Clear_m29546(__this, method) (( void (*) (List_1_t947 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
#define List_1_Contains_m29547(__this, ___item, method) (( bool (*) (List_1_t947 *, RectTransform_t503 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29548(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t947 *, RectTransformU5BU5D_t5846*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
#define List_1_Find_m29549(__this, ___match, method) (( RectTransform_t503 * (*) (List_1_t947 *, Predicate_1_t5849 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29550(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5849 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29551(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t947 *, int32_t, int32_t, Predicate_1_t5849 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
#define List_1_GetEnumerator_m29552(__this, method) (( Enumerator_t5850  (*) (List_1_t947 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29553(__this, ___index, ___count, method) (( List_1_t947 * (*) (List_1_t947 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
#define List_1_IndexOf_m29554(__this, ___item, method) (( int32_t (*) (List_1_t947 *, RectTransform_t503 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29555(__this, ___start, ___delta, method) (( void (*) (List_1_t947 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29556(__this, ___index, method) (( void (*) (List_1_t947 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
#define List_1_Insert_m29557(__this, ___index, ___item, method) (( void (*) (List_1_t947 *, int32_t, RectTransform_t503 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29558(__this, ___collection, method) (( void (*) (List_1_t947 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29559(__this, ___index, ___collection, method) (( void (*) (List_1_t947 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29560(__this, ___index, ___collection, method) (( void (*) (List_1_t947 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29561(__this, ___index, ___enumerable, method) (( void (*) (List_1_t947 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
#define List_1_Remove_m29562(__this, ___item, method) (( bool (*) (List_1_t947 *, RectTransform_t503 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29563(__this, ___match, method) (( int32_t (*) (List_1_t947 *, Predicate_1_t5849 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29564(__this, ___index, method) (( void (*) (List_1_t947 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29565(__this, ___index, ___count, method) (( void (*) (List_1_t947 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
#define List_1_Reverse_m29566(__this, method) (( void (*) (List_1_t947 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
#define List_1_Sort_m29567(__this, method) (( void (*) (List_1_t947 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29568(__this, ___comparer, method) (( void (*) (List_1_t947 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29569(__this, ___comparison, method) (( void (*) (List_1_t947 *, Comparison_1_t5851 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
#define List_1_ToArray_m29570(__this, method) (( RectTransformU5BU5D_t5846* (*) (List_1_t947 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
#define List_1_TrimExcess_m29571(__this, method) (( void (*) (List_1_t947 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
#define List_1_get_Capacity_m29572(__this, method) (( int32_t (*) (List_1_t947 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29573(__this, ___value, method) (( void (*) (List_1_t947 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
#define List_1_get_Count_m29574(__this, method) (( int32_t (*) (List_1_t947 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
#define List_1_get_Item_m29575(__this, ___index, method) (( RectTransform_t503 * (*) (List_1_t947 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#define List_1_set_Item_m29576(__this, ___index, ___value, method) (( void (*) (List_1_t947 *, int32_t, RectTransform_t503 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)
