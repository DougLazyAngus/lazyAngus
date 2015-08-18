#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct List_1_t6133;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerable_1_t9110;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t9111;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ICollection_1_t9112;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6135;
// System.Predicate`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Predicate_1_t6136;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IComparer_1_t9113;
// System.Comparison`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Comparison_1_t6138;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m32741(__this, method) (( void (*) (List_1_t6133 *, const MethodInfo*))List_1__ctor_m3710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32742(__this, ___collection, method) (( void (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1__ctor_m7469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m32743(__this, ___capacity, method) (( void (*) (List_1_t6133 *, int32_t, const MethodInfo*))List_1__ctor_m21567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m32744(__this, ___data, ___size, method) (( void (*) (List_1_t6133 *, IDictionary_2U5BU5D_t6132*, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m32745(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32746(__this, method) (( Object_t* (*) (List_1_t6133 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32747(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6133 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32748(__this, method) (( Object_t * (*) (List_1_t6133 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32749(__this, ___item, method) (( int32_t (*) (List_1_t6133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32750(__this, ___item, method) (( bool (*) (List_1_t6133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32751(__this, ___item, method) (( int32_t (*) (List_1_t6133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32752(__this, ___index, ___item, method) (( void (*) (List_1_t6133 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32753(__this, ___item, method) (( void (*) (List_1_t6133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32754(__this, method) (( bool (*) (List_1_t6133 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32755(__this, method) (( bool (*) (List_1_t6133 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32756(__this, method) (( Object_t * (*) (List_1_t6133 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32757(__this, method) (( bool (*) (List_1_t6133 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32758(__this, method) (( bool (*) (List_1_t6133 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32759(__this, ___index, method) (( Object_t * (*) (List_1_t6133 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32760(__this, ___index, ___value, method) (( void (*) (List_1_t6133 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m32761(__this, ___item, method) (( void (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_Add_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32762(__this, ___newCount, method) (( void (*) (List_1_t6133 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m32763(__this, ___idx, ___count, method) (( void (*) (List_1_t6133 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21591_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32764(__this, ___collection, method) (( void (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32765(__this, ___enumerable, method) (( void (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32766(__this, ___collection, method) (( void (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_AddRange_m21597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m32767(__this, method) (( ReadOnlyCollection_1_t6135 * (*) (List_1_t6133 *, const MethodInfo*))List_1_AsReadOnly_m21599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m32768(__this, method) (( void (*) (List_1_t6133 *, const MethodInfo*))List_1_Clear_m10351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m32769(__this, ___item, method) (( bool (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_Contains_m10359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32770(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6133 *, IDictionary_2U5BU5D_t6132*, int32_t, const MethodInfo*))List_1_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m32771(__this, ___match, method) (( Object_t* (*) (List_1_t6133 *, Predicate_1_t6136 *, const MethodInfo*))List_1_Find_m21604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32772(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6136 *, const MethodInfo*))List_1_CheckMatch_m21606_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32773(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6133 *, int32_t, int32_t, Predicate_1_t6136 *, const MethodInfo*))List_1_GetIndex_m21608_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m32774(__this, method) (( Enumerator_t6137  (*) (List_1_t6133 *, const MethodInfo*))List_1_GetEnumerator_m3866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m32775(__this, ___index, ___count, method) (( List_1_t6133 * (*) (List_1_t6133 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21610_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m32776(__this, ___item, method) (( int32_t (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_IndexOf_m10363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32777(__this, ___start, ___delta, method) (( void (*) (List_1_t6133 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21613_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32778(__this, ___index, method) (( void (*) (List_1_t6133 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m32779(__this, ___index, ___item, method) (( void (*) (List_1_t6133 *, int32_t, Object_t*, const MethodInfo*))List_1_Insert_m10364_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32780(__this, ___collection, method) (( void (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21618_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m32781(__this, ___index, ___collection, method) (( void (*) (List_1_t6133 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m32782(__this, ___index, ___collection, method) (( void (*) (List_1_t6133 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m32783(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6133 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21624_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m32784(__this, ___item, method) (( bool (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_Remove_m10361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m32785(__this, ___match, method) (( int32_t (*) (List_1_t6133 *, Predicate_1_t6136 *, const MethodInfo*))List_1_RemoveAll_m21627_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32786(__this, ___index, method) (( void (*) (List_1_t6133 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m32787(__this, ___index, ___count, method) (( void (*) (List_1_t6133 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21630_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m32788(__this, method) (( void (*) (List_1_t6133 *, const MethodInfo*))List_1_Reverse_m21632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m32789(__this, method) (( void (*) (List_1_t6133 *, const MethodInfo*))List_1_Sort_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32790(__this, ___comparer, method) (( void (*) (List_1_t6133 *, Object_t*, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32791(__this, ___comparison, method) (( void (*) (List_1_t6133 *, Comparison_1_t6138 *, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m32792(__this, method) (( IDictionary_2U5BU5D_t6132* (*) (List_1_t6133 *, const MethodInfo*))List_1_ToArray_m21640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m32793(__this, method) (( void (*) (List_1_t6133 *, const MethodInfo*))List_1_TrimExcess_m21642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m32794(__this, method) (( int32_t (*) (List_1_t6133 *, const MethodInfo*))List_1_get_Capacity_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32795(__this, ___value, method) (( void (*) (List_1_t6133 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21646_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m32796(__this, method) (( int32_t (*) (List_1_t6133 *, const MethodInfo*))List_1_get_Count_m10342_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m32797(__this, ___index, method) (( Object_t* (*) (List_1_t6133 *, int32_t, const MethodInfo*))List_1_get_Item_m10365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m32798(__this, ___index, ___value, method) (( void (*) (List_1_t6133 *, int32_t, Object_t*, const MethodInfo*))List_1_set_Item_m10366_gshared)(__this, ___index, ___value, method)
