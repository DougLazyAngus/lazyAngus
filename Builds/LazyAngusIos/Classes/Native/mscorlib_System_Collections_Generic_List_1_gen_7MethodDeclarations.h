#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t638;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t8735;
// GPScore[]
struct GPScoreU5BU5D_t5503;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t8736;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8737;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t5505;
// System.Predicate`1<GPScore>
struct Predicate_1_t5506;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t8738;
// System.Comparison`1<GPScore>
struct Comparison_1_t5507;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3598(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1__ctor_m3485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23749(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1__ctor_m7223_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m23750(__this, ___capacity, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1__ctor_m21323_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m23751(__this, ___data, ___size, method) (( void (*) (List_1_t638 *, GPScoreU5BU5D_t5503*, int32_t, const MethodInfo*))List_1__ctor_m21325_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m23752(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21327_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23753(__this, method) (( Object_t* (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23754(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t638 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10099_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23755(__this, method) (( Object_t * (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10095_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23756(__this, ___item, method) (( int32_t (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23757(__this, ___item, method) (( bool (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10106_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23758(__this, ___item, method) (( int32_t (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23759(__this, ___index, ___item, method) (( void (*) (List_1_t638 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10108_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23760(__this, ___item, method) (( void (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10109_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23761(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23762(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10097_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23763(__this, method) (( Object_t * (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23764(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23765(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10101_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23766(__this, ___index, method) (( Object_t * (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10102_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23767(__this, ___index, ___value, method) (( void (*) (List_1_t638 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10103_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m23768(__this, ___item, method) (( void (*) (List_1_t638 *, GPScore_t343 *, const MethodInfo*))List_1_Add_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23769(__this, ___newCount, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21345_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m23770(__this, ___idx, ___count, method) (( void (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21347_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23771(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21349_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23772(__this, ___enumerable, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21351_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3600(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_AddRange_m21353_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m23773(__this, method) (( ReadOnlyCollection_1_t5505 * (*) (List_1_t638 *, const MethodInfo*))List_1_AsReadOnly_m21355_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m23774(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_Clear_m10105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m23775(__this, ___item, method) (( bool (*) (List_1_t638 *, GPScore_t343 *, const MethodInfo*))List_1_Contains_m10113_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23776(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t638 *, GPScoreU5BU5D_t5503*, int32_t, const MethodInfo*))List_1_CopyTo_m10114_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m23777(__this, ___match, method) (( GPScore_t343 * (*) (List_1_t638 *, Predicate_1_t5506 *, const MethodInfo*))List_1_Find_m21360_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23778(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5506 *, const MethodInfo*))List_1_CheckMatch_m21362_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23779(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t638 *, int32_t, int32_t, Predicate_1_t5506 *, const MethodInfo*))List_1_GetIndex_m21364_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m3601(__this, method) (( Enumerator_t689  (*) (List_1_t638 *, const MethodInfo*))List_1_GetEnumerator_m3641_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GPScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m23780(__this, ___index, ___count, method) (( List_1_t638 * (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21366_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m23781(__this, ___item, method) (( int32_t (*) (List_1_t638 *, GPScore_t343 *, const MethodInfo*))List_1_IndexOf_m10117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23782(__this, ___start, ___delta, method) (( void (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21369_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23783(__this, ___index, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21371_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m23784(__this, ___index, ___item, method) (( void (*) (List_1_t638 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_Insert_m10118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23785(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21374_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m23786(__this, ___index, ___collection, method) (( void (*) (List_1_t638 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21376_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m23787(__this, ___index, ___collection, method) (( void (*) (List_1_t638 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21378_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m23788(__this, ___index, ___enumerable, method) (( void (*) (List_1_t638 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21380_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m23789(__this, ___item, method) (( bool (*) (List_1_t638 *, GPScore_t343 *, const MethodInfo*))List_1_Remove_m10115_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23790(__this, ___match, method) (( int32_t (*) (List_1_t638 *, Predicate_1_t5506 *, const MethodInfo*))List_1_RemoveAll_m21383_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23791(__this, ___index, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10110_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m23792(__this, ___index, ___count, method) (( void (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21386_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m23793(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_Reverse_m21388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m23794(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_Sort_m21390_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23795(__this, ___comparer, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_Sort_m21392_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23796(__this, ___comparison, method) (( void (*) (List_1_t638 *, Comparison_1_t5507 *, const MethodInfo*))List_1_Sort_m21394_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m23797(__this, method) (( GPScoreU5BU5D_t5503* (*) (List_1_t638 *, const MethodInfo*))List_1_ToArray_m21396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m23798(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_TrimExcess_m21398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m23799(__this, method) (( int32_t (*) (List_1_t638 *, const MethodInfo*))List_1_get_Capacity_m21400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23800(__this, ___value, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21402_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m23801(__this, method) (( int32_t (*) (List_1_t638 *, const MethodInfo*))List_1_get_Count_m10096_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m23802(__this, ___index, method) (( GPScore_t343 * (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_get_Item_m10119_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m23803(__this, ___index, ___value, method) (( void (*) (List_1_t638 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_set_Item_m10120_gshared)(__this, ___index, ___value, method)
