#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t643;
// System.Object
struct Object_t;
// RealAngusItemDesc
struct RealAngusItemDesc_t646;
// System.Collections.Generic.IEnumerable`1<RealAngusItemDesc>
struct IEnumerable_1_t8981;
// RealAngusItemDesc[]
struct RealAngusItemDescU5BU5D_t5778;
// System.Collections.Generic.IEnumerator`1<RealAngusItemDesc>
struct IEnumerator_1_t8982;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<RealAngusItemDesc>
struct ICollection_1_t8983;
// System.Collections.ObjectModel.ReadOnlyCollection`1<RealAngusItemDesc>
struct ReadOnlyCollection_1_t5780;
// System.Predicate`1<RealAngusItemDesc>
struct Predicate_1_t5781;
// System.Collections.Generic.IComparer`1<RealAngusItemDesc>
struct IComparer_1_t8984;
// System.Comparison`1<RealAngusItemDesc>
struct Comparison_1_t5783;
// System.Collections.Generic.List`1/Enumerator<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4460(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27737(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(System.Int32)
#define List_1__ctor_m27738(__this, ___capacity, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(T[],System.Int32)
#define List_1__ctor_m27739(__this, ___data, ___size, method) (( void (*) (List_1_t643 *, RealAngusItemDescU5BU5D_t5778*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.cctor()
#define List_1__cctor_m27740(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27741(__this, method) (( Object_t* (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27742(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t643 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27743(__this, method) (( Object_t * (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27744(__this, ___item, method) (( int32_t (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27745(__this, ___item, method) (( bool (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27746(__this, ___item, method) (( int32_t (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27747(__this, ___index, ___item, method) (( void (*) (List_1_t643 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27748(__this, ___item, method) (( void (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27749(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27750(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27751(__this, method) (( Object_t * (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27752(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27753(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27754(__this, ___index, method) (( Object_t * (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27755(__this, ___index, ___value, method) (( void (*) (List_1_t643 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(T)
#define List_1_Add_m27756(__this, ___item, method) (( void (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27757(__this, ___newCount, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27758(__this, ___idx, ___count, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27759(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27760(__this, ___enumerable, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27761(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::AsReadOnly()
#define List_1_AsReadOnly_m27762(__this, method) (( ReadOnlyCollection_1_t5780 * (*) (List_1_t643 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Clear()
#define List_1_Clear_m27763(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::Contains(T)
#define List_1_Contains_m27764(__this, ___item, method) (( bool (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27765(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t643 *, RealAngusItemDescU5BU5D_t5778*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<RealAngusItemDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m27766(__this, ___match, method) (( RealAngusItemDesc_t646 * (*) (List_1_t643 *, Predicate_1_t5781 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27767(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5781 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27768(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t643 *, int32_t, int32_t, Predicate_1_t5781 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RealAngusItemDesc>::GetEnumerator()
#define List_1_GetEnumerator_m27769(__this, method) (( Enumerator_t5782  (*) (List_1_t643 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27770(__this, ___index, ___count, method) (( List_1_t643 * (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::IndexOf(T)
#define List_1_IndexOf_m27771(__this, ___item, method) (( int32_t (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27772(__this, ___start, ___delta, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27773(__this, ___index, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Insert(System.Int32,T)
#define List_1_Insert_m27774(__this, ___index, ___item, method) (( void (*) (List_1_t643 *, int32_t, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27775(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27776(__this, ___index, ___collection, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27777(__this, ___index, ___collection, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27778(__this, ___index, ___enumerable, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::Remove(T)
#define List_1_Remove_m27779(__this, ___item, method) (( bool (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27780(__this, ___match, method) (( int32_t (*) (List_1_t643 *, Predicate_1_t5781 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27781(__this, ___index, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27782(__this, ___index, ___count, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Reverse()
#define List_1_Reverse_m27783(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort()
#define List_1_Sort_m27784(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27785(__this, ___comparer, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27786(__this, ___comparison, method) (( void (*) (List_1_t643 *, Comparison_1_t5783 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<RealAngusItemDesc>::ToArray()
#define List_1_ToArray_m27787(__this, method) (( RealAngusItemDescU5BU5D_t5778* (*) (List_1_t643 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::TrimExcess()
#define List_1_TrimExcess_m27788(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Capacity()
#define List_1_get_Capacity_m27789(__this, method) (( int32_t (*) (List_1_t643 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27790(__this, ___value, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count()
#define List_1_get_Count_m27791(__this, method) (( int32_t (*) (List_1_t643 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32)
#define List_1_get_Item_m27792(__this, ___index, method) (( RealAngusItemDesc_t646 * (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m27793(__this, ___index, ___value, method) (( void (*) (List_1_t643 *, int32_t, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)
