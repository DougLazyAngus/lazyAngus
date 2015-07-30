#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t635;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t8731;
// GPScore[]
struct GPScoreU5BU5D_t5499;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t8732;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8733;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t5501;
// System.Predicate`1<GPScore>
struct Predicate_1_t5502;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t8734;
// System.Comparison`1<GPScore>
struct Comparison_1_t5503;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3576(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23721(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m23722(__this, ___capacity, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m23723(__this, ___data, ___size, method) (( void (*) (List_1_t635 *, GPScoreU5BU5D_t5499*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m23724(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23725(__this, method) (( Object_t* (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23726(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23727(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23728(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23729(__this, ___item, method) (( bool (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23730(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23731(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23732(__this, ___item, method) (( void (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23733(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23734(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23735(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23736(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23737(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23738(__this, ___index, method) (( Object_t * (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23739(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m23740(__this, ___item, method) (( void (*) (List_1_t635 *, GPScore_t343 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23741(__this, ___newCount, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m23742(__this, ___idx, ___count, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23743(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23744(__this, ___enumerable, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3578(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m23745(__this, method) (( ReadOnlyCollection_1_t5501 * (*) (List_1_t635 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m23746(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m23747(__this, ___item, method) (( bool (*) (List_1_t635 *, GPScore_t343 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23748(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, GPScoreU5BU5D_t5499*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m23749(__this, ___match, method) (( GPScore_t343 * (*) (List_1_t635 *, Predicate_1_t5502 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23750(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5502 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23751(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t635 *, int32_t, int32_t, Predicate_1_t5502 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m3579(__this, method) (( Enumerator_t687  (*) (List_1_t635 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GPScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m23752(__this, ___index, ___count, method) (( List_1_t635 * (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m23753(__this, ___item, method) (( int32_t (*) (List_1_t635 *, GPScore_t343 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23754(__this, ___start, ___delta, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23755(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m23756(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23757(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m23758(__this, ___index, ___collection, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m23759(__this, ___index, ___collection, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m23760(__this, ___index, ___enumerable, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m23761(__this, ___item, method) (( bool (*) (List_1_t635 *, GPScore_t343 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23762(__this, ___match, method) (( int32_t (*) (List_1_t635 *, Predicate_1_t5502 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23763(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m23764(__this, ___index, ___count, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m23765(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m23766(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23767(__this, ___comparer, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23768(__this, ___comparison, method) (( void (*) (List_1_t635 *, Comparison_1_t5503 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m23769(__this, method) (( GPScoreU5BU5D_t5499* (*) (List_1_t635 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m23770(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m23771(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23772(__this, ___value, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m23773(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m23774(__this, ___index, method) (( GPScore_t343 * (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m23775(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)
