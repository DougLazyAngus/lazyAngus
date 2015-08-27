#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t684;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t8812;
// GPScore[]
struct GPScoreU5BU5D_t5548;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t8813;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8814;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t5550;
// System.Predicate`1<GPScore>
struct Predicate_1_t5551;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t8815;
// System.Comparison`1<GPScore>
struct Comparison_1_t5552;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3841(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24015(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m24016(__this, ___capacity, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m24017(__this, ___data, ___size, method) (( void (*) (List_1_t684 *, GPScoreU5BU5D_t5548*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m24018(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24019(__this, method) (( Object_t* (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24020(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t684 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24021(__this, method) (( Object_t * (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24022(__this, ___item, method) (( int32_t (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24023(__this, ___item, method) (( bool (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24024(__this, ___item, method) (( int32_t (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24025(__this, ___index, ___item, method) (( void (*) (List_1_t684 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24026(__this, ___item, method) (( void (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24027(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24028(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24029(__this, method) (( Object_t * (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24030(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24031(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24032(__this, ___index, method) (( Object_t * (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24033(__this, ___index, ___value, method) (( void (*) (List_1_t684 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m24034(__this, ___item, method) (( void (*) (List_1_t684 *, GPScore_t343 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24035(__this, ___newCount, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24036(__this, ___idx, ___count, method) (( void (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24037(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24038(__this, ___enumerable, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3843(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m24039(__this, method) (( ReadOnlyCollection_1_t5550 * (*) (List_1_t684 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m24040(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m24041(__this, ___item, method) (( bool (*) (List_1_t684 *, GPScore_t343 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24042(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t684 *, GPScoreU5BU5D_t5548*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m24043(__this, ___match, method) (( GPScore_t343 * (*) (List_1_t684 *, Predicate_1_t5551 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24044(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5551 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24045(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t684 *, int32_t, int32_t, Predicate_1_t5551 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m3844(__this, method) (( Enumerator_t738  (*) (List_1_t684 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GPScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24046(__this, ___index, ___count, method) (( List_1_t684 * (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m24047(__this, ___item, method) (( int32_t (*) (List_1_t684 *, GPScore_t343 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24048(__this, ___start, ___delta, method) (( void (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24049(__this, ___index, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m24050(__this, ___index, ___item, method) (( void (*) (List_1_t684 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24051(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24052(__this, ___index, ___collection, method) (( void (*) (List_1_t684 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24053(__this, ___index, ___collection, method) (( void (*) (List_1_t684 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24054(__this, ___index, ___enumerable, method) (( void (*) (List_1_t684 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m24055(__this, ___item, method) (( bool (*) (List_1_t684 *, GPScore_t343 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24056(__this, ___match, method) (( int32_t (*) (List_1_t684 *, Predicate_1_t5551 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24057(__this, ___index, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24058(__this, ___index, ___count, method) (( void (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m24059(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m24060(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24061(__this, ___comparer, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24062(__this, ___comparison, method) (( void (*) (List_1_t684 *, Comparison_1_t5552 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m24063(__this, method) (( GPScoreU5BU5D_t5548* (*) (List_1_t684 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m24064(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m24065(__this, method) (( int32_t (*) (List_1_t684 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24066(__this, ___value, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m24067(__this, method) (( int32_t (*) (List_1_t684 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m24068(__this, ___index, method) (( GPScore_t343 * (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m24069(__this, ___index, ___value, method) (( void (*) (List_1_t684 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
