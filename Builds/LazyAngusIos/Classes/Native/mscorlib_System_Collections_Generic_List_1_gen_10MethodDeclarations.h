#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBScore>
struct List_1_t688;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.IEnumerable`1<FBScore>
struct IEnumerable_1_t8841;
// FBScore[]
struct FBScoreU5BU5D_t5575;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t8839;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t8834;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBScore>
struct ReadOnlyCollection_1_t5580;
// System.Predicate`1<FBScore>
struct Predicate_1_t5581;
// System.Collections.Generic.IComparer`1<FBScore>
struct IComparer_1_t8842;
// System.Comparison`1<FBScore>
struct Comparison_1_t5583;
// System.Collections.Generic.List`1/Enumerator<FBScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<FBScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3883(__this, method) (( void (*) (List_1_t688 *, const MethodInfo*))List_1__ctor_m3710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24694(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, const MethodInfo*))List_1__ctor_m7469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Int32)
#define List_1__ctor_m24695(__this, ___capacity, method) (( void (*) (List_1_t688 *, int32_t, const MethodInfo*))List_1__ctor_m21567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m24696(__this, ___data, ___size, method) (( void (*) (List_1_t688 *, FBScoreU5BU5D_t5575*, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.cctor()
#define List_1__cctor_m24697(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24698(__this, method) (( Object_t* (*) (List_1_t688 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24699(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t688 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24700(__this, method) (( Object_t * (*) (List_1_t688 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24701(__this, ___item, method) (( int32_t (*) (List_1_t688 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24702(__this, ___item, method) (( bool (*) (List_1_t688 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24703(__this, ___item, method) (( int32_t (*) (List_1_t688 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24704(__this, ___index, ___item, method) (( void (*) (List_1_t688 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24705(__this, ___item, method) (( void (*) (List_1_t688 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24706(__this, method) (( bool (*) (List_1_t688 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24707(__this, method) (( bool (*) (List_1_t688 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24708(__this, method) (( Object_t * (*) (List_1_t688 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24709(__this, method) (( bool (*) (List_1_t688 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24710(__this, method) (( bool (*) (List_1_t688 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24711(__this, ___index, method) (( Object_t * (*) (List_1_t688 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24712(__this, ___index, ___value, method) (( void (*) (List_1_t688 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Add(T)
#define List_1_Add_m24713(__this, ___item, method) (( void (*) (List_1_t688 *, FBScore_t293 *, const MethodInfo*))List_1_Add_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24714(__this, ___newCount, method) (( void (*) (List_1_t688 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24715(__this, ___idx, ___count, method) (( void (*) (List_1_t688 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21591_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24716(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24717(__this, ___enumerable, method) (( void (*) (List_1_t688 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24718(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, const MethodInfo*))List_1_AddRange_m21597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBScore>::AsReadOnly()
#define List_1_AsReadOnly_m24719(__this, method) (( ReadOnlyCollection_1_t5580 * (*) (List_1_t688 *, const MethodInfo*))List_1_AsReadOnly_m21599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Clear()
#define List_1_Clear_m24720(__this, method) (( void (*) (List_1_t688 *, const MethodInfo*))List_1_Clear_m10351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Contains(T)
#define List_1_Contains_m24721(__this, ___item, method) (( bool (*) (List_1_t688 *, FBScore_t293 *, const MethodInfo*))List_1_Contains_m10359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24722(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t688 *, FBScoreU5BU5D_t5575*, int32_t, const MethodInfo*))List_1_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m24723(__this, ___match, method) (( FBScore_t293 * (*) (List_1_t688 *, Predicate_1_t5581 *, const MethodInfo*))List_1_Find_m21604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24724(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5581 *, const MethodInfo*))List_1_CheckMatch_m21606_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24725(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t688 *, int32_t, int32_t, Predicate_1_t5581 *, const MethodInfo*))List_1_GetIndex_m21608_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBScore>::GetEnumerator()
#define List_1_GetEnumerator_m24726(__this, method) (( Enumerator_t5582  (*) (List_1_t688 *, const MethodInfo*))List_1_GetEnumerator_m3866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FBScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24727(__this, ___index, ___count, method) (( List_1_t688 * (*) (List_1_t688 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21610_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::IndexOf(T)
#define List_1_IndexOf_m24728(__this, ___item, method) (( int32_t (*) (List_1_t688 *, FBScore_t293 *, const MethodInfo*))List_1_IndexOf_m10363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24729(__this, ___start, ___delta, method) (( void (*) (List_1_t688 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21613_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24730(__this, ___index, method) (( void (*) (List_1_t688 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Insert(System.Int32,T)
#define List_1_Insert_m24731(__this, ___index, ___item, method) (( void (*) (List_1_t688 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_Insert_m10364_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24732(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21618_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24733(__this, ___index, ___collection, method) (( void (*) (List_1_t688 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24734(__this, ___index, ___collection, method) (( void (*) (List_1_t688 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24735(__this, ___index, ___enumerable, method) (( void (*) (List_1_t688 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21624_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Remove(T)
#define List_1_Remove_m24736(__this, ___item, method) (( bool (*) (List_1_t688 *, FBScore_t293 *, const MethodInfo*))List_1_Remove_m10361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24737(__this, ___match, method) (( int32_t (*) (List_1_t688 *, Predicate_1_t5581 *, const MethodInfo*))List_1_RemoveAll_m21627_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24738(__this, ___index, method) (( void (*) (List_1_t688 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24739(__this, ___index, ___count, method) (( void (*) (List_1_t688 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21630_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Reverse()
#define List_1_Reverse_m24740(__this, method) (( void (*) (List_1_t688 *, const MethodInfo*))List_1_Reverse_m21632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort()
#define List_1_Sort_m24741(__this, method) (( void (*) (List_1_t688 *, const MethodInfo*))List_1_Sort_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24742(__this, ___comparer, method) (( void (*) (List_1_t688 *, Object_t*, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24743(__this, ___comparison, method) (( void (*) (List_1_t688 *, Comparison_1_t5583 *, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBScore>::ToArray()
#define List_1_ToArray_m24744(__this, method) (( FBScoreU5BU5D_t5575* (*) (List_1_t688 *, const MethodInfo*))List_1_ToArray_m21640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::TrimExcess()
#define List_1_TrimExcess_m24745(__this, method) (( void (*) (List_1_t688 *, const MethodInfo*))List_1_TrimExcess_m21642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Capacity()
#define List_1_get_Capacity_m24746(__this, method) (( int32_t (*) (List_1_t688 *, const MethodInfo*))List_1_get_Capacity_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24747(__this, ___value, method) (( void (*) (List_1_t688 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21646_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Count()
#define List_1_get_Count_m24748(__this, method) (( int32_t (*) (List_1_t688 *, const MethodInfo*))List_1_get_Count_m10342_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBScore>::get_Item(System.Int32)
#define List_1_get_Item_m24749(__this, ___index, method) (( FBScore_t293 * (*) (List_1_t688 *, int32_t, const MethodInfo*))List_1_get_Item_m10365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m24750(__this, ___index, ___value, method) (( void (*) (List_1_t688 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_set_Item_m10366_gshared)(__this, ___index, ___value, method)
