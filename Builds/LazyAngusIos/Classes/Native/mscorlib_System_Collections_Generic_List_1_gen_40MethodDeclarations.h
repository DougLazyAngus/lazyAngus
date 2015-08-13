#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t1003;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t543;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>
struct IEnumerable_1_t9047;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t547;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>
struct IEnumerator_1_t9048;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>
struct ICollection_1_t9049;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
struct ReadOnlyCollection_1_t5919;
// System.Predicate`1<UnityEngine.RectTransform>
struct Predicate_1_t5920;
// System.Collections.Generic.IComparer`1<UnityEngine.RectTransform>
struct IComparer_1_t9050;
// System.Comparison`1<UnityEngine.RectTransform>
struct Comparison_1_t5922;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6179(__this, method) (( void (*) (List_1_t1003 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30196(__this, ___collection, method) (( void (*) (List_1_t1003 *, Object_t*, const MethodInfo*))List_1__ctor_m7470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
#define List_1__ctor_m30197(__this, ___capacity, method) (( void (*) (List_1_t1003 *, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(T[],System.Int32)
#define List_1__ctor_m30198(__this, ___data, ___size, method) (( void (*) (List_1_t1003 *, RectTransformU5BU5D_t547*, int32_t, const MethodInfo*))List_1__ctor_m21571_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
#define List_1__cctor_m30199(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21573_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30200(__this, method) (( Object_t* (*) (List_1_t1003 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30201(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1003 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30202(__this, method) (( Object_t * (*) (List_1_t1003 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30203(__this, ___item, method) (( int32_t (*) (List_1_t1003 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30204(__this, ___item, method) (( bool (*) (List_1_t1003 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30205(__this, ___item, method) (( int32_t (*) (List_1_t1003 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30206(__this, ___index, ___item, method) (( void (*) (List_1_t1003 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30207(__this, ___item, method) (( void (*) (List_1_t1003 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30208(__this, method) (( bool (*) (List_1_t1003 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30209(__this, method) (( bool (*) (List_1_t1003 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30210(__this, method) (( Object_t * (*) (List_1_t1003 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30211(__this, method) (( bool (*) (List_1_t1003 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30212(__this, method) (( bool (*) (List_1_t1003 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30213(__this, ___index, method) (( Object_t * (*) (List_1_t1003 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30214(__this, ___index, ___value, method) (( void (*) (List_1_t1003 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
#define List_1_Add_m30215(__this, ___item, method) (( void (*) (List_1_t1003 *, RectTransform_t543 *, const MethodInfo*))List_1_Add_m10356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30216(__this, ___newCount, method) (( void (*) (List_1_t1003 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30217(__this, ___idx, ___count, method) (( void (*) (List_1_t1003 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21593_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30218(__this, ___collection, method) (( void (*) (List_1_t1003 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30219(__this, ___enumerable, method) (( void (*) (List_1_t1003 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30220(__this, ___collection, method) (( void (*) (List_1_t1003 *, Object_t*, const MethodInfo*))List_1_AddRange_m21599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
#define List_1_AsReadOnly_m30221(__this, method) (( ReadOnlyCollection_1_t5919 * (*) (List_1_t1003 *, const MethodInfo*))List_1_AsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
#define List_1_Clear_m30222(__this, method) (( void (*) (List_1_t1003 *, const MethodInfo*))List_1_Clear_m10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
#define List_1_Contains_m30223(__this, ___item, method) (( bool (*) (List_1_t1003 *, RectTransform_t543 *, const MethodInfo*))List_1_Contains_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30224(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1003 *, RectTransformU5BU5D_t547*, int32_t, const MethodInfo*))List_1_CopyTo_m10358_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
#define List_1_Find_m30225(__this, ___match, method) (( RectTransform_t543 * (*) (List_1_t1003 *, Predicate_1_t5920 *, const MethodInfo*))List_1_Find_m21606_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30226(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5920 *, const MethodInfo*))List_1_CheckMatch_m21608_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30227(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1003 *, int32_t, int32_t, Predicate_1_t5920 *, const MethodInfo*))List_1_GetIndex_m21610_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
#define List_1_GetEnumerator_m30228(__this, method) (( Enumerator_t5921  (*) (List_1_t1003 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30229(__this, ___index, ___count, method) (( List_1_t1003 * (*) (List_1_t1003 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21612_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
#define List_1_IndexOf_m30230(__this, ___item, method) (( int32_t (*) (List_1_t1003 *, RectTransform_t543 *, const MethodInfo*))List_1_IndexOf_m10361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30231(__this, ___start, ___delta, method) (( void (*) (List_1_t1003 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21615_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30232(__this, ___index, method) (( void (*) (List_1_t1003 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
#define List_1_Insert_m30233(__this, ___index, ___item, method) (( void (*) (List_1_t1003 *, int32_t, RectTransform_t543 *, const MethodInfo*))List_1_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30234(__this, ___collection, method) (( void (*) (List_1_t1003 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21620_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30235(__this, ___index, ___collection, method) (( void (*) (List_1_t1003 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30236(__this, ___index, ___collection, method) (( void (*) (List_1_t1003 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21624_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30237(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1003 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21626_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
#define List_1_Remove_m30238(__this, ___item, method) (( bool (*) (List_1_t1003 *, RectTransform_t543 *, const MethodInfo*))List_1_Remove_m10359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30239(__this, ___match, method) (( int32_t (*) (List_1_t1003 *, Predicate_1_t5920 *, const MethodInfo*))List_1_RemoveAll_m21629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30240(__this, ___index, method) (( void (*) (List_1_t1003 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30241(__this, ___index, ___count, method) (( void (*) (List_1_t1003 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
#define List_1_Reverse_m30242(__this, method) (( void (*) (List_1_t1003 *, const MethodInfo*))List_1_Reverse_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
#define List_1_Sort_m30243(__this, method) (( void (*) (List_1_t1003 *, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30244(__this, ___comparer, method) (( void (*) (List_1_t1003 *, Object_t*, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30245(__this, ___comparison, method) (( void (*) (List_1_t1003 *, Comparison_1_t5922 *, const MethodInfo*))List_1_Sort_m21640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
#define List_1_ToArray_m30246(__this, method) (( RectTransformU5BU5D_t547* (*) (List_1_t1003 *, const MethodInfo*))List_1_ToArray_m21642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
#define List_1_TrimExcess_m30247(__this, method) (( void (*) (List_1_t1003 *, const MethodInfo*))List_1_TrimExcess_m21644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
#define List_1_get_Capacity_m30248(__this, method) (( int32_t (*) (List_1_t1003 *, const MethodInfo*))List_1_get_Capacity_m21646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30249(__this, ___value, method) (( void (*) (List_1_t1003 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
#define List_1_get_Count_m30250(__this, method) (( int32_t (*) (List_1_t1003 *, const MethodInfo*))List_1_get_Count_m10340_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
#define List_1_get_Item_m30251(__this, ___index, method) (( RectTransform_t543 * (*) (List_1_t1003 *, int32_t, const MethodInfo*))List_1_get_Item_m10363_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#define List_1_set_Item_m30252(__this, ___index, ___value, method) (( void (*) (List_1_t1003 *, int32_t, RectTransform_t543 *, const MethodInfo*))List_1_set_Item_m10364_gshared)(__this, ___index, ___value, method)
