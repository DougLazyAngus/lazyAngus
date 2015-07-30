#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBScore>
struct List_1_t640;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.IEnumerable`1<FBScore>
struct IEnumerable_1_t8767;
// FBScore[]
struct FBScoreU5BU5D_t5527;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t8765;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t8760;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBScore>
struct ReadOnlyCollection_1_t5532;
// System.Predicate`1<FBScore>
struct Predicate_1_t5533;
// System.Collections.Generic.IComparer`1<FBScore>
struct IComparer_1_t8768;
// System.Comparison`1<FBScore>
struct Comparison_1_t5535;
// System.Collections.Generic.List`1/Enumerator<FBScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<FBScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3636(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24422(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Int32)
#define List_1__ctor_m24423(__this, ___capacity, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m24424(__this, ___data, ___size, method) (( void (*) (List_1_t640 *, FBScoreU5BU5D_t5527*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.cctor()
#define List_1__cctor_m24425(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24426(__this, method) (( Object_t* (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24427(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t640 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24428(__this, method) (( Object_t * (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24429(__this, ___item, method) (( int32_t (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24430(__this, ___item, method) (( bool (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24431(__this, ___item, method) (( int32_t (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24432(__this, ___index, ___item, method) (( void (*) (List_1_t640 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24433(__this, ___item, method) (( void (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24434(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24435(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24436(__this, method) (( Object_t * (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24437(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24438(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24439(__this, ___index, method) (( Object_t * (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24440(__this, ___index, ___value, method) (( void (*) (List_1_t640 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Add(T)
#define List_1_Add_m24441(__this, ___item, method) (( void (*) (List_1_t640 *, FBScore_t293 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24442(__this, ___newCount, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24443(__this, ___idx, ___count, method) (( void (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24444(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24445(__this, ___enumerable, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24446(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBScore>::AsReadOnly()
#define List_1_AsReadOnly_m24447(__this, method) (( ReadOnlyCollection_1_t5532 * (*) (List_1_t640 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Clear()
#define List_1_Clear_m24448(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Contains(T)
#define List_1_Contains_m24449(__this, ___item, method) (( bool (*) (List_1_t640 *, FBScore_t293 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24450(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t640 *, FBScoreU5BU5D_t5527*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m24451(__this, ___match, method) (( FBScore_t293 * (*) (List_1_t640 *, Predicate_1_t5533 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24452(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5533 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24453(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t640 *, int32_t, int32_t, Predicate_1_t5533 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBScore>::GetEnumerator()
#define List_1_GetEnumerator_m24454(__this, method) (( Enumerator_t5534  (*) (List_1_t640 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FBScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24455(__this, ___index, ___count, method) (( List_1_t640 * (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::IndexOf(T)
#define List_1_IndexOf_m24456(__this, ___item, method) (( int32_t (*) (List_1_t640 *, FBScore_t293 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24457(__this, ___start, ___delta, method) (( void (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24458(__this, ___index, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Insert(System.Int32,T)
#define List_1_Insert_m24459(__this, ___index, ___item, method) (( void (*) (List_1_t640 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24460(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24461(__this, ___index, ___collection, method) (( void (*) (List_1_t640 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24462(__this, ___index, ___collection, method) (( void (*) (List_1_t640 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24463(__this, ___index, ___enumerable, method) (( void (*) (List_1_t640 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Remove(T)
#define List_1_Remove_m24464(__this, ___item, method) (( bool (*) (List_1_t640 *, FBScore_t293 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24465(__this, ___match, method) (( int32_t (*) (List_1_t640 *, Predicate_1_t5533 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24466(__this, ___index, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24467(__this, ___index, ___count, method) (( void (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Reverse()
#define List_1_Reverse_m24468(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort()
#define List_1_Sort_m24469(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24470(__this, ___comparer, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24471(__this, ___comparison, method) (( void (*) (List_1_t640 *, Comparison_1_t5535 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBScore>::ToArray()
#define List_1_ToArray_m24472(__this, method) (( FBScoreU5BU5D_t5527* (*) (List_1_t640 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::TrimExcess()
#define List_1_TrimExcess_m24473(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Capacity()
#define List_1_get_Capacity_m24474(__this, method) (( int32_t (*) (List_1_t640 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24475(__this, ___value, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Count()
#define List_1_get_Count_m24476(__this, method) (( int32_t (*) (List_1_t640 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBScore>::get_Item(System.Int32)
#define List_1_get_Item_m24477(__this, ___index, method) (( FBScore_t293 * (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m24478(__this, ___index, ___value, method) (( void (*) (List_1_t640 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)
