#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t1001;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t1000;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t1063;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t5947;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
struct IEnumerator_1_t9092;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
struct ICollection_1_t9093;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
struct ReadOnlyCollection_1_t5949;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t1002;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>
struct IComparer_1_t9094;
// System.Comparison`1<UnityEngine.UI.Toggle>
struct Comparison_1_t5951;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6302(__this, method) (( void (*) (List_1_t1001 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30531(__this, ___collection, method) (( void (*) (List_1_t1001 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
#define List_1__ctor_m30532(__this, ___capacity, method) (( void (*) (List_1_t1001 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(T[],System.Int32)
#define List_1__ctor_m30533(__this, ___data, ___size, method) (( void (*) (List_1_t1001 *, ToggleU5BU5D_t5947*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
#define List_1__cctor_m30534(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30535(__this, method) (( Object_t* (*) (List_1_t1001 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30536(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1001 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30537(__this, method) (( Object_t * (*) (List_1_t1001 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30538(__this, ___item, method) (( int32_t (*) (List_1_t1001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30539(__this, ___item, method) (( bool (*) (List_1_t1001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30540(__this, ___item, method) (( int32_t (*) (List_1_t1001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30541(__this, ___index, ___item, method) (( void (*) (List_1_t1001 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30542(__this, ___item, method) (( void (*) (List_1_t1001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30543(__this, method) (( bool (*) (List_1_t1001 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30544(__this, method) (( bool (*) (List_1_t1001 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30545(__this, method) (( Object_t * (*) (List_1_t1001 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30546(__this, method) (( bool (*) (List_1_t1001 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30547(__this, method) (( bool (*) (List_1_t1001 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30548(__this, ___index, method) (( Object_t * (*) (List_1_t1001 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30549(__this, ___index, ___value, method) (( void (*) (List_1_t1001 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
#define List_1_Add_m30550(__this, ___item, method) (( void (*) (List_1_t1001 *, Toggle_t1000 *, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30551(__this, ___newCount, method) (( void (*) (List_1_t1001 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30552(__this, ___idx, ___count, method) (( void (*) (List_1_t1001 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30553(__this, ___collection, method) (( void (*) (List_1_t1001 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30554(__this, ___enumerable, method) (( void (*) (List_1_t1001 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30555(__this, ___collection, method) (( void (*) (List_1_t1001 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
#define List_1_AsReadOnly_m30556(__this, method) (( ReadOnlyCollection_1_t5949 * (*) (List_1_t1001 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
#define List_1_Clear_m30557(__this, method) (( void (*) (List_1_t1001 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
#define List_1_Contains_m30558(__this, ___item, method) (( bool (*) (List_1_t1001 *, Toggle_t1000 *, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30559(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1001 *, ToggleU5BU5D_t5947*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
#define List_1_Find_m6304(__this, ___match, method) (( Toggle_t1000 * (*) (List_1_t1001 *, Predicate_1_t1002 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30560(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1002 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30561(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1001 *, int32_t, int32_t, Predicate_1_t1002 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
#define List_1_GetEnumerator_m30562(__this, method) (( Enumerator_t5950  (*) (List_1_t1001 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30563(__this, ___index, ___count, method) (( List_1_t1001 * (*) (List_1_t1001 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
#define List_1_IndexOf_m30564(__this, ___item, method) (( int32_t (*) (List_1_t1001 *, Toggle_t1000 *, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30565(__this, ___start, ___delta, method) (( void (*) (List_1_t1001 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30566(__this, ___index, method) (( void (*) (List_1_t1001 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
#define List_1_Insert_m30567(__this, ___index, ___item, method) (( void (*) (List_1_t1001 *, int32_t, Toggle_t1000 *, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30568(__this, ___collection, method) (( void (*) (List_1_t1001 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30569(__this, ___index, ___collection, method) (( void (*) (List_1_t1001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30570(__this, ___index, ___collection, method) (( void (*) (List_1_t1001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30571(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
#define List_1_Remove_m30572(__this, ___item, method) (( bool (*) (List_1_t1001 *, Toggle_t1000 *, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30573(__this, ___match, method) (( int32_t (*) (List_1_t1001 *, Predicate_1_t1002 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30574(__this, ___index, method) (( void (*) (List_1_t1001 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30575(__this, ___index, ___count, method) (( void (*) (List_1_t1001 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
#define List_1_Reverse_m30576(__this, method) (( void (*) (List_1_t1001 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
#define List_1_Sort_m30577(__this, method) (( void (*) (List_1_t1001 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30578(__this, ___comparer, method) (( void (*) (List_1_t1001 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30579(__this, ___comparison, method) (( void (*) (List_1_t1001 *, Comparison_1_t5951 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
#define List_1_ToArray_m30580(__this, method) (( ToggleU5BU5D_t5947* (*) (List_1_t1001 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
#define List_1_TrimExcess_m30581(__this, method) (( void (*) (List_1_t1001 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
#define List_1_get_Capacity_m30582(__this, method) (( int32_t (*) (List_1_t1001 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30583(__this, ___value, method) (( void (*) (List_1_t1001 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m30584(__this, method) (( int32_t (*) (List_1_t1001 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m30585(__this, ___index, method) (( Toggle_t1000 * (*) (List_1_t1001 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#define List_1_set_Item_m30586(__this, ___index, ___value, method) (( void (*) (List_1_t1001 *, int32_t, Toggle_t1000 *, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)
