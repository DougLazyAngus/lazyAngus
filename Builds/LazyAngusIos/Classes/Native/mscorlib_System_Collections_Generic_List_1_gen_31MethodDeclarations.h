#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t1060;
// System.Object
struct Object_t;
// UnityEngine.UI.Text
struct Text_t500;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
struct IEnumerable_1_t8999;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t5834;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
struct IEnumerator_1_t8998;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
struct ICollection_1_t9000;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
struct ReadOnlyCollection_1_t5836;
// System.Predicate`1<UnityEngine.UI.Text>
struct Predicate_1_t5837;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Text>
struct IComparer_1_t9001;
// System.Comparison`1<UnityEngine.UI.Text>
struct Comparison_1_t5839;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5895(__this, method) (( void (*) (List_1_t1060 *, const MethodInfo*))List_1__ctor_m3710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28944(__this, ___collection, method) (( void (*) (List_1_t1060 *, Object_t*, const MethodInfo*))List_1__ctor_m7469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
#define List_1__ctor_m28945(__this, ___capacity, method) (( void (*) (List_1_t1060 *, int32_t, const MethodInfo*))List_1__ctor_m21567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(T[],System.Int32)
#define List_1__ctor_m28946(__this, ___data, ___size, method) (( void (*) (List_1_t1060 *, TextU5BU5D_t5834*, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
#define List_1__cctor_m28947(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28948(__this, method) (( Object_t* (*) (List_1_t1060 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28949(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1060 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28950(__this, method) (( Object_t * (*) (List_1_t1060 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28951(__this, ___item, method) (( int32_t (*) (List_1_t1060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28952(__this, ___item, method) (( bool (*) (List_1_t1060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28953(__this, ___item, method) (( int32_t (*) (List_1_t1060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28954(__this, ___index, ___item, method) (( void (*) (List_1_t1060 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28955(__this, ___item, method) (( void (*) (List_1_t1060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28956(__this, method) (( bool (*) (List_1_t1060 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28957(__this, method) (( bool (*) (List_1_t1060 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28958(__this, method) (( Object_t * (*) (List_1_t1060 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28959(__this, method) (( bool (*) (List_1_t1060 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28960(__this, method) (( bool (*) (List_1_t1060 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28961(__this, ___index, method) (( Object_t * (*) (List_1_t1060 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28962(__this, ___index, ___value, method) (( void (*) (List_1_t1060 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
#define List_1_Add_m28963(__this, ___item, method) (( void (*) (List_1_t1060 *, Text_t500 *, const MethodInfo*))List_1_Add_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28964(__this, ___newCount, method) (( void (*) (List_1_t1060 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28965(__this, ___idx, ___count, method) (( void (*) (List_1_t1060 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21591_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28966(__this, ___collection, method) (( void (*) (List_1_t1060 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28967(__this, ___enumerable, method) (( void (*) (List_1_t1060 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28968(__this, ___collection, method) (( void (*) (List_1_t1060 *, Object_t*, const MethodInfo*))List_1_AddRange_m21597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
#define List_1_AsReadOnly_m28969(__this, method) (( ReadOnlyCollection_1_t5836 * (*) (List_1_t1060 *, const MethodInfo*))List_1_AsReadOnly_m21599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
#define List_1_Clear_m28970(__this, method) (( void (*) (List_1_t1060 *, const MethodInfo*))List_1_Clear_m10351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
#define List_1_Contains_m28971(__this, ___item, method) (( bool (*) (List_1_t1060 *, Text_t500 *, const MethodInfo*))List_1_Contains_m10359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28972(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1060 *, TextU5BU5D_t5834*, int32_t, const MethodInfo*))List_1_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
#define List_1_Find_m28973(__this, ___match, method) (( Text_t500 * (*) (List_1_t1060 *, Predicate_1_t5837 *, const MethodInfo*))List_1_Find_m21604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28974(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5837 *, const MethodInfo*))List_1_CheckMatch_m21606_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28975(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1060 *, int32_t, int32_t, Predicate_1_t5837 *, const MethodInfo*))List_1_GetIndex_m21608_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
#define List_1_GetEnumerator_m28976(__this, method) (( Enumerator_t5838  (*) (List_1_t1060 *, const MethodInfo*))List_1_GetEnumerator_m3866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28977(__this, ___index, ___count, method) (( List_1_t1060 * (*) (List_1_t1060 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21610_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
#define List_1_IndexOf_m28978(__this, ___item, method) (( int32_t (*) (List_1_t1060 *, Text_t500 *, const MethodInfo*))List_1_IndexOf_m10363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28979(__this, ___start, ___delta, method) (( void (*) (List_1_t1060 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21613_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28980(__this, ___index, method) (( void (*) (List_1_t1060 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
#define List_1_Insert_m28981(__this, ___index, ___item, method) (( void (*) (List_1_t1060 *, int32_t, Text_t500 *, const MethodInfo*))List_1_Insert_m10364_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28982(__this, ___collection, method) (( void (*) (List_1_t1060 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21618_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28983(__this, ___index, ___collection, method) (( void (*) (List_1_t1060 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28984(__this, ___index, ___collection, method) (( void (*) (List_1_t1060 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28985(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1060 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21624_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
#define List_1_Remove_m28986(__this, ___item, method) (( bool (*) (List_1_t1060 *, Text_t500 *, const MethodInfo*))List_1_Remove_m10361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28987(__this, ___match, method) (( int32_t (*) (List_1_t1060 *, Predicate_1_t5837 *, const MethodInfo*))List_1_RemoveAll_m21627_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28988(__this, ___index, method) (( void (*) (List_1_t1060 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28989(__this, ___index, ___count, method) (( void (*) (List_1_t1060 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21630_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
#define List_1_Reverse_m28990(__this, method) (( void (*) (List_1_t1060 *, const MethodInfo*))List_1_Reverse_m21632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
#define List_1_Sort_m28991(__this, method) (( void (*) (List_1_t1060 *, const MethodInfo*))List_1_Sort_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28992(__this, ___comparer, method) (( void (*) (List_1_t1060 *, Object_t*, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28993(__this, ___comparison, method) (( void (*) (List_1_t1060 *, Comparison_1_t5839 *, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
#define List_1_ToArray_m28994(__this, method) (( TextU5BU5D_t5834* (*) (List_1_t1060 *, const MethodInfo*))List_1_ToArray_m21640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
#define List_1_TrimExcess_m28995(__this, method) (( void (*) (List_1_t1060 *, const MethodInfo*))List_1_TrimExcess_m21642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
#define List_1_get_Capacity_m28996(__this, method) (( int32_t (*) (List_1_t1060 *, const MethodInfo*))List_1_get_Capacity_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28997(__this, ___value, method) (( void (*) (List_1_t1060 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21646_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
#define List_1_get_Count_m28998(__this, method) (( int32_t (*) (List_1_t1060 *, const MethodInfo*))List_1_get_Count_m10342_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
#define List_1_get_Item_m28999(__this, ___index, method) (( Text_t500 * (*) (List_1_t1060 *, int32_t, const MethodInfo*))List_1_get_Item_m10365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#define List_1_set_Item_m29000(__this, ___index, ___value, method) (( void (*) (List_1_t1060 *, int32_t, Text_t500 *, const MethodInfo*))List_1_set_Item_m10366_gshared)(__this, ___index, ___value, method)
