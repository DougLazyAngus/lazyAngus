#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBScore>
struct List_1_t689;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.IEnumerable`1<FBScore>
struct IEnumerable_1_t8848;
// FBScore[]
struct FBScoreU5BU5D_t5576;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t8846;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t8841;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBScore>
struct ReadOnlyCollection_1_t5581;
// System.Predicate`1<FBScore>
struct Predicate_1_t5582;
// System.Collections.Generic.IComparer`1<FBScore>
struct IComparer_1_t8849;
// System.Comparison`1<FBScore>
struct Comparison_1_t5584;
// System.Collections.Generic.List`1/Enumerator<FBScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<FBScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3901(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24716(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Int32)
#define List_1__ctor_m24717(__this, ___capacity, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m24718(__this, ___data, ___size, method) (( void (*) (List_1_t689 *, FBScoreU5BU5D_t5576*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.cctor()
#define List_1__cctor_m24719(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24720(__this, method) (( Object_t* (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24721(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t689 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24722(__this, method) (( Object_t * (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24723(__this, ___item, method) (( int32_t (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24724(__this, ___item, method) (( bool (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24725(__this, ___item, method) (( int32_t (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24726(__this, ___index, ___item, method) (( void (*) (List_1_t689 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24727(__this, ___item, method) (( void (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24728(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24729(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24730(__this, method) (( Object_t * (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24731(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24732(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24733(__this, ___index, method) (( Object_t * (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24734(__this, ___index, ___value, method) (( void (*) (List_1_t689 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Add(T)
#define List_1_Add_m24735(__this, ___item, method) (( void (*) (List_1_t689 *, FBScore_t293 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24736(__this, ___newCount, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24737(__this, ___idx, ___count, method) (( void (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24738(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24739(__this, ___enumerable, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24740(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBScore>::AsReadOnly()
#define List_1_AsReadOnly_m24741(__this, method) (( ReadOnlyCollection_1_t5581 * (*) (List_1_t689 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Clear()
#define List_1_Clear_m24742(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Contains(T)
#define List_1_Contains_m24743(__this, ___item, method) (( bool (*) (List_1_t689 *, FBScore_t293 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24744(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t689 *, FBScoreU5BU5D_t5576*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m24745(__this, ___match, method) (( FBScore_t293 * (*) (List_1_t689 *, Predicate_1_t5582 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24746(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5582 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24747(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t689 *, int32_t, int32_t, Predicate_1_t5582 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBScore>::GetEnumerator()
#define List_1_GetEnumerator_m24748(__this, method) (( Enumerator_t5583  (*) (List_1_t689 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FBScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24749(__this, ___index, ___count, method) (( List_1_t689 * (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::IndexOf(T)
#define List_1_IndexOf_m24750(__this, ___item, method) (( int32_t (*) (List_1_t689 *, FBScore_t293 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24751(__this, ___start, ___delta, method) (( void (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24752(__this, ___index, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Insert(System.Int32,T)
#define List_1_Insert_m24753(__this, ___index, ___item, method) (( void (*) (List_1_t689 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24754(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24755(__this, ___index, ___collection, method) (( void (*) (List_1_t689 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24756(__this, ___index, ___collection, method) (( void (*) (List_1_t689 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24757(__this, ___index, ___enumerable, method) (( void (*) (List_1_t689 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Remove(T)
#define List_1_Remove_m24758(__this, ___item, method) (( bool (*) (List_1_t689 *, FBScore_t293 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24759(__this, ___match, method) (( int32_t (*) (List_1_t689 *, Predicate_1_t5582 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24760(__this, ___index, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24761(__this, ___index, ___count, method) (( void (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Reverse()
#define List_1_Reverse_m24762(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort()
#define List_1_Sort_m24763(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24764(__this, ___comparer, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24765(__this, ___comparison, method) (( void (*) (List_1_t689 *, Comparison_1_t5584 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBScore>::ToArray()
#define List_1_ToArray_m24766(__this, method) (( FBScoreU5BU5D_t5576* (*) (List_1_t689 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::TrimExcess()
#define List_1_TrimExcess_m24767(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Capacity()
#define List_1_get_Capacity_m24768(__this, method) (( int32_t (*) (List_1_t689 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24769(__this, ___value, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Count()
#define List_1_get_Count_m24770(__this, method) (( int32_t (*) (List_1_t689 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBScore>::get_Item(System.Int32)
#define List_1_get_Item_m24771(__this, ___index, method) (( FBScore_t293 * (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m24772(__this, ___index, ___value, method) (( void (*) (List_1_t689 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
