#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t924;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t923;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t986;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t5835;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
struct IEnumerator_1_t8951;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
struct ICollection_1_t8952;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
struct ReadOnlyCollection_1_t5837;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t925;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>
struct IComparer_1_t8953;
// System.Comparison`1<UnityEngine.UI.Toggle>
struct Comparison_1_t5839;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5872(__this, method) (( void (*) (List_1_t924 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29371(__this, ___collection, method) (( void (*) (List_1_t924 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
#define List_1__ctor_m29372(__this, ___capacity, method) (( void (*) (List_1_t924 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(T[],System.Int32)
#define List_1__ctor_m29373(__this, ___data, ___size, method) (( void (*) (List_1_t924 *, ToggleU5BU5D_t5835*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
#define List_1__cctor_m29374(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29375(__this, method) (( Object_t* (*) (List_1_t924 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29376(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t924 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29377(__this, method) (( Object_t * (*) (List_1_t924 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29378(__this, ___item, method) (( int32_t (*) (List_1_t924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29379(__this, ___item, method) (( bool (*) (List_1_t924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29380(__this, ___item, method) (( int32_t (*) (List_1_t924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29381(__this, ___index, ___item, method) (( void (*) (List_1_t924 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29382(__this, ___item, method) (( void (*) (List_1_t924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29383(__this, method) (( bool (*) (List_1_t924 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29384(__this, method) (( bool (*) (List_1_t924 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29385(__this, method) (( Object_t * (*) (List_1_t924 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29386(__this, method) (( bool (*) (List_1_t924 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29387(__this, method) (( bool (*) (List_1_t924 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29388(__this, ___index, method) (( Object_t * (*) (List_1_t924 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29389(__this, ___index, ___value, method) (( void (*) (List_1_t924 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
#define List_1_Add_m29390(__this, ___item, method) (( void (*) (List_1_t924 *, Toggle_t923 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29391(__this, ___newCount, method) (( void (*) (List_1_t924 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29392(__this, ___idx, ___count, method) (( void (*) (List_1_t924 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29393(__this, ___collection, method) (( void (*) (List_1_t924 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29394(__this, ___enumerable, method) (( void (*) (List_1_t924 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29395(__this, ___collection, method) (( void (*) (List_1_t924 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
#define List_1_AsReadOnly_m29396(__this, method) (( ReadOnlyCollection_1_t5837 * (*) (List_1_t924 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
#define List_1_Clear_m29397(__this, method) (( void (*) (List_1_t924 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
#define List_1_Contains_m29398(__this, ___item, method) (( bool (*) (List_1_t924 *, Toggle_t923 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29399(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t924 *, ToggleU5BU5D_t5835*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
#define List_1_Find_m5874(__this, ___match, method) (( Toggle_t923 * (*) (List_1_t924 *, Predicate_1_t925 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29400(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t925 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29401(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t924 *, int32_t, int32_t, Predicate_1_t925 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
#define List_1_GetEnumerator_m29402(__this, method) (( Enumerator_t5838  (*) (List_1_t924 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29403(__this, ___index, ___count, method) (( List_1_t924 * (*) (List_1_t924 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
#define List_1_IndexOf_m29404(__this, ___item, method) (( int32_t (*) (List_1_t924 *, Toggle_t923 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29405(__this, ___start, ___delta, method) (( void (*) (List_1_t924 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29406(__this, ___index, method) (( void (*) (List_1_t924 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
#define List_1_Insert_m29407(__this, ___index, ___item, method) (( void (*) (List_1_t924 *, int32_t, Toggle_t923 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29408(__this, ___collection, method) (( void (*) (List_1_t924 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29409(__this, ___index, ___collection, method) (( void (*) (List_1_t924 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29410(__this, ___index, ___collection, method) (( void (*) (List_1_t924 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29411(__this, ___index, ___enumerable, method) (( void (*) (List_1_t924 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
#define List_1_Remove_m29412(__this, ___item, method) (( bool (*) (List_1_t924 *, Toggle_t923 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29413(__this, ___match, method) (( int32_t (*) (List_1_t924 *, Predicate_1_t925 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29414(__this, ___index, method) (( void (*) (List_1_t924 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29415(__this, ___index, ___count, method) (( void (*) (List_1_t924 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
#define List_1_Reverse_m29416(__this, method) (( void (*) (List_1_t924 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
#define List_1_Sort_m29417(__this, method) (( void (*) (List_1_t924 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29418(__this, ___comparer, method) (( void (*) (List_1_t924 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29419(__this, ___comparison, method) (( void (*) (List_1_t924 *, Comparison_1_t5839 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
#define List_1_ToArray_m29420(__this, method) (( ToggleU5BU5D_t5835* (*) (List_1_t924 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
#define List_1_TrimExcess_m29421(__this, method) (( void (*) (List_1_t924 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
#define List_1_get_Capacity_m29422(__this, method) (( int32_t (*) (List_1_t924 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29423(__this, ___value, method) (( void (*) (List_1_t924 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m29424(__this, method) (( int32_t (*) (List_1_t924 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m29425(__this, ___index, method) (( Toggle_t923 * (*) (List_1_t924 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#define List_1_set_Item_m29426(__this, ___index, ___value, method) (( void (*) (List_1_t924 *, int32_t, Toggle_t923 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)
