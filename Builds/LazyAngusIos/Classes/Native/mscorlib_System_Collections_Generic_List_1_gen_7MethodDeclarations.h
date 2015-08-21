#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t681;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t8809;
// GPScore[]
struct GPScoreU5BU5D_t5545;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t8810;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8811;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t5547;
// System.Predicate`1<GPScore>
struct Predicate_1_t5548;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t8812;
// System.Comparison`1<GPScore>
struct Comparison_1_t5549;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3811(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1__ctor_m3698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23982(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1__ctor_m7458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m23983(__this, ___capacity, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1__ctor_m21556_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m23984(__this, ___data, ___size, method) (( void (*) (List_1_t681 *, GPScoreU5BU5D_t5545*, int32_t, const MethodInfo*))List_1__ctor_m21558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m23985(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21560_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23986(__this, method) (( Object_t* (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23987(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t681 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10334_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23988(__this, method) (( Object_t * (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23989(__this, ___item, method) (( int32_t (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10339_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23990(__this, ___item, method) (( bool (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23991(__this, ___item, method) (( int32_t (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23992(__this, ___index, ___item, method) (( void (*) (List_1_t681 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23993(__this, ___item, method) (( void (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23994(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23995(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10332_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23996(__this, method) (( Object_t * (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23997(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23998(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10336_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23999(__this, ___index, method) (( Object_t * (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10337_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24000(__this, ___index, ___value, method) (( void (*) (List_1_t681 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10338_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m24001(__this, ___item, method) (( void (*) (List_1_t681 *, GPScore_t343 *, const MethodInfo*))List_1_Add_m10347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24002(__this, ___newCount, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21578_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24003(__this, ___idx, ___count, method) (( void (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21580_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24004(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21582_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24005(__this, ___enumerable, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21584_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3813(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_AddRange_m21586_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m24006(__this, method) (( ReadOnlyCollection_1_t5547 * (*) (List_1_t681 *, const MethodInfo*))List_1_AsReadOnly_m21588_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m24007(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_Clear_m10340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m24008(__this, ___item, method) (( bool (*) (List_1_t681 *, GPScore_t343 *, const MethodInfo*))List_1_Contains_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24009(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t681 *, GPScoreU5BU5D_t5545*, int32_t, const MethodInfo*))List_1_CopyTo_m10349_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m24010(__this, ___match, method) (( GPScore_t343 * (*) (List_1_t681 *, Predicate_1_t5548 *, const MethodInfo*))List_1_Find_m21593_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24011(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5548 *, const MethodInfo*))List_1_CheckMatch_m21595_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24012(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t681 *, int32_t, int32_t, Predicate_1_t5548 *, const MethodInfo*))List_1_GetIndex_m21597_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m3814(__this, method) (( Enumerator_t735  (*) (List_1_t681 *, const MethodInfo*))List_1_GetEnumerator_m3854_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GPScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24013(__this, ___index, ___count, method) (( List_1_t681 * (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21599_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m24014(__this, ___item, method) (( int32_t (*) (List_1_t681 *, GPScore_t343 *, const MethodInfo*))List_1_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24015(__this, ___start, ___delta, method) (( void (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21602_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24016(__this, ___index, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m24017(__this, ___index, ___item, method) (( void (*) (List_1_t681 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24018(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21607_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24019(__this, ___index, ___collection, method) (( void (*) (List_1_t681 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21609_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24020(__this, ___index, ___collection, method) (( void (*) (List_1_t681 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21611_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24021(__this, ___index, ___enumerable, method) (( void (*) (List_1_t681 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21613_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m24022(__this, ___item, method) (( bool (*) (List_1_t681 *, GPScore_t343 *, const MethodInfo*))List_1_Remove_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24023(__this, ___match, method) (( int32_t (*) (List_1_t681 *, Predicate_1_t5548 *, const MethodInfo*))List_1_RemoveAll_m21616_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24024(__this, ___index, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10345_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24025(__this, ___index, ___count, method) (( void (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21619_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m24026(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_Reverse_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m24027(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_Sort_m21623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24028(__this, ___comparer, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_Sort_m21625_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24029(__this, ___comparison, method) (( void (*) (List_1_t681 *, Comparison_1_t5549 *, const MethodInfo*))List_1_Sort_m21627_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m24030(__this, method) (( GPScoreU5BU5D_t5545* (*) (List_1_t681 *, const MethodInfo*))List_1_ToArray_m21629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m24031(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_TrimExcess_m21631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m24032(__this, method) (( int32_t (*) (List_1_t681 *, const MethodInfo*))List_1_get_Capacity_m21633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24033(__this, ___value, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21635_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m24034(__this, method) (( int32_t (*) (List_1_t681 *, const MethodInfo*))List_1_get_Count_m10331_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m24035(__this, ___index, method) (( GPScore_t343 * (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_get_Item_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m24036(__this, ___index, ___value, method) (( void (*) (List_1_t681 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_set_Item_m10355_gshared)(__this, ___index, ___value, method)
